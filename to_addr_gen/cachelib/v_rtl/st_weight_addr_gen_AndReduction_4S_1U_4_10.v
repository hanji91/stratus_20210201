`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 00:26:05 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_AndReduction_4S_1U_4_10 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [3:0] in1;
output  out1;
wire  asc001;

assign asc001 = 
	(&in1);

assign out1 = asc001;
endmodule

/* CADENCE  urfyTQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


