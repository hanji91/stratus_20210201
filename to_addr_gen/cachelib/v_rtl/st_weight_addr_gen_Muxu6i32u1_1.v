`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:57:11 KST (+0900), Tuesday 08 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Muxu6i32u1_1 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [5:0] in2;
input  ctrl1;
output [5:0] out1;
wire [5:0] asc001;

reg [5:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 6'B100000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLX2TA8= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


