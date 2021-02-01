`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:24:45 KST (+0900), Thursday 17 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Eqi5u8_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output  out1;
wire  asc001;

assign asc001 = (13'B0000000000101==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urX1Qws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


