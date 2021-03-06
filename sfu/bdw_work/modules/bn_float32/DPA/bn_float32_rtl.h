// Generated by stratus_hls 19.10-p100  (91500.011111)
// Tue Jan  5 20:57:14 2021
// from bn_float32.cpp
#ifndef CYNTH_PART_bn_float32_bn_float32_rtl_h
#define CYNTH_PART_bn_float32_bn_float32_rtl_h

#include "systemc.h"
/* Include declarations of instantiated parts. */
#ifdef BDW_RTL
#ifndef CYNTHVLG
#define fp_add fp_add_wrapper_r
#endif
#include "bdw_work/wrappers/fp_add_wrap.h"
#else
#include "fp_add_rtl.h"
#endif
#ifdef BDW_RTL
#ifndef CYNTHVLG
#define fp_mul fp_mul_wrapper_r
#endif
#include "bdw_work/wrappers/fp_mul_wrap.h"
#else
#include "fp_mul_rtl.h"
#endif


/* Declaration of the synthesized module. */
struct bn_float32 : public sc_module {
  sc_in<bool > clk;
  sc_in<bool > rstn;
  sc_in<bool > enable;
  sc_in<bool > src_valid;
  sc_in<sc_uint<23> > src_man_0;
  sc_in<sc_uint<23> > src_man_1;
  sc_in<sc_uint<23> > src_man_2;
  sc_in<sc_uint<23> > src_man_3;
  sc_in<sc_uint<23> > src_man_4;
  sc_in<sc_uint<23> > src_man_5;
  sc_in<sc_uint<23> > src_man_6;
  sc_in<sc_uint<23> > src_man_7;
  sc_in<sc_uint<8> > src_exp_0;
  sc_in<sc_uint<8> > src_exp_1;
  sc_in<sc_uint<8> > src_exp_2;
  sc_in<sc_uint<8> > src_exp_3;
  sc_in<sc_uint<8> > src_exp_4;
  sc_in<sc_uint<8> > src_exp_5;
  sc_in<sc_uint<8> > src_exp_6;
  sc_in<sc_uint<8> > src_exp_7;
  sc_in<sc_uint<1> > src_sign_0;
  sc_in<sc_uint<1> > src_sign_1;
  sc_in<sc_uint<1> > src_sign_2;
  sc_in<sc_uint<1> > src_sign_3;
  sc_in<sc_uint<1> > src_sign_4;
  sc_in<sc_uint<1> > src_sign_5;
  sc_in<sc_uint<1> > src_sign_6;
  sc_in<sc_uint<1> > src_sign_7;
  sc_in<sc_uint<23> > mul_coeff_man_0;
  sc_in<sc_uint<23> > mul_coeff_man_1;
  sc_in<sc_uint<23> > mul_coeff_man_2;
  sc_in<sc_uint<23> > mul_coeff_man_3;
  sc_in<sc_uint<23> > mul_coeff_man_4;
  sc_in<sc_uint<23> > mul_coeff_man_5;
  sc_in<sc_uint<23> > mul_coeff_man_6;
  sc_in<sc_uint<23> > mul_coeff_man_7;
  sc_in<sc_uint<8> > mul_coeff_exp_0;
  sc_in<sc_uint<8> > mul_coeff_exp_1;
  sc_in<sc_uint<8> > mul_coeff_exp_2;
  sc_in<sc_uint<8> > mul_coeff_exp_3;
  sc_in<sc_uint<8> > mul_coeff_exp_4;
  sc_in<sc_uint<8> > mul_coeff_exp_5;
  sc_in<sc_uint<8> > mul_coeff_exp_6;
  sc_in<sc_uint<8> > mul_coeff_exp_7;
  sc_in<sc_uint<1> > mul_coeff_sign_0;
  sc_in<sc_uint<1> > mul_coeff_sign_1;
  sc_in<sc_uint<1> > mul_coeff_sign_2;
  sc_in<sc_uint<1> > mul_coeff_sign_3;
  sc_in<sc_uint<1> > mul_coeff_sign_4;
  sc_in<sc_uint<1> > mul_coeff_sign_5;
  sc_in<sc_uint<1> > mul_coeff_sign_6;
  sc_in<sc_uint<1> > mul_coeff_sign_7;
  sc_in<sc_uint<23> > add_coeff_man_0;
  sc_in<sc_uint<23> > add_coeff_man_1;
  sc_in<sc_uint<23> > add_coeff_man_2;
  sc_in<sc_uint<23> > add_coeff_man_3;
  sc_in<sc_uint<23> > add_coeff_man_4;
  sc_in<sc_uint<23> > add_coeff_man_5;
  sc_in<sc_uint<23> > add_coeff_man_6;
  sc_in<sc_uint<23> > add_coeff_man_7;
  sc_in<sc_uint<8> > add_coeff_exp_0;
  sc_in<sc_uint<8> > add_coeff_exp_1;
  sc_in<sc_uint<8> > add_coeff_exp_2;
  sc_in<sc_uint<8> > add_coeff_exp_3;
  sc_in<sc_uint<8> > add_coeff_exp_4;
  sc_in<sc_uint<8> > add_coeff_exp_5;
  sc_in<sc_uint<8> > add_coeff_exp_6;
  sc_in<sc_uint<8> > add_coeff_exp_7;
  sc_in<sc_uint<1> > add_coeff_sign_0;
  sc_in<sc_uint<1> > add_coeff_sign_1;
  sc_in<sc_uint<1> > add_coeff_sign_2;
  sc_in<sc_uint<1> > add_coeff_sign_3;
  sc_in<sc_uint<1> > add_coeff_sign_4;
  sc_in<sc_uint<1> > add_coeff_sign_5;
  sc_in<sc_uint<1> > add_coeff_sign_6;
  sc_in<sc_uint<1> > add_coeff_sign_7;
  sc_out<bool > dst_valid;
  sc_out<sc_uint<23> > dst_man_0;
  sc_out<sc_uint<23> > dst_man_1;
  sc_out<sc_uint<23> > dst_man_2;
  sc_out<sc_uint<23> > dst_man_3;
  sc_out<sc_uint<23> > dst_man_4;
  sc_out<sc_uint<23> > dst_man_5;
  sc_out<sc_uint<23> > dst_man_6;
  sc_out<sc_uint<23> > dst_man_7;
  sc_out<sc_uint<8> > dst_exp_0;
  sc_out<sc_uint<8> > dst_exp_1;
  sc_out<sc_uint<8> > dst_exp_2;
  sc_out<sc_uint<8> > dst_exp_3;
  sc_out<sc_uint<8> > dst_exp_4;
  sc_out<sc_uint<8> > dst_exp_5;
  sc_out<sc_uint<8> > dst_exp_6;
  sc_out<sc_uint<8> > dst_exp_7;
  sc_out<sc_uint<1> > dst_sign_0;
  sc_out<sc_uint<1> > dst_sign_1;
  sc_out<sc_uint<1> > dst_sign_2;
  sc_out<sc_uint<1> > dst_sign_3;
  sc_out<sc_uint<1> > dst_sign_4;
  sc_out<sc_uint<1> > dst_sign_5;
  sc_out<sc_uint<1> > dst_sign_6;
  sc_out<sc_uint<1> > dst_sign_7;
  bn_float32( sc_module_name name );
  SC_HAS_PROCESS(bn_float32);
  sc_signal<sc_uint<1> > bn_float32_N_Muxb_1_2_0_4_1_out1;
  sc_signal<sc_uint<23> > r_src_man_0;
  sc_signal<sc_uint<8> > r_src_exp_0;
  sc_signal<sc_uint<1> > r_src_sign_0;
  sc_signal<sc_uint<23> > r_src_man_1;
  sc_signal<sc_uint<8> > r_src_exp_1;
  sc_signal<sc_uint<1> > r_src_sign_1;
  sc_signal<sc_uint<23> > r_src_man_2;
  sc_signal<sc_uint<8> > r_src_exp_2;
  sc_signal<sc_uint<1> > r_src_sign_2;
  sc_signal<sc_uint<23> > r_src_man_3;
  sc_signal<sc_uint<8> > r_src_exp_3;
  sc_signal<sc_uint<1> > r_src_sign_3;
  sc_signal<sc_uint<23> > r_src_man_4;
  sc_signal<sc_uint<8> > r_src_exp_4;
  sc_signal<sc_uint<1> > r_src_sign_4;
  sc_signal<sc_uint<23> > r_src_man_5;
  sc_signal<sc_uint<8> > r_src_exp_5;
  sc_signal<sc_uint<1> > r_src_sign_5;
  sc_signal<sc_uint<23> > r_src_man_6;
  sc_signal<sc_uint<8> > r_src_exp_6;
  sc_signal<sc_uint<1> > r_src_sign_6;
  sc_signal<bool > r_src_valid;
  sc_signal<sc_uint<23> > r_src_man_7;
  sc_signal<sc_uint<8> > r_src_exp_7;
  sc_signal<sc_uint<1> > r_src_sign_7;
  sc_signal<bool > mul_valid_0;
  sc_signal<sc_uint<23> > mul_result_man_0;
  sc_signal<sc_uint<8> > mul_result_exp_0;
  sc_signal<sc_uint<1> > mul_result_sign_0;
  sc_signal<sc_uint<23> > r1_add_coeff_man_0;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_0;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_0;
  sc_signal<sc_uint<23> > add_result_man_0;
  sc_signal<sc_uint<8> > add_result_exp_0;
  sc_signal<sc_uint<1> > add_result_sign_0;
  sc_signal<bool > add_valid_0;
  sc_signal<bool > mul_valid_1;
  sc_signal<sc_uint<23> > mul_result_man_1;
  sc_signal<sc_uint<8> > mul_result_exp_1;
  sc_signal<sc_uint<1> > mul_result_sign_1;
  sc_signal<sc_uint<23> > r1_add_coeff_man_1;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_1;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_1;
  sc_signal<sc_uint<23> > add_result_man_1;
  sc_signal<sc_uint<8> > add_result_exp_1;
  sc_signal<sc_uint<1> > add_result_sign_1;
  sc_signal<bool > add_valid_1;
  sc_signal<bool > mul_valid_2;
  sc_signal<sc_uint<23> > mul_result_man_2;
  sc_signal<sc_uint<8> > mul_result_exp_2;
  sc_signal<sc_uint<1> > mul_result_sign_2;
  sc_signal<sc_uint<23> > r1_add_coeff_man_2;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_2;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_2;
  sc_signal<sc_uint<23> > add_result_man_2;
  sc_signal<sc_uint<8> > add_result_exp_2;
  sc_signal<sc_uint<1> > add_result_sign_2;
  sc_signal<bool > add_valid_2;
  sc_signal<bool > mul_valid_3;
  sc_signal<sc_uint<23> > mul_result_man_3;
  sc_signal<sc_uint<8> > mul_result_exp_3;
  sc_signal<sc_uint<1> > mul_result_sign_3;
  sc_signal<sc_uint<23> > r1_add_coeff_man_3;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_3;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_3;
  sc_signal<sc_uint<23> > add_result_man_3;
  sc_signal<sc_uint<8> > add_result_exp_3;
  sc_signal<sc_uint<1> > add_result_sign_3;
  sc_signal<bool > add_valid_3;
  sc_signal<bool > mul_valid_4;
  sc_signal<sc_uint<23> > mul_result_man_4;
  sc_signal<sc_uint<8> > mul_result_exp_4;
  sc_signal<sc_uint<1> > mul_result_sign_4;
  sc_signal<sc_uint<23> > r1_add_coeff_man_4;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_4;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_4;
  sc_signal<sc_uint<23> > add_result_man_4;
  sc_signal<sc_uint<8> > add_result_exp_4;
  sc_signal<sc_uint<1> > add_result_sign_4;
  sc_signal<bool > add_valid_4;
  sc_signal<bool > mul_valid_5;
  sc_signal<sc_uint<23> > mul_result_man_5;
  sc_signal<sc_uint<8> > mul_result_exp_5;
  sc_signal<sc_uint<1> > mul_result_sign_5;
  sc_signal<sc_uint<23> > r1_add_coeff_man_5;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_5;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_5;
  sc_signal<sc_uint<23> > add_result_man_5;
  sc_signal<sc_uint<8> > add_result_exp_5;
  sc_signal<sc_uint<1> > add_result_sign_5;
  sc_signal<bool > add_valid_5;
  sc_signal<bool > mul_valid_6;
  sc_signal<sc_uint<23> > mul_result_man_6;
  sc_signal<sc_uint<8> > mul_result_exp_6;
  sc_signal<sc_uint<1> > mul_result_sign_6;
  sc_signal<sc_uint<23> > r1_add_coeff_man_6;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_6;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_6;
  sc_signal<sc_uint<23> > add_result_man_6;
  sc_signal<sc_uint<8> > add_result_exp_6;
  sc_signal<sc_uint<1> > add_result_sign_6;
  sc_signal<bool > add_valid_6;
  sc_signal<bool > mul_valid_7;
  sc_signal<sc_uint<23> > mul_result_man_7;
  sc_signal<sc_uint<8> > mul_result_exp_7;
  sc_signal<sc_uint<1> > mul_result_sign_7;
  sc_signal<sc_uint<23> > r1_add_coeff_man_7;
  sc_signal<sc_uint<8> > r1_add_coeff_exp_7;
  sc_signal<sc_uint<1> > r1_add_coeff_sign_7;
  sc_signal<sc_uint<23> > add_result_man_7;
  sc_signal<sc_uint<8> > add_result_exp_7;
  sc_signal<sc_uint<1> > add_result_sign_7;
  sc_signal<bool > add_valid_7;
  fp_add *u_fp_add_7;
  fp_add *u_fp_add_6;
  fp_add *u_fp_add_5;
  fp_add *u_fp_add_4;
  fp_add *u_fp_add_3;
  fp_add *u_fp_add_2;
  fp_add *u_fp_add_1;
  fp_add *u_fp_add_0;
  fp_mul *u_fp_mul_7;
  fp_mul *u_fp_mul_6;
  fp_mul *u_fp_mul_5;
  fp_mul *u_fp_mul_4;
  fp_mul *u_fp_mul_3;
  fp_mul *u_fp_mul_2;
  fp_mul *u_fp_mul_1;
  fp_mul *u_fp_mul_0;
  void drive_dst_valid();
  void bn_float32_N_Muxb_1_2_0_4_1();
  void drive_dst_sign_0();
  void drive_dst_sign_1();
  void drive_dst_sign_2();
  void drive_dst_sign_3();
  void drive_dst_sign_4();
  void drive_dst_sign_5();
  void drive_dst_sign_6();
  void drive_dst_sign_7();
  void drive_dst_exp_0();
  void drive_dst_exp_1();
  void drive_dst_exp_2();
  void drive_dst_exp_3();
  void drive_dst_exp_4();
  void drive_dst_exp_5();
  void drive_dst_exp_6();
  void drive_dst_exp_7();
  void drive_dst_man_0();
  void drive_dst_man_1();
  void drive_dst_man_2();
  void drive_dst_man_3();
  void drive_dst_man_4();
  void drive_dst_man_5();
  void drive_dst_man_6();
  void drive_dst_man_7();
  void drive_r_src_valid();
  void drive_r_src_sign_0();
  void drive_r_src_sign_1();
  void drive_r_src_sign_2();
  void drive_r_src_sign_3();
  void drive_r_src_sign_4();
  void drive_r_src_sign_5();
  void drive_r_src_sign_6();
  void drive_r_src_sign_7();
  void drive_r_src_exp_0();
  void drive_r_src_exp_1();
  void drive_r_src_exp_2();
  void drive_r_src_exp_3();
  void drive_r_src_exp_4();
  void drive_r_src_exp_5();
  void drive_r_src_exp_6();
  void drive_r_src_exp_7();
  void drive_r_src_man_0();
  void drive_r_src_man_1();
  void drive_r_src_man_2();
  void drive_r_src_man_3();
  void drive_r_src_man_4();
  void drive_r_src_man_5();
  void drive_r_src_man_6();
  void drive_r_src_man_7();
  void drive_r1_add_coeff_sign_0();
  void drive_r1_add_coeff_sign_1();
  void drive_r1_add_coeff_sign_2();
  void drive_r1_add_coeff_sign_3();
  void drive_r1_add_coeff_sign_4();
  void drive_r1_add_coeff_sign_5();
  void drive_r1_add_coeff_sign_6();
  void drive_r1_add_coeff_sign_7();
  void drive_r1_add_coeff_exp_0();
  void drive_r1_add_coeff_exp_1();
  void drive_r1_add_coeff_exp_2();
  void drive_r1_add_coeff_exp_3();
  void drive_r1_add_coeff_exp_4();
  void drive_r1_add_coeff_exp_5();
  void drive_r1_add_coeff_exp_6();
  void drive_r1_add_coeff_exp_7();
  void drive_r1_add_coeff_man_0();
  void drive_r1_add_coeff_man_1();
  void drive_r1_add_coeff_man_2();
  void drive_r1_add_coeff_man_3();
  void drive_r1_add_coeff_man_4();
  void drive_r1_add_coeff_man_5();
  void drive_r1_add_coeff_man_6();
  void drive_r1_add_coeff_man_7();
};

#endif
