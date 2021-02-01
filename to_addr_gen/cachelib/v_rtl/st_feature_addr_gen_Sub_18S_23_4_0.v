`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:19:20 KST (+0900), Wednesday 20 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_Sub_18S_23_4_0 (
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

/* CADENCE  ubH1Qgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


