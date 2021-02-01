`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:03:50 KST (+0900), Thursday 10 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_weight_addr_gen_Add3u32Mul2u16u16u16_4 (
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in4,
	in3,
	in2;
input [31:0] in1;
output [31:0] out1;
wire [31:0] asc001;

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
assign asc001_tmp_1 = 
	+(in4);
assign asc001_tmp_0 = asc001_tmp_1
	+(in2 * in3);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  uLf5TQo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


