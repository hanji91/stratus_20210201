// Generated by stratus_hls 19.10-p100  (91500.011111)
// Tue Jan 12 16:27:28 2021
// from finish_gen.cpp
#ifndef CYNTH_PART_finish_gen_finish_gen_rtl_h
#define CYNTH_PART_finish_gen_finish_gen_rtl_h

#include "systemc.h"
/* Include declarations of instantiated parts. */


/* Declaration of the synthesized module. */
struct finish_gen : public sc_module {
  sc_in<bool > clk;
  sc_in<bool > rstn;
  sc_in<sc_uint<1> > enable;
  sc_in<sc_uint<1> > clear;
  sc_in<bool > cnt_enable;
  sc_in<sc_uint<32> > total_num;
  sc_out<bool > finish;
  finish_gen( sc_module_name name );
  SC_HAS_PROCESS(finish_gen);
  sc_signal<sc_uint<1> > finish_gen_Equal_32Ux32U_1U_4_11_out1;
  sc_signal<sc_uint<1> > finish_gen_And_1Ux1U_1U_4_12_out1;
  sc_signal<sc_uint<32> > finish_gen_N_Mux_32_2_11_4_9_out1;
  sc_signal<sc_uint<32> > finish_gen_Add2i1u32_4_8_out1;
  sc_signal<sc_uint<1> > finish_gen_Or_1Ux1U_1U_4_7_out1;
  sc_signal<sc_uint<32> > finish_gen_Muxi0u32u1_4_10_out1;
  sc_signal<sc_uint<32> > cnt;
  sc_signal<sc_uint<8> > finish_gen_MuxAdd2i1u8i0u1_4_6_out1;
  sc_signal<sc_uint<1> > finish_gen_And_1Ux1U_1U_4_4_out1;
  sc_signal<sc_uint<1> > finish_gen_Not_1U_1U_4_3_out1;
  sc_signal<sc_uint<1> > finish_gen_Or_1Ux1U_1U_4_2_out1;
  sc_signal<bool > last_en;
  sc_signal<sc_uint<1> > finish_gen_Nei20u8_4_1_out1;
  sc_signal<sc_uint<8> > internal_cnt;
  sc_signal<sc_uint<1> > finish_gen_And_1Ux1U_1U_4_5_out1;
  void drive_finish();
  void finish_gen_Nei20u8_4_1();
  void finish_gen_Or_1Ux1U_1U_4_2();
  void finish_gen_Not_1U_1U_4_3();
  void finish_gen_And_1Ux1U_1U_4_4();
  void finish_gen_And_1Ux1U_1U_4_5();
  void drive_internal_cnt();
  void finish_gen_MuxAdd2i1u8i0u1_4_6();
  void drive_cnt();
  void finish_gen_Or_1Ux1U_1U_4_7();
  void finish_gen_Add2i1u32_4_8();
  void finish_gen_N_Mux_32_2_11_4_9();
  void finish_gen_Muxi0u32u1_4_10();
  void drive_last_en();
  void finish_gen_Equal_32Ux32U_1U_4_11();
  void finish_gen_And_1Ux1U_1U_4_12();
};

#endif