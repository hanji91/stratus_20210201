`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 20:18:34 KST (+0900), Tuesday 26 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module bn_addr_gen_MuxAdd3u16Cati0u16u32u32u1_4_0 (
	in5,
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in5,
	in4;
input [15:0] in3,
	in2;
input  ctrl1;
output [31:0] out1;
wire [31:0] asc001,
	asc002;
wire [17:0] asc003;

assign asc003 = {in3,2'B00};

wire [31:0] asc002_tmp_0;
assign asc002_tmp_0 = 
	+(in4)
	+(asc003);
assign asc002 = asc002_tmp_0
	+(in2);

reg [31:0] asc001_tmp_1;
assign asc001 = asc001_tmp_1;
always @ (ctrl1 or asc002 or in5) begin
	case (ctrl1)
		1'B1 : asc001_tmp_1 = asc002 ;
		default : asc001_tmp_1 = in5 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  vrf2Qgk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


