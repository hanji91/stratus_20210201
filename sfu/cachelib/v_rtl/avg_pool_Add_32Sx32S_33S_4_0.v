`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:55:02 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module avg_pool_Add_32Sx32S_33S_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in2,
	in1;
output [32:0] out1;
wire [32:0] asc001;

assign asc001 = 
	+({in2[31], in2})
	+({in1[31], in1});

assign out1 = asc001;
endmodule

/* CADENCE  ubH4Sgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


