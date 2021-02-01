`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:04:06 KST (+0900), Wednesday 16 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module feature_write_addr_gen_Eqi3u3_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [2:0] in1;
output  out1;
wire  asc001;

assign asc001 = (8'B00000011==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urjzSw8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


