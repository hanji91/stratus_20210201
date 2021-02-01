`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:41:10 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_feature_addr_gen_N_Mux_16_2_28_4_0 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3,
	in2;
input  ctrl1;
output [15:0] out1;
wire [15:0] asc001;

reg [15:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2 or in3) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = in3 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLb4Sw0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


