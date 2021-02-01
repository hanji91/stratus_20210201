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
* Verilog Verification wrapper module for the feature_write_addr_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module feature_write_addr_gen_vlwrapper(
      clk,
       rstn,
       init,
       start,
       conv_type,
       stop,
       base_addr,
       src,
       src_vld,
       read_address,
       read_address_valid,
       data_in_en,
       read_data,
       address_0,
       cs_0,
       we_0,
       oe_0,
       data_in,
       data_out

    );

	input clk;
	input rstn;
	input init;
	input [7:0] start;
	input [7:0] conv_type;
	output stop;
	reg stop;
	wire m_stop;
	input [31:0] base_addr;
	input [319:0] src;
	input src_vld;
	input [31:0] read_address;
	input read_address_valid;
	input data_in_en;
	output [319:0] read_data;
	reg[319:0] read_data;
	wire [319:0] m_read_data;
	output [31:0] address_0;
	reg[31:0] address_0;
	wire [31:0] m_address_0;
	output cs_0;
	reg cs_0;
	wire m_cs_0;
	output we_0;
	reg we_0;
	wire m_we_0;
	output oe_0;
	reg oe_0;
	wire m_oe_0;
	input [319:0] data_in;
	output [319:0] data_out;
	reg[319:0] data_out;
	wire [319:0] m_data_out;


    // Instantiate the Verilog module that instantiates the SystemC module
    feature_write_addr_gen_type_wrapper feature_write_addr_gen_sc(
        .clk(clk),
         .rstn(rstn),
         .init(init),
         .start(start),
         .conv_type(conv_type),
         .stop(m_stop),
         .base_addr(base_addr),
         .src(src),
         .src_vld(src_vld),
         .read_address(read_address),
         .read_address_valid(read_address_valid),
         .data_in_en(data_in_en),
         .read_data(m_read_data),
         .address_0(m_address_0),
         .cs_0(m_cs_0),
         .we_0(m_we_0),
         .oe_0(m_oe_0),
         .data_in(data_in),
         .data_out(m_data_out)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_stop)
     begin
      stop <= m_stop;
     end
    always @(m_read_data)
     begin
      read_data <= m_read_data;
     end
    always @(m_address_0)
     begin
      address_0 <= m_address_0;
     end
    always @(m_cs_0)
     begin
      cs_0 <= m_cs_0;
     end
    always @(m_we_0)
     begin
      we_0 <= m_we_0;
     end
    always @(m_oe_0)
     begin
      oe_0 <= m_oe_0;
     end
    always @(m_data_out)
     begin
      data_out <= m_data_out;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module feature_write_addr_gen_type_wrapper(
      clk,
       rstn,
       init,
       start,
       conv_type,
       stop,
       base_addr,
       src,
       src_vld,
       read_address,
       read_address_valid,
       data_in_en,
       read_data,
       address_0,
       cs_0,
       we_0,
       oe_0,
       data_in,
       data_out

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input init;
	input [7:0] start;
	input [7:0] conv_type;
	output stop;
	input [31:0] base_addr;
	input [319:0] src;
	input src_vld;
	input [31:0] read_address;
	input read_address_valid;
	input data_in_en;
	output [319:0] read_data;
	output [31:0] address_0;
	output cs_0;
	output we_0;
	output oe_0;
	input [319:0] data_in;
	output [319:0] data_out;


endmodule
