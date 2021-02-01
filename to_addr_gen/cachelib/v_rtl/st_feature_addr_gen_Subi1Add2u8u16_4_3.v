`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:23:42 KST (+0900), Monday 18 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Subi1Add2u8u16_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input [7:0] in1;
output [17:0] out1;
wire [17:0] asc001;

wire [17:0] asc001_tmp_0;
assign asc001_tmp_0 = 
	+(in2)
	+(in1);
assign asc001 = asc001_tmp_0
	-(18'B000000000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  uLLyTAg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


