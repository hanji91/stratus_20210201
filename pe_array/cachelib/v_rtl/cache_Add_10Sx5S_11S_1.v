`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:54:22 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Add_10Sx5S_11S_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in2;
input [4:0] in1;
output [10:0] out1;
wire [10:0] asc001;

assign asc001 = 
	+({in2[9], in2})
	+({{6{in1[4]}}, in1});

assign out1 = asc001;
endmodule

/* CADENCE  ubL1Tg8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


