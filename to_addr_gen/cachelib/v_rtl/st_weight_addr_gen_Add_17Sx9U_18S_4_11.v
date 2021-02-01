`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 23:58:33 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add_17Sx9U_18S_4_11 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in2;
input [8:0] in1;
output [17:0] out1;
wire [17:0] asc001;

assign asc001 = 
	+({in2[16], in2})
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubTxQwA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


