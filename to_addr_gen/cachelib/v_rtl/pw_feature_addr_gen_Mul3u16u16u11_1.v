`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:12:23 KST (+0900), Thursday 10 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_Mul3u16u16u11_1 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [10:0] in3;
input [15:0] in2,
	in1;
output [31:0] out1;
wire [31:0] asc001;
wire [26:0] asc002;

assign asc002 = 
	+(in2 * in3);

assign asc001 = 
	+(asc002 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubn2SAA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


