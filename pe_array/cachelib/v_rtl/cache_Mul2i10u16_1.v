`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:25:43 KST (+0900), Thursday 17 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Mul2i10u16_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output [19:0] out1;
wire [19:0] asc001;

assign asc001 = 
	+(in1 * 20'B00000000000000001010);

assign out1 = asc001;
endmodule

/* CADENCE  urnxTw8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


