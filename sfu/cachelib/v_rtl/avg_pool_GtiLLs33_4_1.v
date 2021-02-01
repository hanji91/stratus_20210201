`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:58:39 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module avg_pool_GtiLLs33_4_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [32:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((38'B10000000000000000000000000000000000000 ^ {{5{in1[32]}}, in1})>(38'B10000000000000000000000000000000000000
    ^ 38'B00000001111111111111111111111111111111));

assign out1 = asc001;
endmodule

/* CADENCE  uLL2Qgs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


