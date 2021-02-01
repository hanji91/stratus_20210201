#ifndef RELU_OFFSET_FLOAT_H
#define RELU_OFFSET_FLOAT_H
#include "systemc.h"
#include "stratus_hls.h"
#include "cynw_cm_float.h"
//#include "cynw_cm_float_int.h"
#include "config.h"
#include "fp_cmp.h"
SC_MODULE(relu_offset_float)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid;
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > src[8];
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > offset;
  sc_out<bool> dst_valid;
  //sc_out< sc_uint<32> > dst[8];
  sc_out< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > dst[8];


  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > cmp_result[8];
  sc_signal<bool> cmp_valid[8];
  //cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > fp_result[8];
  ////sc_signal< sc_uint<32> > int_result[8];
  //sc_uint<32> int_result[8];

  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2021/01/06 by hanji
      dst_valid.write(0);
    else
      dst_valid = cmp_valid[0].read();
  }

/*
  void _int_result()
  {
     for (size_t i = 0; i < 8; i++) {
      fp_result[i] = cmp_result[i].read();
      int_result[i] = fp_result[i].raw_bits();
     }
  }
*/

  void _dst()
  {
    if (!rstn.read()) { // Added on 2021/01/06 by hanji
     for (size_t i = 0; i < 8; i++) {
      dst[i].write(0);
     }
    }
    else {
     for (size_t i = 0; i < 8; i++) {
      //dst[i] = int_result[i].read();
      //dst[i] = int_result[i];
      dst[i] = cmp_result[i].read();
     }
    }
  }

  fp_cmp *u_fp_cmp[8];
  SC_CTOR(relu_offset_float) 
  {
    u_fp_cmp[0] = new fp_cmp("u_fp_cmp_0");
    u_fp_cmp[1] = new fp_cmp("u_fp_cmp_1");
    u_fp_cmp[2] = new fp_cmp("u_fp_cmp_2");
    u_fp_cmp[3] = new fp_cmp("u_fp_cmp_3");
    u_fp_cmp[4] = new fp_cmp("u_fp_cmp_4");
    u_fp_cmp[5] = new fp_cmp("u_fp_cmp_5");
    u_fp_cmp[6] = new fp_cmp("u_fp_cmp_6");
    u_fp_cmp[7] = new fp_cmp("u_fp_cmp_7");

   for (size_t i = 0; i < 8; i++) {
    u_fp_cmp[i]->clk(clk);
    u_fp_cmp[i]->rstn(rstn);
    u_fp_cmp[i]->enable(enable);
    u_fp_cmp[i]->src_valid(src_valid);
    u_fp_cmp[i]->a(src[i]);
    u_fp_cmp[i]->b(offset);
    u_fp_cmp[i]->r(cmp_result[i]);
    u_fp_cmp[i]->dst_valid(cmp_valid[i]);
   }
  
    //SC_METHOD(_int_result);
    //sensitive << cmp_result[0] << cmp_result[1] << cmp_result[2] << cmp_result[3] << cmp_result[4] << cmp_result[5] << cmp_result[6] << cmp_result[7];

    SC_METHOD(_dst);
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg();
  };
};
#endif
