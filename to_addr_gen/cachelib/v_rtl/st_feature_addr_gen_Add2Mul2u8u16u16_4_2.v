`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 09:47:51 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Add2Mul2u8u16u16_4_2 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3,
	in2;
input [7:0] in1;
output [15:0] out1;
wire [15:0] asc001;

wire [15:0] asc001_tmp_0;
assign asc001_tmp_0 = 
	+(in3);
assign asc001 = asc001_tmp_0
	+(in2 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  uLHwTAg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


