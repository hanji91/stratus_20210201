`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:23:43 KST (+0900), Monday 11 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module sfu_out_buff_MuxAdd2i1u2i0u1_4 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [1:0] in2;
input  ctrl1;
output [1:0] out1;
wire [1:0] asc001,
	asc002;

assign asc002 = 
	+(in2)
	+(2'B01);

reg [1:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc002) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc002 ;
		default : asc001_tmp_0 = 2'B00 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLf3Tg4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


