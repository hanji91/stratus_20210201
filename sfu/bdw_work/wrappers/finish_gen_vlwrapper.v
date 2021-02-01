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
* Verilog Verification wrapper module for the finish_gen module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module finish_gen_vlwrapper(
      clk,
       rstn,
       enable,
       clear,
       cnt_enable,
       total_num,
       finish

    );

	input clk;
	input rstn;
	input enable;
	input clear;
	input cnt_enable;
	input [31:0] total_num;
	output finish;
	reg finish;
	wire m_finish;


    // Instantiate the Verilog module that instantiates the SystemC module
    finish_gen_type_wrapper finish_gen_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .clear(clear),
         .cnt_enable(cnt_enable),
         .total_num(total_num),
         .finish(m_finish)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_finish)
     begin
      finish <= m_finish;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module finish_gen_type_wrapper(
      clk,
       rstn,
       enable,
       clear,
       cnt_enable,
       total_num,
       finish

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input clear;
	input cnt_enable;
	input [31:0] total_num;
	output finish;


endmodule
