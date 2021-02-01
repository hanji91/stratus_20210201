module float_div_cynw_cm_float_mul_ieee_E8_M23_1_0( a_sign, a_exp, a_man, b_sign, b_exp, b_man, rm, x, aclk, astall );
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input b_sign;
input [7:0] b_exp;
input [22:0] b_man;
input [2:0] rm;
output [31:0] x;
wire[31:0] x_wire;
input aclk;
input astall;
float_div_cynw_cm_float_mul_ieee_E8_M23_0_bdw2834615920_bdw float_div_cynw_cm_float_mul_ieee_E8_M23_0_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .rm(rm), .x(x_wire));
reg [31:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
assign x = x_reg_0;
endmodule
/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 12:10:45 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float_div_cynw_cm_float_mul_ieee_E8_M23_0_bdw2834615920_bdw (
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
cynw_cm_float_mul_ieee_inst_cellmath__17_0_bdw2834615920_bdw inst_cellmath__17_0_0(
	.inst_cellmath__17_0_out0(inst_cellmath__17),
	.inst_cellmath__17_0_in0(b_exp)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__19__2__bdw2834615920_bdw inst_cellmath__19__2__0(
	.inst_cellmath__19__2__out0(inst_cellmath__19),
	.inst_cellmath__19__2__in0(b_man)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__21_0_bdw2834615920_bdw inst_cellmath__21_0_0(
	.inst_cellmath__21_0_out0(inst_cellmath__21),
	.inst_cellmath__21_0_in0(inst_cellmath__19),
	.inst_cellmath__21_0_in1(inst_cellmath__17)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__13__1__bdw2834615920_bdw inst_cellmath__13__1__0(
	.inst_cellmath__13__1__out0(inst_cellmath__13),
	.inst_cellmath__13__1__in0(a_exp)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__26__9__bdw2834615920_bdw inst_cellmath__26__9__0(
	.inst_cellmath__26__9__out0(inst_cellmath__26__9),
	.inst_cellmath__26__9__in0(inst_cellmath__21),
	.inst_cellmath__26__9__in1(inst_cellmath__13)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__10_0_bdw2834615920_bdw inst_cellmath__10_0_0(
	.inst_cellmath__10_0_out0(inst_cellmath__10),
	.inst_cellmath__10_0_in0(a_exp)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__12__0__bdw2834615920_bdw inst_cellmath__12__0__0(
	.inst_cellmath__12__0__out0(inst_cellmath__12),
	.inst_cellmath__12__0__in0(a_man)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__14_0_bdw2834615920_bdw inst_cellmath__14_0_0(
	.inst_cellmath__14_0_out0(inst_cellmath__14),
	.inst_cellmath__14_0_in0(inst_cellmath__12),
	.inst_cellmath__14_0_in1(inst_cellmath__10)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__20__3__bdw2834615920_bdw inst_cellmath__20__3__0(
	.inst_cellmath__20__3__out0(inst_cellmath__20),
	.inst_cellmath__20__3__in0(b_exp)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__26__8__bdw2834615920_bdw inst_cellmath__26__8__0(
	.inst_cellmath__26__8__out0(inst_cellmath__26__8),
	.inst_cellmath__26__8__in0(inst_cellmath__20),
	.inst_cellmath__26__8__in1(inst_cellmath__14)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__15_0_bdw2834615920_bdw inst_cellmath__15_0_0(
	.inst_cellmath__15_0_out0(inst_cellmath__15),
	.inst_cellmath__15_0_in0(inst_cellmath__12),
	.inst_cellmath__15_0_in1(inst_cellmath__10)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__22_0_bdw2834615920_bdw inst_cellmath__22_0_0(
	.inst_cellmath__22_0_out0(inst_cellmath__22),
	.inst_cellmath__22_0_in0(inst_cellmath__19),
	.inst_cellmath__22_0_in1(inst_cellmath__17)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__26_1_bdw2834615920_bdw inst_cellmath__26_1_0(
	.inst_cellmath__26_1_out0(inst_cellmath__26),
	.inst_cellmath__26_1_in0(inst_cellmath__26__9),
	.inst_cellmath__26_1_in1(inst_cellmath__26__8),
	.inst_cellmath__26_1_in2(inst_cellmath__22),
	.inst_cellmath__26_1_in3(inst_cellmath__15)
	) ;

assign inst_cellmath__26_0 = {inst_cellmath__26,inst_cellmath__15,inst_cellmath__22};
cynw_cm_float_mul_ieee_inst_cellmath__23_0_bdw2834615920_bdw inst_cellmath__23_0_0(
	.inst_cellmath__23_0_out0(inst_cellmath__23),
	.inst_cellmath__23_0_in0(b_sign),
	.inst_cellmath__23_0_in1(a_sign)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__41_0_bdw2834615920_bdw inst_cellmath__41_0_0(
	.inst_cellmath__41_0_out0(inst_cellmath__41),
	.inst_cellmath__41_0_in0(inst_cellmath__26),
	.inst_cellmath__41_0_in1(inst_cellmath__23),
	.inst_cellmath__41_0_in2(inst_cellmath__22),
	.inst_cellmath__41_0_in3(inst_cellmath__15),
	.inst_cellmath__41_0_in4(b_sign),
	.inst_cellmath__41_0_in5(a_sign)
	) ;

assign inst_cellmath__24__5 = {1'B1,b_man};
cynw_cm_float_mul_ieee_inst_cellmath__24_0_bdw2834615920_bdw inst_cellmath__24_0_0(
	.inst_cellmath__24_0_out0(inst_cellmath__24),
	.inst_cellmath__24_0_in0(b_man),
	.inst_cellmath__24_0_in1(a_man)
	) ;

assign inst_cellmath__25__7 = {inst_cellmath__24[46:0],1'B0};
cynw_cm_float_mul_ieee_inst_cellmath__25_0_bdw2834615920_bdw inst_cellmath__25_0_0(
	.inst_cellmath__25_0_out0(inst_cellmath__25),
	.inst_cellmath__25_0_in0(inst_cellmath__24)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__45_0_bdw2834615920_bdw inst_cellmath__45_0_0(
	.inst_cellmath__45_0_out0(inst_cellmath__45),
	.inst_cellmath__45_0_in0(inst_cellmath__25[47:24])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__5_1_bdw2834615920_bdw inst_cellmath__5_1_0(
	.inst_cellmath__5_1_out0(inst_cellmath__5),
	.inst_cellmath__5_1_in0(rm)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__31__bdw2834615920_bdw inst_cellmath__44__31__0(
	.inst_cellmath__44__31__out0(inst_cellmath__44__31),
	.inst_cellmath__44__31__in0(inst_cellmath__5),
	.inst_cellmath__44__31__in1(inst_cellmath__23)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__6_0_bdw2834615920_bdw inst_cellmath__6_0_0(
	.inst_cellmath__6_0_out0(inst_cellmath__6),
	.inst_cellmath__6_0_in0(rm)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__30__bdw2834615920_bdw inst_cellmath__44__30__0(
	.inst_cellmath__44__30__out0(inst_cellmath__44__30),
	.inst_cellmath__44__30__in0(inst_cellmath__6),
	.inst_cellmath__44__30__in1(inst_cellmath__23)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__8_0_bdw2834615920_bdw inst_cellmath__8_0_0(
	.inst_cellmath__8_0_out0(inst_cellmath__8),
	.inst_cellmath__8_0_in0(rm)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__4_0_bdw2834615920_bdw inst_cellmath__4_0_0(
	.inst_cellmath__4_0_out0(inst_cellmath__4),
	.inst_cellmath__4_0_in0(rm)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__34_0_bdw2834615920_bdw inst_cellmath__34_0_0(
	.inst_cellmath__34_0_out0(inst_cellmath__34),
	.inst_cellmath__34_0_in0(inst_cellmath__25[22:0])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__29__bdw2834615920_bdw inst_cellmath__44__29__0(
	.inst_cellmath__44__29__out0(inst_cellmath__44__29),
	.inst_cellmath__44__29__in0(inst_cellmath__34),
	.inst_cellmath__44__29__in1(inst_cellmath__25[24])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__28__bdw2834615920_bdw inst_cellmath__44__28__0(
	.inst_cellmath__44__28__out0(inst_cellmath__44__28),
	.inst_cellmath__44__28__in0(inst_cellmath__44__29),
	.inst_cellmath__44__28__in1(inst_cellmath__4)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__27__bdw2834615920_bdw inst_cellmath__44__27__0(
	.inst_cellmath__44__27__out0(inst_cellmath__44__27),
	.inst_cellmath__44__27__in0(inst_cellmath__8),
	.inst_cellmath__44__27__in1(inst_cellmath__44__31),
	.inst_cellmath__44__27__in2(inst_cellmath__44__30),
	.inst_cellmath__44__27__in3(inst_cellmath__44__28)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__26__bdw2834615920_bdw inst_cellmath__44__26__0(
	.inst_cellmath__44__26__out0(inst_cellmath__44__26),
	.inst_cellmath__44__26__in0(inst_cellmath__44__27),
	.inst_cellmath__44__26__in1(inst_cellmath__25[23])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__33__bdw2834615920_bdw inst_cellmath__44__33__0(
	.inst_cellmath__44__33__out0(inst_cellmath__44__33),
	.inst_cellmath__44__33__in0(inst_cellmath__44__31),
	.inst_cellmath__44__33__in1(inst_cellmath__44__30)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44__32__bdw2834615920_bdw inst_cellmath__44__32__0(
	.inst_cellmath__44__32__out0(inst_cellmath__44__32),
	.inst_cellmath__44__32__in0(inst_cellmath__44__33),
	.inst_cellmath__44__32__in1(inst_cellmath__34)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__44_0_bdw2834615920_bdw inst_cellmath__44_0_0(
	.inst_cellmath__44_0_out0(inst_cellmath__44),
	.inst_cellmath__44_0_in0(inst_cellmath__44__32),
	.inst_cellmath__44_0_in1(inst_cellmath__44__26)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__46_0_bdw2834615920_bdw inst_cellmath__46_0_0(
	.inst_cellmath__46_0_out0(inst_cellmath__46),
	.inst_cellmath__46_0_in0(inst_cellmath__45[24]),
	.inst_cellmath__46_0_in1(inst_cellmath__44)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__38_0_bdw2834615920_bdw inst_cellmath__38_0_0(
	.inst_cellmath__38_0_out0(inst_cellmath__38),
	.inst_cellmath__38_0_in0(inst_cellmath__46),
	.inst_cellmath__38_0_in1(inst_cellmath__24[47])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__30_0_bdw2834615920_bdw inst_cellmath__30_0_0(
	.inst_cellmath__30_0_out0(inst_cellmath__30),
	.inst_cellmath__30_0_in0(b_exp),
	.inst_cellmath__30_0_in1(a_exp)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__31_0_bdw2834615920_bdw inst_cellmath__31_0_0(
	.inst_cellmath__31_0_out0(inst_cellmath__31),
	.inst_cellmath__31_0_in0(inst_cellmath__30)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__48_0_bdw2834615920_bdw inst_cellmath__48_0_0(
	.inst_cellmath__48_0_out0(inst_cellmath__48),
	.inst_cellmath__48_0_in0(inst_cellmath__38),
	.inst_cellmath__48_0_in1(inst_cellmath__31),
	.inst_cellmath__48_0_in2(inst_cellmath__30)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__51__49__bdw2834615920_bdw inst_cellmath__51__49__0(
	.inst_cellmath__51__49__out0(inst_cellmath__51__49),
	.inst_cellmath__51__49__in0(inst_cellmath__48[7:0])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__51__48__bdw2834615920_bdw inst_cellmath__51__48__0(
	.inst_cellmath__51__48__out0(inst_cellmath__51__48),
	.inst_cellmath__51__48__in0(inst_cellmath__51__49),
	.inst_cellmath__51__48__in1(inst_cellmath__48[8])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__51_0_bdw2834615920_bdw inst_cellmath__51_0_0(
	.inst_cellmath__51_0_out0(inst_cellmath__51),
	.inst_cellmath__51_0_in0(inst_cellmath__51__48),
	.inst_cellmath__51_0_in1(inst_cellmath__48[9])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__28_0_bdw2834615920_bdw inst_cellmath__28_0_0(
	.inst_cellmath__28_0_out0(inst_cellmath__28),
	.inst_cellmath__28_0_in0(inst_cellmath__20),
	.inst_cellmath__28_0_in1(inst_cellmath__13)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__27_0_bdw2834615920_bdw inst_cellmath__27_0_0(
	.inst_cellmath__27_0_out0(inst_cellmath__27),
	.inst_cellmath__27_0_in0(inst_cellmath__21),
	.inst_cellmath__27_0_in1(inst_cellmath__14)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__50__50__bdw2834615920_bdw inst_cellmath__50__50__0(
	.inst_cellmath__50__50__out0(inst_cellmath__50__50),
	.inst_cellmath__50__50__in0(inst_cellmath__48)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__49_1_bdw2834615920_bdw inst_cellmath__49_1_2(
	.inst_cellmath__49_1_out0(inst_cellmath__49),
	.inst_cellmath__49_1_in0(inst_cellmath__51),
	.inst_cellmath__49_1_in1(inst_cellmath__50__50),
	.inst_cellmath__49_1_in2(inst_cellmath__48[9]),
	.inst_cellmath__49_1_in3(inst_cellmath__28),
	.inst_cellmath__49_1_in4(inst_cellmath__27),
	.inst_cellmath__49_1_in5(inst_cellmath__26)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__37__43__bdw2834615920_bdw inst_cellmath__37__43__0(
	.inst_cellmath__37__43__out0(inst_cellmath__37__43),
	.inst_cellmath__37__43__in0(inst_cellmath__27),
	.inst_cellmath__37__43__in1(inst_cellmath__26)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__32__11__bdw2834615920_bdw inst_cellmath__32__11__0(
	.inst_cellmath__32__11__out0(inst_cellmath__32__11),
	.inst_cellmath__32__11__in0(inst_cellmath__30[8:7])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__32__10__bdw2834615920_bdw inst_cellmath__32__10__0(
	.inst_cellmath__32__10__out0(inst_cellmath__32),
	.inst_cellmath__32__10__in0(inst_cellmath__32__11),
	.inst_cellmath__32__10__in1(inst_cellmath__30[9])
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__37__42__bdw2834615920_bdw inst_cellmath__37__42__0(
	.inst_cellmath__37__42__out0(inst_cellmath__37__42),
	.inst_cellmath__37__42__in0(inst_cellmath__32),
	.inst_cellmath__37__42__in1(inst_cellmath__28)
	) ;

assign inst_cellmath__49_0 = {inst_cellmath__49,inst_cellmath__37__43,inst_cellmath__37__42};

assign inst_cellmath__5_0 = {inst_cellmath__5,inst_cellmath__6};
cynw_cm_float_mul_ieee_inst_cellmath__7_0_bdw2834615920_bdw inst_cellmath__7_0_0(
	.inst_cellmath__7_0_out0(inst_cellmath__7),
	.inst_cellmath__7_0_in0(rm)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__42_0_bdw2834615920_bdw inst_cellmath__42_0_0(
	.inst_cellmath__42_0_out0(inst_cellmath__42),
	.inst_cellmath__42_0_in0(inst_cellmath__7),
	.inst_cellmath__42_0_in1(inst_cellmath__6),
	.inst_cellmath__42_0_in2(inst_cellmath__5),
	.inst_cellmath__42_0_in3(inst_cellmath__23)
	) ;

assign inst_cellmath__37__40[7:0] = {7'B1111111,inst_cellmath__42};
cynw_cm_float_mul_ieee_inst_cellmath__52_0_bdw2834615920_bdw inst_cellmath__52_0_0(
	.inst_cellmath__52_0_out0(inst_cellmath__52),
	.inst_cellmath__52_0_in0(inst_cellmath__49),
	.inst_cellmath__52_0_in1(inst_cellmath__48[7:0]),
	.inst_cellmath__52_0_in2(inst_cellmath__42),
	.inst_cellmath__52_0_in3(inst_cellmath__37__43),
	.inst_cellmath__52_0_in4(inst_cellmath__37__42)
	) ;

assign inst_cellmath__49_1_1 = {inst_cellmath__49,inst_cellmath__44,inst_cellmath__26};
cynw_cm_float_mul_ieee_inst_cellmath__47_0_bdw2834615920_bdw inst_cellmath__47_0_0(
	.inst_cellmath__47_0_out0(inst_cellmath__47),
	.inst_cellmath__47_0_in0(inst_cellmath__42),
	.inst_cellmath__47_0_in1(inst_cellmath__32),
	.inst_cellmath__47_0_in2(inst_cellmath__28),
	.inst_cellmath__47_0_in3(inst_cellmath__27),
	.inst_cellmath__47_0_in4(inst_cellmath__26)
	) ;
cynw_cm_float_mul_ieee_inst_cellmath__53_U_bdw2834615920_bdw inst_cellmath__53_U_0(
	.inst_cellmath__53_U_out0(inst_cellmath__53[22]),
	.inst_cellmath__53_U_in0(inst_cellmath__49),
	.inst_cellmath__53_U_in1(inst_cellmath__47),
	.inst_cellmath__53_U_in2(inst_cellmath__45[22]),
	.inst_cellmath__53_U_in3(inst_cellmath__44),
	.inst_cellmath__53_U_in4(inst_cellmath__26),
	.inst_cellmath__53_U_in5(inst_cellmath__25[46])
	) ;

assign inst_cellmath__49_1_0 = {inst_cellmath__49,inst_cellmath__44,inst_cellmath__26,inst_cellmath__15,inst_cellmath__22};
cynw_cm_float_mul_ieee_inst_cellmath__53_M_bdw2834615920_bdw inst_cellmath__53_M_0(
	.inst_cellmath__53_M_out0(inst_cellmath__53[21:0]),
	.inst_cellmath__53_M_in0(inst_cellmath__49),
	.inst_cellmath__53_M_in1(inst_cellmath__47),
	.inst_cellmath__53_M_in2(inst_cellmath__45[21:0]),
	.inst_cellmath__53_M_in3(inst_cellmath__44),
	.inst_cellmath__53_M_in4(inst_cellmath__26),
	.inst_cellmath__53_M_in5(inst_cellmath__25[45:24]),
	.inst_cellmath__53_M_in6(inst_cellmath__22),
	.inst_cellmath__53_M_in7(inst_cellmath__15),
	.inst_cellmath__53_M_in8(b_man[21:0]),
	.inst_cellmath__53_M_in9(a_man[21:0])
	) ;

assign inst_cellmath__3 = {inst_cellmath__41,inst_cellmath__52,inst_cellmath__53};

assign x = inst_cellmath__3;
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__17_0_bdw2834615920_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__17_0_out0;
input [7:0] inst_cellmath__17_0_in0;

assign inst_cellmath__17_0_out0 = 
	(inst_cellmath__17_0_in0[0])
	&(inst_cellmath__17_0_in0[1])
	&(inst_cellmath__17_0_in0[2])
	&(inst_cellmath__17_0_in0[3])
	&(inst_cellmath__17_0_in0[4])
	&(inst_cellmath__17_0_in0[5])
	&(inst_cellmath__17_0_in0[6])
	&(inst_cellmath__17_0_in0[7]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__19__2__bdw2834615920_bdw (
	inst_cellmath__19__2__out0,
	inst_cellmath__19__2__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__19__2__out0;
input [22:0] inst_cellmath__19__2__in0;

assign inst_cellmath__19__2__out0 = ~(
	(inst_cellmath__19__2__in0[0])
	|(inst_cellmath__19__2__in0[1])
	|(inst_cellmath__19__2__in0[2])
	|(inst_cellmath__19__2__in0[3])
	|(inst_cellmath__19__2__in0[4])
	|(inst_cellmath__19__2__in0[5])
	|(inst_cellmath__19__2__in0[6])
	|(inst_cellmath__19__2__in0[7])
	|(inst_cellmath__19__2__in0[8])
	|(inst_cellmath__19__2__in0[9])
	|(inst_cellmath__19__2__in0[10])
	|(inst_cellmath__19__2__in0[11])
	|(inst_cellmath__19__2__in0[12])
	|(inst_cellmath__19__2__in0[13])
	|(inst_cellmath__19__2__in0[14])
	|(inst_cellmath__19__2__in0[15])
	|(inst_cellmath__19__2__in0[16])
	|(inst_cellmath__19__2__in0[17])
	|(inst_cellmath__19__2__in0[18])
	|(inst_cellmath__19__2__in0[19])
	|(inst_cellmath__19__2__in0[20])
	|(inst_cellmath__19__2__in0[21])
	|(inst_cellmath__19__2__in0[22]));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__21_0_bdw2834615920_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;

assign inst_cellmath__21_0_out0 = 
	(inst_cellmath__21_0_in1)
	&(inst_cellmath__21_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__13__1__bdw2834615920_bdw (
	inst_cellmath__13__1__out0,
	inst_cellmath__13__1__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__13__1__out0;
input [7:0] inst_cellmath__13__1__in0;

assign inst_cellmath__13__1__out0 = ~(
	(inst_cellmath__13__1__in0[0])
	|(inst_cellmath__13__1__in0[1])
	|(inst_cellmath__13__1__in0[2])
	|(inst_cellmath__13__1__in0[3])
	|(inst_cellmath__13__1__in0[4])
	|(inst_cellmath__13__1__in0[5])
	|(inst_cellmath__13__1__in0[6])
	|(inst_cellmath__13__1__in0[7]));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__26__9__bdw2834615920_bdw (
	inst_cellmath__26__9__out0,
	inst_cellmath__26__9__in0,
	inst_cellmath__26__9__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__26__9__out0;
input  inst_cellmath__26__9__in0,
	inst_cellmath__26__9__in1;

assign inst_cellmath__26__9__out0 = 
	(inst_cellmath__26__9__in0)
	&(inst_cellmath__26__9__in1);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__10_0_bdw2834615920_bdw (
	inst_cellmath__10_0_out0,
	inst_cellmath__10_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__10_0_out0;
input [7:0] inst_cellmath__10_0_in0;

assign inst_cellmath__10_0_out0 = 
	(inst_cellmath__10_0_in0[0])
	&(inst_cellmath__10_0_in0[1])
	&(inst_cellmath__10_0_in0[2])
	&(inst_cellmath__10_0_in0[3])
	&(inst_cellmath__10_0_in0[4])
	&(inst_cellmath__10_0_in0[5])
	&(inst_cellmath__10_0_in0[6])
	&(inst_cellmath__10_0_in0[7]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__12__0__bdw2834615920_bdw (
	inst_cellmath__12__0__out0,
	inst_cellmath__12__0__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__12__0__out0;
input [22:0] inst_cellmath__12__0__in0;

assign inst_cellmath__12__0__out0 = ~(
	(inst_cellmath__12__0__in0[0])
	|(inst_cellmath__12__0__in0[1])
	|(inst_cellmath__12__0__in0[2])
	|(inst_cellmath__12__0__in0[3])
	|(inst_cellmath__12__0__in0[4])
	|(inst_cellmath__12__0__in0[5])
	|(inst_cellmath__12__0__in0[6])
	|(inst_cellmath__12__0__in0[7])
	|(inst_cellmath__12__0__in0[8])
	|(inst_cellmath__12__0__in0[9])
	|(inst_cellmath__12__0__in0[10])
	|(inst_cellmath__12__0__in0[11])
	|(inst_cellmath__12__0__in0[12])
	|(inst_cellmath__12__0__in0[13])
	|(inst_cellmath__12__0__in0[14])
	|(inst_cellmath__12__0__in0[15])
	|(inst_cellmath__12__0__in0[16])
	|(inst_cellmath__12__0__in0[17])
	|(inst_cellmath__12__0__in0[18])
	|(inst_cellmath__12__0__in0[19])
	|(inst_cellmath__12__0__in0[20])
	|(inst_cellmath__12__0__in0[21])
	|(inst_cellmath__12__0__in0[22]));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__14_0_bdw2834615920_bdw (
	inst_cellmath__14_0_out0,
	inst_cellmath__14_0_in0,
	inst_cellmath__14_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__14_0_out0;
input  inst_cellmath__14_0_in0,
	inst_cellmath__14_0_in1;

assign inst_cellmath__14_0_out0 = 
	(inst_cellmath__14_0_in1)
	&(inst_cellmath__14_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__20__3__bdw2834615920_bdw (
	inst_cellmath__20__3__out0,
	inst_cellmath__20__3__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__20__3__out0;
input [7:0] inst_cellmath__20__3__in0;

assign inst_cellmath__20__3__out0 = ~(
	(inst_cellmath__20__3__in0[0])
	|(inst_cellmath__20__3__in0[1])
	|(inst_cellmath__20__3__in0[2])
	|(inst_cellmath__20__3__in0[3])
	|(inst_cellmath__20__3__in0[4])
	|(inst_cellmath__20__3__in0[5])
	|(inst_cellmath__20__3__in0[6])
	|(inst_cellmath__20__3__in0[7]));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__26__8__bdw2834615920_bdw (
	inst_cellmath__26__8__out0,
	inst_cellmath__26__8__in0,
	inst_cellmath__26__8__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__26__8__out0;
input  inst_cellmath__26__8__in0,
	inst_cellmath__26__8__in1;

assign inst_cellmath__26__8__out0 = 
	(inst_cellmath__26__8__in1)
	&(inst_cellmath__26__8__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__15_0_bdw2834615920_bdw (
	inst_cellmath__15_0_out0,
	inst_cellmath__15_0_in0,
	inst_cellmath__15_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__15_0_out0;
input  inst_cellmath__15_0_in0,
	inst_cellmath__15_0_in1;

assign inst_cellmath__15_0_out0 = 
	(inst_cellmath__15_0_in1)
	&((~inst_cellmath__15_0_in0));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__22_0_bdw2834615920_bdw (
	inst_cellmath__22_0_out0,
	inst_cellmath__22_0_in0,
	inst_cellmath__22_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__22_0_out0;
input  inst_cellmath__22_0_in0,
	inst_cellmath__22_0_in1;

assign inst_cellmath__22_0_out0 = 
	(inst_cellmath__22_0_in1)
	&((~inst_cellmath__22_0_in0));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__26_1_bdw2834615920_bdw (
	inst_cellmath__26_1_out0,
	inst_cellmath__26_1_in0,
	inst_cellmath__26_1_in1,
	inst_cellmath__26_1_in2,
	inst_cellmath__26_1_in3
	); /* architecture "behavioural" */ 
output  inst_cellmath__26_1_out0;
input [0:0] inst_cellmath__26_1_in0,
	inst_cellmath__26_1_in1;
input  inst_cellmath__26_1_in2,
	inst_cellmath__26_1_in3;

assign inst_cellmath__26_1_out0 = 
	(inst_cellmath__26_1_in0)
	|(inst_cellmath__26_1_in1)
	|(inst_cellmath__26_1_in3)
	|(inst_cellmath__26_1_in2);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__23_0_bdw2834615920_bdw (
	inst_cellmath__23_0_out0,
	inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__23_0_out0;
input  inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1;

assign inst_cellmath__23_0_out0 = 
	(inst_cellmath__23_0_in1)
	^(inst_cellmath__23_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__41_0_bdw2834615920_bdw (
	inst_cellmath__41_0_out0,
	inst_cellmath__41_0_in0,
	inst_cellmath__41_0_in1,
	inst_cellmath__41_0_in2,
	inst_cellmath__41_0_in3,
	inst_cellmath__41_0_in4,
	inst_cellmath__41_0_in5
	); /* architecture "behavioural" */ 
output  inst_cellmath__41_0_out0;
input  inst_cellmath__41_0_in0,
	inst_cellmath__41_0_in1,
	inst_cellmath__41_0_in2,
	inst_cellmath__41_0_in3,
	inst_cellmath__41_0_in4,
	inst_cellmath__41_0_in5;
wire [2:0] inst_cellmath__26_0;

assign inst_cellmath__26_0 = {inst_cellmath__41_0_in0,inst_cellmath__41_0_in3,inst_cellmath__41_0_in2};

reg [0:0] inst_cellmath__41_0_out0_tmp_0;
assign inst_cellmath__41_0_out0 = inst_cellmath__41_0_out0_tmp_0;
always @ (inst_cellmath__26_0 or inst_cellmath__41_0_in1 or inst_cellmath__41_0_in4 or inst_cellmath__41_0_in5) begin
	casez (inst_cellmath__26_0)
		3'B0?? : inst_cellmath__41_0_out0_tmp_0 = inst_cellmath__41_0_in1 ;
		3'B100 : inst_cellmath__41_0_out0_tmp_0 = 1'B1 ;
		3'B101 : inst_cellmath__41_0_out0_tmp_0 = inst_cellmath__41_0_in4 ;
		default : inst_cellmath__41_0_out0_tmp_0 = inst_cellmath__41_0_in5 ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__24_0_bdw2834615920_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1
	); /* architecture "behavioural" */ 
output [47:0] inst_cellmath__24_0_out0;
input [22:0] inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1;
wire [23:0] inst_cellmath__24__4,
	inst_cellmath__24__5;

assign inst_cellmath__24__4 = {1'B1,inst_cellmath__24_0_in1};

assign inst_cellmath__24__5 = {1'B1,inst_cellmath__24_0_in0};

assign inst_cellmath__24_0_out0 = 
	+(inst_cellmath__24__4 * inst_cellmath__24__5);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__25_0_bdw2834615920_bdw (
	inst_cellmath__25_0_out0,
	inst_cellmath__25_0_in0
	); /* architecture "behavioural" */ 
output [47:0] inst_cellmath__25_0_out0;
input [47:0] inst_cellmath__25_0_in0;
wire [47:0] inst_cellmath__25__7;

assign inst_cellmath__25__7 = {inst_cellmath__25_0_in0[46:0],1'B0};

reg [47:0] inst_cellmath__25_0_out0_tmp_0;
assign inst_cellmath__25_0_out0 = inst_cellmath__25_0_out0_tmp_0;
always @ (inst_cellmath__25_0_in0[47] or inst_cellmath__25__7 or inst_cellmath__25_0_in0) begin
	case (inst_cellmath__25_0_in0[47])
		1'B0 : inst_cellmath__25_0_out0_tmp_0 = inst_cellmath__25__7 ;
		default : inst_cellmath__25_0_out0_tmp_0 = inst_cellmath__25_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__45_0_bdw2834615920_bdw (
	inst_cellmath__45_0_out0,
	inst_cellmath__45_0_in0
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__45_0_out0;
input [47:24] inst_cellmath__45_0_in0;

assign inst_cellmath__45_0_out0 = 
	+(inst_cellmath__45_0_in0)
	+(25'B0000000000000000000000001);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__5_1_bdw2834615920_bdw (
	inst_cellmath__5_1_out0,
	inst_cellmath__5_1_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__5_1_out0;
input [2:0] inst_cellmath__5_1_in0;

assign inst_cellmath__5_1_out0 = (6'B000000==(inst_cellmath__5_1_in0 - 6'B000001));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__31__bdw2834615920_bdw (
	inst_cellmath__44__31__out0,
	inst_cellmath__44__31__in0,
	inst_cellmath__44__31__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__31__out0;
input  inst_cellmath__44__31__in0,
	inst_cellmath__44__31__in1;

assign inst_cellmath__44__31__out0 = 
	(inst_cellmath__44__31__in0)
	&((~inst_cellmath__44__31__in1));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__6_0_bdw2834615920_bdw (
	inst_cellmath__6_0_out0,
	inst_cellmath__6_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__6_0_out0;
input [2:0] inst_cellmath__6_0_in0;

assign inst_cellmath__6_0_out0 = (7'B0000001==(inst_cellmath__6_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__30__bdw2834615920_bdw (
	inst_cellmath__44__30__out0,
	inst_cellmath__44__30__in0,
	inst_cellmath__44__30__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__30__out0;
input  inst_cellmath__44__30__in0,
	inst_cellmath__44__30__in1;

assign inst_cellmath__44__30__out0 = 
	(inst_cellmath__44__30__in0)
	&(inst_cellmath__44__30__in1);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__8_0_bdw2834615920_bdw (
	inst_cellmath__8_0_out0,
	inst_cellmath__8_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__8_0_out0;
input [2:0] inst_cellmath__8_0_in0;

assign inst_cellmath__8_0_out0 = (7'B0000011==(inst_cellmath__8_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__4_0_bdw2834615920_bdw (
	inst_cellmath__4_0_out0,
	inst_cellmath__4_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__4_0_out0;
input [2:0] inst_cellmath__4_0_in0;

assign inst_cellmath__4_0_out0 = (7'B0000000==inst_cellmath__4_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__34_0_bdw2834615920_bdw (
	inst_cellmath__34_0_out0,
	inst_cellmath__34_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__34_0_out0;
input [22:0] inst_cellmath__34_0_in0;

assign inst_cellmath__34_0_out0 = 
	(inst_cellmath__34_0_in0[0])
	|(inst_cellmath__34_0_in0[1])
	|(inst_cellmath__34_0_in0[2])
	|(inst_cellmath__34_0_in0[3])
	|(inst_cellmath__34_0_in0[4])
	|(inst_cellmath__34_0_in0[5])
	|(inst_cellmath__34_0_in0[6])
	|(inst_cellmath__34_0_in0[7])
	|(inst_cellmath__34_0_in0[8])
	|(inst_cellmath__34_0_in0[9])
	|(inst_cellmath__34_0_in0[10])
	|(inst_cellmath__34_0_in0[11])
	|(inst_cellmath__34_0_in0[12])
	|(inst_cellmath__34_0_in0[13])
	|(inst_cellmath__34_0_in0[14])
	|(inst_cellmath__34_0_in0[15])
	|(inst_cellmath__34_0_in0[16])
	|(inst_cellmath__34_0_in0[17])
	|(inst_cellmath__34_0_in0[18])
	|(inst_cellmath__34_0_in0[19])
	|(inst_cellmath__34_0_in0[20])
	|(inst_cellmath__34_0_in0[21])
	|(inst_cellmath__34_0_in0[22]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__29__bdw2834615920_bdw (
	inst_cellmath__44__29__out0,
	inst_cellmath__44__29__in0,
	inst_cellmath__44__29__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__29__out0;
input  inst_cellmath__44__29__in0;
input [24:24] inst_cellmath__44__29__in1;

assign inst_cellmath__44__29__out0 = 
	(inst_cellmath__44__29__in0)
	|(inst_cellmath__44__29__in1);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__28__bdw2834615920_bdw (
	inst_cellmath__44__28__out0,
	inst_cellmath__44__28__in0,
	inst_cellmath__44__28__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__28__out0;
input [0:0] inst_cellmath__44__28__in0;
input  inst_cellmath__44__28__in1;

assign inst_cellmath__44__28__out0 = 
	(inst_cellmath__44__28__in1)
	&(inst_cellmath__44__28__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__27__bdw2834615920_bdw (
	inst_cellmath__44__27__out0,
	inst_cellmath__44__27__in0,
	inst_cellmath__44__27__in1,
	inst_cellmath__44__27__in2,
	inst_cellmath__44__27__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__27__out0;
input  inst_cellmath__44__27__in0;
input [0:0] inst_cellmath__44__27__in1,
	inst_cellmath__44__27__in2,
	inst_cellmath__44__27__in3;

assign inst_cellmath__44__27__out0 = 
	(inst_cellmath__44__27__in1)
	|(inst_cellmath__44__27__in2)
	|(inst_cellmath__44__27__in0)
	|(inst_cellmath__44__27__in3);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__26__bdw2834615920_bdw (
	inst_cellmath__44__26__out0,
	inst_cellmath__44__26__in0,
	inst_cellmath__44__26__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__26__out0;
input [0:0] inst_cellmath__44__26__in0;
input [23:23] inst_cellmath__44__26__in1;

assign inst_cellmath__44__26__out0 = 
	(inst_cellmath__44__26__in1)
	&(inst_cellmath__44__26__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__33__bdw2834615920_bdw (
	inst_cellmath__44__33__out0,
	inst_cellmath__44__33__in0,
	inst_cellmath__44__33__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__33__out0;
input [0:0] inst_cellmath__44__33__in0,
	inst_cellmath__44__33__in1;

assign inst_cellmath__44__33__out0 = 
	(inst_cellmath__44__33__in1)
	|(inst_cellmath__44__33__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44__32__bdw2834615920_bdw (
	inst_cellmath__44__32__out0,
	inst_cellmath__44__32__in0,
	inst_cellmath__44__32__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__44__32__out0;
input [0:0] inst_cellmath__44__32__in0;
input  inst_cellmath__44__32__in1;

assign inst_cellmath__44__32__out0 = 
	(inst_cellmath__44__32__in1)
	&(inst_cellmath__44__32__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__44_0_bdw2834615920_bdw (
	inst_cellmath__44_0_out0,
	inst_cellmath__44_0_in0,
	inst_cellmath__44_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__44_0_out0;
input [0:0] inst_cellmath__44_0_in0,
	inst_cellmath__44_0_in1;

assign inst_cellmath__44_0_out0 = 
	(inst_cellmath__44_0_in1)
	|(inst_cellmath__44_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__46_0_bdw2834615920_bdw (
	inst_cellmath__46_0_out0,
	inst_cellmath__46_0_in0,
	inst_cellmath__46_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__46_0_out0;
input [24:24] inst_cellmath__46_0_in0;
input  inst_cellmath__46_0_in1;

assign inst_cellmath__46_0_out0 = 
	(inst_cellmath__46_0_in0)
	&(inst_cellmath__46_0_in1);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__38_0_bdw2834615920_bdw (
	inst_cellmath__38_0_out0,
	inst_cellmath__38_0_in0,
	inst_cellmath__38_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__38_0_out0;
input  inst_cellmath__38_0_in0;
input [47:47] inst_cellmath__38_0_in1;

assign inst_cellmath__38_0_out0 = 
	(inst_cellmath__38_0_in1)
	|(inst_cellmath__38_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__30_0_bdw2834615920_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0,
	inst_cellmath__30_0_in1
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0,
	inst_cellmath__30_0_in1;

wire [9:0] inst_cellmath__30_0_out0_tmp_0;
assign inst_cellmath__30_0_out0_tmp_0 = 
	+(inst_cellmath__30_0_in1)
	+(inst_cellmath__30_0_in0);
assign inst_cellmath__30_0_out0 = inst_cellmath__30_0_out0_tmp_0
	-(10'B0001111111);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__31_0_bdw2834615920_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__31_0_out0;
input [9:0] inst_cellmath__31_0_in0;

assign inst_cellmath__31_0_out0 = 
	+(inst_cellmath__31_0_in0)
	+(10'B0000000001);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__48_0_bdw2834615920_bdw (
	inst_cellmath__48_0_out0,
	inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__48_0_out0;
input  inst_cellmath__48_0_in0;
input [9:0] inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2;

reg [9:0] inst_cellmath__48_0_out0_tmp_0;
assign inst_cellmath__48_0_out0 = inst_cellmath__48_0_out0_tmp_0;
always @ (inst_cellmath__48_0_in0 or inst_cellmath__48_0_in2 or inst_cellmath__48_0_in1) begin
	case (inst_cellmath__48_0_in0)
		1'B0 : inst_cellmath__48_0_out0_tmp_0 = inst_cellmath__48_0_in2 ;
		default : inst_cellmath__48_0_out0_tmp_0 = inst_cellmath__48_0_in1 ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__51__49__bdw2834615920_bdw (
	inst_cellmath__51__49__out0,
	inst_cellmath__51__49__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__51__49__out0;
input [7:0] inst_cellmath__51__49__in0;

assign inst_cellmath__51__49__out0 = 
	(inst_cellmath__51__49__in0[0])
	&(inst_cellmath__51__49__in0[1])
	&(inst_cellmath__51__49__in0[2])
	&(inst_cellmath__51__49__in0[3])
	&(inst_cellmath__51__49__in0[4])
	&(inst_cellmath__51__49__in0[5])
	&(inst_cellmath__51__49__in0[6])
	&(inst_cellmath__51__49__in0[7]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__51__48__bdw2834615920_bdw (
	inst_cellmath__51__48__out0,
	inst_cellmath__51__48__in0,
	inst_cellmath__51__48__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__51__48__out0;
input [0:0] inst_cellmath__51__48__in0;
input [8:8] inst_cellmath__51__48__in1;

assign inst_cellmath__51__48__out0 = 
	(inst_cellmath__51__48__in1)
	|(inst_cellmath__51__48__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__51_0_bdw2834615920_bdw (
	inst_cellmath__51_0_out0,
	inst_cellmath__51_0_in0,
	inst_cellmath__51_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__51_0_out0;
input [0:0] inst_cellmath__51_0_in0;
input [9:9] inst_cellmath__51_0_in1;

assign inst_cellmath__51_0_out0 = 
	((~inst_cellmath__51_0_in1))
	&(inst_cellmath__51_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__28_0_bdw2834615920_bdw (
	inst_cellmath__28_0_out0,
	inst_cellmath__28_0_in0,
	inst_cellmath__28_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__28_0_out0;
input  inst_cellmath__28_0_in0,
	inst_cellmath__28_0_in1;

assign inst_cellmath__28_0_out0 = 
	(inst_cellmath__28_0_in1)
	|(inst_cellmath__28_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__27_0_bdw2834615920_bdw (
	inst_cellmath__27_0_out0,
	inst_cellmath__27_0_in0,
	inst_cellmath__27_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__27_0_out0;
input  inst_cellmath__27_0_in0,
	inst_cellmath__27_0_in1;

assign inst_cellmath__27_0_out0 = 
	(inst_cellmath__27_0_in1)
	|(inst_cellmath__27_0_in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__50__50__bdw2834615920_bdw (
	inst_cellmath__50__50__out0,
	inst_cellmath__50__50__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__50__50__out0;
input [9:0] inst_cellmath__50__50__in0;

assign inst_cellmath__50__50__out0 = 
	(inst_cellmath__50__50__in0[0])
	|(inst_cellmath__50__50__in0[1])
	|(inst_cellmath__50__50__in0[2])
	|(inst_cellmath__50__50__in0[3])
	|(inst_cellmath__50__50__in0[4])
	|(inst_cellmath__50__50__in0[5])
	|(inst_cellmath__50__50__in0[6])
	|(inst_cellmath__50__50__in0[7])
	|(inst_cellmath__50__50__in0[8])
	|(inst_cellmath__50__50__in0[9]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__49_1_bdw2834615920_bdw (
	inst_cellmath__49_1_out0,
	inst_cellmath__49_1_in0,
	inst_cellmath__49_1_in1,
	inst_cellmath__49_1_in2,
	inst_cellmath__49_1_in3,
	inst_cellmath__49_1_in4,
	inst_cellmath__49_1_in5
	); /* architecture "behavioural" */ 
output  inst_cellmath__49_1_out0;
input  inst_cellmath__49_1_in0;
input [0:0] inst_cellmath__49_1_in1;
input [9:9] inst_cellmath__49_1_in2;
input  inst_cellmath__49_1_in3,
	inst_cellmath__49_1_in4,
	inst_cellmath__49_1_in5;

assign inst_cellmath__49_1_out0 = 
	(inst_cellmath__49_1_in0)
	|(inst_cellmath__49_1_in3)
	|(inst_cellmath__49_1_in5)
	|(inst_cellmath__49_1_in4)
	|(inst_cellmath__49_1_in2)
	|((~inst_cellmath__49_1_in1));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__37__43__bdw2834615920_bdw (
	inst_cellmath__37__43__out0,
	inst_cellmath__37__43__in0,
	inst_cellmath__37__43__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__37__43__out0;
input  inst_cellmath__37__43__in0,
	inst_cellmath__37__43__in1;

assign inst_cellmath__37__43__out0 = 
	(inst_cellmath__37__43__in1)
	|(inst_cellmath__37__43__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__32__11__bdw2834615920_bdw (
	inst_cellmath__32__11__out0,
	inst_cellmath__32__11__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__32__11__out0;
input [8:7] inst_cellmath__32__11__in0;

assign inst_cellmath__32__11__out0 = 
	(inst_cellmath__32__11__in0[7])
	|(inst_cellmath__32__11__in0[8]);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__32__10__bdw2834615920_bdw (
	inst_cellmath__32__10__out0,
	inst_cellmath__32__10__in0,
	inst_cellmath__32__10__in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__32__10__out0;
input [0:0] inst_cellmath__32__10__in0;
input [9:9] inst_cellmath__32__10__in1;

assign inst_cellmath__32__10__out0 = ~(
	((~inst_cellmath__32__10__in1))
	&(inst_cellmath__32__10__in0));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__37__42__bdw2834615920_bdw (
	inst_cellmath__37__42__out0,
	inst_cellmath__37__42__in0,
	inst_cellmath__37__42__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__37__42__out0;
input  inst_cellmath__37__42__in0,
	inst_cellmath__37__42__in1;

assign inst_cellmath__37__42__out0 = 
	(inst_cellmath__37__42__in1)
	|(inst_cellmath__37__42__in0);
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__7_0_bdw2834615920_bdw (
	inst_cellmath__7_0_out0,
	inst_cellmath__7_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__7_0_out0;
input [2:0] inst_cellmath__7_0_in0;

assign inst_cellmath__7_0_out0 = (7'B0000010==(inst_cellmath__7_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__42_0_bdw2834615920_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1,
	inst_cellmath__42_0_in2,
	inst_cellmath__42_0_in3
	); /* architecture "behavioural" */ 
output  inst_cellmath__42_0_out0;
input  inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1,
	inst_cellmath__42_0_in2,
	inst_cellmath__42_0_in3;
wire [1:0] inst_cellmath__5_0;

assign inst_cellmath__5_0 = {inst_cellmath__42_0_in2,inst_cellmath__42_0_in1};

reg [0:0] inst_cellmath__42_0_out0_tmp_0;
assign inst_cellmath__42_0_out0 = inst_cellmath__42_0_out0_tmp_0;
always @ (inst_cellmath__5_0 or inst_cellmath__42_0_in0 or inst_cellmath__42_0_in3) begin
	casez (inst_cellmath__5_0)
		2'B00 : inst_cellmath__42_0_out0_tmp_0 = ~inst_cellmath__42_0_in0 ;
		2'B01 : inst_cellmath__42_0_out0_tmp_0 = inst_cellmath__42_0_in3 ;
		default : inst_cellmath__42_0_out0_tmp_0 = ~inst_cellmath__42_0_in3 ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__52_0_bdw2834615920_bdw (
	inst_cellmath__52_0_out0,
	inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1,
	inst_cellmath__52_0_in2,
	inst_cellmath__52_0_in3,
	inst_cellmath__52_0_in4
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__52_0_out0;
input  inst_cellmath__52_0_in0;
input [7:0] inst_cellmath__52_0_in1;
input  inst_cellmath__52_0_in2;
input [0:0] inst_cellmath__52_0_in3,
	inst_cellmath__52_0_in4;
wire [2:0] inst_cellmath__49_0;
wire [8:0] inst_cellmath__37__40;

assign inst_cellmath__49_0 = {inst_cellmath__52_0_in0,inst_cellmath__52_0_in3,inst_cellmath__52_0_in4};

assign inst_cellmath__37__40[7:0] = {7'B1111111,inst_cellmath__52_0_in2};

reg [7:0] inst_cellmath__52_0_out0_tmp_0;
assign inst_cellmath__52_0_out0 = inst_cellmath__52_0_out0_tmp_0;
always @ (inst_cellmath__49_0 or inst_cellmath__52_0_in1 or inst_cellmath__37__40[7:0]) begin
	casez (inst_cellmath__49_0)
		3'B0?? : inst_cellmath__52_0_out0_tmp_0 = inst_cellmath__52_0_in1 ;
		3'B100 : inst_cellmath__52_0_out0_tmp_0 = inst_cellmath__37__40[7:0] ;
		3'B11? : inst_cellmath__52_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__52_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__47_0_bdw2834615920_bdw (
	inst_cellmath__47_0_out0,
	inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1,
	inst_cellmath__47_0_in2,
	inst_cellmath__47_0_in3,
	inst_cellmath__47_0_in4
	); /* architecture "behavioural" */ 
output  inst_cellmath__47_0_out0;
input  inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1,
	inst_cellmath__47_0_in2,
	inst_cellmath__47_0_in3,
	inst_cellmath__47_0_in4;

assign inst_cellmath__47_0_out0 = 
	((~inst_cellmath__47_0_in0))
	&((~inst_cellmath__47_0_in1))
	&((~inst_cellmath__47_0_in2))
	&((~inst_cellmath__47_0_in4))
	&((~inst_cellmath__47_0_in3));
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__53_U_bdw2834615920_bdw (
	inst_cellmath__53_U_out0,
	inst_cellmath__53_U_in0,
	inst_cellmath__53_U_in1,
	inst_cellmath__53_U_in2,
	inst_cellmath__53_U_in3,
	inst_cellmath__53_U_in4,
	inst_cellmath__53_U_in5
	); /* architecture "behavioural" */ 
output [22:22] inst_cellmath__53_U_out0;
input  inst_cellmath__53_U_in0,
	inst_cellmath__53_U_in1;
input [22:22] inst_cellmath__53_U_in2;
input  inst_cellmath__53_U_in3,
	inst_cellmath__53_U_in4;
input [46:46] inst_cellmath__53_U_in5;
wire [2:0] inst_cellmath__49_1_1;

assign inst_cellmath__49_1_1 = {inst_cellmath__53_U_in0,inst_cellmath__53_U_in3,inst_cellmath__53_U_in4};

reg [0:0] inst_cellmath__53_U_out0_tmp_0;
assign inst_cellmath__53_U_out0 = inst_cellmath__53_U_out0_tmp_0;
always @ (inst_cellmath__49_1_1 or inst_cellmath__53_U_in5 or inst_cellmath__53_U_in2 or inst_cellmath__53_U_in1) begin
	casez (inst_cellmath__49_1_1)
		3'B00? : inst_cellmath__53_U_out0_tmp_0 = inst_cellmath__53_U_in5 ;
		3'B01? : inst_cellmath__53_U_out0_tmp_0 = inst_cellmath__53_U_in2 ;
		3'B1?0 : inst_cellmath__53_U_out0_tmp_0 = inst_cellmath__53_U_in1 ;
		default : inst_cellmath__53_U_out0_tmp_0 = 1'B1 ;
	endcase
end
endmodule

module cynw_cm_float_mul_ieee_inst_cellmath__53_M_bdw2834615920_bdw (
	inst_cellmath__53_M_out0,
	inst_cellmath__53_M_in0,
	inst_cellmath__53_M_in1,
	inst_cellmath__53_M_in2,
	inst_cellmath__53_M_in3,
	inst_cellmath__53_M_in4,
	inst_cellmath__53_M_in5,
	inst_cellmath__53_M_in6,
	inst_cellmath__53_M_in7,
	inst_cellmath__53_M_in8,
	inst_cellmath__53_M_in9
	); /* architecture "behavioural" */ 
output [21:0] inst_cellmath__53_M_out0;
input  inst_cellmath__53_M_in0,
	inst_cellmath__53_M_in1;
input [21:0] inst_cellmath__53_M_in2;
input  inst_cellmath__53_M_in3,
	inst_cellmath__53_M_in4;
input [45:24] inst_cellmath__53_M_in5;
input  inst_cellmath__53_M_in6,
	inst_cellmath__53_M_in7;
input [21:0] inst_cellmath__53_M_in8,
	inst_cellmath__53_M_in9;
wire [4:0] inst_cellmath__49_1_0;

assign inst_cellmath__49_1_0 = {inst_cellmath__53_M_in0,inst_cellmath__53_M_in3,inst_cellmath__53_M_in4,inst_cellmath__53_M_in7,inst_cellmath__53_M_in6};

reg [21:0] inst_cellmath__53_M_out0_tmp_0;
assign inst_cellmath__53_M_out0 = inst_cellmath__53_M_out0_tmp_0;
always @ (inst_cellmath__49_1_0 or inst_cellmath__53_M_in5 or inst_cellmath__53_M_in2 or inst_cellmath__53_M_in1 or inst_cellmath__53_M_in8 or inst_cellmath__53_M_in9) begin
	casez (inst_cellmath__49_1_0)
		5'B00??? : inst_cellmath__53_M_out0_tmp_0 = inst_cellmath__53_M_in5 ;
		5'B01??? : inst_cellmath__53_M_out0_tmp_0 = inst_cellmath__53_M_in2 ;
		5'B1?0?? : inst_cellmath__53_M_out0_tmp_0 = {{21{inst_cellmath__53_M_in1}}, inst_cellmath__53_M_in1} ;
		5'B1?101 : inst_cellmath__53_M_out0_tmp_0 = inst_cellmath__53_M_in8 ;
		5'B1?11? : inst_cellmath__53_M_out0_tmp_0 = inst_cellmath__53_M_in9 ;
		default : inst_cellmath__53_M_out0_tmp_0 = {22{1'b0}} ;
	endcase
end
endmodule

/* CADENCE  v7nzTwvfog== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/






