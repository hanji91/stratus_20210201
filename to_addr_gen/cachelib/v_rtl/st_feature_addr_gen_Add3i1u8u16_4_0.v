`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:21:08 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Add3i1u8u16_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [7:0] in1;
output [15:0] out1;
wire [15:0] asc001;

wire [15:0] asc001_tmp_0;
assign asc001_tmp_0 = 
	+(in2)
	+(in1);
assign asc001 = asc001_tmp_0
	+(16'B0000000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  uLH4TQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


