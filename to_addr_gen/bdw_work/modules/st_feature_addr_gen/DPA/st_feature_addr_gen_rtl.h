// Generated by stratus_hls 19.10-p100  (91500.011111)
// Thu Jan 21 19:36:18 2021
// from st_feature_addr_gen.cpp
#ifndef CYNTH_PART_st_feature_addr_gen_st_feature_addr_gen_rtl_h
#define CYNTH_PART_st_feature_addr_gen_st_feature_addr_gen_rtl_h

#include "systemc.h"
/* Include declarations of instantiated parts. */


/* Declaration of the synthesized module. */
struct st_feature_addr_gen : public sc_module {
  sc_in<bool > clk;
  sc_in<bool > rstn;
  sc_in<bool > stop;
  sc_in<sc_uint<8> > start;
  sc_in<sc_uint<1> > start_rising;
  sc_in<sc_uint<16> > feature_width;
  sc_in<sc_uint<16> > feature_height;
  sc_in<sc_uint<16> > feature_channel;
  sc_in<sc_uint<16> > out_feature_width;
  sc_in<sc_uint<16> > out_feature_height;
  sc_in<sc_uint<16> > out_feature_channel;
  sc_in<sc_uint<8> > dilation_x;
  sc_in<sc_uint<8> > dilation_y;
  sc_in<sc_uint<16> > filter_width;
  sc_in<sc_uint<16> > filter_height;
  sc_in<sc_uint<16> > filter_channel;
  sc_in<sc_uint<8> > stride_x;
  sc_in<sc_uint<8> > stride_y;
  sc_in<sc_uint<8> > pad_top_size;
  sc_in<sc_uint<8> > pad_bottom_size;
  sc_in<sc_uint<8> > pad_left_size;
  sc_in<sc_uint<8> > pad_right_size;
  sc_in<sc_uint<32> > read_feature_base_addr;
  sc_out<sc_uint<32> > st_feature_addr;
  sc_out<bool > st_feature_addr_valid;
  sc_out<bool > st_feature_data_valid;
  sc_out<bool > cache_en;
  sc_out<sc_uint<16> > st_feature_data_sel;
  sc_out<bool > st_addr_if_start;
  st_feature_addr_gen( sc_module_name name );
  SC_HAS_PROCESS(st_feature_addr_gen);
  sc_signal<sc_int<2> > st_feature_addr_gen_AndReduction_2S_1U_1_50_in1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_AndReduction_2S_1U_4_49_out1;
  sc_signal<sc_int<2> > st_feature_addr_gen_AndReduction_2S_1U_4_49_in1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_AndReduction_4S_1U_1_48_out1;
  sc_signal<sc_int<4> > st_feature_addr_gen_AndReduction_4S_1U_1_48_in1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_4_56_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_4_55_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_4_54_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Not_1U_1U_4_53_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_AndReduction_2S_1U_1_50_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Nei1u16_4_52_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Nei1u16_4_51_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Or_1Ux1U_1U_4_57_out1;
  sc_signal<sc_uint<1> > enable;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Not_1U_1U_4_12_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_4_13_out1;
  sc_signal<sc_uint<9> > st_feature_addr_gen_Add2i1u8_4_9_out1;
  sc_signal<sc_uint<9> > st_feature_addr_gen_Add2i1u8_4_8_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_Mul_16Ux9U_16U_1_11_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_Mul_16Ux9U_16U_1_10_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_24_out1;
  sc_signal<sc_uint<16> > ix_cnt_max;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd3i1u8u16u16u1_4_26_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_27_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_28_out1;
  sc_signal<sc_uint<16> > iy_cnt_max;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd3i1u8u16u16u1_1_30_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_25_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_31_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_32_out1;
  sc_signal<sc_uint<16> > if_cnt_max;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd2i1u16u16u1_4_34_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_29_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_35_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_36_out1;
  sc_signal<sc_uint<16> > ox_cnt_max;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd2i1u16u16u1_1_38_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_39_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_40_out1;
  sc_signal<sc_uint<16> > oy_cnt_max;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd2i1u16u16u1_1_42_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_37_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_43_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_EqSubi1u16u16_1_44_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_EqSubi1u16u16_1_44_in1;
  sc_signal<sc_uint<16> > of_cnt_max;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_45_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_MuxAdd2i1u16u16u1_1_46_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_41_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_47_out1;
  sc_signal<sc_uint<16> > ox_cnt;
  sc_signal<sc_uint<16> > ix_cnt;
  sc_signal<sc_uint<16> > st_feature_addr_gen_Add2Mul2u8u16u16_4_7_out1;
  sc_signal<sc_uint<16> > oy_cnt;
  sc_signal<sc_uint<16> > iy_cnt;
  sc_signal<sc_uint<16> > st_feature_addr_gen_Add2Mul2u8u16u16_4_6_out1;
  sc_signal<sc_uint<16> > of_cnt;
  sc_signal<sc_uint<16> > of_pos;
  sc_signal<sc_int<16> > st_feature_addr_gen_Sub_16Ux8U_16S_4_20_out1;
  sc_signal<sc_int<16> > st_feature_addr_gen_Sub_16Ux8U_16S_4_19_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_Mul_16Ux16U_16U_4_21_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_22_out1;
  sc_signal<sc_uint<16> > st_feature_addr_gen_N_Mux_16_2_25_4_23_out1;
  sc_signal<sc_uint<16> > org_iy_pos;
  sc_signal<sc_uint<16> > org_of_pos;
  sc_signal<sc_uint<16> > org_ix_pos;
  sc_signal<sc_uint<32> > st_feature_addr_gen_Mul_16Ux16U_32U_1_5_out1;
  sc_signal<sc_uint<32> > st_feature_addr_gen_Mul_16Ux16U_32U_1_4_out1;
  sc_signal<sc_uint<32> > sum_of;
  sc_signal<sc_uint<32> > sum_iy;
  sc_signal<sc_uint<16> > sum_ix_slice;
  sc_signal<sc_uint<32> > st_feature_addr_gen_Add4u32u32u32u32_4_3_out1;
  sc_signal<sc_uint<4> > st_feature_addr_gen_OrReduction_4U_1U_1_18_in1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_LessThan_16Ux8U_1U_4_17_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_GtSubi1Add2u8u16u16_1_16_out1;
  sc_signal<sc_uint<16> > ix_pos;
  sc_signal<sc_uint<1> > st_feature_addr_gen_LessThan_16Ux8U_1U_4_15_out1;
  sc_signal<sc_uint<1> > st_feature_addr_gen_GtSubi1Add2u8u16u16_1_14_out1;
  sc_signal<sc_uint<16> > iy_pos;
  sc_signal<bool > st_feature_addr_valid_4d;
  sc_signal<bool > st_feature_addr_valid_3d;
  sc_signal<bool > st_feature_addr_valid_2d;
  sc_signal<bool > st_feature_addr_valid_1d;
  sc_signal<sc_uint<1> > if_clear_9d;
  sc_signal<sc_uint<1> > if_clear_8d;
  sc_signal<sc_uint<1> > if_clear_7d;
  sc_signal<sc_uint<1> > if_clear_6d;
  sc_signal<sc_uint<1> > if_clear_5d;
  sc_signal<sc_uint<1> > if_clear_4d;
  sc_signal<sc_uint<1> > if_clear_3d;
  sc_signal<sc_uint<1> > if_clear_2d;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_1_33_out1;
  sc_signal<sc_uint<1> > if_clear_1d;
  sc_signal<sc_uint<16> > if_cnt_8d;
  sc_signal<sc_uint<16> > if_cnt_7d;
  sc_signal<sc_uint<16> > if_cnt_6d;
  sc_signal<sc_uint<16> > if_cnt_5d;
  sc_signal<sc_uint<16> > if_cnt_4d;
  sc_signal<sc_uint<16> > if_cnt_3d;
  sc_signal<sc_uint<16> > if_cnt_2d;
  sc_signal<sc_uint<16> > if_cnt;
  sc_signal<sc_uint<16> > if_cnt_1d;
  sc_signal<sc_uint<1> > st_feature_addr_gen_OrReduction_4U_1U_1_18_out1;
  sc_signal<sc_uint<1> > run_8d;
  sc_signal<sc_uint<1> > run_7d;
  sc_signal<sc_uint<1> > run_6d;
  sc_signal<sc_uint<1> > run_5d;
  sc_signal<sc_uint<1> > run_4d;
  sc_signal<sc_uint<1> > run;
  sc_signal<sc_uint<1> > run_1d;
  sc_signal<sc_uint<1> > run_2d;
  sc_signal<sc_uint<1> > is_zero_1d;
  sc_signal<sc_uint<1> > run_9d;
  sc_signal<bool > st_feature_addr_valid_5d;
  sc_signal<sc_uint<16> > if_cnt_9d;
  sc_signal<sc_uint<1> > if_clear_10d;
  sc_signal<sc_uint<1> > run_3d;
  sc_signal<sc_uint<1> > st_feature_addr_gen_Not_1U_1U_4_1_out1;
  sc_signal<sc_uint<1> > is_zero_2d;
  sc_signal<sc_uint<1> > st_feature_addr_gen_And_1Ux1U_1U_4_2_out1;
  sc_signal<sc_uint<1> > run_10d;
  sc_signal<bool > st_feature_addr_valid_6d;
  sc_signal<sc_uint<16> > if_cnt_10d;
  sc_signal<sc_uint<1> > if_clear_11d;
  void drive_st_addr_if_start();
  void drive_st_feature_data_sel();
  void drive_st_feature_data_valid();
  void drive_cache_en();
  void drive_st_feature_addr_valid();
  void st_feature_addr_gen_Not_1U_1U_4_1();
  void st_feature_addr_gen_And_1Ux1U_1U_4_2();
  void drive_if_clear_11d();
  void drive_if_cnt_10d();
  void drive_st_feature_addr_valid_6d();
  void drive_run_10d();
  void drive_is_zero_2d();
  void drive_run_3d();
  void drive_run_1d();
  void drive_run_2d();
  void drive_run_4d();
  void drive_run_5d();
  void drive_run_6d();
  void drive_run_7d();
  void drive_run_8d();
  void drive_run_9d();
  void drive_is_zero_1d();
  void drive_if_cnt_1d();
  void drive_if_cnt_2d();
  void drive_if_cnt_3d();
  void drive_if_cnt_4d();
  void drive_if_cnt_5d();
  void drive_if_cnt_6d();
  void drive_if_cnt_7d();
  void drive_if_cnt_8d();
  void drive_if_cnt_9d();
  void drive_if_clear_1d();
  void drive_if_clear_2d();
  void drive_if_clear_3d();
  void drive_if_clear_4d();
  void drive_if_clear_5d();
  void drive_if_clear_6d();
  void drive_if_clear_7d();
  void drive_if_clear_8d();
  void drive_if_clear_9d();
  void drive_if_clear_10d();
  void drive_st_feature_addr_valid_1d();
  void drive_st_feature_addr_valid_2d();
  void drive_st_feature_addr_valid_3d();
  void drive_st_feature_addr_valid_4d();
  void drive_st_feature_addr_valid_5d();
  void st_feature_addr_gen_GtSubi1Add2u8u16u16_1_14();
  void st_feature_addr_gen_LessThan_16Ux8U_1U_4_15();
  void st_feature_addr_gen_GtSubi1Add2u8u16u16_1_16();
  void st_feature_addr_gen_LessThan_16Ux8U_1U_4_17();
  void drive_st_feature_addr_gen_OrReduction_4U_1U_1_18_in1();
  void st_feature_addr_gen_OrReduction_4U_1U_1_18();
  void drive_st_feature_addr();
  void st_feature_addr_gen_Add4u32u32u32u32_4_3();
  void drive_sum_of();
  void drive_sum_iy();
  void drive_sum_ix_slice();
  void st_feature_addr_gen_Mul_16Ux16U_32U_1_4();
  void st_feature_addr_gen_Mul_16Ux16U_32U_1_5();
  void drive_org_ix_pos();
  void drive_org_iy_pos();
  void drive_org_of_pos();
  void st_feature_addr_gen_Sub_16Ux8U_16S_4_19();
  void st_feature_addr_gen_Sub_16Ux8U_16S_4_20();
  void st_feature_addr_gen_Mul_16Ux16U_16U_4_21();
  void st_feature_addr_gen_N_Mux_16_2_25_4_22();
  void st_feature_addr_gen_N_Mux_16_2_25_4_23();
  void drive_of_pos();
  void drive_iy_pos();
  void st_feature_addr_gen_Add2Mul2u8u16u16_4_6();
  void drive_ix_pos();
  void st_feature_addr_gen_Add2Mul2u8u16u16_4_7();
  void drive_of_cnt();
  void st_feature_addr_gen_MuxAdd2i1u16u16u1_1_46();
  void st_feature_addr_gen_N_Mux_16_2_25_4_47();
  void drive_st_feature_addr_gen_EqSubi1u16u16_1_44_in1();
  void st_feature_addr_gen_EqSubi1u16u16_1_44();
  void st_feature_addr_gen_And_1Ux1U_1U_1_45();
  void drive_oy_cnt();
  void st_feature_addr_gen_MuxAdd2i1u16u16u1_1_42();
  void st_feature_addr_gen_N_Mux_16_2_25_4_43();
  void st_feature_addr_gen_EqSubi1u16u16_1_40();
  void st_feature_addr_gen_And_1Ux1U_1U_1_41();
  void drive_ox_cnt();
  void st_feature_addr_gen_MuxAdd2i1u16u16u1_1_38();
  void st_feature_addr_gen_N_Mux_16_2_25_4_39();
  void st_feature_addr_gen_EqSubi1u16u16_1_36();
  void st_feature_addr_gen_And_1Ux1U_1U_1_37();
  void drive_if_cnt();
  void st_feature_addr_gen_MuxAdd2i1u16u16u1_4_34();
  void st_feature_addr_gen_N_Mux_16_2_25_4_35();
  void st_feature_addr_gen_EqSubi1u16u16_1_32();
  void st_feature_addr_gen_And_1Ux1U_1U_1_33();
  void drive_iy_cnt();
  void st_feature_addr_gen_MuxAdd3i1u8u16u16u1_1_30();
  void st_feature_addr_gen_N_Mux_16_2_25_4_31();
  void st_feature_addr_gen_EqSubi1u16u16_1_28();
  void st_feature_addr_gen_And_1Ux1U_1U_1_29();
  void drive_ix_cnt();
  void st_feature_addr_gen_MuxAdd3i1u8u16u16u1_4_26();
  void st_feature_addr_gen_N_Mux_16_2_25_4_27();
  void st_feature_addr_gen_EqSubi1u16u16_1_24();
  void st_feature_addr_gen_And_1Ux1U_1U_1_25();
  void drive_of_cnt_max();
  void drive_oy_cnt_max();
  void drive_ox_cnt_max();
  void drive_if_cnt_max();
  void drive_iy_cnt_max();
  void drive_ix_cnt_max();
  void st_feature_addr_gen_Add2i1u8_4_8();
  void st_feature_addr_gen_Add2i1u8_4_9();
  void st_feature_addr_gen_Mul_16Ux9U_16U_1_10();
  void st_feature_addr_gen_Mul_16Ux9U_16U_1_11();
  void drive_run();
  void st_feature_addr_gen_Not_1U_1U_4_12();
  void st_feature_addr_gen_And_1Ux1U_1U_4_13();
  void drive_enable();
  void st_feature_addr_gen_Nei1u16_4_51();
  void st_feature_addr_gen_Nei1u16_4_52();
  void st_feature_addr_gen_Not_1U_1U_4_53();
  void st_feature_addr_gen_And_1Ux1U_1U_4_54();
  void st_feature_addr_gen_And_1Ux1U_1U_4_55();
  void st_feature_addr_gen_And_1Ux1U_1U_4_56();
  void st_feature_addr_gen_Or_1Ux1U_1U_4_57();
  void drive_st_feature_addr_gen_AndReduction_4S_1U_1_48_in1();
  void st_feature_addr_gen_AndReduction_4S_1U_1_48();
  void drive_st_feature_addr_gen_AndReduction_2S_1U_4_49_in1();
  void st_feature_addr_gen_AndReduction_2S_1U_4_49();
  void drive_st_feature_addr_gen_AndReduction_2S_1U_1_50_in1();
  void st_feature_addr_gen_AndReduction_2S_1U_1_50();
};

#endif
