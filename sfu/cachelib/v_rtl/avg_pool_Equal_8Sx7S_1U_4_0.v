`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:54:57 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module avg_pool_Equal_8Sx7S_1U_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input [6:0] in1;
output  out1;
wire  asc001;

assign asc001 = ({{6{in1[6]}}, in1}=={{5{in2[7]}}, in2});

assign out1 = asc001;
endmodule

/* CADENCE  ubD4SAE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


