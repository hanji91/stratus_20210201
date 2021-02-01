`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:41:40 KST (+0900), Tuesday 19 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add3u8u8Subu16u16_1_0 (
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in4,
	in3;
input [7:0] in2,
	in1;
output [15:0] out1;
wire [15:0] asc001;

wire [15:0] asc001_tmp_0;
wire [15:0] asc001_tmp_1;
assign asc001_tmp_1 = 
	+(in4)
	-(in3);
assign asc001_tmp_0 = asc001_tmp_1
	+(in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  v7D2TAw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


