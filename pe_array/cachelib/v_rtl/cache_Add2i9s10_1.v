`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:54:28 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Add2i9s10_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in1;
output [10:0] out1;
wire [10:0] asc001;

assign asc001 = 
	+({in1[9], in1})
	+(11'B00000001001);

assign out1 = asc001;
endmodule

/* CADENCE  urn2SAw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


