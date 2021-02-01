`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:19:23 KST (+0900), Wednesday 20 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Add2i1u8_4_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output [8:0] out1;
wire [8:0] asc001;

assign asc001 = 
	+(in1)
	+(9'B000000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubDyQg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


