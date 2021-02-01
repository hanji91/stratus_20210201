//
// Verilog co-simulation wrapper module for the cache module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the cache_cosim.h 
// file.

`timescale 1 ps / 1 ps

module cache_cosim;

	reg clk;
	reg rstn;
	reg cache_en;
	reg[7:0] systolic_en;
	reg[7:0] systolic_depth;
	reg addr_if_start;
	reg[7:0] systolic_sel;
	reg[319:0] feature_data;
	reg feature_share_en;
	reg feature_data_en;
	reg[15:0] feature_data_sel;
	reg[255:0] weight_data;
	reg weight_data_en;
	wire[9:0] mac_src_0_s0_0;
	wire[9:0] mac_src_0_s0_1;
	wire[9:0] mac_src_0_s0_2;
	wire[9:0] mac_src_0_s0_3;
	wire[9:0] mac_src_0_s0_4;
	wire[9:0] mac_src_0_s0_5;
	wire[9:0] mac_src_0_s0_6;
	wire[9:0] mac_src_0_s0_7;
	wire[9:0] mac_src_0_s0_8;
	wire[9:0] mac_src_0_s0_9;
	wire[9:0] mac_src_0_s0_10;
	wire[9:0] mac_src_0_s0_11;
	wire[9:0] mac_src_0_s0_12;
	wire[9:0] mac_src_0_s0_13;
	wire[9:0] mac_src_0_s0_14;
	wire[9:0] mac_src_0_s0_15;
	wire[9:0] mac_src_0_s0_16;
	wire[9:0] mac_src_0_s0_17;
	wire[9:0] mac_src_0_s0_18;
	wire[9:0] mac_src_0_s0_19;
	wire[9:0] mac_src_0_s0_20;
	wire[9:0] mac_src_0_s0_21;
	wire[9:0] mac_src_0_s0_22;
	wire[9:0] mac_src_0_s0_23;
	wire[9:0] mac_src_0_s0_24;
	wire[9:0] mac_src_0_s0_25;
	wire[9:0] mac_src_0_s0_26;
	wire[9:0] mac_src_0_s0_27;
	wire[9:0] mac_src_0_s0_28;
	wire[9:0] mac_src_0_s0_29;
	wire[9:0] mac_src_0_s0_30;
	wire[9:0] mac_src_0_s0_31;
	wire[9:0] mac_src_0_s1_0;
	wire[9:0] mac_src_0_s1_1;
	wire[9:0] mac_src_0_s1_2;
	wire[9:0] mac_src_0_s1_3;
	wire[9:0] mac_src_0_s1_4;
	wire[9:0] mac_src_0_s1_5;
	wire[9:0] mac_src_0_s1_6;
	wire[9:0] mac_src_0_s1_7;
	wire[9:0] mac_src_0_s1_8;
	wire[9:0] mac_src_0_s1_9;
	wire[9:0] mac_src_0_s1_10;
	wire[9:0] mac_src_0_s1_11;
	wire[9:0] mac_src_0_s1_12;
	wire[9:0] mac_src_0_s1_13;
	wire[9:0] mac_src_0_s1_14;
	wire[9:0] mac_src_0_s1_15;
	wire[9:0] mac_src_0_s1_16;
	wire[9:0] mac_src_0_s1_17;
	wire[9:0] mac_src_0_s1_18;
	wire[9:0] mac_src_0_s1_19;
	wire[9:0] mac_src_0_s1_20;
	wire[9:0] mac_src_0_s1_21;
	wire[9:0] mac_src_0_s1_22;
	wire[9:0] mac_src_0_s1_23;
	wire[9:0] mac_src_0_s1_24;
	wire[9:0] mac_src_0_s1_25;
	wire[9:0] mac_src_0_s1_26;
	wire[9:0] mac_src_0_s1_27;
	wire[9:0] mac_src_0_s1_28;
	wire[9:0] mac_src_0_s1_29;
	wire[9:0] mac_src_0_s1_30;
	wire[9:0] mac_src_0_s1_31;
	wire[9:0] mac_src_0_s2_0;
	wire[9:0] mac_src_0_s2_1;
	wire[9:0] mac_src_0_s2_2;
	wire[9:0] mac_src_0_s2_3;
	wire[9:0] mac_src_0_s2_4;
	wire[9:0] mac_src_0_s2_5;
	wire[9:0] mac_src_0_s2_6;
	wire[9:0] mac_src_0_s2_7;
	wire[9:0] mac_src_0_s2_8;
	wire[9:0] mac_src_0_s2_9;
	wire[9:0] mac_src_0_s2_10;
	wire[9:0] mac_src_0_s2_11;
	wire[9:0] mac_src_0_s2_12;
	wire[9:0] mac_src_0_s2_13;
	wire[9:0] mac_src_0_s2_14;
	wire[9:0] mac_src_0_s2_15;
	wire[9:0] mac_src_0_s2_16;
	wire[9:0] mac_src_0_s2_17;
	wire[9:0] mac_src_0_s2_18;
	wire[9:0] mac_src_0_s2_19;
	wire[9:0] mac_src_0_s2_20;
	wire[9:0] mac_src_0_s2_21;
	wire[9:0] mac_src_0_s2_22;
	wire[9:0] mac_src_0_s2_23;
	wire[9:0] mac_src_0_s2_24;
	wire[9:0] mac_src_0_s2_25;
	wire[9:0] mac_src_0_s2_26;
	wire[9:0] mac_src_0_s2_27;
	wire[9:0] mac_src_0_s2_28;
	wire[9:0] mac_src_0_s2_29;
	wire[9:0] mac_src_0_s2_30;
	wire[9:0] mac_src_0_s2_31;
	wire[9:0] mac_src_0_s3_0;
	wire[9:0] mac_src_0_s3_1;
	wire[9:0] mac_src_0_s3_2;
	wire[9:0] mac_src_0_s3_3;
	wire[9:0] mac_src_0_s3_4;
	wire[9:0] mac_src_0_s3_5;
	wire[9:0] mac_src_0_s3_6;
	wire[9:0] mac_src_0_s3_7;
	wire[9:0] mac_src_0_s3_8;
	wire[9:0] mac_src_0_s3_9;
	wire[9:0] mac_src_0_s3_10;
	wire[9:0] mac_src_0_s3_11;
	wire[9:0] mac_src_0_s3_12;
	wire[9:0] mac_src_0_s3_13;
	wire[9:0] mac_src_0_s3_14;
	wire[9:0] mac_src_0_s3_15;
	wire[9:0] mac_src_0_s3_16;
	wire[9:0] mac_src_0_s3_17;
	wire[9:0] mac_src_0_s3_18;
	wire[9:0] mac_src_0_s3_19;
	wire[9:0] mac_src_0_s3_20;
	wire[9:0] mac_src_0_s3_21;
	wire[9:0] mac_src_0_s3_22;
	wire[9:0] mac_src_0_s3_23;
	wire[9:0] mac_src_0_s3_24;
	wire[9:0] mac_src_0_s3_25;
	wire[9:0] mac_src_0_s3_26;
	wire[9:0] mac_src_0_s3_27;
	wire[9:0] mac_src_0_s3_28;
	wire[9:0] mac_src_0_s3_29;
	wire[9:0] mac_src_0_s3_30;
	wire[9:0] mac_src_0_s3_31;
	wire[9:0] mac_src_0_s4_0;
	wire[9:0] mac_src_0_s4_1;
	wire[9:0] mac_src_0_s4_2;
	wire[9:0] mac_src_0_s4_3;
	wire[9:0] mac_src_0_s4_4;
	wire[9:0] mac_src_0_s4_5;
	wire[9:0] mac_src_0_s4_6;
	wire[9:0] mac_src_0_s4_7;
	wire[9:0] mac_src_0_s4_8;
	wire[9:0] mac_src_0_s4_9;
	wire[9:0] mac_src_0_s4_10;
	wire[9:0] mac_src_0_s4_11;
	wire[9:0] mac_src_0_s4_12;
	wire[9:0] mac_src_0_s4_13;
	wire[9:0] mac_src_0_s4_14;
	wire[9:0] mac_src_0_s4_15;
	wire[9:0] mac_src_0_s4_16;
	wire[9:0] mac_src_0_s4_17;
	wire[9:0] mac_src_0_s4_18;
	wire[9:0] mac_src_0_s4_19;
	wire[9:0] mac_src_0_s4_20;
	wire[9:0] mac_src_0_s4_21;
	wire[9:0] mac_src_0_s4_22;
	wire[9:0] mac_src_0_s4_23;
	wire[9:0] mac_src_0_s4_24;
	wire[9:0] mac_src_0_s4_25;
	wire[9:0] mac_src_0_s4_26;
	wire[9:0] mac_src_0_s4_27;
	wire[9:0] mac_src_0_s4_28;
	wire[9:0] mac_src_0_s4_29;
	wire[9:0] mac_src_0_s4_30;
	wire[9:0] mac_src_0_s4_31;
	wire[9:0] mac_src_0_s5_0;
	wire[9:0] mac_src_0_s5_1;
	wire[9:0] mac_src_0_s5_2;
	wire[9:0] mac_src_0_s5_3;
	wire[9:0] mac_src_0_s5_4;
	wire[9:0] mac_src_0_s5_5;
	wire[9:0] mac_src_0_s5_6;
	wire[9:0] mac_src_0_s5_7;
	wire[9:0] mac_src_0_s5_8;
	wire[9:0] mac_src_0_s5_9;
	wire[9:0] mac_src_0_s5_10;
	wire[9:0] mac_src_0_s5_11;
	wire[9:0] mac_src_0_s5_12;
	wire[9:0] mac_src_0_s5_13;
	wire[9:0] mac_src_0_s5_14;
	wire[9:0] mac_src_0_s5_15;
	wire[9:0] mac_src_0_s5_16;
	wire[9:0] mac_src_0_s5_17;
	wire[9:0] mac_src_0_s5_18;
	wire[9:0] mac_src_0_s5_19;
	wire[9:0] mac_src_0_s5_20;
	wire[9:0] mac_src_0_s5_21;
	wire[9:0] mac_src_0_s5_22;
	wire[9:0] mac_src_0_s5_23;
	wire[9:0] mac_src_0_s5_24;
	wire[9:0] mac_src_0_s5_25;
	wire[9:0] mac_src_0_s5_26;
	wire[9:0] mac_src_0_s5_27;
	wire[9:0] mac_src_0_s5_28;
	wire[9:0] mac_src_0_s5_29;
	wire[9:0] mac_src_0_s5_30;
	wire[9:0] mac_src_0_s5_31;
	wire[9:0] mac_src_0_s6_0;
	wire[9:0] mac_src_0_s6_1;
	wire[9:0] mac_src_0_s6_2;
	wire[9:0] mac_src_0_s6_3;
	wire[9:0] mac_src_0_s6_4;
	wire[9:0] mac_src_0_s6_5;
	wire[9:0] mac_src_0_s6_6;
	wire[9:0] mac_src_0_s6_7;
	wire[9:0] mac_src_0_s6_8;
	wire[9:0] mac_src_0_s6_9;
	wire[9:0] mac_src_0_s6_10;
	wire[9:0] mac_src_0_s6_11;
	wire[9:0] mac_src_0_s6_12;
	wire[9:0] mac_src_0_s6_13;
	wire[9:0] mac_src_0_s6_14;
	wire[9:0] mac_src_0_s6_15;
	wire[9:0] mac_src_0_s6_16;
	wire[9:0] mac_src_0_s6_17;
	wire[9:0] mac_src_0_s6_18;
	wire[9:0] mac_src_0_s6_19;
	wire[9:0] mac_src_0_s6_20;
	wire[9:0] mac_src_0_s6_21;
	wire[9:0] mac_src_0_s6_22;
	wire[9:0] mac_src_0_s6_23;
	wire[9:0] mac_src_0_s6_24;
	wire[9:0] mac_src_0_s6_25;
	wire[9:0] mac_src_0_s6_26;
	wire[9:0] mac_src_0_s6_27;
	wire[9:0] mac_src_0_s6_28;
	wire[9:0] mac_src_0_s6_29;
	wire[9:0] mac_src_0_s6_30;
	wire[9:0] mac_src_0_s6_31;
	wire[7:0] mac_src_1_0;
	wire[7:0] mac_src_1_1;
	wire[7:0] mac_src_1_2;
	wire[7:0] mac_src_1_3;
	wire[7:0] mac_src_1_4;
	wire[7:0] mac_src_1_5;
	wire[7:0] mac_src_1_6;
	wire[7:0] mac_src_1_7;
	wire[7:0] mac_src_1_8;
	wire[7:0] mac_src_1_9;
	wire[7:0] mac_src_1_10;
	wire[7:0] mac_src_1_11;
	wire[7:0] mac_src_1_12;
	wire[7:0] mac_src_1_13;
	wire[7:0] mac_src_1_14;
	wire[7:0] mac_src_1_15;
	wire[7:0] mac_src_1_16;
	wire[7:0] mac_src_1_17;
	wire[7:0] mac_src_1_18;
	wire[7:0] mac_src_1_19;
	wire[7:0] mac_src_1_20;
	wire[7:0] mac_src_1_21;
	wire[7:0] mac_src_1_22;
	wire[7:0] mac_src_1_23;
	wire[7:0] mac_src_1_24;
	wire[7:0] mac_src_1_25;
	wire[7:0] mac_src_1_26;
	wire[7:0] mac_src_1_27;
	wire[7:0] mac_src_1_28;
	wire[7:0] mac_src_1_29;
	wire[7:0] mac_src_1_30;
	wire[7:0] mac_src_1_31;
	wire mac_src_valid;
	wire mac_clear;


	`include "hub.v"

	cache cache0( .clk(clk),
	 .rstn(rstn),
	 .cache_en(cache_en),
	 .systolic_en(systolic_en),
	 .systolic_depth(systolic_depth),
	 .addr_if_start(addr_if_start),
	 .systolic_sel(systolic_sel),
	 .feature_data(feature_data),
	 .feature_share_en(feature_share_en),
	 .feature_data_en(feature_data_en),
	 .feature_data_sel(feature_data_sel),
	 .weight_data(weight_data),
	 .weight_data_en(weight_data_en),
	 .mac_src_0_s0_0(mac_src_0_s0_0),
	.mac_src_0_s0_1(mac_src_0_s0_1),
	.mac_src_0_s0_2(mac_src_0_s0_2),
	.mac_src_0_s0_3(mac_src_0_s0_3),
	.mac_src_0_s0_4(mac_src_0_s0_4),
	.mac_src_0_s0_5(mac_src_0_s0_5),
	.mac_src_0_s0_6(mac_src_0_s0_6),
	.mac_src_0_s0_7(mac_src_0_s0_7),
	.mac_src_0_s0_8(mac_src_0_s0_8),
	.mac_src_0_s0_9(mac_src_0_s0_9),
	.mac_src_0_s0_10(mac_src_0_s0_10),
	.mac_src_0_s0_11(mac_src_0_s0_11),
	.mac_src_0_s0_12(mac_src_0_s0_12),
	.mac_src_0_s0_13(mac_src_0_s0_13),
	.mac_src_0_s0_14(mac_src_0_s0_14),
	.mac_src_0_s0_15(mac_src_0_s0_15),
	.mac_src_0_s0_16(mac_src_0_s0_16),
	.mac_src_0_s0_17(mac_src_0_s0_17),
	.mac_src_0_s0_18(mac_src_0_s0_18),
	.mac_src_0_s0_19(mac_src_0_s0_19),
	.mac_src_0_s0_20(mac_src_0_s0_20),
	.mac_src_0_s0_21(mac_src_0_s0_21),
	.mac_src_0_s0_22(mac_src_0_s0_22),
	.mac_src_0_s0_23(mac_src_0_s0_23),
	.mac_src_0_s0_24(mac_src_0_s0_24),
	.mac_src_0_s0_25(mac_src_0_s0_25),
	.mac_src_0_s0_26(mac_src_0_s0_26),
	.mac_src_0_s0_27(mac_src_0_s0_27),
	.mac_src_0_s0_28(mac_src_0_s0_28),
	.mac_src_0_s0_29(mac_src_0_s0_29),
	.mac_src_0_s0_30(mac_src_0_s0_30),
	.mac_src_0_s0_31(mac_src_0_s0_31),
	 .mac_src_0_s1_0(mac_src_0_s1_0),
	.mac_src_0_s1_1(mac_src_0_s1_1),
	.mac_src_0_s1_2(mac_src_0_s1_2),
	.mac_src_0_s1_3(mac_src_0_s1_3),
	.mac_src_0_s1_4(mac_src_0_s1_4),
	.mac_src_0_s1_5(mac_src_0_s1_5),
	.mac_src_0_s1_6(mac_src_0_s1_6),
	.mac_src_0_s1_7(mac_src_0_s1_7),
	.mac_src_0_s1_8(mac_src_0_s1_8),
	.mac_src_0_s1_9(mac_src_0_s1_9),
	.mac_src_0_s1_10(mac_src_0_s1_10),
	.mac_src_0_s1_11(mac_src_0_s1_11),
	.mac_src_0_s1_12(mac_src_0_s1_12),
	.mac_src_0_s1_13(mac_src_0_s1_13),
	.mac_src_0_s1_14(mac_src_0_s1_14),
	.mac_src_0_s1_15(mac_src_0_s1_15),
	.mac_src_0_s1_16(mac_src_0_s1_16),
	.mac_src_0_s1_17(mac_src_0_s1_17),
	.mac_src_0_s1_18(mac_src_0_s1_18),
	.mac_src_0_s1_19(mac_src_0_s1_19),
	.mac_src_0_s1_20(mac_src_0_s1_20),
	.mac_src_0_s1_21(mac_src_0_s1_21),
	.mac_src_0_s1_22(mac_src_0_s1_22),
	.mac_src_0_s1_23(mac_src_0_s1_23),
	.mac_src_0_s1_24(mac_src_0_s1_24),
	.mac_src_0_s1_25(mac_src_0_s1_25),
	.mac_src_0_s1_26(mac_src_0_s1_26),
	.mac_src_0_s1_27(mac_src_0_s1_27),
	.mac_src_0_s1_28(mac_src_0_s1_28),
	.mac_src_0_s1_29(mac_src_0_s1_29),
	.mac_src_0_s1_30(mac_src_0_s1_30),
	.mac_src_0_s1_31(mac_src_0_s1_31),
	 .mac_src_0_s2_0(mac_src_0_s2_0),
	.mac_src_0_s2_1(mac_src_0_s2_1),
	.mac_src_0_s2_2(mac_src_0_s2_2),
	.mac_src_0_s2_3(mac_src_0_s2_3),
	.mac_src_0_s2_4(mac_src_0_s2_4),
	.mac_src_0_s2_5(mac_src_0_s2_5),
	.mac_src_0_s2_6(mac_src_0_s2_6),
	.mac_src_0_s2_7(mac_src_0_s2_7),
	.mac_src_0_s2_8(mac_src_0_s2_8),
	.mac_src_0_s2_9(mac_src_0_s2_9),
	.mac_src_0_s2_10(mac_src_0_s2_10),
	.mac_src_0_s2_11(mac_src_0_s2_11),
	.mac_src_0_s2_12(mac_src_0_s2_12),
	.mac_src_0_s2_13(mac_src_0_s2_13),
	.mac_src_0_s2_14(mac_src_0_s2_14),
	.mac_src_0_s2_15(mac_src_0_s2_15),
	.mac_src_0_s2_16(mac_src_0_s2_16),
	.mac_src_0_s2_17(mac_src_0_s2_17),
	.mac_src_0_s2_18(mac_src_0_s2_18),
	.mac_src_0_s2_19(mac_src_0_s2_19),
	.mac_src_0_s2_20(mac_src_0_s2_20),
	.mac_src_0_s2_21(mac_src_0_s2_21),
	.mac_src_0_s2_22(mac_src_0_s2_22),
	.mac_src_0_s2_23(mac_src_0_s2_23),
	.mac_src_0_s2_24(mac_src_0_s2_24),
	.mac_src_0_s2_25(mac_src_0_s2_25),
	.mac_src_0_s2_26(mac_src_0_s2_26),
	.mac_src_0_s2_27(mac_src_0_s2_27),
	.mac_src_0_s2_28(mac_src_0_s2_28),
	.mac_src_0_s2_29(mac_src_0_s2_29),
	.mac_src_0_s2_30(mac_src_0_s2_30),
	.mac_src_0_s2_31(mac_src_0_s2_31),
	 .mac_src_0_s3_0(mac_src_0_s3_0),
	.mac_src_0_s3_1(mac_src_0_s3_1),
	.mac_src_0_s3_2(mac_src_0_s3_2),
	.mac_src_0_s3_3(mac_src_0_s3_3),
	.mac_src_0_s3_4(mac_src_0_s3_4),
	.mac_src_0_s3_5(mac_src_0_s3_5),
	.mac_src_0_s3_6(mac_src_0_s3_6),
	.mac_src_0_s3_7(mac_src_0_s3_7),
	.mac_src_0_s3_8(mac_src_0_s3_8),
	.mac_src_0_s3_9(mac_src_0_s3_9),
	.mac_src_0_s3_10(mac_src_0_s3_10),
	.mac_src_0_s3_11(mac_src_0_s3_11),
	.mac_src_0_s3_12(mac_src_0_s3_12),
	.mac_src_0_s3_13(mac_src_0_s3_13),
	.mac_src_0_s3_14(mac_src_0_s3_14),
	.mac_src_0_s3_15(mac_src_0_s3_15),
	.mac_src_0_s3_16(mac_src_0_s3_16),
	.mac_src_0_s3_17(mac_src_0_s3_17),
	.mac_src_0_s3_18(mac_src_0_s3_18),
	.mac_src_0_s3_19(mac_src_0_s3_19),
	.mac_src_0_s3_20(mac_src_0_s3_20),
	.mac_src_0_s3_21(mac_src_0_s3_21),
	.mac_src_0_s3_22(mac_src_0_s3_22),
	.mac_src_0_s3_23(mac_src_0_s3_23),
	.mac_src_0_s3_24(mac_src_0_s3_24),
	.mac_src_0_s3_25(mac_src_0_s3_25),
	.mac_src_0_s3_26(mac_src_0_s3_26),
	.mac_src_0_s3_27(mac_src_0_s3_27),
	.mac_src_0_s3_28(mac_src_0_s3_28),
	.mac_src_0_s3_29(mac_src_0_s3_29),
	.mac_src_0_s3_30(mac_src_0_s3_30),
	.mac_src_0_s3_31(mac_src_0_s3_31),
	 .mac_src_0_s4_0(mac_src_0_s4_0),
	.mac_src_0_s4_1(mac_src_0_s4_1),
	.mac_src_0_s4_2(mac_src_0_s4_2),
	.mac_src_0_s4_3(mac_src_0_s4_3),
	.mac_src_0_s4_4(mac_src_0_s4_4),
	.mac_src_0_s4_5(mac_src_0_s4_5),
	.mac_src_0_s4_6(mac_src_0_s4_6),
	.mac_src_0_s4_7(mac_src_0_s4_7),
	.mac_src_0_s4_8(mac_src_0_s4_8),
	.mac_src_0_s4_9(mac_src_0_s4_9),
	.mac_src_0_s4_10(mac_src_0_s4_10),
	.mac_src_0_s4_11(mac_src_0_s4_11),
	.mac_src_0_s4_12(mac_src_0_s4_12),
	.mac_src_0_s4_13(mac_src_0_s4_13),
	.mac_src_0_s4_14(mac_src_0_s4_14),
	.mac_src_0_s4_15(mac_src_0_s4_15),
	.mac_src_0_s4_16(mac_src_0_s4_16),
	.mac_src_0_s4_17(mac_src_0_s4_17),
	.mac_src_0_s4_18(mac_src_0_s4_18),
	.mac_src_0_s4_19(mac_src_0_s4_19),
	.mac_src_0_s4_20(mac_src_0_s4_20),
	.mac_src_0_s4_21(mac_src_0_s4_21),
	.mac_src_0_s4_22(mac_src_0_s4_22),
	.mac_src_0_s4_23(mac_src_0_s4_23),
	.mac_src_0_s4_24(mac_src_0_s4_24),
	.mac_src_0_s4_25(mac_src_0_s4_25),
	.mac_src_0_s4_26(mac_src_0_s4_26),
	.mac_src_0_s4_27(mac_src_0_s4_27),
	.mac_src_0_s4_28(mac_src_0_s4_28),
	.mac_src_0_s4_29(mac_src_0_s4_29),
	.mac_src_0_s4_30(mac_src_0_s4_30),
	.mac_src_0_s4_31(mac_src_0_s4_31),
	 .mac_src_0_s5_0(mac_src_0_s5_0),
	.mac_src_0_s5_1(mac_src_0_s5_1),
	.mac_src_0_s5_2(mac_src_0_s5_2),
	.mac_src_0_s5_3(mac_src_0_s5_3),
	.mac_src_0_s5_4(mac_src_0_s5_4),
	.mac_src_0_s5_5(mac_src_0_s5_5),
	.mac_src_0_s5_6(mac_src_0_s5_6),
	.mac_src_0_s5_7(mac_src_0_s5_7),
	.mac_src_0_s5_8(mac_src_0_s5_8),
	.mac_src_0_s5_9(mac_src_0_s5_9),
	.mac_src_0_s5_10(mac_src_0_s5_10),
	.mac_src_0_s5_11(mac_src_0_s5_11),
	.mac_src_0_s5_12(mac_src_0_s5_12),
	.mac_src_0_s5_13(mac_src_0_s5_13),
	.mac_src_0_s5_14(mac_src_0_s5_14),
	.mac_src_0_s5_15(mac_src_0_s5_15),
	.mac_src_0_s5_16(mac_src_0_s5_16),
	.mac_src_0_s5_17(mac_src_0_s5_17),
	.mac_src_0_s5_18(mac_src_0_s5_18),
	.mac_src_0_s5_19(mac_src_0_s5_19),
	.mac_src_0_s5_20(mac_src_0_s5_20),
	.mac_src_0_s5_21(mac_src_0_s5_21),
	.mac_src_0_s5_22(mac_src_0_s5_22),
	.mac_src_0_s5_23(mac_src_0_s5_23),
	.mac_src_0_s5_24(mac_src_0_s5_24),
	.mac_src_0_s5_25(mac_src_0_s5_25),
	.mac_src_0_s5_26(mac_src_0_s5_26),
	.mac_src_0_s5_27(mac_src_0_s5_27),
	.mac_src_0_s5_28(mac_src_0_s5_28),
	.mac_src_0_s5_29(mac_src_0_s5_29),
	.mac_src_0_s5_30(mac_src_0_s5_30),
	.mac_src_0_s5_31(mac_src_0_s5_31),
	 .mac_src_0_s6_0(mac_src_0_s6_0),
	.mac_src_0_s6_1(mac_src_0_s6_1),
	.mac_src_0_s6_2(mac_src_0_s6_2),
	.mac_src_0_s6_3(mac_src_0_s6_3),
	.mac_src_0_s6_4(mac_src_0_s6_4),
	.mac_src_0_s6_5(mac_src_0_s6_5),
	.mac_src_0_s6_6(mac_src_0_s6_6),
	.mac_src_0_s6_7(mac_src_0_s6_7),
	.mac_src_0_s6_8(mac_src_0_s6_8),
	.mac_src_0_s6_9(mac_src_0_s6_9),
	.mac_src_0_s6_10(mac_src_0_s6_10),
	.mac_src_0_s6_11(mac_src_0_s6_11),
	.mac_src_0_s6_12(mac_src_0_s6_12),
	.mac_src_0_s6_13(mac_src_0_s6_13),
	.mac_src_0_s6_14(mac_src_0_s6_14),
	.mac_src_0_s6_15(mac_src_0_s6_15),
	.mac_src_0_s6_16(mac_src_0_s6_16),
	.mac_src_0_s6_17(mac_src_0_s6_17),
	.mac_src_0_s6_18(mac_src_0_s6_18),
	.mac_src_0_s6_19(mac_src_0_s6_19),
	.mac_src_0_s6_20(mac_src_0_s6_20),
	.mac_src_0_s6_21(mac_src_0_s6_21),
	.mac_src_0_s6_22(mac_src_0_s6_22),
	.mac_src_0_s6_23(mac_src_0_s6_23),
	.mac_src_0_s6_24(mac_src_0_s6_24),
	.mac_src_0_s6_25(mac_src_0_s6_25),
	.mac_src_0_s6_26(mac_src_0_s6_26),
	.mac_src_0_s6_27(mac_src_0_s6_27),
	.mac_src_0_s6_28(mac_src_0_s6_28),
	.mac_src_0_s6_29(mac_src_0_s6_29),
	.mac_src_0_s6_30(mac_src_0_s6_30),
	.mac_src_0_s6_31(mac_src_0_s6_31),
	 .mac_src_1_0(mac_src_1_0),
	.mac_src_1_1(mac_src_1_1),
	.mac_src_1_2(mac_src_1_2),
	.mac_src_1_3(mac_src_1_3),
	.mac_src_1_4(mac_src_1_4),
	.mac_src_1_5(mac_src_1_5),
	.mac_src_1_6(mac_src_1_6),
	.mac_src_1_7(mac_src_1_7),
	.mac_src_1_8(mac_src_1_8),
	.mac_src_1_9(mac_src_1_9),
	.mac_src_1_10(mac_src_1_10),
	.mac_src_1_11(mac_src_1_11),
	.mac_src_1_12(mac_src_1_12),
	.mac_src_1_13(mac_src_1_13),
	.mac_src_1_14(mac_src_1_14),
	.mac_src_1_15(mac_src_1_15),
	.mac_src_1_16(mac_src_1_16),
	.mac_src_1_17(mac_src_1_17),
	.mac_src_1_18(mac_src_1_18),
	.mac_src_1_19(mac_src_1_19),
	.mac_src_1_20(mac_src_1_20),
	.mac_src_1_21(mac_src_1_21),
	.mac_src_1_22(mac_src_1_22),
	.mac_src_1_23(mac_src_1_23),
	.mac_src_1_24(mac_src_1_24),
	.mac_src_1_25(mac_src_1_25),
	.mac_src_1_26(mac_src_1_26),
	.mac_src_1_27(mac_src_1_27),
	.mac_src_1_28(mac_src_1_28),
	.mac_src_1_29(mac_src_1_29),
	.mac_src_1_30(mac_src_1_30),
	.mac_src_1_31(mac_src_1_31),
	 .mac_src_valid(mac_src_valid),
	 .mac_clear(mac_clear) );


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
	always @( cache0.clk ) begin
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
	always @( cache0.rstn ) begin
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
	reg cache_en_firstEdge;
	reg cache_en_initialized;
	reg cache_en_started;
	real cache_en_startTime;
	real cache_en_firstHalf;
	real cache_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    cache_en_firstEdge = 1'b1;
	    cache_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    cache_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    cache_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on cache_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( cache_en_initialized !== 1'b1 )
	        @( cache_en_initialized );
	
	    if ( cache_en_startTime > 0.0 ) begin
	        cache_en_started = #cache_en_startTime 1;
	    end
	    else begin
	        cache_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( cache0.cache_en ) begin
	    if ( cache_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( cache_en_started !== 1'b1 )
	        @( cache_en_started );
	
	    cache_en <= cache_en_firstEdge;
	    if ( cache_en_firstHalf > 0.0 ) begin
	        #cache_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        cache_en = ~cache_en_firstEdge;
	    end
	    else begin
	        cache_en = ~cache_en_firstEdge;
	    end
	    if ( cache_en_secondHalf > 0.0 ) begin
	        #cache_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg addr_if_start_firstEdge;
	reg addr_if_start_initialized;
	reg addr_if_start_started;
	real addr_if_start_startTime;
	real addr_if_start_firstHalf;
	real addr_if_start_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    addr_if_start_firstEdge = 1'b1;
	    addr_if_start_startTime = 0.000;		// Offset from time 0 to first edge.
	    addr_if_start_firstHalf = 5.000;	// Delay for first half of cycle.
	    addr_if_start_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on addr_if_start_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( addr_if_start_initialized !== 1'b1 )
	        @( addr_if_start_initialized );
	
	    if ( addr_if_start_startTime > 0.0 ) begin
	        addr_if_start_started = #addr_if_start_startTime 1;
	    end
	    else begin
	        addr_if_start_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( cache0.addr_if_start ) begin
	    if ( addr_if_start_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( addr_if_start_started !== 1'b1 )
	        @( addr_if_start_started );
	
	    addr_if_start <= addr_if_start_firstEdge;
	    if ( addr_if_start_firstHalf > 0.0 ) begin
	        #addr_if_start_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        addr_if_start = ~addr_if_start_firstEdge;
	    end
	    else begin
	        addr_if_start = ~addr_if_start_firstEdge;
	    end
	    if ( addr_if_start_secondHalf > 0.0 ) begin
	        #addr_if_start_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg feature_share_en_firstEdge;
	reg feature_share_en_initialized;
	reg feature_share_en_started;
	real feature_share_en_startTime;
	real feature_share_en_firstHalf;
	real feature_share_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    feature_share_en_firstEdge = 1'b1;
	    feature_share_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    feature_share_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    feature_share_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on feature_share_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( feature_share_en_initialized !== 1'b1 )
	        @( feature_share_en_initialized );
	
	    if ( feature_share_en_startTime > 0.0 ) begin
	        feature_share_en_started = #feature_share_en_startTime 1;
	    end
	    else begin
	        feature_share_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( cache0.feature_share_en ) begin
	    if ( feature_share_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( feature_share_en_started !== 1'b1 )
	        @( feature_share_en_started );
	
	    feature_share_en <= feature_share_en_firstEdge;
	    if ( feature_share_en_firstHalf > 0.0 ) begin
	        #feature_share_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        feature_share_en = ~feature_share_en_firstEdge;
	    end
	    else begin
	        feature_share_en = ~feature_share_en_firstEdge;
	    end
	    if ( feature_share_en_secondHalf > 0.0 ) begin
	        #feature_share_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg feature_data_en_firstEdge;
	reg feature_data_en_initialized;
	reg feature_data_en_started;
	real feature_data_en_startTime;
	real feature_data_en_firstHalf;
	real feature_data_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    feature_data_en_firstEdge = 1'b1;
	    feature_data_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    feature_data_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    feature_data_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on feature_data_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( feature_data_en_initialized !== 1'b1 )
	        @( feature_data_en_initialized );
	
	    if ( feature_data_en_startTime > 0.0 ) begin
	        feature_data_en_started = #feature_data_en_startTime 1;
	    end
	    else begin
	        feature_data_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( cache0.feature_data_en ) begin
	    if ( feature_data_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( feature_data_en_started !== 1'b1 )
	        @( feature_data_en_started );
	
	    feature_data_en <= feature_data_en_firstEdge;
	    if ( feature_data_en_firstHalf > 0.0 ) begin
	        #feature_data_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        feature_data_en = ~feature_data_en_firstEdge;
	    end
	    else begin
	        feature_data_en = ~feature_data_en_firstEdge;
	    end
	    if ( feature_data_en_secondHalf > 0.0 ) begin
	        #feature_data_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg weight_data_en_firstEdge;
	reg weight_data_en_initialized;
	reg weight_data_en_started;
	real weight_data_en_startTime;
	real weight_data_en_firstHalf;
	real weight_data_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    weight_data_en_firstEdge = 1'b1;
	    weight_data_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    weight_data_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    weight_data_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on weight_data_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( weight_data_en_initialized !== 1'b1 )
	        @( weight_data_en_initialized );
	
	    if ( weight_data_en_startTime > 0.0 ) begin
	        weight_data_en_started = #weight_data_en_startTime 1;
	    end
	    else begin
	        weight_data_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( cache0.weight_data_en ) begin
	    if ( weight_data_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( weight_data_en_started !== 1'b1 )
	        @( weight_data_en_started );
	
	    weight_data_en <= weight_data_en_firstEdge;
	    if ( weight_data_en_firstHalf > 0.0 ) begin
	        #weight_data_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        weight_data_en = ~weight_data_en_firstEdge;
	    end
	    else begin
	        weight_data_en = ~weight_data_en_firstEdge;
	    end
	    if ( weight_data_en_secondHalf > 0.0 ) begin
	        #weight_data_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
