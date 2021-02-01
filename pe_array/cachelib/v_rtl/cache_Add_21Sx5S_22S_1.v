`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:25:25 KST (+0900), Thursday 17 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Add_21Sx5S_22S_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [20:0] in2;
input [4:0] in1;
output [21:0] out1;
wire [21:0] asc001;

assign asc001 = 
	+({in2[20], in2})
	+({{17{in1[4]}}, in1});

assign out1 = asc001;
endmodule

/* CADENCE  ubP1TQw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


