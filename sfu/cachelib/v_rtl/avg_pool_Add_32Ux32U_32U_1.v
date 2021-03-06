`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:30:49 KST (+0900), Monday 21 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module avg_pool_Add_32Ux32U_32U_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in2,
	in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = 
	+(in2)
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  urjzSQ4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


