/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* Verilog Verification wrapper module for the pe_array module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module pe_array_vlwrapper(
      clk,
       rstn,
       enable,
       src_vld,
       clear,
       init,
       systolic_en,
       systolic_depth,
       mac_shift_len,
       src_0_s0_0,
      src_0_s0_1,
      src_0_s0_2,
      src_0_s0_3,
      src_0_s0_4,
      src_0_s0_5,
      src_0_s0_6,
      src_0_s0_7,
      src_0_s0_8,
      src_0_s0_9,
      src_0_s0_10,
      src_0_s0_11,
      src_0_s0_12,
      src_0_s0_13,
      src_0_s0_14,
      src_0_s0_15,
      src_0_s0_16,
      src_0_s0_17,
      src_0_s0_18,
      src_0_s0_19,
      src_0_s0_20,
      src_0_s0_21,
      src_0_s0_22,
      src_0_s0_23,
      src_0_s0_24,
      src_0_s0_25,
      src_0_s0_26,
      src_0_s0_27,
      src_0_s0_28,
      src_0_s0_29,
      src_0_s0_30,
      src_0_s0_31,
       src_0_s1_0,
      src_0_s1_1,
      src_0_s1_2,
      src_0_s1_3,
      src_0_s1_4,
      src_0_s1_5,
      src_0_s1_6,
      src_0_s1_7,
      src_0_s1_8,
      src_0_s1_9,
      src_0_s1_10,
      src_0_s1_11,
      src_0_s1_12,
      src_0_s1_13,
      src_0_s1_14,
      src_0_s1_15,
      src_0_s1_16,
      src_0_s1_17,
      src_0_s1_18,
      src_0_s1_19,
      src_0_s1_20,
      src_0_s1_21,
      src_0_s1_22,
      src_0_s1_23,
      src_0_s1_24,
      src_0_s1_25,
      src_0_s1_26,
      src_0_s1_27,
      src_0_s1_28,
      src_0_s1_29,
      src_0_s1_30,
      src_0_s1_31,
       src_0_s2_0,
      src_0_s2_1,
      src_0_s2_2,
      src_0_s2_3,
      src_0_s2_4,
      src_0_s2_5,
      src_0_s2_6,
      src_0_s2_7,
      src_0_s2_8,
      src_0_s2_9,
      src_0_s2_10,
      src_0_s2_11,
      src_0_s2_12,
      src_0_s2_13,
      src_0_s2_14,
      src_0_s2_15,
      src_0_s2_16,
      src_0_s2_17,
      src_0_s2_18,
      src_0_s2_19,
      src_0_s2_20,
      src_0_s2_21,
      src_0_s2_22,
      src_0_s2_23,
      src_0_s2_24,
      src_0_s2_25,
      src_0_s2_26,
      src_0_s2_27,
      src_0_s2_28,
      src_0_s2_29,
      src_0_s2_30,
      src_0_s2_31,
       src_0_s3_0,
      src_0_s3_1,
      src_0_s3_2,
      src_0_s3_3,
      src_0_s3_4,
      src_0_s3_5,
      src_0_s3_6,
      src_0_s3_7,
      src_0_s3_8,
      src_0_s3_9,
      src_0_s3_10,
      src_0_s3_11,
      src_0_s3_12,
      src_0_s3_13,
      src_0_s3_14,
      src_0_s3_15,
      src_0_s3_16,
      src_0_s3_17,
      src_0_s3_18,
      src_0_s3_19,
      src_0_s3_20,
      src_0_s3_21,
      src_0_s3_22,
      src_0_s3_23,
      src_0_s3_24,
      src_0_s3_25,
      src_0_s3_26,
      src_0_s3_27,
      src_0_s3_28,
      src_0_s3_29,
      src_0_s3_30,
      src_0_s3_31,
       src_0_s4_0,
      src_0_s4_1,
      src_0_s4_2,
      src_0_s4_3,
      src_0_s4_4,
      src_0_s4_5,
      src_0_s4_6,
      src_0_s4_7,
      src_0_s4_8,
      src_0_s4_9,
      src_0_s4_10,
      src_0_s4_11,
      src_0_s4_12,
      src_0_s4_13,
      src_0_s4_14,
      src_0_s4_15,
      src_0_s4_16,
      src_0_s4_17,
      src_0_s4_18,
      src_0_s4_19,
      src_0_s4_20,
      src_0_s4_21,
      src_0_s4_22,
      src_0_s4_23,
      src_0_s4_24,
      src_0_s4_25,
      src_0_s4_26,
      src_0_s4_27,
      src_0_s4_28,
      src_0_s4_29,
      src_0_s4_30,
      src_0_s4_31,
       src_0_s5_0,
      src_0_s5_1,
      src_0_s5_2,
      src_0_s5_3,
      src_0_s5_4,
      src_0_s5_5,
      src_0_s5_6,
      src_0_s5_7,
      src_0_s5_8,
      src_0_s5_9,
      src_0_s5_10,
      src_0_s5_11,
      src_0_s5_12,
      src_0_s5_13,
      src_0_s5_14,
      src_0_s5_15,
      src_0_s5_16,
      src_0_s5_17,
      src_0_s5_18,
      src_0_s5_19,
      src_0_s5_20,
      src_0_s5_21,
      src_0_s5_22,
      src_0_s5_23,
      src_0_s5_24,
      src_0_s5_25,
      src_0_s5_26,
      src_0_s5_27,
      src_0_s5_28,
      src_0_s5_29,
      src_0_s5_30,
      src_0_s5_31,
       src_0_s6_0,
      src_0_s6_1,
      src_0_s6_2,
      src_0_s6_3,
      src_0_s6_4,
      src_0_s6_5,
      src_0_s6_6,
      src_0_s6_7,
      src_0_s6_8,
      src_0_s6_9,
      src_0_s6_10,
      src_0_s6_11,
      src_0_s6_12,
      src_0_s6_13,
      src_0_s6_14,
      src_0_s6_15,
      src_0_s6_16,
      src_0_s6_17,
      src_0_s6_18,
      src_0_s6_19,
      src_0_s6_20,
      src_0_s6_21,
      src_0_s6_22,
      src_0_s6_23,
      src_0_s6_24,
      src_0_s6_25,
      src_0_s6_26,
      src_0_s6_27,
      src_0_s6_28,
      src_0_s6_29,
      src_0_s6_30,
      src_0_s6_31,
       src_1_0,
      src_1_1,
      src_1_2,
      src_1_3,
      src_1_4,
      src_1_5,
      src_1_6,
      src_1_7,
      src_1_8,
      src_1_9,
      src_1_10,
      src_1_11,
      src_1_12,
      src_1_13,
      src_1_14,
      src_1_15,
      src_1_16,
      src_1_17,
      src_1_18,
      src_1_19,
      src_1_20,
      src_1_21,
      src_1_22,
      src_1_23,
      src_1_24,
      src_1_25,
      src_1_26,
      src_1_27,
      src_1_28,
      src_1_29,
      src_1_30,
      src_1_31,
       pe_data_0,
      pe_data_1,
      pe_data_2,
      pe_data_3,
      pe_data_4,
      pe_data_5,
      pe_data_6,
      pe_data_7,
      pe_data_8,
      pe_data_9,
      pe_data_10,
      pe_data_11,
      pe_data_12,
      pe_data_13,
      pe_data_14,
      pe_data_15,
      pe_data_16,
      pe_data_17,
      pe_data_18,
      pe_data_19,
      pe_data_20,
      pe_data_21,
      pe_data_22,
      pe_data_23,
      pe_data_24,
      pe_data_25,
      pe_data_26,
      pe_data_27,
      pe_data_28,
      pe_data_29,
      pe_data_30,
      pe_data_31,
       pe_data_valid

    );

	input clk;
	input rstn;
	input enable;
	input src_vld;
	input clear;
	input init;
	input [7:0] systolic_en;
	input [7:0] systolic_depth;
	input [7:0] mac_shift_len;
	input [9:0] src_0_s0_0;
	input [9:0] src_0_s0_1;
	input [9:0] src_0_s0_2;
	input [9:0] src_0_s0_3;
	input [9:0] src_0_s0_4;
	input [9:0] src_0_s0_5;
	input [9:0] src_0_s0_6;
	input [9:0] src_0_s0_7;
	input [9:0] src_0_s0_8;
	input [9:0] src_0_s0_9;
	input [9:0] src_0_s0_10;
	input [9:0] src_0_s0_11;
	input [9:0] src_0_s0_12;
	input [9:0] src_0_s0_13;
	input [9:0] src_0_s0_14;
	input [9:0] src_0_s0_15;
	input [9:0] src_0_s0_16;
	input [9:0] src_0_s0_17;
	input [9:0] src_0_s0_18;
	input [9:0] src_0_s0_19;
	input [9:0] src_0_s0_20;
	input [9:0] src_0_s0_21;
	input [9:0] src_0_s0_22;
	input [9:0] src_0_s0_23;
	input [9:0] src_0_s0_24;
	input [9:0] src_0_s0_25;
	input [9:0] src_0_s0_26;
	input [9:0] src_0_s0_27;
	input [9:0] src_0_s0_28;
	input [9:0] src_0_s0_29;
	input [9:0] src_0_s0_30;
	input [9:0] src_0_s0_31;
	input [9:0] src_0_s1_0;
	input [9:0] src_0_s1_1;
	input [9:0] src_0_s1_2;
	input [9:0] src_0_s1_3;
	input [9:0] src_0_s1_4;
	input [9:0] src_0_s1_5;
	input [9:0] src_0_s1_6;
	input [9:0] src_0_s1_7;
	input [9:0] src_0_s1_8;
	input [9:0] src_0_s1_9;
	input [9:0] src_0_s1_10;
	input [9:0] src_0_s1_11;
	input [9:0] src_0_s1_12;
	input [9:0] src_0_s1_13;
	input [9:0] src_0_s1_14;
	input [9:0] src_0_s1_15;
	input [9:0] src_0_s1_16;
	input [9:0] src_0_s1_17;
	input [9:0] src_0_s1_18;
	input [9:0] src_0_s1_19;
	input [9:0] src_0_s1_20;
	input [9:0] src_0_s1_21;
	input [9:0] src_0_s1_22;
	input [9:0] src_0_s1_23;
	input [9:0] src_0_s1_24;
	input [9:0] src_0_s1_25;
	input [9:0] src_0_s1_26;
	input [9:0] src_0_s1_27;
	input [9:0] src_0_s1_28;
	input [9:0] src_0_s1_29;
	input [9:0] src_0_s1_30;
	input [9:0] src_0_s1_31;
	input [9:0] src_0_s2_0;
	input [9:0] src_0_s2_1;
	input [9:0] src_0_s2_2;
	input [9:0] src_0_s2_3;
	input [9:0] src_0_s2_4;
	input [9:0] src_0_s2_5;
	input [9:0] src_0_s2_6;
	input [9:0] src_0_s2_7;
	input [9:0] src_0_s2_8;
	input [9:0] src_0_s2_9;
	input [9:0] src_0_s2_10;
	input [9:0] src_0_s2_11;
	input [9:0] src_0_s2_12;
	input [9:0] src_0_s2_13;
	input [9:0] src_0_s2_14;
	input [9:0] src_0_s2_15;
	input [9:0] src_0_s2_16;
	input [9:0] src_0_s2_17;
	input [9:0] src_0_s2_18;
	input [9:0] src_0_s2_19;
	input [9:0] src_0_s2_20;
	input [9:0] src_0_s2_21;
	input [9:0] src_0_s2_22;
	input [9:0] src_0_s2_23;
	input [9:0] src_0_s2_24;
	input [9:0] src_0_s2_25;
	input [9:0] src_0_s2_26;
	input [9:0] src_0_s2_27;
	input [9:0] src_0_s2_28;
	input [9:0] src_0_s2_29;
	input [9:0] src_0_s2_30;
	input [9:0] src_0_s2_31;
	input [9:0] src_0_s3_0;
	input [9:0] src_0_s3_1;
	input [9:0] src_0_s3_2;
	input [9:0] src_0_s3_3;
	input [9:0] src_0_s3_4;
	input [9:0] src_0_s3_5;
	input [9:0] src_0_s3_6;
	input [9:0] src_0_s3_7;
	input [9:0] src_0_s3_8;
	input [9:0] src_0_s3_9;
	input [9:0] src_0_s3_10;
	input [9:0] src_0_s3_11;
	input [9:0] src_0_s3_12;
	input [9:0] src_0_s3_13;
	input [9:0] src_0_s3_14;
	input [9:0] src_0_s3_15;
	input [9:0] src_0_s3_16;
	input [9:0] src_0_s3_17;
	input [9:0] src_0_s3_18;
	input [9:0] src_0_s3_19;
	input [9:0] src_0_s3_20;
	input [9:0] src_0_s3_21;
	input [9:0] src_0_s3_22;
	input [9:0] src_0_s3_23;
	input [9:0] src_0_s3_24;
	input [9:0] src_0_s3_25;
	input [9:0] src_0_s3_26;
	input [9:0] src_0_s3_27;
	input [9:0] src_0_s3_28;
	input [9:0] src_0_s3_29;
	input [9:0] src_0_s3_30;
	input [9:0] src_0_s3_31;
	input [9:0] src_0_s4_0;
	input [9:0] src_0_s4_1;
	input [9:0] src_0_s4_2;
	input [9:0] src_0_s4_3;
	input [9:0] src_0_s4_4;
	input [9:0] src_0_s4_5;
	input [9:0] src_0_s4_6;
	input [9:0] src_0_s4_7;
	input [9:0] src_0_s4_8;
	input [9:0] src_0_s4_9;
	input [9:0] src_0_s4_10;
	input [9:0] src_0_s4_11;
	input [9:0] src_0_s4_12;
	input [9:0] src_0_s4_13;
	input [9:0] src_0_s4_14;
	input [9:0] src_0_s4_15;
	input [9:0] src_0_s4_16;
	input [9:0] src_0_s4_17;
	input [9:0] src_0_s4_18;
	input [9:0] src_0_s4_19;
	input [9:0] src_0_s4_20;
	input [9:0] src_0_s4_21;
	input [9:0] src_0_s4_22;
	input [9:0] src_0_s4_23;
	input [9:0] src_0_s4_24;
	input [9:0] src_0_s4_25;
	input [9:0] src_0_s4_26;
	input [9:0] src_0_s4_27;
	input [9:0] src_0_s4_28;
	input [9:0] src_0_s4_29;
	input [9:0] src_0_s4_30;
	input [9:0] src_0_s4_31;
	input [9:0] src_0_s5_0;
	input [9:0] src_0_s5_1;
	input [9:0] src_0_s5_2;
	input [9:0] src_0_s5_3;
	input [9:0] src_0_s5_4;
	input [9:0] src_0_s5_5;
	input [9:0] src_0_s5_6;
	input [9:0] src_0_s5_7;
	input [9:0] src_0_s5_8;
	input [9:0] src_0_s5_9;
	input [9:0] src_0_s5_10;
	input [9:0] src_0_s5_11;
	input [9:0] src_0_s5_12;
	input [9:0] src_0_s5_13;
	input [9:0] src_0_s5_14;
	input [9:0] src_0_s5_15;
	input [9:0] src_0_s5_16;
	input [9:0] src_0_s5_17;
	input [9:0] src_0_s5_18;
	input [9:0] src_0_s5_19;
	input [9:0] src_0_s5_20;
	input [9:0] src_0_s5_21;
	input [9:0] src_0_s5_22;
	input [9:0] src_0_s5_23;
	input [9:0] src_0_s5_24;
	input [9:0] src_0_s5_25;
	input [9:0] src_0_s5_26;
	input [9:0] src_0_s5_27;
	input [9:0] src_0_s5_28;
	input [9:0] src_0_s5_29;
	input [9:0] src_0_s5_30;
	input [9:0] src_0_s5_31;
	input [9:0] src_0_s6_0;
	input [9:0] src_0_s6_1;
	input [9:0] src_0_s6_2;
	input [9:0] src_0_s6_3;
	input [9:0] src_0_s6_4;
	input [9:0] src_0_s6_5;
	input [9:0] src_0_s6_6;
	input [9:0] src_0_s6_7;
	input [9:0] src_0_s6_8;
	input [9:0] src_0_s6_9;
	input [9:0] src_0_s6_10;
	input [9:0] src_0_s6_11;
	input [9:0] src_0_s6_12;
	input [9:0] src_0_s6_13;
	input [9:0] src_0_s6_14;
	input [9:0] src_0_s6_15;
	input [9:0] src_0_s6_16;
	input [9:0] src_0_s6_17;
	input [9:0] src_0_s6_18;
	input [9:0] src_0_s6_19;
	input [9:0] src_0_s6_20;
	input [9:0] src_0_s6_21;
	input [9:0] src_0_s6_22;
	input [9:0] src_0_s6_23;
	input [9:0] src_0_s6_24;
	input [9:0] src_0_s6_25;
	input [9:0] src_0_s6_26;
	input [9:0] src_0_s6_27;
	input [9:0] src_0_s6_28;
	input [9:0] src_0_s6_29;
	input [9:0] src_0_s6_30;
	input [9:0] src_0_s6_31;
	input [7:0] src_1_0;
	input [7:0] src_1_1;
	input [7:0] src_1_2;
	input [7:0] src_1_3;
	input [7:0] src_1_4;
	input [7:0] src_1_5;
	input [7:0] src_1_6;
	input [7:0] src_1_7;
	input [7:0] src_1_8;
	input [7:0] src_1_9;
	input [7:0] src_1_10;
	input [7:0] src_1_11;
	input [7:0] src_1_12;
	input [7:0] src_1_13;
	input [7:0] src_1_14;
	input [7:0] src_1_15;
	input [7:0] src_1_16;
	input [7:0] src_1_17;
	input [7:0] src_1_18;
	input [7:0] src_1_19;
	input [7:0] src_1_20;
	input [7:0] src_1_21;
	input [7:0] src_1_22;
	input [7:0] src_1_23;
	input [7:0] src_1_24;
	input [7:0] src_1_25;
	input [7:0] src_1_26;
	input [7:0] src_1_27;
	input [7:0] src_1_28;
	input [7:0] src_1_29;
	input [7:0] src_1_30;
	input [7:0] src_1_31;
	output [31:0] pe_data_0;
	output [31:0] pe_data_1;
	output [31:0] pe_data_2;
	output [31:0] pe_data_3;
	output [31:0] pe_data_4;
	output [31:0] pe_data_5;
	output [31:0] pe_data_6;
	output [31:0] pe_data_7;
	output [31:0] pe_data_8;
	output [31:0] pe_data_9;
	output [31:0] pe_data_10;
	output [31:0] pe_data_11;
	output [31:0] pe_data_12;
	output [31:0] pe_data_13;
	output [31:0] pe_data_14;
	output [31:0] pe_data_15;
	output [31:0] pe_data_16;
	output [31:0] pe_data_17;
	output [31:0] pe_data_18;
	output [31:0] pe_data_19;
	output [31:0] pe_data_20;
	output [31:0] pe_data_21;
	output [31:0] pe_data_22;
	output [31:0] pe_data_23;
	output [31:0] pe_data_24;
	output [31:0] pe_data_25;
	output [31:0] pe_data_26;
	output [31:0] pe_data_27;
	output [31:0] pe_data_28;
	output [31:0] pe_data_29;
	output [31:0] pe_data_30;
	output [31:0] pe_data_31;
	reg[31:0] pe_data_0;
	wire [31:0] m_pe_data_0;
	reg[31:0] pe_data_1;
	wire [31:0] m_pe_data_1;
	reg[31:0] pe_data_2;
	wire [31:0] m_pe_data_2;
	reg[31:0] pe_data_3;
	wire [31:0] m_pe_data_3;
	reg[31:0] pe_data_4;
	wire [31:0] m_pe_data_4;
	reg[31:0] pe_data_5;
	wire [31:0] m_pe_data_5;
	reg[31:0] pe_data_6;
	wire [31:0] m_pe_data_6;
	reg[31:0] pe_data_7;
	wire [31:0] m_pe_data_7;
	reg[31:0] pe_data_8;
	wire [31:0] m_pe_data_8;
	reg[31:0] pe_data_9;
	wire [31:0] m_pe_data_9;
	reg[31:0] pe_data_10;
	wire [31:0] m_pe_data_10;
	reg[31:0] pe_data_11;
	wire [31:0] m_pe_data_11;
	reg[31:0] pe_data_12;
	wire [31:0] m_pe_data_12;
	reg[31:0] pe_data_13;
	wire [31:0] m_pe_data_13;
	reg[31:0] pe_data_14;
	wire [31:0] m_pe_data_14;
	reg[31:0] pe_data_15;
	wire [31:0] m_pe_data_15;
	reg[31:0] pe_data_16;
	wire [31:0] m_pe_data_16;
	reg[31:0] pe_data_17;
	wire [31:0] m_pe_data_17;
	reg[31:0] pe_data_18;
	wire [31:0] m_pe_data_18;
	reg[31:0] pe_data_19;
	wire [31:0] m_pe_data_19;
	reg[31:0] pe_data_20;
	wire [31:0] m_pe_data_20;
	reg[31:0] pe_data_21;
	wire [31:0] m_pe_data_21;
	reg[31:0] pe_data_22;
	wire [31:0] m_pe_data_22;
	reg[31:0] pe_data_23;
	wire [31:0] m_pe_data_23;
	reg[31:0] pe_data_24;
	wire [31:0] m_pe_data_24;
	reg[31:0] pe_data_25;
	wire [31:0] m_pe_data_25;
	reg[31:0] pe_data_26;
	wire [31:0] m_pe_data_26;
	reg[31:0] pe_data_27;
	wire [31:0] m_pe_data_27;
	reg[31:0] pe_data_28;
	wire [31:0] m_pe_data_28;
	reg[31:0] pe_data_29;
	wire [31:0] m_pe_data_29;
	reg[31:0] pe_data_30;
	wire [31:0] m_pe_data_30;
	reg[31:0] pe_data_31;
	wire [31:0] m_pe_data_31;
	output pe_data_valid;
	reg pe_data_valid;
	wire m_pe_data_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    pe_array_type_wrapper pe_array_sc(
        .clk(clk),
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
         .pe_data_0(m_pe_data_0),
        .pe_data_1(m_pe_data_1),
        .pe_data_2(m_pe_data_2),
        .pe_data_3(m_pe_data_3),
        .pe_data_4(m_pe_data_4),
        .pe_data_5(m_pe_data_5),
        .pe_data_6(m_pe_data_6),
        .pe_data_7(m_pe_data_7),
        .pe_data_8(m_pe_data_8),
        .pe_data_9(m_pe_data_9),
        .pe_data_10(m_pe_data_10),
        .pe_data_11(m_pe_data_11),
        .pe_data_12(m_pe_data_12),
        .pe_data_13(m_pe_data_13),
        .pe_data_14(m_pe_data_14),
        .pe_data_15(m_pe_data_15),
        .pe_data_16(m_pe_data_16),
        .pe_data_17(m_pe_data_17),
        .pe_data_18(m_pe_data_18),
        .pe_data_19(m_pe_data_19),
        .pe_data_20(m_pe_data_20),
        .pe_data_21(m_pe_data_21),
        .pe_data_22(m_pe_data_22),
        .pe_data_23(m_pe_data_23),
        .pe_data_24(m_pe_data_24),
        .pe_data_25(m_pe_data_25),
        .pe_data_26(m_pe_data_26),
        .pe_data_27(m_pe_data_27),
        .pe_data_28(m_pe_data_28),
        .pe_data_29(m_pe_data_29),
        .pe_data_30(m_pe_data_30),
        .pe_data_31(m_pe_data_31),
         .pe_data_valid(m_pe_data_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_pe_data_0)
     begin
      pe_data_0 <= m_pe_data_0;
     end
    always @(m_pe_data_1)
     begin
      pe_data_1 <= m_pe_data_1;
     end
    always @(m_pe_data_2)
     begin
      pe_data_2 <= m_pe_data_2;
     end
    always @(m_pe_data_3)
     begin
      pe_data_3 <= m_pe_data_3;
     end
    always @(m_pe_data_4)
     begin
      pe_data_4 <= m_pe_data_4;
     end
    always @(m_pe_data_5)
     begin
      pe_data_5 <= m_pe_data_5;
     end
    always @(m_pe_data_6)
     begin
      pe_data_6 <= m_pe_data_6;
     end
    always @(m_pe_data_7)
     begin
      pe_data_7 <= m_pe_data_7;
     end
    always @(m_pe_data_8)
     begin
      pe_data_8 <= m_pe_data_8;
     end
    always @(m_pe_data_9)
     begin
      pe_data_9 <= m_pe_data_9;
     end
    always @(m_pe_data_10)
     begin
      pe_data_10 <= m_pe_data_10;
     end
    always @(m_pe_data_11)
     begin
      pe_data_11 <= m_pe_data_11;
     end
    always @(m_pe_data_12)
     begin
      pe_data_12 <= m_pe_data_12;
     end
    always @(m_pe_data_13)
     begin
      pe_data_13 <= m_pe_data_13;
     end
    always @(m_pe_data_14)
     begin
      pe_data_14 <= m_pe_data_14;
     end
    always @(m_pe_data_15)
     begin
      pe_data_15 <= m_pe_data_15;
     end
    always @(m_pe_data_16)
     begin
      pe_data_16 <= m_pe_data_16;
     end
    always @(m_pe_data_17)
     begin
      pe_data_17 <= m_pe_data_17;
     end
    always @(m_pe_data_18)
     begin
      pe_data_18 <= m_pe_data_18;
     end
    always @(m_pe_data_19)
     begin
      pe_data_19 <= m_pe_data_19;
     end
    always @(m_pe_data_20)
     begin
      pe_data_20 <= m_pe_data_20;
     end
    always @(m_pe_data_21)
     begin
      pe_data_21 <= m_pe_data_21;
     end
    always @(m_pe_data_22)
     begin
      pe_data_22 <= m_pe_data_22;
     end
    always @(m_pe_data_23)
     begin
      pe_data_23 <= m_pe_data_23;
     end
    always @(m_pe_data_24)
     begin
      pe_data_24 <= m_pe_data_24;
     end
    always @(m_pe_data_25)
     begin
      pe_data_25 <= m_pe_data_25;
     end
    always @(m_pe_data_26)
     begin
      pe_data_26 <= m_pe_data_26;
     end
    always @(m_pe_data_27)
     begin
      pe_data_27 <= m_pe_data_27;
     end
    always @(m_pe_data_28)
     begin
      pe_data_28 <= m_pe_data_28;
     end
    always @(m_pe_data_29)
     begin
      pe_data_29 <= m_pe_data_29;
     end
    always @(m_pe_data_30)
     begin
      pe_data_30 <= m_pe_data_30;
     end
    always @(m_pe_data_31)
     begin
      pe_data_31 <= m_pe_data_31;
     end
    always @(m_pe_data_valid)
     begin
      pe_data_valid <= m_pe_data_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module pe_array_type_wrapper(
      clk,
       rstn,
       enable,
       src_vld,
       clear,
       init,
       systolic_en,
       systolic_depth,
       mac_shift_len,
       src_0_s0_0,
      src_0_s0_1,
      src_0_s0_2,
      src_0_s0_3,
      src_0_s0_4,
      src_0_s0_5,
      src_0_s0_6,
      src_0_s0_7,
      src_0_s0_8,
      src_0_s0_9,
      src_0_s0_10,
      src_0_s0_11,
      src_0_s0_12,
      src_0_s0_13,
      src_0_s0_14,
      src_0_s0_15,
      src_0_s0_16,
      src_0_s0_17,
      src_0_s0_18,
      src_0_s0_19,
      src_0_s0_20,
      src_0_s0_21,
      src_0_s0_22,
      src_0_s0_23,
      src_0_s0_24,
      src_0_s0_25,
      src_0_s0_26,
      src_0_s0_27,
      src_0_s0_28,
      src_0_s0_29,
      src_0_s0_30,
      src_0_s0_31,
       src_0_s1_0,
      src_0_s1_1,
      src_0_s1_2,
      src_0_s1_3,
      src_0_s1_4,
      src_0_s1_5,
      src_0_s1_6,
      src_0_s1_7,
      src_0_s1_8,
      src_0_s1_9,
      src_0_s1_10,
      src_0_s1_11,
      src_0_s1_12,
      src_0_s1_13,
      src_0_s1_14,
      src_0_s1_15,
      src_0_s1_16,
      src_0_s1_17,
      src_0_s1_18,
      src_0_s1_19,
      src_0_s1_20,
      src_0_s1_21,
      src_0_s1_22,
      src_0_s1_23,
      src_0_s1_24,
      src_0_s1_25,
      src_0_s1_26,
      src_0_s1_27,
      src_0_s1_28,
      src_0_s1_29,
      src_0_s1_30,
      src_0_s1_31,
       src_0_s2_0,
      src_0_s2_1,
      src_0_s2_2,
      src_0_s2_3,
      src_0_s2_4,
      src_0_s2_5,
      src_0_s2_6,
      src_0_s2_7,
      src_0_s2_8,
      src_0_s2_9,
      src_0_s2_10,
      src_0_s2_11,
      src_0_s2_12,
      src_0_s2_13,
      src_0_s2_14,
      src_0_s2_15,
      src_0_s2_16,
      src_0_s2_17,
      src_0_s2_18,
      src_0_s2_19,
      src_0_s2_20,
      src_0_s2_21,
      src_0_s2_22,
      src_0_s2_23,
      src_0_s2_24,
      src_0_s2_25,
      src_0_s2_26,
      src_0_s2_27,
      src_0_s2_28,
      src_0_s2_29,
      src_0_s2_30,
      src_0_s2_31,
       src_0_s3_0,
      src_0_s3_1,
      src_0_s3_2,
      src_0_s3_3,
      src_0_s3_4,
      src_0_s3_5,
      src_0_s3_6,
      src_0_s3_7,
      src_0_s3_8,
      src_0_s3_9,
      src_0_s3_10,
      src_0_s3_11,
      src_0_s3_12,
      src_0_s3_13,
      src_0_s3_14,
      src_0_s3_15,
      src_0_s3_16,
      src_0_s3_17,
      src_0_s3_18,
      src_0_s3_19,
      src_0_s3_20,
      src_0_s3_21,
      src_0_s3_22,
      src_0_s3_23,
      src_0_s3_24,
      src_0_s3_25,
      src_0_s3_26,
      src_0_s3_27,
      src_0_s3_28,
      src_0_s3_29,
      src_0_s3_30,
      src_0_s3_31,
       src_0_s4_0,
      src_0_s4_1,
      src_0_s4_2,
      src_0_s4_3,
      src_0_s4_4,
      src_0_s4_5,
      src_0_s4_6,
      src_0_s4_7,
      src_0_s4_8,
      src_0_s4_9,
      src_0_s4_10,
      src_0_s4_11,
      src_0_s4_12,
      src_0_s4_13,
      src_0_s4_14,
      src_0_s4_15,
      src_0_s4_16,
      src_0_s4_17,
      src_0_s4_18,
      src_0_s4_19,
      src_0_s4_20,
      src_0_s4_21,
      src_0_s4_22,
      src_0_s4_23,
      src_0_s4_24,
      src_0_s4_25,
      src_0_s4_26,
      src_0_s4_27,
      src_0_s4_28,
      src_0_s4_29,
      src_0_s4_30,
      src_0_s4_31,
       src_0_s5_0,
      src_0_s5_1,
      src_0_s5_2,
      src_0_s5_3,
      src_0_s5_4,
      src_0_s5_5,
      src_0_s5_6,
      src_0_s5_7,
      src_0_s5_8,
      src_0_s5_9,
      src_0_s5_10,
      src_0_s5_11,
      src_0_s5_12,
      src_0_s5_13,
      src_0_s5_14,
      src_0_s5_15,
      src_0_s5_16,
      src_0_s5_17,
      src_0_s5_18,
      src_0_s5_19,
      src_0_s5_20,
      src_0_s5_21,
      src_0_s5_22,
      src_0_s5_23,
      src_0_s5_24,
      src_0_s5_25,
      src_0_s5_26,
      src_0_s5_27,
      src_0_s5_28,
      src_0_s5_29,
      src_0_s5_30,
      src_0_s5_31,
       src_0_s6_0,
      src_0_s6_1,
      src_0_s6_2,
      src_0_s6_3,
      src_0_s6_4,
      src_0_s6_5,
      src_0_s6_6,
      src_0_s6_7,
      src_0_s6_8,
      src_0_s6_9,
      src_0_s6_10,
      src_0_s6_11,
      src_0_s6_12,
      src_0_s6_13,
      src_0_s6_14,
      src_0_s6_15,
      src_0_s6_16,
      src_0_s6_17,
      src_0_s6_18,
      src_0_s6_19,
      src_0_s6_20,
      src_0_s6_21,
      src_0_s6_22,
      src_0_s6_23,
      src_0_s6_24,
      src_0_s6_25,
      src_0_s6_26,
      src_0_s6_27,
      src_0_s6_28,
      src_0_s6_29,
      src_0_s6_30,
      src_0_s6_31,
       src_1_0,
      src_1_1,
      src_1_2,
      src_1_3,
      src_1_4,
      src_1_5,
      src_1_6,
      src_1_7,
      src_1_8,
      src_1_9,
      src_1_10,
      src_1_11,
      src_1_12,
      src_1_13,
      src_1_14,
      src_1_15,
      src_1_16,
      src_1_17,
      src_1_18,
      src_1_19,
      src_1_20,
      src_1_21,
      src_1_22,
      src_1_23,
      src_1_24,
      src_1_25,
      src_1_26,
      src_1_27,
      src_1_28,
      src_1_29,
      src_1_30,
      src_1_31,
       pe_data_0,
      pe_data_1,
      pe_data_2,
      pe_data_3,
      pe_data_4,
      pe_data_5,
      pe_data_6,
      pe_data_7,
      pe_data_8,
      pe_data_9,
      pe_data_10,
      pe_data_11,
      pe_data_12,
      pe_data_13,
      pe_data_14,
      pe_data_15,
      pe_data_16,
      pe_data_17,
      pe_data_18,
      pe_data_19,
      pe_data_20,
      pe_data_21,
      pe_data_22,
      pe_data_23,
      pe_data_24,
      pe_data_25,
      pe_data_26,
      pe_data_27,
      pe_data_28,
      pe_data_29,
      pe_data_30,
      pe_data_31,
       pe_data_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input src_vld;
	input clear;
	input init;
	input [7:0] systolic_en;
	input [7:0] systolic_depth;
	input [7:0] mac_shift_len;
	input [9:0] src_0_s0_0;
	input [9:0] src_0_s0_1;
	input [9:0] src_0_s0_2;
	input [9:0] src_0_s0_3;
	input [9:0] src_0_s0_4;
	input [9:0] src_0_s0_5;
	input [9:0] src_0_s0_6;
	input [9:0] src_0_s0_7;
	input [9:0] src_0_s0_8;
	input [9:0] src_0_s0_9;
	input [9:0] src_0_s0_10;
	input [9:0] src_0_s0_11;
	input [9:0] src_0_s0_12;
	input [9:0] src_0_s0_13;
	input [9:0] src_0_s0_14;
	input [9:0] src_0_s0_15;
	input [9:0] src_0_s0_16;
	input [9:0] src_0_s0_17;
	input [9:0] src_0_s0_18;
	input [9:0] src_0_s0_19;
	input [9:0] src_0_s0_20;
	input [9:0] src_0_s0_21;
	input [9:0] src_0_s0_22;
	input [9:0] src_0_s0_23;
	input [9:0] src_0_s0_24;
	input [9:0] src_0_s0_25;
	input [9:0] src_0_s0_26;
	input [9:0] src_0_s0_27;
	input [9:0] src_0_s0_28;
	input [9:0] src_0_s0_29;
	input [9:0] src_0_s0_30;
	input [9:0] src_0_s0_31;
	input [9:0] src_0_s1_0;
	input [9:0] src_0_s1_1;
	input [9:0] src_0_s1_2;
	input [9:0] src_0_s1_3;
	input [9:0] src_0_s1_4;
	input [9:0] src_0_s1_5;
	input [9:0] src_0_s1_6;
	input [9:0] src_0_s1_7;
	input [9:0] src_0_s1_8;
	input [9:0] src_0_s1_9;
	input [9:0] src_0_s1_10;
	input [9:0] src_0_s1_11;
	input [9:0] src_0_s1_12;
	input [9:0] src_0_s1_13;
	input [9:0] src_0_s1_14;
	input [9:0] src_0_s1_15;
	input [9:0] src_0_s1_16;
	input [9:0] src_0_s1_17;
	input [9:0] src_0_s1_18;
	input [9:0] src_0_s1_19;
	input [9:0] src_0_s1_20;
	input [9:0] src_0_s1_21;
	input [9:0] src_0_s1_22;
	input [9:0] src_0_s1_23;
	input [9:0] src_0_s1_24;
	input [9:0] src_0_s1_25;
	input [9:0] src_0_s1_26;
	input [9:0] src_0_s1_27;
	input [9:0] src_0_s1_28;
	input [9:0] src_0_s1_29;
	input [9:0] src_0_s1_30;
	input [9:0] src_0_s1_31;
	input [9:0] src_0_s2_0;
	input [9:0] src_0_s2_1;
	input [9:0] src_0_s2_2;
	input [9:0] src_0_s2_3;
	input [9:0] src_0_s2_4;
	input [9:0] src_0_s2_5;
	input [9:0] src_0_s2_6;
	input [9:0] src_0_s2_7;
	input [9:0] src_0_s2_8;
	input [9:0] src_0_s2_9;
	input [9:0] src_0_s2_10;
	input [9:0] src_0_s2_11;
	input [9:0] src_0_s2_12;
	input [9:0] src_0_s2_13;
	input [9:0] src_0_s2_14;
	input [9:0] src_0_s2_15;
	input [9:0] src_0_s2_16;
	input [9:0] src_0_s2_17;
	input [9:0] src_0_s2_18;
	input [9:0] src_0_s2_19;
	input [9:0] src_0_s2_20;
	input [9:0] src_0_s2_21;
	input [9:0] src_0_s2_22;
	input [9:0] src_0_s2_23;
	input [9:0] src_0_s2_24;
	input [9:0] src_0_s2_25;
	input [9:0] src_0_s2_26;
	input [9:0] src_0_s2_27;
	input [9:0] src_0_s2_28;
	input [9:0] src_0_s2_29;
	input [9:0] src_0_s2_30;
	input [9:0] src_0_s2_31;
	input [9:0] src_0_s3_0;
	input [9:0] src_0_s3_1;
	input [9:0] src_0_s3_2;
	input [9:0] src_0_s3_3;
	input [9:0] src_0_s3_4;
	input [9:0] src_0_s3_5;
	input [9:0] src_0_s3_6;
	input [9:0] src_0_s3_7;
	input [9:0] src_0_s3_8;
	input [9:0] src_0_s3_9;
	input [9:0] src_0_s3_10;
	input [9:0] src_0_s3_11;
	input [9:0] src_0_s3_12;
	input [9:0] src_0_s3_13;
	input [9:0] src_0_s3_14;
	input [9:0] src_0_s3_15;
	input [9:0] src_0_s3_16;
	input [9:0] src_0_s3_17;
	input [9:0] src_0_s3_18;
	input [9:0] src_0_s3_19;
	input [9:0] src_0_s3_20;
	input [9:0] src_0_s3_21;
	input [9:0] src_0_s3_22;
	input [9:0] src_0_s3_23;
	input [9:0] src_0_s3_24;
	input [9:0] src_0_s3_25;
	input [9:0] src_0_s3_26;
	input [9:0] src_0_s3_27;
	input [9:0] src_0_s3_28;
	input [9:0] src_0_s3_29;
	input [9:0] src_0_s3_30;
	input [9:0] src_0_s3_31;
	input [9:0] src_0_s4_0;
	input [9:0] src_0_s4_1;
	input [9:0] src_0_s4_2;
	input [9:0] src_0_s4_3;
	input [9:0] src_0_s4_4;
	input [9:0] src_0_s4_5;
	input [9:0] src_0_s4_6;
	input [9:0] src_0_s4_7;
	input [9:0] src_0_s4_8;
	input [9:0] src_0_s4_9;
	input [9:0] src_0_s4_10;
	input [9:0] src_0_s4_11;
	input [9:0] src_0_s4_12;
	input [9:0] src_0_s4_13;
	input [9:0] src_0_s4_14;
	input [9:0] src_0_s4_15;
	input [9:0] src_0_s4_16;
	input [9:0] src_0_s4_17;
	input [9:0] src_0_s4_18;
	input [9:0] src_0_s4_19;
	input [9:0] src_0_s4_20;
	input [9:0] src_0_s4_21;
	input [9:0] src_0_s4_22;
	input [9:0] src_0_s4_23;
	input [9:0] src_0_s4_24;
	input [9:0] src_0_s4_25;
	input [9:0] src_0_s4_26;
	input [9:0] src_0_s4_27;
	input [9:0] src_0_s4_28;
	input [9:0] src_0_s4_29;
	input [9:0] src_0_s4_30;
	input [9:0] src_0_s4_31;
	input [9:0] src_0_s5_0;
	input [9:0] src_0_s5_1;
	input [9:0] src_0_s5_2;
	input [9:0] src_0_s5_3;
	input [9:0] src_0_s5_4;
	input [9:0] src_0_s5_5;
	input [9:0] src_0_s5_6;
	input [9:0] src_0_s5_7;
	input [9:0] src_0_s5_8;
	input [9:0] src_0_s5_9;
	input [9:0] src_0_s5_10;
	input [9:0] src_0_s5_11;
	input [9:0] src_0_s5_12;
	input [9:0] src_0_s5_13;
	input [9:0] src_0_s5_14;
	input [9:0] src_0_s5_15;
	input [9:0] src_0_s5_16;
	input [9:0] src_0_s5_17;
	input [9:0] src_0_s5_18;
	input [9:0] src_0_s5_19;
	input [9:0] src_0_s5_20;
	input [9:0] src_0_s5_21;
	input [9:0] src_0_s5_22;
	input [9:0] src_0_s5_23;
	input [9:0] src_0_s5_24;
	input [9:0] src_0_s5_25;
	input [9:0] src_0_s5_26;
	input [9:0] src_0_s5_27;
	input [9:0] src_0_s5_28;
	input [9:0] src_0_s5_29;
	input [9:0] src_0_s5_30;
	input [9:0] src_0_s5_31;
	input [9:0] src_0_s6_0;
	input [9:0] src_0_s6_1;
	input [9:0] src_0_s6_2;
	input [9:0] src_0_s6_3;
	input [9:0] src_0_s6_4;
	input [9:0] src_0_s6_5;
	input [9:0] src_0_s6_6;
	input [9:0] src_0_s6_7;
	input [9:0] src_0_s6_8;
	input [9:0] src_0_s6_9;
	input [9:0] src_0_s6_10;
	input [9:0] src_0_s6_11;
	input [9:0] src_0_s6_12;
	input [9:0] src_0_s6_13;
	input [9:0] src_0_s6_14;
	input [9:0] src_0_s6_15;
	input [9:0] src_0_s6_16;
	input [9:0] src_0_s6_17;
	input [9:0] src_0_s6_18;
	input [9:0] src_0_s6_19;
	input [9:0] src_0_s6_20;
	input [9:0] src_0_s6_21;
	input [9:0] src_0_s6_22;
	input [9:0] src_0_s6_23;
	input [9:0] src_0_s6_24;
	input [9:0] src_0_s6_25;
	input [9:0] src_0_s6_26;
	input [9:0] src_0_s6_27;
	input [9:0] src_0_s6_28;
	input [9:0] src_0_s6_29;
	input [9:0] src_0_s6_30;
	input [9:0] src_0_s6_31;
	input [7:0] src_1_0;
	input [7:0] src_1_1;
	input [7:0] src_1_2;
	input [7:0] src_1_3;
	input [7:0] src_1_4;
	input [7:0] src_1_5;
	input [7:0] src_1_6;
	input [7:0] src_1_7;
	input [7:0] src_1_8;
	input [7:0] src_1_9;
	input [7:0] src_1_10;
	input [7:0] src_1_11;
	input [7:0] src_1_12;
	input [7:0] src_1_13;
	input [7:0] src_1_14;
	input [7:0] src_1_15;
	input [7:0] src_1_16;
	input [7:0] src_1_17;
	input [7:0] src_1_18;
	input [7:0] src_1_19;
	input [7:0] src_1_20;
	input [7:0] src_1_21;
	input [7:0] src_1_22;
	input [7:0] src_1_23;
	input [7:0] src_1_24;
	input [7:0] src_1_25;
	input [7:0] src_1_26;
	input [7:0] src_1_27;
	input [7:0] src_1_28;
	input [7:0] src_1_29;
	input [7:0] src_1_30;
	input [7:0] src_1_31;
	output [31:0] pe_data_0;
	output [31:0] pe_data_1;
	output [31:0] pe_data_2;
	output [31:0] pe_data_3;
	output [31:0] pe_data_4;
	output [31:0] pe_data_5;
	output [31:0] pe_data_6;
	output [31:0] pe_data_7;
	output [31:0] pe_data_8;
	output [31:0] pe_data_9;
	output [31:0] pe_data_10;
	output [31:0] pe_data_11;
	output [31:0] pe_data_12;
	output [31:0] pe_data_13;
	output [31:0] pe_data_14;
	output [31:0] pe_data_15;
	output [31:0] pe_data_16;
	output [31:0] pe_data_17;
	output [31:0] pe_data_18;
	output [31:0] pe_data_19;
	output [31:0] pe_data_20;
	output [31:0] pe_data_21;
	output [31:0] pe_data_22;
	output [31:0] pe_data_23;
	output [31:0] pe_data_24;
	output [31:0] pe_data_25;
	output [31:0] pe_data_26;
	output [31:0] pe_data_27;
	output [31:0] pe_data_28;
	output [31:0] pe_data_29;
	output [31:0] pe_data_30;
	output [31:0] pe_data_31;
	output pe_data_valid;


endmodule
