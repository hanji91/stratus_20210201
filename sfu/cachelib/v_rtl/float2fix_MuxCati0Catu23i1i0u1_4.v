`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:40:48 KST (+0900), Thursday 07 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float2fix_MuxCati0Catu23i1i0u1_4 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [22:0] in2;
input  ctrl1;
output [31:0] out1;
wire [31:0] asc001,
	asc003;

assign asc003 = {1'B1,in2,8'B00000000};

reg [31:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc003) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc003 ;
		default : asc001_tmp_0 = 32'B00000000000000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7X0Qgw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


