`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:18:29 KST (+0900), Tuesday 26 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module bn_addr_gen_Equal_8Ux1U_1U_4_0 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input  in1;
output  out1;
wire  asc001;

assign asc001 = (in1==in2);

assign out1 = asc001;
endmodule

/* CADENCE  urj5TQ0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


