`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:18:49 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Equal_17Sx17S_1U_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in2,
	in1;
output  out1;
wire  asc001;

assign asc001 = ({{5{in1[16]}}, in1}=={{5{in2[16]}}, in2});

assign out1 = asc001;
endmodule

/* CADENCE  ubP3TQs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


