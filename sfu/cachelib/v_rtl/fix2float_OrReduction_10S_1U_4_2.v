`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:43:12 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_OrReduction_10S_1U_4_2 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in1;
output  out1;
wire  asc001;

assign asc001 = 
	(|in1);

assign out1 = asc001;
endmodule

/* CADENCE  urbzQgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


