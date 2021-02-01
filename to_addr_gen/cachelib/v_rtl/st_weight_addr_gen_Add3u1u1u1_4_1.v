`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:50:59 KST (+0900), Tuesday 19 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add3u1u1u1_4_1 (
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input  in3,
	in2,
	in1;
output [1:0] out1;
wire [1:0] asc001;

wire [1:0] asc001_tmp_0;
assign asc001_tmp_0 = 
	+(in3)
	+(in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  ubnzTAo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


