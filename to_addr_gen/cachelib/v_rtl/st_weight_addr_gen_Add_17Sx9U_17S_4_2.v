`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:35:39 KST (+0900), Wednesday 20 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add_17Sx9U_17S_4_2 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in2;
input [8:0] in1;
output [16:0] out1;
wire [16:0] asc001;

assign asc001 = 
	+(in2)
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubL2SQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


