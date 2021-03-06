`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:41:18 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Nei1u16_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in1;
output  out1;
wire  asc001,
	asc002;

assign asc002 = (21'B000000000000000000001==in1);

assign asc001 = 
	((~asc002));

assign out1 = asc001;
endmodule

/* CADENCE  ubL4Sws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


