/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 22:40:33 KST (+0900), Thursday 31 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fp_add_cynw_cm_float_add2_ieee_E8_M23_0_1 (
	a_sign,
	a_exp,
	a_man,
	b_sign,
	b_exp,
	b_man,
	rm,
	x
	); /* architecture "behavioural" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input  b_sign;
input [7:0] b_exp;
input [22:0] b_man;
input [2:0] rm;
output [31:0] x;
wire [31:0] inst_cellmath__3;
wire  inst_cellmath__4,
	inst_cellmath__5,
	inst_cellmath__6,
	inst_cellmath__7,
	inst_cellmath__8,
	inst_cellmath__9,
	inst_cellmath__10,
	inst_cellmath__11,
	inst_cellmath__12,
	inst_cellmath__13,
	inst_cellmath__14,
	inst_cellmath__15,
	inst_cellmath__16,
	inst_cellmath__17,
	inst_cellmath__18,
	inst_cellmath__21;
wire [24:0] inst_cellmath__25,
	inst_cellmath__26;
wire [8:0] inst_cellmath__27,
	inst_cellmath__28;
wire [7:0] inst_cellmath__29;
wire  inst_cellmath__30,
	inst_cellmath__31,
	inst_cellmath__32;
wire [49:0] inst_cellmath__33;
wire  inst_cellmath__34;
wire [7:0] inst_cellmath__35;
wire [49:0] inst_cellmath__36,
	inst_cellmath__37;
wire [25:0] inst_cellmath__39;
wire  inst_cellmath__42,
	inst_cellmath__43,
	inst_cellmath__44;
wire [26:0] inst_cellmath__45;
wire  inst_cellmath__48;
wire [5:0] inst_cellmath__49;
wire [24:0] inst_cellmath__50;
wire  inst_cellmath__53,
	inst_cellmath__54,
	inst_cellmath__55;
wire [23:0] inst_cellmath__57;
wire [9:0] inst_cellmath__59;
wire  inst_cellmath__62,
	inst_cellmath__63;
wire [22:0] inst_cellmath__64;
wire  inst_cellmath__66,
	inst_cellmath__67;
wire [7:0] inst_cellmath__68;
wire  inst_cellmath__70,
	inst_cellmath__71;
wire [7:0] inst_cellmath__72;
wire [22:0] inst_cellmath__73;
wire [0:0] inst_cellmath__24__5;
wire [7:0] inst_cellmath__27__7;
wire [8:0] inst_cellmath__27__6;
wire [9:0] inst_cellmath__28__8;
wire [0:0] inst_cellmath__29__12,
	inst_cellmath__32__14;
wire [22:0] inst_cellmath__36__15;
wire [0:0] inst_cellmath__33__18;
wire [24:0] inst_cellmath__39__19;
wire [0:0] inst_cellmath__42__22,
	inst_cellmath__43__26,
	inst_cellmath__43__25,
	inst_cellmath__43__28,
	inst_cellmath__43__27,
	inst_cellmath__43__24,
	inst_cellmath__54__33,
	inst_cellmath__55__37,
	inst_cellmath__55__36,
	inst_cellmath__55__38,
	inst_cellmath__55__39,
	inst_cellmath__55__35,
	inst_cellmath__55__34,
	inst_cellmath__55__41,
	inst_cellmath__55__40,
	inst_cellmath__60__44,
	inst_cellmath__62__46,
	inst_cellmath__62__45,
	inst_cellmath__66__58,
	inst_cellmath__66__59,
	inst_cellmath__66__56,
	inst_cellmath__67__65,
	inst_cellmath__67__66,
	inst_cellmath__67__67,
	inst_cellmath__68__0,
	inst_cellmath__68__69,
	inst_cellmath__68__68,
	inst_cellmath__70__74,
	inst_cellmath__70__73;
wire [24:0] inst_cellmath__40_0,
	inst_cellmath__40_0_0;
wire [1:0] inst_cellmath__13_0;
wire [2:0] inst_cellmath__63_0;
wire [1:0] inst_cellmath__71_0;
wire [22:0] inst_cellmath__64__48_0,
	inst_cellmath__64__48_1,
	inst_cellmath__64__48_2;

assign inst_cellmath__26[23:0] = {b_man,1'B0};

assign inst_cellmath__21 = 
	(a_sign)
	^(b_sign);

assign inst_cellmath__9 = 
	(a_exp[0])
	&(a_exp[1])
	&(a_exp[2])
	&(a_exp[3])
	&(a_exp[4])
	&(a_exp[5])
	&(a_exp[6])
	&(a_exp[7]);

assign inst_cellmath__10 = ~(
	(a_man[0])
	|(a_man[1])
	|(a_man[2])
	|(a_man[3])
	|(a_man[4])
	|(a_man[5])
	|(a_man[6])
	|(a_man[7])
	|(a_man[8])
	|(a_man[9])
	|(a_man[10])
	|(a_man[11])
	|(a_man[12])
	|(a_man[13])
	|(a_man[14])
	|(a_man[15])
	|(a_man[16])
	|(a_man[17])
	|(a_man[18])
	|(a_man[19])
	|(a_man[20])
	|(a_man[21])
	|(a_man[22]));

assign inst_cellmath__12 = 
	(inst_cellmath__9)
	&(inst_cellmath__10);

assign inst_cellmath__14 = 
	(b_exp[0])
	&(b_exp[1])
	&(b_exp[2])
	&(b_exp[3])
	&(b_exp[4])
	&(b_exp[5])
	&(b_exp[6])
	&(b_exp[7]);

assign inst_cellmath__15 = ~(
	(b_man[0])
	|(b_man[1])
	|(b_man[2])
	|(b_man[3])
	|(b_man[4])
	|(b_man[5])
	|(b_man[6])
	|(b_man[7])
	|(b_man[8])
	|(b_man[9])
	|(b_man[10])
	|(b_man[11])
	|(b_man[12])
	|(b_man[13])
	|(b_man[14])
	|(b_man[15])
	|(b_man[16])
	|(b_man[17])
	|(b_man[18])
	|(b_man[19])
	|(b_man[20])
	|(b_man[21])
	|(b_man[22]));

assign inst_cellmath__17 = 
	(inst_cellmath__14)
	&(inst_cellmath__15);

assign inst_cellmath__24__5 = 
	(inst_cellmath__21)
	&(inst_cellmath__12)
	&(inst_cellmath__17);

assign inst_cellmath__13 = 
	(inst_cellmath__9)
	&((~inst_cellmath__10));

assign inst_cellmath__18 = 
	(inst_cellmath__14)
	&((~inst_cellmath__15));

assign inst_cellmath__63 = 
	(inst_cellmath__24__5)
	|(inst_cellmath__13)
	|(inst_cellmath__18);

assign inst_cellmath__11 = ~(
	(a_exp[0])
	|(a_exp[1])
	|(a_exp[2])
	|(a_exp[3])
	|(a_exp[4])
	|(a_exp[5])
	|(a_exp[6])
	|(a_exp[7]));

assign inst_cellmath__16 = ~(
	(b_exp[0])
	|(b_exp[1])
	|(b_exp[2])
	|(b_exp[3])
	|(b_exp[4])
	|(b_exp[5])
	|(b_exp[6])
	|(b_exp[7]));

assign inst_cellmath__67__67 = 
	(inst_cellmath__11)
	&(inst_cellmath__16);

assign inst_cellmath__6 = (7'B0000001==(rm - 7'B0000001));

assign inst_cellmath__63_0 = {inst_cellmath__63,inst_cellmath__67__67,inst_cellmath__6};

assign inst_cellmath__27__7 = ~b_exp;

assign inst_cellmath__27__6 = {1'B1,inst_cellmath__27__7};

assign inst_cellmath__28__8[8:0] = a_exp + inst_cellmath__27__6;
assign inst_cellmath__27 = a_exp + inst_cellmath__27__6 + 9'B000000001;

assign inst_cellmath__28[8] = ~inst_cellmath__28__8[8];

assign inst_cellmath__34 = ((28'B1000000000000000000000000000 ^ b_man)>(28'B1000000000000000000000000000 ^ a_man));

assign inst_cellmath__32__14 = 
	((~inst_cellmath__28[8]))
	&(inst_cellmath__34);

assign inst_cellmath__32 = 
	(inst_cellmath__27[8])
	|(inst_cellmath__32__14);

reg [0:0] inst_cellmath__48_tmp_0;
assign inst_cellmath__48 = inst_cellmath__48_tmp_0;
always @ (inst_cellmath__32 or a_sign or b_sign) begin
	case (inst_cellmath__32)
		1'B0 : inst_cellmath__48_tmp_0 = a_sign ;
		default : inst_cellmath__48_tmp_0 = b_sign ;
	endcase
end

reg [7:0] inst_cellmath__35_tmp_1;
assign inst_cellmath__35 = inst_cellmath__35_tmp_1;
always @ (inst_cellmath__27[8] or inst_cellmath__27[7:0] or inst_cellmath__28__8[7:0]) begin
	case (inst_cellmath__27[8])
		1'B0 : inst_cellmath__35_tmp_1 = inst_cellmath__27[7:0] ;
		default : inst_cellmath__35_tmp_1 = ~inst_cellmath__28__8[7:0] ;
	endcase
end

assign inst_cellmath__30 = ((12'B100000000000 ^ inst_cellmath__35)>=(12'B100000000000 ^ 12'B000000011010));

assign inst_cellmath__31 = 
	(inst_cellmath__11)
	|(inst_cellmath__16);

assign inst_cellmath__33__18 = 
	(inst_cellmath__30)
	|(inst_cellmath__31);

reg [22:0] inst_cellmath__36__15_tmp_2;
assign inst_cellmath__36__15 = inst_cellmath__36__15_tmp_2;
always @ (inst_cellmath__32 or b_man or a_man) begin
	case (inst_cellmath__32)
		1'B0 : inst_cellmath__36__15_tmp_2 = b_man ;
		default : inst_cellmath__36__15_tmp_2 = a_man ;
	endcase
end

assign inst_cellmath__36 = {1'B1,inst_cellmath__36__15,26'B00000000000000000000000000};

assign inst_cellmath__37 = inst_cellmath__36 >> inst_cellmath__35[4:0];

reg [25:0] inst_cellmath__33_49_24_;
assign inst_cellmath__33[49:24] = inst_cellmath__33_49_24_;
always @ (inst_cellmath__33__18 or inst_cellmath__37[49:24]) begin
	case (inst_cellmath__33__18)
		1'B0 : inst_cellmath__33_49_24_ = inst_cellmath__37[49:24] ;
		default : inst_cellmath__33_49_24_ = {26{1'b0}} ;
	endcase
end

assign inst_cellmath__42__22 = 
	(inst_cellmath__30)
	|(inst_cellmath__37[0])
	|(inst_cellmath__37[1])
	|(inst_cellmath__37[2])
	|(inst_cellmath__37[3])
	|(inst_cellmath__37[4])
	|(inst_cellmath__37[5])
	|(inst_cellmath__37[6])
	|(inst_cellmath__37[7])
	|(inst_cellmath__37[8])
	|(inst_cellmath__37[9])
	|(inst_cellmath__37[10])
	|(inst_cellmath__37[11])
	|(inst_cellmath__37[12])
	|(inst_cellmath__37[13])
	|(inst_cellmath__37[14])
	|(inst_cellmath__37[15])
	|(inst_cellmath__37[16])
	|(inst_cellmath__37[17])
	|(inst_cellmath__37[18])
	|(inst_cellmath__37[19])
	|(inst_cellmath__37[20])
	|(inst_cellmath__37[21])
	|(inst_cellmath__37[22])
	|(inst_cellmath__37[23]);

assign inst_cellmath__42 = 
	(inst_cellmath__42__22)
	&((~inst_cellmath__31));

assign inst_cellmath__44 = 
	(inst_cellmath__21)
	&((~inst_cellmath__33[24]))
	&((~inst_cellmath__42));

assign inst_cellmath__25[23:0] = {a_man,1'B0};

reg [23:0] inst_cellmath__40_0_0_23_0_;
assign inst_cellmath__40_0_0[23:0] = inst_cellmath__40_0_0_23_0_;
always @ (inst_cellmath__32 or inst_cellmath__25[23:0] or inst_cellmath__26[23:0]) begin
	case (inst_cellmath__32)
		1'B0 : inst_cellmath__40_0_0_23_0_ = inst_cellmath__25[23:0] ;
		default : inst_cellmath__40_0_0_23_0_ = inst_cellmath__26[23:0] ;
	endcase
end

assign inst_cellmath__40_0 = {1'B1,inst_cellmath__40_0_0[23:1],1'B0};

reg [24:0] inst_cellmath__39__19_tmp_3;
assign inst_cellmath__39__19 = inst_cellmath__39__19_tmp_3;
always @ (inst_cellmath__21 or inst_cellmath__33[49:25]) begin
	case (inst_cellmath__21)
		1'B0 : inst_cellmath__39__19_tmp_3 = inst_cellmath__33[49:25] ;
		default : inst_cellmath__39__19_tmp_3 = ~inst_cellmath__33[49:25] ;
	endcase
end

assign inst_cellmath__39 = {inst_cellmath__21,inst_cellmath__39__19};

wire [25:0] inst_cellmath__45_tmp_4;
assign inst_cellmath__45_tmp_4 = 
	+(inst_cellmath__44)
	+((inst_cellmath__40_0[24:1]<<1));
assign inst_cellmath__45[25:0] = inst_cellmath__45_tmp_4
	+(inst_cellmath__39);

reg [5:0] inst_cellmath__49_tmp_5;
assign inst_cellmath__49 = inst_cellmath__49_tmp_5;
always @ (inst_cellmath__45[25:0]) begin
	casez (inst_cellmath__45[25:0])
		26'B1????????????????????????? : inst_cellmath__49_tmp_5 = 6'B000000 ;
		26'B01???????????????????????? : inst_cellmath__49_tmp_5 = 6'B000001 ;
		26'B001??????????????????????? : inst_cellmath__49_tmp_5 = 6'B000010 ;
		26'B0001?????????????????????? : inst_cellmath__49_tmp_5 = 6'B000011 ;
		26'B00001????????????????????? : inst_cellmath__49_tmp_5 = 6'B000100 ;
		26'B000001???????????????????? : inst_cellmath__49_tmp_5 = 6'B000101 ;
		26'B0000001??????????????????? : inst_cellmath__49_tmp_5 = 6'B000110 ;
		26'B00000001?????????????????? : inst_cellmath__49_tmp_5 = 6'B000111 ;
		26'B000000001????????????????? : inst_cellmath__49_tmp_5 = 6'B001000 ;
		26'B0000000001???????????????? : inst_cellmath__49_tmp_5 = 6'B001001 ;
		26'B00000000001??????????????? : inst_cellmath__49_tmp_5 = 6'B001010 ;
		26'B000000000001?????????????? : inst_cellmath__49_tmp_5 = 6'B001011 ;
		26'B0000000000001????????????? : inst_cellmath__49_tmp_5 = 6'B001100 ;
		26'B00000000000001???????????? : inst_cellmath__49_tmp_5 = 6'B001101 ;
		26'B000000000000001??????????? : inst_cellmath__49_tmp_5 = 6'B001110 ;
		26'B0000000000000001?????????? : inst_cellmath__49_tmp_5 = 6'B001111 ;
		26'B00000000000000001????????? : inst_cellmath__49_tmp_5 = 6'B010000 ;
		26'B000000000000000001???????? : inst_cellmath__49_tmp_5 = 6'B010001 ;
		26'B0000000000000000001??????? : inst_cellmath__49_tmp_5 = 6'B010010 ;
		26'B00000000000000000001?????? : inst_cellmath__49_tmp_5 = 6'B010011 ;
		26'B000000000000000000001????? : inst_cellmath__49_tmp_5 = 6'B010100 ;
		26'B0000000000000000000001???? : inst_cellmath__49_tmp_5 = 6'B010101 ;
		26'B00000000000000000000001??? : inst_cellmath__49_tmp_5 = 6'B010110 ;
		26'B000000000000000000000001?? : inst_cellmath__49_tmp_5 = 6'B010111 ;
		26'B0000000000000000000000001? : inst_cellmath__49_tmp_5 = 6'B011000 ;
		26'B00000000000000000000000001 : inst_cellmath__49_tmp_5 = 6'B011001 ;
		default : inst_cellmath__49_tmp_5 = 6'B100000 ;
	endcase
end

assign inst_cellmath__67__66 = 
	(inst_cellmath__48)
	&((~inst_cellmath__49[5]));

assign inst_cellmath__67__65 = 
	(inst_cellmath__48)
	|(inst_cellmath__49[5]);

assign inst_cellmath__66__59 = 
	(a_sign)
	&(b_sign);

assign inst_cellmath__66__58 = 
	(a_sign)
	|(b_sign);

reg [0:0] inst_cellmath__66__56_tmp_6;
assign inst_cellmath__66__56 = inst_cellmath__66__56_tmp_6;
always @ (inst_cellmath__6 or inst_cellmath__66__59 or inst_cellmath__66__58) begin
	case (inst_cellmath__6)
		1'B0 : inst_cellmath__66__56_tmp_6 = inst_cellmath__66__59 ;
		default : inst_cellmath__66__56_tmp_6 = inst_cellmath__66__58 ;
	endcase
end

assign inst_cellmath__66 = 
	(inst_cellmath__66__56)
	&(inst_cellmath__11)
	&(inst_cellmath__16);

assign inst_cellmath__13_0 = {inst_cellmath__13,inst_cellmath__18};

assign inst_cellmath__64__48_1 = {b_man[21:0],b_sign};

assign inst_cellmath__64__48_2 = {a_man[21:0],a_sign};

reg [22:0] inst_cellmath__64__48_0_tmp_7;
assign inst_cellmath__64__48_0 = inst_cellmath__64__48_0_tmp_7;
always @ (inst_cellmath__13_0 or inst_cellmath__64__48_1 or inst_cellmath__64__48_2) begin
	casez (inst_cellmath__13_0)
		2'B01 : inst_cellmath__64__48_0_tmp_7 = inst_cellmath__64__48_1 ;
		2'B1? : inst_cellmath__64__48_0_tmp_7 = inst_cellmath__64__48_2 ;
		default : inst_cellmath__64__48_0_tmp_7 = 23'B00000000000000000000001 ;
	endcase
end

reg [0:0] inst_cellmath__67_tmp_8;
assign inst_cellmath__67 = inst_cellmath__67_tmp_8;
always @ (inst_cellmath__63_0 or inst_cellmath__67__66 or inst_cellmath__67__65 or inst_cellmath__66 or inst_cellmath__64__48_0[0]) begin
	casez (inst_cellmath__63_0)
		3'B000 : inst_cellmath__67_tmp_8 = inst_cellmath__67__66 ;
		3'B001 : inst_cellmath__67_tmp_8 = inst_cellmath__67__65 ;
		3'B01? : inst_cellmath__67_tmp_8 = inst_cellmath__66 ;
		default : inst_cellmath__67_tmp_8 = inst_cellmath__64__48_0[0] ;
	endcase
end

assign inst_cellmath__50 = inst_cellmath__45[24:0] << inst_cellmath__49[4:0];

assign inst_cellmath__43__26 = 
	(inst_cellmath__33[24])
	^(inst_cellmath__42);

assign inst_cellmath__43__25 = 
	((~inst_cellmath__30))
	&(inst_cellmath__43__26);

assign inst_cellmath__43__28 = 
	(inst_cellmath__33[24])
	|(inst_cellmath__42);

assign inst_cellmath__43__27 = 
	(inst_cellmath__30)
	&(inst_cellmath__43__28);

assign inst_cellmath__43__24 = 
	(inst_cellmath__43__25)
	|(inst_cellmath__43__27);

reg [0:0] inst_cellmath__43_tmp_9;
assign inst_cellmath__43 = inst_cellmath__43_tmp_9;
always @ (inst_cellmath__21 or inst_cellmath__33[24] or inst_cellmath__43__24) begin
	case (inst_cellmath__21)
		1'B0 : inst_cellmath__43_tmp_9 = inst_cellmath__33[24] ;
		default : inst_cellmath__43_tmp_9 = inst_cellmath__43__24 ;
	endcase
end

reg [0:0] inst_cellmath__53_tmp_10;
assign inst_cellmath__53 = inst_cellmath__53_tmp_10;
always @ (inst_cellmath__49[1] or inst_cellmath__50[1] or inst_cellmath__43) begin
	case (inst_cellmath__49[1])
		1'B0 : inst_cellmath__53_tmp_10 = inst_cellmath__50[1] ;
		default : inst_cellmath__53_tmp_10 = inst_cellmath__43 ;
	endcase
end

assign inst_cellmath__5 = (6'B000000==(rm - 6'B000001));

assign inst_cellmath__55__39 = 
	(inst_cellmath__5)
	&((~inst_cellmath__48));

assign inst_cellmath__55__38 = 
	(inst_cellmath__6)
	&(inst_cellmath__48);

assign inst_cellmath__8 = (7'B0000011==(rm - 7'B0000001));

assign inst_cellmath__4 = (7'B0000000==rm);

assign inst_cellmath__54__33 = 
	(inst_cellmath__42)
	|(inst_cellmath__50[0])
	|(inst_cellmath__43);

reg [0:0] inst_cellmath__54_tmp_11;
assign inst_cellmath__54 = inst_cellmath__54_tmp_11;
always @ (inst_cellmath__49[1] or inst_cellmath__54__33 or inst_cellmath__42) begin
	case (inst_cellmath__49[1])
		1'B0 : inst_cellmath__54_tmp_11 = inst_cellmath__54__33 ;
		default : inst_cellmath__54_tmp_11 = inst_cellmath__42 ;
	endcase
end

assign inst_cellmath__55__37 = 
	(inst_cellmath__54)
	|(inst_cellmath__50[2]);

assign inst_cellmath__55__36 = 
	(inst_cellmath__4)
	&(inst_cellmath__55__37);

assign inst_cellmath__55__35 = 
	(inst_cellmath__55__39)
	|(inst_cellmath__55__38)
	|(inst_cellmath__8)
	|(inst_cellmath__55__36);

assign inst_cellmath__55__34 = 
	(inst_cellmath__53)
	&(inst_cellmath__55__35);

assign inst_cellmath__55__41 = 
	(inst_cellmath__55__38)
	|(inst_cellmath__55__39);

assign inst_cellmath__55__40 = 
	(inst_cellmath__54)
	&(inst_cellmath__55__41);

assign inst_cellmath__55 = 
	(inst_cellmath__55__34)
	|(inst_cellmath__55__40);

assign inst_cellmath__57 = 
	+(inst_cellmath__50[24:2])
	+(inst_cellmath__55);

assign inst_cellmath__62__46 = 
	(inst_cellmath__45[24])
	&(inst_cellmath__57[23]);

assign inst_cellmath__62__45 = 
	(inst_cellmath__45[25])
	|(inst_cellmath__62__46);

assign inst_cellmath__29__12 = ~inst_cellmath__28[8];

reg [7:0] inst_cellmath__29_tmp_12;
assign inst_cellmath__29 = inst_cellmath__29_tmp_12;
always @ (inst_cellmath__29__12 or a_exp or b_exp) begin
	case (inst_cellmath__29__12)
		1'B0 : inst_cellmath__29_tmp_12 = a_exp ;
		default : inst_cellmath__29_tmp_12 = b_exp ;
	endcase
end

assign inst_cellmath__62 = 
	(inst_cellmath__62__45)
	&((~inst_cellmath__29[0]))
	&(inst_cellmath__29[1])
	&(inst_cellmath__29[2])
	&(inst_cellmath__29[3])
	&(inst_cellmath__29[4])
	&(inst_cellmath__29[5])
	&(inst_cellmath__29[6])
	&(inst_cellmath__29[7]);

wire [9:0] inst_cellmath__59_tmp_13;
wire [9:0] inst_cellmath__59_tmp_14;
assign inst_cellmath__59_tmp_14 = 
	+(inst_cellmath__57[23])
	-(inst_cellmath__49[4:0]);
assign inst_cellmath__59_tmp_13 = inst_cellmath__59_tmp_14
	+(inst_cellmath__29);
assign inst_cellmath__59 = inst_cellmath__59_tmp_13
	+(10'B0000000001);

assign inst_cellmath__60__44 = 
	(inst_cellmath__59[0])
	|(inst_cellmath__59[1])
	|(inst_cellmath__59[2])
	|(inst_cellmath__59[3])
	|(inst_cellmath__59[4])
	|(inst_cellmath__59[5])
	|(inst_cellmath__59[6])
	|(inst_cellmath__59[7])
	|(inst_cellmath__59[8]);

assign inst_cellmath__71 = 
	(inst_cellmath__67__67)
	|(inst_cellmath__62)
	|(inst_cellmath__17)
	|(inst_cellmath__63)
	|(inst_cellmath__12)
	|(inst_cellmath__49[5])
	|(inst_cellmath__59[9])
	|((~inst_cellmath__60__44));

assign inst_cellmath__68__69 = 
	(inst_cellmath__55__38)
	|(inst_cellmath__55__39)
	|(inst_cellmath__4)
	|(inst_cellmath__8);

assign inst_cellmath__68__68 = 
	(inst_cellmath__62)
	&(inst_cellmath__68__69);

assign inst_cellmath__68[0] = 
	(inst_cellmath__68__68)
	|(inst_cellmath__63)
	|(inst_cellmath__12)
	|(inst_cellmath__17);

assign inst_cellmath__68__0 = 
	(inst_cellmath__63)
	|(inst_cellmath__62)
	|(inst_cellmath__12)
	|(inst_cellmath__17);

assign inst_cellmath__68[7:1] = {{6{inst_cellmath__68__0}}, inst_cellmath__68__0};

reg [7:0] inst_cellmath__72_tmp_15;
assign inst_cellmath__72 = inst_cellmath__72_tmp_15;
always @ (inst_cellmath__71 or inst_cellmath__59[7:0] or inst_cellmath__68) begin
	case (inst_cellmath__71)
		1'B0 : inst_cellmath__72_tmp_15 = inst_cellmath__59[7:0] ;
		default : inst_cellmath__72_tmp_15 = inst_cellmath__68 ;
	endcase
end

assign inst_cellmath__71_0 = {inst_cellmath__71,inst_cellmath__63};

assign inst_cellmath__7 = (7'B0000010==(rm - 7'B0000001));

reg [0:0] inst_cellmath__70__74_tmp_16;
assign inst_cellmath__70__74 = inst_cellmath__70__74_tmp_16;
always @ (inst_cellmath__5 or inst_cellmath__48) begin
	case (inst_cellmath__5)
		1'B0 : inst_cellmath__70__74_tmp_16 = ~inst_cellmath__48 ;
		default : inst_cellmath__70__74_tmp_16 = inst_cellmath__48 ;
	endcase
end

assign inst_cellmath__70__73 = 
	(inst_cellmath__7)
	|(inst_cellmath__70__74);

assign inst_cellmath__70 = 
	(inst_cellmath__62)
	&(inst_cellmath__70__73)
	&((~inst_cellmath__4))
	&((~inst_cellmath__8));

assign inst_cellmath__64 = {1'B1,inst_cellmath__64__48_0[22:1]};

reg [22:0] inst_cellmath__73_tmp_17;
assign inst_cellmath__73 = inst_cellmath__73_tmp_17;
always @ (inst_cellmath__71_0 or inst_cellmath__57[22:0] or inst_cellmath__70 or inst_cellmath__64) begin
	casez (inst_cellmath__71_0)
		2'B0? : inst_cellmath__73_tmp_17 = inst_cellmath__57[22:0] ;
		2'B10 : inst_cellmath__73_tmp_17 = {{22{inst_cellmath__70}}, inst_cellmath__70} ;
		default : inst_cellmath__73_tmp_17 = inst_cellmath__64 ;
	endcase
end

assign inst_cellmath__3 = {inst_cellmath__67,inst_cellmath__72,inst_cellmath__73};

assign x = inst_cellmath__3;
endmodule

/* CADENCE  ubH3TQ/XqQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



