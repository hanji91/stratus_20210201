`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:26:14 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_Subu5i31_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [4:0] in1;
output [5:0] out1;
wire [5:0] asc001;

assign asc001 = 
	+(6'B011111)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  urbwQwE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


