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
* Verilog Verification wrapper module for the fp_mul module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module fp_mul_vlwrapper(
      clk,
       rstn,
       src_valid,
       a_man,
       a_exp,
       a_sign,
       b_man,
       b_exp,
       b_sign,
       r_man,
       r_exp,
       r_sign,
       dst_valid

    );

	input clk;
	input rstn;
	input src_valid;
	input [22:0] a_man;
	input [7:0] a_exp;
	input a_sign;
	input [22:0] b_man;
	input [7:0] b_exp;
	input b_sign;
	output [22:0] r_man;
	output [7:0] r_exp;
	output r_sign;
	reg[22:0] r_man;
	wire [22:0] m_r_man;
	reg[7:0] r_exp;
	wire [7:0] m_r_exp;
	reg r_sign;
	wire m_r_sign;
	output dst_valid;
	reg dst_valid;
	wire m_dst_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    fp_mul_type_wrapper fp_mul_sc(
        .clk(clk),
         .rstn(rstn),
         .src_valid(src_valid),
         .a_man(a_man),
         .a_exp(a_exp),
         .a_sign(a_sign),
         .b_man(b_man),
         .b_exp(b_exp),
         .b_sign(b_sign),
         .r_man(m_r_man),
         .r_exp(m_r_exp),
         .r_sign(m_r_sign),
         .dst_valid(m_dst_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_r_man)
     begin
      r_man <= m_r_man;
     end
    always @(m_r_exp)
     begin
      r_exp <= m_r_exp;
     end
    always @(m_r_sign)
     begin
      r_sign <= m_r_sign;
     end
    always @(m_dst_valid)
     begin
      dst_valid <= m_dst_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module fp_mul_type_wrapper(
      clk,
       rstn,
       src_valid,
       a_man,
       a_exp,
       a_sign,
       b_man,
       b_exp,
       b_sign,
       r_man,
       r_exp,
       r_sign,
       dst_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input src_valid;
	input [22:0] a_man;
	input [7:0] a_exp;
	input a_sign;
	input [22:0] b_man;
	input [7:0] b_exp;
	input b_sign;
	output [22:0] r_man;
	output [7:0] r_exp;
	output r_sign;
	output dst_valid;


endmodule
