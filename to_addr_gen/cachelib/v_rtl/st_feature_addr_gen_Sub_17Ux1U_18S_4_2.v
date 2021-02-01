`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 09:47:19 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Sub_17Ux1U_18S_4_2 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in2;
input  in1;
output [17:0] out1;
wire [17:0] asc001;

assign asc001 = 
	+(in2)
	-(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubH5TQ8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


