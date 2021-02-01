#ifndef BIAS_ADDR_GEN_U
#define BIAS_ADDR_GEN_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(bias_addr_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> init;

  //bias
  sc_in< sc_uint<16> > out_feature_width;
  sc_in< sc_uint<16> > out_feature_height;
  sc_in< sc_uint<16> > out_feature_channel;
  sc_in< sc_uint<32> > bias_read_base_addr;

  sc_in<bool> bias_en;
  sc_in< sc_uint<1> > start_rising;
  sc_in<bool> data_en;
  sc_out< sc_uint<32> > bias_addr;
  sc_out<bool> bias_addr_valid;

  //counter
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

  sc_biguint<512> temp;
  sc_signal< sc_biguint<512> > concate_data;
  sc_signal< sc_int<16> > relu_data[32];
  sc_signal<bool> relu_valid[32];
  //sc_uint<16> pof = 16;
  sc_signal<bool> bias_addr_update;

  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/14 by hanji
      of_enable_1d.write(0);
      of_enable_2d.write(0);
      of_enable_3d.write(0);
      of_enable_4d.write(0);
      of_enable_5d.write(0);
      of_enable_6d.write(0);
    }
    else {
      of_enable_1d = of_enable.read();
      of_enable_2d = of_enable_1d.read();
      of_enable_3d = of_enable_2d.read();
      of_enable_4d = of_enable_3d.read();
      of_enable_5d = of_enable_4d.read();
      of_enable_6d = of_enable_5d.read();
    }
  }
  void _bias_addr_update()
  {
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      bias_addr_update.write(0);
    else if (bias_en.read() == 1 && start_rising.read() == 1)
      bias_addr_update = 1;
    else if (bias_en.read() == 1 && of_enable_6d.read() == 1)
      bias_addr_update = 1;
    else
      bias_addr_update = 0;
  }

  void _ox_ctrl()
  {
    ox_enable = (data_en.read() && bias_en.read());
    ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max.read() - 1);
  }
  void _ox_counter()
  {
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      ox_cnt.write(0);
    else if (init.read())
      ox_cnt = 0;
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
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      oy_cnt.write(0);
    else if (init.read())
      oy_cnt = 0;
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
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      of_cnt.write(0);
    else if (init.read())
      of_cnt = 0;
    else if (of_clear.read())
      of_cnt = 0;
    else if (of_enable.read())
      of_cnt = of_cnt.read() + 1;
  }
  void _set_max_num()
  {
    ox_cnt_max = out_feature_width;
    oy_cnt_max = out_feature_height;
    of_cnt_max = out_feature_channel.read(); 
  }
  void _bias_add()
  {
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      bias_addr.write(0);
    else if (bias_en.read() == 1)
      bias_addr = bias_read_base_addr.read() + (of_cnt.read() >> 2);
  }
  void _bias_addr_valid()
  {
    if (!rstn.read()) // Added on 2020/12/14 by hanji
      bias_addr_valid.write(0);
    else if (init.read())
      bias_addr_valid = 0;
    else if (bias_addr_update.read() == 1)
      bias_addr_valid = 1;
    else
      bias_addr_valid = 0;
  }

  SC_CTOR(bias_addr_gen) : clk("clk"),
                           rstn("rstn"),
                           init("init"),
                           out_feature_width("out_feature_width"),
                           out_feature_height("out_feature_height"),
                           out_feature_channel("out_feature_channel"),
                           bias_read_base_addr("bias_read_base_addr"),
                           bias_en("bias_en"),
                           start_rising("start_rising"),
                           data_en("data_en"),
                           bias_addr("bias_addr"),
                           bias_addr_valid("bias_addr_valid")

  {

    SC_METHOD(_set_max_num);
    dont_initialize();
    sensitive << clk.pos();
    SC_METHOD(_ox_ctrl);
    sensitive << data_en << ox_enable << ox_cnt;

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
    SC_METHOD(_bias_add);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
    SC_METHOD(_bias_addr_valid);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
    SC_METHOD(_bias_addr_update);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/14 by hanji
  };
};
#endif
