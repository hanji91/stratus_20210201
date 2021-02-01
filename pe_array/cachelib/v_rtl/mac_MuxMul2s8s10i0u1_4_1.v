`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:19:49 KST (+0900), Wednesday 02 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module mac_MuxMul2s8s10i0u1_4_1 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [9:0] in3;
input [7:0] in2;
input  ctrl1;
output [17:0] out1;
wire [17:0] asc001,
	asc003;

assign asc003 = 
	+({{8{in3[9]}}, in3} * {{10{in2[7]}}, in2});

reg [17:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc003) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc003 ;
		default : asc001_tmp_0 = 18'B000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7b2Sgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


