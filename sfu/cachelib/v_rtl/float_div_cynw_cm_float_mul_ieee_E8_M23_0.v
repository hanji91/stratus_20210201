/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 12:06:33 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float_div_cynw_cm_float_mul_ieee_E8_M23_0 (
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
	inst_cellmath__10,
	inst_cellmath__12,
	inst_cellmath__13,
	inst_cellmath__14,
	inst_cellmath__15,
	inst_cellmath__17,
	inst_cellmath__19,
	inst_cellmath__20,
	inst_cellmath__21,
	inst_cellmath__22,
	inst_cellmath__23;
wire [47:0] inst_cellmath__24,
	inst_cellmath__25;
wire  inst_cellmath__26,
	inst_cellmath__27,
	inst_cellmath__28;
wire [9:0] inst_cellmath__30,
	inst_cellmath__31;
wire  inst_cellmath__32,
	inst_cellmath__34,
	inst_cellmath__38,
	inst_cellmath__41,
	inst_cellmath__42,
	inst_cellmath__44;
wire [24:0] inst_cellmath__45;
wire  inst_cellmath__46,
	inst_cellmath__47;
wire [9:0] inst_cellmath__48;
wire  inst_cellmath__49,
	inst_cellmath__51;
wire [7:0] inst_cellmath__52;
wire [22:0] inst_cellmath__53;
wire [23:0] inst_cellmath__24__4,
	inst_cellmath__24__5;
wire [47:0] inst_cellmath__25__7;
wire [0:0] inst_cellmath__26__8,
	inst_cellmath__26__9,
	inst_cellmath__32__11,
	inst_cellmath__44__29,
	inst_cellmath__44__28,
	inst_cellmath__44__30,
	inst_cellmath__44__31,
	inst_cellmath__44__27,
	inst_cellmath__44__26,
	inst_cellmath__44__33,
	inst_cellmath__44__32;
wire [8:0] inst_cellmath__37__40;
wire [0:0] inst_cellmath__37__42,
	inst_cellmath__37__43,
	inst_cellmath__51__49,
	inst_cellmath__51__48,
	inst_cellmath__50__50;
wire [2:0] inst_cellmath__26_0;
wire [1:0] inst_cellmath__5_0;
wire [2:0] inst_cellmath__49_0;
wire [4:0] inst_cellmath__49_1_0;
wire [2:0] inst_cellmath__49_1_1;

assign inst_cellmath__24__4 = {1'B1,a_man};

assign inst_cellmath__17 = 
	(b_exp[0])
	&(b_exp[1])
	&(b_exp[2])
	&(b_exp[3])
	&(b_exp[4])
	&(b_exp[5])
	&(b_exp[6])
	&(b_exp[7]);

assign inst_cellmath__19 = ~(
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

assign inst_cellmath__21 = 
	(inst_cellmath__17)
	&(inst_cellmath__19);

assign inst_cellmath__13 = ~(
	(a_exp[0])
	|(a_exp[1])
	|(a_exp[2])
	|(a_exp[3])
	|(a_exp[4])
	|(a_exp[5])
	|(a_exp[6])
	|(a_exp[7]));

assign inst_cellmath__26__9 = 
	(inst_cellmath__21)
	&(inst_cellmath__13);

assign inst_cellmath__10 = 
	(a_exp[0])
	&(a_exp[1])
	&(a_exp[2])
	&(a_exp[3])
	&(a_exp[4])
	&(a_exp[5])
	&(a_exp[6])
	&(a_exp[7]);

assign inst_cellmath__12 = ~(
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

assign inst_cellmath__14 = 
	(inst_cellmath__10)
	&(inst_cellmath__12);

assign inst_cellmath__20 = ~(
	(b_exp[0])
	|(b_exp[1])
	|(b_exp[2])
	|(b_exp[3])
	|(b_exp[4])
	|(b_exp[5])
	|(b_exp[6])
	|(b_exp[7]));

assign inst_cellmath__26__8 = 
	(inst_cellmath__14)
	&(inst_cellmath__20);

assign inst_cellmath__15 = 
	(inst_cellmath__10)
	&((~inst_cellmath__12));

assign inst_cellmath__22 = 
	(inst_cellmath__17)
	&((~inst_cellmath__19));

assign inst_cellmath__26 = 
	(inst_cellmath__26__9)
	|(inst_cellmath__26__8)
	|(inst_cellmath__15)
	|(inst_cellmath__22);

assign inst_cellmath__26_0 = {inst_cellmath__26,inst_cellmath__15,inst_cellmath__22};

assign inst_cellmath__23 = 
	(a_sign)
	^(b_sign);

reg [0:0] inst_cellmath__41_tmp_0;
assign inst_cellmath__41 = inst_cellmath__41_tmp_0;
always @ (inst_cellmath__26_0 or inst_cellmath__23 or b_sign or a_sign) begin
	casez (inst_cellmath__26_0)
		3'B0?? : inst_cellmath__41_tmp_0 = inst_cellmath__23 ;
		3'B100 : inst_cellmath__41_tmp_0 = 1'B1 ;
		3'B101 : inst_cellmath__41_tmp_0 = b_sign ;
		default : inst_cellmath__41_tmp_0 = a_sign ;
	endcase
end

assign inst_cellmath__24__5 = {1'B1,b_man};

assign inst_cellmath__24 = 
	+(inst_cellmath__24__4 * inst_cellmath__24__5);

assign inst_cellmath__25__7 = {inst_cellmath__24[46:0],1'B0};

reg [47:0] inst_cellmath__25_tmp_1;
assign inst_cellmath__25 = inst_cellmath__25_tmp_1;
always @ (inst_cellmath__24[47] or inst_cellmath__25__7 or inst_cellmath__24) begin
	case (inst_cellmath__24[47])
		1'B0 : inst_cellmath__25_tmp_1 = inst_cellmath__25__7 ;
		default : inst_cellmath__25_tmp_1 = inst_cellmath__24 ;
	endcase
end

assign inst_cellmath__45 = 
	+(inst_cellmath__25[47:24])
	+(25'B0000000000000000000000001);

assign inst_cellmath__5 = (6'B000000==(rm - 6'B000001));

assign inst_cellmath__44__31 = 
	(inst_cellmath__5)
	&((~inst_cellmath__23));

assign inst_cellmath__6 = (7'B0000001==(rm - 7'B0000001));

assign inst_cellmath__44__30 = 
	(inst_cellmath__6)
	&(inst_cellmath__23);

assign inst_cellmath__8 = (7'B0000011==(rm - 7'B0000001));

assign inst_cellmath__4 = (7'B0000000==rm);

assign inst_cellmath__34 = 
	(inst_cellmath__25[0])
	|(inst_cellmath__25[1])
	|(inst_cellmath__25[2])
	|(inst_cellmath__25[3])
	|(inst_cellmath__25[4])
	|(inst_cellmath__25[5])
	|(inst_cellmath__25[6])
	|(inst_cellmath__25[7])
	|(inst_cellmath__25[8])
	|(inst_cellmath__25[9])
	|(inst_cellmath__25[10])
	|(inst_cellmath__25[11])
	|(inst_cellmath__25[12])
	|(inst_cellmath__25[13])
	|(inst_cellmath__25[14])
	|(inst_cellmath__25[15])
	|(inst_cellmath__25[16])
	|(inst_cellmath__25[17])
	|(inst_cellmath__25[18])
	|(inst_cellmath__25[19])
	|(inst_cellmath__25[20])
	|(inst_cellmath__25[21])
	|(inst_cellmath__25[22]);

assign inst_cellmath__44__29 = 
	(inst_cellmath__34)
	|(inst_cellmath__25[24]);

assign inst_cellmath__44__28 = 
	(inst_cellmath__4)
	&(inst_cellmath__44__29);

assign inst_cellmath__44__27 = 
	(inst_cellmath__44__31)
	|(inst_cellmath__44__30)
	|(inst_cellmath__8)
	|(inst_cellmath__44__28);

assign inst_cellmath__44__26 = 
	(inst_cellmath__25[23])
	&(inst_cellmath__44__27);

assign inst_cellmath__44__33 = 
	(inst_cellmath__44__30)
	|(inst_cellmath__44__31);

assign inst_cellmath__44__32 = 
	(inst_cellmath__34)
	&(inst_cellmath__44__33);

assign inst_cellmath__44 = 
	(inst_cellmath__44__26)
	|(inst_cellmath__44__32);

assign inst_cellmath__46 = 
	(inst_cellmath__45[24])
	&(inst_cellmath__44);

assign inst_cellmath__38 = 
	(inst_cellmath__24[47])
	|(inst_cellmath__46);

wire [9:0] inst_cellmath__30_tmp_2;
assign inst_cellmath__30_tmp_2 = 
	+(a_exp)
	+(b_exp);
assign inst_cellmath__30 = inst_cellmath__30_tmp_2
	-(10'B0001111111);

assign inst_cellmath__31 = 
	+(inst_cellmath__30)
	+(10'B0000000001);

reg [9:0] inst_cellmath__48_tmp_3;
assign inst_cellmath__48 = inst_cellmath__48_tmp_3;
always @ (inst_cellmath__38 or inst_cellmath__30 or inst_cellmath__31) begin
	case (inst_cellmath__38)
		1'B0 : inst_cellmath__48_tmp_3 = inst_cellmath__30 ;
		default : inst_cellmath__48_tmp_3 = inst_cellmath__31 ;
	endcase
end

assign inst_cellmath__51__49 = 
	(inst_cellmath__48[0])
	&(inst_cellmath__48[1])
	&(inst_cellmath__48[2])
	&(inst_cellmath__48[3])
	&(inst_cellmath__48[4])
	&(inst_cellmath__48[5])
	&(inst_cellmath__48[6])
	&(inst_cellmath__48[7]);

assign inst_cellmath__51__48 = 
	(inst_cellmath__48[8])
	|(inst_cellmath__51__49);

assign inst_cellmath__51 = 
	((~inst_cellmath__48[9]))
	&(inst_cellmath__51__48);

assign inst_cellmath__28 = 
	(inst_cellmath__13)
	|(inst_cellmath__20);

assign inst_cellmath__27 = 
	(inst_cellmath__14)
	|(inst_cellmath__21);

assign inst_cellmath__50__50 = 
	(inst_cellmath__48[0])
	|(inst_cellmath__48[1])
	|(inst_cellmath__48[2])
	|(inst_cellmath__48[3])
	|(inst_cellmath__48[4])
	|(inst_cellmath__48[5])
	|(inst_cellmath__48[6])
	|(inst_cellmath__48[7])
	|(inst_cellmath__48[8])
	|(inst_cellmath__48[9]);

assign inst_cellmath__49 = 
	(inst_cellmath__51)
	|(inst_cellmath__28)
	|(inst_cellmath__26)
	|(inst_cellmath__27)
	|(inst_cellmath__48[9])
	|((~inst_cellmath__50__50));

assign inst_cellmath__37__43 = 
	(inst_cellmath__26)
	|(inst_cellmath__27);

assign inst_cellmath__32__11 = 
	(inst_cellmath__30[7])
	|(inst_cellmath__30[8]);

assign inst_cellmath__32 = ~(
	((~inst_cellmath__30[9]))
	&(inst_cellmath__32__11));

assign inst_cellmath__37__42 = 
	(inst_cellmath__28)
	|(inst_cellmath__32);

assign inst_cellmath__49_0 = {inst_cellmath__49,inst_cellmath__37__43,inst_cellmath__37__42};

assign inst_cellmath__5_0 = {inst_cellmath__5,inst_cellmath__6};

assign inst_cellmath__7 = (7'B0000010==(rm - 7'B0000001));

reg [0:0] inst_cellmath__42_tmp_4;
assign inst_cellmath__42 = inst_cellmath__42_tmp_4;
always @ (inst_cellmath__5_0 or inst_cellmath__7 or inst_cellmath__23) begin
	casez (inst_cellmath__5_0)
		2'B00 : inst_cellmath__42_tmp_4 = ~inst_cellmath__7 ;
		2'B01 : inst_cellmath__42_tmp_4 = inst_cellmath__23 ;
		default : inst_cellmath__42_tmp_4 = ~inst_cellmath__23 ;
	endcase
end

assign inst_cellmath__37__40[7:0] = {7'B1111111,inst_cellmath__42};

reg [7:0] inst_cellmath__52_tmp_5;
assign inst_cellmath__52 = inst_cellmath__52_tmp_5;
always @ (inst_cellmath__49_0 or inst_cellmath__48[7:0] or inst_cellmath__37__40[7:0]) begin
	casez (inst_cellmath__49_0)
		3'B0?? : inst_cellmath__52_tmp_5 = inst_cellmath__48[7:0] ;
		3'B100 : inst_cellmath__52_tmp_5 = inst_cellmath__37__40[7:0] ;
		3'B11? : inst_cellmath__52_tmp_5 = 8'B11111111 ;
		default : inst_cellmath__52_tmp_5 = {8{1'b0}} ;
	endcase
end

assign inst_cellmath__49_1_1 = {inst_cellmath__49,inst_cellmath__44,inst_cellmath__26};

assign inst_cellmath__47 = 
	((~inst_cellmath__42))
	&((~inst_cellmath__32))
	&((~inst_cellmath__28))
	&((~inst_cellmath__26))
	&((~inst_cellmath__27));

reg [0:0] inst_cellmath__53_22_;
assign inst_cellmath__53[22] = inst_cellmath__53_22_;
always @ (inst_cellmath__49_1_1 or inst_cellmath__25[46] or inst_cellmath__45[22] or inst_cellmath__47) begin
	casez (inst_cellmath__49_1_1)
		3'B00? : inst_cellmath__53_22_ = inst_cellmath__25[46] ;
		3'B01? : inst_cellmath__53_22_ = inst_cellmath__45[22] ;
		3'B1?0 : inst_cellmath__53_22_ = inst_cellmath__47 ;
		default : inst_cellmath__53_22_ = 1'B1 ;
	endcase
end

assign inst_cellmath__49_1_0 = {inst_cellmath__49,inst_cellmath__44,inst_cellmath__26,inst_cellmath__15,inst_cellmath__22};

reg [21:0] inst_cellmath__53_21_0_;
assign inst_cellmath__53[21:0] = inst_cellmath__53_21_0_;
always @ (inst_cellmath__49_1_0 or inst_cellmath__25[45:24] or inst_cellmath__45[21:0] or inst_cellmath__47 or b_man[21:0] or a_man[21:0]) begin
	casez (inst_cellmath__49_1_0)
		5'B00??? : inst_cellmath__53_21_0_ = inst_cellmath__25[45:24] ;
		5'B01??? : inst_cellmath__53_21_0_ = inst_cellmath__45[21:0] ;
		5'B1?0?? : inst_cellmath__53_21_0_ = {{21{inst_cellmath__47}}, inst_cellmath__47} ;
		5'B1?101 : inst_cellmath__53_21_0_ = b_man[21:0] ;
		5'B1?11? : inst_cellmath__53_21_0_ = a_man[21:0] ;
		default : inst_cellmath__53_21_0_ = {22{1'b0}} ;
	endcase
end

assign inst_cellmath__3 = {inst_cellmath__41,inst_cellmath__52,inst_cellmath__53};

assign x = inst_cellmath__3;
endmodule

/* CADENCE  urL1Tg7fqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



