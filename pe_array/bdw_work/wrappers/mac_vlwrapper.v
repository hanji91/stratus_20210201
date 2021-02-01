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
* Verilog Verification wrapper module for the mac module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module mac_vlwrapper(
      clk,
       rstn,
       init,
       clear,
       src_vld,
       src_0,
       src_1,
       acc,
       src_1_1d

    );

	input clk;
	input rstn;
	input init;
	input clear;
	input src_vld;
	input [9:0] src_0;
	input [7:0] src_1;
	output [31:0] acc;
	reg[31:0] acc;
	wire [31:0] m_acc;
	output [7:0] src_1_1d;
	reg[7:0] src_1_1d;
	wire [7:0] m_src_1_1d;


    // Instantiate the Verilog module that instantiates the SystemC module
    mac_type_wrapper mac_sc(
        .clk(clk),
         .rstn(rstn),
         .init(init),
         .clear(clear),
         .src_vld(src_vld),
         .src_0(src_0),
         .src_1(src_1),
         .acc(m_acc),
         .src_1_1d(m_src_1_1d)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_acc)
     begin
      acc <= m_acc;
     end
    always @(m_src_1_1d)
     begin
      src_1_1d <= m_src_1_1d;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module mac_type_wrapper(
      clk,
       rstn,
       init,
       clear,
       src_vld,
       src_0,
       src_1,
       acc,
       src_1_1d

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input init;
	input clear;
	input src_vld;
	input [9:0] src_0;
	input [7:0] src_1;
	output [31:0] acc;
	output [7:0] src_1_1d;


endmodule
