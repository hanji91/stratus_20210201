`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:53:46 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Mul_5Ux4U_9U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [4:0] in2;
input [3:0] in1;
output [8:0] out1;
wire [8:0] asc001;

assign asc001 = 
	+(in2 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  urn5Sg0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


