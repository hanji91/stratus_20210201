`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:36:56 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fp_cmp_Muxu23i0u1_4_1 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [22:0] in2;
input  ctrl1;
output [22:0] out1;
wire [22:0] asc001;

reg [22:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 23'B00000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLb2TQo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


