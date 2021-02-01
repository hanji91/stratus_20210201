`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:25:05 KST (+0900), Thursday 17 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_RightShift_320Ux21S_10U_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [319:0] in2;
input [20:0] in1;
output [9:0] out1;
wire [9:0] asc001;

assign asc001 = in2 >> {|in1[20:9], in1[8:0]};

assign out1 = asc001;
endmodule

/* CADENCE  ubP2TA8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

