`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:30:40 KST (+0900), Monday 21 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module avg_pool_LessThan_33Sx32S_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [32:0] in2;
input [31:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((38'B10000000000000000000000000000000000000 ^ {{6{in1[31]}}, in1})>(38'B10000000000000000000000000000000000000
    ^ {{5{in2[32]}}, in2}));

assign out1 = asc001;
endmodule

/* CADENCE  uLTzQwk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

