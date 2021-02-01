`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:41:01 KST (+0900), Thursday 07 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float2fix_Subi127u8_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output [7:0] out1;
wire [7:0] asc001;

assign asc001 = 
	+(in1)
	-(8'B01111111);

assign out1 = asc001;
endmodule

/* CADENCE  urn1Tgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


