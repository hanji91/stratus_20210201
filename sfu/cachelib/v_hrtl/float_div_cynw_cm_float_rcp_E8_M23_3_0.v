module float_div_cynw_cm_float_rcp_E8_M23_3_0( a_sign, a_exp, a_man, x, aclk, astall );
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire[36:0] x_wire;
input aclk;
input astall;
float_div_cynw_cm_float_rcp_E8_M23_2_bdw1441870778_bdw float_div_cynw_cm_float_rcp_E8_M23_2_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .x(x_wire));
reg [36:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
assign x = x_reg_0;
endmodule
/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 12:11:00 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module float_div_cynw_cm_float_rcp_E8_M23_2_bdw1441870778_bdw (
	a_sign,
	a_exp,
	a_man,
	x
	); /* architecture "behavioural" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire  inst_cellmath__16,
	inst_cellmath__17,
	inst_cellmath__18,
	inst_cellmath__22,
	inst_cellmath__24,
	inst_cellmath__25,
	inst_cellmath__26,
	inst_cellmath__28,
	inst_cellmath__29,
	inst_cellmath__30;
wire [7:0] inst_cellmath__31,
	inst_cellmath__32;
wire  inst_cellmath__34;
wire [15:0] inst_cellmath__36;
wire [18:0] inst_cellmath__38;
wire [26:0] inst_mult_d_cellmath__49;
wire [23:0] inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum;
wire [36:0] inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
wire [39:0] inst_cellmath__57;
wire [22:0] inst_cellmath__59;
wire [31:0] inst_cellmath__69;
wire [0:0] inst_cellmath__22__5,
	inst_cellmath__22__4,
	inst_cellmath__28__7,
	inst_cellmath__29__8,
	inst_cellmath__32__14;
wire [1:0] inst_mult_d_cellmath__49__17,
	inst_mult_d_cellmath__49__16;
wire [10:0] inst_mult_d_cellmath__49__18;
wire [13:0] inst_mult_d_cellmath__49__15;
wire [1:0] inst_mult_d_cellmath__49__22,
	inst_mult_d_cellmath__49__21;
wire [9:0] inst_mult_d_cellmath__49__23;
wire [12:0] inst_mult_d_cellmath__49__20;
wire [1:0] inst_mult_d_cellmath__49__27,
	inst_mult_d_cellmath__49__26;
wire [8:0] inst_mult_d_cellmath__49__28;
wire [11:0] inst_mult_d_cellmath__49__25;
wire [1:0] inst_mult_d_cellmath__49__32,
	inst_mult_d_cellmath__49__31;
wire [7:0] inst_mult_d_cellmath__49__33;
wire [10:0] inst_mult_d_cellmath__49__30;
wire [1:0] inst_mult_d_cellmath__49__37,
	inst_mult_d_cellmath__49__36;
wire [6:0] inst_mult_d_cellmath__49__38;
wire [9:0] inst_mult_d_cellmath__49__35;
wire [1:0] inst_mult_d_cellmath__49__42,
	inst_mult_d_cellmath__49__41;
wire [5:0] inst_mult_d_cellmath__49__43;
wire [8:0] inst_mult_d_cellmath__49__40;
wire [1:0] inst_mult_d_cellmath__49__47,
	inst_mult_d_cellmath__49__46;
wire [4:0] inst_mult_d_cellmath__49__48;
wire [7:0] inst_mult_d_cellmath__49__45;
wire [1:0] inst_mult_d_cellmath__49__52,
	inst_mult_d_cellmath__49__51;
wire [3:0] inst_mult_d_cellmath__49__53;
wire [6:0] inst_mult_d_cellmath__49__50;
wire [1:0] inst_mult_d_cellmath__49__57,
	inst_mult_d_cellmath__49__56;
wire [2:0] inst_mult_d_cellmath__49__58;
wire [5:0] inst_mult_d_cellmath__49__55;
wire [1:0] inst_mult_d_cellmath__49__62,
	inst_mult_d_cellmath__49__61,
	inst_mult_d_cellmath__49__63;
wire [4:0] inst_mult_d_cellmath__49__60;
wire [1:0] inst_mult_d_cellmath__49__67,
	inst_mult_d_cellmath__49__66;
wire [0:0] inst_mult_d_cellmath__49__68;
wire [3:0] inst_mult_d_cellmath__49__65;
wire [1:0] inst_mult_d_cellmath__49__72,
	inst_mult_d_cellmath__49__71;
wire [2:0] inst_mult_d_cellmath__49__70;
wire [0:0] inst_cellmath__59__81;
wire [1:0] inst_cellmath__32__14_0,
	inst_cellmath__59__81_0;
wire [52:0] inst_noninc_a_cellmath__42_0;

assign x[32] = 1'B0;
cynw_cm_float_rcp_inst_cellmath__17_0_bdw1441870778_bdw inst_cellmath__17_0_0(
	.inst_cellmath__17_0_out0(inst_cellmath__17),
	.inst_cellmath__17_0_in0(a_exp)
	) ;
cynw_cm_float_rcp_inst_cellmath__18_0_bdw1441870778_bdw inst_cellmath__18_0_0(
	.inst_cellmath__18_0_out0(inst_cellmath__18),
	.inst_cellmath__18_0_in0(a_man)
	) ;
cynw_cm_float_rcp_inst_cellmath__25_0_bdw1441870778_bdw inst_cellmath__25_0_0(
	.inst_cellmath__25_0_out0(inst_cellmath__25),
	.inst_cellmath__25_0_in0(inst_cellmath__18),
	.inst_cellmath__25_0_in1(inst_cellmath__17)
	) ;
cynw_cm_float_rcp_inst_cellmath__16_0_bdw1441870778_bdw inst_cellmath__16_0_0(
	.inst_cellmath__16_0_out0(inst_cellmath__16),
	.inst_cellmath__16_0_in0(a_exp)
	) ;

assign inst_cellmath__22__5 = ~inst_cellmath__18;
cynw_cm_float_rcp_inst_cellmath__26_0_bdw1441870778_bdw inst_cellmath__26_0_0(
	.inst_cellmath__26_0_out0(inst_cellmath__26),
	.inst_cellmath__26_0_in0(inst_cellmath__22__5),
	.inst_cellmath__26_0_in1(a_exp)
	) ;
cynw_cm_float_rcp_inst_cellmath__29__8__bdw1441870778_bdw inst_cellmath__29__8__0(
	.inst_cellmath__29__8__out0(inst_cellmath__29__8),
	.inst_cellmath__29__8__in0(inst_cellmath__26),
	.inst_cellmath__29__8__in1(inst_cellmath__16)
	) ;
cynw_cm_float_rcp_inst_cellmath__29_0_bdw1441870778_bdw inst_cellmath__29_0_0(
	.inst_cellmath__29_0_out0(inst_cellmath__29),
	.inst_cellmath__29_0_in0(inst_cellmath__29__8),
	.inst_cellmath__29_0_in1(inst_cellmath__25)
	) ;
cynw_cm_float_rcp_inst_cellmath__32__14__bdw1441870778_bdw inst_cellmath__32__14__0(
	.inst_cellmath__32__14__out0(inst_cellmath__32__14),
	.inst_cellmath__32__14__in0(inst_cellmath__29),
	.inst_cellmath__32__14__in1(inst_cellmath__25)
	) ;
cynw_cm_float_rcp_inst_cellmath__24_0_bdw1441870778_bdw inst_cellmath__24_0_0(
	.inst_cellmath__24_0_out0(inst_cellmath__24),
	.inst_cellmath__24_0_in0(inst_cellmath__18),
	.inst_cellmath__24_0_in1(inst_cellmath__17)
	) ;
cynw_cm_float_rcp_inst_cellmath__22__4__bdw1441870778_bdw inst_cellmath__22__4__0(
	.inst_cellmath__22__4__out0(inst_cellmath__22__4),
	.inst_cellmath__22__4__in0(inst_cellmath__22__5),
	.inst_cellmath__22__4__in1(a_exp)
	) ;
cynw_cm_float_rcp_inst_cellmath__22_0_bdw1441870778_bdw inst_cellmath__22_0_0(
	.inst_cellmath__22_0_out0(inst_cellmath__22),
	.inst_cellmath__22_0_in0(inst_cellmath__22__4),
	.inst_cellmath__22_0_in1(inst_cellmath__17)
	) ;
cynw_cm_float_rcp_inst_cellmath__28__7__bdw1441870778_bdw inst_cellmath__28__7__0(
	.inst_cellmath__28__7__out0(inst_cellmath__28__7),
	.inst_cellmath__28__7__in0(inst_cellmath__24),
	.inst_cellmath__28__7__in1(inst_cellmath__22)
	) ;
cynw_cm_float_rcp_inst_cellmath__28_0_bdw1441870778_bdw inst_cellmath__28_0_0(
	.inst_cellmath__28_0_out0(inst_cellmath__28),
	.inst_cellmath__28_0_in0(inst_cellmath__28__7),
	.inst_cellmath__28_0_in1(inst_cellmath__25)
	) ;

assign inst_cellmath__32__14_0 = {inst_cellmath__32__14,inst_cellmath__28};
cynw_cm_float_rcp_inst_cellmath__30_0_bdw1441870778_bdw inst_cellmath__30_0_0(
	.inst_cellmath__30_0_out0(inst_cellmath__30),
	.inst_cellmath__30_0_in0(inst_cellmath__25),
	.inst_cellmath__30_0_in1(a_sign)
	) ;
cynw_cm_float_rcp_inst_cellmath__31_0_bdw1441870778_bdw inst_cellmath__31_0_0(
	.inst_cellmath__31_0_out0(inst_cellmath__31),
	.inst_cellmath__31_0_in0(inst_cellmath__22__5),
	.inst_cellmath__31_0_in1(a_exp)
	) ;
cynw_cm_float_rcp_inst_cellmath__32_0_bdw1441870778_bdw inst_cellmath__32_0_0(
	.inst_cellmath__32_0_out0(inst_cellmath__32),
	.inst_cellmath__32_0_in0(inst_cellmath__32__14),
	.inst_cellmath__32_0_in1(inst_cellmath__31),
	.inst_cellmath__32_0_in2(inst_cellmath__28)
	) ;
cynw_cm_float_rcp_inst_cellmath__59__81__bdw1441870778_bdw inst_cellmath__59__81__0(
	.inst_cellmath__59__81__out0(inst_cellmath__59__81),
	.inst_cellmath__59__81__in0(inst_cellmath__29),
	.inst_cellmath__59__81__in1(inst_cellmath__28),
	.inst_cellmath__59__81__in2(inst_cellmath__18)
	) ;

assign inst_cellmath__59__81_0 = {inst_cellmath__59__81,inst_cellmath__25};

assign inst_cellmath__34 = ~a_man[15];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__72__bdw1441870778_bdw inst_mult_d_cellmath__49__72__0(
	.inst_mult_d_cellmath__49__72__out0(inst_mult_d_cellmath__49__72[0]),
	.inst_mult_d_cellmath__49__72__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__72__in1(a_man[14])
	) ;

assign inst_mult_d_cellmath__49__71[0] = ~inst_mult_d_cellmath__49__72[0];

assign inst_mult_d_cellmath__49__70 = {inst_mult_d_cellmath__49__71[0],1'B0,a_man[14]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__67__bdw1441870778_bdw inst_mult_d_cellmath__49__67__0(
	.inst_mult_d_cellmath__49__67__out0(inst_mult_d_cellmath__49__67[0]),
	.inst_mult_d_cellmath__49__67__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__67__in1(a_man[13])
	) ;

assign inst_mult_d_cellmath__49__66[0] = ~inst_mult_d_cellmath__49__67[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__68__bdw1441870778_bdw inst_mult_d_cellmath__49__68__0(
	.inst_mult_d_cellmath__49__68__out0(inst_mult_d_cellmath__49__68),
	.inst_mult_d_cellmath__49__68__in0(a_man[14:13])
	) ;

assign inst_mult_d_cellmath__49__65 = {inst_mult_d_cellmath__49__66[0],inst_mult_d_cellmath__49__68,1'B0,a_man[13]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__62__bdw1441870778_bdw inst_mult_d_cellmath__49__62__0(
	.inst_mult_d_cellmath__49__62__out0(inst_mult_d_cellmath__49__62[0]),
	.inst_mult_d_cellmath__49__62__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__62__in1(a_man[12])
	) ;

assign inst_mult_d_cellmath__49__61[0] = ~inst_mult_d_cellmath__49__62[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__63__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__63__2mx_0(
	.inst_mult_d_cellmath__49__63__2mx_out0(inst_mult_d_cellmath__49__63),
	.inst_mult_d_cellmath__49__63__2mx_in0(a_man[14:12])
	) ;

assign inst_mult_d_cellmath__49__60 = {inst_mult_d_cellmath__49__61[0],inst_mult_d_cellmath__49__63,1'B0,a_man[12]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__57__bdw1441870778_bdw inst_mult_d_cellmath__49__57__0(
	.inst_mult_d_cellmath__49__57__out0(inst_mult_d_cellmath__49__57[0]),
	.inst_mult_d_cellmath__49__57__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__57__in1(a_man[11])
	) ;

assign inst_mult_d_cellmath__49__56[0] = ~inst_mult_d_cellmath__49__57[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__58__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__58__2mx_0(
	.inst_mult_d_cellmath__49__58__2mx_out0(inst_mult_d_cellmath__49__58),
	.inst_mult_d_cellmath__49__58__2mx_in0(a_man[14:11])
	) ;

assign inst_mult_d_cellmath__49__55 = {inst_mult_d_cellmath__49__56[0],inst_mult_d_cellmath__49__58,1'B0,a_man[11]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__52__bdw1441870778_bdw inst_mult_d_cellmath__49__52__0(
	.inst_mult_d_cellmath__49__52__out0(inst_mult_d_cellmath__49__52[0]),
	.inst_mult_d_cellmath__49__52__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__52__in1(a_man[10])
	) ;

assign inst_mult_d_cellmath__49__51[0] = ~inst_mult_d_cellmath__49__52[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__53__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__53__2mx_0(
	.inst_mult_d_cellmath__49__53__2mx_out0(inst_mult_d_cellmath__49__53),
	.inst_mult_d_cellmath__49__53__2mx_in0(a_man[14:10])
	) ;

assign inst_mult_d_cellmath__49__50 = {inst_mult_d_cellmath__49__51[0],inst_mult_d_cellmath__49__53,1'B0,a_man[10]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__47__bdw1441870778_bdw inst_mult_d_cellmath__49__47__0(
	.inst_mult_d_cellmath__49__47__out0(inst_mult_d_cellmath__49__47[0]),
	.inst_mult_d_cellmath__49__47__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__47__in1(a_man[9])
	) ;

assign inst_mult_d_cellmath__49__46[0] = ~inst_mult_d_cellmath__49__47[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__48__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__48__2mx_0(
	.inst_mult_d_cellmath__49__48__2mx_out0(inst_mult_d_cellmath__49__48),
	.inst_mult_d_cellmath__49__48__2mx_in0(a_man[14:9])
	) ;

assign inst_mult_d_cellmath__49__45 = {inst_mult_d_cellmath__49__46[0],inst_mult_d_cellmath__49__48,1'B0,a_man[9]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__42__bdw1441870778_bdw inst_mult_d_cellmath__49__42__0(
	.inst_mult_d_cellmath__49__42__out0(inst_mult_d_cellmath__49__42[0]),
	.inst_mult_d_cellmath__49__42__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__42__in1(a_man[8])
	) ;

assign inst_mult_d_cellmath__49__41[0] = ~inst_mult_d_cellmath__49__42[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__43__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__43__2mx_0(
	.inst_mult_d_cellmath__49__43__2mx_out0(inst_mult_d_cellmath__49__43),
	.inst_mult_d_cellmath__49__43__2mx_in0(a_man[14:8])
	) ;

assign inst_mult_d_cellmath__49__40 = {inst_mult_d_cellmath__49__41[0],inst_mult_d_cellmath__49__43,1'B0,a_man[8]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__37__bdw1441870778_bdw inst_mult_d_cellmath__49__37__0(
	.inst_mult_d_cellmath__49__37__out0(inst_mult_d_cellmath__49__37[0]),
	.inst_mult_d_cellmath__49__37__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__37__in1(a_man[7])
	) ;

assign inst_mult_d_cellmath__49__36[0] = ~inst_mult_d_cellmath__49__37[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__38__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__38__2mx_0(
	.inst_mult_d_cellmath__49__38__2mx_out0(inst_mult_d_cellmath__49__38),
	.inst_mult_d_cellmath__49__38__2mx_in0(a_man[14:7])
	) ;

assign inst_mult_d_cellmath__49__35 = {inst_mult_d_cellmath__49__36[0],inst_mult_d_cellmath__49__38,1'B0,a_man[7]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__32__bdw1441870778_bdw inst_mult_d_cellmath__49__32__0(
	.inst_mult_d_cellmath__49__32__out0(inst_mult_d_cellmath__49__32[0]),
	.inst_mult_d_cellmath__49__32__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__32__in1(a_man[6])
	) ;

assign inst_mult_d_cellmath__49__31[0] = ~inst_mult_d_cellmath__49__32[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__33__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__33__2mx_0(
	.inst_mult_d_cellmath__49__33__2mx_out0(inst_mult_d_cellmath__49__33),
	.inst_mult_d_cellmath__49__33__2mx_in0(a_man[14:6])
	) ;

assign inst_mult_d_cellmath__49__30 = {inst_mult_d_cellmath__49__31[0],inst_mult_d_cellmath__49__33,1'B0,a_man[6]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__27__bdw1441870778_bdw inst_mult_d_cellmath__49__27__0(
	.inst_mult_d_cellmath__49__27__out0(inst_mult_d_cellmath__49__27[0]),
	.inst_mult_d_cellmath__49__27__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__27__in1(a_man[5])
	) ;

assign inst_mult_d_cellmath__49__26[0] = ~inst_mult_d_cellmath__49__27[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__28__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__28__2mx_0(
	.inst_mult_d_cellmath__49__28__2mx_out0(inst_mult_d_cellmath__49__28),
	.inst_mult_d_cellmath__49__28__2mx_in0(a_man[14:5])
	) ;

assign inst_mult_d_cellmath__49__25 = {inst_mult_d_cellmath__49__26[0],inst_mult_d_cellmath__49__28,1'B0,a_man[5]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__17__bdw1441870778_bdw inst_mult_d_cellmath__49__17__0(
	.inst_mult_d_cellmath__49__17__out0(inst_mult_d_cellmath__49__17[0]),
	.inst_mult_d_cellmath__49__17__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__17__in1(a_man[3])
	) ;

assign inst_mult_d_cellmath__49__16[0] = ~inst_mult_d_cellmath__49__17[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__18__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__18__2mx_0(
	.inst_mult_d_cellmath__49__18__2mx_out0(inst_mult_d_cellmath__49__18),
	.inst_mult_d_cellmath__49__18__2mx_in0(a_man[14:3])
	) ;

assign inst_mult_d_cellmath__49__15 = {inst_mult_d_cellmath__49__16[0],inst_mult_d_cellmath__49__18,1'B0,a_man[3]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49__22__bdw1441870778_bdw inst_mult_d_cellmath__49__22__0(
	.inst_mult_d_cellmath__49__22__out0(inst_mult_d_cellmath__49__22[0]),
	.inst_mult_d_cellmath__49__22__in0(inst_cellmath__34),
	.inst_mult_d_cellmath__49__22__in1(a_man[4])
	) ;

assign inst_mult_d_cellmath__49__21[0] = ~inst_mult_d_cellmath__49__22[0];
cynw_cm_float_rcp_inst_mult_d_cellmath__49__23__2mx_bdw1441870778_bdw inst_mult_d_cellmath__49__23__2mx_0(
	.inst_mult_d_cellmath__49__23__2mx_out0(inst_mult_d_cellmath__49__23),
	.inst_mult_d_cellmath__49__23__2mx_in0(a_man[14:4])
	) ;

assign inst_mult_d_cellmath__49__20 = {inst_mult_d_cellmath__49__21[0],inst_mult_d_cellmath__49__23,1'B0,a_man[4]};
cynw_cm_float_rcp_inst_mult_d_cellmath__49_0_bdw1441870778_bdw inst_mult_d_cellmath__49_0_0(
	.inst_mult_d_cellmath__49_0_out0(inst_mult_d_cellmath__49[24:0]),
	.inst_mult_d_cellmath__49_0_in0(inst_mult_d_cellmath__49__71[0]),
	.inst_mult_d_cellmath__49_0_in1(inst_mult_d_cellmath__49__68),
	.inst_mult_d_cellmath__49_0_in2(inst_mult_d_cellmath__49__66[0]),
	.inst_mult_d_cellmath__49_0_in3(inst_mult_d_cellmath__49__63),
	.inst_mult_d_cellmath__49_0_in4(inst_mult_d_cellmath__49__61[0]),
	.inst_mult_d_cellmath__49_0_in5(inst_mult_d_cellmath__49__58),
	.inst_mult_d_cellmath__49_0_in6(inst_mult_d_cellmath__49__56[0]),
	.inst_mult_d_cellmath__49_0_in7(inst_mult_d_cellmath__49__53),
	.inst_mult_d_cellmath__49_0_in8(inst_mult_d_cellmath__49__51[0]),
	.inst_mult_d_cellmath__49_0_in9(inst_mult_d_cellmath__49__48),
	.inst_mult_d_cellmath__49_0_in10(inst_mult_d_cellmath__49__46[0]),
	.inst_mult_d_cellmath__49_0_in11(inst_mult_d_cellmath__49__43),
	.inst_mult_d_cellmath__49_0_in12(inst_mult_d_cellmath__49__41[0]),
	.inst_mult_d_cellmath__49_0_in13(inst_mult_d_cellmath__49__38),
	.inst_mult_d_cellmath__49_0_in14(inst_mult_d_cellmath__49__36[0]),
	.inst_mult_d_cellmath__49_0_in15(inst_mult_d_cellmath__49__33),
	.inst_mult_d_cellmath__49_0_in16(inst_mult_d_cellmath__49__31[0]),
	.inst_mult_d_cellmath__49_0_in17(inst_mult_d_cellmath__49__28),
	.inst_mult_d_cellmath__49_0_in18(inst_mult_d_cellmath__49__26[0]),
	.inst_mult_d_cellmath__49_0_in19(inst_mult_d_cellmath__49__23),
	.inst_mult_d_cellmath__49_0_in20(inst_mult_d_cellmath__49__21[0]),
	.inst_mult_d_cellmath__49_0_in21(inst_mult_d_cellmath__49__18),
	.inst_mult_d_cellmath__49_0_in22(inst_mult_d_cellmath__49__16[0]),
	.inst_mult_d_cellmath__49_0_in23(inst_cellmath__34),
	.inst_mult_d_cellmath__49_0_in24(a_man[14:3])
	) ;
cynw_cm_float_rcp_inst_noninc_a_cellmath__42_2WWMM_bdw1441870778_bdw inst_noninc_a_cellmath__42_2WWMM_0(
	.inst_noninc_a_cellmath__42_2WWMM_out0(inst_noninc_a_cellmath__42_0),
	.inst_noninc_a_cellmath__42_2WWMM_in0(a_man[22:16])
	) ;
cynw_cm_float_rcp_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_bdw1441870778_bdw inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_0(
	.inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_out0(inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum[21:0]),
	.inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in0(inst_noninc_a_cellmath__42_0[9:0]),
	.inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in1(inst_mult_d_cellmath__49[24:13])
	) ;

assign inst_cellmath__38 = {1'B1,inst_noninc_a_cellmath__42_0[27:10]};

assign inst_cellmath__36 = {inst_cellmath__34,a_man[14:0]};
cynw_cm_float_rcp_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_bdw1441870778_bdw inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_0(
	.inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_out0(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum[33:0]),
	.inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in0(inst_noninc_a_cellmath__42_0[27:10]),
	.inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in1(inst_cellmath__34),
	.inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in2(a_man[14:0])
	) ;
cynw_cm_float_rcp_inst_cellmath__57_0_bdw1441870778_bdw inst_cellmath__57_0_0(
	.inst_cellmath__57_0_out0(inst_cellmath__57),
	.inst_cellmath__57_0_in0(inst_noninc_a_cellmath__42_0[52:28]),
	.inst_cellmath__57_0_in1(inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum[21:0]),
	.inst_cellmath__57_0_in2(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum[33:0])
	) ;
cynw_cm_float_rcp_inst_cellmath__59_0_bdw1441870778_bdw inst_cellmath__59_0_0(
	.inst_cellmath__59_0_out0(inst_cellmath__59),
	.inst_cellmath__59_0_in0(inst_cellmath__59__81),
	.inst_cellmath__59_0_in1(inst_cellmath__57[39:17]),
	.inst_cellmath__59_0_in2(inst_cellmath__25)
	) ;

assign inst_cellmath__69 = {inst_cellmath__30,inst_cellmath__32,inst_cellmath__59};

assign x[31:0] = inst_cellmath__69;

assign x[36:33] = 4'B0000;
endmodule

module cynw_cm_float_rcp_inst_cellmath__17_0_bdw1441870778_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__17_0_out0;
input [7:0] inst_cellmath__17_0_in0;

assign inst_cellmath__17_0_out0 = (13'B0000011111110==(inst_cellmath__17_0_in0 - 13'B0000000000001));
endmodule

module cynw_cm_float_rcp_inst_cellmath__18_0_bdw1441870778_bdw (
	inst_cellmath__18_0_out0,
	inst_cellmath__18_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__18_0_out0;
input [22:0] inst_cellmath__18_0_in0;

assign inst_cellmath__18_0_out0 = (27'B000000000000000000000000000==inst_cellmath__18_0_in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__25_0_bdw1441870778_bdw (
	inst_cellmath__25_0_out0,
	inst_cellmath__25_0_in0,
	inst_cellmath__25_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__25_0_out0;
input  inst_cellmath__25_0_in0,
	inst_cellmath__25_0_in1;

assign inst_cellmath__25_0_out0 = 
	(inst_cellmath__25_0_in1)
	&((~inst_cellmath__25_0_in0));
endmodule

module cynw_cm_float_rcp_inst_cellmath__16_0_bdw1441870778_bdw (
	inst_cellmath__16_0_out0,
	inst_cellmath__16_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__16_0_out0;
input [7:0] inst_cellmath__16_0_in0;

assign inst_cellmath__16_0_out0 = (12'B000000000000==inst_cellmath__16_0_in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__26_0_bdw1441870778_bdw (
	inst_cellmath__26_0_out0,
	inst_cellmath__26_0_in0,
	inst_cellmath__26_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__26_0_out0;
input [0:0] inst_cellmath__26_0_in0;
input [7:0] inst_cellmath__26_0_in1;

assign inst_cellmath__26_0_out0 = ((inst_cellmath__26_0_in1 + inst_cellmath__26_0_in0)<12'B000000000000);
endmodule

module cynw_cm_float_rcp_inst_cellmath__29__8__bdw1441870778_bdw (
	inst_cellmath__29__8__out0,
	inst_cellmath__29__8__in0,
	inst_cellmath__29__8__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__29__8__out0;
input  inst_cellmath__29__8__in0,
	inst_cellmath__29__8__in1;

assign inst_cellmath__29__8__out0 = 
	(inst_cellmath__29__8__in1)
	|(inst_cellmath__29__8__in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__29_0_bdw1441870778_bdw (
	inst_cellmath__29_0_out0,
	inst_cellmath__29_0_in0,
	inst_cellmath__29_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__29_0_out0;
input [0:0] inst_cellmath__29_0_in0;
input  inst_cellmath__29_0_in1;

assign inst_cellmath__29_0_out0 = 
	((~inst_cellmath__29_0_in1))
	&(inst_cellmath__29_0_in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__32__14__bdw1441870778_bdw (
	inst_cellmath__32__14__out0,
	inst_cellmath__32__14__in0,
	inst_cellmath__32__14__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__32__14__out0;
input  inst_cellmath__32__14__in0,
	inst_cellmath__32__14__in1;

assign inst_cellmath__32__14__out0 = 
	(inst_cellmath__32__14__in1)
	|(inst_cellmath__32__14__in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__24_0_bdw1441870778_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__24_0_out0;
input  inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1;

assign inst_cellmath__24_0_out0 = 
	(inst_cellmath__24_0_in1)
	&(inst_cellmath__24_0_in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__22__4__bdw1441870778_bdw (
	inst_cellmath__22__4__out0,
	inst_cellmath__22__4__in0,
	inst_cellmath__22__4__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__22__4__out0;
input [0:0] inst_cellmath__22__4__in0;
input [7:0] inst_cellmath__22__4__in1;

assign inst_cellmath__22__4__out0 = (14'B00000011111101<(inst_cellmath__22__4__in1 + inst_cellmath__22__4__in0));
endmodule

module cynw_cm_float_rcp_inst_cellmath__22_0_bdw1441870778_bdw (
	inst_cellmath__22_0_out0,
	inst_cellmath__22_0_in0,
	inst_cellmath__22_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__22_0_out0;
input [0:0] inst_cellmath__22_0_in0;
input  inst_cellmath__22_0_in1;

assign inst_cellmath__22_0_out0 = 
	(inst_cellmath__22_0_in0)
	&((~inst_cellmath__22_0_in1));
endmodule

module cynw_cm_float_rcp_inst_cellmath__28__7__bdw1441870778_bdw (
	inst_cellmath__28__7__out0,
	inst_cellmath__28__7__in0,
	inst_cellmath__28__7__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__28__7__out0;
input  inst_cellmath__28__7__in0,
	inst_cellmath__28__7__in1;

assign inst_cellmath__28__7__out0 = 
	(inst_cellmath__28__7__in0)
	|(inst_cellmath__28__7__in1);
endmodule

module cynw_cm_float_rcp_inst_cellmath__28_0_bdw1441870778_bdw (
	inst_cellmath__28_0_out0,
	inst_cellmath__28_0_in0,
	inst_cellmath__28_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__28_0_out0;
input [0:0] inst_cellmath__28_0_in0;
input  inst_cellmath__28_0_in1;

assign inst_cellmath__28_0_out0 = 
	((~inst_cellmath__28_0_in1))
	&(inst_cellmath__28_0_in0);
endmodule

module cynw_cm_float_rcp_inst_cellmath__30_0_bdw1441870778_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0,
	inst_cellmath__30_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__30_0_out0;
input  inst_cellmath__30_0_in0,
	inst_cellmath__30_0_in1;

assign inst_cellmath__30_0_out0 = 
	(inst_cellmath__30_0_in1)
	&((~inst_cellmath__30_0_in0));
endmodule

module cynw_cm_float_rcp_inst_cellmath__31_0_bdw1441870778_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__31_0_out0;
input [0:0] inst_cellmath__31_0_in0;
input [7:0] inst_cellmath__31_0_in1;

wire [7:0] inst_cellmath__31_0_out0_tmp_0;
assign inst_cellmath__31_0_out0_tmp_0 = 
	-(inst_cellmath__31_0_in0)
	-(inst_cellmath__31_0_in1);
assign inst_cellmath__31_0_out0 = inst_cellmath__31_0_out0_tmp_0
	+(8'B11111110);
endmodule

module cynw_cm_float_rcp_inst_cellmath__32_0_bdw1441870778_bdw (
	inst_cellmath__32_0_out0,
	inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1,
	inst_cellmath__32_0_in2
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__32_0_out0;
input [0:0] inst_cellmath__32_0_in0;
input [7:0] inst_cellmath__32_0_in1;
input  inst_cellmath__32_0_in2;
wire [1:0] inst_cellmath__32__14_0;

assign inst_cellmath__32__14_0 = {inst_cellmath__32_0_in0,inst_cellmath__32_0_in2};

reg [7:0] inst_cellmath__32_0_out0_tmp_0;
assign inst_cellmath__32_0_out0 = inst_cellmath__32_0_out0_tmp_0;
always @ (inst_cellmath__32__14_0 or inst_cellmath__32_0_in1) begin
	casez (inst_cellmath__32__14_0)
		2'B00 : inst_cellmath__32_0_out0_tmp_0 = inst_cellmath__32_0_in1 ;
		2'B1? : inst_cellmath__32_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__32_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_cellmath__59__81__bdw1441870778_bdw (
	inst_cellmath__59__81__out0,
	inst_cellmath__59__81__in0,
	inst_cellmath__59__81__in1,
	inst_cellmath__59__81__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__59__81__out0;
input  inst_cellmath__59__81__in0,
	inst_cellmath__59__81__in1,
	inst_cellmath__59__81__in2;

assign inst_cellmath__59__81__out0 = 
	(inst_cellmath__59__81__in2)
	|(inst_cellmath__59__81__in1)
	|(inst_cellmath__59__81__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__72__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__72__out0,
	inst_mult_d_cellmath__49__72__in0,
	inst_mult_d_cellmath__49__72__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__72__out0;
input  inst_mult_d_cellmath__49__72__in0;
input [14:14] inst_mult_d_cellmath__49__72__in1;

assign inst_mult_d_cellmath__49__72__out0 = 
	(inst_mult_d_cellmath__49__72__in1)
	&(inst_mult_d_cellmath__49__72__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__67__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__67__out0,
	inst_mult_d_cellmath__49__67__in0,
	inst_mult_d_cellmath__49__67__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__67__out0;
input  inst_mult_d_cellmath__49__67__in0;
input [13:13] inst_mult_d_cellmath__49__67__in1;

assign inst_mult_d_cellmath__49__67__out0 = 
	(inst_mult_d_cellmath__49__67__in1)
	&(inst_mult_d_cellmath__49__67__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__68__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__68__out0,
	inst_mult_d_cellmath__49__68__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__68__out0;
input [14:13] inst_mult_d_cellmath__49__68__in0;

assign inst_mult_d_cellmath__49__68__out0 = 
	(inst_mult_d_cellmath__49__68__in0[13])
	&(inst_mult_d_cellmath__49__68__in0[14]);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__62__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__62__out0,
	inst_mult_d_cellmath__49__62__in0,
	inst_mult_d_cellmath__49__62__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__62__out0;
input  inst_mult_d_cellmath__49__62__in0;
input [12:12] inst_mult_d_cellmath__49__62__in1;

assign inst_mult_d_cellmath__49__62__out0 = 
	(inst_mult_d_cellmath__49__62__in1)
	&(inst_mult_d_cellmath__49__62__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__63__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__63__2mx_out0,
	inst_mult_d_cellmath__49__63__2mx_in0
	); /* architecture "behavioural" */ 
output [1:0] inst_mult_d_cellmath__49__63__2mx_out0;
input [14:12] inst_mult_d_cellmath__49__63__2mx_in0;

reg [1:0] inst_mult_d_cellmath__49__63__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__63__2mx_out0 = inst_mult_d_cellmath__49__63__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__63__2mx_in0[12] or inst_mult_d_cellmath__49__63__2mx_in0[14:13]) begin
	case (inst_mult_d_cellmath__49__63__2mx_in0[12])
		1'B1 : inst_mult_d_cellmath__49__63__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__63__2mx_in0[14:13] ;
		default : inst_mult_d_cellmath__49__63__2mx_out0_tmp_0 = {2{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__57__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__57__out0,
	inst_mult_d_cellmath__49__57__in0,
	inst_mult_d_cellmath__49__57__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__57__out0;
input  inst_mult_d_cellmath__49__57__in0;
input [11:11] inst_mult_d_cellmath__49__57__in1;

assign inst_mult_d_cellmath__49__57__out0 = 
	(inst_mult_d_cellmath__49__57__in1)
	&(inst_mult_d_cellmath__49__57__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__58__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__58__2mx_out0,
	inst_mult_d_cellmath__49__58__2mx_in0
	); /* architecture "behavioural" */ 
output [2:0] inst_mult_d_cellmath__49__58__2mx_out0;
input [14:11] inst_mult_d_cellmath__49__58__2mx_in0;

reg [2:0] inst_mult_d_cellmath__49__58__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__58__2mx_out0 = inst_mult_d_cellmath__49__58__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__58__2mx_in0[11] or inst_mult_d_cellmath__49__58__2mx_in0[14:12]) begin
	case (inst_mult_d_cellmath__49__58__2mx_in0[11])
		1'B1 : inst_mult_d_cellmath__49__58__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__58__2mx_in0[14:12] ;
		default : inst_mult_d_cellmath__49__58__2mx_out0_tmp_0 = {3{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__52__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__52__out0,
	inst_mult_d_cellmath__49__52__in0,
	inst_mult_d_cellmath__49__52__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__52__out0;
input  inst_mult_d_cellmath__49__52__in0;
input [10:10] inst_mult_d_cellmath__49__52__in1;

assign inst_mult_d_cellmath__49__52__out0 = 
	(inst_mult_d_cellmath__49__52__in1)
	&(inst_mult_d_cellmath__49__52__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__53__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__53__2mx_out0,
	inst_mult_d_cellmath__49__53__2mx_in0
	); /* architecture "behavioural" */ 
output [3:0] inst_mult_d_cellmath__49__53__2mx_out0;
input [14:10] inst_mult_d_cellmath__49__53__2mx_in0;

reg [3:0] inst_mult_d_cellmath__49__53__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__53__2mx_out0 = inst_mult_d_cellmath__49__53__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__53__2mx_in0[10] or inst_mult_d_cellmath__49__53__2mx_in0[14:11]) begin
	case (inst_mult_d_cellmath__49__53__2mx_in0[10])
		1'B1 : inst_mult_d_cellmath__49__53__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__53__2mx_in0[14:11] ;
		default : inst_mult_d_cellmath__49__53__2mx_out0_tmp_0 = {4{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__47__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__47__out0,
	inst_mult_d_cellmath__49__47__in0,
	inst_mult_d_cellmath__49__47__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__47__out0;
input  inst_mult_d_cellmath__49__47__in0;
input [9:9] inst_mult_d_cellmath__49__47__in1;

assign inst_mult_d_cellmath__49__47__out0 = 
	(inst_mult_d_cellmath__49__47__in1)
	&(inst_mult_d_cellmath__49__47__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__48__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__48__2mx_out0,
	inst_mult_d_cellmath__49__48__2mx_in0
	); /* architecture "behavioural" */ 
output [4:0] inst_mult_d_cellmath__49__48__2mx_out0;
input [14:9] inst_mult_d_cellmath__49__48__2mx_in0;

reg [4:0] inst_mult_d_cellmath__49__48__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__48__2mx_out0 = inst_mult_d_cellmath__49__48__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__48__2mx_in0[9] or inst_mult_d_cellmath__49__48__2mx_in0[14:10]) begin
	case (inst_mult_d_cellmath__49__48__2mx_in0[9])
		1'B1 : inst_mult_d_cellmath__49__48__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__48__2mx_in0[14:10] ;
		default : inst_mult_d_cellmath__49__48__2mx_out0_tmp_0 = {5{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__42__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__42__out0,
	inst_mult_d_cellmath__49__42__in0,
	inst_mult_d_cellmath__49__42__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__42__out0;
input  inst_mult_d_cellmath__49__42__in0;
input [8:8] inst_mult_d_cellmath__49__42__in1;

assign inst_mult_d_cellmath__49__42__out0 = 
	(inst_mult_d_cellmath__49__42__in1)
	&(inst_mult_d_cellmath__49__42__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__43__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__43__2mx_out0,
	inst_mult_d_cellmath__49__43__2mx_in0
	); /* architecture "behavioural" */ 
output [5:0] inst_mult_d_cellmath__49__43__2mx_out0;
input [14:8] inst_mult_d_cellmath__49__43__2mx_in0;

reg [5:0] inst_mult_d_cellmath__49__43__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__43__2mx_out0 = inst_mult_d_cellmath__49__43__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__43__2mx_in0[8] or inst_mult_d_cellmath__49__43__2mx_in0[14:9]) begin
	case (inst_mult_d_cellmath__49__43__2mx_in0[8])
		1'B1 : inst_mult_d_cellmath__49__43__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__43__2mx_in0[14:9] ;
		default : inst_mult_d_cellmath__49__43__2mx_out0_tmp_0 = {6{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__37__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__37__out0,
	inst_mult_d_cellmath__49__37__in0,
	inst_mult_d_cellmath__49__37__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__37__out0;
input  inst_mult_d_cellmath__49__37__in0;
input [7:7] inst_mult_d_cellmath__49__37__in1;

assign inst_mult_d_cellmath__49__37__out0 = 
	(inst_mult_d_cellmath__49__37__in1)
	&(inst_mult_d_cellmath__49__37__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__38__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__38__2mx_out0,
	inst_mult_d_cellmath__49__38__2mx_in0
	); /* architecture "behavioural" */ 
output [6:0] inst_mult_d_cellmath__49__38__2mx_out0;
input [14:7] inst_mult_d_cellmath__49__38__2mx_in0;

reg [6:0] inst_mult_d_cellmath__49__38__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__38__2mx_out0 = inst_mult_d_cellmath__49__38__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__38__2mx_in0[7] or inst_mult_d_cellmath__49__38__2mx_in0[14:8]) begin
	case (inst_mult_d_cellmath__49__38__2mx_in0[7])
		1'B1 : inst_mult_d_cellmath__49__38__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__38__2mx_in0[14:8] ;
		default : inst_mult_d_cellmath__49__38__2mx_out0_tmp_0 = {7{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__32__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__32__out0,
	inst_mult_d_cellmath__49__32__in0,
	inst_mult_d_cellmath__49__32__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__32__out0;
input  inst_mult_d_cellmath__49__32__in0;
input [6:6] inst_mult_d_cellmath__49__32__in1;

assign inst_mult_d_cellmath__49__32__out0 = 
	(inst_mult_d_cellmath__49__32__in1)
	&(inst_mult_d_cellmath__49__32__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__33__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__33__2mx_out0,
	inst_mult_d_cellmath__49__33__2mx_in0
	); /* architecture "behavioural" */ 
output [7:0] inst_mult_d_cellmath__49__33__2mx_out0;
input [14:6] inst_mult_d_cellmath__49__33__2mx_in0;

reg [7:0] inst_mult_d_cellmath__49__33__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__33__2mx_out0 = inst_mult_d_cellmath__49__33__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__33__2mx_in0[6] or inst_mult_d_cellmath__49__33__2mx_in0[14:7]) begin
	case (inst_mult_d_cellmath__49__33__2mx_in0[6])
		1'B1 : inst_mult_d_cellmath__49__33__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__33__2mx_in0[14:7] ;
		default : inst_mult_d_cellmath__49__33__2mx_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__27__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__27__out0,
	inst_mult_d_cellmath__49__27__in0,
	inst_mult_d_cellmath__49__27__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__27__out0;
input  inst_mult_d_cellmath__49__27__in0;
input [5:5] inst_mult_d_cellmath__49__27__in1;

assign inst_mult_d_cellmath__49__27__out0 = 
	(inst_mult_d_cellmath__49__27__in1)
	&(inst_mult_d_cellmath__49__27__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__28__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__28__2mx_out0,
	inst_mult_d_cellmath__49__28__2mx_in0
	); /* architecture "behavioural" */ 
output [8:0] inst_mult_d_cellmath__49__28__2mx_out0;
input [14:5] inst_mult_d_cellmath__49__28__2mx_in0;

reg [8:0] inst_mult_d_cellmath__49__28__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__28__2mx_out0 = inst_mult_d_cellmath__49__28__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__28__2mx_in0[5] or inst_mult_d_cellmath__49__28__2mx_in0[14:6]) begin
	case (inst_mult_d_cellmath__49__28__2mx_in0[5])
		1'B1 : inst_mult_d_cellmath__49__28__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__28__2mx_in0[14:6] ;
		default : inst_mult_d_cellmath__49__28__2mx_out0_tmp_0 = {9{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__17__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__17__out0,
	inst_mult_d_cellmath__49__17__in0,
	inst_mult_d_cellmath__49__17__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__17__out0;
input  inst_mult_d_cellmath__49__17__in0;
input [3:3] inst_mult_d_cellmath__49__17__in1;

assign inst_mult_d_cellmath__49__17__out0 = 
	(inst_mult_d_cellmath__49__17__in1)
	&(inst_mult_d_cellmath__49__17__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__18__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__18__2mx_out0,
	inst_mult_d_cellmath__49__18__2mx_in0
	); /* architecture "behavioural" */ 
output [10:0] inst_mult_d_cellmath__49__18__2mx_out0;
input [14:3] inst_mult_d_cellmath__49__18__2mx_in0;

reg [10:0] inst_mult_d_cellmath__49__18__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__18__2mx_out0 = inst_mult_d_cellmath__49__18__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__18__2mx_in0[3] or inst_mult_d_cellmath__49__18__2mx_in0[14:4]) begin
	case (inst_mult_d_cellmath__49__18__2mx_in0[3])
		1'B1 : inst_mult_d_cellmath__49__18__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__18__2mx_in0[14:4] ;
		default : inst_mult_d_cellmath__49__18__2mx_out0_tmp_0 = {11{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__22__bdw1441870778_bdw (
	inst_mult_d_cellmath__49__22__out0,
	inst_mult_d_cellmath__49__22__in0,
	inst_mult_d_cellmath__49__22__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_mult_d_cellmath__49__22__out0;
input  inst_mult_d_cellmath__49__22__in0;
input [4:4] inst_mult_d_cellmath__49__22__in1;

assign inst_mult_d_cellmath__49__22__out0 = 
	(inst_mult_d_cellmath__49__22__in1)
	&(inst_mult_d_cellmath__49__22__in0);
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49__23__2mx_bdw1441870778_bdw (
	inst_mult_d_cellmath__49__23__2mx_out0,
	inst_mult_d_cellmath__49__23__2mx_in0
	); /* architecture "behavioural" */ 
output [9:0] inst_mult_d_cellmath__49__23__2mx_out0;
input [14:4] inst_mult_d_cellmath__49__23__2mx_in0;

reg [9:0] inst_mult_d_cellmath__49__23__2mx_out0_tmp_0;
assign inst_mult_d_cellmath__49__23__2mx_out0 = inst_mult_d_cellmath__49__23__2mx_out0_tmp_0;
always @ (inst_mult_d_cellmath__49__23__2mx_in0[4] or inst_mult_d_cellmath__49__23__2mx_in0[14:5]) begin
	case (inst_mult_d_cellmath__49__23__2mx_in0[4])
		1'B1 : inst_mult_d_cellmath__49__23__2mx_out0_tmp_0 = inst_mult_d_cellmath__49__23__2mx_in0[14:5] ;
		default : inst_mult_d_cellmath__49__23__2mx_out0_tmp_0 = {10{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_mult_d_cellmath__49_0_bdw1441870778_bdw (
	inst_mult_d_cellmath__49_0_out0,
	inst_mult_d_cellmath__49_0_in0,
	inst_mult_d_cellmath__49_0_in1,
	inst_mult_d_cellmath__49_0_in2,
	inst_mult_d_cellmath__49_0_in3,
	inst_mult_d_cellmath__49_0_in4,
	inst_mult_d_cellmath__49_0_in5,
	inst_mult_d_cellmath__49_0_in6,
	inst_mult_d_cellmath__49_0_in7,
	inst_mult_d_cellmath__49_0_in8,
	inst_mult_d_cellmath__49_0_in9,
	inst_mult_d_cellmath__49_0_in10,
	inst_mult_d_cellmath__49_0_in11,
	inst_mult_d_cellmath__49_0_in12,
	inst_mult_d_cellmath__49_0_in13,
	inst_mult_d_cellmath__49_0_in14,
	inst_mult_d_cellmath__49_0_in15,
	inst_mult_d_cellmath__49_0_in16,
	inst_mult_d_cellmath__49_0_in17,
	inst_mult_d_cellmath__49_0_in18,
	inst_mult_d_cellmath__49_0_in19,
	inst_mult_d_cellmath__49_0_in20,
	inst_mult_d_cellmath__49_0_in21,
	inst_mult_d_cellmath__49_0_in22,
	inst_mult_d_cellmath__49_0_in23,
	inst_mult_d_cellmath__49_0_in24
	); /* architecture "behavioural" */ 
output [24:0] inst_mult_d_cellmath__49_0_out0;
input [0:0] inst_mult_d_cellmath__49_0_in0,
	inst_mult_d_cellmath__49_0_in1,
	inst_mult_d_cellmath__49_0_in2;
input [1:0] inst_mult_d_cellmath__49_0_in3;
input [0:0] inst_mult_d_cellmath__49_0_in4;
input [2:0] inst_mult_d_cellmath__49_0_in5;
input [0:0] inst_mult_d_cellmath__49_0_in6;
input [3:0] inst_mult_d_cellmath__49_0_in7;
input [0:0] inst_mult_d_cellmath__49_0_in8;
input [4:0] inst_mult_d_cellmath__49_0_in9;
input [0:0] inst_mult_d_cellmath__49_0_in10;
input [5:0] inst_mult_d_cellmath__49_0_in11;
input [0:0] inst_mult_d_cellmath__49_0_in12;
input [6:0] inst_mult_d_cellmath__49_0_in13;
input [0:0] inst_mult_d_cellmath__49_0_in14;
input [7:0] inst_mult_d_cellmath__49_0_in15;
input [0:0] inst_mult_d_cellmath__49_0_in16;
input [8:0] inst_mult_d_cellmath__49_0_in17;
input [0:0] inst_mult_d_cellmath__49_0_in18;
input [9:0] inst_mult_d_cellmath__49_0_in19;
input [0:0] inst_mult_d_cellmath__49_0_in20;
input [10:0] inst_mult_d_cellmath__49_0_in21;
input [0:0] inst_mult_d_cellmath__49_0_in22;
input  inst_mult_d_cellmath__49_0_in23;
input [14:3] inst_mult_d_cellmath__49_0_in24;
wire [2:0] inst_mult_d_cellmath__49__70;
wire [3:0] inst_mult_d_cellmath__49__65;
wire [4:0] inst_mult_d_cellmath__49__60;
wire [5:0] inst_mult_d_cellmath__49__55;
wire [6:0] inst_mult_d_cellmath__49__50;
wire [7:0] inst_mult_d_cellmath__49__45;
wire [8:0] inst_mult_d_cellmath__49__40;
wire [9:0] inst_mult_d_cellmath__49__35;
wire [10:0] inst_mult_d_cellmath__49__30;
wire [11:0] inst_mult_d_cellmath__49__25;
wire [13:0] inst_mult_d_cellmath__49__15;
wire [12:0] inst_mult_d_cellmath__49__20;

assign inst_mult_d_cellmath__49__70 = {inst_mult_d_cellmath__49_0_in0,1'B0,inst_mult_d_cellmath__49_0_in24[14]};

assign inst_mult_d_cellmath__49__65 = {inst_mult_d_cellmath__49_0_in2,inst_mult_d_cellmath__49_0_in1,1'B0,inst_mult_d_cellmath__49_0_in24[13]};

assign inst_mult_d_cellmath__49__60 = {inst_mult_d_cellmath__49_0_in4,inst_mult_d_cellmath__49_0_in3,1'B0,inst_mult_d_cellmath__49_0_in24[12]};

assign inst_mult_d_cellmath__49__55 = {inst_mult_d_cellmath__49_0_in6,inst_mult_d_cellmath__49_0_in5,1'B0,inst_mult_d_cellmath__49_0_in24[11]};

assign inst_mult_d_cellmath__49__50 = {inst_mult_d_cellmath__49_0_in8,inst_mult_d_cellmath__49_0_in7,1'B0,inst_mult_d_cellmath__49_0_in24[10]};

assign inst_mult_d_cellmath__49__45 = {inst_mult_d_cellmath__49_0_in10,inst_mult_d_cellmath__49_0_in9,1'B0,inst_mult_d_cellmath__49_0_in24[9]};

assign inst_mult_d_cellmath__49__40 = {inst_mult_d_cellmath__49_0_in12,inst_mult_d_cellmath__49_0_in11,1'B0,inst_mult_d_cellmath__49_0_in24[8]};

assign inst_mult_d_cellmath__49__35 = {inst_mult_d_cellmath__49_0_in14,inst_mult_d_cellmath__49_0_in13,1'B0,inst_mult_d_cellmath__49_0_in24[7]};

assign inst_mult_d_cellmath__49__30 = {inst_mult_d_cellmath__49_0_in16,inst_mult_d_cellmath__49_0_in15,1'B0,inst_mult_d_cellmath__49_0_in24[6]};

assign inst_mult_d_cellmath__49__25 = {inst_mult_d_cellmath__49_0_in18,inst_mult_d_cellmath__49_0_in17,1'B0,inst_mult_d_cellmath__49_0_in24[5]};

assign inst_mult_d_cellmath__49__15 = {inst_mult_d_cellmath__49_0_in22,inst_mult_d_cellmath__49_0_in21,1'B0,inst_mult_d_cellmath__49_0_in24[3]};

assign inst_mult_d_cellmath__49__20 = {inst_mult_d_cellmath__49_0_in20,inst_mult_d_cellmath__49_0_in19,1'B0,inst_mult_d_cellmath__49_0_in24[4]};

wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_0;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_1;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_2;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_3;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_4;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_5;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_6;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_7;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_8;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_9;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_10;
wire [24:0] inst_mult_d_cellmath__49_0_out0_tmp_11;
assign inst_mult_d_cellmath__49_0_out0_tmp_11 = 
	+((inst_mult_d_cellmath__49_0_in23<<24))
	+((inst_mult_d_cellmath__49__70<<22));
assign inst_mult_d_cellmath__49_0_out0_tmp_10 = inst_mult_d_cellmath__49_0_out0_tmp_11
	+((inst_mult_d_cellmath__49__65<<20));
assign inst_mult_d_cellmath__49_0_out0_tmp_9 = inst_mult_d_cellmath__49_0_out0_tmp_10
	+((inst_mult_d_cellmath__49__60<<18));
assign inst_mult_d_cellmath__49_0_out0_tmp_8 = inst_mult_d_cellmath__49_0_out0_tmp_9
	+((inst_mult_d_cellmath__49__55<<16));
assign inst_mult_d_cellmath__49_0_out0_tmp_7 = inst_mult_d_cellmath__49_0_out0_tmp_8
	+((inst_mult_d_cellmath__49__50<<14));
assign inst_mult_d_cellmath__49_0_out0_tmp_6 = inst_mult_d_cellmath__49_0_out0_tmp_7
	+((inst_mult_d_cellmath__49__45<<12));
assign inst_mult_d_cellmath__49_0_out0_tmp_5 = inst_mult_d_cellmath__49_0_out0_tmp_6
	+((inst_mult_d_cellmath__49__40<<10));
assign inst_mult_d_cellmath__49_0_out0_tmp_4 = inst_mult_d_cellmath__49_0_out0_tmp_5
	+((inst_mult_d_cellmath__49__35<<8));
assign inst_mult_d_cellmath__49_0_out0_tmp_3 = inst_mult_d_cellmath__49_0_out0_tmp_4
	+((inst_mult_d_cellmath__49__30<<6));
assign inst_mult_d_cellmath__49_0_out0_tmp_2 = inst_mult_d_cellmath__49_0_out0_tmp_3
	+((inst_mult_d_cellmath__49__25<<4));
assign inst_mult_d_cellmath__49_0_out0_tmp_1 = inst_mult_d_cellmath__49_0_out0_tmp_2
	+(inst_mult_d_cellmath__49__15);
assign inst_mult_d_cellmath__49_0_out0_tmp_0 = inst_mult_d_cellmath__49_0_out0_tmp_1
	+((inst_mult_d_cellmath__49__20<<2));
assign inst_mult_d_cellmath__49_0_out0 = inst_mult_d_cellmath__49_0_out0_tmp_0
	+(25'B0000000000010000000000000);
endmodule

module cynw_cm_float_rcp_inst_noninc_a_cellmath__42_2WWMM_bdw1441870778_bdw (
	inst_noninc_a_cellmath__42_2WWMM_out0,
	inst_noninc_a_cellmath__42_2WWMM_in0
	); /* architecture "behavioural" */ 
output [52:0] inst_noninc_a_cellmath__42_2WWMM_out0;
input [22:16] inst_noninc_a_cellmath__42_2WWMM_in0;

reg [52:0] inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0;
assign inst_noninc_a_cellmath__42_2WWMM_out0 = inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0;
always @ (inst_noninc_a_cellmath__42_2WWMM_in0) begin
	case (inst_noninc_a_cellmath__42_2WWMM_in0)
		7'B0000000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11111110000000011111111000000000111111100101111110100 ;
		7'B0000001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11111010000100011100101010000010111100100111111011100 ;
		7'B0000010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11110110001100010000101010000100110110110011111000110 ;
		7'B0000011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11110010010111110110010000000110101110001111110110000 ;
		7'B0000100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11101110100111000111111110001000100010111101110011011 ;
		7'B0000101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11101010111010000000011110001010010101000011110000110 ;
		7'B0000110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11100111010000011010101000001100000100100111101110010 ;
		7'B0000111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11100011101010010001011110001101110001101111101011111 ;
		7'B0001000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11100000000111100000000110001111011100011101101001100 ;
		7'B0001001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11011100101000000001110110010001000100110101100111010 ;
		7'B0001010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11011001001011110010001000010010101010111111100101000 ;
		7'B0001011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11010101110010101100100000010100001110111101100010111 ;
		7'B0001100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11010010011100101100101000010101110000110001100000110 ;
		7'B0001101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11001111001001101110010110010111010000100011011110101 ;
		7'B0001110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11001011111001101101100100011000101110010011011100110 ;
		7'B0001111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11001000101100100110010110011010001010000111011010110 ;
		7'B0010000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11000101100010010100110100011011100011111111011000111 ;
		7'B0010001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B11000010011010110101001110011100111100000011010111001 ;
		7'B0010010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10111111010110000011111010011110010010010011010101010 ;
		7'B0010011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10111100010011111101011000011111100110110101010011101 ;
		7'B0010100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10111001010100011110001010100000111001101001010001111 ;
		7'B0010101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10110110010111100010111000100010001010110001010000010 ;
		7'B0010110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10110011011101001000010010100011011010010101001110101 ;
		7'B0010111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10110000100101001011001100100100101000010011001101001 ;
		7'B0011000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10101101101111101000011110100101110100101111001011101 ;
		7'B0011001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10101010111100011101001010100110111111101011001010001 ;
		7'B0011010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10101000001011100110010100101000001001001011001000110 ;
		7'B0011011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10100101011101000001000000101001010001010001000111011 ;
		7'B0011100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10100010110000101010100000101010010111111111000110000 ;
		7'B0011101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10100000000110100000000110101011011101010111000100101 ;
		7'B0011110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10011101011110011111000100101100100001011011000011011 ;
		7'B0011111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10011010111000100100111010101101100100001101000010001 ;
		7'B0100000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10011000010100101111000010101110100101101111000000111 ;
		7'B0100001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10010101110010111011000010101111100110000010111111101 ;
		7'B0100010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10010011010011000110011110110000100101001100111110100 ;
		7'B0100011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10010000110101001111000100110001100011001010111101011 ;
		7'B0100100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10001110011001010010011110110010100000000010111100010 ;
		7'B0100101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10001011111111001110100000110011011011110010111011001 ;
		7'B0100110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10001001100111000000111100110100010110011110111010001 ;
		7'B0100111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10000111010000100111101110110101010000000110111001000 ;
		7'B0101000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10000100111100000000110000110110001000101110111000000 ;
		7'B0101001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10000010101001001010000000110111000000010110110111000 ;
		7'B0101010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B10000000011000000001100000110111110110111110110110001 ;
		7'B0101011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01111110001000100101010100111000101100101010110101001 ;
		7'B0101100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01111011111010110011100100111001100001011010110100010 ;
		7'B0101101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01111001101110101010011010111010010101010000110011011 ;
		7'B0101110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01110111100100001000000100111011001000001110110010100 ;
		7'B0101111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01110101011011001010110000111011111010010100110001101 ;
		7'B0110000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01110011010011110000110000111100101011100010110000110 ;
		7'B0110001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01110001001101111000011010111101011011111110110000000 ;
		7'B0110010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01101111001001100000000100111110001011100100101111001 ;
		7'B0110011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01101101000110100110001000111110111010010110101110011 ;
		7'B0110100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01101011000101001001000010111111101000011000101101101 ;
		7'B0110101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01101001000101000111001111000000010101101010101100111 ;
		7'B0110110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01100111000110011111001101000001000010001100101100001 ;
		7'B0110111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01100101001001001111100001000001101110000000101011011 ;
		7'B0111000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01100011001101010110101111000010011001000110101010101 ;
		7'B0111001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01100001010010110011011011000011000011011110101010000 ;
		7'B0111010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01011111011001100100001101000011101101001100101001011 ;
		7'B0111011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01011101100001100111110001000100010110010000101000101 ;
		7'B0111100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01011011101010111100110001000100111110101010101000000 ;
		7'B0111101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01011001110101100001111101000101100110011010100111011 ;
		7'B0111110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01011000000001010110000001000110001101100010100110110 ;
		7'B0111111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01010110001110010111101111000110110100000100100110001 ;
		7'B1000000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01010100011100100101111001000111011010000000100101101 ;
		7'B1000001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01010010101011111111010101000111111111010110100101000 ;
		7'B1000010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01010000111100100010111001001000100100000110100100011 ;
		7'B1000011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01001111001110001111011001001001001000010100100011111 ;
		7'B1000100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01001101100001000011101111001001101011111110100011011 ;
		7'B1000101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01001011110100111110110111001010001111000100100010110 ;
		7'B1000110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01001010001001111111101011001010110001101010100010010 ;
		7'B1000111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01001000100000000101001001001011010011101110100001110 ;
		7'B1001000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01000110110111001110001101001011110101010010100001010 ;
		7'B1001001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01000101001111011001111001001100010110010110100000110 ;
		7'B1001010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01000011101000100111001101001100110110111010100000010 ;
		7'B1001011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01000010000010110101001001001101010111000000011111110 ;
		7'B1001100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B01000000011110000010110101001101110110100110011111011 ;
		7'B1001101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00111110111010001111010001001110010101110000011110111 ;
		7'B1001110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00111101010111011001100101001110110100011110011110011 ;
		7'B1001111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00111011110101100000110111001111010010110000011110000 ;
		7'B1010000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00111010010100100100001111001111110000100100011101100 ;
		7'B1010001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00111000110100100010110101010000001101111110011101001 ;
		7'B1010010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110111010101011011110101010000101010111110011100110 ;
		7'B1010011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110101110111001110010111010001000111100010011100010 ;
		7'B1010100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110100011001111001101011010001100011101110011011111 ;
		7'B1010101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110010111101011100111011010001111111100000011011100 ;
		7'B1010110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110001100001110111010111010010011010111000011011001 ;
		7'B1010111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00110000000111001000001011010010110101111000011010110 ;
		7'B1011000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00101110101101001110101001010011010000100010011010011 ;
		7'B1011001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00101101010100001010000001010011101010110010011010000 ;
		7'B1011010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00101011111011111001100011010100000100101110011001101 ;
		7'B1011011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00101010100100011100100101010100011110010000011001011 ;
		7'B1011100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00101001001101110010010111010100110111011110011001000 ;
		7'B1011101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100111110111111010001111010101010000010110011000101 ;
		7'B1011110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100110100010110011011111010101101000111000011000010 ;
		7'B1011111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100101001110011101011111010110000001000110011000000 ;
		7'B1100000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100011111010110111100101010110011000111110010111101 ;
		7'B1100001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100010101000000001001001010110110000100010010111011 ;
		7'B1100010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100001010101111001100001010111000111110010010111000 ;
		7'B1100011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00100000000100100000000101010111011110110000010110110 ;
		7'B1100100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011110110011110100001111010111110101011000010110011 ;
		7'B1100101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011101100011110101011001011000001011110000010110001 ;
		7'B1100110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011100010100100010111111011000100001110100010101111 ;
		7'B1100111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011011000101111100011001011000110111100110010101101 ;
		7'B1101000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011001111000000001000111011001001101000110010101010 ;
		7'B1101001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00011000101010110000100001011001100010010100010101000 ;
		7'B1101010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010111011110001010000111011001110111010000010100110 ;
		7'B1101011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010110010010001101010101011010001011111100010100100 ;
		7'B1101100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010101000110111001101001011010100000010110010100010 ;
		7'B1101101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010011111100001110100011011010110100100010010100000 ;
		7'B1101110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010010110010001011100011011011001000011100010011110 ;
		7'B1101111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010001101000110000000111011011011100000110010011100 ;
		7'B1110000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00010000011111111011101111011011101111100010010011010 ;
		7'B1110001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001111010111101101111111011100000010101100010011000 ;
		7'B1110010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001110010000000110010101011100010101101000010010110 ;
		7'B1110011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001101001001000100010101011100101000010110010010100 ;
		7'B1110100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001100000010100111100001011100111010110100010010010 ;
		7'B1110101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001010111100101111011101011101001101000100010010001 ;
		7'B1110110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001001110111011011101001011101011111000110010001111 ;
		7'B1110111 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00001000110010101011101101011101110000111100010001101 ;
		7'B1111000 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000111101110011111001011011110000010100010010001011 ;
		7'B1111001 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000110101010110101100111011110010011111010010001010 ;
		7'B1111010 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000101100111101110101001011110100101000110010001000 ;
		7'B1111011 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000100100101001001110011011110110110000100010000110 ;
		7'B1111100 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000011100011000110101101011111000110110110010000101 ;
		7'B1111101 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000010100001100100111111011111010111011010010000011 ;
		7'B1111110 : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000001100000100100001101011111100111110100010000010 ;
		default : inst_noninc_a_cellmath__42_2WWMM_out0_tmp_0 = 53'B00000000100000000100000001011111111000000000010000000 ;
	endcase
end
endmodule

module cynw_cm_float_rcp_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_bdw1441870778_bdw (
	inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_out0,
	inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in0,
	inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in1
	); /* architecture "behavioural" */ 
output [21:0] inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_out0;
input [9:0] inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in0;
input [24:13] inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in1;

assign inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_out0 = 
	+(inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in0 * inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum_0_in1);
endmodule

module cynw_cm_float_rcp_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_bdw1441870778_bdw (
	inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_out0,
	inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in0,
	inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in1,
	inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in2
	); /* architecture "behavioural" */ 
output [33:0] inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_out0;
input [27:10] inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in0;
input  inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in1;
input [14:0] inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in2;
wire [18:0] inst_cellmath__38;
wire [15:0] inst_cellmath__36;

assign inst_cellmath__38 = {1'B1,inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in0};

assign inst_cellmath__36 = {inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in1,inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_in2};

assign inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum_0_out0 = 
	+({{18{inst_cellmath__36[15]}}, inst_cellmath__36} * {{15{inst_cellmath__38[18]}}, inst_cellmath__38});
endmodule

module cynw_cm_float_rcp_inst_cellmath__57_0_bdw1441870778_bdw (
	inst_cellmath__57_0_out0,
	inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1,
	inst_cellmath__57_0_in2
	); /* architecture "behavioural" */ 
output [39:0] inst_cellmath__57_0_out0;
input [52:28] inst_cellmath__57_0_in0;
input [21:0] inst_cellmath__57_0_in1;
input [33:0] inst_cellmath__57_0_in2;

wire [39:0] inst_cellmath__57_0_out0_tmp_0;
wire [39:0] inst_cellmath__57_0_out0_tmp_1;
assign inst_cellmath__57_0_out0_tmp_1 = 
	+(({{18{inst_cellmath__57_0_in1[21]}}, inst_cellmath__57_0_in1}<<4))
	+((inst_cellmath__57_0_in0<<15));
assign inst_cellmath__57_0_out0_tmp_0 = inst_cellmath__57_0_out0_tmp_1
	+({{6{inst_cellmath__57_0_in2[33]}}, inst_cellmath__57_0_in2});
assign inst_cellmath__57_0_out0 = inst_cellmath__57_0_out0_tmp_0
	+(40'B0000000000000000000000010000000000000000);
endmodule

module cynw_cm_float_rcp_inst_cellmath__59_0_bdw1441870778_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1,
	inst_cellmath__59_0_in2
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__59_0_out0;
input [0:0] inst_cellmath__59_0_in0;
input [39:17] inst_cellmath__59_0_in1;
input  inst_cellmath__59_0_in2;
wire [1:0] inst_cellmath__59__81_0;

assign inst_cellmath__59__81_0 = {inst_cellmath__59_0_in0,inst_cellmath__59_0_in2};

reg [22:0] inst_cellmath__59_0_out0_tmp_0;
assign inst_cellmath__59_0_out0 = inst_cellmath__59_0_out0_tmp_0;
always @ (inst_cellmath__59__81_0 or inst_cellmath__59_0_in1) begin
	case (inst_cellmath__59__81_0)
		2'B00 : inst_cellmath__59_0_out0_tmp_0 = inst_cellmath__59_0_in1 ;
		2'B01 : inst_cellmath__59_0_out0_tmp_0 = 23'B11111111111111111111111 ;
		default : inst_cellmath__59_0_out0_tmp_0 = {23{1'b0}} ;
	endcase
end
endmodule

/* CADENCE  vLXwTAjZrQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/






