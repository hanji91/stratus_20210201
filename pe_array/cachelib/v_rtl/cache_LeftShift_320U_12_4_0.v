`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:48:44 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_LeftShift_320U_12_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [21:0] in1;
output [319:0] out1;
wire [319:0] asc001;

assign asc001 = 320'B11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110
    << in1;

assign out1 = asc001;
endmodule

/* CADENCE  vrj5TAo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


