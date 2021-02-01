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
* Verilog Verification wrapper module for the pw_feature_addr_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module pw_feature_addr_gen_vlwrapper(
      clk,
       rstn,
       stop,
       start,
       start_rising,
       systolic_en,
       systolic_depth,
       feature_width,
       feature_height,
       feature_channel,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       filter_width,
       filter_height,
       filter_channel,
       filter_number,
       read_feature_base_addr,
       pw_feature_addr,
       pw_feature_addr_valid,
       pw_feature_data_valid,
       pw_cache_en,
       pw_feature_data_sel,
       pw_addr_if_start,
       systolic_sel_12d

    );

	input clk;
	input rstn;
	input stop;
	input [7:0] start;
	input start_rising;
	input [7:0] systolic_en;
	input [7:0] systolic_depth;
	input [15:0] feature_width;
	input [15:0] feature_height;
	input [15:0] feature_channel;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [15:0] filter_width;
	input [15:0] filter_height;
	input [15:0] filter_channel;
	input [15:0] filter_number;
	input [31:0] read_feature_base_addr;
	output [31:0] pw_feature_addr;
	reg[31:0] pw_feature_addr;
	wire [31:0] m_pw_feature_addr;
	output pw_feature_addr_valid;
	reg pw_feature_addr_valid;
	wire m_pw_feature_addr_valid;
	output pw_feature_data_valid;
	reg pw_feature_data_valid;
	wire m_pw_feature_data_valid;
	output pw_cache_en;
	reg pw_cache_en;
	wire m_pw_cache_en;
	output [15:0] pw_feature_data_sel;
	reg[15:0] pw_feature_data_sel;
	wire [15:0] m_pw_feature_data_sel;
	output pw_addr_if_start;
	reg pw_addr_if_start;
	wire m_pw_addr_if_start;
	output [7:0] systolic_sel_12d;
	reg[7:0] systolic_sel_12d;
	wire [7:0] m_systolic_sel_12d;


    // Instantiate the Verilog module that instantiates the SystemC module
    pw_feature_addr_gen_type_wrapper pw_feature_addr_gen_sc(
        .clk(clk),
         .rstn(rstn),
         .stop(stop),
         .start(start),
         .start_rising(start_rising),
         .systolic_en(systolic_en),
         .systolic_depth(systolic_depth),
         .feature_width(feature_width),
         .feature_height(feature_height),
         .feature_channel(feature_channel),
         .out_feature_width(out_feature_width),
         .out_feature_height(out_feature_height),
         .out_feature_channel(out_feature_channel),
         .filter_width(filter_width),
         .filter_height(filter_height),
         .filter_channel(filter_channel),
         .filter_number(filter_number),
         .read_feature_base_addr(read_feature_base_addr),
         .pw_feature_addr(m_pw_feature_addr),
         .pw_feature_addr_valid(m_pw_feature_addr_valid),
         .pw_feature_data_valid(m_pw_feature_data_valid),
         .pw_cache_en(m_pw_cache_en),
         .pw_feature_data_sel(m_pw_feature_data_sel),
         .pw_addr_if_start(m_pw_addr_if_start),
         .systolic_sel_12d(m_systolic_sel_12d)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_pw_feature_addr)
     begin
      pw_feature_addr <= m_pw_feature_addr;
     end
    always @(m_pw_feature_addr_valid)
     begin
      pw_feature_addr_valid <= m_pw_feature_addr_valid;
     end
    always @(m_pw_feature_data_valid)
     begin
      pw_feature_data_valid <= m_pw_feature_data_valid;
     end
    always @(m_pw_cache_en)
     begin
      pw_cache_en <= m_pw_cache_en;
     end
    always @(m_pw_feature_data_sel)
     begin
      pw_feature_data_sel <= m_pw_feature_data_sel;
     end
    always @(m_pw_addr_if_start)
     begin
      pw_addr_if_start <= m_pw_addr_if_start;
     end
    always @(m_systolic_sel_12d)
     begin
      systolic_sel_12d <= m_systolic_sel_12d;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module pw_feature_addr_gen_type_wrapper(
      clk,
       rstn,
       stop,
       start,
       start_rising,
       systolic_en,
       systolic_depth,
       feature_width,
       feature_height,
       feature_channel,
       out_feature_width,
       out_feature_height,
       out_feature_channel,
       filter_width,
       filter_height,
       filter_channel,
       filter_number,
       read_feature_base_addr,
       pw_feature_addr,
       pw_feature_addr_valid,
       pw_feature_data_valid,
       pw_cache_en,
       pw_feature_data_sel,
       pw_addr_if_start,
       systolic_sel_12d

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input stop;
	input [7:0] start;
	input start_rising;
	input [7:0] systolic_en;
	input [7:0] systolic_depth;
	input [15:0] feature_width;
	input [15:0] feature_height;
	input [15:0] feature_channel;
	input [15:0] out_feature_width;
	input [15:0] out_feature_height;
	input [15:0] out_feature_channel;
	input [15:0] filter_width;
	input [15:0] filter_height;
	input [15:0] filter_channel;
	input [15:0] filter_number;
	input [31:0] read_feature_base_addr;
	output [31:0] pw_feature_addr;
	output pw_feature_addr_valid;
	output pw_feature_data_valid;
	output pw_cache_en;
	output [15:0] pw_feature_data_sel;
	output pw_addr_if_start;
	output [7:0] systolic_sel_12d;


endmodule
