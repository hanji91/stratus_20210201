`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:40:58 KST (+0900), Thursday 07 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float2fix_Gti31s9_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [8:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((14'B10000000000000 ^ {{5{in1[8]}}, in1})>(14'B10000000000000 ^ 14'B00000000011111));

assign out1 = asc001;
endmodule

/* CADENCE  ubP2Qwg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


