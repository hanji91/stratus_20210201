`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:30:54 KST (+0900), Monday 21 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module avg_pool_LtnLLs33_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [32:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((38'B10000000000000000000000000000000000000 ^ 38'B11111110000000000000000000000000000000)>(38'B10000000000000000000000000000000000000
    ^ {{5{in1[32]}}, in1}));

assign out1 = asc001;
endmodule

/* CADENCE  uLL5TgE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


