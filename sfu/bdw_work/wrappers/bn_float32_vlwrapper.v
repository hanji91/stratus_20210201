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
* Verilog Verification wrapper module for the bn_float32 module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module bn_float32_vlwrapper(
      clk,
       rstn,
       enable,
       src_valid,
       src_man_0,
       src_exp_0,
       src_sign_0,
      src_man_1,
       src_exp_1,
       src_sign_1,
      src_man_2,
       src_exp_2,
       src_sign_2,
      src_man_3,
       src_exp_3,
       src_sign_3,
      src_man_4,
       src_exp_4,
       src_sign_4,
      src_man_5,
       src_exp_5,
       src_sign_5,
      src_man_6,
       src_exp_6,
       src_sign_6,
      src_man_7,
       src_exp_7,
       src_sign_7,
       mul_coeff_man_0,
       mul_coeff_exp_0,
       mul_coeff_sign_0,
      mul_coeff_man_1,
       mul_coeff_exp_1,
       mul_coeff_sign_1,
      mul_coeff_man_2,
       mul_coeff_exp_2,
       mul_coeff_sign_2,
      mul_coeff_man_3,
       mul_coeff_exp_3,
       mul_coeff_sign_3,
      mul_coeff_man_4,
       mul_coeff_exp_4,
       mul_coeff_sign_4,
      mul_coeff_man_5,
       mul_coeff_exp_5,
       mul_coeff_sign_5,
      mul_coeff_man_6,
       mul_coeff_exp_6,
       mul_coeff_sign_6,
      mul_coeff_man_7,
       mul_coeff_exp_7,
       mul_coeff_sign_7,
       add_coeff_man_0,
       add_coeff_exp_0,
       add_coeff_sign_0,
      add_coeff_man_1,
       add_coeff_exp_1,
       add_coeff_sign_1,
      add_coeff_man_2,
       add_coeff_exp_2,
       add_coeff_sign_2,
      add_coeff_man_3,
       add_coeff_exp_3,
       add_coeff_sign_3,
      add_coeff_man_4,
       add_coeff_exp_4,
       add_coeff_sign_4,
      add_coeff_man_5,
       add_coeff_exp_5,
       add_coeff_sign_5,
      add_coeff_man_6,
       add_coeff_exp_6,
       add_coeff_sign_6,
      add_coeff_man_7,
       add_coeff_exp_7,
       add_coeff_sign_7,
       dst_valid,
       dst_man_0,
       dst_exp_0,
       dst_sign_0,
      dst_man_1,
       dst_exp_1,
       dst_sign_1,
      dst_man_2,
       dst_exp_2,
       dst_sign_2,
      dst_man_3,
       dst_exp_3,
       dst_sign_3,
      dst_man_4,
       dst_exp_4,
       dst_sign_4,
      dst_man_5,
       dst_exp_5,
       dst_sign_5,
      dst_man_6,
       dst_exp_6,
       dst_sign_6,
      dst_man_7,
       dst_exp_7,
       dst_sign_7

    );

	input clk;
	input rstn;
	input enable;
	input src_valid;
	input [22:0] src_man_0;
	input [7:0] src_exp_0;
	input src_sign_0;
	input [22:0] src_man_1;
	input [7:0] src_exp_1;
	input src_sign_1;
	input [22:0] src_man_2;
	input [7:0] src_exp_2;
	input src_sign_2;
	input [22:0] src_man_3;
	input [7:0] src_exp_3;
	input src_sign_3;
	input [22:0] src_man_4;
	input [7:0] src_exp_4;
	input src_sign_4;
	input [22:0] src_man_5;
	input [7:0] src_exp_5;
	input src_sign_5;
	input [22:0] src_man_6;
	input [7:0] src_exp_6;
	input src_sign_6;
	input [22:0] src_man_7;
	input [7:0] src_exp_7;
	input src_sign_7;
	input [22:0] mul_coeff_man_0;
	input [7:0] mul_coeff_exp_0;
	input mul_coeff_sign_0;
	input [22:0] mul_coeff_man_1;
	input [7:0] mul_coeff_exp_1;
	input mul_coeff_sign_1;
	input [22:0] mul_coeff_man_2;
	input [7:0] mul_coeff_exp_2;
	input mul_coeff_sign_2;
	input [22:0] mul_coeff_man_3;
	input [7:0] mul_coeff_exp_3;
	input mul_coeff_sign_3;
	input [22:0] mul_coeff_man_4;
	input [7:0] mul_coeff_exp_4;
	input mul_coeff_sign_4;
	input [22:0] mul_coeff_man_5;
	input [7:0] mul_coeff_exp_5;
	input mul_coeff_sign_5;
	input [22:0] mul_coeff_man_6;
	input [7:0] mul_coeff_exp_6;
	input mul_coeff_sign_6;
	input [22:0] mul_coeff_man_7;
	input [7:0] mul_coeff_exp_7;
	input mul_coeff_sign_7;
	input [22:0] add_coeff_man_0;
	input [7:0] add_coeff_exp_0;
	input add_coeff_sign_0;
	input [22:0] add_coeff_man_1;
	input [7:0] add_coeff_exp_1;
	input add_coeff_sign_1;
	input [22:0] add_coeff_man_2;
	input [7:0] add_coeff_exp_2;
	input add_coeff_sign_2;
	input [22:0] add_coeff_man_3;
	input [7:0] add_coeff_exp_3;
	input add_coeff_sign_3;
	input [22:0] add_coeff_man_4;
	input [7:0] add_coeff_exp_4;
	input add_coeff_sign_4;
	input [22:0] add_coeff_man_5;
	input [7:0] add_coeff_exp_5;
	input add_coeff_sign_5;
	input [22:0] add_coeff_man_6;
	input [7:0] add_coeff_exp_6;
	input add_coeff_sign_6;
	input [22:0] add_coeff_man_7;
	input [7:0] add_coeff_exp_7;
	input add_coeff_sign_7;
	output dst_valid;
	reg dst_valid;
	wire m_dst_valid;
	output [22:0] dst_man_0;
	output [7:0] dst_exp_0;
	output dst_sign_0;
	output [22:0] dst_man_1;
	output [7:0] dst_exp_1;
	output dst_sign_1;
	output [22:0] dst_man_2;
	output [7:0] dst_exp_2;
	output dst_sign_2;
	output [22:0] dst_man_3;
	output [7:0] dst_exp_3;
	output dst_sign_3;
	output [22:0] dst_man_4;
	output [7:0] dst_exp_4;
	output dst_sign_4;
	output [22:0] dst_man_5;
	output [7:0] dst_exp_5;
	output dst_sign_5;
	output [22:0] dst_man_6;
	output [7:0] dst_exp_6;
	output dst_sign_6;
	output [22:0] dst_man_7;
	output [7:0] dst_exp_7;
	output dst_sign_7;
	reg[22:0] dst_man_0;
	wire [22:0] m_dst_man_0;
	reg[7:0] dst_exp_0;
	wire [7:0] m_dst_exp_0;
	reg dst_sign_0;
	wire m_dst_sign_0;
	reg[22:0] dst_man_1;
	wire [22:0] m_dst_man_1;
	reg[7:0] dst_exp_1;
	wire [7:0] m_dst_exp_1;
	reg dst_sign_1;
	wire m_dst_sign_1;
	reg[22:0] dst_man_2;
	wire [22:0] m_dst_man_2;
	reg[7:0] dst_exp_2;
	wire [7:0] m_dst_exp_2;
	reg dst_sign_2;
	wire m_dst_sign_2;
	reg[22:0] dst_man_3;
	wire [22:0] m_dst_man_3;
	reg[7:0] dst_exp_3;
	wire [7:0] m_dst_exp_3;
	reg dst_sign_3;
	wire m_dst_sign_3;
	reg[22:0] dst_man_4;
	wire [22:0] m_dst_man_4;
	reg[7:0] dst_exp_4;
	wire [7:0] m_dst_exp_4;
	reg dst_sign_4;
	wire m_dst_sign_4;
	reg[22:0] dst_man_5;
	wire [22:0] m_dst_man_5;
	reg[7:0] dst_exp_5;
	wire [7:0] m_dst_exp_5;
	reg dst_sign_5;
	wire m_dst_sign_5;
	reg[22:0] dst_man_6;
	wire [22:0] m_dst_man_6;
	reg[7:0] dst_exp_6;
	wire [7:0] m_dst_exp_6;
	reg dst_sign_6;
	wire m_dst_sign_6;
	reg[22:0] dst_man_7;
	wire [22:0] m_dst_man_7;
	reg[7:0] dst_exp_7;
	wire [7:0] m_dst_exp_7;
	reg dst_sign_7;
	wire m_dst_sign_7;


    // Instantiate the Verilog module that instantiates the SystemC module
    bn_float32_type_wrapper bn_float32_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .src_valid(src_valid),
         .src_man_0(src_man_0),
         .src_exp_0(src_exp_0),
         .src_sign_0(src_sign_0),
        .src_man_1(src_man_1),
         .src_exp_1(src_exp_1),
         .src_sign_1(src_sign_1),
        .src_man_2(src_man_2),
         .src_exp_2(src_exp_2),
         .src_sign_2(src_sign_2),
        .src_man_3(src_man_3),
         .src_exp_3(src_exp_3),
         .src_sign_3(src_sign_3),
        .src_man_4(src_man_4),
         .src_exp_4(src_exp_4),
         .src_sign_4(src_sign_4),
        .src_man_5(src_man_5),
         .src_exp_5(src_exp_5),
         .src_sign_5(src_sign_5),
        .src_man_6(src_man_6),
         .src_exp_6(src_exp_6),
         .src_sign_6(src_sign_6),
        .src_man_7(src_man_7),
         .src_exp_7(src_exp_7),
         .src_sign_7(src_sign_7),
         .mul_coeff_man_0(mul_coeff_man_0),
         .mul_coeff_exp_0(mul_coeff_exp_0),
         .mul_coeff_sign_0(mul_coeff_sign_0),
        .mul_coeff_man_1(mul_coeff_man_1),
         .mul_coeff_exp_1(mul_coeff_exp_1),
         .mul_coeff_sign_1(mul_coeff_sign_1),
        .mul_coeff_man_2(mul_coeff_man_2),
         .mul_coeff_exp_2(mul_coeff_exp_2),
         .mul_coeff_sign_2(mul_coeff_sign_2),
        .mul_coeff_man_3(mul_coeff_man_3),
         .mul_coeff_exp_3(mul_coeff_exp_3),
         .mul_coeff_sign_3(mul_coeff_sign_3),
        .mul_coeff_man_4(mul_coeff_man_4),
         .mul_coeff_exp_4(mul_coeff_exp_4),
         .mul_coeff_sign_4(mul_coeff_sign_4),
        .mul_coeff_man_5(mul_coeff_man_5),
         .mul_coeff_exp_5(mul_coeff_exp_5),
         .mul_coeff_sign_5(mul_coeff_sign_5),
        .mul_coeff_man_6(mul_coeff_man_6),
         .mul_coeff_exp_6(mul_coeff_exp_6),
         .mul_coeff_sign_6(mul_coeff_sign_6),
        .mul_coeff_man_7(mul_coeff_man_7),
         .mul_coeff_exp_7(mul_coeff_exp_7),
         .mul_coeff_sign_7(mul_coeff_sign_7),
         .add_coeff_man_0(add_coeff_man_0),
         .add_coeff_exp_0(add_coeff_exp_0),
         .add_coeff_sign_0(add_coeff_sign_0),
        .add_coeff_man_1(add_coeff_man_1),
         .add_coeff_exp_1(add_coeff_exp_1),
         .add_coeff_sign_1(add_coeff_sign_1),
        .add_coeff_man_2(add_coeff_man_2),
         .add_coeff_exp_2(add_coeff_exp_2),
         .add_coeff_sign_2(add_coeff_sign_2),
        .add_coeff_man_3(add_coeff_man_3),
         .add_coeff_exp_3(add_coeff_exp_3),
         .add_coeff_sign_3(add_coeff_sign_3),
        .add_coeff_man_4(add_coeff_man_4),
         .add_coeff_exp_4(add_coeff_exp_4),
         .add_coeff_sign_4(add_coeff_sign_4),
        .add_coeff_man_5(add_coeff_man_5),
         .add_coeff_exp_5(add_coeff_exp_5),
         .add_coeff_sign_5(add_coeff_sign_5),
        .add_coeff_man_6(add_coeff_man_6),
         .add_coeff_exp_6(add_coeff_exp_6),
         .add_coeff_sign_6(add_coeff_sign_6),
        .add_coeff_man_7(add_coeff_man_7),
         .add_coeff_exp_7(add_coeff_exp_7),
         .add_coeff_sign_7(add_coeff_sign_7),
         .dst_valid(m_dst_valid),
         .dst_man_0(m_dst_man_0),
         .dst_exp_0(m_dst_exp_0),
         .dst_sign_0(m_dst_sign_0),
        .dst_man_1(m_dst_man_1),
         .dst_exp_1(m_dst_exp_1),
         .dst_sign_1(m_dst_sign_1),
        .dst_man_2(m_dst_man_2),
         .dst_exp_2(m_dst_exp_2),
         .dst_sign_2(m_dst_sign_2),
        .dst_man_3(m_dst_man_3),
         .dst_exp_3(m_dst_exp_3),
         .dst_sign_3(m_dst_sign_3),
        .dst_man_4(m_dst_man_4),
         .dst_exp_4(m_dst_exp_4),
         .dst_sign_4(m_dst_sign_4),
        .dst_man_5(m_dst_man_5),
         .dst_exp_5(m_dst_exp_5),
         .dst_sign_5(m_dst_sign_5),
        .dst_man_6(m_dst_man_6),
         .dst_exp_6(m_dst_exp_6),
         .dst_sign_6(m_dst_sign_6),
        .dst_man_7(m_dst_man_7),
         .dst_exp_7(m_dst_exp_7),
         .dst_sign_7(m_dst_sign_7)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_dst_valid)
     begin
      dst_valid <= m_dst_valid;
     end
    always @(m_dst_man_0)
     begin
      dst_man_0 <= m_dst_man_0;
     end
    always @(m_dst_exp_0)
     begin
      dst_exp_0 <= m_dst_exp_0;
     end
    always @(m_dst_sign_0)
     begin
      dst_sign_0 <= m_dst_sign_0;
     end
    always @(m_dst_man_1)
     begin
      dst_man_1 <= m_dst_man_1;
     end
    always @(m_dst_exp_1)
     begin
      dst_exp_1 <= m_dst_exp_1;
     end
    always @(m_dst_sign_1)
     begin
      dst_sign_1 <= m_dst_sign_1;
     end
    always @(m_dst_man_2)
     begin
      dst_man_2 <= m_dst_man_2;
     end
    always @(m_dst_exp_2)
     begin
      dst_exp_2 <= m_dst_exp_2;
     end
    always @(m_dst_sign_2)
     begin
      dst_sign_2 <= m_dst_sign_2;
     end
    always @(m_dst_man_3)
     begin
      dst_man_3 <= m_dst_man_3;
     end
    always @(m_dst_exp_3)
     begin
      dst_exp_3 <= m_dst_exp_3;
     end
    always @(m_dst_sign_3)
     begin
      dst_sign_3 <= m_dst_sign_3;
     end
    always @(m_dst_man_4)
     begin
      dst_man_4 <= m_dst_man_4;
     end
    always @(m_dst_exp_4)
     begin
      dst_exp_4 <= m_dst_exp_4;
     end
    always @(m_dst_sign_4)
     begin
      dst_sign_4 <= m_dst_sign_4;
     end
    always @(m_dst_man_5)
     begin
      dst_man_5 <= m_dst_man_5;
     end
    always @(m_dst_exp_5)
     begin
      dst_exp_5 <= m_dst_exp_5;
     end
    always @(m_dst_sign_5)
     begin
      dst_sign_5 <= m_dst_sign_5;
     end
    always @(m_dst_man_6)
     begin
      dst_man_6 <= m_dst_man_6;
     end
    always @(m_dst_exp_6)
     begin
      dst_exp_6 <= m_dst_exp_6;
     end
    always @(m_dst_sign_6)
     begin
      dst_sign_6 <= m_dst_sign_6;
     end
    always @(m_dst_man_7)
     begin
      dst_man_7 <= m_dst_man_7;
     end
    always @(m_dst_exp_7)
     begin
      dst_exp_7 <= m_dst_exp_7;
     end
    always @(m_dst_sign_7)
     begin
      dst_sign_7 <= m_dst_sign_7;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module bn_float32_type_wrapper(
      clk,
       rstn,
       enable,
       src_valid,
       src_man_0,
       src_exp_0,
       src_sign_0,
      src_man_1,
       src_exp_1,
       src_sign_1,
      src_man_2,
       src_exp_2,
       src_sign_2,
      src_man_3,
       src_exp_3,
       src_sign_3,
      src_man_4,
       src_exp_4,
       src_sign_4,
      src_man_5,
       src_exp_5,
       src_sign_5,
      src_man_6,
       src_exp_6,
       src_sign_6,
      src_man_7,
       src_exp_7,
       src_sign_7,
       mul_coeff_man_0,
       mul_coeff_exp_0,
       mul_coeff_sign_0,
      mul_coeff_man_1,
       mul_coeff_exp_1,
       mul_coeff_sign_1,
      mul_coeff_man_2,
       mul_coeff_exp_2,
       mul_coeff_sign_2,
      mul_coeff_man_3,
       mul_coeff_exp_3,
       mul_coeff_sign_3,
      mul_coeff_man_4,
       mul_coeff_exp_4,
       mul_coeff_sign_4,
      mul_coeff_man_5,
       mul_coeff_exp_5,
       mul_coeff_sign_5,
      mul_coeff_man_6,
       mul_coeff_exp_6,
       mul_coeff_sign_6,
      mul_coeff_man_7,
       mul_coeff_exp_7,
       mul_coeff_sign_7,
       add_coeff_man_0,
       add_coeff_exp_0,
       add_coeff_sign_0,
      add_coeff_man_1,
       add_coeff_exp_1,
       add_coeff_sign_1,
      add_coeff_man_2,
       add_coeff_exp_2,
       add_coeff_sign_2,
      add_coeff_man_3,
       add_coeff_exp_3,
       add_coeff_sign_3,
      add_coeff_man_4,
       add_coeff_exp_4,
       add_coeff_sign_4,
      add_coeff_man_5,
       add_coeff_exp_5,
       add_coeff_sign_5,
      add_coeff_man_6,
       add_coeff_exp_6,
       add_coeff_sign_6,
      add_coeff_man_7,
       add_coeff_exp_7,
       add_coeff_sign_7,
       dst_valid,
       dst_man_0,
       dst_exp_0,
       dst_sign_0,
      dst_man_1,
       dst_exp_1,
       dst_sign_1,
      dst_man_2,
       dst_exp_2,
       dst_sign_2,
      dst_man_3,
       dst_exp_3,
       dst_sign_3,
      dst_man_4,
       dst_exp_4,
       dst_sign_4,
      dst_man_5,
       dst_exp_5,
       dst_sign_5,
      dst_man_6,
       dst_exp_6,
       dst_sign_6,
      dst_man_7,
       dst_exp_7,
       dst_sign_7

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input src_valid;
	input [22:0] src_man_0;
	input [7:0] src_exp_0;
	input src_sign_0;
	input [22:0] src_man_1;
	input [7:0] src_exp_1;
	input src_sign_1;
	input [22:0] src_man_2;
	input [7:0] src_exp_2;
	input src_sign_2;
	input [22:0] src_man_3;
	input [7:0] src_exp_3;
	input src_sign_3;
	input [22:0] src_man_4;
	input [7:0] src_exp_4;
	input src_sign_4;
	input [22:0] src_man_5;
	input [7:0] src_exp_5;
	input src_sign_5;
	input [22:0] src_man_6;
	input [7:0] src_exp_6;
	input src_sign_6;
	input [22:0] src_man_7;
	input [7:0] src_exp_7;
	input src_sign_7;
	input [22:0] mul_coeff_man_0;
	input [7:0] mul_coeff_exp_0;
	input mul_coeff_sign_0;
	input [22:0] mul_coeff_man_1;
	input [7:0] mul_coeff_exp_1;
	input mul_coeff_sign_1;
	input [22:0] mul_coeff_man_2;
	input [7:0] mul_coeff_exp_2;
	input mul_coeff_sign_2;
	input [22:0] mul_coeff_man_3;
	input [7:0] mul_coeff_exp_3;
	input mul_coeff_sign_3;
	input [22:0] mul_coeff_man_4;
	input [7:0] mul_coeff_exp_4;
	input mul_coeff_sign_4;
	input [22:0] mul_coeff_man_5;
	input [7:0] mul_coeff_exp_5;
	input mul_coeff_sign_5;
	input [22:0] mul_coeff_man_6;
	input [7:0] mul_coeff_exp_6;
	input mul_coeff_sign_6;
	input [22:0] mul_coeff_man_7;
	input [7:0] mul_coeff_exp_7;
	input mul_coeff_sign_7;
	input [22:0] add_coeff_man_0;
	input [7:0] add_coeff_exp_0;
	input add_coeff_sign_0;
	input [22:0] add_coeff_man_1;
	input [7:0] add_coeff_exp_1;
	input add_coeff_sign_1;
	input [22:0] add_coeff_man_2;
	input [7:0] add_coeff_exp_2;
	input add_coeff_sign_2;
	input [22:0] add_coeff_man_3;
	input [7:0] add_coeff_exp_3;
	input add_coeff_sign_3;
	input [22:0] add_coeff_man_4;
	input [7:0] add_coeff_exp_4;
	input add_coeff_sign_4;
	input [22:0] add_coeff_man_5;
	input [7:0] add_coeff_exp_5;
	input add_coeff_sign_5;
	input [22:0] add_coeff_man_6;
	input [7:0] add_coeff_exp_6;
	input add_coeff_sign_6;
	input [22:0] add_coeff_man_7;
	input [7:0] add_coeff_exp_7;
	input add_coeff_sign_7;
	output dst_valid;
	output [22:0] dst_man_0;
	output [7:0] dst_exp_0;
	output dst_sign_0;
	output [22:0] dst_man_1;
	output [7:0] dst_exp_1;
	output dst_sign_1;
	output [22:0] dst_man_2;
	output [7:0] dst_exp_2;
	output dst_sign_2;
	output [22:0] dst_man_3;
	output [7:0] dst_exp_3;
	output dst_sign_3;
	output [22:0] dst_man_4;
	output [7:0] dst_exp_4;
	output dst_sign_4;
	output [22:0] dst_man_5;
	output [7:0] dst_exp_5;
	output dst_sign_5;
	output [22:0] dst_man_6;
	output [7:0] dst_exp_6;
	output dst_sign_6;
	output [22:0] dst_man_7;
	output [7:0] dst_exp_7;
	output dst_sign_7;


endmodule
