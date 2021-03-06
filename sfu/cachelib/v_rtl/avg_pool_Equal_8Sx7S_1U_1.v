`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:30:44 KST (+0900), Monday 21 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module avg_pool_Equal_8Sx7S_1U_1 (
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

/* CADENCE  ubD5Qwo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


