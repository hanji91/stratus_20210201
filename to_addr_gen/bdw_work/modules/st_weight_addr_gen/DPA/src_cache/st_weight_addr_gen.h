#ifndef ST_WEIGHT_ADDR_GEN_H
#define ST_WEIGHT_ADDR_GEN_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(st_weight_addr_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> stop;
  sc_in< sc_uint<8> > start;
  sc_in< sc_uint<1> > start_rising;

  sc_in< sc_uint<16> > feature_width;
  sc_in< sc_uint<16> > feature_height;
  sc_in< sc_uint<16> > feature_channel;
  sc_in< sc_uint<16> > out_feature_width;
  sc_in< sc_uint<16> > out_feature_height;
  sc_in< sc_uint<16> > out_feature_channel;
  sc_in< sc_uint<16> > filter_width;
  sc_in< sc_uint<16> > filter_height;
  sc_in< sc_uint<16> > filter_channel;
  sc_in< sc_uint<8> > stride_x;
  sc_in< sc_uint<8> > stride_y;
  sc_in< sc_uint<8> > pad_top_size;
  sc_in< sc_uint<8> > pad_bottom_size;
  sc_in< sc_uint<8> > pad_left_size;
  sc_in< sc_uint<8> > pad_right_size;
  sc_in< sc_uint<32> > read_weight_base_addr;

  sc_out< sc_uint<32> > st_weight_addr;
  sc_out<bool> st_weight_addr_valid;
  sc_out<bool> st_weight_data_valid;
  sc_out<bool> cache_en;
  /*
  sc_uint<8> filter_width = 3;
  sc_uint<8> filter_height = 3;
  sc_uint<8> filter_channel = 3;
  sc_uint<8> stride_x = 2;
  sc_uint<8> stride_y = 2;

  sc_uint<8> pad_top_size = 1;
  sc_uint<8> pad_bottom_size = 1;
  sc_uint<8> pad_left_size = 1;
  sc_uint<8> pad_right_size = 1;
  */

  //sc_uint<8> pof = 32;
  //sc_uint<8> pof; // Modified on 2020/12/07 by hanji

  sc_signal<bool> st_weight_addr_valid_1d, st_weight_addr_valid_2d, st_weight_addr_valid_3d, st_weight_addr_valid_4d, st_weight_addr_valid_5d, st_weight_addr_valid_6d, st_weight_addr_valid_7d; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<32> > tmp_st_weight_addr;
  sc_signal< sc_uint<16> > ix_cnt_max;
  sc_signal< sc_uint<16> > iy_cnt_max;
  sc_signal< sc_uint<16> > if_cnt_max;
  sc_signal< sc_uint<16> > ox_cnt_max;
  sc_signal< sc_uint<16> > ox_cnt_max2; // Added on 2021/01/19 by hanji
  sc_signal< sc_uint<16> > oy_cnt_max;
  sc_signal< sc_uint<16> > oy_cnt_max2;
  sc_signal< sc_uint<16> > of_cnt_max;
  sc_signal< sc_uint<16> > cnt_max; // Added on 2021/01/19 by hanji

  sc_signal< sc_uint<1> > ix_enable;
  sc_signal< sc_uint<16> > ix_cnt;
  sc_signal< sc_uint<1> > ix_clear;
  sc_signal< sc_uint<16> > ix_pos;

  sc_signal< sc_uint<1> > iy_enable;
  sc_signal< sc_uint<16> > iy_cnt;
  sc_signal< sc_uint<1> > iy_clear;
  sc_signal< sc_uint<16> > iy_pos;

  sc_signal< sc_uint<1> > if_enable;
  sc_signal< sc_uint<16> > if_cnt;
  sc_signal< sc_uint<1> > if_clear;
  sc_signal< sc_uint<16> > if_pos;

  sc_signal< sc_uint<1> > ox_enable;
  sc_signal< sc_uint<16> > ox_cnt;
  sc_signal< sc_uint<1> > ox_clear;

  sc_signal< sc_uint<1> > oy_enable;
  sc_signal< sc_uint<16> > oy_cnt;
  sc_signal< sc_uint<1> > oy_clear;

  sc_signal< sc_uint<1> > of_enable;
  sc_signal< sc_uint<16> > of_cnt;
  sc_signal< sc_uint<1> > of_clear;
  sc_signal< sc_uint<16> > of_pos;
  sc_signal< sc_uint<32> > org_ix_pos, org_iy_pos, org_if_pos, org_of_pos; // Added on 2021/01/19 by hanji

  sc_signal< sc_uint<1> > start_1d;

  sc_signal< sc_uint<1> > run;
  sc_signal< sc_uint<1> > run_1d;
  sc_signal< sc_uint<1> > run_2d;
  sc_signal< sc_uint<1> > run_3d, run_4d; // Added on 2021/01/19 by hanji
  sc_signal< sc_uint<1> > run_5d, run_6d, run_7d, run_8d, run_9d, run_10d; // Added on 2021/01/20 by hanji
  sc_signal< sc_uint<1> > finish;

  sc_signal< sc_uint<1> > enable;

  void _finish()
  {
    finish = ix_clear.read() && iy_clear.read() && if_clear.read() && ox_clear.read() && oy_clear.read() && of_clear.read();
  }
  void _enable()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      enable.write(0);
    }
    else if (start_rising.read() == 1 && (filter_height.read() != 1 && filter_width.read() != 1))
      enable = 1;
    else if (finish.read() == 1)
      enable = 0;
  }

  void _run()
  {
    if (!rstn.read())  // Added on 2021/01/19 by hanji
      run = 0;
    else if (stop.read() == 1)
      run = 0;
    else
      run = enable.read();
  }

  void _ix_ctrl()
  {
    ix_enable = run.read();
    ix_clear = (ix_enable.read() && ix_cnt.read() == ix_cnt_max.read() - 1);
  }
  void _ix_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      ix_cnt.write(0);
    }
    else if (ix_clear.read())
      ix_cnt = 0;
    else if (ix_enable.read())
      ix_cnt = ix_cnt.read() + 1;
  }
  void _iy_ctrl()
  {
    iy_enable = (ix_clear.read());
    iy_clear = (iy_enable.read()) && (iy_cnt.read() == iy_cnt_max.read() - 1);
  }
  void _iy_counter()
  {

    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      iy_cnt.write(0);
    }
    else if (iy_clear.read())
      iy_cnt = 0;
    else if (iy_enable.read())
      iy_cnt = iy_cnt.read() + 1;
  }
  void _if_ctrl()
  {
    if_enable = (iy_clear.read());
    if_clear = (if_enable.read()) && (if_cnt.read() == if_cnt_max.read() - 1);
  }
  void _if_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      if_cnt.write(0);
    }
    else if (if_clear.read())
      if_cnt = 0;
    else if (if_enable.read())
      if_cnt = if_cnt.read() + 1;
  }
  void _ox_ctrl()
  {
    ox_enable = (if_clear.read());
    //ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max.read() - 1);
    ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max2.read() - 1); // Modified on 2021/01/19 by hanji
  }
  void _ox_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      ox_cnt.write(0);
    }
    else if (ox_clear.read())
      ox_cnt = 0;
    else if (ox_enable.read())
      ox_cnt = ox_cnt.read() + 1;
  }
  void _oy_ctrl()
  {
    oy_enable = (ox_clear.read());
    //oy_clear = (oy_enable.read()) && (oy_cnt.read() == oy_cnt_max.read() - 1);
    oy_clear = (oy_enable.read()) && (oy_cnt.read() == oy_cnt_max2.read() - 1); // Modified on 2021/01/19 by hanji
  }
  void _oy_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      oy_cnt.write(0);
    }
    else if (oy_clear.read())
      oy_cnt = 0;
    else if (oy_enable.read())
      oy_cnt = oy_cnt.read() + 1;
  }
  void _of_ctrl()
  {
    of_enable = (oy_clear.read());
  }
  void _of_ctrl2()
  {
    //pof = 32; // Added on 2020/12/07 by hanji
    //of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - pof); // RTL Generation OK, but difference(of_cnt) 
    of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - POF_VAL); // RTL Generation OK, and equivalent
    //of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - 32); // RTL Generation OK, and equivalent
  }

  void _of_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      of_cnt.write(0);
    }
    else if (of_clear.read())
      of_cnt = 0;
    else if (of_enable.read())
      //pof = 32; // Added on 2020/12/07 by hanji
      //of_cnt = of_cnt.read() + pof; }
      of_cnt = of_cnt.read() + POF_VAL; }
  void _ix_pos()
  {
    if (!rstn.read())  // Added on 2020/12/07 by hanji
      ix_pos.write(0);
    else
      ix_pos = ix_cnt.read();
  }
  void _iy_pos()
  {
    if (!rstn.read())  // Added on 2020/12/07 by hanji
      iy_pos.write(0);
    else
      iy_pos = iy_cnt.read();
  }
  void _if_pos()
  {
    if (!rstn.read())  // Added on 2020/12/07 by hanji
      if_pos.write(0);
    else
      if_pos = if_cnt.read();
  }
  void _of_pos()
  {
    if (!rstn.read())  // Added on 2020/12/07 by hanji
      of_pos.write(0);
    else
      //of_pos = of_cnt.read()/32;
      of_pos = of_cnt.read() >> 5; // Modified on 2021/01/19 by hanji
  }

  void _org_pos() // Added on 2021/01/19 by hanji
  {
   if (!rstn.read()) { 
      org_ix_pos.write(0);
      org_iy_pos.write(0);
      org_if_pos.write(0);
      org_of_pos.write(0);
   }
   else {
      org_ix_pos = ix_pos.read() + read_weight_base_addr.read();
      org_iy_pos = iy_pos.read() * filter_width.read();
      org_if_pos = if_pos.read() * cnt_max.read();
      org_of_pos = of_pos.read() * cnt_max.read();
   }
  }


  void _tmp_st_weight_addr()
  {
    if (!rstn.read())  // Added on 2020/12/07 by hanji
      tmp_st_weight_addr.write(0);
    else
      //st_weight_addr = ix_pos.read() + (iy_pos.read() * filter_width.read()) + (if_pos.read() * filter_width.read() * filter_height.read()) + (of_pos.read() * filter_width.read() * filter_height.read()) + read_weight_base_addr.read();
      tmp_st_weight_addr = org_ix_pos.read() + org_iy_pos.read() + org_if_pos.read() + org_of_pos.read(); // Modified on 2021/01/19 by hanji
  }

  void _st_weight_addr()
  {
    if (!rstn.read())  // Added on 2021/01/19 by hanji
      st_weight_addr.write(0);
    else
      st_weight_addr = tmp_st_weight_addr.read(); 
  }

  void _delay()
  {
    if (!rstn.read()) {  // Added on 2020/12/07 by hanji
      run_1d.write(0);
      run_2d.write(0);
      run_3d.write(0);
      run_4d.write(0);
      run_5d.write(0);
      run_6d.write(0);
      run_7d.write(0);
      run_8d.write(0);
      run_9d.write(0);
      run_10d.write(0);
      st_weight_addr_valid_1d.write(0);
      st_weight_addr_valid_2d.write(0);
      st_weight_addr_valid_3d.write(0);
      st_weight_addr_valid_4d.write(0);
      st_weight_addr_valid_5d.write(0);
      st_weight_addr_valid_6d.write(0);
      st_weight_addr_valid_7d.write(0);
    }
    else {
      run_1d = run.read();
      run_2d = run_1d.read();
      run_3d = run_2d.read();
      run_4d = run_3d.read();
      run_5d = run_4d.read();
      run_6d = run_5d.read();
      run_7d = run_6d.read();
      run_8d = run_7d.read();
      run_9d = run_8d.read();
      run_10d = run_9d.read();
      st_weight_addr_valid_1d = st_weight_addr_valid.read();
      st_weight_addr_valid_2d = st_weight_addr_valid_1d.read();
      st_weight_addr_valid_3d = st_weight_addr_valid_2d.read();
      st_weight_addr_valid_4d = st_weight_addr_valid_3d.read();
      st_weight_addr_valid_5d = st_weight_addr_valid_4d.read();
      st_weight_addr_valid_6d = st_weight_addr_valid_5d.read();
      st_weight_addr_valid_7d = st_weight_addr_valid_6d.read();
    }
  }
  void _st_weight_addr_valid()
  {
    if (!rstn.read())   // Added on 2021/01/19 by hanji
      st_weight_addr_valid.write(0);
    else
      //st_weight_addr_valid = run_2d.read();
      st_weight_addr_valid = run_3d.read(); // Modified on 2021/01/19 by hanji
  }
  void _cache_en()
  {
    if (!rstn.read())   // Added on 2021/01/19 by hanji
      cache_en.write(0);
    else
      //cache_en = run_2d.read();
      //cache_en = run_3d.read(); // Modified on 2021/01/19 by hanji
      cache_en = run_10d.read(); // Modified on 2021/01/19 by hanji (sram latency)
  }

  void _st_weight_data_valid()
  {
    if (!rstn.read())   // Added on 2021/01/19 by hanji
      st_weight_data_valid.write(0);
    else
      //st_weight_data_valid = st_weight_addr_valid.read();
      //st_weight_data_valid = st_weight_addr_valid_7d.read(); // Modified on 2021/01/20 by hanji (sram latency)
      st_weight_data_valid = st_weight_addr_valid_6d.read(); // Modified on 2021/01/21 by hanji (sram latency) <= Registering
  }

  void _set_max_num()
  {
      ix_cnt_max = filter_width;
      iy_cnt_max = filter_height;
        if_cnt_max = filter_channel;
      //ox_cnt_max = ((feature_width.read() - filter_width.read() + (pad_left_size.read() + pad_right_size.read())) / stride_x.read()) + 1;
      ox_cnt_max = feature_width.read() - filter_width.read() + (pad_left_size.read() + pad_right_size.read()); // Modified on 2021/01/19 by hanji
      //oy_cnt_max = ((feature_height.read() - filter_height.read() + (pad_top_size.read() + pad_bottom_size.read())) / stride_y.read()) + 1;
      oy_cnt_max = feature_height.read() - filter_height.read() + (pad_top_size.read() + pad_bottom_size.read());
      //of_cnt_max = feature_.read();
      of_cnt_max = out_feature_channel.read();
      cnt_max = filter_width.read() * filter_height.read();
  }

  void _cnt_max2() // Added on 2021/01/19 by hanji
  {
    if (!rstn.read()) {  
      ox_cnt_max2.write(0);
      oy_cnt_max2.write(0);
    }
    else {
     if (stride_x.read() == 1) 
      ox_cnt_max2 = ox_cnt_max.read() + 1;
     else if (stride_x.read() == 2) 
      ox_cnt_max2 = (ox_cnt_max.read() >> 1) + 1;
     else if (stride_x.read() == 4) 
      ox_cnt_max2 = (ox_cnt_max.read() >> 2) + 1;
     else
      ox_cnt_max2 = ox_cnt_max.read() + 1;

     if (stride_y.read() == 1) 
      oy_cnt_max2 = oy_cnt_max.read() + 1;
     else if (stride_y.read() == 2) 
      oy_cnt_max2 = (oy_cnt_max.read() >> 1) + 1;
     else if (stride_y.read() == 4) 
      oy_cnt_max2 = (oy_cnt_max.read() >> 2) + 1;
     else
      oy_cnt_max2 = oy_cnt_max.read() + 1;
    }
  }

  SC_CTOR(st_weight_addr_gen) : clk("clk"),
                                rstn("rstn"),
                                stop("stop"),
                                start("start"),
                                start_rising("start_rising"),
                                feature_width("feature_width"),
                                feature_height("feature_height"),
                                feature_channel("feature_channel"),
                                out_feature_width("out_feature_width"),
                                out_feature_height("out_feature_height"),
                                out_feature_channel("out_feature_channel"),
                                filter_width("filter_width"),
                                filter_height("filter_height"),
                                filter_channel("filter_channel"),
                                stride_x("stride_x"),
                                stride_y("stride_y"),
                                pad_top_size("pad_top_size"),
                                pad_bottom_size("pad_bottom_size"),
                                pad_left_size("pad_left_size"),
                                pad_right_size("pad_right_size"),
                                read_weight_base_addr("read_weight_base_addr"),
                                st_weight_addr("st_weight_addr"),
                                st_weight_addr_valid("st_weight_addr_valid"),
                                st_weight_data_valid("st_weight_data_valid"),
                                cache_en("cache_en")

  {

    SC_METHOD(_finish);
    sensitive << ix_clear << iy_clear << if_clear << ox_clear << oy_clear << of_clear;

    SC_METHOD(_enable);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_run);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    //sensitive << enable << stop;

    SC_METHOD(_ix_ctrl);
    sensitive << run << ix_cnt << ix_enable;

    SC_METHOD(_ix_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_iy_ctrl);
    sensitive << ix_clear << ix_enable << iy_enable << iy_cnt;

    SC_METHOD(_iy_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_if_ctrl);
    sensitive << iy_clear << iy_enable << if_enable << if_cnt;

    SC_METHOD(_if_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_ox_ctrl);
    sensitive << if_clear << if_enable << ox_enable << ox_cnt;

    SC_METHOD(_ox_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_oy_ctrl);
    sensitive << ox_clear << ox_enable << oy_enable << oy_cnt;

    SC_METHOD(_oy_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_of_ctrl);
    sensitive << oy_clear; 
    SC_METHOD(_of_ctrl2);
    sensitive << oy_enable << of_enable << of_cnt;

    SC_METHOD(_of_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_ix_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_iy_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_if_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_of_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_org_pos); // Added on 2021/01/19 by hanji
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_tmp_st_weight_addr);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    SC_METHOD(_st_weight_addr);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    SC_METHOD(_st_weight_addr_valid);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << run_2d;
    SC_METHOD(_st_weight_data_valid);
    //sensitive << st_weight_addr_valid;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji
    SC_METHOD(_cache_en);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << run_2d;
    SC_METHOD(_set_max_num);
    dont_initialize();
    sensitive << clk.pos();
    SC_METHOD(_cnt_max2); // Added on 2021/01/19 by hanji
    sensitive << clk.pos() << rstn.neg();
  };
};
#endif
