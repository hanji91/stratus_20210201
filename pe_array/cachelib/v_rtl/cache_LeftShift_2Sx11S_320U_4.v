`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:53:45 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_LeftShift_2Sx11S_320U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [1:0] in2;
input [10:0] in1;
output [319:0] out1;
wire [319:0] asc001;

assign asc001 = {{318{in2[1]}}, in2} << in1;

assign out1 = asc001;
endmodule

/* CADENCE  ubH3SQg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


