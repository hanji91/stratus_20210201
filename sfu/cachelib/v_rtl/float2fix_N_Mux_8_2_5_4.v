`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:01:01 KST (+0900), Thursday 07 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float2fix_N_Mux_8_2_5_4 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input  ctrl1;
output [7:0] out1;
wire [7:0] asc001;

reg [7:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 8'B00000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLTzSA0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


