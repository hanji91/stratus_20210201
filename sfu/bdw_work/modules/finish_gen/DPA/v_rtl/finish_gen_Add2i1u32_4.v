`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:27:21 KST (+0900), Tuesday 12 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module finish_gen_Add2i1u32_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = 
	+(in1)
	+(32'B00000000000000000000000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubLySQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


