`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 00:27:25 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add5u32Mul3u16u16u16Mul3u16u16u16Mul2u16u16u16_4_10 (
	in10,
	in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in10,
	in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2;
input [31:0] in1;
output [31:0] out1;
wire [31:0] asc001,
	asc002,
	asc003;

assign asc002 = 
	+(in6 * in7);

assign asc003 = 
	+(in3 * in4);

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
wire [31:0] asc001_tmp_2;
wire [31:0] asc001_tmp_3;
assign asc001_tmp_3 = 
	+(in10);
assign asc001_tmp_2 = asc001_tmp_3
	+(in8 * in9);
assign asc001_tmp_1 = asc001_tmp_2
	+(asc002 * in5);
assign asc001_tmp_0 = asc001_tmp_1
	+(asc003 * in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  vLXzQgE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


