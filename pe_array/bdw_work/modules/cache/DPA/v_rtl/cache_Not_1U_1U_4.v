`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:41:42 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_Not_1U_1U_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input  in1;
output  out1;
wire  asc001;

assign asc001 = 
	((~in1));

assign out1 = asc001;
endmodule

/* CADENCE  urT0Tg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


