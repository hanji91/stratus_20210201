`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:47:42 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fix2float_NotBit_32S_32S_4_3 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = 
	((~in1));

assign out1 = asc001;
endmodule

/* CADENCE  urf5Tww= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

