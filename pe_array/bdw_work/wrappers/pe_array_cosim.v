//
// Verilog co-simulation wrapper module for the pe_array module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the pe_array_cosim.h 
// file.

`timescale 1 ps / 1 ps

module pe_array_cosim;

	reg clk;
	reg rstn;
	reg enable;
	reg src_vld;
	reg clear;
	reg init;
	reg[7:0] systolic_en;
	reg[7:0] systolic_depth;
	reg[7:0] mac_shift_len;
	reg[9:0] src_0_s0_0;
	reg[9:0] src_0_s0_1;
	reg[9:0] src_0_s0_2;
	reg[9:0] src_0_s0_3;
	reg[9:0] src_0_s0_4;
	reg[9:0] src_0_s0_5;
	reg[9:0] src_0_s0_6;
	reg[9:0] src_0_s0_7;
	reg[9:0] src_0_s0_8;
	reg[9:0] src_0_s0_9;
	reg[9:0] src_0_s0_10;
	reg[9:0] src_0_s0_11;
	reg[9:0] src_0_s0_12;
	reg[9:0] src_0_s0_13;
	reg[9:0] src_0_s0_14;
	reg[9:0] src_0_s0_15;
	reg[9:0] src_0_s0_16;
	reg[9:0] src_0_s0_17;
	reg[9:0] src_0_s0_18;
	reg[9:0] src_0_s0_19;
	reg[9:0] src_0_s0_20;
	reg[9:0] src_0_s0_21;
	reg[9:0] src_0_s0_22;
	reg[9:0] src_0_s0_23;
	reg[9:0] src_0_s0_24;
	reg[9:0] src_0_s0_25;
	reg[9:0] src_0_s0_26;
	reg[9:0] src_0_s0_27;
	reg[9:0] src_0_s0_28;
	reg[9:0] src_0_s0_29;
	reg[9:0] src_0_s0_30;
	reg[9:0] src_0_s0_31;
	reg[9:0] src_0_s1_0;
	reg[9:0] src_0_s1_1;
	reg[9:0] src_0_s1_2;
	reg[9:0] src_0_s1_3;
	reg[9:0] src_0_s1_4;
	reg[9:0] src_0_s1_5;
	reg[9:0] src_0_s1_6;
	reg[9:0] src_0_s1_7;
	reg[9:0] src_0_s1_8;
	reg[9:0] src_0_s1_9;
	reg[9:0] src_0_s1_10;
	reg[9:0] src_0_s1_11;
	reg[9:0] src_0_s1_12;
	reg[9:0] src_0_s1_13;
	reg[9:0] src_0_s1_14;
	reg[9:0] src_0_s1_15;
	reg[9:0] src_0_s1_16;
	reg[9:0] src_0_s1_17;
	reg[9:0] src_0_s1_18;
	reg[9:0] src_0_s1_19;
	reg[9:0] src_0_s1_20;
	reg[9:0] src_0_s1_21;
	reg[9:0] src_0_s1_22;
	reg[9:0] src_0_s1_23;
	reg[9:0] src_0_s1_24;
	reg[9:0] src_0_s1_25;
	reg[9:0] src_0_s1_26;
	reg[9:0] src_0_s1_27;
	reg[9:0] src_0_s1_28;
	reg[9:0] src_0_s1_29;
	reg[9:0] src_0_s1_30;
	reg[9:0] src_0_s1_31;
	reg[9:0] src_0_s2_0;
	reg[9:0] src_0_s2_1;
	reg[9:0] src_0_s2_2;
	reg[9:0] src_0_s2_3;
	reg[9:0] src_0_s2_4;
	reg[9:0] src_0_s2_5;
	reg[9:0] src_0_s2_6;
	reg[9:0] src_0_s2_7;
	reg[9:0] src_0_s2_8;
	reg[9:0] src_0_s2_9;
	reg[9:0] src_0_s2_10;
	reg[9:0] src_0_s2_11;
	reg[9:0] src_0_s2_12;
	reg[9:0] src_0_s2_13;
	reg[9:0] src_0_s2_14;
	reg[9:0] src_0_s2_15;
	reg[9:0] src_0_s2_16;
	reg[9:0] src_0_s2_17;
	reg[9:0] src_0_s2_18;
	reg[9:0] src_0_s2_19;
	reg[9:0] src_0_s2_20;
	reg[9:0] src_0_s2_21;
	reg[9:0] src_0_s2_22;
	reg[9:0] src_0_s2_23;
	reg[9:0] src_0_s2_24;
	reg[9:0] src_0_s2_25;
	reg[9:0] src_0_s2_26;
	reg[9:0] src_0_s2_27;
	reg[9:0] src_0_s2_28;
	reg[9:0] src_0_s2_29;
	reg[9:0] src_0_s2_30;
	reg[9:0] src_0_s2_31;
	reg[9:0] src_0_s3_0;
	reg[9:0] src_0_s3_1;
	reg[9:0] src_0_s3_2;
	reg[9:0] src_0_s3_3;
	reg[9:0] src_0_s3_4;
	reg[9:0] src_0_s3_5;
	reg[9:0] src_0_s3_6;
	reg[9:0] src_0_s3_7;
	reg[9:0] src_0_s3_8;
	reg[9:0] src_0_s3_9;
	reg[9:0] src_0_s3_10;
	reg[9:0] src_0_s3_11;
	reg[9:0] src_0_s3_12;
	reg[9:0] src_0_s3_13;
	reg[9:0] src_0_s3_14;
	reg[9:0] src_0_s3_15;
	reg[9:0] src_0_s3_16;
	reg[9:0] src_0_s3_17;
	reg[9:0] src_0_s3_18;
	reg[9:0] src_0_s3_19;
	reg[9:0] src_0_s3_20;
	reg[9:0] src_0_s3_21;
	reg[9:0] src_0_s3_22;
	reg[9:0] src_0_s3_23;
	reg[9:0] src_0_s3_24;
	reg[9:0] src_0_s3_25;
	reg[9:0] src_0_s3_26;
	reg[9:0] src_0_s3_27;
	reg[9:0] src_0_s3_28;
	reg[9:0] src_0_s3_29;
	reg[9:0] src_0_s3_30;
	reg[9:0] src_0_s3_31;
	reg[9:0] src_0_s4_0;
	reg[9:0] src_0_s4_1;
	reg[9:0] src_0_s4_2;
	reg[9:0] src_0_s4_3;
	reg[9:0] src_0_s4_4;
	reg[9:0] src_0_s4_5;
	reg[9:0] src_0_s4_6;
	reg[9:0] src_0_s4_7;
	reg[9:0] src_0_s4_8;
	reg[9:0] src_0_s4_9;
	reg[9:0] src_0_s4_10;
	reg[9:0] src_0_s4_11;
	reg[9:0] src_0_s4_12;
	reg[9:0] src_0_s4_13;
	reg[9:0] src_0_s4_14;
	reg[9:0] src_0_s4_15;
	reg[9:0] src_0_s4_16;
	reg[9:0] src_0_s4_17;
	reg[9:0] src_0_s4_18;
	reg[9:0] src_0_s4_19;
	reg[9:0] src_0_s4_20;
	reg[9:0] src_0_s4_21;
	reg[9:0] src_0_s4_22;
	reg[9:0] src_0_s4_23;
	reg[9:0] src_0_s4_24;
	reg[9:0] src_0_s4_25;
	reg[9:0] src_0_s4_26;
	reg[9:0] src_0_s4_27;
	reg[9:0] src_0_s4_28;
	reg[9:0] src_0_s4_29;
	reg[9:0] src_0_s4_30;
	reg[9:0] src_0_s4_31;
	reg[9:0] src_0_s5_0;
	reg[9:0] src_0_s5_1;
	reg[9:0] src_0_s5_2;
	reg[9:0] src_0_s5_3;
	reg[9:0] src_0_s5_4;
	reg[9:0] src_0_s5_5;
	reg[9:0] src_0_s5_6;
	reg[9:0] src_0_s5_7;
	reg[9:0] src_0_s5_8;
	reg[9:0] src_0_s5_9;
	reg[9:0] src_0_s5_10;
	reg[9:0] src_0_s5_11;
	reg[9:0] src_0_s5_12;
	reg[9:0] src_0_s5_13;
	reg[9:0] src_0_s5_14;
	reg[9:0] src_0_s5_15;
	reg[9:0] src_0_s5_16;
	reg[9:0] src_0_s5_17;
	reg[9:0] src_0_s5_18;
	reg[9:0] src_0_s5_19;
	reg[9:0] src_0_s5_20;
	reg[9:0] src_0_s5_21;
	reg[9:0] src_0_s5_22;
	reg[9:0] src_0_s5_23;
	reg[9:0] src_0_s5_24;
	reg[9:0] src_0_s5_25;
	reg[9:0] src_0_s5_26;
	reg[9:0] src_0_s5_27;
	reg[9:0] src_0_s5_28;
	reg[9:0] src_0_s5_29;
	reg[9:0] src_0_s5_30;
	reg[9:0] src_0_s5_31;
	reg[9:0] src_0_s6_0;
	reg[9:0] src_0_s6_1;
	reg[9:0] src_0_s6_2;
	reg[9:0] src_0_s6_3;
	reg[9:0] src_0_s6_4;
	reg[9:0] src_0_s6_5;
	reg[9:0] src_0_s6_6;
	reg[9:0] src_0_s6_7;
	reg[9:0] src_0_s6_8;
	reg[9:0] src_0_s6_9;
	reg[9:0] src_0_s6_10;
	reg[9:0] src_0_s6_11;
	reg[9:0] src_0_s6_12;
	reg[9:0] src_0_s6_13;
	reg[9:0] src_0_s6_14;
	reg[9:0] src_0_s6_15;
	reg[9:0] src_0_s6_16;
	reg[9:0] src_0_s6_17;
	reg[9:0] src_0_s6_18;
	reg[9:0] src_0_s6_19;
	reg[9:0] src_0_s6_20;
	reg[9:0] src_0_s6_21;
	reg[9:0] src_0_s6_22;
	reg[9:0] src_0_s6_23;
	reg[9:0] src_0_s6_24;
	reg[9:0] src_0_s6_25;
	reg[9:0] src_0_s6_26;
	reg[9:0] src_0_s6_27;
	reg[9:0] src_0_s6_28;
	reg[9:0] src_0_s6_29;
	reg[9:0] src_0_s6_30;
	reg[9:0] src_0_s6_31;
	reg[7:0] src_1_0;
	reg[7:0] src_1_1;
	reg[7:0] src_1_2;
	reg[7:0] src_1_3;
	reg[7:0] src_1_4;
	reg[7:0] src_1_5;
	reg[7:0] src_1_6;
	reg[7:0] src_1_7;
	reg[7:0] src_1_8;
	reg[7:0] src_1_9;
	reg[7:0] src_1_10;
	reg[7:0] src_1_11;
	reg[7:0] src_1_12;
	reg[7:0] src_1_13;
	reg[7:0] src_1_14;
	reg[7:0] src_1_15;
	reg[7:0] src_1_16;
	reg[7:0] src_1_17;
	reg[7:0] src_1_18;
	reg[7:0] src_1_19;
	reg[7:0] src_1_20;
	reg[7:0] src_1_21;
	reg[7:0] src_1_22;
	reg[7:0] src_1_23;
	reg[7:0] src_1_24;
	reg[7:0] src_1_25;
	reg[7:0] src_1_26;
	reg[7:0] src_1_27;
	reg[7:0] src_1_28;
	reg[7:0] src_1_29;
	reg[7:0] src_1_30;
	reg[7:0] src_1_31;
	wire[31:0] pe_data_0;
	wire[31:0] pe_data_1;
	wire[31:0] pe_data_2;
	wire[31:0] pe_data_3;
	wire[31:0] pe_data_4;
	wire[31:0] pe_data_5;
	wire[31:0] pe_data_6;
	wire[31:0] pe_data_7;
	wire[31:0] pe_data_8;
	wire[31:0] pe_data_9;
	wire[31:0] pe_data_10;
	wire[31:0] pe_data_11;
	wire[31:0] pe_data_12;
	wire[31:0] pe_data_13;
	wire[31:0] pe_data_14;
	wire[31:0] pe_data_15;
	wire[31:0] pe_data_16;
	wire[31:0] pe_data_17;
	wire[31:0] pe_data_18;
	wire[31:0] pe_data_19;
	wire[31:0] pe_data_20;
	wire[31:0] pe_data_21;
	wire[31:0] pe_data_22;
	wire[31:0] pe_data_23;
	wire[31:0] pe_data_24;
	wire[31:0] pe_data_25;
	wire[31:0] pe_data_26;
	wire[31:0] pe_data_27;
	wire[31:0] pe_data_28;
	wire[31:0] pe_data_29;
	wire[31:0] pe_data_30;
	wire[31:0] pe_data_31;
	wire pe_data_valid;


	`include "hub.v"

	pe_array pe_array0( .clk(clk),
	 .rstn(rstn),
	 .enable(enable),
	 .src_vld(src_vld),
	 .clear(clear),
	 .init(init),
	 .systolic_en(systolic_en),
	 .systolic_depth(systolic_depth),
	 .mac_shift_len(mac_shift_len),
	 .src_0_s0_0(src_0_s0_0),
	.src_0_s0_1(src_0_s0_1),
	.src_0_s0_2(src_0_s0_2),
	.src_0_s0_3(src_0_s0_3),
	.src_0_s0_4(src_0_s0_4),
	.src_0_s0_5(src_0_s0_5),
	.src_0_s0_6(src_0_s0_6),
	.src_0_s0_7(src_0_s0_7),
	.src_0_s0_8(src_0_s0_8),
	.src_0_s0_9(src_0_s0_9),
	.src_0_s0_10(src_0_s0_10),
	.src_0_s0_11(src_0_s0_11),
	.src_0_s0_12(src_0_s0_12),
	.src_0_s0_13(src_0_s0_13),
	.src_0_s0_14(src_0_s0_14),
	.src_0_s0_15(src_0_s0_15),
	.src_0_s0_16(src_0_s0_16),
	.src_0_s0_17(src_0_s0_17),
	.src_0_s0_18(src_0_s0_18),
	.src_0_s0_19(src_0_s0_19),
	.src_0_s0_20(src_0_s0_20),
	.src_0_s0_21(src_0_s0_21),
	.src_0_s0_22(src_0_s0_22),
	.src_0_s0_23(src_0_s0_23),
	.src_0_s0_24(src_0_s0_24),
	.src_0_s0_25(src_0_s0_25),
	.src_0_s0_26(src_0_s0_26),
	.src_0_s0_27(src_0_s0_27),
	.src_0_s0_28(src_0_s0_28),
	.src_0_s0_29(src_0_s0_29),
	.src_0_s0_30(src_0_s0_30),
	.src_0_s0_31(src_0_s0_31),
	 .src_0_s1_0(src_0_s1_0),
	.src_0_s1_1(src_0_s1_1),
	.src_0_s1_2(src_0_s1_2),
	.src_0_s1_3(src_0_s1_3),
	.src_0_s1_4(src_0_s1_4),
	.src_0_s1_5(src_0_s1_5),
	.src_0_s1_6(src_0_s1_6),
	.src_0_s1_7(src_0_s1_7),
	.src_0_s1_8(src_0_s1_8),
	.src_0_s1_9(src_0_s1_9),
	.src_0_s1_10(src_0_s1_10),
	.src_0_s1_11(src_0_s1_11),
	.src_0_s1_12(src_0_s1_12),
	.src_0_s1_13(src_0_s1_13),
	.src_0_s1_14(src_0_s1_14),
	.src_0_s1_15(src_0_s1_15),
	.src_0_s1_16(src_0_s1_16),
	.src_0_s1_17(src_0_s1_17),
	.src_0_s1_18(src_0_s1_18),
	.src_0_s1_19(src_0_s1_19),
	.src_0_s1_20(src_0_s1_20),
	.src_0_s1_21(src_0_s1_21),
	.src_0_s1_22(src_0_s1_22),
	.src_0_s1_23(src_0_s1_23),
	.src_0_s1_24(src_0_s1_24),
	.src_0_s1_25(src_0_s1_25),
	.src_0_s1_26(src_0_s1_26),
	.src_0_s1_27(src_0_s1_27),
	.src_0_s1_28(src_0_s1_28),
	.src_0_s1_29(src_0_s1_29),
	.src_0_s1_30(src_0_s1_30),
	.src_0_s1_31(src_0_s1_31),
	 .src_0_s2_0(src_0_s2_0),
	.src_0_s2_1(src_0_s2_1),
	.src_0_s2_2(src_0_s2_2),
	.src_0_s2_3(src_0_s2_3),
	.src_0_s2_4(src_0_s2_4),
	.src_0_s2_5(src_0_s2_5),
	.src_0_s2_6(src_0_s2_6),
	.src_0_s2_7(src_0_s2_7),
	.src_0_s2_8(src_0_s2_8),
	.src_0_s2_9(src_0_s2_9),
	.src_0_s2_10(src_0_s2_10),
	.src_0_s2_11(src_0_s2_11),
	.src_0_s2_12(src_0_s2_12),
	.src_0_s2_13(src_0_s2_13),
	.src_0_s2_14(src_0_s2_14),
	.src_0_s2_15(src_0_s2_15),
	.src_0_s2_16(src_0_s2_16),
	.src_0_s2_17(src_0_s2_17),
	.src_0_s2_18(src_0_s2_18),
	.src_0_s2_19(src_0_s2_19),
	.src_0_s2_20(src_0_s2_20),
	.src_0_s2_21(src_0_s2_21),
	.src_0_s2_22(src_0_s2_22),
	.src_0_s2_23(src_0_s2_23),
	.src_0_s2_24(src_0_s2_24),
	.src_0_s2_25(src_0_s2_25),
	.src_0_s2_26(src_0_s2_26),
	.src_0_s2_27(src_0_s2_27),
	.src_0_s2_28(src_0_s2_28),
	.src_0_s2_29(src_0_s2_29),
	.src_0_s2_30(src_0_s2_30),
	.src_0_s2_31(src_0_s2_31),
	 .src_0_s3_0(src_0_s3_0),
	.src_0_s3_1(src_0_s3_1),
	.src_0_s3_2(src_0_s3_2),
	.src_0_s3_3(src_0_s3_3),
	.src_0_s3_4(src_0_s3_4),
	.src_0_s3_5(src_0_s3_5),
	.src_0_s3_6(src_0_s3_6),
	.src_0_s3_7(src_0_s3_7),
	.src_0_s3_8(src_0_s3_8),
	.src_0_s3_9(src_0_s3_9),
	.src_0_s3_10(src_0_s3_10),
	.src_0_s3_11(src_0_s3_11),
	.src_0_s3_12(src_0_s3_12),
	.src_0_s3_13(src_0_s3_13),
	.src_0_s3_14(src_0_s3_14),
	.src_0_s3_15(src_0_s3_15),
	.src_0_s3_16(src_0_s3_16),
	.src_0_s3_17(src_0_s3_17),
	.src_0_s3_18(src_0_s3_18),
	.src_0_s3_19(src_0_s3_19),
	.src_0_s3_20(src_0_s3_20),
	.src_0_s3_21(src_0_s3_21),
	.src_0_s3_22(src_0_s3_22),
	.src_0_s3_23(src_0_s3_23),
	.src_0_s3_24(src_0_s3_24),
	.src_0_s3_25(src_0_s3_25),
	.src_0_s3_26(src_0_s3_26),
	.src_0_s3_27(src_0_s3_27),
	.src_0_s3_28(src_0_s3_28),
	.src_0_s3_29(src_0_s3_29),
	.src_0_s3_30(src_0_s3_30),
	.src_0_s3_31(src_0_s3_31),
	 .src_0_s4_0(src_0_s4_0),
	.src_0_s4_1(src_0_s4_1),
	.src_0_s4_2(src_0_s4_2),
	.src_0_s4_3(src_0_s4_3),
	.src_0_s4_4(src_0_s4_4),
	.src_0_s4_5(src_0_s4_5),
	.src_0_s4_6(src_0_s4_6),
	.src_0_s4_7(src_0_s4_7),
	.src_0_s4_8(src_0_s4_8),
	.src_0_s4_9(src_0_s4_9),
	.src_0_s4_10(src_0_s4_10),
	.src_0_s4_11(src_0_s4_11),
	.src_0_s4_12(src_0_s4_12),
	.src_0_s4_13(src_0_s4_13),
	.src_0_s4_14(src_0_s4_14),
	.src_0_s4_15(src_0_s4_15),
	.src_0_s4_16(src_0_s4_16),
	.src_0_s4_17(src_0_s4_17),
	.src_0_s4_18(src_0_s4_18),
	.src_0_s4_19(src_0_s4_19),
	.src_0_s4_20(src_0_s4_20),
	.src_0_s4_21(src_0_s4_21),
	.src_0_s4_22(src_0_s4_22),
	.src_0_s4_23(src_0_s4_23),
	.src_0_s4_24(src_0_s4_24),
	.src_0_s4_25(src_0_s4_25),
	.src_0_s4_26(src_0_s4_26),
	.src_0_s4_27(src_0_s4_27),
	.src_0_s4_28(src_0_s4_28),
	.src_0_s4_29(src_0_s4_29),
	.src_0_s4_30(src_0_s4_30),
	.src_0_s4_31(src_0_s4_31),
	 .src_0_s5_0(src_0_s5_0),
	.src_0_s5_1(src_0_s5_1),
	.src_0_s5_2(src_0_s5_2),
	.src_0_s5_3(src_0_s5_3),
	.src_0_s5_4(src_0_s5_4),
	.src_0_s5_5(src_0_s5_5),
	.src_0_s5_6(src_0_s5_6),
	.src_0_s5_7(src_0_s5_7),
	.src_0_s5_8(src_0_s5_8),
	.src_0_s5_9(src_0_s5_9),
	.src_0_s5_10(src_0_s5_10),
	.src_0_s5_11(src_0_s5_11),
	.src_0_s5_12(src_0_s5_12),
	.src_0_s5_13(src_0_s5_13),
	.src_0_s5_14(src_0_s5_14),
	.src_0_s5_15(src_0_s5_15),
	.src_0_s5_16(src_0_s5_16),
	.src_0_s5_17(src_0_s5_17),
	.src_0_s5_18(src_0_s5_18),
	.src_0_s5_19(src_0_s5_19),
	.src_0_s5_20(src_0_s5_20),
	.src_0_s5_21(src_0_s5_21),
	.src_0_s5_22(src_0_s5_22),
	.src_0_s5_23(src_0_s5_23),
	.src_0_s5_24(src_0_s5_24),
	.src_0_s5_25(src_0_s5_25),
	.src_0_s5_26(src_0_s5_26),
	.src_0_s5_27(src_0_s5_27),
	.src_0_s5_28(src_0_s5_28),
	.src_0_s5_29(src_0_s5_29),
	.src_0_s5_30(src_0_s5_30),
	.src_0_s5_31(src_0_s5_31),
	 .src_0_s6_0(src_0_s6_0),
	.src_0_s6_1(src_0_s6_1),
	.src_0_s6_2(src_0_s6_2),
	.src_0_s6_3(src_0_s6_3),
	.src_0_s6_4(src_0_s6_4),
	.src_0_s6_5(src_0_s6_5),
	.src_0_s6_6(src_0_s6_6),
	.src_0_s6_7(src_0_s6_7),
	.src_0_s6_8(src_0_s6_8),
	.src_0_s6_9(src_0_s6_9),
	.src_0_s6_10(src_0_s6_10),
	.src_0_s6_11(src_0_s6_11),
	.src_0_s6_12(src_0_s6_12),
	.src_0_s6_13(src_0_s6_13),
	.src_0_s6_14(src_0_s6_14),
	.src_0_s6_15(src_0_s6_15),
	.src_0_s6_16(src_0_s6_16),
	.src_0_s6_17(src_0_s6_17),
	.src_0_s6_18(src_0_s6_18),
	.src_0_s6_19(src_0_s6_19),
	.src_0_s6_20(src_0_s6_20),
	.src_0_s6_21(src_0_s6_21),
	.src_0_s6_22(src_0_s6_22),
	.src_0_s6_23(src_0_s6_23),
	.src_0_s6_24(src_0_s6_24),
	.src_0_s6_25(src_0_s6_25),
	.src_0_s6_26(src_0_s6_26),
	.src_0_s6_27(src_0_s6_27),
	.src_0_s6_28(src_0_s6_28),
	.src_0_s6_29(src_0_s6_29),
	.src_0_s6_30(src_0_s6_30),
	.src_0_s6_31(src_0_s6_31),
	 .src_1_0(src_1_0),
	.src_1_1(src_1_1),
	.src_1_2(src_1_2),
	.src_1_3(src_1_3),
	.src_1_4(src_1_4),
	.src_1_5(src_1_5),
	.src_1_6(src_1_6),
	.src_1_7(src_1_7),
	.src_1_8(src_1_8),
	.src_1_9(src_1_9),
	.src_1_10(src_1_10),
	.src_1_11(src_1_11),
	.src_1_12(src_1_12),
	.src_1_13(src_1_13),
	.src_1_14(src_1_14),
	.src_1_15(src_1_15),
	.src_1_16(src_1_16),
	.src_1_17(src_1_17),
	.src_1_18(src_1_18),
	.src_1_19(src_1_19),
	.src_1_20(src_1_20),
	.src_1_21(src_1_21),
	.src_1_22(src_1_22),
	.src_1_23(src_1_23),
	.src_1_24(src_1_24),
	.src_1_25(src_1_25),
	.src_1_26(src_1_26),
	.src_1_27(src_1_27),
	.src_1_28(src_1_28),
	.src_1_29(src_1_29),
	.src_1_30(src_1_30),
	.src_1_31(src_1_31),
	 .pe_data_0(pe_data_0),
	.pe_data_1(pe_data_1),
	.pe_data_2(pe_data_2),
	.pe_data_3(pe_data_3),
	.pe_data_4(pe_data_4),
	.pe_data_5(pe_data_5),
	.pe_data_6(pe_data_6),
	.pe_data_7(pe_data_7),
	.pe_data_8(pe_data_8),
	.pe_data_9(pe_data_9),
	.pe_data_10(pe_data_10),
	.pe_data_11(pe_data_11),
	.pe_data_12(pe_data_12),
	.pe_data_13(pe_data_13),
	.pe_data_14(pe_data_14),
	.pe_data_15(pe_data_15),
	.pe_data_16(pe_data_16),
	.pe_data_17(pe_data_17),
	.pe_data_18(pe_data_18),
	.pe_data_19(pe_data_19),
	.pe_data_20(pe_data_20),
	.pe_data_21(pe_data_21),
	.pe_data_22(pe_data_22),
	.pe_data_23(pe_data_23),
	.pe_data_24(pe_data_24),
	.pe_data_25(pe_data_25),
	.pe_data_26(pe_data_26),
	.pe_data_27(pe_data_27),
	.pe_data_28(pe_data_28),
	.pe_data_29(pe_data_29),
	.pe_data_30(pe_data_30),
	.pe_data_31(pe_data_31),
	 .pe_data_valid(pe_data_valid) );


	// Variables that can be set externally
	reg clk_firstEdge;
	reg clk_initialized;
	reg clk_started;
	real clk_startTime;
	real clk_firstHalf;
	real clk_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    clk_firstEdge = 1'b1;
	    clk_startTime = 0.000;		// Offset from time 0 to first edge.
	    clk_firstHalf = 5.000;	// Delay for first half of cycle.
	    clk_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on clk_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( clk_initialized !== 1'b1 )
	        @( clk_initialized );
	
	    if ( clk_startTime > 0.0 ) begin
	        clk_started = #clk_startTime 1;
	    end
	    else begin
	        clk_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.clk ) begin
	    if ( clk_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( clk_started !== 1'b1 )
	        @( clk_started );
	
	    clk <= clk_firstEdge;
	    if ( clk_firstHalf > 0.0 ) begin
	        #clk_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        clk = ~clk_firstEdge;
	    end
	    else begin
	        clk = ~clk_firstEdge;
	    end
	    if ( clk_secondHalf > 0.0 ) begin
	        #clk_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg rstn_firstEdge;
	reg rstn_initialized;
	reg rstn_started;
	real rstn_startTime;
	real rstn_firstHalf;
	real rstn_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    rstn_firstEdge = 1'b1;
	    rstn_startTime = 0.000;		// Offset from time 0 to first edge.
	    rstn_firstHalf = 5.000;	// Delay for first half of cycle.
	    rstn_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on rstn_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( rstn_initialized !== 1'b1 )
	        @( rstn_initialized );
	
	    if ( rstn_startTime > 0.0 ) begin
	        rstn_started = #rstn_startTime 1;
	    end
	    else begin
	        rstn_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.rstn ) begin
	    if ( rstn_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( rstn_started !== 1'b1 )
	        @( rstn_started );
	
	    rstn <= rstn_firstEdge;
	    if ( rstn_firstHalf > 0.0 ) begin
	        #rstn_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        rstn = ~rstn_firstEdge;
	    end
	    else begin
	        rstn = ~rstn_firstEdge;
	    end
	    if ( rstn_secondHalf > 0.0 ) begin
	        #rstn_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg enable_firstEdge;
	reg enable_initialized;
	reg enable_started;
	real enable_startTime;
	real enable_firstHalf;
	real enable_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    enable_firstEdge = 1'b1;
	    enable_startTime = 0.000;		// Offset from time 0 to first edge.
	    enable_firstHalf = 5.000;	// Delay for first half of cycle.
	    enable_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on enable_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( enable_initialized !== 1'b1 )
	        @( enable_initialized );
	
	    if ( enable_startTime > 0.0 ) begin
	        enable_started = #enable_startTime 1;
	    end
	    else begin
	        enable_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.enable ) begin
	    if ( enable_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( enable_started !== 1'b1 )
	        @( enable_started );
	
	    enable <= enable_firstEdge;
	    if ( enable_firstHalf > 0.0 ) begin
	        #enable_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        enable = ~enable_firstEdge;
	    end
	    else begin
	        enable = ~enable_firstEdge;
	    end
	    if ( enable_secondHalf > 0.0 ) begin
	        #enable_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg src_vld_firstEdge;
	reg src_vld_initialized;
	reg src_vld_started;
	real src_vld_startTime;
	real src_vld_firstHalf;
	real src_vld_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    src_vld_firstEdge = 1'b1;
	    src_vld_startTime = 0.000;		// Offset from time 0 to first edge.
	    src_vld_firstHalf = 5.000;	// Delay for first half of cycle.
	    src_vld_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on src_vld_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( src_vld_initialized !== 1'b1 )
	        @( src_vld_initialized );
	
	    if ( src_vld_startTime > 0.0 ) begin
	        src_vld_started = #src_vld_startTime 1;
	    end
	    else begin
	        src_vld_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.src_vld ) begin
	    if ( src_vld_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( src_vld_started !== 1'b1 )
	        @( src_vld_started );
	
	    src_vld <= src_vld_firstEdge;
	    if ( src_vld_firstHalf > 0.0 ) begin
	        #src_vld_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        src_vld = ~src_vld_firstEdge;
	    end
	    else begin
	        src_vld = ~src_vld_firstEdge;
	    end
	    if ( src_vld_secondHalf > 0.0 ) begin
	        #src_vld_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg clear_firstEdge;
	reg clear_initialized;
	reg clear_started;
	real clear_startTime;
	real clear_firstHalf;
	real clear_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    clear_firstEdge = 1'b1;
	    clear_startTime = 0.000;		// Offset from time 0 to first edge.
	    clear_firstHalf = 5.000;	// Delay for first half of cycle.
	    clear_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on clear_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( clear_initialized !== 1'b1 )
	        @( clear_initialized );
	
	    if ( clear_startTime > 0.0 ) begin
	        clear_started = #clear_startTime 1;
	    end
	    else begin
	        clear_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.clear ) begin
	    if ( clear_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( clear_started !== 1'b1 )
	        @( clear_started );
	
	    clear <= clear_firstEdge;
	    if ( clear_firstHalf > 0.0 ) begin
	        #clear_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        clear = ~clear_firstEdge;
	    end
	    else begin
	        clear = ~clear_firstEdge;
	    end
	    if ( clear_secondHalf > 0.0 ) begin
	        #clear_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg init_firstEdge;
	reg init_initialized;
	reg init_started;
	real init_startTime;
	real init_firstHalf;
	real init_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    init_firstEdge = 1'b1;
	    init_startTime = 0.000;		// Offset from time 0 to first edge.
	    init_firstHalf = 5.000;	// Delay for first half of cycle.
	    init_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on init_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( init_initialized !== 1'b1 )
	        @( init_initialized );
	
	    if ( init_startTime > 0.0 ) begin
	        init_started = #init_startTime 1;
	    end
	    else begin
	        init_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pe_array0.init ) begin
	    if ( init_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( init_started !== 1'b1 )
	        @( init_started );
	
	    init <= init_firstEdge;
	    if ( init_firstHalf > 0.0 ) begin
	        #init_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        init = ~init_firstEdge;
	    end
	    else begin
	        init = ~init_firstEdge;
	    end
	    if ( init_secondHalf > 0.0 ) begin
	        #init_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
