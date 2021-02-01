`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:03:52 KST (+0900), Thursday 10 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_weight_addr_gen_EqSubu8u16u16_4_0 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3,
	in2;
input [7:0] in1;
output  out1;
wire  asc001;
wire [16:0] asc003;

assign asc003 = 
	+(in2)
	-(in1);

assign asc001 = ({{5{asc003[16]}}, asc003}==in3);

assign out1 = asc001;
endmodule

/* CADENCE  ubfwTQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


