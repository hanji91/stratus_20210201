`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:40:42 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_Muxu24i0u1_4_1 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [23:0] in2;
input  ctrl1;
output [23:0] out1;
wire [23:0] asc001;

reg [23:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 24'B000000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLX3Qw4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


