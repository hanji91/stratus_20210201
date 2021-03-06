`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:53:18 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Mul_16Ux4U_20U_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [3:0] in1;
output [19:0] out1;
wire [19:0] asc001;

assign asc001 = 
	+(in2 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubD3Sgw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


