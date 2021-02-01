`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:30:46 KST (+0900), Monday 21 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module avg_pool_Add_8Sx2S_8S_1 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input [1:0] in1;
output [7:0] out1;
wire [7:0] asc001;

assign asc001 = 
	+(in2)
	+({{6{in1[1]}}, in1});

assign out1 = asc001;
endmodule

/* CADENCE  ubH5Tg8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

