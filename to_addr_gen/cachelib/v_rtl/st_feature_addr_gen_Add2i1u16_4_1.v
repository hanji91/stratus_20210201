`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:23:37 KST (+0900), Monday 18 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Add2i1u16_4_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output [15:0] out1;
wire [15:0] asc001;

assign asc001 = 
	+(in1)
	+(16'B0000000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubHzTwA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


