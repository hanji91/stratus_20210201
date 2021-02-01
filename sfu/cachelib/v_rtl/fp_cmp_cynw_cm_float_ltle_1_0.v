`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 18:18:53 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fp_cmp_cynw_cm_float_ltle_1_0 (
	in1,
	in2,
	in3,
	out1
	); /* architecture "behavioural" */ 
input  in1;
input [7:0] in2;
input [22:0] in3;
output [1:0] out1;
wire [30:0] asc001;
wire  asc004,
	asc005,
	asc007,
	asc008,
	asc009,
	asc010,
	asc011,
	asc012,
	asc014,
	asc015,
	asc016,
	asc017,
	asc018,
	asc019,
	asc021,
	asc022,
	asc023,
	asc025,
	asc026;

assign asc001 = {in2,in3};

assign asc005 = 
	(|asc001);

assign asc004 = 
	(asc005)
	&(in1);

assign asc008 = 
	(|in3);

assign asc007 = 
	(&in2)
	&(asc008);

assign asc009 = (13'B0000000000000>in2);

assign asc010 = (in2>13'B0000000000000);

assign asc011 = (28'B0000000000000000000000000000>in3);

assign asc012 = (in3>28'B0000000000000000000000000000);

assign asc016 = 
	(asc004)
	&(1'B1);

assign asc018 = 
	(asc004)
	|(1'B1);

assign asc021 = 
	((~asc004));

assign asc025 = 
	((~asc004));

reg [0:0] asc026_tmp_0;
assign asc026 = asc026_tmp_0;
always @ (asc012 or asc004) begin
	case (asc012)
		1'B1 : asc026_tmp_0 = asc004 ;
		default : asc026_tmp_0 = 1'B0 ;
	endcase
end

reg [0:0] asc023_tmp_1;
assign asc023 = asc023_tmp_1;
always @ (asc011 or asc025 or asc026) begin
	case (asc011)
		1'B1 : asc023_tmp_1 = asc025 ;
		default : asc023_tmp_1 = asc026 ;
	endcase
end

reg [0:0] asc022_tmp_2;
assign asc022 = asc022_tmp_2;
always @ (asc010 or asc004 or asc023) begin
	case (asc010)
		1'B1 : asc022_tmp_2 = asc004 ;
		default : asc022_tmp_2 = asc023 ;
	endcase
end

reg [0:0] asc019_tmp_3;
assign asc019 = asc019_tmp_3;
always @ (asc009 or asc021 or asc022) begin
	case (asc009)
		1'B1 : asc019_tmp_3 = asc021 ;
		default : asc019_tmp_3 = asc022 ;
	endcase
end

assign asc017 = 
	(asc018)
	&(asc019);

assign asc015 = 
	(asc016)
	|(asc017);

assign asc014 = 
	(asc015)
	&((~asc007));

assign out1 = {1'B0, asc014};
endmodule

/* CADENCE  urf5SA/X : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


