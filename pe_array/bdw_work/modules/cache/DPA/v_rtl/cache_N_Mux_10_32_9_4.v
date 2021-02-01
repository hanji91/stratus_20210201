`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:41:45 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module cache_N_Mux_10_32_9_4 (
	in33,
	in32,
	in31,
	in30,
	in29,
	in28,
	in27,
	in26,
	in25,
	in24,
	in23,
	in22,
	in21,
	in20,
	in19,
	in18,
	in17,
	in16,
	in15,
	in14,
	in13,
	in12,
	in11,
	in10,
	in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in33,
	in32,
	in31,
	in30,
	in29,
	in28,
	in27,
	in26,
	in25,
	in24,
	in23,
	in22,
	in21,
	in20,
	in19,
	in18,
	in17,
	in16,
	in15,
	in14,
	in13,
	in12,
	in11,
	in10,
	in9,
	in8,
	in7,
	in6,
	in5,
	in4,
	in3,
	in2;
input [4:0] ctrl1;
output [9:0] out1;
wire [9:0] asc001;

reg [9:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in32 or in31 or in30 or in29 or in28 or in27 or in26 or in25 or in24 or in23 or in22
    or in21 or in20 or in19 or in18 or in17 or in16 or in15 or in14 or in13 or in12 or in11 or in10 or in9
    or in8 or in7 or in6 or in5 or in4 or in3 or in2 or in33) begin
	case (ctrl1)
		5'B11110 : asc001_tmp_0 = in32 ;
		5'B11101 : asc001_tmp_0 = in31 ;
		5'B11100 : asc001_tmp_0 = in30 ;
		5'B11011 : asc001_tmp_0 = in29 ;
		5'B11010 : asc001_tmp_0 = in28 ;
		5'B11001 : asc001_tmp_0 = in27 ;
		5'B11000 : asc001_tmp_0 = in26 ;
		5'B10111 : asc001_tmp_0 = in25 ;
		5'B10110 : asc001_tmp_0 = in24 ;
		5'B10101 : asc001_tmp_0 = in23 ;
		5'B10100 : asc001_tmp_0 = in22 ;
		5'B10011 : asc001_tmp_0 = in21 ;
		5'B10010 : asc001_tmp_0 = in20 ;
		5'B10001 : asc001_tmp_0 = in19 ;
		5'B10000 : asc001_tmp_0 = in18 ;
		5'B01111 : asc001_tmp_0 = in17 ;
		5'B01110 : asc001_tmp_0 = in16 ;
		5'B01101 : asc001_tmp_0 = in15 ;
		5'B01100 : asc001_tmp_0 = in14 ;
		5'B01011 : asc001_tmp_0 = in13 ;
		5'B01010 : asc001_tmp_0 = in12 ;
		5'B01001 : asc001_tmp_0 = in11 ;
		5'B01000 : asc001_tmp_0 = in10 ;
		5'B00111 : asc001_tmp_0 = in9 ;
		5'B00110 : asc001_tmp_0 = in8 ;
		5'B00101 : asc001_tmp_0 = in7 ;
		5'B00100 : asc001_tmp_0 = in6 ;
		5'B00011 : asc001_tmp_0 = in5 ;
		5'B00010 : asc001_tmp_0 = in4 ;
		5'B00001 : asc001_tmp_0 = in3 ;
		5'B00000 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = in33 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  urn2Qwja : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


