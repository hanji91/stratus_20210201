`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:41:17 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Mul2Add2i1u8u16_4_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [7:0] in1;
output [15:0] out1;
wire [15:0] asc001;
wire [8:0] asc002;

assign asc002 = 
	+(in1)
	+(9'B000000001);

assign asc001 = 
	+(in2 * asc002);

assign out1 = asc001;
endmodule

/* CADENCE  ubfyQws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


