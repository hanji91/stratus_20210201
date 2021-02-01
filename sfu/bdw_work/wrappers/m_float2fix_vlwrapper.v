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
* Verilog Verification wrapper module for the m_float2fix module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module m_float2fix_vlwrapper(
      clk,
       rstn,
       src_valid,
       src_0,
      src_1,
      src_2,
      src_3,
      src_4,
      src_5,
      src_6,
      src_7,
       dst_valid,
       dst_0,
      dst_1,
      dst_2,
      dst_3,
      dst_4,
      dst_5,
      dst_6,
      dst_7

    );

	input clk;
	input rstn;
	input src_valid;
	input [31:0] src_0;
	input [31:0] src_1;
	input [31:0] src_2;
	input [31:0] src_3;
	input [31:0] src_4;
	input [31:0] src_5;
	input [31:0] src_6;
	input [31:0] src_7;
	output dst_valid;
	reg dst_valid;
	wire m_dst_valid;
	output [31:0] dst_0;
	output [31:0] dst_1;
	output [31:0] dst_2;
	output [31:0] dst_3;
	output [31:0] dst_4;
	output [31:0] dst_5;
	output [31:0] dst_6;
	output [31:0] dst_7;
	reg[31:0] dst_0;
	wire [31:0] m_dst_0;
	reg[31:0] dst_1;
	wire [31:0] m_dst_1;
	reg[31:0] dst_2;
	wire [31:0] m_dst_2;
	reg[31:0] dst_3;
	wire [31:0] m_dst_3;
	reg[31:0] dst_4;
	wire [31:0] m_dst_4;
	reg[31:0] dst_5;
	wire [31:0] m_dst_5;
	reg[31:0] dst_6;
	wire [31:0] m_dst_6;
	reg[31:0] dst_7;
	wire [31:0] m_dst_7;


    // Instantiate the Verilog module that instantiates the SystemC module
    m_float2fix_type_wrapper m_float2fix_sc(
        .clk(clk),
         .rstn(rstn),
         .src_valid(src_valid),
         .src_0(src_0),
        .src_1(src_1),
        .src_2(src_2),
        .src_3(src_3),
        .src_4(src_4),
        .src_5(src_5),
        .src_6(src_6),
        .src_7(src_7),
         .dst_valid(m_dst_valid),
         .dst_0(m_dst_0),
        .dst_1(m_dst_1),
        .dst_2(m_dst_2),
        .dst_3(m_dst_3),
        .dst_4(m_dst_4),
        .dst_5(m_dst_5),
        .dst_6(m_dst_6),
        .dst_7(m_dst_7)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_dst_valid)
     begin
      dst_valid <= m_dst_valid;
     end
    always @(m_dst_0)
     begin
      dst_0 <= m_dst_0;
     end
    always @(m_dst_1)
     begin
      dst_1 <= m_dst_1;
     end
    always @(m_dst_2)
     begin
      dst_2 <= m_dst_2;
     end
    always @(m_dst_3)
     begin
      dst_3 <= m_dst_3;
     end
    always @(m_dst_4)
     begin
      dst_4 <= m_dst_4;
     end
    always @(m_dst_5)
     begin
      dst_5 <= m_dst_5;
     end
    always @(m_dst_6)
     begin
      dst_6 <= m_dst_6;
     end
    always @(m_dst_7)
     begin
      dst_7 <= m_dst_7;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module m_float2fix_type_wrapper(
      clk,
       rstn,
       src_valid,
       src_0,
      src_1,
      src_2,
      src_3,
      src_4,
      src_5,
      src_6,
      src_7,
       dst_valid,
       dst_0,
      dst_1,
      dst_2,
      dst_3,
      dst_4,
      dst_5,
      dst_6,
      dst_7

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input src_valid;
	input [31:0] src_0;
	input [31:0] src_1;
	input [31:0] src_2;
	input [31:0] src_3;
	input [31:0] src_4;
	input [31:0] src_5;
	input [31:0] src_6;
	input [31:0] src_7;
	output dst_valid;
	output [31:0] dst_0;
	output [31:0] dst_1;
	output [31:0] dst_2;
	output [31:0] dst_3;
	output [31:0] dst_4;
	output [31:0] dst_5;
	output [31:0] dst_6;
	output [31:0] dst_7;


endmodule
