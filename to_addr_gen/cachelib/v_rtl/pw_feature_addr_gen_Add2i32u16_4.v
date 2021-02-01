`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:10:40 KST (+0900), Thursday 10 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_Add2i32u16_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output [15:0] out1;
wire [15:0] asc001;

assign asc001 = 
	+(in1)
	+(16'B0000000000100000);

assign out1 = asc001;
endmodule

/* CADENCE  ubH2Qgk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


