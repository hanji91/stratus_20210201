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
* Verilog Verification wrapper module for the bias_addr_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module bias_addr_gen_vlwrapper(
      clk,
       rstn,
       init,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       bias_read_base_addr,
       bias_en,
       start_rising,
       data_en,
       bias_addr,
       bias_addr_valid

    );

	input clk;
	input rstn;
	input init;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [31:0] bias_read_base_addr;
	input bias_en;
	input start_rising;
	input data_en;
	output [31:0] bias_addr;
	reg[31:0] bias_addr;
	wire [31:0] m_bias_addr;
	output bias_addr_valid;
	reg bias_addr_valid;
	wire m_bias_addr_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    bias_addr_gen_type_wrapper bias_addr_gen_sc(
        .clk(clk),
         .rstn(rstn),
         .init(init),
         .out_feature_width(out_feature_width),
         .out_feature_height(out_feature_height),
         .out_feature_channel(out_feature_channel),
         .bias_read_base_addr(bias_read_base_addr),
         .bias_en(bias_en),
         .start_rising(start_rising),
         .data_en(data_en),
         .bias_addr(m_bias_addr),
         .bias_addr_valid(m_bias_addr_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_bias_addr)
     begin
      bias_addr <= m_bias_addr;
     end
    always @(m_bias_addr_valid)
     begin
      bias_addr_valid <= m_bias_addr_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module bias_addr_gen_type_wrapper(
      clk,
       rstn,
       init,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       bias_read_base_addr,
       bias_en,
       start_rising,
       data_en,
       bias_addr,
       bias_addr_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input init;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [31:0] bias_read_base_addr;
	input bias_en;
	input start_rising;
	input data_en;
	output [31:0] bias_addr;
	output bias_addr_valid;


endmodule
