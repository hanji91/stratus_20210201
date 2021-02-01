`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:50:41 KST (+0900), Thursday 21 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_Sub_16Ux1U_17S_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input  in1;
output [16:0] out1;
wire [16:0] asc001;

assign asc001 = 
	+(in2)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubH5Sg0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


