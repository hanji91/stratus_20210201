`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:26:07 KST (+0900), Tuesday 12 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module finish_gen_MuxAdd2i1u32u32u1_4 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in3,
	in2;
input  ctrl1;
output [31:0] out1;
wire [31:0] asc001,
	asc002;

assign asc002 = 
	+(in2)
	+(32'B00000000000000000000000000000001);

reg [31:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc002 or in3) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc002 ;
		default : asc001_tmp_0 = in3 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  v7b0Tw8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


