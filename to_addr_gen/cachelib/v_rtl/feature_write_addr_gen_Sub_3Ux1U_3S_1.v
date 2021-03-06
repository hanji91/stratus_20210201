`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:02:44 KST (+0900), Tuesday 15 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module feature_write_addr_gen_Sub_3Ux1U_3S_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [2:0] in2;
input  in1;
output [2:0] out1;
wire [2:0] asc001;

assign asc001 = 
	+(in2)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubD2TQE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


