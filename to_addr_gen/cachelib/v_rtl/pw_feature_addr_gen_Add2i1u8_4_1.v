`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:50:53 KST (+0900), Thursday 21 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module pw_feature_addr_gen_Add2i1u8_4_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output [7:0] out1;
wire [7:0] asc001;

assign asc001 = 
	+(in1)
	+(8'B00000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubD3TQw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


