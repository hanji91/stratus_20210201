`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:35:46 KST (+0900), Thursday 21 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_weight_addr_gen_Mul_16Ux16U_32U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2,
	in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = 
	+(in1 * in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubDxTwk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


