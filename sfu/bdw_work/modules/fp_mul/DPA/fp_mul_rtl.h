// Generated by stratus_hls 19.10-p100  (91500.011111)
// Thu Dec 31 22:42:33 2020
// from fp_mul.cpp
#ifndef CYNTH_PART_fp_mul_fp_mul_rtl_h
#define CYNTH_PART_fp_mul_fp_mul_rtl_h

#include "systemc.h"
/* Include declarations of instantiated parts. */
#include "fp_mul_cynw_cm_float_mul_ieee_E8_M23_0.h"


/* Declaration of the synthesized module. */
struct fp_mul : public sc_module {
  sc_in<bool > clk;
  sc_in<bool > rstn;
  sc_in<bool > src_valid;
  sc_in<sc_uint<23> > a_man;
  sc_in<sc_uint<8> > a_exp;
  sc_in<sc_uint<1> > a_sign;
  sc_in<sc_uint<23> > b_man;
  sc_in<sc_uint<8> > b_exp;
  sc_in<sc_uint<1> > b_sign;
  sc_out<sc_uint<23> > r_man;
  sc_out<sc_uint<8> > r_exp;
  sc_out<sc_uint<1> > r_sign;
  sc_out<bool > dst_valid;
  fp_mul( sc_module_name name );
  SC_HAS_PROCESS(fp_mul);
  sc_signal<sc_uint<3> > fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_1_rm;
  sc_signal<sc_uint<32> > fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_1_x;
  fp_mul_cynw_cm_float_mul_ieee_E8_M23_0 *fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_1;
  void drive_dst_valid();
  void drive_r_sign();
  void drive_r_exp();
  void drive_r_man();
  void drive_fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_1_rm();
};

#endif
