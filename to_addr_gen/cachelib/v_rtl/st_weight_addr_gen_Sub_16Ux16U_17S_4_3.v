`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:53:58 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Sub_16Ux16U_17S_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2,
	in1;
output [16:0] out1;
wire [16:0] asc001;

assign asc001 = 
	+(in2)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubDyQw8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


