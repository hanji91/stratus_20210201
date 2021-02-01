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
* Verilog Verification wrapper module for the sfu_out_buff module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module sfu_out_buff_vlwrapper(
      clk,
       rstn,
       enable,
       learned_clip_en,
       in0_data_0,
      in0_data_1,
      in0_data_2,
      in0_data_3,
      in0_data_4,
      in0_data_5,
      in0_data_6,
      in0_data_7,
       in0_data_valid,
       in1_data_0,
      in1_data_1,
      in1_data_2,
      in1_data_3,
      in1_data_4,
      in1_data_5,
      in1_data_6,
      in1_data_7,
       in1_data_valid,
       out_data,
       out_data_valid

    );

	input clk;
	input rstn;
	input enable;
	input learned_clip_en;
	input [31:0] in0_data_0;
	input [31:0] in0_data_1;
	input [31:0] in0_data_2;
	input [31:0] in0_data_3;
	input [31:0] in0_data_4;
	input [31:0] in0_data_5;
	input [31:0] in0_data_6;
	input [31:0] in0_data_7;
	input in0_data_valid;
	input [31:0] in1_data_0;
	input [31:0] in1_data_1;
	input [31:0] in1_data_2;
	input [31:0] in1_data_3;
	input [31:0] in1_data_4;
	input [31:0] in1_data_5;
	input [31:0] in1_data_6;
	input [31:0] in1_data_7;
	input in1_data_valid;
	output [319:0] out_data;
	reg[319:0] out_data;
	wire [319:0] m_out_data;
	output out_data_valid;
	reg out_data_valid;
	wire m_out_data_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    sfu_out_buff_type_wrapper sfu_out_buff_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .learned_clip_en(learned_clip_en),
         .in0_data_0(in0_data_0),
        .in0_data_1(in0_data_1),
        .in0_data_2(in0_data_2),
        .in0_data_3(in0_data_3),
        .in0_data_4(in0_data_4),
        .in0_data_5(in0_data_5),
        .in0_data_6(in0_data_6),
        .in0_data_7(in0_data_7),
         .in0_data_valid(in0_data_valid),
         .in1_data_0(in1_data_0),
        .in1_data_1(in1_data_1),
        .in1_data_2(in1_data_2),
        .in1_data_3(in1_data_3),
        .in1_data_4(in1_data_4),
        .in1_data_5(in1_data_5),
        .in1_data_6(in1_data_6),
        .in1_data_7(in1_data_7),
         .in1_data_valid(in1_data_valid),
         .out_data(m_out_data),
         .out_data_valid(m_out_data_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_out_data)
     begin
      out_data <= m_out_data;
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
module sfu_out_buff_type_wrapper(
      clk,
       rstn,
       enable,
       learned_clip_en,
       in0_data_0,
      in0_data_1,
      in0_data_2,
      in0_data_3,
      in0_data_4,
      in0_data_5,
      in0_data_6,
      in0_data_7,
       in0_data_valid,
       in1_data_0,
      in1_data_1,
      in1_data_2,
      in1_data_3,
      in1_data_4,
      in1_data_5,
      in1_data_6,
      in1_data_7,
       in1_data_valid,
       out_data,
       out_data_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input learned_clip_en;
	input [31:0] in0_data_0;
	input [31:0] in0_data_1;
	input [31:0] in0_data_2;
	input [31:0] in0_data_3;
	input [31:0] in0_data_4;
	input [31:0] in0_data_5;
	input [31:0] in0_data_6;
	input [31:0] in0_data_7;
	input in0_data_valid;
	input [31:0] in1_data_0;
	input [31:0] in1_data_1;
	input [31:0] in1_data_2;
	input [31:0] in1_data_3;
	input [31:0] in1_data_4;
	input [31:0] in1_data_5;
	input [31:0] in1_data_6;
	input [31:0] in1_data_7;
	input in1_data_valid;
	output [319:0] out_data;
	output out_data_valid;


endmodule
