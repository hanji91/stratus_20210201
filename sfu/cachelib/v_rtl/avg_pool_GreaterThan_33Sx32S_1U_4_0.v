`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:55:00 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module avg_pool_GreaterThan_33Sx32S_1U_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [32:0] in2;
input [31:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((38'B10000000000000000000000000000000000000 ^ {{5{in2[32]}}, in2})>(38'B10000000000000000000000000000000000000
    ^ {{6{in1[31]}}, in1}));

assign out1 = asc001;
endmodule

/* CADENCE  uLX3TQg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


