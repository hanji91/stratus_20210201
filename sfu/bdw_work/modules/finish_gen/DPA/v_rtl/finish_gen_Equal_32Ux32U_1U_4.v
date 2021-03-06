`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:27:18 KST (+0900), Tuesday 12 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module finish_gen_Equal_32Ux32U_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in2,
	in1;
output  out1;
wire  asc001;

assign asc001 = (in1==in2);

assign out1 = asc001;
endmodule

/* CADENCE  urnwTws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


