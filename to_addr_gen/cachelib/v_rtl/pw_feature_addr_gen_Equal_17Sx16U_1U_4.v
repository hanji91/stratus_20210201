`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:50:42 KST (+0900), Thursday 21 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_Equal_17Sx16U_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in2;
input [15:0] in1;
output  out1;
wire  asc001;

assign asc001 = (in1=={{5{in2[16]}}, in2});

assign out1 = asc001;
endmodule

/* CADENCE  ubL5Qg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


