`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 00:28:28 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Mul3u16u16u16_4_10 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3,
	in2,
	in1;
output [31:0] out1;
wire [31:0] asc001,
	asc002;

assign asc002 = 
	+(in2 * in3);

assign asc001 = 
	+(asc002 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubXwTg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


