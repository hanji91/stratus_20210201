`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:29:29 KST (+0900), Wednesday 02 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module mac_N_Mux_18_2_1_4_5 (
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [17:0] in2;
input  ctrl1;
output [17:0] out1;
wire [17:0] asc001;

reg [17:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or in2) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = in2 ;
		default : asc001_tmp_0 = 18'B000000000000000000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLX5Qws= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


