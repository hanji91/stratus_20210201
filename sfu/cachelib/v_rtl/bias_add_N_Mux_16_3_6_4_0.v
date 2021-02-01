`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:54:50 KST (+0900), Friday 08 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module bias_add_N_Mux_16_3_6_4_0 (
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in4,
	in3,
	in2;
input [1:0] ctrl1;
output [15:0] out1;
wire [15:0] asc001;

reg [15:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in3 or in2 or in4) begin
	case (ctrl1)
		2'B10 : asc001_tmp_0 = in3 ;
		2'B01 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = in4 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7LyQwg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


