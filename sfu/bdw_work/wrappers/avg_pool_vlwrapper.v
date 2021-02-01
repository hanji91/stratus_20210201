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
* Verilog Verification wrapper module for the avg_pool module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module avg_pool_vlwrapper(
      clk,
       rstn,
       enable,
       init,
       in_data_0,
      in_data_1,
      in_data_2,
      in_data_3,
      in_data_4,
      in_data_5,
      in_data_6,
      in_data_7,
      in_data_8,
      in_data_9,
      in_data_10,
      in_data_11,
      in_data_12,
      in_data_13,
      in_data_14,
      in_data_15,
      in_data_16,
      in_data_17,
      in_data_18,
      in_data_19,
      in_data_20,
      in_data_21,
      in_data_22,
      in_data_23,
      in_data_24,
      in_data_25,
      in_data_26,
      in_data_27,
      in_data_28,
      in_data_29,
      in_data_30,
      in_data_31,
       in_data_valid,
       out_data_0,
      out_data_1,
      out_data_2,
      out_data_3,
      out_data_4,
      out_data_5,
      out_data_6,
      out_data_7,
      out_data_8,
      out_data_9,
      out_data_10,
      out_data_11,
      out_data_12,
      out_data_13,
      out_data_14,
      out_data_15,
      out_data_16,
      out_data_17,
      out_data_18,
      out_data_19,
      out_data_20,
      out_data_21,
      out_data_22,
      out_data_23,
      out_data_24,
      out_data_25,
      out_data_26,
      out_data_27,
      out_data_28,
      out_data_29,
      out_data_30,
      out_data_31,
       out_data_valid

    );

	input clk;
	input rstn;
	input enable;
	input init;
	input [31:0] in_data_0;
	input [31:0] in_data_1;
	input [31:0] in_data_2;
	input [31:0] in_data_3;
	input [31:0] in_data_4;
	input [31:0] in_data_5;
	input [31:0] in_data_6;
	input [31:0] in_data_7;
	input [31:0] in_data_8;
	input [31:0] in_data_9;
	input [31:0] in_data_10;
	input [31:0] in_data_11;
	input [31:0] in_data_12;
	input [31:0] in_data_13;
	input [31:0] in_data_14;
	input [31:0] in_data_15;
	input [31:0] in_data_16;
	input [31:0] in_data_17;
	input [31:0] in_data_18;
	input [31:0] in_data_19;
	input [31:0] in_data_20;
	input [31:0] in_data_21;
	input [31:0] in_data_22;
	input [31:0] in_data_23;
	input [31:0] in_data_24;
	input [31:0] in_data_25;
	input [31:0] in_data_26;
	input [31:0] in_data_27;
	input [31:0] in_data_28;
	input [31:0] in_data_29;
	input [31:0] in_data_30;
	input [31:0] in_data_31;
	input in_data_valid;
	output [31:0] out_data_0;
	output [31:0] out_data_1;
	output [31:0] out_data_2;
	output [31:0] out_data_3;
	output [31:0] out_data_4;
	output [31:0] out_data_5;
	output [31:0] out_data_6;
	output [31:0] out_data_7;
	output [31:0] out_data_8;
	output [31:0] out_data_9;
	output [31:0] out_data_10;
	output [31:0] out_data_11;
	output [31:0] out_data_12;
	output [31:0] out_data_13;
	output [31:0] out_data_14;
	output [31:0] out_data_15;
	output [31:0] out_data_16;
	output [31:0] out_data_17;
	output [31:0] out_data_18;
	output [31:0] out_data_19;
	output [31:0] out_data_20;
	output [31:0] out_data_21;
	output [31:0] out_data_22;
	output [31:0] out_data_23;
	output [31:0] out_data_24;
	output [31:0] out_data_25;
	output [31:0] out_data_26;
	output [31:0] out_data_27;
	output [31:0] out_data_28;
	output [31:0] out_data_29;
	output [31:0] out_data_30;
	output [31:0] out_data_31;
	reg[31:0] out_data_0;
	wire [31:0] m_out_data_0;
	reg[31:0] out_data_1;
	wire [31:0] m_out_data_1;
	reg[31:0] out_data_2;
	wire [31:0] m_out_data_2;
	reg[31:0] out_data_3;
	wire [31:0] m_out_data_3;
	reg[31:0] out_data_4;
	wire [31:0] m_out_data_4;
	reg[31:0] out_data_5;
	wire [31:0] m_out_data_5;
	reg[31:0] out_data_6;
	wire [31:0] m_out_data_6;
	reg[31:0] out_data_7;
	wire [31:0] m_out_data_7;
	reg[31:0] out_data_8;
	wire [31:0] m_out_data_8;
	reg[31:0] out_data_9;
	wire [31:0] m_out_data_9;
	reg[31:0] out_data_10;
	wire [31:0] m_out_data_10;
	reg[31:0] out_data_11;
	wire [31:0] m_out_data_11;
	reg[31:0] out_data_12;
	wire [31:0] m_out_data_12;
	reg[31:0] out_data_13;
	wire [31:0] m_out_data_13;
	reg[31:0] out_data_14;
	wire [31:0] m_out_data_14;
	reg[31:0] out_data_15;
	wire [31:0] m_out_data_15;
	reg[31:0] out_data_16;
	wire [31:0] m_out_data_16;
	reg[31:0] out_data_17;
	wire [31:0] m_out_data_17;
	reg[31:0] out_data_18;
	wire [31:0] m_out_data_18;
	reg[31:0] out_data_19;
	wire [31:0] m_out_data_19;
	reg[31:0] out_data_20;
	wire [31:0] m_out_data_20;
	reg[31:0] out_data_21;
	wire [31:0] m_out_data_21;
	reg[31:0] out_data_22;
	wire [31:0] m_out_data_22;
	reg[31:0] out_data_23;
	wire [31:0] m_out_data_23;
	reg[31:0] out_data_24;
	wire [31:0] m_out_data_24;
	reg[31:0] out_data_25;
	wire [31:0] m_out_data_25;
	reg[31:0] out_data_26;
	wire [31:0] m_out_data_26;
	reg[31:0] out_data_27;
	wire [31:0] m_out_data_27;
	reg[31:0] out_data_28;
	wire [31:0] m_out_data_28;
	reg[31:0] out_data_29;
	wire [31:0] m_out_data_29;
	reg[31:0] out_data_30;
	wire [31:0] m_out_data_30;
	reg[31:0] out_data_31;
	wire [31:0] m_out_data_31;
	output out_data_valid;
	reg out_data_valid;
	wire m_out_data_valid;


    // Instantiate the Verilog module that instantiates the SystemC module
    avg_pool_type_wrapper avg_pool_sc(
        .clk(clk),
         .rstn(rstn),
         .enable(enable),
         .init(init),
         .in_data_0(in_data_0),
        .in_data_1(in_data_1),
        .in_data_2(in_data_2),
        .in_data_3(in_data_3),
        .in_data_4(in_data_4),
        .in_data_5(in_data_5),
        .in_data_6(in_data_6),
        .in_data_7(in_data_7),
        .in_data_8(in_data_8),
        .in_data_9(in_data_9),
        .in_data_10(in_data_10),
        .in_data_11(in_data_11),
        .in_data_12(in_data_12),
        .in_data_13(in_data_13),
        .in_data_14(in_data_14),
        .in_data_15(in_data_15),
        .in_data_16(in_data_16),
        .in_data_17(in_data_17),
        .in_data_18(in_data_18),
        .in_data_19(in_data_19),
        .in_data_20(in_data_20),
        .in_data_21(in_data_21),
        .in_data_22(in_data_22),
        .in_data_23(in_data_23),
        .in_data_24(in_data_24),
        .in_data_25(in_data_25),
        .in_data_26(in_data_26),
        .in_data_27(in_data_27),
        .in_data_28(in_data_28),
        .in_data_29(in_data_29),
        .in_data_30(in_data_30),
        .in_data_31(in_data_31),
         .in_data_valid(in_data_valid),
         .out_data_0(m_out_data_0),
        .out_data_1(m_out_data_1),
        .out_data_2(m_out_data_2),
        .out_data_3(m_out_data_3),
        .out_data_4(m_out_data_4),
        .out_data_5(m_out_data_5),
        .out_data_6(m_out_data_6),
        .out_data_7(m_out_data_7),
        .out_data_8(m_out_data_8),
        .out_data_9(m_out_data_9),
        .out_data_10(m_out_data_10),
        .out_data_11(m_out_data_11),
        .out_data_12(m_out_data_12),
        .out_data_13(m_out_data_13),
        .out_data_14(m_out_data_14),
        .out_data_15(m_out_data_15),
        .out_data_16(m_out_data_16),
        .out_data_17(m_out_data_17),
        .out_data_18(m_out_data_18),
        .out_data_19(m_out_data_19),
        .out_data_20(m_out_data_20),
        .out_data_21(m_out_data_21),
        .out_data_22(m_out_data_22),
        .out_data_23(m_out_data_23),
        .out_data_24(m_out_data_24),
        .out_data_25(m_out_data_25),
        .out_data_26(m_out_data_26),
        .out_data_27(m_out_data_27),
        .out_data_28(m_out_data_28),
        .out_data_29(m_out_data_29),
        .out_data_30(m_out_data_30),
        .out_data_31(m_out_data_31),
         .out_data_valid(m_out_data_valid)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_out_data_0)
     begin
      out_data_0 <= m_out_data_0;
     end
    always @(m_out_data_1)
     begin
      out_data_1 <= m_out_data_1;
     end
    always @(m_out_data_2)
     begin
      out_data_2 <= m_out_data_2;
     end
    always @(m_out_data_3)
     begin
      out_data_3 <= m_out_data_3;
     end
    always @(m_out_data_4)
     begin
      out_data_4 <= m_out_data_4;
     end
    always @(m_out_data_5)
     begin
      out_data_5 <= m_out_data_5;
     end
    always @(m_out_data_6)
     begin
      out_data_6 <= m_out_data_6;
     end
    always @(m_out_data_7)
     begin
      out_data_7 <= m_out_data_7;
     end
    always @(m_out_data_8)
     begin
      out_data_8 <= m_out_data_8;
     end
    always @(m_out_data_9)
     begin
      out_data_9 <= m_out_data_9;
     end
    always @(m_out_data_10)
     begin
      out_data_10 <= m_out_data_10;
     end
    always @(m_out_data_11)
     begin
      out_data_11 <= m_out_data_11;
     end
    always @(m_out_data_12)
     begin
      out_data_12 <= m_out_data_12;
     end
    always @(m_out_data_13)
     begin
      out_data_13 <= m_out_data_13;
     end
    always @(m_out_data_14)
     begin
      out_data_14 <= m_out_data_14;
     end
    always @(m_out_data_15)
     begin
      out_data_15 <= m_out_data_15;
     end
    always @(m_out_data_16)
     begin
      out_data_16 <= m_out_data_16;
     end
    always @(m_out_data_17)
     begin
      out_data_17 <= m_out_data_17;
     end
    always @(m_out_data_18)
     begin
      out_data_18 <= m_out_data_18;
     end
    always @(m_out_data_19)
     begin
      out_data_19 <= m_out_data_19;
     end
    always @(m_out_data_20)
     begin
      out_data_20 <= m_out_data_20;
     end
    always @(m_out_data_21)
     begin
      out_data_21 <= m_out_data_21;
     end
    always @(m_out_data_22)
     begin
      out_data_22 <= m_out_data_22;
     end
    always @(m_out_data_23)
     begin
      out_data_23 <= m_out_data_23;
     end
    always @(m_out_data_24)
     begin
      out_data_24 <= m_out_data_24;
     end
    always @(m_out_data_25)
     begin
      out_data_25 <= m_out_data_25;
     end
    always @(m_out_data_26)
     begin
      out_data_26 <= m_out_data_26;
     end
    always @(m_out_data_27)
     begin
      out_data_27 <= m_out_data_27;
     end
    always @(m_out_data_28)
     begin
      out_data_28 <= m_out_data_28;
     end
    always @(m_out_data_29)
     begin
      out_data_29 <= m_out_data_29;
     end
    always @(m_out_data_30)
     begin
      out_data_30 <= m_out_data_30;
     end
    always @(m_out_data_31)
     begin
      out_data_31 <= m_out_data_31;
     end
    always @(m_out_data_valid)
     begin
      out_data_valid <= m_out_data_valid;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module avg_pool_type_wrapper(
      clk,
       rstn,
       enable,
       init,
       in_data_0,
      in_data_1,
      in_data_2,
      in_data_3,
      in_data_4,
      in_data_5,
      in_data_6,
      in_data_7,
      in_data_8,
      in_data_9,
      in_data_10,
      in_data_11,
      in_data_12,
      in_data_13,
      in_data_14,
      in_data_15,
      in_data_16,
      in_data_17,
      in_data_18,
      in_data_19,
      in_data_20,
      in_data_21,
      in_data_22,
      in_data_23,
      in_data_24,
      in_data_25,
      in_data_26,
      in_data_27,
      in_data_28,
      in_data_29,
      in_data_30,
      in_data_31,
       in_data_valid,
       out_data_0,
      out_data_1,
      out_data_2,
      out_data_3,
      out_data_4,
      out_data_5,
      out_data_6,
      out_data_7,
      out_data_8,
      out_data_9,
      out_data_10,
      out_data_11,
      out_data_12,
      out_data_13,
      out_data_14,
      out_data_15,
      out_data_16,
      out_data_17,
      out_data_18,
      out_data_19,
      out_data_20,
      out_data_21,
      out_data_22,
      out_data_23,
      out_data_24,
      out_data_25,
      out_data_26,
      out_data_27,
      out_data_28,
      out_data_29,
      out_data_30,
      out_data_31,
       out_data_valid

    ) (* integer foreign = "SystemC";
    *);

	input clk;
	input rstn;
	input enable;
	input init;
	input [31:0] in_data_0;
	input [31:0] in_data_1;
	input [31:0] in_data_2;
	input [31:0] in_data_3;
	input [31:0] in_data_4;
	input [31:0] in_data_5;
	input [31:0] in_data_6;
	input [31:0] in_data_7;
	input [31:0] in_data_8;
	input [31:0] in_data_9;
	input [31:0] in_data_10;
	input [31:0] in_data_11;
	input [31:0] in_data_12;
	input [31:0] in_data_13;
	input [31:0] in_data_14;
	input [31:0] in_data_15;
	input [31:0] in_data_16;
	input [31:0] in_data_17;
	input [31:0] in_data_18;
	input [31:0] in_data_19;
	input [31:0] in_data_20;
	input [31:0] in_data_21;
	input [31:0] in_data_22;
	input [31:0] in_data_23;
	input [31:0] in_data_24;
	input [31:0] in_data_25;
	input [31:0] in_data_26;
	input [31:0] in_data_27;
	input [31:0] in_data_28;
	input [31:0] in_data_29;
	input [31:0] in_data_30;
	input [31:0] in_data_31;
	input in_data_valid;
	output [31:0] out_data_0;
	output [31:0] out_data_1;
	output [31:0] out_data_2;
	output [31:0] out_data_3;
	output [31:0] out_data_4;
	output [31:0] out_data_5;
	output [31:0] out_data_6;
	output [31:0] out_data_7;
	output [31:0] out_data_8;
	output [31:0] out_data_9;
	output [31:0] out_data_10;
	output [31:0] out_data_11;
	output [31:0] out_data_12;
	output [31:0] out_data_13;
	output [31:0] out_data_14;
	output [31:0] out_data_15;
	output [31:0] out_data_16;
	output [31:0] out_data_17;
	output [31:0] out_data_18;
	output [31:0] out_data_19;
	output [31:0] out_data_20;
	output [31:0] out_data_21;
	output [31:0] out_data_22;
	output [31:0] out_data_23;
	output [31:0] out_data_24;
	output [31:0] out_data_25;
	output [31:0] out_data_26;
	output [31:0] out_data_27;
	output [31:0] out_data_28;
	output [31:0] out_data_29;
	output [31:0] out_data_30;
	output [31:0] out_data_31;
	output out_data_valid;


endmodule
