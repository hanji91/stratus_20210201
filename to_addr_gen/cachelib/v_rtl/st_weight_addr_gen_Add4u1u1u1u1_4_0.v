`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:49:30 KST (+0900), Tuesday 19 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Add4u1u1u1u1_4_0 (
	in4,
	in3,
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input  in4,
	in3,
	in2,
	in1;
output [2:0] out1;
wire [2:0] asc001;

wire [2:0] asc001_tmp_0;
wire [2:0] asc001_tmp_1;
assign asc001_tmp_1 = 
	+(in4)
	+(in3);
assign asc001_tmp_0 = asc001_tmp_1
	+(in2);
assign asc001 = asc001_tmp_0
	+(in1);

assign out1 = asc001;
endmodule

/* CADENCE  uLbzSAE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


