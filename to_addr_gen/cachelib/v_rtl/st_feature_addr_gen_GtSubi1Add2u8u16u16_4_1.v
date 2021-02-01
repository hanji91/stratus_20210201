`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:41:13 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_GtSubi1Add2u8u16u16_4_1 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3,
	in2;
input [7:0] in1;
output  out1;
wire  asc001;
wire [18:0] asc002;
wire [17:0] asc003;

wire [17:0] asc003_tmp_0;
assign asc003_tmp_0 = 
	+(in2)
	+(in1);
assign asc003 = asc003_tmp_0
	-(18'B000000000000000001);

assign asc002 = {asc003[17], asc003};

assign asc001 = (in3>asc002);

assign out1 = asc001;
endmodule

/* CADENCE  v7TzQwg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


