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
* Verilog Verification wrapper module for the fix2float module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module fix2float_vlwrapper(
      clk,
       rstn,
       enable,
       fraction_len,
       src_valid,
       src,
       dst_valid,
       dst

    );

	input clk;
	input rstn;
	input enable;
	input [31:0] fraction_len;
	input src_valid;
	input [31:0] src;
	output dst_valid;
	reg dst_valid;
	wire m_dst_valid;
	output [31:0] dst;
	reg[31:0] dst;
	wire [31:0] m_dst;


    // Instantiate the Verilog module that instantiates the SystemC module
    fix2float_type_wrapper fix2float_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .fraction_len(fraction_len),
         .src_valid(src_valid),
         .src(src),
         .dst_valid(m_dst_valid),
         .dst(m_dst)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_dst_valid)
     begin
      dst_valid <= m_dst_valid;
     end
    always @(m_dst)
     begin
      dst <= m_dst;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module fix2float_type_wrapper(
      clk,
       rstn,
       enable,
       fraction_len,
       src_valid,
       src,
       dst_valid,
       dst

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input [31:0] fraction_len;
	input src_valid;
	input [31:0] src;
	output dst_valid;
	output [31:0] dst;


endmodule
