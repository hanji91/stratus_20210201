`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 00:07:58 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Subi32u16_4_8 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output [16:0] out1;
wire [16:0] asc001;

assign asc001 = 
	+(in1)
	-(17'B00000000000100000);

assign out1 = asc001;
endmodule

/* CADENCE  ubH4SA0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


