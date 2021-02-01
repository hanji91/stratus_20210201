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
* Verilog Verification wrapper module for the pw_weight_addr_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module pw_weight_addr_gen_vlwrapper(
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
       stride_x,
       stride_y,
       pad_top_size,
       pad_bottom_size,
       pad_left_size,
       pad_right_size,
       read_weight_base_addr,
       pw_weight_addr,
       pw_weight_addr_valid,
       pw_weight_data_valid,
       cache_en

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
	input [7:0] stride_x;
	input [7:0] stride_y;
	input [7:0] pad_top_size;
	input [7:0] pad_bottom_size;
	input [7:0] pad_left_size;
	input [7:0] pad_right_size;
	input [31:0] read_weight_base_addr;
	output [31:0] pw_weight_addr;
	reg[31:0] pw_weight_addr;
	wire [31:0] m_pw_weight_addr;
	output pw_weight_addr_valid;
	reg pw_weight_addr_valid;
	wire m_pw_weight_addr_valid;
	output pw_weight_data_valid;
	reg pw_weight_data_valid;
	wire m_pw_weight_data_valid;
	output cache_en;
	reg cache_en;
	wire m_cache_en;


    // Instantiate the Verilog module that instantiates the SystemC module
    pw_weight_addr_gen_type_wrapper pw_weight_addr_gen_sc(
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
         .stride_x(stride_x),
         .stride_y(stride_y),
         .pad_top_size(pad_top_size),
         .pad_bottom_size(pad_bottom_size),
         .pad_left_size(pad_left_size),
         .pad_right_size(pad_right_size),
         .read_weight_base_addr(read_weight_base_addr),
         .pw_weight_addr(m_pw_weight_addr),
         .pw_weight_addr_valid(m_pw_weight_addr_valid),
         .pw_weight_data_valid(m_pw_weight_data_valid),
         .cache_en(m_cache_en)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_pw_weight_addr)
     begin
      pw_weight_addr <= m_pw_weight_addr;
     end
    always @(m_pw_weight_addr_valid)
     begin
      pw_weight_addr_valid <= m_pw_weight_addr_valid;
     end
    always @(m_pw_weight_data_valid)
     begin
      pw_weight_data_valid <= m_pw_weight_data_valid;
     end
    always @(m_cache_en)
     begin
      cache_en <= m_cache_en;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module pw_weight_addr_gen_type_wrapper(
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
       stride_x,
       stride_y,
       pad_top_size,
       pad_bottom_size,
       pad_left_size,
       pad_right_size,
       read_weight_base_addr,
       pw_weight_addr,
       pw_weight_addr_valid,
       pw_weight_data_valid,
       cache_en

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
	input [7:0] stride_x;
	input [7:0] stride_y;
	input [7:0] pad_top_size;
	input [7:0] pad_bottom_size;
	input [7:0] pad_left_size;
	input [7:0] pad_right_size;
	input [31:0] read_weight_base_addr;
	output [31:0] pw_weight_addr;
	output pw_weight_addr_valid;
	output pw_weight_data_valid;
	output cache_en;


endmodule
