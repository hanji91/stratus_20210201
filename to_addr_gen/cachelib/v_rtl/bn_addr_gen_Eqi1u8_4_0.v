`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:18:30 KST (+0900), Tuesday 26 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module bn_addr_gen_Eqi1u8_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output  out1;
wire  asc001;

assign asc001 = (13'B0000000000001==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urb2Tgg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


