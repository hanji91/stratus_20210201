`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 09:47:13 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Equal_16Ux12S_1U_4_2 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [11:0] in1;
output  out1;
wire  asc001;

assign asc001 = ({{9{in1[11]}}, in1}==in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubL5TQs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


