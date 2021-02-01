`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:54:17 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_Muxu24i0u1_1_0 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [23:0] in2;
input  ctrl1;
output [24:0] out1;
wire [24:0] asc001;

reg [24:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 25'B0000000000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLT0Tw0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


