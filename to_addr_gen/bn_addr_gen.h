#ifndef BN_ADDR_GEN_U
#define BN_ADDR_GEN_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(bn_addr_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;

  //bias
  sc_in< sc_uint<16> > out_feature_width;
  sc_in< sc_uint<16> > out_feature_height;
  sc_in< sc_uint<16> > out_feature_channel;
  sc_in< sc_uint<32> > bn_read_base_addr;

  sc_in< sc_uint<8> > conv_type; // Added on 2021/01/15 by hanji
  sc_in< sc_uint<8> > bn_en;
  sc_in< sc_uint<1> > start_rising;
  sc_in<bool> data_en;
  sc_out< sc_uint<32> > bn_addr;
  sc_out<bool> bn_addr_valid;

  //counter
  sc_signal< sc_uint<1> > valid_cnt_enable;
  sc_signal< sc_uint<16> > valid_cnt;
  sc_signal< sc_uint<1> > valid_cnt_clear;
  sc_signal< sc_uint<16> > valid_cnt_max;

  sc_signal< sc_uint<1> > ox_enable;
  sc_signal< sc_uint<16> > ox_cnt;
  sc_signal< sc_uint<1> > ox_clear;
  sc_signal< sc_uint<16> > ox_cnt_max;

  sc_signal< sc_uint<1> > oy_enable;
  sc_signal< sc_uint<16> > oy_cnt;
  sc_signal< sc_uint<1> > oy_clear;
  sc_signal< sc_uint<16> > oy_cnt_max;

  sc_signal< sc_uint<1> > of_enable;
  sc_signal< sc_uint<16> > of_cnt;
  sc_signal< sc_uint<1> > of_clear;
  sc_signal< sc_uint<1> > of_enable_1d;
  sc_signal< sc_uint<1> > of_enable_2d;
  sc_signal< sc_uint<1> > of_enable_3d;
  sc_signal< sc_uint<1> > of_enable_4d;
  sc_signal< sc_uint<1> > of_enable_5d;
  sc_signal< sc_uint<1> > of_enable_6d;
  sc_signal< sc_uint<16> > of_cnt_max;
  sc_signal< sc_uint<1> > data_en_1d, data_en_2d, data_en_3d, data_en_4d, data_en_5d, data_en_6d, data_en_7d, data_en_8d, data_en_9d, data_en_10d, data_en_11d, data_en_12d; // Added on 2021/01/04 by hanji (bn_data 13 delay)

  sc_biguint<512> temp;
  sc_signal< sc_biguint<512> > concate_data;
  sc_signal< sc_int<16> > relu_data[32];
  sc_signal<bool> relu_valid[32];
  //sc_uint<16> pof = 16;
  sc_signal<bool> bn_addr_update;

  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/11 by hanji
      of_enable_1d.write(0);
      of_enable_2d.write(0);
      of_enable_3d.write(0);
      of_enable_4d.write(0);
      of_enable_5d.write(0);
      of_enable_6d.write(0);
      data_en_1d.write(0);
      data_en_2d.write(0);
      data_en_3d.write(0);
      data_en_4d.write(0);
      data_en_5d.write(0);
      data_en_6d.write(0);
      data_en_7d.write(0);
      data_en_8d.write(0);
      data_en_9d.write(0);
      data_en_10d.write(0);
      data_en_11d.write(0);
      data_en_12d.write(0);
    }
    else {
      of_enable_1d = of_enable.read();
      of_enable_2d = of_enable_1d.read();
      of_enable_3d = of_enable_2d.read();
      of_enable_4d = of_enable_3d.read();
      of_enable_5d = of_enable_4d.read();
      of_enable_6d = of_enable_5d.read();
      data_en_1d = data_en.read();
      data_en_2d = data_en_1d.read();
      data_en_3d = data_en_2d.read();
      data_en_4d = data_en_3d.read();
      data_en_5d = data_en_4d.read();
      data_en_6d = data_en_5d.read();
      data_en_7d = data_en_6d.read();
      data_en_8d = data_en_7d.read();
      data_en_9d = data_en_8d.read();
      data_en_10d = data_en_9d.read();
      data_en_11d = data_en_10d.read();
      data_en_12d = data_en_11d.read();
    }
  }
  void _bn_addr_update()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      bn_addr_update.write(0);
    else if (bn_en.read() == 1 && start_rising.read() == 1)
      bn_addr_update = 1;
    else if (bn_en.read() == 1 && of_enable_6d.read() == 1)
      bn_addr_update = 1;
    else
      bn_addr_update = 0;
  }
  void _valid_cnt_ctrl()
  {
   if (conv_type.read() == 0) {
    //valid_cnt_enable = (data_en.read());
    //valid_cnt_enable = (data_en_12d.read()); // Modified on 2021/01/04 by hanji
    valid_cnt_enable = (data_en_7d.read()); // Modified on 2021/01/05 by hanji
   }
   else {
    valid_cnt_enable = (data_en_9d.read()); // Added on 2021/01/15 by hanji
   }

    valid_cnt_clear = (valid_cnt_enable.read()) && (valid_cnt.read() == 3);
  }
  void _valid_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      valid_cnt.write(0);
    else if (valid_cnt_clear.read())
      valid_cnt = 0;
    else if (valid_cnt_enable.read())
      valid_cnt = valid_cnt.read() + 1;
  }

  void _ox_ctrl()
  {
    ox_enable = (valid_cnt_clear.read());
    ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max.read() - 1);
  }
  void _ox_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      ox_cnt.write(0);
    else if (ox_clear.read())
      ox_cnt = 0;
    else if (ox_enable.read())
      ox_cnt = ox_cnt.read() + 1;
  }
  void _oy_ctrl()
  {
    oy_enable = (ox_clear.read());
    oy_clear = (oy_enable.read()) && (oy_cnt.read() == oy_cnt_max.read() - 1);
  }
  void _oy_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      oy_cnt.write(0);
    else if (oy_clear.read())
      oy_cnt = 0;
    else if (oy_enable.read())
      oy_cnt = oy_cnt.read() + 1;
  }
  void _of_ctrl()
  {
    of_enable = (oy_clear.read());
    of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - 1);
  }
  void _of_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      of_cnt.write(0);
    else if (of_clear.read())
      of_cnt = 0;
    else if (of_enable.read())
      of_cnt = of_cnt.read() + 1;
  }
  void _set_max_num()
  {
    ox_cnt_max = out_feature_width;
    oy_cnt_max = out_feature_height;
    //of_cnt_max = out_feature_channel.read() / 32;
    of_cnt_max = out_feature_channel.read() >> 5; // Modified on 2021/01/26 by hanji
  }
  void _bn_add()
  {
    if (!rstn.read()) // Added on 2021/01/04 by hanji
      bn_addr.write(0);
    else if (bn_en.read() == 1)
      bn_addr = bn_read_base_addr.read() + (of_cnt.read() << 2) + valid_cnt.read();
  }
  void _bn_addr_valid()
  {
    if (!rstn.read()) // Added on 2021/01/04 by hanji
      bn_addr_valid.write(0);
    //if (data_en.read() == 1)
    //else if (data_en_12d.read() == 1) // Modified on 2021/01/04 by hanji
    //else if (data_en_7d.read() == 1) // Modified on 2021/01/05 by hanji
    else if (valid_cnt_enable.read() == 1) // Modified on 2021/01/15 by hanji
      bn_addr_valid = 1;
    else
      bn_addr_valid = 0;
  }

  SC_CTOR(bn_addr_gen) : clk("clk"),
                         rstn("rstn"),
                         out_feature_width("out_feature_width"),
                         out_feature_height("out_feature_height"),
                         out_feature_channel("out_feature_channel"),
                         bn_read_base_addr("bn_read_base_addr"),
                         bn_en("bn_en"),
                         start_rising("start_rising"),
                         data_en("data_en"),
                         bn_addr("bn_addr"),
                         bn_addr_valid("bn_addr_valid")

  {

    SC_METHOD(_set_max_num);
    dont_initialize();
    sensitive << clk.pos();

    SC_METHOD(_valid_cnt_ctrl);
    //sensitive << data_en << valid_cnt_enable << valid_cnt;
    //sensitive << data_en_12d << valid_cnt_enable << valid_cnt; // Modified on 2021/01/04 by hanji
    sensitive << data_en_7d << valid_cnt_enable << valid_cnt; // Modified on 2021/01/05 by hanji

    SC_METHOD(_valid_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji

    SC_METHOD(_ox_ctrl);
    sensitive << valid_cnt_clear << ox_enable << ox_cnt;

    SC_METHOD(_ox_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji

    SC_METHOD(_oy_ctrl);
    sensitive << ox_clear << ox_enable << oy_enable << oy_cnt;

    SC_METHOD(_oy_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji

    SC_METHOD(_of_ctrl);
    sensitive << oy_clear << oy_enable << of_enable << of_cnt;
    SC_METHOD(_of_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
    SC_METHOD(_bn_add);
    //sensitive << bn_en << bn_read_base_addr << of_cnt << valid_cnt;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/04 by hanji
    SC_METHOD(_bn_addr_valid);
    //sensitive << data_en;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/04 by hanji
    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
    SC_METHOD(_bn_addr_update);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
  };
};
#endif
