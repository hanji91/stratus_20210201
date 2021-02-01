#ifndef PW_FEATURE_ADDR_GEN_H
#define PW_FEATURE_ADDR_GEN_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(pw_feature_addr_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> stop;
  sc_in< sc_uint<8> > start;
  sc_in< sc_uint<1> > start_rising;
  sc_in< sc_uint<8> > systolic_en;
  sc_in< sc_uint<8> > systolic_depth;

  sc_in< sc_uint<16> > feature_width;
  sc_in< sc_uint<16> > feature_height;
  sc_in< sc_uint<16> > feature_channel;
  sc_in< sc_uint<16> > out_feature_width;
  sc_in< sc_uint<16> > out_feature_height;
  sc_in< sc_uint<16> > out_feature_channel;
  sc_in< sc_uint<16> > filter_width;
  sc_in< sc_uint<16> > filter_height;
  sc_in< sc_uint<16> > filter_channel;
  sc_in< sc_uint<16> > filter_number;
  sc_in< sc_uint<32> > read_feature_base_addr;

  sc_out< sc_uint<32> > pw_feature_addr;
  sc_out<bool> pw_feature_addr_valid;
  sc_out<bool> pw_feature_data_valid;
  sc_out<bool> pw_cache_en;
  sc_out< sc_uint<16> > pw_feature_data_sel;
  sc_out<bool> pw_addr_if_start;
  //sc_out< sc_uint<8> > systolic_sel_2d;
  //sc_out< sc_uint<8> > systolic_sel_11d; // Modified on 2021/01/21 by hanji
  sc_out< sc_uint<8> > systolic_sel_12d; // Modified on 2021/01/28 by hanji

  //sc_uint<8> pof = 32;
  //#ifdef SYSTOLIC_EN
  //sc_uint<8> systolic_depth = 7;
  //#else if
  //sc_uint<8> systolic_depth = 1;
  //#endif
 
  sc_signal< sc_uint<16> > cnt_max; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<16> > if_cnt_max;
  sc_signal< sc_uint<16> > ox_cnt_max;
  sc_signal< sc_uint<16> > oy_cnt_max;
  sc_signal< sc_uint<16> > of_cnt_max;

  sc_signal< sc_uint<32> > tmp_pw_feature_addr; // Added on 2021/01/21 by hanji
  sc_signal<bool> pw_feature_addr_valid_1d, pw_feature_addr_valid_2d, pw_feature_addr_valid_3d, pw_feature_addr_valid_4d, pw_feature_addr_valid_5d, pw_feature_addr_valid_6d, pw_feature_addr_valid_7d; // Added on 2021/01/21 by hanji

  //sc_uint<16> if_start = 0;
  //sc_uint<16> ox_start = 0;
  //sc_uint<16> oy_start = 0;

  sc_signal< sc_uint<1> > if_enable;
  sc_signal< sc_uint<16> > if_cnt;
  sc_signal< sc_uint<16> > if_cnt_1d;
  sc_signal< sc_uint<16> > if_cnt_2d;
  sc_signal< sc_uint<16> > if_cnt_3d, if_cnt_4d; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<16> > if_cnt_5d, if_cnt_6d, if_cnt_7d, if_cnt_8d, if_cnt_9d, if_cnt_10d, if_cnt_11d; // Added on 2021/01/21 by hanji

  sc_signal< sc_uint<1> > if_clear;
  sc_signal< sc_uint<1> > if_clear_1d;
  sc_signal< sc_uint<1> > if_clear_2d;
  sc_signal< sc_uint<1> > if_clear_3d, if_clear_4d; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<1> > if_clear_5d, if_clear_6d, if_clear_7d, if_clear_8d, if_clear_9d, if_clear_10d, if_clear_11d; // Added on 2021/01/21 by hanji

  sc_signal< sc_uint<16> > if_pos;
  sc_signal< sc_uint<16> > if_pos_up; // Added on 2021/01/21 by hanji

  sc_signal< sc_uint<1> > ox_enable;
  sc_signal< sc_uint<16> > ox_cnt;
  sc_signal< sc_uint<1> > ox_clear;
  sc_signal< sc_uint<16> > ox_pos;

  sc_signal< sc_uint<1> > oy_enable;
  sc_signal< sc_uint<16> > oy_cnt;
  sc_signal< sc_uint<1> > oy_clear;
  sc_signal< sc_uint<16> > oy_pos;

  sc_signal< sc_uint<1> > of_enable;
  sc_signal< sc_uint<16> > of_cnt;
  sc_signal< sc_uint<1> > of_clear;
  //sc_signal<sc_uint<1>> start_pos;
  //sc_signal<sc_uint<1>> start_1d;

  sc_signal< sc_uint<1> > enable;

  sc_signal< sc_uint<1> > run;
  sc_signal< sc_uint<1> > run_1d;
  sc_signal< sc_uint<1> > run_2d;
  sc_signal< sc_uint<1> > run_3d, run_4d; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<1> > run_5d, run_6d, run_7d, run_8d, run_9d, run_10d; // Added on 2021/01/21 by hanji
  sc_signal< sc_uint<32> > sum_if, sum_ox, sum_oy, sum_sys; // Added on 2021/01/21 by hanji

  sc_signal< sc_uint<1> > finish;

  //bool systolic_en = 1;
  sc_signal< sc_uint<1> > systolic_sel_enable;
  sc_signal< sc_uint<1> > systolic_sel_clear;
  sc_signal< sc_uint<8> > systolic_sel;
  sc_signal< sc_uint<8> > systolic_sel_1d;
  sc_signal< sc_uint<8> > systolic_sel_2d;
  sc_signal< sc_uint<8> > systolic_sel_3d;
  sc_signal< sc_uint<8> > systolic_sel_4d;
  sc_signal< sc_uint<8> > systolic_sel_5d;
  sc_signal< sc_uint<8> > systolic_sel_6d;
  sc_signal< sc_uint<8> > systolic_sel_7d;
  sc_signal< sc_uint<8> > systolic_sel_8d;
  sc_signal< sc_uint<8> > systolic_sel_9d;
  sc_signal< sc_uint<8> > systolic_sel_10d;
  sc_signal< sc_uint<8> > systolic_sel_11d;
  //sc_signal< sc_uint<8> > systolic_sel_12d;

  //void _start_1d()
  //{
  //  start_1d = start.read().range(0, 0);
  //}

  //void _start_pos()
  //{
  //  start_pos = start_1d.read() == 0 && start.read() == 1;
  //}
  void _finish()
  {
    finish = if_clear.read() && ox_clear.read() && oy_clear.read() && of_clear.read();
  }
  void _enable()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      enable.write(0);
    else if (start_rising.read() == 1 && filter_width.read() == 1 && filter_height.read() == 1)
      enable = 1;
    else if (finish.read() == 1)
      enable = 0;
  }
  void _run()
  {
    if (!rstn.read())  // Added on 2021/01/21 by hanji
      run = 0;
    else if (stop.read() == 1)
      run = 0;
    else
      run = enable.read();
  }

  void _set_max_num()
  {
    if_cnt_max = feature_channel.read();
    ox_cnt_max = out_feature_width;
    oy_cnt_max = out_feature_height;
    of_cnt_max = out_feature_channel;
    cnt_max = ox_cnt_max.read() * oy_cnt_max.read();
    //if_pos_up = if_pos.read() >> 5;
    if_pos_up = if_cnt.read() >> 5; // Modified on 2021/01/26 by hanji (Bug fixing)
  }

  void _if_ctrl()
  {
    if_enable = run.read();
    if_clear = (if_enable.read()) && (if_cnt.read() == if_cnt_max.read() - 1);
  }
  void _if_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      if_cnt.write(0);
    else if (if_clear.read())
      if_cnt = 0;
    else if (if_enable.read())
      if_cnt = if_cnt.read() + 1;
  }
  void _ox_ctrl()
  {
    ox_enable = (if_clear.read());
    ox_clear = (ox_enable.read()) && (ox_cnt.read() == ox_cnt_max.read() - systolic_depth.read());
  }
  void _ox_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      ox_cnt.write(0);
    else if (ox_clear.read())
      ox_cnt = 0;
    else if (ox_enable.read())
      ox_cnt = ox_cnt.read() + systolic_depth.read();
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
    //of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - pof);
    of_clear = (of_enable.read()) && (of_cnt.read() == of_cnt_max.read() - POF_VAL);
  }
  void _of_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      of_cnt.write(0);
    else if (of_clear.read())
      of_cnt = 0;
    else if (of_enable.read())
      //of_cnt = of_cnt.read() + pof;
      of_cnt = of_cnt.read() + POF_VAL;
  }
  void _if_pos()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      if_pos.write(0);
    else 
      if_pos = if_cnt.read();
  }
  void _ox_pos()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      ox_pos.write(0);
    else
      ox_pos = ox_cnt.read();
  }
  void _oy_pos()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      oy_pos.write(0);
    else
      oy_pos = oy_cnt.read();
  }

  void _sum_pos() // Added on 2021/01/18 by hanji
  {
   if (!rstn.read()) {
      sum_if.write(0);
      sum_ox.write(0);
      sum_oy.write(0);
      sum_sys.write(0);
   }
   else {
      sum_if = if_pos_up.read() * cnt_max.read();
      sum_ox = ox_pos.read();
      sum_oy = oy_pos.read() * ox_cnt_max.read();
      sum_sys = read_feature_base_addr.read() + systolic_sel_1d.read();
   }
  }


  void _tmp_pw_feature_addr()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      tmp_pw_feature_addr.write(0);
    else
      //tmp_pw_feature_addr = ox_pos.read() + (oy_pos.read() * ox_cnt_max.read()) + ((if_pos.read() / 32) * ox_cnt_max.read() * oy_cnt_max.read()) + read_feature_base_addr.read() + systolic_sel_1d.read();
      tmp_pw_feature_addr = sum_if.read() + sum_ox.read() + sum_oy.read() + sum_sys.read();
  }

  void _pw_feature_addr()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      pw_feature_addr.write(0);
    else
      pw_feature_addr = tmp_pw_feature_addr.read();
  }

  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/11 by hanji
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
      systolic_sel_1d.write(0);
      systolic_sel_2d.write(0);
      systolic_sel_3d.write(0);
      systolic_sel_4d.write(0);
      systolic_sel_5d.write(0);
      systolic_sel_6d.write(0);
      systolic_sel_7d.write(0);
      systolic_sel_8d.write(0);
      systolic_sel_9d.write(0);
      systolic_sel_10d.write(0);
      systolic_sel_11d.write(0);
      systolic_sel_12d.write(0);
      pw_feature_addr_valid_1d.write(0);
      pw_feature_addr_valid_2d.write(0);
      pw_feature_addr_valid_3d.write(0);
      pw_feature_addr_valid_4d.write(0);
      pw_feature_addr_valid_5d.write(0);
      pw_feature_addr_valid_6d.write(0);
      pw_feature_addr_valid_7d.write(0);
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

      systolic_sel_1d = systolic_sel.read();
      systolic_sel_2d = systolic_sel_1d.read();
      systolic_sel_3d = systolic_sel_2d.read();
      systolic_sel_4d = systolic_sel_3d.read();
      systolic_sel_5d = systolic_sel_4d.read();
      systolic_sel_6d = systolic_sel_5d.read();
      systolic_sel_7d = systolic_sel_6d.read();
      systolic_sel_8d = systolic_sel_7d.read();
      systolic_sel_9d = systolic_sel_8d.read();
      systolic_sel_10d = systolic_sel_9d.read();
      systolic_sel_11d = systolic_sel_10d.read();
      systolic_sel_12d = systolic_sel_11d.read();
      pw_feature_addr_valid_1d = pw_feature_addr_valid.read();
      pw_feature_addr_valid_2d = pw_feature_addr_valid_1d.read();
      pw_feature_addr_valid_3d = pw_feature_addr_valid_2d.read();
      pw_feature_addr_valid_4d = pw_feature_addr_valid_3d.read();
      pw_feature_addr_valid_5d = pw_feature_addr_valid_4d.read();
      pw_feature_addr_valid_6d = pw_feature_addr_valid_5d.read();
      pw_feature_addr_valid_7d = pw_feature_addr_valid_6d.read();

    }
  }
  void _pw_feature_addr_valid()
  {
    if (!rstn.read())   // Added on 2021/01/21 by hanji
      pw_feature_addr_valid.write(0);
    else
      //pw_feature_addr_valid = run_2d.read();
      pw_feature_addr_valid = run_3d.read(); // Modified on 2021/01/21 by hanji
  }
  void _cache_en()
  {
    if (!rstn.read())   // Added on 2021/01/21 by hanji
      pw_cache_en.write(0);
    else
      //pw_cache_en = run_2d.read();
      pw_cache_en = run_10d.read(); // Modified on 2021/01/21 by hanji
  }

  void _pw_feature_data_valid()
  {
    if (!rstn.read())   // Added on 2021/01/21 by hanji
      pw_feature_data_valid.write(0);
    else
      //pw_feature_data_valid = pw_feature_addr_valid.read();
      pw_feature_data_valid = pw_feature_addr_valid_6d.read(); // Modified on 2021/01/21 by hanji
  }
  void _pw_feature_data_sel()
  {
    if (!rstn.read())   // Added on 2021/01/21 by hanji
      pw_feature_data_sel.write(0);
    else
      //pw_feature_data_sel = if_cnt_2d.read() % 32;
      pw_feature_data_sel = if_cnt_10d.read() % 32; // Modified on 2021/01/21 by hanji
  }
  void _addr_if_start()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      pw_addr_if_start.write(0);
    else
      //pw_addr_if_start = if_clear_2d.read();
      pw_addr_if_start = if_clear_11d.read(); // Modified on 2021/01/21 by hanji
  }
  void _systolic_sel_ctrl()
  {
    systolic_sel_enable = systolic_en.read() && run.read() && (systolic_sel.read() < systolic_depth.read());
    systolic_sel_clear = (if_enable.read()) && (if_cnt.read().range(4, 0) == 31); // Hit at (32n-1)
  }
  void _systolic_sel_counter()
  {
    if (!rstn.read()) // Added on 2020/12/11 by hanji
      systolic_sel.write(0);
    else if (systolic_sel_clear.read())
      systolic_sel = 0;
    else if (systolic_sel_enable.read())
      systolic_sel = systolic_sel.read() + 1;
  }

  SC_CTOR(pw_feature_addr_gen) : clk("clk"),
                                 rstn("rstn"),
                                 stop("stop"),
                                 start("start"),
                                 start_rising("start_rising"),
                                 systolic_en("systolic_en"),
                                 systolic_depth("systolic_depth"),
                                 feature_width("feature_width"),
                                 feature_height("feature_height"),
                                 feature_channel("feature_channel"),
                                 out_feature_width("out_feature_width"),
                                 out_feature_height("out_feature_height"),
                                 out_feature_channel("out_feature_channel"),
                                 filter_width("filter_width"),
                                 filter_height("filter_height"),
                                 filter_channel("filter_channel"),
                                 filter_number("filter_number"),
                                 read_feature_base_addr("read_feature_base_addr"),
                                 pw_feature_addr("pw_feature_addr"),
                                 pw_feature_addr_valid("pw_feature_addr_valid"),
                                 pw_feature_data_valid("pw_feature_data_valid"),
                                 pw_cache_en("pw_cache_en"),
                                 pw_feature_data_sel("pw_feature_data_sel"),
                                 pw_addr_if_start("pw_addr_if_start"),
                                 systolic_sel_2d("systolic_sel_2d")

  {
    //SC_METHOD(_start_1d);
    //sensitive << clk.pos();
    //SC_METHOD(_start_pos);
    //sensitive << clk.pos();

    SC_METHOD(_finish);
    sensitive << if_clear << ox_clear << oy_clear << of_clear;

    SC_METHOD(_enable);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_run);
    //sensitive << stop << enable;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji

    SC_METHOD(_set_max_num);
    dont_initialize();
    sensitive << clk.pos();

    SC_METHOD(_if_ctrl);
    sensitive << if_enable << if_cnt << run;

    SC_METHOD(_if_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_ox_ctrl);
    sensitive << if_clear << if_enable << ox_enable << ox_cnt;

    SC_METHOD(_ox_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_oy_ctrl);
    sensitive << ox_clear << ox_enable << oy_enable << oy_cnt;

    SC_METHOD(_oy_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_of_ctrl);
    sensitive << oy_clear << oy_enable << of_enable << of_cnt;
    SC_METHOD(_of_counter);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_if_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
    SC_METHOD(_ox_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
    SC_METHOD(_oy_pos);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji

    SC_METHOD(_sum_pos); // Added on 2021/01/21 by hanji
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_tmp_pw_feature_addr); // Added on 2021/01/21 by hanji
    sensitive << clk.pos() << rstn.neg(); 
    SC_METHOD(_pw_feature_addr);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
    SC_METHOD(_pw_feature_addr_valid);
    //sensitive << run_2d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji
    SC_METHOD(_pw_feature_data_valid);
    //sensitive << pw_feature_addr_valid;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji
    SC_METHOD(_cache_en);
    //sensitive << run_2d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji
    SC_METHOD(_pw_feature_data_sel);
    //sensitive << if_cnt_2d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/21 by hanji
    SC_METHOD(_addr_if_start);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
    SC_METHOD(_systolic_sel_ctrl);
    sensitive << run << if_enable << if_cnt << systolic_sel;
    SC_METHOD(_systolic_sel_counter)
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/11 by hanji
  };
};
#endif
