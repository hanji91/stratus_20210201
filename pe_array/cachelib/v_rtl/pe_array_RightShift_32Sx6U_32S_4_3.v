`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:49:40 KST (+0900), Wednesday 02 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pe_array_RightShift_32Sx6U_32S_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in2;
input [5:0] in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = {{63{in2[31]}}, in2} >> in1;

assign out1 = asc001;
endmodule

/* CADENCE  ubTxSQ4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


