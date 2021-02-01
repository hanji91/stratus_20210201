
#ifndef FINISH_GEN_H
#define FINISH_GEN_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(finish_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in< sc_uint<1> > enable;
  sc_in< sc_uint<1> > clear;
  sc_in<bool> cnt_enable;
  sc_in< sc_uint<32> > total_num;

  sc_out<bool> finish;

  sc_signal< sc_uint<32> > cnt;
  sc_signal<bool> last_en;
  sc_signal< sc_uint<8> > internal_cnt;

  void _gen_last_en()
  {
    if(!rstn.read())  // Added on 2021/01/12 by hanji
      last_en.write(0);
    else if(enable.read() == 1){
     if (cnt.read() == total_num.read())
      last_en = 1;
     else
      last_en = 0;
    }
    else {
      last_en = 0;
    }
  }
  void _up_count()
  {
    if(!rstn.read())  // Added on 2021/01/12 by hanji
      cnt.write(0);
    else if (clear.read() || last_en.read())
      cnt = 0;
    else if (cnt_enable)
      cnt = cnt.read() + 1;
  }
  void _internal_cnt() // Added on 2021/01/12 by hanji
  {
    if(!rstn.read()) 
      internal_cnt.write(0);
    else if (finish.read())
      internal_cnt = internal_cnt.read() + 1;
    else
      internal_cnt = 0;
  }
  void _finish() 
  {
    if(!rstn.read()) // Added on 2021/01/12 by hanji
      finish.write(0);
    else if (clear.read())
      finish.write(0);
    else if (internal_cnt.read()==20)
      finish.write(0);
    else if (last_en.read()) 
      finish = 1;
  }

  SC_CTOR(finish_gen) : clk("clk"),
                        rstn("rstn"),
                        enable("enable"),
                        clear("clear"),
                        cnt_enable("cnt_enable"),
                        total_num("total_num"),
                        finish("finish")
                     
  {
    SC_METHOD(_gen_last_en);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << cnt << total_num;
    SC_METHOD(_up_count);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_internal_cnt);
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_finish);
    sensitive << clk.pos() << rstn.neg();
  };
};
#endif
