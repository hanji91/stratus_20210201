`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:43:26 KST (+0900), Wednesday 23 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module in_buff_MuxAdd2i1u3u3u1_4 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [2:0] in3,
	in2;
input  ctrl1;
output [2:0] out1;
wire [2:0] asc001,
	asc002;

assign asc002 = 
	+(in2)
	+(3'B001);

reg [2:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc002 or in3) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc002 ;
		default : asc001_tmp_0 = in3 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7D4Sg8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


