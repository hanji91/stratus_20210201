`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:48:46 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Add2i9s21_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [20:0] in1;
output [21:0] out1;
wire [21:0] asc001;

assign asc001 = 
	+({in1[20], in1})
	+(22'B0000000000000000001001);

assign out1 = asc001;
endmodule

/* CADENCE  ubDxTAw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


