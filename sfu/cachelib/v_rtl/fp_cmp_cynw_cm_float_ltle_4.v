`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 17:28:50 KST (+0900), Wednesday 06 January 2021
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fp_cmp_cynw_cm_float_ltle_4 (
	in1,
	in2,
	in3,
	in4,
	in5,
	in6,
	out1
	); /* architecture "behavioural" */ 
input  in1;
input [7:0] in2;
input [22:0] in3;
input [7:0] in4;
input [22:0] in5;
input  in6;
output [1:0] out1;
wire  asc001,
	asc002;
wire [30:0] asc003,
	asc006;
wire  asc009,
	asc010,
	asc011,
	asc012,
	asc013,
	asc014,
	asc015,
	asc016,
	asc017,
	asc018,
	asc019,
	asc021,
	asc022,
	asc023,
	asc024,
	asc025,
	asc026,
	asc028,
	asc029,
	asc030,
	asc032,
	asc033;

assign asc003 = {in4,in5};

assign asc002 = 
	(|asc003);

assign asc001 = 
	(asc002)
	&(in6);

assign asc006 = {in2,in3};

assign asc010 = 
	(|asc006);

assign asc009 = 
	(asc010)
	&(in1);

assign asc013 = 
	(|in5);

assign asc012 = 
	(&in4)
	&(asc013);

assign asc015 = 
	(|in3);

assign asc014 = 
	(&in2)
	&(asc015);

assign asc011 = 
	(asc012)
	|(asc014);

assign asc016 = (in2>in4);

assign asc017 = (in4>in2);

assign asc018 = (in3>in5);

assign asc019 = (in5>in3);

assign asc023 = 
	(asc001)
	&((~asc009));

assign asc025 = 
	(asc001)
	|((~asc009));

assign asc028 = 
	((~asc001));

assign asc032 = 
	((~asc001));

reg [0:0] asc033_tmp_0;
assign asc033 = asc033_tmp_0;
always @ (asc019 or asc001) begin
	case (asc019)
		1'B1 : asc033_tmp_0 = asc001 ;
		default : asc033_tmp_0 = 1'B0 ;
	endcase
end

reg [0:0] asc030_tmp_1;
assign asc030 = asc030_tmp_1;
always @ (asc018 or asc032 or asc033) begin
	case (asc018)
		1'B1 : asc030_tmp_1 = asc032 ;
		default : asc030_tmp_1 = asc033 ;
	endcase
end

reg [0:0] asc029_tmp_2;
assign asc029 = asc029_tmp_2;
always @ (asc017 or asc001 or asc030) begin
	case (asc017)
		1'B1 : asc029_tmp_2 = asc001 ;
		default : asc029_tmp_2 = asc030 ;
	endcase
end

reg [0:0] asc026_tmp_3;
assign asc026 = asc026_tmp_3;
always @ (asc016 or asc028 or asc029) begin
	case (asc016)
		1'B1 : asc026_tmp_3 = asc028 ;
		default : asc026_tmp_3 = asc029 ;
	endcase
end

assign asc024 = 
	(asc025)
	&(asc026);

assign asc022 = 
	(asc023)
	|(asc024);

assign asc021 = 
	(asc022)
	&((~asc011));

assign out1 = {1'B0, asc021};
endmodule

/* CADENCE  ubD2Swjd : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


