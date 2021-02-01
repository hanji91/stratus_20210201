`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 09:47:51 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_EqSubi1u11u16_4_2 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [10:0] in1;
output  out1;
wire  asc001;
wire [11:0] asc003;

assign asc003 = 
	+(in1)
	-(12'B000000000001);

assign asc001 = ({{9{asc003[11]}}, asc003}==in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubn0TA8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

