`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 23:28:32 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add3Mul3u16u16u16Mul2u16u16u16_4_5 (
	in6,
	in5,
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in6,
	in5,
	in4,
	in3,
	in2,
	in1;
output [31:0] out1;
wire [31:0] asc001,
	asc002;

assign asc002 = 
	+(in2 * in3);

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
assign asc001_tmp_1 = 
	+(in6);
assign asc001_tmp_0 = asc001_tmp_1
	+(in4 * in5);
assign asc001 = asc001_tmp_0
	+(asc002 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  v7T4Sw8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


