`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:52:17 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_RightShift_320Ux21S_10U_0 (
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

/* CADENCE  ubP4Qg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


