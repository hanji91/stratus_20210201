`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 09:47:52 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Subi1u11_4_2 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [10:0] in1;
output [11:0] out1;
wire [11:0] asc001;

assign asc001 = 
	+(in1)
	-(12'B000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubHwQw4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


