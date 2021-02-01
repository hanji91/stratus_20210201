`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:49:56 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_EqSubi1u16u16_4_2 (
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
	-(17'B00000000000000001);

assign asc001 = ({{5{asc003[16]}}, asc003}==in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubb2SAA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


