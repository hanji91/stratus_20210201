`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:49:30 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fix2float_MuxCats23CatAdd2u8s8s1i0u1_4_1 (
	in5,
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input  in5;
input [7:0] in4,
	in3;
input [22:0] in2;
input  ctrl1;
output [31:0] out1;
wire [31:0] asc001,
	asc003;
wire [7:0] asc005;

assign asc005 = 
	+(in4)
	+(in3);

assign asc003 = {in5,asc005,in2};

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

/* CADENCE  vrT0Qwo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


