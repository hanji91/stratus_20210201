`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:18:13 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_MuxAdd3i1u8u16u16u1_4 (
	in4,
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in4,
	in3;
input [7:0] in2;
input  ctrl1;
output [15:0] out1;
wire [15:0] asc001,
	asc002;

wire [15:0] asc002_tmp_0;
assign asc002_tmp_0 = 
	+(in3)
	+(in2);
assign asc002 = asc002_tmp_0
	+(16'B0000000000000001);

reg [15:0] asc001_tmp_1;
assign asc001 = asc001_tmp_1;
always @ (ctrl1 or asc002 or in4) begin
	case (ctrl1)
		1'B1 : asc001_tmp_1 = asc002 ;
		default : asc001_tmp_1 = in4 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  vrf3Qwk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


