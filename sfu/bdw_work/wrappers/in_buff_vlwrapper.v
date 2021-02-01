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
* Verilog Verification wrapper module for the in_buff module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module in_buff_vlwrapper(
      clk,
       rstn,
       enable,
       in_data_0,
      in_data_1,
      in_data_2,
      in_data_3,
      in_data_4,
      in_data_5,
      in_data_6,
      in_data_7,
      in_data_8,
      in_data_9,
      in_data_10,
      in_data_11,
      in_data_12,
      in_data_13,
      in_data_14,
      in_data_15,
      in_data_16,
      in_data_17,
      in_data_18,
      in_data_19,
      in_data_20,
      in_data_21,
      in_data_22,
      in_data_23,
      in_data_24,
      in_data_25,
      in_data_26,
      in_data_27,
      in_data_28,
      in_data_29,
      in_data_30,
      in_data_31,
       in_data_valid,
       out_data_0,
      out_data_1,
      out_data_2,
      out_data_3,
      out_data_4,
      out_data_5,
      out_data_6,
      out_data_7,
       out_data_valid

    );

	input clk;
	input rstn;
	input enable;
	input [31:0] in_data_0;
	input [31:0] in_data_1;
	input [31:0] in_data_2;
	input [31:0] in_data_3;
	input [31:0] in_data_4;
	input [31:0] in_data_5;
	input [31:0] in_data_6;
	input [31:0] in_data_7;
	input [31:0] in_data_8;
	input [31:0] in_data_9;
	input [31:0] in_data_10;
	input [31:0] in_data_11;
	input [31:0] in_data_12;
	input [31:0] in_data_13;
	input [31:0] in_data_14;
	input [31:0] in_data_15;
	input [31:0] in_data_16;
	input [31:0] in_data_17;
	input [31:0] in_data_18;
	input [31:0] in_data_19;
	input [31:0] in_data_20;
	input [31:0] in_data_21;
	input [31:0] in_data_22;
	input [31:0] in_data_23;
	input [31:0] in_data_24;
	input [31:0] in_data_25;
	input [31:0] in_data_26;
	input [31:0] in_data_27;
	input [31:0] in_data_28;
	input [31:0] in_data_29;
	input [31:0] in_data_30;
	input [31:0] in_data_31;
	input in_data_valid;
	output [31:0] out_data_0;
	output [31:0] out_data_1;
	output [31:0] out_data_2;
	output [31:0] out_data_3;
	output [31:0] out_data_4;
	output [31:0] out_data_5;
	output [31:0] out_data_6;
	output [31:0] out_data_7;
	reg[31:0] out_data_0;
	wire [31:0] m_out_data_0;
	reg[31:0] out_data_1;
	wire [31:0] m_out_data_1;
	reg[31:0] out_data_2;
	wire [31:0] m_out_data_2;
	reg[31:0] out_data_3;
	wire [31:0] m_out_data_3;
	reg[31:0] out_data_4;
	wire [31:0] m_out_data_4;
	reg[31:0] out_data_5;
	wire [31:0] m_out_data_5;
	reg[31:0] out_data_6;
	wire [31:0] m_out_data_6;
	reg[31:0] out_data_7;
	wire [31:0] m_out_data_7;
	output out_data_valid;
	reg out_data_valid;
	wire m_out_data_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    in_buff_type_wrapper in_buff_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .in_data_0(in_data_0),
        .in_data_1(in_data_1),
        .in_data_2(in_data_2),
        .in_data_3(in_data_3),
        .in_data_4(in_data_4),
        .in_data_5(in_data_5),
        .in_data_6(in_data_6),
        .in_data_7(in_data_7),
        .in_data_8(in_data_8),
        .in_data_9(in_data_9),
        .in_data_10(in_data_10),
        .in_data_11(in_data_11),
        .in_data_12(in_data_12),
        .in_data_13(in_data_13),
        .in_data_14(in_data_14),
        .in_data_15(in_data_15),
        .in_data_16(in_data_16),
        .in_data_17(in_data_17),
        .in_data_18(in_data_18),
        .in_data_19(in_data_19),
        .in_data_20(in_data_20),
        .in_data_21(in_data_21),
        .in_data_22(in_data_22),
        .in_data_23(in_data_23),
        .in_data_24(in_data_24),
        .in_data_25(in_data_25),
        .in_data_26(in_data_26),
        .in_data_27(in_data_27),
        .in_data_28(in_data_28),
        .in_data_29(in_data_29),
        .in_data_30(in_data_30),
        .in_data_31(in_data_31),
         .in_data_valid(in_data_valid),
         .out_data_0(m_out_data_0),
        .out_data_1(m_out_data_1),
        .out_data_2(m_out_data_2),
        .out_data_3(m_out_data_3),
        .out_data_4(m_out_data_4),
        .out_data_5(m_out_data_5),
        .out_data_6(m_out_data_6),
        .out_data_7(m_out_data_7),
         .out_data_valid(m_out_data_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_out_data_0)
     begin
      out_data_0 <= m_out_data_0;
     end
    always @(m_out_data_1)
     begin
      out_data_1 <= m_out_data_1;
     end
    always @(m_out_data_2)
     begin
      out_data_2 <= m_out_data_2;
     end
    always @(m_out_data_3)
     begin
      out_data_3 <= m_out_data_3;
     end
    always @(m_out_data_4)
     begin
      out_data_4 <= m_out_data_4;
     end
    always @(m_out_data_5)
     begin
      out_data_5 <= m_out_data_5;
     end
    always @(m_out_data_6)
     begin
      out_data_6 <= m_out_data_6;
     end
    always @(m_out_data_7)
     begin
      out_data_7 <= m_out_data_7;
     end
    always @(m_out_data_valid)
     begin
      out_data_valid <= m_out_data_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module in_buff_type_wrapper(
      clk,
       rstn,
       enable,
       in_data_0,
      in_data_1,
      in_data_2,
      in_data_3,
      in_data_4,
      in_data_5,
      in_data_6,
      in_data_7,
      in_data_8,
      in_data_9,
      in_data_10,
      in_data_11,
      in_data_12,
      in_data_13,
      in_data_14,
      in_data_15,
      in_data_16,
      in_data_17,
      in_data_18,
      in_data_19,
      in_data_20,
      in_data_21,
      in_data_22,
      in_data_23,
      in_data_24,
      in_data_25,
      in_data_26,
      in_data_27,
      in_data_28,
      in_data_29,
      in_data_30,
      in_data_31,
       in_data_valid,
       out_data_0,
      out_data_1,
      out_data_2,
      out_data_3,
      out_data_4,
      out_data_5,
      out_data_6,
      out_data_7,
       out_data_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input [31:0] in_data_0;
	input [31:0] in_data_1;
	input [31:0] in_data_2;
	input [31:0] in_data_3;
	input [31:0] in_data_4;
	input [31:0] in_data_5;
	input [31:0] in_data_6;
	input [31:0] in_data_7;
	input [31:0] in_data_8;
	input [31:0] in_data_9;
	input [31:0] in_data_10;
	input [31:0] in_data_11;
	input [31:0] in_data_12;
	input [31:0] in_data_13;
	input [31:0] in_data_14;
	input [31:0] in_data_15;
	input [31:0] in_data_16;
	input [31:0] in_data_17;
	input [31:0] in_data_18;
	input [31:0] in_data_19;
	input [31:0] in_data_20;
	input [31:0] in_data_21;
	input [31:0] in_data_22;
	input [31:0] in_data_23;
	input [31:0] in_data_24;
	input [31:0] in_data_25;
	input [31:0] in_data_26;
	input [31:0] in_data_27;
	input [31:0] in_data_28;
	input [31:0] in_data_29;
	input [31:0] in_data_30;
	input [31:0] in_data_31;
	input in_data_valid;
	output [31:0] out_data_0;
	output [31:0] out_data_1;
	output [31:0] out_data_2;
	output [31:0] out_data_3;
	output [31:0] out_data_4;
	output [31:0] out_data_5;
	output [31:0] out_data_6;
	output [31:0] out_data_7;
	output out_data_valid;


endmodule
