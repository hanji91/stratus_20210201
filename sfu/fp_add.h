#ifndef FP_ADD
#define FP_ADD
#include "systemc.h"
#include "stratus_hls.h"
#include "cynw_cm_float.h"
//#include "defines.h"
SC_MODULE(fp_add)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> src_valid; // Added on 2020/12/29 by hanji
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > a;
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > b;
  sc_out< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > r;
  sc_out<bool> dst_valid; // Added on 2020/12/29 by hanji

  //cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > tmp_a, tmp_b, tmp_r, tmp_rcp, a_1d, b_1d, mul_in;
  cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > tmp_a, tmp_b, tmp_r;
  sc_uint<3> rm;
  //sc_uint<5> exc;
  //sc_signal<bool> src_valid_1d;

/* 
  void _float_rcp()
  {
   //if (!rstn.read())  
   //   tmp_rcp.write(0);
   //else {
      //tmp_a = a;
      tmp_b = b;
      tmp_rcp = recip(tmp_b);
   //}
  }
  void _delays()
  {
    //if (!rstn.read()) { 
    //  b_1d.write(0);
    //}
    //else {
      //b_1d = b.read();
      a_1d = a.read();
      src_valid_1d = src_valid.read();
    //}
  }
*/

  void _float_add()
  {
   if (!rstn.read())  
      r.write(0);
   else {
      rm = 0;
      //exc = 0;
      //tmp_b = b;
      //tmp_b = b_1d;
      tmp_a = a;
      tmp_b = b;
      //mul_in = tmp_rcp.read();
      //mul_in = tmp_rcp;
      tmp_r = add(tmp_a, tmp_b, rm); 
      //tmp_r = mul(mul_in, tmp_b, rm); 
      //tmp_r = mul(mul_in, tmp_a, rm); 
      //tmp_r = mul(tmp_a, tmp_b, rm); 
      //tmp_r = div(mul_in, tmp_b, rm);
      //tmp_r = div_exc(mul_in, tmp_b, exc);
      r = tmp_r; 
   }
  }

  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2020/12/29 by hanji
      dst_valid.write(0);
    else
      dst_valid = src_valid.read();
  }


  SC_CTOR(fp_add)
  {

    //SC_METHOD(_float_rcp);
    ////sensitive << clk.pos() ; 

    //SC_METHOD(_delays);
    //sensitive << clk.pos(); 

    SC_METHOD(_float_add);
    sensitive << clk.pos() << rstn.neg(); 
    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg(); 

  };
};
#endif

