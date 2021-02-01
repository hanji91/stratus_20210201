`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 23:51:16 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add4Mul3u16u16u16Mul3u16u16u16Mul2u16u16u16_4_7 (
	in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2,
	in1;
output [31:0] out1;
wire [31:0] asc001,
	asc002,
	asc003;

assign asc002 = 
	+(in5 * in6);

assign asc003 = 
	+(in2 * in3);

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
wire [31:0] asc001_tmp_2;
assign asc001_tmp_2 = 
	+(in9);
assign asc001_tmp_1 = asc001_tmp_2
	+(in7 * in8);
assign asc001_tmp_0 = asc001_tmp_1
	+(asc002 * in4);
assign asc001 = asc001_tmp_0
	+(asc003 * in1);

assign out1 = asc001;
endmodule

/* CADENCE  vbXwSwE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


