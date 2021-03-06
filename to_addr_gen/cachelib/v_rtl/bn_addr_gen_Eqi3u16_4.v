`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:04:10 KST (+0900), Monday 14 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module bn_addr_gen_Eqi3u16_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output  out1;
wire  asc001;

assign asc001 = (21'B000000000000000000011==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urnzSAk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


