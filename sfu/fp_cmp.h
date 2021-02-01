#ifndef FP_CMP
#define FP_CMP
#include "systemc.h"
#include "stratus_hls.h"
#include "cynw_cm_float.h"
//#include "defines.h"
SC_MODULE(fp_cmp)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid; // Added on 2021/01/06 by hanji
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > a;
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > b;
  sc_out< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > > r;
  sc_out<bool> dst_valid; // Added on 2020/12/29 by hanji

  //cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > tmp_a, tmp_b, tmp_r, tmp_rcp, a_1d, b_1d, mul_in;
  cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1 > tmp_a, tmp_b, tmp_r;
  sc_uint<3> rm;
  //sc_uint<5> exc;
  //sc_signal<bool> src_valid_1d;

  void _float_cmp()
  {
   if (!rstn.read())  
      r.write(0);
   else if (!enable.read())  
      //r.write(0);
      r = a.read(); // Modified on 2021/01/15 by hanji
   else {
      ////tmp_a = a;
      //tmp_b = b;
      //tmp_r = add(tmp_a, tmp_b, rm); 
      //r = tmp_r; 
    if (a.read() < 0) 
      r.write(0);
    else if (a.read() > b.read()) 
      r = b.read();
    else	
      r = a.read();
   }
  }

  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2020/12/29 by hanji
      dst_valid.write(0);
    //else if (!enable.read())  // Modified on 2021/01/15 by hanji
    //  dst_valid.write(0);
    else
      dst_valid = src_valid.read();
  }


  SC_CTOR(fp_cmp)
  {

    SC_METHOD(_float_cmp);
    sensitive << clk.pos() << rstn.neg(); 
    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg(); 

  };
};
#endif

