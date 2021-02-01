`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 13:23:17 KST (+0900), Monday 28 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module fix2float_Muxi31i0u1_4 (
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input  ctrl1;
output [4:0] out1;
wire [4:0] asc001;

reg [4:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = 5'B11111 ;
		default : asc001_tmp_0 = 5'B00000 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  uLLxSg0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


