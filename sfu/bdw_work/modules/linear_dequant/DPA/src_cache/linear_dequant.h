#ifndef LINEAR_DEQUANT_H
#define LINEAR_DEQUANT_H
#include "systemc.h"
#include "stratus_hls.h"
#include "cynw_cm_float.h"
#include "cynw_cm_float_int.h"
#include "config.h"
#include "fp_div.h"

SC_MODULE(linear_dequant)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid;
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > src[8];
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > divisor;

  sc_out<bool> dst_valid;
  //sc_out< sc_uint<32> > dst[8];
  sc_out< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > dst[8];

  //sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > fp_src[8];
  //cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> tmp_fp_src[8];
  
  //sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > tmp_fp_div_result[8];
  //cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> fp_div_result[8];
  //sc_signal< sc_uint<32> > div_result[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > div_result[8];

  sc_signal<bool> div_valid[8];

/*
  void _fp_src()
  {
   for (int i = 0; i < 8; i++)  {
    tmp_fp_src[i] = src[i].read();
    fp_src[i].write(tmp_fp_src[i]);
   }  
  }
*/

/*
  void _div_result()
  {
   for (int i = 0; i < 8; i++) {
    fp_div_result[i] = tmp_fp_div_result[i].read();
    div_result[i] = fp_div_result[i].raw_bits();
    //div_result[i] = (sc_uint<32>)(fp_div_result[i]);
   }
  }
*/

  void _dst()
  {
    if (!rstn.read()) { // Added on 2020/12/31 by hanji
     for (size_t i = 0; i < 8; i++) {
      dst[i].write(0);
     }
    }
    else if(enable.read()) {
     for (size_t i = 0; i < 8; i++) {
      dst[i] = div_result[i].read();
      //dst[i] = div_result[i];
     }
    }
    else {
     for (size_t i = 0; i < 8; i++) {
      dst[i] = src[i].read();
     }
    }
  }
  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2020/12/31 by hanji
      dst_valid.write(0);
    else if(enable.read())
      dst_valid = div_valid[0].read();
    else
      dst_valid = src_valid.read();
  }

  fp_div *u_fp_div[8];

  SC_CTOR(linear_dequant) 
  {

    u_fp_div[0] = new fp_div("u_fp_div_0");
    u_fp_div[1] = new fp_div("u_fp_div_1");
    u_fp_div[2] = new fp_div("u_fp_div_2");
    u_fp_div[3] = new fp_div("u_fp_div_3");
    u_fp_div[4] = new fp_div("u_fp_div_4");
    u_fp_div[5] = new fp_div("u_fp_div_5");
    u_fp_div[6] = new fp_div("u_fp_div_6");
    u_fp_div[7] = new fp_div("u_fp_div_7");

   for (size_t i = 0; i < 8; i++) 
   {
    u_fp_div[i]->clk(clk);
    u_fp_div[i]->rstn(rstn);
    u_fp_div[i]->src_valid(src_valid);
    u_fp_div[i]->a(src[i]);
    u_fp_div[i]->b(divisor);
    //u_fp_div[i]->r(tmp_fp_div_result[i]);
    u_fp_div[i]->r(div_result[i]);
    u_fp_div[i]->dst_valid(div_valid[i]);
   }

    //SC_METHOD(_fp_src);
    //sensitive << src[0] << src[1] << src[2] << src[3] << src[4] << src[5] << src[6] << src[7];
    //SC_METHOD(_div_result);
    //sensitive << tmp_fp_div_result[0] << tmp_fp_div_result[1] << tmp_fp_div_result[2] << tmp_fp_div_result[3] << tmp_fp_div_result[4] << tmp_fp_div_result[5] << tmp_fp_div_result[6] << tmp_fp_div_result[7];


    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_dst);
    sensitive << clk.pos() << rstn.neg();
  };
};
#endif
