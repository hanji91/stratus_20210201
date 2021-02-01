`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:26:13 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_AnyAdd2u8s8_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2,
	in1;
output  out1;
wire  asc001;
wire [9:0] asc002;

assign asc002 = 
	+({{2{in2[7]}}, in2})
	+(in1);

assign asc001 = 
	(|asc002);

assign out1 = asc001;
endmodule

/* CADENCE  ubXwSQ4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


