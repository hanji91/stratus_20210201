`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:27:20 KST (+0900), Tuesday 12 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module finish_gen_MuxAdd2i1u8i0u1_4_0 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2;
input  ctrl1;
output [7:0] out1;
wire [7:0] asc001,
	asc002;

assign asc002 = 
	+(in2)
	+(8'B00000001);

reg [7:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc002) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc002 ;
		default : asc001_tmp_0 = 8'B00000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7PySAA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


