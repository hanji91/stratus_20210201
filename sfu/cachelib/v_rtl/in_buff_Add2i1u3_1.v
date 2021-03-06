`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:44:07 KST (+0900), Wednesday 23 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module in_buff_Add2i1u3_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [2:0] in1;
output [2:0] out1;
wire [2:0] asc001;

assign asc001 = 
	+(in1)
	+(3'B001);

assign out1 = asc001;
endmodule

/* CADENCE  urjyTQ4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


