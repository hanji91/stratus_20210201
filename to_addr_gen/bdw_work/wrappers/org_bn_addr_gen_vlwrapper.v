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
* Verilog Verification wrapper module for the org_bn_addr_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module org_bn_addr_gen_vlwrapper(
      clk,
       rstn,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       bn_read_base_addr,
       bn_en,
       start_rising,
       data_en,
       bn_addr,
       bn_addr_valid

    );

	input clk;
	input rstn;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [31:0] bn_read_base_addr;
	input [7:0] bn_en;
	input start_rising;
	input data_en;
	output [31:0] bn_addr;
	reg[31:0] bn_addr;
	wire [31:0] m_bn_addr;
	output bn_addr_valid;
	reg bn_addr_valid;
	wire m_bn_addr_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    org_bn_addr_gen_type_wrapper org_bn_addr_gen_sc(
        .clk(clk),
         .rstn(rstn),
         .out_feature_width(out_feature_width),
         .out_feature_height(out_feature_height),
         .out_feature_channel(out_feature_channel),
         .bn_read_base_addr(bn_read_base_addr),
         .bn_en(bn_en),
         .start_rising(start_rising),
         .data_en(data_en),
         .bn_addr(m_bn_addr),
         .bn_addr_valid(m_bn_addr_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_bn_addr)
     begin
      bn_addr <= m_bn_addr;
     end
    always @(m_bn_addr_valid)
     begin
      bn_addr_valid <= m_bn_addr_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module org_bn_addr_gen_type_wrapper(
      clk,
       rstn,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       bn_read_base_addr,
       bn_en,
       start_rising,
       data_en,
       bn_addr,
       bn_addr_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [31:0] bn_read_base_addr;
	input [7:0] bn_en;
	input start_rising;
	input data_en;
	output [31:0] bn_addr;
	output bn_addr_valid;


endmodule
