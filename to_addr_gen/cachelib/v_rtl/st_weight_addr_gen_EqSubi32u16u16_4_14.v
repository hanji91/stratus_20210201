`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:35:44 KST (+0900), Wednesday 20 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_EqSubi32u16u16_4_14 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2,
	in1;
output  out1;
wire  asc001;
wire [16:0] asc003;

assign asc003 = 
	+(in1)
	-(17'B00000000000100000);

assign asc001 = ({{5{asc003[16]}}, asc003}==in2);

assign out1 = asc001;
endmodule

/* CADENCE  uLDwQgE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


