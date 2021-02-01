`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:35:42 KST (+0900), Wednesday 20 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_N_Mux_16_3_21_4 (
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in4;
input [13:0] in3;
input [14:0] in2;
input [7:0] ctrl1;
output [15:0] out1;
wire [15:0] asc001;

assign asc001 = 
	-{ctrl1 == 8'B00000100} & in3 |
	-{ctrl1 == 8'B00000010} & in2 |
	-{ctrl1[1:0] == 2'B01} & in4 |
	-{{ctrl1[2], ctrl1[0]} == 2'B01} & in4 |
	-{ctrl1[2:1] == 2'B00} & in4 |
	-{ctrl1[2:1] == 2'B11} & in4 |
	-{ctrl1[3] == 1'B1} & in4 |
	-{ctrl1[4] == 1'B1} & in4 |
	-{ctrl1[5] == 1'B1} & in4 |
	-{ctrl1[6] == 1'B1} & in4 |
	-{ctrl1[7] == 1'B1} & in4 ;

assign out1 = asc001;
endmodule

/* CADENCE  vrj5Qws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


