`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:53:56 KST (+0900), Monday 07 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: Stratus DpOpt 2019.1.01 
*******************************************************************************/

module st_weight_addr_gen_Div_64Ux8U_16U_4_3 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [63:0] in2;
input [7:0] in1;
output [15:0] out1;
wire [15:0] asc001_0;
wire [8:0] in2_1;
wire [0:0] in2_2;
wire [8:0] in2_4;
wire [1:0] in2_5;
wire [8:0] in2_7;
wire [2:0] in2_8;
wire [8:0] in2_10;
wire [3:0] in2_11;
wire [8:0] in2_13;
wire [4:0] in2_14;
wire [8:0] in2_16;
wire [5:0] in2_17;
wire [8:0] in2_19;
wire [6:0] in2_20;
wire [8:0] in2_22;
wire [7:0] in2_23;
wire [8:0] in2_25,
	in2_26,
	in2_28;
wire [9:0] in2_29;
wire [8:0] in2_31;
wire [10:0] in2_32;
wire [8:0] in2_34;
wire [11:0] in2_35;
wire [8:0] in2_37;
wire [12:0] in2_38;
wire [8:0] in2_40;
wire [13:0] in2_41;
wire [8:0] in2_43;
wire [14:0] in2_44;
wire [8:0] in2_46;
wire [15:0] in2_47;
wire [8:0] in2_49;
wire [16:0] in2_50;
wire [8:0] in2_52;
wire [17:0] in2_53;
wire [8:0] in2_55;
wire [18:0] in2_56;
wire [8:0] in2_58;
wire [19:0] in2_59;
wire [8:0] in2_61;
wire [20:0] in2_62;
wire [8:0] in2_64;
wire [21:0] in2_65;
wire [8:0] in2_67;
wire [22:0] in2_68;
wire [8:0] in2_70;
wire [23:0] in2_71;
wire [8:0] in2_73;
wire [24:0] in2_74;
wire [8:0] in2_76;
wire [25:0] in2_77;
wire [8:0] in2_79;
wire [26:0] in2_80;
wire [8:0] in2_82;
wire [27:0] in2_83;
wire [8:0] in2_85;
wire [28:0] in2_86;
wire [8:0] in2_88;
wire [29:0] in2_89;
wire [8:0] in2_91;
wire [30:0] in2_92;
wire [8:0] in2_94;
wire [31:0] in2_95;
wire [8:0] in2_97;
wire [32:0] in2_98;
wire [8:0] in2_100;
wire [33:0] in2_101;
wire [8:0] in2_103;
wire [34:0] in2_104;
wire [8:0] in2_106;
wire [35:0] in2_107;
wire [8:0] in2_109;
wire [36:0] in2_110;
wire [8:0] in2_112;
wire [37:0] in2_113;
wire [8:0] in2_115;
wire [38:0] in2_116;
wire [8:0] in2_118;
wire [39:0] in2_119;
wire [8:0] in2_121;
wire [40:0] in2_122;
wire [8:0] in2_124;
wire [41:0] in2_125;
wire [8:0] in2_127;
wire [42:0] in2_128;
wire [8:0] in2_130;
wire [43:0] in2_131;
wire [8:0] in2_133;
wire [44:0] in2_134;
wire [8:0] in2_136;
wire [45:0] in2_137;
wire [8:0] in2_139;
wire [46:0] in2_140;
wire [8:0] in2_142;
wire [47:0] in2_143;
wire [8:0] in2_145;
wire [48:0] in2_146;
wire [8:0] in2_148;
wire [49:0] in2_149;
wire [8:0] in2_151;
wire [50:0] in2_152;
wire [8:0] in2_154;
wire [51:0] in2_155;
wire [8:0] in2_157;
wire [52:0] in2_158;
wire [8:0] in2_160;
wire [53:0] in2_161;
wire [8:0] in2_163;
wire [54:0] in2_164;
wire [8:0] in2_166;
wire [55:0] in2_167;
wire [8:0] in2_169;
wire [56:0] in2_170;
wire [8:0] in2_172;
wire [57:0] in2_173;
wire [8:0] in2_175;
wire [58:0] in2_176;
wire [8:0] in2_178;
wire [59:0] in2_179;
wire [8:0] in2_181;
wire [60:0] in2_182;
wire [8:0] in2_184;
wire [61:0] in2_185;
wire [8:0] in2_187;
wire [62:0] in2_188;
wire [63:0] in2_189;
wire [8:0] in2_190;
wire [1:0] in2_3_0,
	in2_3_1;
wire [2:0] in2_6_0,
	in2_6_1;
wire [3:0] in2_9_0,
	in2_9_1;
wire [4:0] in2_12_0,
	in2_12_1;
wire [5:0] in2_15_0,
	in2_15_1;
wire [6:0] in2_18_0,
	in2_18_1;
wire [7:0] in2_21_0,
	in2_21_1;
wire [8:0] in2_24_0,
	in2_24_1;
wire [9:0] in2_27_0,
	in2_27_1;
wire [10:0] in2_30_0,
	in2_30_1;
wire [11:0] in2_33_0,
	in2_33_1;
wire [12:0] in2_36_0,
	in2_36_1;
wire [13:0] in2_39_0,
	in2_39_1;
wire [14:0] in2_42_0,
	in2_42_1;
wire [15:0] in2_45_0,
	in2_45_1;
wire [16:0] in2_48_0,
	in2_48_1;
wire [17:0] in2_51_0,
	in2_51_1;
wire [18:0] in2_54_0,
	in2_54_1;
wire [19:0] in2_57_0,
	in2_57_1;
wire [20:0] in2_60_0,
	in2_60_1;
wire [21:0] in2_63_0,
	in2_63_1;
wire [22:0] in2_66_0,
	in2_66_1;
wire [23:0] in2_69_0,
	in2_69_1;
wire [24:0] in2_72_0,
	in2_72_1;
wire [25:0] in2_75_0,
	in2_75_1;
wire [26:0] in2_78_0,
	in2_78_1;
wire [27:0] in2_81_0,
	in2_81_1;
wire [28:0] in2_84_0,
	in2_84_1;
wire [29:0] in2_87_0,
	in2_87_1;
wire [30:0] in2_90_0,
	in2_90_1;
wire [31:0] in2_93_0,
	in2_93_1;
wire [32:0] in2_96_0,
	in2_96_1;
wire [33:0] in2_99_0,
	in2_99_1;
wire [34:0] in2_102_0,
	in2_102_1;
wire [35:0] in2_105_0,
	in2_105_1;
wire [36:0] in2_108_0,
	in2_108_1;
wire [37:0] in2_111_0,
	in2_111_1;
wire [38:0] in2_114_0,
	in2_114_1;
wire [39:0] in2_117_0,
	in2_117_1;
wire [40:0] in2_120_0,
	in2_120_1;
wire [41:0] in2_123_0,
	in2_123_1;
wire [42:0] in2_126_0,
	in2_126_1;
wire [43:0] in2_129_0,
	in2_129_1;
wire [44:0] in2_132_0,
	in2_132_1;
wire [45:0] in2_135_0,
	in2_135_1;
wire [46:0] in2_138_0,
	in2_138_1;
wire [47:0] in2_141_0,
	in2_141_1;
wire [48:0] in2_144_0,
	in2_144_1;
wire [49:0] in2_147_0,
	in2_147_1;
wire [50:0] in2_150_0,
	in2_150_1;
wire [51:0] in2_153_0,
	in2_153_1;
wire [52:0] in2_156_0,
	in2_156_1;
wire [53:0] in2_159_0,
	in2_159_1;
wire [54:0] in2_162_0,
	in2_162_1;
wire [55:0] in2_165_0,
	in2_165_1;
wire [56:0] in2_168_0,
	in2_168_1;
wire [57:0] in2_171_0,
	in2_171_1;
wire [58:0] in2_174_0,
	in2_174_1;
wire [59:0] in2_177_0,
	in2_177_1;
wire [60:0] in2_180_0,
	in2_180_1;
wire [61:0] in2_183_0,
	in2_183_1;
wire [62:0] in2_186_0,
	in2_186_1;

wire [8:0] in2_1_tmp_0;
assign in2_1_tmp_0 = 
	+(in2[63]);
assign in2_1 = in2_1_tmp_0
	-(in1);

reg [0:0] in2_2_tmp_1;
assign in2_2 = in2_2_tmp_1;
always @ (in2_1[8] or in2_1[0] or in2[63]) begin
	case (in2_1[8])
		1'B0 : in2_2_tmp_1 = in2_1[0] ;
		default : in2_2_tmp_1 = in2[63] ;
	endcase
end

assign in2_3_0 = {in2_2,in2[62]};

assign in2_3_1 = {in2_2,in2[62]};

wire [8:0] in2_4_tmp_2;
assign in2_4_tmp_2 = 
	+(in2_3_1);
assign in2_4 = in2_4_tmp_2
	-(in1);

reg [1:0] in2_5_tmp_3;
assign in2_5 = in2_5_tmp_3;
always @ (in2_4[8] or in2_4[1:0] or in2_3_0) begin
	case (in2_4[8])
		1'B0 : in2_5_tmp_3 = in2_4[1:0] ;
		default : in2_5_tmp_3 = in2_3_0 ;
	endcase
end

assign in2_6_0 = {in2_5,in2[61]};

assign in2_6_1 = {in2_5,in2[61]};

wire [8:0] in2_7_tmp_4;
assign in2_7_tmp_4 = 
	+(in2_6_1);
assign in2_7 = in2_7_tmp_4
	-(in1);

reg [2:0] in2_8_tmp_5;
assign in2_8 = in2_8_tmp_5;
always @ (in2_7[8] or in2_7[2:0] or in2_6_0) begin
	case (in2_7[8])
		1'B0 : in2_8_tmp_5 = in2_7[2:0] ;
		default : in2_8_tmp_5 = in2_6_0 ;
	endcase
end

assign in2_9_0 = {in2_8,in2[60]};

assign in2_9_1 = {in2_8,in2[60]};

wire [8:0] in2_10_tmp_6;
assign in2_10_tmp_6 = 
	+(in2_9_1);
assign in2_10 = in2_10_tmp_6
	-(in1);

reg [3:0] in2_11_tmp_7;
assign in2_11 = in2_11_tmp_7;
always @ (in2_10[8] or in2_10[3:0] or in2_9_0) begin
	case (in2_10[8])
		1'B0 : in2_11_tmp_7 = in2_10[3:0] ;
		default : in2_11_tmp_7 = in2_9_0 ;
	endcase
end

assign in2_12_0 = {in2_11,in2[59]};

assign in2_12_1 = {in2_11,in2[59]};

wire [8:0] in2_13_tmp_8;
assign in2_13_tmp_8 = 
	+(in2_12_1);
assign in2_13 = in2_13_tmp_8
	-(in1);

reg [4:0] in2_14_tmp_9;
assign in2_14 = in2_14_tmp_9;
always @ (in2_13[8] or in2_13[4:0] or in2_12_0) begin
	case (in2_13[8])
		1'B0 : in2_14_tmp_9 = in2_13[4:0] ;
		default : in2_14_tmp_9 = in2_12_0 ;
	endcase
end

assign in2_15_0 = {in2_14,in2[58]};

assign in2_15_1 = {in2_14,in2[58]};

wire [8:0] in2_16_tmp_10;
assign in2_16_tmp_10 = 
	+(in2_15_1);
assign in2_16 = in2_16_tmp_10
	-(in1);

reg [5:0] in2_17_tmp_11;
assign in2_17 = in2_17_tmp_11;
always @ (in2_16[8] or in2_16[5:0] or in2_15_0) begin
	case (in2_16[8])
		1'B0 : in2_17_tmp_11 = in2_16[5:0] ;
		default : in2_17_tmp_11 = in2_15_0 ;
	endcase
end

assign in2_18_0 = {in2_17,in2[57]};

assign in2_18_1 = {in2_17,in2[57]};

wire [8:0] in2_19_tmp_12;
assign in2_19_tmp_12 = 
	+(in2_18_1);
assign in2_19 = in2_19_tmp_12
	-(in1);

reg [6:0] in2_20_tmp_13;
assign in2_20 = in2_20_tmp_13;
always @ (in2_19[8] or in2_19[6:0] or in2_18_0) begin
	case (in2_19[8])
		1'B0 : in2_20_tmp_13 = in2_19[6:0] ;
		default : in2_20_tmp_13 = in2_18_0 ;
	endcase
end

assign in2_21_0 = {in2_20,in2[56]};

assign in2_21_1 = {in2_20,in2[56]};

wire [8:0] in2_22_tmp_14;
assign in2_22_tmp_14 = 
	+(in2_21_1);
assign in2_22 = in2_22_tmp_14
	-(in1);

reg [7:0] in2_23_tmp_15;
assign in2_23 = in2_23_tmp_15;
always @ (in2_22[8] or in2_22[7:0] or in2_21_0) begin
	case (in2_22[8])
		1'B0 : in2_23_tmp_15 = in2_22[7:0] ;
		default : in2_23_tmp_15 = in2_21_0 ;
	endcase
end

assign in2_24_0 = {in2_23,in2[55]};

assign in2_24_1 = {in2_23,in2[55]};

wire [8:0] in2_25_tmp_16;
assign in2_25_tmp_16 = 
	+(in2_24_1);
assign in2_25 = in2_25_tmp_16
	-(in1);

reg [8:0] in2_26_tmp_17;
assign in2_26 = in2_26_tmp_17;
always @ (in2_25[8] or in2_25 or in2_24_0) begin
	case (in2_25[8])
		1'B0 : in2_26_tmp_17 = in2_25 ;
		default : in2_26_tmp_17 = in2_24_0 ;
	endcase
end

assign in2_27_0 = {in2_26,in2[54]};

assign in2_27_1 = {in2_26,in2[54]};

wire [8:0] in2_28_tmp_18;
assign in2_28_tmp_18 = 
	+(in2_27_1[8:0]);
assign in2_28 = in2_28_tmp_18
	-(in1);

reg [9:0] in2_29_tmp_19;
assign in2_29 = in2_29_tmp_19;
always @ (in2_28[8] or in2_28 or in2_27_0) begin
	case (in2_28[8])
		1'B0 : in2_29_tmp_19 = in2_28 ;
		default : in2_29_tmp_19 = in2_27_0 ;
	endcase
end

assign in2_30_0 = {in2_29,in2[53]};

assign in2_30_1 = {in2_29,in2[53]};

wire [8:0] in2_31_tmp_20;
assign in2_31_tmp_20 = 
	+(in2_30_1[8:0]);
assign in2_31 = in2_31_tmp_20
	-(in1);

reg [10:0] in2_32_tmp_21;
assign in2_32 = in2_32_tmp_21;
always @ (in2_31[8] or in2_31 or in2_30_0) begin
	case (in2_31[8])
		1'B0 : in2_32_tmp_21 = in2_31 ;
		default : in2_32_tmp_21 = in2_30_0 ;
	endcase
end

assign in2_33_0 = {in2_32,in2[52]};

assign in2_33_1 = {in2_32,in2[52]};

wire [8:0] in2_34_tmp_22;
assign in2_34_tmp_22 = 
	+(in2_33_1[8:0]);
assign in2_34 = in2_34_tmp_22
	-(in1);

reg [11:0] in2_35_tmp_23;
assign in2_35 = in2_35_tmp_23;
always @ (in2_34[8] or in2_34 or in2_33_0) begin
	case (in2_34[8])
		1'B0 : in2_35_tmp_23 = in2_34 ;
		default : in2_35_tmp_23 = in2_33_0 ;
	endcase
end

assign in2_36_0 = {in2_35,in2[51]};

assign in2_36_1 = {in2_35,in2[51]};

wire [8:0] in2_37_tmp_24;
assign in2_37_tmp_24 = 
	+(in2_36_1[8:0]);
assign in2_37 = in2_37_tmp_24
	-(in1);

reg [12:0] in2_38_tmp_25;
assign in2_38 = in2_38_tmp_25;
always @ (in2_37[8] or in2_37 or in2_36_0) begin
	case (in2_37[8])
		1'B0 : in2_38_tmp_25 = in2_37 ;
		default : in2_38_tmp_25 = in2_36_0 ;
	endcase
end

assign in2_39_0 = {in2_38,in2[50]};

assign in2_39_1 = {in2_38,in2[50]};

wire [8:0] in2_40_tmp_26;
assign in2_40_tmp_26 = 
	+(in2_39_1[8:0]);
assign in2_40 = in2_40_tmp_26
	-(in1);

reg [13:0] in2_41_tmp_27;
assign in2_41 = in2_41_tmp_27;
always @ (in2_40[8] or in2_40 or in2_39_0) begin
	case (in2_40[8])
		1'B0 : in2_41_tmp_27 = in2_40 ;
		default : in2_41_tmp_27 = in2_39_0 ;
	endcase
end

assign in2_42_0 = {in2_41,in2[49]};

assign in2_42_1 = {in2_41,in2[49]};

wire [8:0] in2_43_tmp_28;
assign in2_43_tmp_28 = 
	+(in2_42_1[8:0]);
assign in2_43 = in2_43_tmp_28
	-(in1);

reg [14:0] in2_44_tmp_29;
assign in2_44 = in2_44_tmp_29;
always @ (in2_43[8] or in2_43 or in2_42_0) begin
	case (in2_43[8])
		1'B0 : in2_44_tmp_29 = in2_43 ;
		default : in2_44_tmp_29 = in2_42_0 ;
	endcase
end

assign in2_45_0 = {in2_44,in2[48]};

assign in2_45_1 = {in2_44,in2[48]};

wire [8:0] in2_46_tmp_30;
assign in2_46_tmp_30 = 
	+(in2_45_1[8:0]);
assign in2_46 = in2_46_tmp_30
	-(in1);

reg [15:0] in2_47_tmp_31;
assign in2_47 = in2_47_tmp_31;
always @ (in2_46[8] or in2_46 or in2_45_0) begin
	case (in2_46[8])
		1'B0 : in2_47_tmp_31 = in2_46 ;
		default : in2_47_tmp_31 = in2_45_0 ;
	endcase
end

assign in2_48_0 = {in2_47,in2[47]};

assign in2_48_1 = {in2_47,in2[47]};

wire [8:0] in2_49_tmp_32;
assign in2_49_tmp_32 = 
	+(in2_48_1[8:0]);
assign in2_49 = in2_49_tmp_32
	-(in1);

reg [16:0] in2_50_tmp_33;
assign in2_50 = in2_50_tmp_33;
always @ (in2_49[8] or in2_49 or in2_48_0) begin
	case (in2_49[8])
		1'B0 : in2_50_tmp_33 = in2_49 ;
		default : in2_50_tmp_33 = in2_48_0 ;
	endcase
end

assign in2_51_0 = {in2_50,in2[46]};

assign in2_51_1 = {in2_50,in2[46]};

wire [8:0] in2_52_tmp_34;
assign in2_52_tmp_34 = 
	+(in2_51_1[8:0]);
assign in2_52 = in2_52_tmp_34
	-(in1);

reg [17:0] in2_53_tmp_35;
assign in2_53 = in2_53_tmp_35;
always @ (in2_52[8] or in2_52 or in2_51_0) begin
	case (in2_52[8])
		1'B0 : in2_53_tmp_35 = in2_52 ;
		default : in2_53_tmp_35 = in2_51_0 ;
	endcase
end

assign in2_54_0 = {in2_53,in2[45]};

assign in2_54_1 = {in2_53,in2[45]};

wire [8:0] in2_55_tmp_36;
assign in2_55_tmp_36 = 
	+(in2_54_1[8:0]);
assign in2_55 = in2_55_tmp_36
	-(in1);

reg [18:0] in2_56_tmp_37;
assign in2_56 = in2_56_tmp_37;
always @ (in2_55[8] or in2_55 or in2_54_0) begin
	case (in2_55[8])
		1'B0 : in2_56_tmp_37 = in2_55 ;
		default : in2_56_tmp_37 = in2_54_0 ;
	endcase
end

assign in2_57_0 = {in2_56,in2[44]};

assign in2_57_1 = {in2_56,in2[44]};

wire [8:0] in2_58_tmp_38;
assign in2_58_tmp_38 = 
	+(in2_57_1[8:0]);
assign in2_58 = in2_58_tmp_38
	-(in1);

reg [19:0] in2_59_tmp_39;
assign in2_59 = in2_59_tmp_39;
always @ (in2_58[8] or in2_58 or in2_57_0) begin
	case (in2_58[8])
		1'B0 : in2_59_tmp_39 = in2_58 ;
		default : in2_59_tmp_39 = in2_57_0 ;
	endcase
end

assign in2_60_0 = {in2_59,in2[43]};

assign in2_60_1 = {in2_59,in2[43]};

wire [8:0] in2_61_tmp_40;
assign in2_61_tmp_40 = 
	+(in2_60_1[8:0]);
assign in2_61 = in2_61_tmp_40
	-(in1);

reg [20:0] in2_62_tmp_41;
assign in2_62 = in2_62_tmp_41;
always @ (in2_61[8] or in2_61 or in2_60_0) begin
	case (in2_61[8])
		1'B0 : in2_62_tmp_41 = in2_61 ;
		default : in2_62_tmp_41 = in2_60_0 ;
	endcase
end

assign in2_63_0 = {in2_62,in2[42]};

assign in2_63_1 = {in2_62,in2[42]};

wire [8:0] in2_64_tmp_42;
assign in2_64_tmp_42 = 
	+(in2_63_1[8:0]);
assign in2_64 = in2_64_tmp_42
	-(in1);

reg [21:0] in2_65_tmp_43;
assign in2_65 = in2_65_tmp_43;
always @ (in2_64[8] or in2_64 or in2_63_0) begin
	case (in2_64[8])
		1'B0 : in2_65_tmp_43 = in2_64 ;
		default : in2_65_tmp_43 = in2_63_0 ;
	endcase
end

assign in2_66_0 = {in2_65,in2[41]};

assign in2_66_1 = {in2_65,in2[41]};

wire [8:0] in2_67_tmp_44;
assign in2_67_tmp_44 = 
	+(in2_66_1[8:0]);
assign in2_67 = in2_67_tmp_44
	-(in1);

reg [22:0] in2_68_tmp_45;
assign in2_68 = in2_68_tmp_45;
always @ (in2_67[8] or in2_67 or in2_66_0) begin
	case (in2_67[8])
		1'B0 : in2_68_tmp_45 = in2_67 ;
		default : in2_68_tmp_45 = in2_66_0 ;
	endcase
end

assign in2_69_0 = {in2_68,in2[40]};

assign in2_69_1 = {in2_68,in2[40]};

wire [8:0] in2_70_tmp_46;
assign in2_70_tmp_46 = 
	+(in2_69_1[8:0]);
assign in2_70 = in2_70_tmp_46
	-(in1);

reg [23:0] in2_71_tmp_47;
assign in2_71 = in2_71_tmp_47;
always @ (in2_70[8] or in2_70 or in2_69_0) begin
	case (in2_70[8])
		1'B0 : in2_71_tmp_47 = in2_70 ;
		default : in2_71_tmp_47 = in2_69_0 ;
	endcase
end

assign in2_72_0 = {in2_71,in2[39]};

assign in2_72_1 = {in2_71,in2[39]};

wire [8:0] in2_73_tmp_48;
assign in2_73_tmp_48 = 
	+(in2_72_1[8:0]);
assign in2_73 = in2_73_tmp_48
	-(in1);

reg [24:0] in2_74_tmp_49;
assign in2_74 = in2_74_tmp_49;
always @ (in2_73[8] or in2_73 or in2_72_0) begin
	case (in2_73[8])
		1'B0 : in2_74_tmp_49 = in2_73 ;
		default : in2_74_tmp_49 = in2_72_0 ;
	endcase
end

assign in2_75_0 = {in2_74,in2[38]};

assign in2_75_1 = {in2_74,in2[38]};

wire [8:0] in2_76_tmp_50;
assign in2_76_tmp_50 = 
	+(in2_75_1[8:0]);
assign in2_76 = in2_76_tmp_50
	-(in1);

reg [25:0] in2_77_tmp_51;
assign in2_77 = in2_77_tmp_51;
always @ (in2_76[8] or in2_76 or in2_75_0) begin
	case (in2_76[8])
		1'B0 : in2_77_tmp_51 = in2_76 ;
		default : in2_77_tmp_51 = in2_75_0 ;
	endcase
end

assign in2_78_0 = {in2_77,in2[37]};

assign in2_78_1 = {in2_77,in2[37]};

wire [8:0] in2_79_tmp_52;
assign in2_79_tmp_52 = 
	+(in2_78_1[8:0]);
assign in2_79 = in2_79_tmp_52
	-(in1);

reg [26:0] in2_80_tmp_53;
assign in2_80 = in2_80_tmp_53;
always @ (in2_79[8] or in2_79 or in2_78_0) begin
	case (in2_79[8])
		1'B0 : in2_80_tmp_53 = in2_79 ;
		default : in2_80_tmp_53 = in2_78_0 ;
	endcase
end

assign in2_81_0 = {in2_80,in2[36]};

assign in2_81_1 = {in2_80,in2[36]};

wire [8:0] in2_82_tmp_54;
assign in2_82_tmp_54 = 
	+(in2_81_1[8:0]);
assign in2_82 = in2_82_tmp_54
	-(in1);

reg [27:0] in2_83_tmp_55;
assign in2_83 = in2_83_tmp_55;
always @ (in2_82[8] or in2_82 or in2_81_0) begin
	case (in2_82[8])
		1'B0 : in2_83_tmp_55 = in2_82 ;
		default : in2_83_tmp_55 = in2_81_0 ;
	endcase
end

assign in2_84_0 = {in2_83,in2[35]};

assign in2_84_1 = {in2_83,in2[35]};

wire [8:0] in2_85_tmp_56;
assign in2_85_tmp_56 = 
	+(in2_84_1[8:0]);
assign in2_85 = in2_85_tmp_56
	-(in1);

reg [28:0] in2_86_tmp_57;
assign in2_86 = in2_86_tmp_57;
always @ (in2_85[8] or in2_85 or in2_84_0) begin
	case (in2_85[8])
		1'B0 : in2_86_tmp_57 = in2_85 ;
		default : in2_86_tmp_57 = in2_84_0 ;
	endcase
end

assign in2_87_0 = {in2_86,in2[34]};

assign in2_87_1 = {in2_86,in2[34]};

wire [8:0] in2_88_tmp_58;
assign in2_88_tmp_58 = 
	+(in2_87_1[8:0]);
assign in2_88 = in2_88_tmp_58
	-(in1);

reg [29:0] in2_89_tmp_59;
assign in2_89 = in2_89_tmp_59;
always @ (in2_88[8] or in2_88 or in2_87_0) begin
	case (in2_88[8])
		1'B0 : in2_89_tmp_59 = in2_88 ;
		default : in2_89_tmp_59 = in2_87_0 ;
	endcase
end

assign in2_90_0 = {in2_89,in2[33]};

assign in2_90_1 = {in2_89,in2[33]};

wire [8:0] in2_91_tmp_60;
assign in2_91_tmp_60 = 
	+(in2_90_1[8:0]);
assign in2_91 = in2_91_tmp_60
	-(in1);

reg [30:0] in2_92_tmp_61;
assign in2_92 = in2_92_tmp_61;
always @ (in2_91[8] or in2_91 or in2_90_0) begin
	case (in2_91[8])
		1'B0 : in2_92_tmp_61 = in2_91 ;
		default : in2_92_tmp_61 = in2_90_0 ;
	endcase
end

assign in2_93_0 = {in2_92,in2[32]};

assign in2_93_1 = {in2_92,in2[32]};

wire [8:0] in2_94_tmp_62;
assign in2_94_tmp_62 = 
	+(in2_93_1[8:0]);
assign in2_94 = in2_94_tmp_62
	-(in1);

reg [31:0] in2_95_tmp_63;
assign in2_95 = in2_95_tmp_63;
always @ (in2_94[8] or in2_94 or in2_93_0) begin
	case (in2_94[8])
		1'B0 : in2_95_tmp_63 = in2_94 ;
		default : in2_95_tmp_63 = in2_93_0 ;
	endcase
end

assign in2_96_0 = {in2_95,in2[31]};

assign in2_96_1 = {in2_95,in2[31]};

wire [8:0] in2_97_tmp_64;
assign in2_97_tmp_64 = 
	+(in2_96_1[8:0]);
assign in2_97 = in2_97_tmp_64
	-(in1);

reg [32:0] in2_98_tmp_65;
assign in2_98 = in2_98_tmp_65;
always @ (in2_97[8] or in2_97 or in2_96_0) begin
	case (in2_97[8])
		1'B0 : in2_98_tmp_65 = in2_97 ;
		default : in2_98_tmp_65 = in2_96_0 ;
	endcase
end

assign in2_99_0 = {in2_98,in2[30]};

assign in2_99_1 = {in2_98,in2[30]};

wire [8:0] in2_100_tmp_66;
assign in2_100_tmp_66 = 
	+(in2_99_1[8:0]);
assign in2_100 = in2_100_tmp_66
	-(in1);

reg [33:0] in2_101_tmp_67;
assign in2_101 = in2_101_tmp_67;
always @ (in2_100[8] or in2_100 or in2_99_0) begin
	case (in2_100[8])
		1'B0 : in2_101_tmp_67 = in2_100 ;
		default : in2_101_tmp_67 = in2_99_0 ;
	endcase
end

assign in2_102_0 = {in2_101,in2[29]};

assign in2_102_1 = {in2_101,in2[29]};

wire [8:0] in2_103_tmp_68;
assign in2_103_tmp_68 = 
	+(in2_102_1[8:0]);
assign in2_103 = in2_103_tmp_68
	-(in1);

reg [34:0] in2_104_tmp_69;
assign in2_104 = in2_104_tmp_69;
always @ (in2_103[8] or in2_103 or in2_102_0) begin
	case (in2_103[8])
		1'B0 : in2_104_tmp_69 = in2_103 ;
		default : in2_104_tmp_69 = in2_102_0 ;
	endcase
end

assign in2_105_0 = {in2_104,in2[28]};

assign in2_105_1 = {in2_104,in2[28]};

wire [8:0] in2_106_tmp_70;
assign in2_106_tmp_70 = 
	+(in2_105_1[8:0]);
assign in2_106 = in2_106_tmp_70
	-(in1);

reg [35:0] in2_107_tmp_71;
assign in2_107 = in2_107_tmp_71;
always @ (in2_106[8] or in2_106 or in2_105_0) begin
	case (in2_106[8])
		1'B0 : in2_107_tmp_71 = in2_106 ;
		default : in2_107_tmp_71 = in2_105_0 ;
	endcase
end

assign in2_108_0 = {in2_107,in2[27]};

assign in2_108_1 = {in2_107,in2[27]};

wire [8:0] in2_109_tmp_72;
assign in2_109_tmp_72 = 
	+(in2_108_1[8:0]);
assign in2_109 = in2_109_tmp_72
	-(in1);

reg [36:0] in2_110_tmp_73;
assign in2_110 = in2_110_tmp_73;
always @ (in2_109[8] or in2_109 or in2_108_0) begin
	case (in2_109[8])
		1'B0 : in2_110_tmp_73 = in2_109 ;
		default : in2_110_tmp_73 = in2_108_0 ;
	endcase
end

assign in2_111_0 = {in2_110,in2[26]};

assign in2_111_1 = {in2_110,in2[26]};

wire [8:0] in2_112_tmp_74;
assign in2_112_tmp_74 = 
	+(in2_111_1[8:0]);
assign in2_112 = in2_112_tmp_74
	-(in1);

reg [37:0] in2_113_tmp_75;
assign in2_113 = in2_113_tmp_75;
always @ (in2_112[8] or in2_112 or in2_111_0) begin
	case (in2_112[8])
		1'B0 : in2_113_tmp_75 = in2_112 ;
		default : in2_113_tmp_75 = in2_111_0 ;
	endcase
end

assign in2_114_0 = {in2_113,in2[25]};

assign in2_114_1 = {in2_113,in2[25]};

wire [8:0] in2_115_tmp_76;
assign in2_115_tmp_76 = 
	+(in2_114_1[8:0]);
assign in2_115 = in2_115_tmp_76
	-(in1);

reg [38:0] in2_116_tmp_77;
assign in2_116 = in2_116_tmp_77;
always @ (in2_115[8] or in2_115 or in2_114_0) begin
	case (in2_115[8])
		1'B0 : in2_116_tmp_77 = in2_115 ;
		default : in2_116_tmp_77 = in2_114_0 ;
	endcase
end

assign in2_117_0 = {in2_116,in2[24]};

assign in2_117_1 = {in2_116,in2[24]};

wire [8:0] in2_118_tmp_78;
assign in2_118_tmp_78 = 
	+(in2_117_1[8:0]);
assign in2_118 = in2_118_tmp_78
	-(in1);

reg [39:0] in2_119_tmp_79;
assign in2_119 = in2_119_tmp_79;
always @ (in2_118[8] or in2_118 or in2_117_0) begin
	case (in2_118[8])
		1'B0 : in2_119_tmp_79 = in2_118 ;
		default : in2_119_tmp_79 = in2_117_0 ;
	endcase
end

assign in2_120_0 = {in2_119,in2[23]};

assign in2_120_1 = {in2_119,in2[23]};

wire [8:0] in2_121_tmp_80;
assign in2_121_tmp_80 = 
	+(in2_120_1[8:0]);
assign in2_121 = in2_121_tmp_80
	-(in1);

reg [40:0] in2_122_tmp_81;
assign in2_122 = in2_122_tmp_81;
always @ (in2_121[8] or in2_121 or in2_120_0) begin
	case (in2_121[8])
		1'B0 : in2_122_tmp_81 = in2_121 ;
		default : in2_122_tmp_81 = in2_120_0 ;
	endcase
end

assign in2_123_0 = {in2_122,in2[22]};

assign in2_123_1 = {in2_122,in2[22]};

wire [8:0] in2_124_tmp_82;
assign in2_124_tmp_82 = 
	+(in2_123_1[8:0]);
assign in2_124 = in2_124_tmp_82
	-(in1);

reg [41:0] in2_125_tmp_83;
assign in2_125 = in2_125_tmp_83;
always @ (in2_124[8] or in2_124 or in2_123_0) begin
	case (in2_124[8])
		1'B0 : in2_125_tmp_83 = in2_124 ;
		default : in2_125_tmp_83 = in2_123_0 ;
	endcase
end

assign in2_126_0 = {in2_125,in2[21]};

assign in2_126_1 = {in2_125,in2[21]};

wire [8:0] in2_127_tmp_84;
assign in2_127_tmp_84 = 
	+(in2_126_1[8:0]);
assign in2_127 = in2_127_tmp_84
	-(in1);

reg [42:0] in2_128_tmp_85;
assign in2_128 = in2_128_tmp_85;
always @ (in2_127[8] or in2_127 or in2_126_0) begin
	case (in2_127[8])
		1'B0 : in2_128_tmp_85 = in2_127 ;
		default : in2_128_tmp_85 = in2_126_0 ;
	endcase
end

assign in2_129_0 = {in2_128,in2[20]};

assign in2_129_1 = {in2_128,in2[20]};

wire [8:0] in2_130_tmp_86;
assign in2_130_tmp_86 = 
	+(in2_129_1[8:0]);
assign in2_130 = in2_130_tmp_86
	-(in1);

reg [43:0] in2_131_tmp_87;
assign in2_131 = in2_131_tmp_87;
always @ (in2_130[8] or in2_130 or in2_129_0) begin
	case (in2_130[8])
		1'B0 : in2_131_tmp_87 = in2_130 ;
		default : in2_131_tmp_87 = in2_129_0 ;
	endcase
end

assign in2_132_0 = {in2_131,in2[19]};

assign in2_132_1 = {in2_131,in2[19]};

wire [8:0] in2_133_tmp_88;
assign in2_133_tmp_88 = 
	+(in2_132_1[8:0]);
assign in2_133 = in2_133_tmp_88
	-(in1);

reg [44:0] in2_134_tmp_89;
assign in2_134 = in2_134_tmp_89;
always @ (in2_133[8] or in2_133 or in2_132_0) begin
	case (in2_133[8])
		1'B0 : in2_134_tmp_89 = in2_133 ;
		default : in2_134_tmp_89 = in2_132_0 ;
	endcase
end

assign in2_135_0 = {in2_134,in2[18]};

assign in2_135_1 = {in2_134,in2[18]};

wire [8:0] in2_136_tmp_90;
assign in2_136_tmp_90 = 
	+(in2_135_1[8:0]);
assign in2_136 = in2_136_tmp_90
	-(in1);

reg [45:0] in2_137_tmp_91;
assign in2_137 = in2_137_tmp_91;
always @ (in2_136[8] or in2_136 or in2_135_0) begin
	case (in2_136[8])
		1'B0 : in2_137_tmp_91 = in2_136 ;
		default : in2_137_tmp_91 = in2_135_0 ;
	endcase
end

assign in2_138_0 = {in2_137,in2[17]};

assign in2_138_1 = {in2_137,in2[17]};

wire [8:0] in2_139_tmp_92;
assign in2_139_tmp_92 = 
	+(in2_138_1[8:0]);
assign in2_139 = in2_139_tmp_92
	-(in1);

reg [46:0] in2_140_tmp_93;
assign in2_140 = in2_140_tmp_93;
always @ (in2_139[8] or in2_139 or in2_138_0) begin
	case (in2_139[8])
		1'B0 : in2_140_tmp_93 = in2_139 ;
		default : in2_140_tmp_93 = in2_138_0 ;
	endcase
end

assign in2_141_0 = {in2_140,in2[16]};

assign in2_141_1 = {in2_140,in2[16]};

wire [8:0] in2_142_tmp_94;
assign in2_142_tmp_94 = 
	+(in2_141_1[8:0]);
assign in2_142 = in2_142_tmp_94
	-(in1);

reg [47:0] in2_143_tmp_95;
assign in2_143 = in2_143_tmp_95;
always @ (in2_142[8] or in2_142 or in2_141_0) begin
	case (in2_142[8])
		1'B0 : in2_143_tmp_95 = in2_142 ;
		default : in2_143_tmp_95 = in2_141_0 ;
	endcase
end

assign in2_144_0 = {in2_143,in2[15]};

assign in2_144_1 = {in2_143,in2[15]};

wire [8:0] in2_145_tmp_96;
assign in2_145_tmp_96 = 
	+(in2_144_1[8:0]);
assign in2_145 = in2_145_tmp_96
	-(in1);

assign asc001_0[15] = ~in2_145[8];

reg [48:0] in2_146_tmp_97;
assign in2_146 = in2_146_tmp_97;
always @ (in2_145[8] or in2_145 or in2_144_0) begin
	case (in2_145[8])
		1'B0 : in2_146_tmp_97 = in2_145 ;
		default : in2_146_tmp_97 = in2_144_0 ;
	endcase
end

assign in2_147_0 = {in2_146,in2[14]};

assign in2_147_1 = {in2_146,in2[14]};

wire [8:0] in2_148_tmp_98;
assign in2_148_tmp_98 = 
	+(in2_147_1[8:0]);
assign in2_148 = in2_148_tmp_98
	-(in1);

assign asc001_0[14] = ~in2_148[8];

reg [49:0] in2_149_tmp_99;
assign in2_149 = in2_149_tmp_99;
always @ (in2_148[8] or in2_148 or in2_147_0) begin
	case (in2_148[8])
		1'B0 : in2_149_tmp_99 = in2_148 ;
		default : in2_149_tmp_99 = in2_147_0 ;
	endcase
end

assign in2_150_0 = {in2_149,in2[13]};

assign in2_150_1 = {in2_149,in2[13]};

wire [8:0] in2_151_tmp_100;
assign in2_151_tmp_100 = 
	+(in2_150_1[8:0]);
assign in2_151 = in2_151_tmp_100
	-(in1);

assign asc001_0[13] = ~in2_151[8];

reg [50:0] in2_152_tmp_101;
assign in2_152 = in2_152_tmp_101;
always @ (in2_151[8] or in2_151 or in2_150_0) begin
	case (in2_151[8])
		1'B0 : in2_152_tmp_101 = in2_151 ;
		default : in2_152_tmp_101 = in2_150_0 ;
	endcase
end

assign in2_153_0 = {in2_152,in2[12]};

assign in2_153_1 = {in2_152,in2[12]};

wire [8:0] in2_154_tmp_102;
assign in2_154_tmp_102 = 
	+(in2_153_1[8:0]);
assign in2_154 = in2_154_tmp_102
	-(in1);

assign asc001_0[12] = ~in2_154[8];

reg [51:0] in2_155_tmp_103;
assign in2_155 = in2_155_tmp_103;
always @ (in2_154[8] or in2_154 or in2_153_0) begin
	case (in2_154[8])
		1'B0 : in2_155_tmp_103 = in2_154 ;
		default : in2_155_tmp_103 = in2_153_0 ;
	endcase
end

assign in2_156_0 = {in2_155,in2[11]};

assign in2_156_1 = {in2_155,in2[11]};

wire [8:0] in2_157_tmp_104;
assign in2_157_tmp_104 = 
	+(in2_156_1[8:0]);
assign in2_157 = in2_157_tmp_104
	-(in1);

assign asc001_0[11] = ~in2_157[8];

reg [52:0] in2_158_tmp_105;
assign in2_158 = in2_158_tmp_105;
always @ (in2_157[8] or in2_157 or in2_156_0) begin
	case (in2_157[8])
		1'B0 : in2_158_tmp_105 = in2_157 ;
		default : in2_158_tmp_105 = in2_156_0 ;
	endcase
end

assign in2_159_0 = {in2_158,in2[10]};

assign in2_159_1 = {in2_158,in2[10]};

wire [8:0] in2_160_tmp_106;
assign in2_160_tmp_106 = 
	+(in2_159_1[8:0]);
assign in2_160 = in2_160_tmp_106
	-(in1);

assign asc001_0[10] = ~in2_160[8];

reg [53:0] in2_161_tmp_107;
assign in2_161 = in2_161_tmp_107;
always @ (in2_160[8] or in2_160 or in2_159_0) begin
	case (in2_160[8])
		1'B0 : in2_161_tmp_107 = in2_160 ;
		default : in2_161_tmp_107 = in2_159_0 ;
	endcase
end

assign in2_162_0 = {in2_161,in2[9]};

assign in2_162_1 = {in2_161,in2[9]};

wire [8:0] in2_163_tmp_108;
assign in2_163_tmp_108 = 
	+(in2_162_1[8:0]);
assign in2_163 = in2_163_tmp_108
	-(in1);

assign asc001_0[9] = ~in2_163[8];

reg [54:0] in2_164_tmp_109;
assign in2_164 = in2_164_tmp_109;
always @ (in2_163[8] or in2_163 or in2_162_0) begin
	case (in2_163[8])
		1'B0 : in2_164_tmp_109 = in2_163 ;
		default : in2_164_tmp_109 = in2_162_0 ;
	endcase
end

assign in2_165_0 = {in2_164,in2[8]};

assign in2_165_1 = {in2_164,in2[8]};

wire [8:0] in2_166_tmp_110;
assign in2_166_tmp_110 = 
	+(in2_165_1[8:0]);
assign in2_166 = in2_166_tmp_110
	-(in1);

assign asc001_0[8] = ~in2_166[8];

reg [55:0] in2_167_tmp_111;
assign in2_167 = in2_167_tmp_111;
always @ (in2_166[8] or in2_166 or in2_165_0) begin
	case (in2_166[8])
		1'B0 : in2_167_tmp_111 = in2_166 ;
		default : in2_167_tmp_111 = in2_165_0 ;
	endcase
end

assign in2_168_0 = {in2_167,in2[7]};

assign in2_168_1 = {in2_167,in2[7]};

wire [8:0] in2_169_tmp_112;
assign in2_169_tmp_112 = 
	+(in2_168_1[8:0]);
assign in2_169 = in2_169_tmp_112
	-(in1);

assign asc001_0[7] = ~in2_169[8];

reg [56:0] in2_170_tmp_113;
assign in2_170 = in2_170_tmp_113;
always @ (in2_169[8] or in2_169 or in2_168_0) begin
	case (in2_169[8])
		1'B0 : in2_170_tmp_113 = in2_169 ;
		default : in2_170_tmp_113 = in2_168_0 ;
	endcase
end

assign in2_171_0 = {in2_170,in2[6]};

assign in2_171_1 = {in2_170,in2[6]};

wire [8:0] in2_172_tmp_114;
assign in2_172_tmp_114 = 
	+(in2_171_1[8:0]);
assign in2_172 = in2_172_tmp_114
	-(in1);

assign asc001_0[6] = ~in2_172[8];

reg [57:0] in2_173_tmp_115;
assign in2_173 = in2_173_tmp_115;
always @ (in2_172[8] or in2_172 or in2_171_0) begin
	case (in2_172[8])
		1'B0 : in2_173_tmp_115 = in2_172 ;
		default : in2_173_tmp_115 = in2_171_0 ;
	endcase
end

assign in2_174_0 = {in2_173,in2[5]};

assign in2_174_1 = {in2_173,in2[5]};

wire [8:0] in2_175_tmp_116;
assign in2_175_tmp_116 = 
	+(in2_174_1[8:0]);
assign in2_175 = in2_175_tmp_116
	-(in1);

assign asc001_0[5] = ~in2_175[8];

reg [58:0] in2_176_tmp_117;
assign in2_176 = in2_176_tmp_117;
always @ (in2_175[8] or in2_175 or in2_174_0) begin
	case (in2_175[8])
		1'B0 : in2_176_tmp_117 = in2_175 ;
		default : in2_176_tmp_117 = in2_174_0 ;
	endcase
end

assign in2_177_0 = {in2_176,in2[4]};

assign in2_177_1 = {in2_176,in2[4]};

wire [8:0] in2_178_tmp_118;
assign in2_178_tmp_118 = 
	+(in2_177_1[8:0]);
assign in2_178 = in2_178_tmp_118
	-(in1);

assign asc001_0[4] = ~in2_178[8];

reg [59:0] in2_179_tmp_119;
assign in2_179 = in2_179_tmp_119;
always @ (in2_178[8] or in2_178 or in2_177_0) begin
	case (in2_178[8])
		1'B0 : in2_179_tmp_119 = in2_178 ;
		default : in2_179_tmp_119 = in2_177_0 ;
	endcase
end

assign in2_180_0 = {in2_179,in2[3]};

assign in2_180_1 = {in2_179,in2[3]};

wire [8:0] in2_181_tmp_120;
assign in2_181_tmp_120 = 
	+(in2_180_1[8:0]);
assign in2_181 = in2_181_tmp_120
	-(in1);

assign asc001_0[3] = ~in2_181[8];

reg [60:0] in2_182_tmp_121;
assign in2_182 = in2_182_tmp_121;
always @ (in2_181[8] or in2_181 or in2_180_0) begin
	case (in2_181[8])
		1'B0 : in2_182_tmp_121 = in2_181 ;
		default : in2_182_tmp_121 = in2_180_0 ;
	endcase
end

assign in2_183_0 = {in2_182,in2[2]};

assign in2_183_1 = {in2_182,in2[2]};

wire [8:0] in2_184_tmp_122;
assign in2_184_tmp_122 = 
	+(in2_183_1[8:0]);
assign in2_184 = in2_184_tmp_122
	-(in1);

assign asc001_0[2] = ~in2_184[8];

reg [61:0] in2_185_tmp_123;
assign in2_185 = in2_185_tmp_123;
always @ (in2_184[8] or in2_184 or in2_183_0) begin
	case (in2_184[8])
		1'B0 : in2_185_tmp_123 = in2_184 ;
		default : in2_185_tmp_123 = in2_183_0 ;
	endcase
end

assign in2_186_0 = {in2_185,in2[1]};

assign in2_186_1 = {in2_185,in2[1]};

wire [8:0] in2_187_tmp_124;
assign in2_187_tmp_124 = 
	+(in2_186_1[8:0]);
assign in2_187 = in2_187_tmp_124
	-(in1);

assign asc001_0[1] = ~in2_187[8];

reg [62:0] in2_188_tmp_125;
assign in2_188 = in2_188_tmp_125;
always @ (in2_187[8] or in2_187 or in2_186_0) begin
	case (in2_187[8])
		1'B0 : in2_188_tmp_125 = in2_187 ;
		default : in2_188_tmp_125 = in2_186_0 ;
	endcase
end

assign in2_189 = {in2_188,in2[0]};

wire [8:0] in2_190_tmp_126;
assign in2_190_tmp_126 = 
	+(in2_189[8:0]);
assign in2_190 = in2_190_tmp_126
	-(in1);

assign asc001_0[0] = ~in2_190[8];

assign out1 = asc001_0;
endmodule

/* CADENCE  uLL5QgDdrA== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/


