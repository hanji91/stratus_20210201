`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:25:04 KST (+0900), Friday 15 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module sfu_out_buff_N_MuxB_320_2_0_1_0 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [319:0] in3;
input [256:0] in2;
input  ctrl1;
output [319:0] out1;
wire [319:0] asc001;

reg [319:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2 or in3) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = in3 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7D2SQk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


