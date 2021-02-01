#ifndef ST_FEATURE_ADDR_GEN_H
#define ST_FEATURE_ADDR_GEN_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(st_feature_addr_gen)
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
  sc_in< sc_uint<8> > dilation_x;
  sc_in< sc_uint<8> > dilation_y;
  sc_in< sc_uint<16> > filter_width;
  sc_in< sc_uint<16> > filter_height;
  sc_in< sc_uint<16> > filter_channel;
  sc_in< sc_uint<8> > stride_x;
  sc_in< sc_uint<8> > stride_y;
  sc_in< sc_uint<8> > pad_top_size;
  sc_in< sc_uint<8> > pad_bottom_size;
  sc_in< sc_uint<8> > pad_left_size;
  sc_in< sc_uint<8> > pad_right_size;
  sc_in< sc_uint<32> > read_feature_base_addr;

  sc_out< sc_uint<32> > st_feature_addr;
  sc_out<bool> st_feature_addr_valid;
  sc_out<bool> st_feature_data_valid;
  sc_out<bool> cache_en;
  sc_out< sc_uint<16> > st_feature_data_sel;
  sc_out<bool> st_addr_if_start;

  //sc_uint<8> pof = 32;
  sc_uint<8> pof; // Modified on 2020/12/07 by hanji
 
  sc_signal<bool> st_feature_addr_valid_1d, st_feature_addr_valid_2d, st_feature_addr_valid_3d, st_feature_addr_valid_4d, st_feature_addr_valid_5d, st_feature_addr_valid_6d, st_feature_addr_valid_7d; // Added on 2021/01/20 by hanji
  sc_signal< sc_uint<16> > ix_cnt_max; sc_signal< sc_uint<16> > iy_cnt_max;
  sc_signal< sc_uint<16> > if_cnt_max;
  sc_signal< sc_uint<16> > ox_cnt_max;
  sc_signal< sc_uint<16> > oy_cnt_max;
  sc_signal< sc_uint<16> > of_cnt_max;

  //sc_uint<16> ix_start = 0;
  sc_uint<16> ix_start; // Modified on 2020/12/07 by hanji
  //sc_uint<16> iy_start = 0;
  sc_uint<16> iy_start; // Modified on 2020/12/07 by hanji
  //sc_uint<16> if_start = 0;
  sc_uint<16> if_start; // Modified on 2020/12/07 by hanji
  //sc_uint<16> ox_start = 0;
  sc_uint<16> ox_start; // Modified on 2020/12/07 by hanji
  //sc_uint<16> oy_start = 0;
  sc_uint<16> oy_start; // Modified on 2020/12/07 by hanji

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
  sc_signal< sc_uint<16> > if_cnt_1d;
  sc_signal< sc_uint<16> > if_cnt_2d;
  sc_signal< sc_uint<16> > if_cnt_3d, if_cnt_4d; // Added on 2021/01/18 by hanji
  sc_signal< sc_uint<16> > if_cnt_5d, if_cnt_6d, if_cnt_7d, if_cnt_8d, if_cnt_9d, if_cnt_10d, if_cnt_11d; // Added on 2021/01/20 by hanji
  sc_signal< sc_uint<1> > if_clear;
  sc_signal< sc_uint<1> > if_clear_1d;
  sc_signal< sc_uint<1> > if_clear_2d;
  sc_signal< sc_uint<1> > if_clear_3d, if_clear_4d; // Added on 2021/01/18 by hanji
  sc_signal< sc_uint<1> > if_clear_5d, if_clear_6d, if_clear_7d, if_clear_8d, if_clear_9d, if_clear_10d, if_clear_11d; // Added on 2021/01/20 by hanji
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

  sc_signal< sc_uint<1> > enable;
  sc_signal< sc_uint<1> > run;
  sc_signal< sc_uint<1> > run_1d;
  sc_signal< sc_uint<1> > run_2d;
  sc_signal< sc_uint<1> > run_3d, run_4d; // Added on 2021/01/18 by hanji
  sc_signal< sc_uint<1> > run_5d, run_6d, run_7d, run_8d, run_9d, run_10d; // Added on 2021/01/20 by hanji
  sc_signal< sc_uint<1> > finish;

  sc_signal< sc_uint<1> > is_zero;
  sc_signal< sc_uint<1> > is_zero_1d;
  sc_signal< sc_uint<1> > is_zero_2d, is_zero_3d; // Added on 2021/01/18 by hanji

  sc_signal< sc_uint<16> > org_ix_pos;
  sc_signal< sc_uint<16> > org_iy_pos;
  sc_signal< sc_uint<16> > org_of_pos;
  sc_signal< sc_uint<32> > sum_ix, sum_iy, sum_of; // Added on 2021/01/18 by hanji

  sc_signal< sc_uint<16> > tmp2;

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
    if (!rstn.read())  // Added on 2021/01/18 by hanji
      run = 0;
    else if (stop.read() == 1)
      run = 0;
    else
      run = enable.read();
  }

  void _set_max_num()
  {
    //kjcout << "debug "<< endl;
      ix_cnt_max = filter_width.read() * (dilation_x.read() + 1);
      iy_cnt_max = filter_height.read() * (dilation_y.read() + 1);
      if_cnt_max = filter_channel.read();
      ox_cnt_max = out_feature_width;
      oy_cnt_max = out_feature_height;
      of_cnt_max = out_feature_channel;
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
      ix_cnt = ix_cnt.read() + (1 + dilation_x.read());
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
      iy_cnt = iy_cnt.read() + (1 + dilation_y.read());
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
    ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max.read() - 1);
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
    oy_clear = (oy_enable.read()) && (oy_cnt.read() == oy_cnt_max.read() - 1);
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
    of_clear = (of_enable.read()) && (of_cnt.read() == (of_cnt_max.read() / 32) - 1);
  }
  void _of_counter()
  {
    if (!rstn.read()) { // Added on 2020/12/07 by hanji
      of_cnt.write(0);
    }
    else if (of_clear.read())
      of_cnt = 0;
    else if (of_enable.read())
      of_cnt = of_cnt.read() + 1;
  }
  void _ix_pos()
  {

   if (!rstn.read())  // Added on 2020/12/07 by hanji
      ix_pos.write(0);
   else
      ix_pos = ix_cnt.read() + (ox_cnt.read() * stride_x.read());
  }
  void _iy_pos()
  {
   if (!rstn.read())  // Added on 2020/12/07 by hanji
      iy_pos.write(0);
   else
      iy_pos = iy_cnt.read() + (oy_cnt.read() * stride_y.read());
  }
  void _if_pos()
  {
   if (!rstn.read())  // Added on 2020/12/07 by hanji
      if_pos.write(0);
   else
      if_pos = if_cnt.read() + (of_cnt.read());
  }
  void _of_pos()
  {
   if (!rstn.read())  // Added on 2020/12/07 by hanji
      of_pos.write(0);
   else
      of_pos = of_cnt.read();
  }

  void _org_pos()
  {
   if (!rstn.read()) { // Added on 2021/01/18 by hanji
      org_ix_pos.write(0);
      org_iy_pos.write(0);
      org_of_pos.write(0);
   }
   else {
      org_ix_pos = (is_zero.read()) ? 0 : (ix_pos.read() - pad_left_size.read());
      org_iy_pos = (is_zero.read()) ? 0 : (iy_pos.read() - pad_top_size.read());
      org_of_pos = of_pos.read() * feature_height.read();
   }
  }

  void _sum_pos() // Added on 2021/01/18 by hanji
  {
   if (!rstn.read()) {
      sum_ix.write(0);
      sum_iy.write(0);
      sum_of.write(0);
   }
   else {
      uint16_t empty = 0;
      sum_ix = (empty, org_ix_pos.read());
      sum_iy = org_iy_pos.read() * feature_width.read();
      sum_of = org_of_pos.read() * feature_width.read();
   }
  }

  void _st_feature_addr()
  {
   if (!rstn.read())  // Added on 2020/12/07 by hanji
      st_feature_addr.write(0);
   else
      st_feature_addr = sum_ix.read() + sum_iy.read() + sum_of.read() + read_feature_base_addr.read(); // Modified on 2021/01/18 by hanji
      //st_feature_addr = org_ix_pos.read() + (org_iy_pos.read() * feature_width.read()) + (feature_width.read() * feature_height.read() * of_pos.read()) + read_feature_base_addr.read();
  }

  void _is_zero()
  {
    if (ix_pos.read() < pad_left_size || ix_pos.read() > (feature_width.read() + pad_right_size.read()) - 1)
      is_zero = 1;
    else if (iy_pos.read() < pad_top_size || iy_pos.read() > (feature_height.read() + pad_bottom_size.read()) - 1)
      is_zero = 1;
    else
      is_zero = 0;
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
      is_zero_1d.write(0);
      is_zero_2d.write(0);
      is_zero_3d.write(0);
      if_cnt_1d.write(0);
      if_cnt_2d.write(0);
      if_cnt_3d.write(0);
      if_cnt_4d.write(0);
      if_cnt_5d.write(0);
      if_cnt_6d.write(0);
      if_cnt_7d.write(0);
      if_cnt_8d.write(0);
      if_cnt_9d.write(0);
      if_cnt_10d.write(0);
      if_clear_1d.write(0);
      if_clear_2d.write(0);
      if_clear_3d.write(0);
      if_clear_4d.write(0);
      if_clear_5d.write(0);
      if_clear_6d.write(0);
      if_clear_7d.write(0);
      if_clear_8d.write(0);
      if_clear_9d.write(0);
      if_clear_10d.write(0);
      if_clear_11d.write(0);
      st_feature_addr_valid_1d.write(0);
      st_feature_addr_valid_2d.write(0);
      st_feature_addr_valid_3d.write(0);
      st_feature_addr_valid_4d.write(0);
      st_feature_addr_valid_5d.write(0);
      st_feature_addr_valid_6d.write(0);
      st_feature_addr_valid_7d.write(0);
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
      is_zero_1d = is_zero.read();
      is_zero_2d = is_zero_1d.read();
      is_zero_3d = is_zero_2d.read();
      if_cnt_1d = if_cnt.read();
      if_cnt_2d = if_cnt_1d.read();
      if_cnt_3d = if_cnt_2d.read();
      if_cnt_4d = if_cnt_3d.read();
      if_cnt_5d = if_cnt_4d.read();
      if_cnt_6d = if_cnt_5d.read();
      if_cnt_7d = if_cnt_6d.read();
      if_cnt_8d = if_cnt_7d.read();
      if_cnt_9d = if_cnt_8d.read();
      if_cnt_10d = if_cnt_9d.read();
      if_clear_1d = if_clear.read();
      if_clear_2d = if_clear_1d.read();
      if_clear_3d = if_clear_2d.read();
      if_clear_4d = if_clear_3d.read();
      if_clear_5d = if_clear_4d.read();
      if_clear_6d = if_clear_5d.read();
      if_clear_7d = if_clear_6d.read();
      if_clear_8d = if_clear_7d.read();
      if_clear_9d = if_clear_8d.read();
      if_clear_10d = if_clear_9d.read();
      if_clear_11d = if_clear_10d.read();
      st_feature_addr_valid_1d = st_feature_addr_valid.read();
      st_feature_addr_valid_2d = st_feature_addr_valid_1d.read();
      st_feature_addr_valid_3d = st_feature_addr_valid_2d.read();
      st_feature_addr_valid_4d = st_feature_addr_valid_3d.read();
      st_feature_addr_valid_5d = st_feature_addr_valid_4d.read();
      st_feature_addr_valid_6d = st_feature_addr_valid_5d.read();
      st_feature_addr_valid_7d = st_feature_addr_valid_6d.read();
    }
  }
  void _st_feature_addr_valid()
  {
    if (!rstn.read())   // Added on 2021/01/18 by hanji
      st_feature_addr_valid.write(0);
    else
      //st_feature_addr_valid = run_2d.read() && (!is_zero.read());
      //st_feature_addr_valid = run_2d.read() && (!is_zero_1d.read()); // Modified on 2020/12/09 by hanji
      st_feature_addr_valid = run_3d.read() && (!is_zero_2d.read()); // Modified on 2020/12/09 by hanji
  }
  void _cache_en()
  {
    if (!rstn.read())   // Added on 2021/01/18 by hanji
      cache_en.write(0);
    else
      //cache_en = run_2d.read();
      //cache_en = run_3d.read(); // Modified on 2021/01/18 by hanji
      cache_en = run_10d.read(); // Modified on 2021/01/18 by hanji (sram latency)
  }

  void _st_feature_data_valid()
  {
    if (!rstn.read())   // Added on 2021/01/18 by hanji
      st_feature_data_valid.write(0);
    else
      //st_feature_data_valid = st_feature_addr_valid.read();
      //st_feature_data_valid = st_feature_addr_valid_7d.read(); // Modified on 2021/01/20 by hanji (sram latency)
      st_feature_data_valid = st_feature_addr_valid_6d.read(); // Modified on 2021/01/20 by hanji (sram latency)
  }
  void _st_feature_data_sel()
  {
    if (!rstn.read())   // Added on 2021/01/18 by hanji
      st_feature_data_sel.write(0);
    else 
      //st_feature_data_sel = if_cnt_2d.read();
      //st_feature_data_sel = if_cnt_3d.read(); // Modified on 2021/01/18 by hanji
      st_feature_data_sel = if_cnt_10d.read(); // Modified on 2021/01/20 by hanji (sram latency)
  }
  void _st_addr_if_start()
  {
    if (!rstn.read())   // Added on 2020/12/07 by hanji
      st_addr_if_start.write(0);
    else
      //st_addr_if_start = if_clear_2d.read();
      //st_addr_if_start = if_clear_4d.read(); // Modified on 2021/01/18 by hanji
      st_addr_if_start = if_clear_11d.read(); // Modified on 2021/01/20 by hanji (sram latency)
  }

  SC_CTOR(st_feature_addr_gen) : clk("clk"),
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
                                 dilation_x("dilation_x"),
                                 dilation_y("dilation_y"),
                                 filter_width("filter_width"),
                                 filter_height("filter_height"),
                                 filter_channel("filter_channel"),
                                 stride_x("stride_x"),
                                 stride_y("stride_y"),
                                 pad_top_size("pad_top_size"),
                                 pad_bottom_size("pad_bottom_size"),
                                 pad_left_size("pad_left_size"),
                                 pad_right_size("pad_right_size"),
                                 read_feature_base_addr("read_feature_base_addr"),
                                 st_feature_addr("st_feature_addr"),
                                 st_feature_addr_valid("st_feature_addr_valid"),
                                 st_feature_data_valid("st_feature_data_valid"),
                                 cache_en("cache_en"),
                                 st_feature_data_sel("st_feature_data_sel"),
                                 st_addr_if_start("st_addr_if_start")

  {
    //SC_METHOD(_start_1d);
    //sensitive << clk.pos();
    //SC_METHOD(_start_pos);
    //sensitive << clk.pos();

    SC_METHOD(_finish);
    sensitive << ix_clear << iy_clear << if_clear << ox_clear << oy_clear << of_clear;

    SC_METHOD(_enable);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji

    SC_METHOD(_run);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/18 by hanji
    //sensitive << enable << stop;

    SC_METHOD(_set_max_num);
    dont_initialize();
    sensitive << clk.pos();
    //sensitive << filter_width << dilation_x << dilation_y << filter_channel << feature_width << pad_left_size << pad_right_size << stride_x << feature_height << filter_height << pad_top_size << pad_bottom_size << stride_y << feature_channel;

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
    sensitive << oy_clear << oy_enable << of_enable << of_cnt;
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
    SC_METHOD(_is_zero);
    sensitive << ix_pos << iy_pos << pad_left_size << pad_right_size << pad_top_size << pad_bottom_size << feature_height << feature_width;
    SC_METHOD(_org_pos);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    //sensitive << ix_pos << iy_pos << if_pos << is_zero;
    SC_METHOD(_sum_pos); // Added on 2021/01/18 by hanji
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    SC_METHOD(_st_feature_addr);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
    SC_METHOD(_st_feature_addr_valid);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/18 by hanji
    //sensitive << run_2d << is_zero_1d;
    SC_METHOD(_st_feature_data_valid);
    //sensitive << st_feature_addr_valid_7d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/18 by hanji
    SC_METHOD(_cache_en);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/18 by hanji
    //sensitive << run_2d;
    SC_METHOD(_st_feature_data_sel);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/18 by hanji
    //sensitive << if_cnt_2d;
    SC_METHOD(_st_addr_if_start);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/07 by hanji
  };
};
#endif
