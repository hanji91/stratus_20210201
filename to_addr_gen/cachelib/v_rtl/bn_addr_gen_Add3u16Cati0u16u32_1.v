`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:04:25 KST (+0900), Monday 14 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module bn_addr_gen_Add3u16Cati0u16u32_1 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in3;
input [15:0] in2,
	in1;
output [31:0] out1;
wire [31:0] asc001;
wire [17:0] asc002;

assign asc002 = {in2,2'B00};

wire [31:0] asc001_tmp_0;
assign asc001_tmp_0 = 
	+(in3)
	+(asc002);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  uLX2Qgk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


