`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:24:08 KST (+0900), Thursday 17 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_OrReduction_8U_1U_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output  out1;
wire  asc001;

assign asc001 = 
	(|in1);

assign out1 = asc001;
endmodule

/* CADENCE  urXxSwE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


