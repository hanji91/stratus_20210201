`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:13:17 KST (+0900), Tuesday 19 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add4u32u32u32u32_4 (
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in4,
	in3,
	in2,
	in1;
output [31:0] out1;
wire [31:0] asc001;

wire [31:0] asc001_tmp_0;
wire [31:0] asc001_tmp_1;
assign asc001_tmp_1 = 
	+(in4)
	+(in3);
assign asc001_tmp_0 = asc001_tmp_1
	+(in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  uLn4Sws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


