`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:40:33 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_MuxAdd2And2Or3u1u1u1u1s23i0u1_4_1 (
	in6,
	in5,
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [22:0] in6;
input  in5,
	in4,
	in3,
	in2,
	ctrl1;
output [22:0] out1;
wire [22:0] asc001,
	asc003;
wire  asc004,
	asc005;

assign asc005 = 
	(in4)
	|(in3)
	|(in2);

assign asc004 = 
	(in5)
	&(asc005);

assign asc003 = 
	+(in6)
	+(asc004);

reg [22:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc003) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc003 ;
		default : asc001_tmp_0 = 23'B00000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  vrjyTww= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


