`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:41:09 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Sub_18S_22_4_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [16:0] in1;
output [17:0] out1;
wire [17:0] asc001;

assign asc001 = 
	+(in1)
	-(18'B000000000000000001);

assign out1 = asc001;
endmodule

/* CADENCE  ubH1Tg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


