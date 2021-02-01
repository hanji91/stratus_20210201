`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:18:02 KST (+0900), Wednesday 02 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module mac_Mul_10Sx8S_18S_4_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in2;
input [7:0] in1;
output [17:0] out1;
wire [17:0] asc001;

assign asc001 = 
	+({{8{in2[9]}}, in2} * {{10{in1[7]}}, in1});

assign out1 = asc001;
endmodule

/* CADENCE  ubP1SAg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


