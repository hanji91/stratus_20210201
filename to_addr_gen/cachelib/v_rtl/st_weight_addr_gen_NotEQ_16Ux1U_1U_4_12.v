`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:58:19 KST (+0900), Friday 22 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_NotEQ_16Ux1U_1U_4_12 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in2;
input  in1;
output  out1;
wire  asc001,
	asc002;

assign asc002 = (in1==in2);

assign asc001 = 
	((~asc002));

assign out1 = asc001;
endmodule

/* CADENCE  ubPzTQE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

