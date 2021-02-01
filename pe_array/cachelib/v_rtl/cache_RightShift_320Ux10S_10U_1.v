`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:54:08 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_RightShift_320Ux10S_10U_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [319:0] in2;
input [9:0] in1;
output [9:0] out1;
wire [9:0] asc001;

assign asc001 = in2 >> in1;

assign out1 = asc001;
endmodule

/* CADENCE  ubD5TAs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


