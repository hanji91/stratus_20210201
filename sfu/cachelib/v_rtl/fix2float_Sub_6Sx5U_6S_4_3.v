`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:47:43 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fix2float_Sub_6Sx5U_6S_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [5:0] in2;
input [4:0] in1;
output [5:0] out1;
wire [5:0] asc001;

assign asc001 = 
	+(in2)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  urn0Tgw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


