`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:23:13 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_Add_8Sx8U_10S_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2,
	in1;
output [9:0] out1;
wire [9:0] asc001;

assign asc001 = 
	+({{2{in2[7]}}, in2})
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  urj0Qgw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


