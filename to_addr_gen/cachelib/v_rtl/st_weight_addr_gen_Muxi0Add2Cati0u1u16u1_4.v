`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:21:12 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Muxi0Add2Cati0u1u16u1_4 (
	in3,
	in2,
	ctrl1,
	out1
	); /* architecture "behavioural" */ 
input [15:0] in3;
input  in2,
	ctrl1;
output [15:0] out1;
wire [15:0] asc001,
	asc002;
wire [5:0] asc003;

assign asc003 = {in2,5'B00000};

assign asc002 = 
	+(in3)
	+(asc003);

reg [15:0] asc001_tmp_0;
assign asc001 = asc001_tmp_0;
always @ (ctrl1 or asc002) begin
	case (ctrl1)
		1'B1 : asc001_tmp_0 = 16'B0000000000000000 ;
		default : asc001_tmp_0 = asc002 ;
	endcase
end

assign out1 = asc001;
endmodule

/* CADENCE  vrL1Qww= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


