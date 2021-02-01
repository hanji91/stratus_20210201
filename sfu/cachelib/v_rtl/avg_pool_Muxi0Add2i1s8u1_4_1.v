`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 19:58:40 KST (+0900), Wednesday 27 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module avg_pool_Muxi0Add2i1s8u1_4_1 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input  ctrl1;
output [7:0] out1;
wire [7:0] asc001,
	asc003;

assign asc003 = 
	+(in2)
	+(8'B00000001);

reg [7:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc003) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = 8'B00000000 ;
		default : asc001_tmp_0 = asc003 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7H4SAo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


