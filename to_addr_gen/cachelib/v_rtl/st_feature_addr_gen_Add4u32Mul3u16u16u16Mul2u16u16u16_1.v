`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:19:30 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Add4u32Mul3u16u16u16Mul2u16u16u16_1 (
	in7,
	in6,
	in5,
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in7,
	in6,
	in5,
	in4,
	in3,
	in2;
input [31:0] in1;
output [31:0] out1;
wire [31:0] asc001,
	asc002;

assign asc002 = 
	+(in3 * in4);

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
wire [31:0] asc001_tmp_2;
assign asc001_tmp_2 = 
	+(in7);
assign asc001_tmp_1 = asc001_tmp_2
	+(in5 * in6);
assign asc001_tmp_0 = asc001_tmp_1
	+(asc002 * in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  vrj3SQo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


