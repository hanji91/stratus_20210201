`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:05:58 KST (+0900), Thursday 10 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_LessThan_8Ux8U_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2,
	in1;
output  out1;
wire  asc001;

assign asc001 = (in1>in2);

assign out1 = asc001;
endmodule

/* CADENCE  urnySQk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

