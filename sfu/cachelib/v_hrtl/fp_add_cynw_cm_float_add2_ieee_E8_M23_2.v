module fp_add_cynw_cm_float_add2_ieee_E8_M23_2( a_sign, a_exp, a_man, b_sign, b_exp, b_man, rm, x, aclk, astall );
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
fp_add_cynw_cm_float_add2_ieee_E8_M23_0_bdw2650604635_bdw fp_add_cynw_cm_float_add2_ieee_E8_M23_0_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .rm(rm), .x(x_wire));
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
    
    Configured at: 22:25:02 KST (+0900), Thursday 31 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module fp_add_cynw_cm_float_add2_ieee_E8_M23_0_bdw2650604635_bdw (
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
cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw2650604635_bdw inst_cellmath__21_0_0(
	.inst_cellmath__21_0_out0(inst_cellmath__21),
	.inst_cellmath__21_0_in0(b_sign),
	.inst_cellmath__21_0_in1(a_sign)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw2650604635_bdw inst_cellmath__9_0_0(
	.inst_cellmath__9_0_out0(inst_cellmath__9),
	.inst_cellmath__9_0_in0(a_exp)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw2650604635_bdw inst_cellmath__10__1__0(
	.inst_cellmath__10__1__out0(inst_cellmath__10),
	.inst_cellmath__10__1__in0(a_man)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw2650604635_bdw inst_cellmath__12_0_0(
	.inst_cellmath__12_0_out0(inst_cellmath__12),
	.inst_cellmath__12_0_in0(inst_cellmath__9),
	.inst_cellmath__12_0_in1(inst_cellmath__10)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw2650604635_bdw inst_cellmath__14_0_0(
	.inst_cellmath__14_0_out0(inst_cellmath__14),
	.inst_cellmath__14_0_in0(b_exp)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw2650604635_bdw inst_cellmath__15__3__0(
	.inst_cellmath__15__3__out0(inst_cellmath__15),
	.inst_cellmath__15__3__in0(b_man)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw2650604635_bdw inst_cellmath__17_0_0(
	.inst_cellmath__17_0_out0(inst_cellmath__17),
	.inst_cellmath__17_0_in0(inst_cellmath__15),
	.inst_cellmath__17_0_in1(inst_cellmath__14)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw2650604635_bdw inst_cellmath__24__5__0(
	.inst_cellmath__24__5__out0(inst_cellmath__24__5),
	.inst_cellmath__24__5__in0(inst_cellmath__21),
	.inst_cellmath__24__5__in1(inst_cellmath__17),
	.inst_cellmath__24__5__in2(inst_cellmath__12)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw2650604635_bdw inst_cellmath__13_1_0(
	.inst_cellmath__13_1_out0(inst_cellmath__13),
	.inst_cellmath__13_1_in0(inst_cellmath__9),
	.inst_cellmath__13_1_in1(inst_cellmath__10)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw2650604635_bdw inst_cellmath__18_0_0(
	.inst_cellmath__18_0_out0(inst_cellmath__18),
	.inst_cellmath__18_0_in0(inst_cellmath__15),
	.inst_cellmath__18_0_in1(inst_cellmath__14)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw2650604635_bdw inst_cellmath__63_1_0(
	.inst_cellmath__63_1_out0(inst_cellmath__63),
	.inst_cellmath__63_1_in0(inst_cellmath__24__5),
	.inst_cellmath__63_1_in1(inst_cellmath__18),
	.inst_cellmath__63_1_in2(inst_cellmath__13)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw2650604635_bdw inst_cellmath__11__2__0(
	.inst_cellmath__11__2__out0(inst_cellmath__11),
	.inst_cellmath__11__2__in0(a_exp)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw2650604635_bdw inst_cellmath__16__4__0(
	.inst_cellmath__16__4__out0(inst_cellmath__16),
	.inst_cellmath__16__4__in0(b_exp)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw2650604635_bdw inst_cellmath__67__67__0(
	.inst_cellmath__67__67__out0(inst_cellmath__67__67),
	.inst_cellmath__67__67__in0(inst_cellmath__16),
	.inst_cellmath__67__67__in1(inst_cellmath__11)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw2650604635_bdw inst_cellmath__6_0_0(
	.inst_cellmath__6_0_out0(inst_cellmath__6),
	.inst_cellmath__6_0_in0(rm)
	) ;

assign inst_cellmath__63_0 = {inst_cellmath__63,inst_cellmath__67__67,inst_cellmath__6};

assign inst_cellmath__27__7 = ~b_exp;

assign inst_cellmath__27__6 = {1'B1,inst_cellmath__27__7};
cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw2650604635_bdw inst_cellmath__28__8__0(
	.inst_cellmath__28__8__out0(inst_cellmath__28__8[8:0]),
	.inst_cellmath__28__8__out1(inst_cellmath__27),
	.inst_cellmath__28__8__in0(inst_cellmath__27__7),
	.inst_cellmath__28__8__in1(a_exp)
	) ;

assign inst_cellmath__28[8] = ~inst_cellmath__28__8[8];
cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw2650604635_bdw inst_cellmath__34_0_0(
	.inst_cellmath__34_0_out0(inst_cellmath__34),
	.inst_cellmath__34_0_in0(b_man),
	.inst_cellmath__34_0_in1(a_man)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw2650604635_bdw inst_cellmath__32__14__0(
	.inst_cellmath__32__14__out0(inst_cellmath__32__14),
	.inst_cellmath__32__14__in0(inst_cellmath__34),
	.inst_cellmath__32__14__in1(inst_cellmath__28[8])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw2650604635_bdw inst_cellmath__32_0_0(
	.inst_cellmath__32_0_out0(inst_cellmath__32),
	.inst_cellmath__32_0_in0(inst_cellmath__32__14),
	.inst_cellmath__32_0_in1(inst_cellmath__27[8])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw2650604635_bdw inst_cellmath__48_0_0(
	.inst_cellmath__48_0_out0(inst_cellmath__48),
	.inst_cellmath__48_0_in0(inst_cellmath__32),
	.inst_cellmath__48_0_in1(b_sign),
	.inst_cellmath__48_0_in2(a_sign)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw2650604635_bdw inst_cellmath__35_0_0(
	.inst_cellmath__35_0_out0(inst_cellmath__35),
	.inst_cellmath__35_0_in0(inst_cellmath__28__8[7:0]),
	.inst_cellmath__35_0_in1(inst_cellmath__27)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw2650604635_bdw inst_cellmath__30_0_0(
	.inst_cellmath__30_0_out0(inst_cellmath__30),
	.inst_cellmath__30_0_in0(inst_cellmath__35)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw2650604635_bdw inst_cellmath__31_0_0(
	.inst_cellmath__31_0_out0(inst_cellmath__31),
	.inst_cellmath__31_0_in0(inst_cellmath__16),
	.inst_cellmath__31_0_in1(inst_cellmath__11)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw2650604635_bdw inst_cellmath__33__18__0(
	.inst_cellmath__33__18__out0(inst_cellmath__33__18),
	.inst_cellmath__33__18__in0(inst_cellmath__31),
	.inst_cellmath__33__18__in1(inst_cellmath__30)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw2650604635_bdw inst_cellmath__36__15__0(
	.inst_cellmath__36__15__out0(inst_cellmath__36__15),
	.inst_cellmath__36__15__in0(inst_cellmath__32),
	.inst_cellmath__36__15__in1(b_man),
	.inst_cellmath__36__15__in2(a_man)
	) ;

assign inst_cellmath__36 = {1'B1,inst_cellmath__36__15,26'B00000000000000000000000000};
cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw2650604635_bdw inst_cellmath__37_0_0(
	.inst_cellmath__37_0_out0(inst_cellmath__37),
	.inst_cellmath__37_0_in0(inst_cellmath__36__15),
	.inst_cellmath__37_0_in1(inst_cellmath__35[4:0])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw2650604635_bdw inst_cellmath__33_49_24_0(
	.inst_cellmath__33_49_24_out0(inst_cellmath__33[49:24]),
	.inst_cellmath__33_49_24_in0(inst_cellmath__37[49:24]),
	.inst_cellmath__33_49_24_in1(inst_cellmath__33__18)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw2650604635_bdw inst_cellmath__42__22__0(
	.inst_cellmath__42__22__out0(inst_cellmath__42__22),
	.inst_cellmath__42__22__in0(inst_cellmath__37[23:0]),
	.inst_cellmath__42__22__in1(inst_cellmath__30)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw2650604635_bdw inst_cellmath__42_0_0(
	.inst_cellmath__42_0_out0(inst_cellmath__42),
	.inst_cellmath__42_0_in0(inst_cellmath__42__22),
	.inst_cellmath__42_0_in1(inst_cellmath__31)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw2650604635_bdw inst_cellmath__44_0_0(
	.inst_cellmath__44_0_out0(inst_cellmath__44),
	.inst_cellmath__44_0_in0(inst_cellmath__42),
	.inst_cellmath__44_0_in1(inst_cellmath__33[24]),
	.inst_cellmath__44_0_in2(inst_cellmath__21)
	) ;

assign inst_cellmath__25[23:0] = {a_man,1'B0};
cynw_cm_float_add2_ieee_inst_cellmath__40_bdw2650604635_bdw inst_cellmath__40_1(
	.inst_cellmath__40_out0(inst_cellmath__40_0_0[23:0]),
	.inst_cellmath__40_in0(inst_cellmath__32),
	.inst_cellmath__40_in1(b_man),
	.inst_cellmath__40_in2(a_man)
	) ;

assign inst_cellmath__40_0 = {1'B1,inst_cellmath__40_0_0[23:1],1'B0};
cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw2650604635_bdw inst_cellmath__39__19__2mx_0(
	.inst_cellmath__39__19__2mx_out0(inst_cellmath__39__19),
	.inst_cellmath__39__19__2mx_in0(inst_cellmath__33[49:25]),
	.inst_cellmath__39__19__2mx_in1(inst_cellmath__21)
	) ;

assign inst_cellmath__39 = {inst_cellmath__21,inst_cellmath__39__19};
cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw2650604635_bdw inst_cellmath__45_0_0(
	.inst_cellmath__45_0_out0(inst_cellmath__45[25:0]),
	.inst_cellmath__45_0_in0(inst_cellmath__44),
	.inst_cellmath__45_0_in1(inst_cellmath__40_0_0[23:1]),
	.inst_cellmath__45_0_in2(inst_cellmath__39__19),
	.inst_cellmath__45_0_in3(inst_cellmath__21)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw2650604635_bdw inst_cellmath__49_0_0(
	.inst_cellmath__49_0_out0(inst_cellmath__49),
	.inst_cellmath__49_0_in0(inst_cellmath__45[25:0])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw2650604635_bdw inst_cellmath__67__66__0(
	.inst_cellmath__67__66__out0(inst_cellmath__67__66),
	.inst_cellmath__67__66__in0(inst_cellmath__49[5]),
	.inst_cellmath__67__66__in1(inst_cellmath__48)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw2650604635_bdw inst_cellmath__67__65__0(
	.inst_cellmath__67__65__out0(inst_cellmath__67__65),
	.inst_cellmath__67__65__in0(inst_cellmath__49[5]),
	.inst_cellmath__67__65__in1(inst_cellmath__48)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw2650604635_bdw inst_cellmath__66__59__0(
	.inst_cellmath__66__59__out0(inst_cellmath__66__59),
	.inst_cellmath__66__59__in0(b_sign),
	.inst_cellmath__66__59__in1(a_sign)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw2650604635_bdw inst_cellmath__66__58__0(
	.inst_cellmath__66__58__out0(inst_cellmath__66__58),
	.inst_cellmath__66__58__in0(b_sign),
	.inst_cellmath__66__58__in1(a_sign)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw2650604635_bdw inst_cellmath__66__56__0(
	.inst_cellmath__66__56__out0(inst_cellmath__66__56),
	.inst_cellmath__66__56__in0(inst_cellmath__66__59),
	.inst_cellmath__66__56__in1(inst_cellmath__66__58),
	.inst_cellmath__66__56__in2(inst_cellmath__6)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw2650604635_bdw inst_cellmath__66_0_0(
	.inst_cellmath__66_0_out0(inst_cellmath__66),
	.inst_cellmath__66_0_in0(inst_cellmath__66__56),
	.inst_cellmath__66_0_in1(inst_cellmath__16),
	.inst_cellmath__66_0_in2(inst_cellmath__11)
	) ;

assign inst_cellmath__13_0 = {inst_cellmath__13,inst_cellmath__18};

assign inst_cellmath__64__48_1 = {b_man[21:0],b_sign};

assign inst_cellmath__64__48_2 = {a_man[21:0],a_sign};
cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw2650604635_bdw inst_cellmath__64__48__2WWMM_0(
	.inst_cellmath__64__48__2WWMM_out0(inst_cellmath__64__48_0),
	.inst_cellmath__64__48__2WWMM_in0(inst_cellmath__18),
	.inst_cellmath__64__48__2WWMM_in1(inst_cellmath__13),
	.inst_cellmath__64__48__2WWMM_in2(b_sign),
	.inst_cellmath__64__48__2WWMM_in3(b_man[21:0]),
	.inst_cellmath__64__48__2WWMM_in4(a_sign),
	.inst_cellmath__64__48__2WWMM_in5(a_man[21:0])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw2650604635_bdw inst_cellmath__67_0_0(
	.inst_cellmath__67_0_out0(inst_cellmath__67),
	.inst_cellmath__67_0_in0(inst_cellmath__67__67),
	.inst_cellmath__67_0_in1(inst_cellmath__67__66),
	.inst_cellmath__67_0_in2(inst_cellmath__67__65),
	.inst_cellmath__67_0_in3(inst_cellmath__66),
	.inst_cellmath__67_0_in4(inst_cellmath__64__48_0[0]),
	.inst_cellmath__67_0_in5(inst_cellmath__63),
	.inst_cellmath__67_0_in6(inst_cellmath__6)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw2650604635_bdw inst_cellmath__50_0_0(
	.inst_cellmath__50_0_out0(inst_cellmath__50),
	.inst_cellmath__50_0_in0(inst_cellmath__49[4:0]),
	.inst_cellmath__50_0_in1(inst_cellmath__45[25:0])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw2650604635_bdw inst_cellmath__43__26__0(
	.inst_cellmath__43__26__out0(inst_cellmath__43__26),
	.inst_cellmath__43__26__in0(inst_cellmath__42),
	.inst_cellmath__43__26__in1(inst_cellmath__33[24])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw2650604635_bdw inst_cellmath__43__25__0(
	.inst_cellmath__43__25__out0(inst_cellmath__43__25),
	.inst_cellmath__43__25__in0(inst_cellmath__43__26),
	.inst_cellmath__43__25__in1(inst_cellmath__30)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw2650604635_bdw inst_cellmath__43__28__0(
	.inst_cellmath__43__28__out0(inst_cellmath__43__28),
	.inst_cellmath__43__28__in0(inst_cellmath__42),
	.inst_cellmath__43__28__in1(inst_cellmath__33[24])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw2650604635_bdw inst_cellmath__43__27__0(
	.inst_cellmath__43__27__out0(inst_cellmath__43__27),
	.inst_cellmath__43__27__in0(inst_cellmath__43__28),
	.inst_cellmath__43__27__in1(inst_cellmath__30)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw2650604635_bdw inst_cellmath__43__24__0(
	.inst_cellmath__43__24__out0(inst_cellmath__43__24),
	.inst_cellmath__43__24__in0(inst_cellmath__43__27),
	.inst_cellmath__43__24__in1(inst_cellmath__43__25)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw2650604635_bdw inst_cellmath__43_0_0(
	.inst_cellmath__43_0_out0(inst_cellmath__43),
	.inst_cellmath__43_0_in0(inst_cellmath__43__24),
	.inst_cellmath__43_0_in1(inst_cellmath__33[24]),
	.inst_cellmath__43_0_in2(inst_cellmath__21)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw2650604635_bdw inst_cellmath__53_0_0(
	.inst_cellmath__53_0_out0(inst_cellmath__53),
	.inst_cellmath__53_0_in0(inst_cellmath__50[1]),
	.inst_cellmath__53_0_in1(inst_cellmath__49[1]),
	.inst_cellmath__53_0_in2(inst_cellmath__43)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw2650604635_bdw inst_cellmath__5_0_0(
	.inst_cellmath__5_0_out0(inst_cellmath__5),
	.inst_cellmath__5_0_in0(rm)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw2650604635_bdw inst_cellmath__55__39__0(
	.inst_cellmath__55__39__out0(inst_cellmath__55__39),
	.inst_cellmath__55__39__in0(inst_cellmath__5),
	.inst_cellmath__55__39__in1(inst_cellmath__48)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw2650604635_bdw inst_cellmath__55__38__0(
	.inst_cellmath__55__38__out0(inst_cellmath__55__38),
	.inst_cellmath__55__38__in0(inst_cellmath__6),
	.inst_cellmath__55__38__in1(inst_cellmath__48)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw2650604635_bdw inst_cellmath__8_0_0(
	.inst_cellmath__8_0_out0(inst_cellmath__8),
	.inst_cellmath__8_0_in0(rm)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw2650604635_bdw inst_cellmath__4_0_0(
	.inst_cellmath__4_0_out0(inst_cellmath__4),
	.inst_cellmath__4_0_in0(rm)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw2650604635_bdw inst_cellmath__54__33__0(
	.inst_cellmath__54__33__out0(inst_cellmath__54__33),
	.inst_cellmath__54__33__in0(inst_cellmath__50[0]),
	.inst_cellmath__54__33__in1(inst_cellmath__43),
	.inst_cellmath__54__33__in2(inst_cellmath__42)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw2650604635_bdw inst_cellmath__54_0_0(
	.inst_cellmath__54_0_out0(inst_cellmath__54),
	.inst_cellmath__54_0_in0(inst_cellmath__54__33),
	.inst_cellmath__54_0_in1(inst_cellmath__49[1]),
	.inst_cellmath__54_0_in2(inst_cellmath__42)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw2650604635_bdw inst_cellmath__55__37__0(
	.inst_cellmath__55__37__out0(inst_cellmath__55__37),
	.inst_cellmath__55__37__in0(inst_cellmath__54),
	.inst_cellmath__55__37__in1(inst_cellmath__50[2])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw2650604635_bdw inst_cellmath__55__36__0(
	.inst_cellmath__55__36__out0(inst_cellmath__55__36),
	.inst_cellmath__55__36__in0(inst_cellmath__55__37),
	.inst_cellmath__55__36__in1(inst_cellmath__4)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw2650604635_bdw inst_cellmath__55__35__0(
	.inst_cellmath__55__35__out0(inst_cellmath__55__35),
	.inst_cellmath__55__35__in0(inst_cellmath__8),
	.inst_cellmath__55__35__in1(inst_cellmath__55__39),
	.inst_cellmath__55__35__in2(inst_cellmath__55__38),
	.inst_cellmath__55__35__in3(inst_cellmath__55__36)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw2650604635_bdw inst_cellmath__55__34__0(
	.inst_cellmath__55__34__out0(inst_cellmath__55__34),
	.inst_cellmath__55__34__in0(inst_cellmath__55__35),
	.inst_cellmath__55__34__in1(inst_cellmath__53)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw2650604635_bdw inst_cellmath__55__41__0(
	.inst_cellmath__55__41__out0(inst_cellmath__55__41),
	.inst_cellmath__55__41__in0(inst_cellmath__55__39),
	.inst_cellmath__55__41__in1(inst_cellmath__55__38)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw2650604635_bdw inst_cellmath__55__40__0(
	.inst_cellmath__55__40__out0(inst_cellmath__55__40),
	.inst_cellmath__55__40__in0(inst_cellmath__55__41),
	.inst_cellmath__55__40__in1(inst_cellmath__54)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw2650604635_bdw inst_cellmath__55_0_0(
	.inst_cellmath__55_0_out0(inst_cellmath__55),
	.inst_cellmath__55_0_in0(inst_cellmath__55__40),
	.inst_cellmath__55_0_in1(inst_cellmath__55__34)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw2650604635_bdw inst_cellmath__57_0_0(
	.inst_cellmath__57_0_out0(inst_cellmath__57),
	.inst_cellmath__57_0_in0(inst_cellmath__55),
	.inst_cellmath__57_0_in1(inst_cellmath__50[24:2])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw2650604635_bdw inst_cellmath__62__46__0(
	.inst_cellmath__62__46__out0(inst_cellmath__62__46),
	.inst_cellmath__62__46__in0(inst_cellmath__57[23]),
	.inst_cellmath__62__46__in1(inst_cellmath__45[24])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw2650604635_bdw inst_cellmath__62__45__0(
	.inst_cellmath__62__45__out0(inst_cellmath__62__45),
	.inst_cellmath__62__45__in0(inst_cellmath__62__46),
	.inst_cellmath__62__45__in1(inst_cellmath__45[25])
	) ;

assign inst_cellmath__29__12 = ~inst_cellmath__28[8];
cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw2650604635_bdw inst_cellmath__29_0_0(
	.inst_cellmath__29_0_out0(inst_cellmath__29),
	.inst_cellmath__29_0_in0(inst_cellmath__29__12),
	.inst_cellmath__29_0_in1(b_exp),
	.inst_cellmath__29_0_in2(a_exp)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw2650604635_bdw inst_cellmath__62_0_0(
	.inst_cellmath__62_0_out0(inst_cellmath__62),
	.inst_cellmath__62_0_in0(inst_cellmath__62__45),
	.inst_cellmath__62_0_in1(inst_cellmath__29)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw2650604635_bdw inst_cellmath__59_0_0(
	.inst_cellmath__59_0_out0(inst_cellmath__59),
	.inst_cellmath__59_0_in0(inst_cellmath__57[23]),
	.inst_cellmath__59_0_in1(inst_cellmath__49[4:0]),
	.inst_cellmath__59_0_in2(inst_cellmath__29)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw2650604635_bdw inst_cellmath__60__44__0(
	.inst_cellmath__60__44__out0(inst_cellmath__60__44),
	.inst_cellmath__60__44__in0(inst_cellmath__59[8:0])
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw2650604635_bdw inst_cellmath__71_1_0(
	.inst_cellmath__71_1_out0(inst_cellmath__71),
	.inst_cellmath__71_1_in0(inst_cellmath__67__67),
	.inst_cellmath__71_1_in1(inst_cellmath__63),
	.inst_cellmath__71_1_in2(inst_cellmath__62),
	.inst_cellmath__71_1_in3(inst_cellmath__60__44),
	.inst_cellmath__71_1_in4(inst_cellmath__59[9]),
	.inst_cellmath__71_1_in5(inst_cellmath__49[5]),
	.inst_cellmath__71_1_in6(inst_cellmath__17),
	.inst_cellmath__71_1_in7(inst_cellmath__12)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw2650604635_bdw inst_cellmath__68__69__0(
	.inst_cellmath__68__69__out0(inst_cellmath__68__69),
	.inst_cellmath__68__69__in0(inst_cellmath__8),
	.inst_cellmath__68__69__in1(inst_cellmath__55__39),
	.inst_cellmath__68__69__in2(inst_cellmath__55__38),
	.inst_cellmath__68__69__in3(inst_cellmath__4)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw2650604635_bdw inst_cellmath__68__68__0(
	.inst_cellmath__68__68__out0(inst_cellmath__68__68),
	.inst_cellmath__68__68__in0(inst_cellmath__68__69),
	.inst_cellmath__68__68__in1(inst_cellmath__62)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw2650604635_bdw inst_cellmath__68_0_0(
	.inst_cellmath__68_0_out0(inst_cellmath__68[0]),
	.inst_cellmath__68_0_in0(inst_cellmath__68__68),
	.inst_cellmath__68_0_in1(inst_cellmath__63),
	.inst_cellmath__68_0_in2(inst_cellmath__17),
	.inst_cellmath__68_0_in3(inst_cellmath__12)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw2650604635_bdw inst_cellmath__68__0__0(
	.inst_cellmath__68__0__out0(inst_cellmath__68__0),
	.inst_cellmath__68__0__in0(inst_cellmath__63),
	.inst_cellmath__68__0__in1(inst_cellmath__62),
	.inst_cellmath__68__0__in2(inst_cellmath__17),
	.inst_cellmath__68__0__in3(inst_cellmath__12)
	) ;

assign inst_cellmath__68[7:1] = {{6{inst_cellmath__68__0}}, inst_cellmath__68__0};
cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw2650604635_bdw inst_cellmath__72_0_0(
	.inst_cellmath__72_0_out0(inst_cellmath__72),
	.inst_cellmath__72_0_in0(inst_cellmath__71),
	.inst_cellmath__72_0_in1(inst_cellmath__68__0),
	.inst_cellmath__72_0_in2(inst_cellmath__68[0]),
	.inst_cellmath__72_0_in3(inst_cellmath__59[7:0])
	) ;

assign inst_cellmath__71_0 = {inst_cellmath__71,inst_cellmath__63};
cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw2650604635_bdw inst_cellmath__7_0_0(
	.inst_cellmath__7_0_out0(inst_cellmath__7),
	.inst_cellmath__7_0_in0(rm)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw2650604635_bdw inst_cellmath__70__74__0(
	.inst_cellmath__70__74__out0(inst_cellmath__70__74),
	.inst_cellmath__70__74__in0(inst_cellmath__5),
	.inst_cellmath__70__74__in1(inst_cellmath__48)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw2650604635_bdw inst_cellmath__70__73__0(
	.inst_cellmath__70__73__out0(inst_cellmath__70__73),
	.inst_cellmath__70__73__in0(inst_cellmath__70__74),
	.inst_cellmath__70__73__in1(inst_cellmath__7)
	) ;
cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw2650604635_bdw inst_cellmath__70_0_0(
	.inst_cellmath__70_0_out0(inst_cellmath__70),
	.inst_cellmath__70_0_in0(inst_cellmath__8),
	.inst_cellmath__70_0_in1(inst_cellmath__70__73),
	.inst_cellmath__70_0_in2(inst_cellmath__62),
	.inst_cellmath__70_0_in3(inst_cellmath__4)
	) ;

assign inst_cellmath__64 = {1'B1,inst_cellmath__64__48_0[22:1]};
cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw2650604635_bdw inst_cellmath__73_0_0(
	.inst_cellmath__73_0_out0(inst_cellmath__73),
	.inst_cellmath__73_0_in0(inst_cellmath__71),
	.inst_cellmath__73_0_in1(inst_cellmath__70),
	.inst_cellmath__73_0_in2(inst_cellmath__64__48_0[22:1]),
	.inst_cellmath__73_0_in3(inst_cellmath__63),
	.inst_cellmath__73_0_in4(inst_cellmath__57[22:0])
	) ;

assign inst_cellmath__3 = {inst_cellmath__67,inst_cellmath__72,inst_cellmath__73};

assign x = inst_cellmath__3;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw2650604635_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;

assign inst_cellmath__21_0_out0 = 
	(inst_cellmath__21_0_in1)
	^(inst_cellmath__21_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw2650604635_bdw (
	inst_cellmath__9_0_out0,
	inst_cellmath__9_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__9_0_out0;
input [7:0] inst_cellmath__9_0_in0;

assign inst_cellmath__9_0_out0 = 
	(inst_cellmath__9_0_in0[0])
	&(inst_cellmath__9_0_in0[1])
	&(inst_cellmath__9_0_in0[2])
	&(inst_cellmath__9_0_in0[3])
	&(inst_cellmath__9_0_in0[4])
	&(inst_cellmath__9_0_in0[5])
	&(inst_cellmath__9_0_in0[6])
	&(inst_cellmath__9_0_in0[7]);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw2650604635_bdw (
	inst_cellmath__10__1__out0,
	inst_cellmath__10__1__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__10__1__out0;
input [22:0] inst_cellmath__10__1__in0;

assign inst_cellmath__10__1__out0 = ~(
	(inst_cellmath__10__1__in0[0])
	|(inst_cellmath__10__1__in0[1])
	|(inst_cellmath__10__1__in0[2])
	|(inst_cellmath__10__1__in0[3])
	|(inst_cellmath__10__1__in0[4])
	|(inst_cellmath__10__1__in0[5])
	|(inst_cellmath__10__1__in0[6])
	|(inst_cellmath__10__1__in0[7])
	|(inst_cellmath__10__1__in0[8])
	|(inst_cellmath__10__1__in0[9])
	|(inst_cellmath__10__1__in0[10])
	|(inst_cellmath__10__1__in0[11])
	|(inst_cellmath__10__1__in0[12])
	|(inst_cellmath__10__1__in0[13])
	|(inst_cellmath__10__1__in0[14])
	|(inst_cellmath__10__1__in0[15])
	|(inst_cellmath__10__1__in0[16])
	|(inst_cellmath__10__1__in0[17])
	|(inst_cellmath__10__1__in0[18])
	|(inst_cellmath__10__1__in0[19])
	|(inst_cellmath__10__1__in0[20])
	|(inst_cellmath__10__1__in0[21])
	|(inst_cellmath__10__1__in0[22]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw2650604635_bdw (
	inst_cellmath__12_0_out0,
	inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__12_0_out0;
input  inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1;

assign inst_cellmath__12_0_out0 = 
	(inst_cellmath__12_0_in0)
	&(inst_cellmath__12_0_in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw2650604635_bdw (
	inst_cellmath__14_0_out0,
	inst_cellmath__14_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__14_0_out0;
input [7:0] inst_cellmath__14_0_in0;

assign inst_cellmath__14_0_out0 = 
	(inst_cellmath__14_0_in0[0])
	&(inst_cellmath__14_0_in0[1])
	&(inst_cellmath__14_0_in0[2])
	&(inst_cellmath__14_0_in0[3])
	&(inst_cellmath__14_0_in0[4])
	&(inst_cellmath__14_0_in0[5])
	&(inst_cellmath__14_0_in0[6])
	&(inst_cellmath__14_0_in0[7]);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw2650604635_bdw (
	inst_cellmath__15__3__out0,
	inst_cellmath__15__3__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__15__3__out0;
input [22:0] inst_cellmath__15__3__in0;

assign inst_cellmath__15__3__out0 = ~(
	(inst_cellmath__15__3__in0[0])
	|(inst_cellmath__15__3__in0[1])
	|(inst_cellmath__15__3__in0[2])
	|(inst_cellmath__15__3__in0[3])
	|(inst_cellmath__15__3__in0[4])
	|(inst_cellmath__15__3__in0[5])
	|(inst_cellmath__15__3__in0[6])
	|(inst_cellmath__15__3__in0[7])
	|(inst_cellmath__15__3__in0[8])
	|(inst_cellmath__15__3__in0[9])
	|(inst_cellmath__15__3__in0[10])
	|(inst_cellmath__15__3__in0[11])
	|(inst_cellmath__15__3__in0[12])
	|(inst_cellmath__15__3__in0[13])
	|(inst_cellmath__15__3__in0[14])
	|(inst_cellmath__15__3__in0[15])
	|(inst_cellmath__15__3__in0[16])
	|(inst_cellmath__15__3__in0[17])
	|(inst_cellmath__15__3__in0[18])
	|(inst_cellmath__15__3__in0[19])
	|(inst_cellmath__15__3__in0[20])
	|(inst_cellmath__15__3__in0[21])
	|(inst_cellmath__15__3__in0[22]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw2650604635_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__17_0_out0;
input  inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1;

assign inst_cellmath__17_0_out0 = 
	(inst_cellmath__17_0_in1)
	&(inst_cellmath__17_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw2650604635_bdw (
	inst_cellmath__24__5__out0,
	inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__24__5__out0;
input  inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2;

assign inst_cellmath__24__5__out0 = 
	(inst_cellmath__24__5__in0)
	&(inst_cellmath__24__5__in2)
	&(inst_cellmath__24__5__in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw2650604635_bdw (
	inst_cellmath__13_1_out0,
	inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__13_1_out0;
input  inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1;

assign inst_cellmath__13_1_out0 = 
	(inst_cellmath__13_1_in0)
	&((~inst_cellmath__13_1_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw2650604635_bdw (
	inst_cellmath__18_0_out0,
	inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__18_0_out0;
input  inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1;

assign inst_cellmath__18_0_out0 = 
	(inst_cellmath__18_0_in1)
	&((~inst_cellmath__18_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw2650604635_bdw (
	inst_cellmath__63_1_out0,
	inst_cellmath__63_1_in0,
	inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__63_1_out0;
input [0:0] inst_cellmath__63_1_in0;
input  inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2;

assign inst_cellmath__63_1_out0 = 
	(inst_cellmath__63_1_in0)
	|(inst_cellmath__63_1_in2)
	|(inst_cellmath__63_1_in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw2650604635_bdw (
	inst_cellmath__11__2__out0,
	inst_cellmath__11__2__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__11__2__out0;
input [7:0] inst_cellmath__11__2__in0;

assign inst_cellmath__11__2__out0 = ~(
	(inst_cellmath__11__2__in0[0])
	|(inst_cellmath__11__2__in0[1])
	|(inst_cellmath__11__2__in0[2])
	|(inst_cellmath__11__2__in0[3])
	|(inst_cellmath__11__2__in0[4])
	|(inst_cellmath__11__2__in0[5])
	|(inst_cellmath__11__2__in0[6])
	|(inst_cellmath__11__2__in0[7]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw2650604635_bdw (
	inst_cellmath__16__4__out0,
	inst_cellmath__16__4__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__16__4__out0;
input [7:0] inst_cellmath__16__4__in0;

assign inst_cellmath__16__4__out0 = ~(
	(inst_cellmath__16__4__in0[0])
	|(inst_cellmath__16__4__in0[1])
	|(inst_cellmath__16__4__in0[2])
	|(inst_cellmath__16__4__in0[3])
	|(inst_cellmath__16__4__in0[4])
	|(inst_cellmath__16__4__in0[5])
	|(inst_cellmath__16__4__in0[6])
	|(inst_cellmath__16__4__in0[7]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw2650604635_bdw (
	inst_cellmath__67__67__out0,
	inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__67__67__out0;
input  inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1;

assign inst_cellmath__67__67__out0 = 
	(inst_cellmath__67__67__in1)
	&(inst_cellmath__67__67__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw2650604635_bdw (
	inst_cellmath__6_0_out0,
	inst_cellmath__6_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__6_0_out0;
input [2:0] inst_cellmath__6_0_in0;

assign inst_cellmath__6_0_out0 = (7'B0000001==(inst_cellmath__6_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw2650604635_bdw (
	inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1,
	inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1
	); /* architecture "behavioural" */ 
output [8:0] inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1;
input [7:0] inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1;
wire [8:0] inst_cellmath__27__6;

assign inst_cellmath__27__6 = {1'B1,inst_cellmath__28__8__in0};

assign inst_cellmath__28__8__out0 = inst_cellmath__28__8__in1 + inst_cellmath__27__6;
assign inst_cellmath__28__8__out1 = inst_cellmath__28__8__in1 + inst_cellmath__27__6 + 9'B000000001;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw2650604635_bdw (
	inst_cellmath__34_0_out0,
	inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__34_0_out0;
input [22:0] inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1;

assign inst_cellmath__34_0_out0 = ((28'B1000000000000000000000000000 ^ inst_cellmath__34_0_in0)>(28'B1000000000000000000000000000 ^ inst_cellmath__34_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw2650604635_bdw (
	inst_cellmath__32__14__out0,
	inst_cellmath__32__14__in0,
	inst_cellmath__32__14__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__32__14__out0;
input  inst_cellmath__32__14__in0;
input [8:8] inst_cellmath__32__14__in1;

assign inst_cellmath__32__14__out0 = 
	((~inst_cellmath__32__14__in1))
	&(inst_cellmath__32__14__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw2650604635_bdw (
	inst_cellmath__32_0_out0,
	inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__32_0_out0;
input [0:0] inst_cellmath__32_0_in0;
input [8:8] inst_cellmath__32_0_in1;

assign inst_cellmath__32_0_out0 = 
	(inst_cellmath__32_0_in1)
	|(inst_cellmath__32_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw2650604635_bdw (
	inst_cellmath__48_0_out0,
	inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__48_0_out0;
input  inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2;

reg [0:0] inst_cellmath__48_0_out0_tmp_0;
assign inst_cellmath__48_0_out0 = inst_cellmath__48_0_out0_tmp_0;
always @ (inst_cellmath__48_0_in0 or inst_cellmath__48_0_in2 or inst_cellmath__48_0_in1) begin
	case (inst_cellmath__48_0_in0)
		1'B0 : inst_cellmath__48_0_out0_tmp_0 = inst_cellmath__48_0_in2 ;
		default : inst_cellmath__48_0_out0_tmp_0 = inst_cellmath__48_0_in1 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw2650604635_bdw (
	inst_cellmath__35_0_out0,
	inst_cellmath__35_0_in0,
	inst_cellmath__35_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__35_0_out0;
input [7:0] inst_cellmath__35_0_in0;
input [8:0] inst_cellmath__35_0_in1;

reg [7:0] inst_cellmath__35_0_out0_tmp_0;
assign inst_cellmath__35_0_out0 = inst_cellmath__35_0_out0_tmp_0;
always @ (inst_cellmath__35_0_in1[8] or inst_cellmath__35_0_in1[7:0] or inst_cellmath__35_0_in0) begin
	case (inst_cellmath__35_0_in1[8])
		1'B0 : inst_cellmath__35_0_out0_tmp_0 = inst_cellmath__35_0_in1[7:0] ;
		default : inst_cellmath__35_0_out0_tmp_0 = ~inst_cellmath__35_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw2650604635_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;

assign inst_cellmath__30_0_out0 = ((12'B100000000000 ^ inst_cellmath__30_0_in0)>=(12'B100000000000 ^ 12'B000000011010));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw2650604635_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__31_0_out0;
input  inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1;

assign inst_cellmath__31_0_out0 = 
	(inst_cellmath__31_0_in1)
	|(inst_cellmath__31_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw2650604635_bdw (
	inst_cellmath__33__18__out0,
	inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__33__18__out0;
input  inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1;

assign inst_cellmath__33__18__out0 = 
	(inst_cellmath__33__18__in1)
	|(inst_cellmath__33__18__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw2650604635_bdw (
	inst_cellmath__36__15__out0,
	inst_cellmath__36__15__in0,
	inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__36__15__out0;
input  inst_cellmath__36__15__in0;
input [22:0] inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2;

reg [22:0] inst_cellmath__36__15__out0_tmp_0;
assign inst_cellmath__36__15__out0 = inst_cellmath__36__15__out0_tmp_0;
always @ (inst_cellmath__36__15__in0 or inst_cellmath__36__15__in1 or inst_cellmath__36__15__in2) begin
	case (inst_cellmath__36__15__in0)
		1'B0 : inst_cellmath__36__15__out0_tmp_0 = inst_cellmath__36__15__in1 ;
		default : inst_cellmath__36__15__out0_tmp_0 = inst_cellmath__36__15__in2 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw2650604635_bdw (
	inst_cellmath__37_0_out0,
	inst_cellmath__37_0_in0,
	inst_cellmath__37_0_in1
	); /* architecture "behavioural" */ 
output [49:0] inst_cellmath__37_0_out0;
input [22:0] inst_cellmath__37_0_in0;
input [4:0] inst_cellmath__37_0_in1;
wire [49:0] inst_cellmath__36;

assign inst_cellmath__36 = {1'B1,inst_cellmath__37_0_in0,26'B00000000000000000000000000};

assign inst_cellmath__37_0_out0 = inst_cellmath__36 >> inst_cellmath__37_0_in1;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw2650604635_bdw (
	inst_cellmath__33_49_24_out0,
	inst_cellmath__33_49_24_in0,
	inst_cellmath__33_49_24_in1
	); /* architecture "behavioural" */ 
output [49:24] inst_cellmath__33_49_24_out0;
input [49:24] inst_cellmath__33_49_24_in0;
input [0:0] inst_cellmath__33_49_24_in1;

reg [25:0] inst_cellmath__33_49_24_out0_tmp_0;
assign inst_cellmath__33_49_24_out0 = inst_cellmath__33_49_24_out0_tmp_0;
always @ (inst_cellmath__33_49_24_in1 or inst_cellmath__33_49_24_in0) begin
	case (inst_cellmath__33_49_24_in1)
		1'B0 : inst_cellmath__33_49_24_out0_tmp_0 = inst_cellmath__33_49_24_in0 ;
		default : inst_cellmath__33_49_24_out0_tmp_0 = {26{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw2650604635_bdw (
	inst_cellmath__42__22__out0,
	inst_cellmath__42__22__in0,
	inst_cellmath__42__22__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__42__22__out0;
input [23:0] inst_cellmath__42__22__in0;
input  inst_cellmath__42__22__in1;

assign inst_cellmath__42__22__out0 = 
	(inst_cellmath__42__22__in1)
	|(inst_cellmath__42__22__in0[0])
	|(inst_cellmath__42__22__in0[1])
	|(inst_cellmath__42__22__in0[2])
	|(inst_cellmath__42__22__in0[3])
	|(inst_cellmath__42__22__in0[4])
	|(inst_cellmath__42__22__in0[5])
	|(inst_cellmath__42__22__in0[6])
	|(inst_cellmath__42__22__in0[7])
	|(inst_cellmath__42__22__in0[8])
	|(inst_cellmath__42__22__in0[9])
	|(inst_cellmath__42__22__in0[10])
	|(inst_cellmath__42__22__in0[11])
	|(inst_cellmath__42__22__in0[12])
	|(inst_cellmath__42__22__in0[13])
	|(inst_cellmath__42__22__in0[14])
	|(inst_cellmath__42__22__in0[15])
	|(inst_cellmath__42__22__in0[16])
	|(inst_cellmath__42__22__in0[17])
	|(inst_cellmath__42__22__in0[18])
	|(inst_cellmath__42__22__in0[19])
	|(inst_cellmath__42__22__in0[20])
	|(inst_cellmath__42__22__in0[21])
	|(inst_cellmath__42__22__in0[22])
	|(inst_cellmath__42__22__in0[23]);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw2650604635_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__42_0_out0;
input [0:0] inst_cellmath__42_0_in0;
input  inst_cellmath__42_0_in1;

assign inst_cellmath__42_0_out0 = 
	(inst_cellmath__42_0_in0)
	&((~inst_cellmath__42_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw2650604635_bdw (
	inst_cellmath__44_0_out0,
	inst_cellmath__44_0_in0,
	inst_cellmath__44_0_in1,
	inst_cellmath__44_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__44_0_out0;
input  inst_cellmath__44_0_in0;
input [24:24] inst_cellmath__44_0_in1;
input  inst_cellmath__44_0_in2;

assign inst_cellmath__44_0_out0 = 
	(inst_cellmath__44_0_in2)
	&((~inst_cellmath__44_0_in1))
	&((~inst_cellmath__44_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__40_bdw2650604635_bdw (
	inst_cellmath__40_out0,
	inst_cellmath__40_in0,
	inst_cellmath__40_in1,
	inst_cellmath__40_in2
	); /* architecture "behavioural" */ 
output [23:0] inst_cellmath__40_out0;
input  inst_cellmath__40_in0;
input [22:0] inst_cellmath__40_in1,
	inst_cellmath__40_in2;
wire [24:0] inst_cellmath__25,
	inst_cellmath__26;

assign inst_cellmath__25[23:0] = {inst_cellmath__40_in2,1'B0};

assign inst_cellmath__26[23:0] = {inst_cellmath__40_in1,1'B0};

reg [23:0] inst_cellmath__40_out0_tmp_0;
assign inst_cellmath__40_out0 = inst_cellmath__40_out0_tmp_0;
always @ (inst_cellmath__40_in0 or inst_cellmath__25[23:0] or inst_cellmath__26[23:0]) begin
	case (inst_cellmath__40_in0)
		1'B0 : inst_cellmath__40_out0_tmp_0 = inst_cellmath__25[23:0] ;
		default : inst_cellmath__40_out0_tmp_0 = inst_cellmath__26[23:0] ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw2650604635_bdw (
	inst_cellmath__39__19__2mx_out0,
	inst_cellmath__39__19__2mx_in0,
	inst_cellmath__39__19__2mx_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__39__19__2mx_out0;
input [49:25] inst_cellmath__39__19__2mx_in0;
input  inst_cellmath__39__19__2mx_in1;

reg [24:0] inst_cellmath__39__19__2mx_out0_tmp_0;
assign inst_cellmath__39__19__2mx_out0 = inst_cellmath__39__19__2mx_out0_tmp_0;
always @ (inst_cellmath__39__19__2mx_in1 or inst_cellmath__39__19__2mx_in0) begin
	case (inst_cellmath__39__19__2mx_in1)
		1'B0 : inst_cellmath__39__19__2mx_out0_tmp_0 = inst_cellmath__39__19__2mx_in0 ;
		default : inst_cellmath__39__19__2mx_out0_tmp_0 = ~inst_cellmath__39__19__2mx_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw2650604635_bdw (
	inst_cellmath__45_0_out0,
	inst_cellmath__45_0_in0,
	inst_cellmath__45_0_in1,
	inst_cellmath__45_0_in2,
	inst_cellmath__45_0_in3
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__45_0_out0;
input  inst_cellmath__45_0_in0;
input [23:1] inst_cellmath__45_0_in1;
input [24:0] inst_cellmath__45_0_in2;
input  inst_cellmath__45_0_in3;
wire [24:0] inst_cellmath__40_0;
wire [25:0] inst_cellmath__39;

assign inst_cellmath__40_0 = {1'B1,inst_cellmath__45_0_in1,1'B0};

assign inst_cellmath__39 = {inst_cellmath__45_0_in3,inst_cellmath__45_0_in2};

wire [25:0] inst_cellmath__45_0_out0_tmp_0;
assign inst_cellmath__45_0_out0_tmp_0 = 
	+(inst_cellmath__45_0_in0)
	+((inst_cellmath__40_0[24:1]<<1));
assign inst_cellmath__45_0_out0 = inst_cellmath__45_0_out0_tmp_0
	+(inst_cellmath__39);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw2650604635_bdw (
	inst_cellmath__49_0_out0,
	inst_cellmath__49_0_in0
	); /* architecture "behavioural" */ 
output [5:0] inst_cellmath__49_0_out0;
input [25:0] inst_cellmath__49_0_in0;

reg [5:0] inst_cellmath__49_0_out0_tmp_0;
assign inst_cellmath__49_0_out0 = inst_cellmath__49_0_out0_tmp_0;
always @ (inst_cellmath__49_0_in0) begin
	casez (inst_cellmath__49_0_in0)
		26'B1????????????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000000 ;
		26'B01???????????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000001 ;
		26'B001??????????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000010 ;
		26'B0001?????????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000011 ;
		26'B00001????????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000100 ;
		26'B000001???????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000101 ;
		26'B0000001??????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000110 ;
		26'B00000001?????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B000111 ;
		26'B000000001????????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001000 ;
		26'B0000000001???????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001001 ;
		26'B00000000001??????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001010 ;
		26'B000000000001?????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001011 ;
		26'B0000000000001????????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001100 ;
		26'B00000000000001???????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001101 ;
		26'B000000000000001??????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001110 ;
		26'B0000000000000001?????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B001111 ;
		26'B00000000000000001????????? : inst_cellmath__49_0_out0_tmp_0 = 6'B010000 ;
		26'B000000000000000001???????? : inst_cellmath__49_0_out0_tmp_0 = 6'B010001 ;
		26'B0000000000000000001??????? : inst_cellmath__49_0_out0_tmp_0 = 6'B010010 ;
		26'B00000000000000000001?????? : inst_cellmath__49_0_out0_tmp_0 = 6'B010011 ;
		26'B000000000000000000001????? : inst_cellmath__49_0_out0_tmp_0 = 6'B010100 ;
		26'B0000000000000000000001???? : inst_cellmath__49_0_out0_tmp_0 = 6'B010101 ;
		26'B00000000000000000000001??? : inst_cellmath__49_0_out0_tmp_0 = 6'B010110 ;
		26'B000000000000000000000001?? : inst_cellmath__49_0_out0_tmp_0 = 6'B010111 ;
		26'B0000000000000000000000001? : inst_cellmath__49_0_out0_tmp_0 = 6'B011000 ;
		26'B00000000000000000000000001 : inst_cellmath__49_0_out0_tmp_0 = 6'B011001 ;
		default : inst_cellmath__49_0_out0_tmp_0 = 6'B100000 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw2650604635_bdw (
	inst_cellmath__67__66__out0,
	inst_cellmath__67__66__in0,
	inst_cellmath__67__66__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__67__66__out0;
input [5:5] inst_cellmath__67__66__in0;
input  inst_cellmath__67__66__in1;

assign inst_cellmath__67__66__out0 = 
	(inst_cellmath__67__66__in1)
	&((~inst_cellmath__67__66__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw2650604635_bdw (
	inst_cellmath__67__65__out0,
	inst_cellmath__67__65__in0,
	inst_cellmath__67__65__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__67__65__out0;
input [5:5] inst_cellmath__67__65__in0;
input  inst_cellmath__67__65__in1;

assign inst_cellmath__67__65__out0 = 
	(inst_cellmath__67__65__in1)
	|(inst_cellmath__67__65__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw2650604635_bdw (
	inst_cellmath__66__59__out0,
	inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__66__59__out0;
input  inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1;

assign inst_cellmath__66__59__out0 = 
	(inst_cellmath__66__59__in1)
	&(inst_cellmath__66__59__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw2650604635_bdw (
	inst_cellmath__66__58__out0,
	inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__66__58__out0;
input  inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1;

assign inst_cellmath__66__58__out0 = 
	(inst_cellmath__66__58__in1)
	|(inst_cellmath__66__58__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw2650604635_bdw (
	inst_cellmath__66__56__out0,
	inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1,
	inst_cellmath__66__56__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__66__56__out0;
input [0:0] inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1;
input  inst_cellmath__66__56__in2;

reg [0:0] inst_cellmath__66__56__out0_tmp_0;
assign inst_cellmath__66__56__out0 = inst_cellmath__66__56__out0_tmp_0;
always @ (inst_cellmath__66__56__in2 or inst_cellmath__66__56__in0 or inst_cellmath__66__56__in1) begin
	case (inst_cellmath__66__56__in2)
		1'B0 : inst_cellmath__66__56__out0_tmp_0 = inst_cellmath__66__56__in0 ;
		default : inst_cellmath__66__56__out0_tmp_0 = inst_cellmath__66__56__in1 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw2650604635_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__66_0_out0;
input [0:0] inst_cellmath__66_0_in0;
input  inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2;

assign inst_cellmath__66_0_out0 = 
	(inst_cellmath__66_0_in0)
	&(inst_cellmath__66_0_in2)
	&(inst_cellmath__66_0_in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw2650604635_bdw (
	inst_cellmath__64__48__2WWMM_out0,
	inst_cellmath__64__48__2WWMM_in0,
	inst_cellmath__64__48__2WWMM_in1,
	inst_cellmath__64__48__2WWMM_in2,
	inst_cellmath__64__48__2WWMM_in3,
	inst_cellmath__64__48__2WWMM_in4,
	inst_cellmath__64__48__2WWMM_in5
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__64__48__2WWMM_out0;
input  inst_cellmath__64__48__2WWMM_in0,
	inst_cellmath__64__48__2WWMM_in1,
	inst_cellmath__64__48__2WWMM_in2;
input [21:0] inst_cellmath__64__48__2WWMM_in3;
input  inst_cellmath__64__48__2WWMM_in4;
input [21:0] inst_cellmath__64__48__2WWMM_in5;
wire [1:0] inst_cellmath__13_0;
wire [22:0] inst_cellmath__64__48_1,
	inst_cellmath__64__48_2;

assign inst_cellmath__13_0 = {inst_cellmath__64__48__2WWMM_in1,inst_cellmath__64__48__2WWMM_in0};

assign inst_cellmath__64__48_1 = {inst_cellmath__64__48__2WWMM_in3,inst_cellmath__64__48__2WWMM_in2};

assign inst_cellmath__64__48_2 = {inst_cellmath__64__48__2WWMM_in5,inst_cellmath__64__48__2WWMM_in4};

reg [22:0] inst_cellmath__64__48__2WWMM_out0_tmp_0;
assign inst_cellmath__64__48__2WWMM_out0 = inst_cellmath__64__48__2WWMM_out0_tmp_0;
always @ (inst_cellmath__13_0 or inst_cellmath__64__48_1 or inst_cellmath__64__48_2) begin
	casez (inst_cellmath__13_0)
		2'B01 : inst_cellmath__64__48__2WWMM_out0_tmp_0 = inst_cellmath__64__48_1 ;
		2'B1? : inst_cellmath__64__48__2WWMM_out0_tmp_0 = inst_cellmath__64__48_2 ;
		default : inst_cellmath__64__48__2WWMM_out0_tmp_0 = 23'B00000000000000000000001 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw2650604635_bdw (
	inst_cellmath__67_0_out0,
	inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2,
	inst_cellmath__67_0_in3,
	inst_cellmath__67_0_in4,
	inst_cellmath__67_0_in5,
	inst_cellmath__67_0_in6
	); /* architecture "behavioural" */ 
output  inst_cellmath__67_0_out0;
input [0:0] inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2;
input  inst_cellmath__67_0_in3;
input [0:0] inst_cellmath__67_0_in4;
input  inst_cellmath__67_0_in5,
	inst_cellmath__67_0_in6;
wire [2:0] inst_cellmath__63_0;

assign inst_cellmath__63_0 = {inst_cellmath__67_0_in5,inst_cellmath__67_0_in0,inst_cellmath__67_0_in6};

reg [0:0] inst_cellmath__67_0_out0_tmp_0;
assign inst_cellmath__67_0_out0 = inst_cellmath__67_0_out0_tmp_0;
always @ (inst_cellmath__63_0 or inst_cellmath__67_0_in1 or inst_cellmath__67_0_in2 or inst_cellmath__67_0_in3 or inst_cellmath__67_0_in4) begin
	casez (inst_cellmath__63_0)
		3'B000 : inst_cellmath__67_0_out0_tmp_0 = inst_cellmath__67_0_in1 ;
		3'B001 : inst_cellmath__67_0_out0_tmp_0 = inst_cellmath__67_0_in2 ;
		3'B01? : inst_cellmath__67_0_out0_tmp_0 = inst_cellmath__67_0_in3 ;
		default : inst_cellmath__67_0_out0_tmp_0 = inst_cellmath__67_0_in4 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw2650604635_bdw (
	inst_cellmath__50_0_out0,
	inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__50_0_out0;
input [4:0] inst_cellmath__50_0_in0;
input [25:0] inst_cellmath__50_0_in1;

assign inst_cellmath__50_0_out0 = inst_cellmath__50_0_in1[24:0] << inst_cellmath__50_0_in0;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw2650604635_bdw (
	inst_cellmath__43__26__out0,
	inst_cellmath__43__26__in0,
	inst_cellmath__43__26__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__26__out0;
input  inst_cellmath__43__26__in0;
input [24:24] inst_cellmath__43__26__in1;

assign inst_cellmath__43__26__out0 = 
	(inst_cellmath__43__26__in1)
	^(inst_cellmath__43__26__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw2650604635_bdw (
	inst_cellmath__43__25__out0,
	inst_cellmath__43__25__in0,
	inst_cellmath__43__25__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__25__out0;
input [0:0] inst_cellmath__43__25__in0;
input  inst_cellmath__43__25__in1;

assign inst_cellmath__43__25__out0 = 
	((~inst_cellmath__43__25__in1))
	&(inst_cellmath__43__25__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw2650604635_bdw (
	inst_cellmath__43__28__out0,
	inst_cellmath__43__28__in0,
	inst_cellmath__43__28__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__28__out0;
input  inst_cellmath__43__28__in0;
input [24:24] inst_cellmath__43__28__in1;

assign inst_cellmath__43__28__out0 = 
	(inst_cellmath__43__28__in1)
	|(inst_cellmath__43__28__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw2650604635_bdw (
	inst_cellmath__43__27__out0,
	inst_cellmath__43__27__in0,
	inst_cellmath__43__27__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__27__out0;
input [0:0] inst_cellmath__43__27__in0;
input  inst_cellmath__43__27__in1;

assign inst_cellmath__43__27__out0 = 
	(inst_cellmath__43__27__in1)
	&(inst_cellmath__43__27__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw2650604635_bdw (
	inst_cellmath__43__24__out0,
	inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__24__out0;
input [0:0] inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1;

assign inst_cellmath__43__24__out0 = 
	(inst_cellmath__43__24__in1)
	|(inst_cellmath__43__24__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw2650604635_bdw (
	inst_cellmath__43_0_out0,
	inst_cellmath__43_0_in0,
	inst_cellmath__43_0_in1,
	inst_cellmath__43_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__43_0_out0;
input [0:0] inst_cellmath__43_0_in0;
input [24:24] inst_cellmath__43_0_in1;
input  inst_cellmath__43_0_in2;

reg [0:0] inst_cellmath__43_0_out0_tmp_0;
assign inst_cellmath__43_0_out0 = inst_cellmath__43_0_out0_tmp_0;
always @ (inst_cellmath__43_0_in2 or inst_cellmath__43_0_in1 or inst_cellmath__43_0_in0) begin
	case (inst_cellmath__43_0_in2)
		1'B0 : inst_cellmath__43_0_out0_tmp_0 = inst_cellmath__43_0_in1 ;
		default : inst_cellmath__43_0_out0_tmp_0 = inst_cellmath__43_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw2650604635_bdw (
	inst_cellmath__53_0_out0,
	inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1,
	inst_cellmath__53_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__53_0_out0;
input [1:1] inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1;
input  inst_cellmath__53_0_in2;

reg [0:0] inst_cellmath__53_0_out0_tmp_0;
assign inst_cellmath__53_0_out0 = inst_cellmath__53_0_out0_tmp_0;
always @ (inst_cellmath__53_0_in1 or inst_cellmath__53_0_in0 or inst_cellmath__53_0_in2) begin
	case (inst_cellmath__53_0_in1)
		1'B0 : inst_cellmath__53_0_out0_tmp_0 = inst_cellmath__53_0_in0 ;
		default : inst_cellmath__53_0_out0_tmp_0 = inst_cellmath__53_0_in2 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw2650604635_bdw (
	inst_cellmath__5_0_out0,
	inst_cellmath__5_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__5_0_out0;
input [2:0] inst_cellmath__5_0_in0;

assign inst_cellmath__5_0_out0 = (6'B000000==(inst_cellmath__5_0_in0 - 6'B000001));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw2650604635_bdw (
	inst_cellmath__55__39__out0,
	inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__39__out0;
input  inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1;

assign inst_cellmath__55__39__out0 = 
	(inst_cellmath__55__39__in0)
	&((~inst_cellmath__55__39__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw2650604635_bdw (
	inst_cellmath__55__38__out0,
	inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__38__out0;
input  inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1;

assign inst_cellmath__55__38__out0 = 
	(inst_cellmath__55__38__in0)
	&(inst_cellmath__55__38__in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw2650604635_bdw (
	inst_cellmath__8_0_out0,
	inst_cellmath__8_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__8_0_out0;
input [2:0] inst_cellmath__8_0_in0;

assign inst_cellmath__8_0_out0 = (7'B0000011==(inst_cellmath__8_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw2650604635_bdw (
	inst_cellmath__4_0_out0,
	inst_cellmath__4_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__4_0_out0;
input [2:0] inst_cellmath__4_0_in0;

assign inst_cellmath__4_0_out0 = (7'B0000000==inst_cellmath__4_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw2650604635_bdw (
	inst_cellmath__54__33__out0,
	inst_cellmath__54__33__in0,
	inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__54__33__out0;
input [0:0] inst_cellmath__54__33__in0;
input  inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2;

assign inst_cellmath__54__33__out0 = 
	(inst_cellmath__54__33__in2)
	|(inst_cellmath__54__33__in0)
	|(inst_cellmath__54__33__in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw2650604635_bdw (
	inst_cellmath__54_0_out0,
	inst_cellmath__54_0_in0,
	inst_cellmath__54_0_in1,
	inst_cellmath__54_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__54_0_out0;
input [0:0] inst_cellmath__54_0_in0;
input [1:1] inst_cellmath__54_0_in1;
input  inst_cellmath__54_0_in2;

reg [0:0] inst_cellmath__54_0_out0_tmp_0;
assign inst_cellmath__54_0_out0 = inst_cellmath__54_0_out0_tmp_0;
always @ (inst_cellmath__54_0_in1 or inst_cellmath__54_0_in0 or inst_cellmath__54_0_in2) begin
	case (inst_cellmath__54_0_in1)
		1'B0 : inst_cellmath__54_0_out0_tmp_0 = inst_cellmath__54_0_in0 ;
		default : inst_cellmath__54_0_out0_tmp_0 = inst_cellmath__54_0_in2 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw2650604635_bdw (
	inst_cellmath__55__37__out0,
	inst_cellmath__55__37__in0,
	inst_cellmath__55__37__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__37__out0;
input  inst_cellmath__55__37__in0;
input [2:2] inst_cellmath__55__37__in1;

assign inst_cellmath__55__37__out0 = 
	(inst_cellmath__55__37__in0)
	|(inst_cellmath__55__37__in1);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw2650604635_bdw (
	inst_cellmath__55__36__out0,
	inst_cellmath__55__36__in0,
	inst_cellmath__55__36__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__36__out0;
input [0:0] inst_cellmath__55__36__in0;
input  inst_cellmath__55__36__in1;

assign inst_cellmath__55__36__out0 = 
	(inst_cellmath__55__36__in1)
	&(inst_cellmath__55__36__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw2650604635_bdw (
	inst_cellmath__55__35__out0,
	inst_cellmath__55__35__in0,
	inst_cellmath__55__35__in1,
	inst_cellmath__55__35__in2,
	inst_cellmath__55__35__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__35__out0;
input  inst_cellmath__55__35__in0;
input [0:0] inst_cellmath__55__35__in1,
	inst_cellmath__55__35__in2,
	inst_cellmath__55__35__in3;

assign inst_cellmath__55__35__out0 = 
	(inst_cellmath__55__35__in1)
	|(inst_cellmath__55__35__in2)
	|(inst_cellmath__55__35__in0)
	|(inst_cellmath__55__35__in3);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw2650604635_bdw (
	inst_cellmath__55__34__out0,
	inst_cellmath__55__34__in0,
	inst_cellmath__55__34__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__34__out0;
input [0:0] inst_cellmath__55__34__in0;
input  inst_cellmath__55__34__in1;

assign inst_cellmath__55__34__out0 = 
	(inst_cellmath__55__34__in1)
	&(inst_cellmath__55__34__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw2650604635_bdw (
	inst_cellmath__55__41__out0,
	inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__41__out0;
input [0:0] inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1;

assign inst_cellmath__55__41__out0 = 
	(inst_cellmath__55__41__in1)
	|(inst_cellmath__55__41__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw2650604635_bdw (
	inst_cellmath__55__40__out0,
	inst_cellmath__55__40__in0,
	inst_cellmath__55__40__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__40__out0;
input [0:0] inst_cellmath__55__40__in0;
input  inst_cellmath__55__40__in1;

assign inst_cellmath__55__40__out0 = 
	(inst_cellmath__55__40__in1)
	&(inst_cellmath__55__40__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw2650604635_bdw (
	inst_cellmath__55_0_out0,
	inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__55_0_out0;
input [0:0] inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1;

assign inst_cellmath__55_0_out0 = 
	(inst_cellmath__55_0_in1)
	|(inst_cellmath__55_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw2650604635_bdw (
	inst_cellmath__57_0_out0,
	inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1
	); /* architecture "behavioural" */ 
output [23:0] inst_cellmath__57_0_out0;
input  inst_cellmath__57_0_in0;
input [24:2] inst_cellmath__57_0_in1;

assign inst_cellmath__57_0_out0 = 
	+(inst_cellmath__57_0_in1)
	+(inst_cellmath__57_0_in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw2650604635_bdw (
	inst_cellmath__62__46__out0,
	inst_cellmath__62__46__in0,
	inst_cellmath__62__46__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__62__46__out0;
input [23:23] inst_cellmath__62__46__in0;
input [24:24] inst_cellmath__62__46__in1;

assign inst_cellmath__62__46__out0 = 
	(inst_cellmath__62__46__in1)
	&(inst_cellmath__62__46__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw2650604635_bdw (
	inst_cellmath__62__45__out0,
	inst_cellmath__62__45__in0,
	inst_cellmath__62__45__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__62__45__out0;
input [0:0] inst_cellmath__62__45__in0;
input [25:25] inst_cellmath__62__45__in1;

assign inst_cellmath__62__45__out0 = 
	(inst_cellmath__62__45__in1)
	|(inst_cellmath__62__45__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw2650604635_bdw (
	inst_cellmath__29_0_out0,
	inst_cellmath__29_0_in0,
	inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__29_0_out0;
input [0:0] inst_cellmath__29_0_in0;
input [7:0] inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2;

reg [7:0] inst_cellmath__29_0_out0_tmp_0;
assign inst_cellmath__29_0_out0 = inst_cellmath__29_0_out0_tmp_0;
always @ (inst_cellmath__29_0_in0 or inst_cellmath__29_0_in2 or inst_cellmath__29_0_in1) begin
	case (inst_cellmath__29_0_in0)
		1'B0 : inst_cellmath__29_0_out0_tmp_0 = inst_cellmath__29_0_in2 ;
		default : inst_cellmath__29_0_out0_tmp_0 = inst_cellmath__29_0_in1 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw2650604635_bdw (
	inst_cellmath__62_0_out0,
	inst_cellmath__62_0_in0,
	inst_cellmath__62_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__62_0_out0;
input [0:0] inst_cellmath__62_0_in0;
input [7:0] inst_cellmath__62_0_in1;

assign inst_cellmath__62_0_out0 = 
	(inst_cellmath__62_0_in0)
	&((~inst_cellmath__62_0_in1[0]))
	&(inst_cellmath__62_0_in1[1])
	&(inst_cellmath__62_0_in1[2])
	&(inst_cellmath__62_0_in1[3])
	&(inst_cellmath__62_0_in1[4])
	&(inst_cellmath__62_0_in1[5])
	&(inst_cellmath__62_0_in1[6])
	&(inst_cellmath__62_0_in1[7]);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw2650604635_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1,
	inst_cellmath__59_0_in2
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__59_0_out0;
input [23:23] inst_cellmath__59_0_in0;
input [4:0] inst_cellmath__59_0_in1;
input [7:0] inst_cellmath__59_0_in2;

wire [9:0] inst_cellmath__59_0_out0_tmp_0;
wire [9:0] inst_cellmath__59_0_out0_tmp_1;
assign inst_cellmath__59_0_out0_tmp_1 = 
	+(inst_cellmath__59_0_in0)
	-(inst_cellmath__59_0_in1);
assign inst_cellmath__59_0_out0_tmp_0 = inst_cellmath__59_0_out0_tmp_1
	+(inst_cellmath__59_0_in2);
assign inst_cellmath__59_0_out0 = inst_cellmath__59_0_out0_tmp_0
	+(10'B0000000001);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw2650604635_bdw (
	inst_cellmath__60__44__out0,
	inst_cellmath__60__44__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__60__44__out0;
input [8:0] inst_cellmath__60__44__in0;

assign inst_cellmath__60__44__out0 = 
	(inst_cellmath__60__44__in0[0])
	|(inst_cellmath__60__44__in0[1])
	|(inst_cellmath__60__44__in0[2])
	|(inst_cellmath__60__44__in0[3])
	|(inst_cellmath__60__44__in0[4])
	|(inst_cellmath__60__44__in0[5])
	|(inst_cellmath__60__44__in0[6])
	|(inst_cellmath__60__44__in0[7])
	|(inst_cellmath__60__44__in0[8]);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw2650604635_bdw (
	inst_cellmath__71_1_out0,
	inst_cellmath__71_1_in0,
	inst_cellmath__71_1_in1,
	inst_cellmath__71_1_in2,
	inst_cellmath__71_1_in3,
	inst_cellmath__71_1_in4,
	inst_cellmath__71_1_in5,
	inst_cellmath__71_1_in6,
	inst_cellmath__71_1_in7
	); /* architecture "behavioural" */ 
output  inst_cellmath__71_1_out0;
input [0:0] inst_cellmath__71_1_in0;
input  inst_cellmath__71_1_in1,
	inst_cellmath__71_1_in2;
input [0:0] inst_cellmath__71_1_in3;
input [9:9] inst_cellmath__71_1_in4;
input [5:5] inst_cellmath__71_1_in5;
input  inst_cellmath__71_1_in6,
	inst_cellmath__71_1_in7;

assign inst_cellmath__71_1_out0 = 
	(inst_cellmath__71_1_in0)
	|(inst_cellmath__71_1_in2)
	|(inst_cellmath__71_1_in6)
	|(inst_cellmath__71_1_in1)
	|(inst_cellmath__71_1_in7)
	|(inst_cellmath__71_1_in5)
	|(inst_cellmath__71_1_in4)
	|((~inst_cellmath__71_1_in3));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw2650604635_bdw (
	inst_cellmath__68__69__out0,
	inst_cellmath__68__69__in0,
	inst_cellmath__68__69__in1,
	inst_cellmath__68__69__in2,
	inst_cellmath__68__69__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__68__69__out0;
input  inst_cellmath__68__69__in0;
input [0:0] inst_cellmath__68__69__in1,
	inst_cellmath__68__69__in2;
input  inst_cellmath__68__69__in3;

assign inst_cellmath__68__69__out0 = 
	(inst_cellmath__68__69__in2)
	|(inst_cellmath__68__69__in1)
	|(inst_cellmath__68__69__in3)
	|(inst_cellmath__68__69__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw2650604635_bdw (
	inst_cellmath__68__68__out0,
	inst_cellmath__68__68__in0,
	inst_cellmath__68__68__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__68__68__out0;
input [0:0] inst_cellmath__68__68__in0;
input  inst_cellmath__68__68__in1;

assign inst_cellmath__68__68__out0 = 
	(inst_cellmath__68__68__in1)
	&(inst_cellmath__68__68__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw2650604635_bdw (
	inst_cellmath__68_0_out0,
	inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1,
	inst_cellmath__68_0_in2,
	inst_cellmath__68_0_in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__68_0_out0;
input [0:0] inst_cellmath__68_0_in0;
input  inst_cellmath__68_0_in1,
	inst_cellmath__68_0_in2,
	inst_cellmath__68_0_in3;

assign inst_cellmath__68_0_out0 = 
	(inst_cellmath__68_0_in0)
	|(inst_cellmath__68_0_in1)
	|(inst_cellmath__68_0_in3)
	|(inst_cellmath__68_0_in2);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw2650604635_bdw (
	inst_cellmath__68__0__out0,
	inst_cellmath__68__0__in0,
	inst_cellmath__68__0__in1,
	inst_cellmath__68__0__in2,
	inst_cellmath__68__0__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__68__0__out0;
input  inst_cellmath__68__0__in0,
	inst_cellmath__68__0__in1,
	inst_cellmath__68__0__in2,
	inst_cellmath__68__0__in3;

assign inst_cellmath__68__0__out0 = 
	(inst_cellmath__68__0__in0)
	|(inst_cellmath__68__0__in1)
	|(inst_cellmath__68__0__in3)
	|(inst_cellmath__68__0__in2);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw2650604635_bdw (
	inst_cellmath__72_0_out0,
	inst_cellmath__72_0_in0,
	inst_cellmath__72_0_in1,
	inst_cellmath__72_0_in2,
	inst_cellmath__72_0_in3
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__72_0_out0;
input  inst_cellmath__72_0_in0;
input [0:0] inst_cellmath__72_0_in1,
	inst_cellmath__72_0_in2;
input [7:0] inst_cellmath__72_0_in3;
wire [7:0] inst_cellmath__68;

assign inst_cellmath__68[0] = inst_cellmath__72_0_in2;

assign inst_cellmath__68[7:1] = {{6{inst_cellmath__72_0_in1}}, inst_cellmath__72_0_in1};

reg [7:0] inst_cellmath__72_0_out0_tmp_0;
assign inst_cellmath__72_0_out0 = inst_cellmath__72_0_out0_tmp_0;
always @ (inst_cellmath__72_0_in0 or inst_cellmath__72_0_in3 or inst_cellmath__68) begin
	case (inst_cellmath__72_0_in0)
		1'B0 : inst_cellmath__72_0_out0_tmp_0 = inst_cellmath__72_0_in3 ;
		default : inst_cellmath__72_0_out0_tmp_0 = inst_cellmath__68 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw2650604635_bdw (
	inst_cellmath__7_0_out0,
	inst_cellmath__7_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__7_0_out0;
input [2:0] inst_cellmath__7_0_in0;

assign inst_cellmath__7_0_out0 = (7'B0000010==(inst_cellmath__7_0_in0 - 7'B0000001));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw2650604635_bdw (
	inst_cellmath__70__74__out0,
	inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__70__74__out0;
input  inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1;

reg [0:0] inst_cellmath__70__74__out0_tmp_0;
assign inst_cellmath__70__74__out0 = inst_cellmath__70__74__out0_tmp_0;
always @ (inst_cellmath__70__74__in0 or inst_cellmath__70__74__in1) begin
	case (inst_cellmath__70__74__in0)
		1'B0 : inst_cellmath__70__74__out0_tmp_0 = ~inst_cellmath__70__74__in1 ;
		default : inst_cellmath__70__74__out0_tmp_0 = inst_cellmath__70__74__in1 ;
	endcase
end
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw2650604635_bdw (
	inst_cellmath__70__73__out0,
	inst_cellmath__70__73__in0,
	inst_cellmath__70__73__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__70__73__out0;
input [0:0] inst_cellmath__70__73__in0;
input  inst_cellmath__70__73__in1;

assign inst_cellmath__70__73__out0 = 
	(inst_cellmath__70__73__in1)
	|(inst_cellmath__70__73__in0);
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw2650604635_bdw (
	inst_cellmath__70_0_out0,
	inst_cellmath__70_0_in0,
	inst_cellmath__70_0_in1,
	inst_cellmath__70_0_in2,
	inst_cellmath__70_0_in3
	); /* architecture "behavioural" */ 
output  inst_cellmath__70_0_out0;
input  inst_cellmath__70_0_in0;
input [0:0] inst_cellmath__70_0_in1;
input  inst_cellmath__70_0_in2,
	inst_cellmath__70_0_in3;

assign inst_cellmath__70_0_out0 = 
	(inst_cellmath__70_0_in2)
	&(inst_cellmath__70_0_in1)
	&((~inst_cellmath__70_0_in3))
	&((~inst_cellmath__70_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw2650604635_bdw (
	inst_cellmath__73_0_out0,
	inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1,
	inst_cellmath__73_0_in2,
	inst_cellmath__73_0_in3,
	inst_cellmath__73_0_in4
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__73_0_out0;
input  inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1;
input [22:1] inst_cellmath__73_0_in2;
input  inst_cellmath__73_0_in3;
input [22:0] inst_cellmath__73_0_in4;
wire [1:0] inst_cellmath__71_0;
wire [22:0] inst_cellmath__64;

assign inst_cellmath__71_0 = {inst_cellmath__73_0_in0,inst_cellmath__73_0_in3};

assign inst_cellmath__64 = {1'B1,inst_cellmath__73_0_in2};

reg [22:0] inst_cellmath__73_0_out0_tmp_0;
assign inst_cellmath__73_0_out0 = inst_cellmath__73_0_out0_tmp_0;
always @ (inst_cellmath__71_0 or inst_cellmath__73_0_in4 or inst_cellmath__73_0_in1 or inst_cellmath__64) begin
	casez (inst_cellmath__71_0)
		2'B0? : inst_cellmath__73_0_out0_tmp_0 = inst_cellmath__73_0_in4 ;
		2'B10 : inst_cellmath__73_0_out0_tmp_0 = {{22{inst_cellmath__73_0_in1}}, inst_cellmath__73_0_in1} ;
		default : inst_cellmath__73_0_out0_tmp_0 = inst_cellmath__64 ;
	endcase
end
endmodule

/* CADENCE  vLn4TQ3aqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/






