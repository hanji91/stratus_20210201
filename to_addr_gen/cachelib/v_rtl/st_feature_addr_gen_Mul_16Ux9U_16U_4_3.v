`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:23:21 KST (+0900), Monday 18 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Mul_16Ux9U_16U_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [8:0] in1;
output [15:0] out1;
wire [15:0] asc001;

assign asc001 = 
	+(in2 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubLzQg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


