`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:00:47 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_MuxCats23CatAdd2u8s8s1i0u1_4 (
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
	asc004;
wire [7:0] asc006;

assign asc006 = 
	+(in4)
	+(in3);

assign asc004 = {in5,asc006,in2};

reg [31:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc004) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = asc004 ;
		default : asc001_tmp_0 = 32'B00000000000000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  vrT4TA4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


