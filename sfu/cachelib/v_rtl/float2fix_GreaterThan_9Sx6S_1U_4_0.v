`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:00:58 KST (+0900), Thursday 07 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float2fix_GreaterThan_9Sx6S_1U_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [8:0] in2;
input [5:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((14'B10000000000000 ^ {{5{in2[8]}}, in2})>(14'B10000000000000 ^ {{8{in1[5]}}, in1}));

assign out1 = asc001;
endmodule

/* CADENCE  ubn3TgA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


