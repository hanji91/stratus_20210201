/*****************************************************************************
    Verilog Hierarchical Gate Level Netlist
    
    Configured at: 22:40:44 KST (+0900), Thursday 31 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/
/*****************************************************************************
    Technology library details
    
    name: slow_vdd1v2
    file name(s):
            /usr/cadence/installs/Stratus/tools.lnx86/cellmath/libs/generic.lbf
            /usr/cadence/installs/Stratus/tools.lnx86/cellmath/libs/gencount.lbf
            /usr/cadence/installs/Stratus/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing/slow_vdd1v2_basicCells.lib
    No wireload model
    op condition: PVT_1P08V_125C
*****************************************************************************/

module cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw1925506066_bdw (
	a_sign,
	a_exp,
	a_man,
	b_sign,
	b_exp,
	b_man,
	rm,
	x
	); /* architecture "gate_level" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input  b_sign;
input [7:0] b_exp;
input [22:0] b_man;
input [2:0] rm;
output [31:0] x;
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
	inst_cellmath__18;
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
wire  inst_cellmath__66;
wire [7:0] inst_cellmath__68;
wire  inst_cellmath__70,
	inst_cellmath__71;
wire N547,N556,N557,N558,N559,N560,N561 
	,N562,N563,N565,N566,N567,N568,N569,N570 
	,N571,N572,N573,N574,N575,N599,N625,N626 
	,N627,N628,N629,N630,N631,N632,N633,N634 
	,N635,N636,N637,N638,N639,N640,N641,N642 
	,N643,N644,N645,N646,N647,N650,N651,N652 
	,N653,N655,N656,N657,N658,N659,N660,N661 
	,N662,N663,N664,N665,N666,N667,N668,N669 
	,N670,N671,N672,N673,N674,N675,N676,N677 
	,N679,N706,N710;
cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I0 (.inst_cellmath__21_0_out0(inst_cellmath__39[25]), .inst_cellmath__21_0_in0(b_sign), .inst_cellmath__21_0_in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I1 (.inst_cellmath__9_0_out0(inst_cellmath__9), .inst_cellmath__9_0_in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw1925506066_bdw cynw_cm_float_add2_ieee_I2 (.inst_cellmath__10__1__out0(inst_cellmath__10), .inst_cellmath__10__1__in0({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I3 (.inst_cellmath__12_0_out0(inst_cellmath__12), .inst_cellmath__12_0_in0(inst_cellmath__9), .inst_cellmath__12_0_in1(inst_cellmath__10));
cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I4 (.inst_cellmath__14_0_out0(inst_cellmath__14), .inst_cellmath__14_0_in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw1925506066_bdw cynw_cm_float_add2_ieee_I5 (.inst_cellmath__15__3__out0(inst_cellmath__15), .inst_cellmath__15__3__in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I6 (.inst_cellmath__17_0_out0(inst_cellmath__17), .inst_cellmath__17_0_in0(inst_cellmath__15), .inst_cellmath__17_0_in1(inst_cellmath__14));
cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw1925506066_bdw cynw_cm_float_add2_ieee_I7 (.inst_cellmath__24__5__out0({N547}), .inst_cellmath__24__5__in0(inst_cellmath__39[25]), .inst_cellmath__24__5__in1(inst_cellmath__17), .inst_cellmath__24__5__in2(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw1925506066_bdw cynw_cm_float_add2_ieee_I8 (.inst_cellmath__13_1_out0(inst_cellmath__13), .inst_cellmath__13_1_in0(inst_cellmath__9), .inst_cellmath__13_1_in1(inst_cellmath__10));
cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I9 (.inst_cellmath__18_0_out0(inst_cellmath__18), .inst_cellmath__18_0_in0(inst_cellmath__15), .inst_cellmath__18_0_in1(inst_cellmath__14));
cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw1925506066_bdw cynw_cm_float_add2_ieee_I10 (.inst_cellmath__63_1_out0(inst_cellmath__63), .inst_cellmath__63_1_in0({N547}), .inst_cellmath__63_1_in1(inst_cellmath__18), .inst_cellmath__63_1_in2(inst_cellmath__13));
cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw1925506066_bdw cynw_cm_float_add2_ieee_I11 (.inst_cellmath__11__2__out0(inst_cellmath__11), .inst_cellmath__11__2__in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw1925506066_bdw cynw_cm_float_add2_ieee_I12 (.inst_cellmath__16__4__out0(inst_cellmath__16), .inst_cellmath__16__4__in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw1925506066_bdw cynw_cm_float_add2_ieee_I13 (.inst_cellmath__67__67__out0({N706}), .inst_cellmath__67__67__in0(inst_cellmath__16), .inst_cellmath__67__67__in1(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I14 (.inst_cellmath__6_0_out0(inst_cellmath__6), .inst_cellmath__6_0_in0({rm[2], rm[1], rm[0]}));
INVXL cynw_cm_float_add2_ieee_I15 (.Y(N556), .A(b_exp[0]));
INVXL cynw_cm_float_add2_ieee_I16 (.Y(N557), .A(b_exp[1]));
INVXL cynw_cm_float_add2_ieee_I17 (.Y(N558), .A(b_exp[2]));
INVXL cynw_cm_float_add2_ieee_I18 (.Y(N559), .A(b_exp[3]));
INVXL cynw_cm_float_add2_ieee_I19 (.Y(N560), .A(b_exp[4]));
INVXL cynw_cm_float_add2_ieee_I20 (.Y(N561), .A(b_exp[5]));
INVXL cynw_cm_float_add2_ieee_I21 (.Y(N562), .A(b_exp[6]));
INVXL cynw_cm_float_add2_ieee_I22 (.Y(N563), .A(b_exp[7]));
cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw1925506066_bdw cynw_cm_float_add2_ieee_I23 (.inst_cellmath__28__8__out0({N573, N572, N571, N570, N569, N568, N567, N566, N565}), .inst_cellmath__28__8__out1({inst_cellmath__27[8], inst_cellmath__27[7], inst_cellmath__27[6], inst_cellmath__27[5], inst_cellmath__27[4], inst_cellmath__27[3], inst_cellmath__27[2], inst_cellmath__27[1], inst_cellmath__27[0]}), .inst_cellmath__28__8__in0({N563, N562, N561, N560, N559, N558, N557, N556}), .inst_cellmath__28__8__in1({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
INVXL cynw_cm_float_add2_ieee_I24 (.Y(inst_cellmath__28[8]), .A(N573));
cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I25 (.inst_cellmath__34_0_out0(inst_cellmath__34), .inst_cellmath__34_0_in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__34_0_in1({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw1925506066_bdw cynw_cm_float_add2_ieee_I26 (.inst_cellmath__32__14__out0({N575}), .inst_cellmath__32__14__in0(inst_cellmath__34), .inst_cellmath__32__14__in1({inst_cellmath__28[8]}));
cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I27 (.inst_cellmath__32_0_out0(inst_cellmath__32), .inst_cellmath__32_0_in0({N575}), .inst_cellmath__32_0_in1({inst_cellmath__27[8]}));
cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I28 (.inst_cellmath__48_0_out0(inst_cellmath__48), .inst_cellmath__48_0_in0(inst_cellmath__32), .inst_cellmath__48_0_in1(b_sign), .inst_cellmath__48_0_in2(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I29 (.inst_cellmath__35_0_out0({inst_cellmath__35[7], inst_cellmath__35[6], inst_cellmath__35[5], inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}), .inst_cellmath__35_0_in0({N572, N571, N570, N569, N568, N567, N566, N565}), .inst_cellmath__35_0_in1({inst_cellmath__27[8], inst_cellmath__27[7], inst_cellmath__27[6], inst_cellmath__27[5], inst_cellmath__27[4], inst_cellmath__27[3], inst_cellmath__27[2], inst_cellmath__27[1], inst_cellmath__27[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I30 (.inst_cellmath__30_0_out0(inst_cellmath__30), .inst_cellmath__30_0_in0({inst_cellmath__35[7], inst_cellmath__35[6], inst_cellmath__35[5], inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I31 (.inst_cellmath__31_0_out0(inst_cellmath__31), .inst_cellmath__31_0_in0(inst_cellmath__16), .inst_cellmath__31_0_in1(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw1925506066_bdw cynw_cm_float_add2_ieee_I32 (.inst_cellmath__33__18__out0({N599}), .inst_cellmath__33__18__in0(inst_cellmath__31), .inst_cellmath__33__18__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw1925506066_bdw cynw_cm_float_add2_ieee_I33 (.inst_cellmath__36__15__out0({inst_cellmath__36[48], inst_cellmath__36[47], inst_cellmath__36[46], inst_cellmath__36[45], inst_cellmath__36[44], inst_cellmath__36[43], inst_cellmath__36[42], inst_cellmath__36[41], inst_cellmath__36[40], inst_cellmath__36[39], inst_cellmath__36[38], inst_cellmath__36[37], inst_cellmath__36[36], inst_cellmath__36[35], inst_cellmath__36[34], inst_cellmath__36[33], inst_cellmath__36[32], inst_cellmath__36[31], inst_cellmath__36[30], inst_cellmath__36[29], inst_cellmath__36[28], inst_cellmath__36[27], inst_cellmath__36[26]}), .inst_cellmath__36__15__in0(inst_cellmath__32), .inst_cellmath__36__15__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__36__15__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I34 (.inst_cellmath__37_0_out0({inst_cellmath__37[49], inst_cellmath__37[48], inst_cellmath__37[47], inst_cellmath__37[46], inst_cellmath__37[45], inst_cellmath__37[44], inst_cellmath__37[43], inst_cellmath__37[42], inst_cellmath__37[41], inst_cellmath__37[40], inst_cellmath__37[39], inst_cellmath__37[38], inst_cellmath__37[37], inst_cellmath__37[36], inst_cellmath__37[35], inst_cellmath__37[34], inst_cellmath__37[33], inst_cellmath__37[32], inst_cellmath__37[31], inst_cellmath__37[30], inst_cellmath__37[29], inst_cellmath__37[28], inst_cellmath__37[27], inst_cellmath__37[26], inst_cellmath__37[25], inst_cellmath__37[24], inst_cellmath__37[23], inst_cellmath__37[22], inst_cellmath__37[21], inst_cellmath__37[20], inst_cellmath__37[19], inst_cellmath__37[18], inst_cellmath__37[17], inst_cellmath__37[16], inst_cellmath__37[15], inst_cellmath__37[14], inst_cellmath__37[13], inst_cellmath__37[12], inst_cellmath__37[11], inst_cellmath__37[10], inst_cellmath__37[9], inst_cellmath__37[8], inst_cellmath__37[7], inst_cellmath__37[6], inst_cellmath__37[5], inst_cellmath__37[4], inst_cellmath__37[3], inst_cellmath__37[2], inst_cellmath__37[1], inst_cellmath__37[0]}), .inst_cellmath__37_0_in0({inst_cellmath__36[48], inst_cellmath__36[47], inst_cellmath__36[46], inst_cellmath__36[45], inst_cellmath__36[44], inst_cellmath__36[43], inst_cellmath__36[42], inst_cellmath__36[41], inst_cellmath__36[40], inst_cellmath__36[39], inst_cellmath__36[38], inst_cellmath__36[37], inst_cellmath__36[36], inst_cellmath__36[35], inst_cellmath__36[34], inst_cellmath__36[33], inst_cellmath__36[32], inst_cellmath__36[31], inst_cellmath__36[30], inst_cellmath__36[29], inst_cellmath__36[28], inst_cellmath__36[27], inst_cellmath__36[26]}), .inst_cellmath__37_0_in1({inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw1925506066_bdw cynw_cm_float_add2_ieee_I35 (.inst_cellmath__33_49_24_out0({inst_cellmath__33[49], inst_cellmath__33[48], inst_cellmath__33[47], inst_cellmath__33[46], inst_cellmath__33[45], inst_cellmath__33[44], inst_cellmath__33[43], inst_cellmath__33[42], inst_cellmath__33[41], inst_cellmath__33[40], inst_cellmath__33[39], inst_cellmath__33[38], inst_cellmath__33[37], inst_cellmath__33[36], inst_cellmath__33[35], inst_cellmath__33[34], inst_cellmath__33[33], inst_cellmath__33[32], inst_cellmath__33[31], inst_cellmath__33[30], inst_cellmath__33[29], inst_cellmath__33[28], inst_cellmath__33[27], inst_cellmath__33[26], inst_cellmath__33[25], inst_cellmath__33[24]}), .inst_cellmath__33_49_24_in0({inst_cellmath__37[49], inst_cellmath__37[48], inst_cellmath__37[47], inst_cellmath__37[46], inst_cellmath__37[45], inst_cellmath__37[44], inst_cellmath__37[43], inst_cellmath__37[42], inst_cellmath__37[41], inst_cellmath__37[40], inst_cellmath__37[39], inst_cellmath__37[38], inst_cellmath__37[37], inst_cellmath__37[36], inst_cellmath__37[35], inst_cellmath__37[34], inst_cellmath__37[33], inst_cellmath__37[32], inst_cellmath__37[31], inst_cellmath__37[30], inst_cellmath__37[29], inst_cellmath__37[28], inst_cellmath__37[27], inst_cellmath__37[26], inst_cellmath__37[25], inst_cellmath__37[24]}), .inst_cellmath__33_49_24_in1({N599}));
cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw1925506066_bdw cynw_cm_float_add2_ieee_I36 (.inst_cellmath__42__22__out0({N625}), .inst_cellmath__42__22__in0({inst_cellmath__37[23], inst_cellmath__37[22], inst_cellmath__37[21], inst_cellmath__37[20], inst_cellmath__37[19], inst_cellmath__37[18], inst_cellmath__37[17], inst_cellmath__37[16], inst_cellmath__37[15], inst_cellmath__37[14], inst_cellmath__37[13], inst_cellmath__37[12], inst_cellmath__37[11], inst_cellmath__37[10], inst_cellmath__37[9], inst_cellmath__37[8], inst_cellmath__37[7], inst_cellmath__37[6], inst_cellmath__37[5], inst_cellmath__37[4], inst_cellmath__37[3], inst_cellmath__37[2], inst_cellmath__37[1], inst_cellmath__37[0]}), .inst_cellmath__42__22__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I37 (.inst_cellmath__42_0_out0(inst_cellmath__42), .inst_cellmath__42_0_in0({N625}), .inst_cellmath__42_0_in1(inst_cellmath__31));
cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I38 (.inst_cellmath__44_0_out0(inst_cellmath__44), .inst_cellmath__44_0_in0(inst_cellmath__42), .inst_cellmath__44_0_in1({inst_cellmath__33[24]}), .inst_cellmath__44_0_in2(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__40_bdw1925506066_bdw cynw_cm_float_add2_ieee_I39 (.inst_cellmath__40_out0({N677, N676, N675, N674, N673, N672, N671, N670, N669, N668, N667, N666, N665, N664, N663, N662, N661, N660, N659, N658, N657, N656, N655, N679}), .inst_cellmath__40_in0(inst_cellmath__32), .inst_cellmath__40_in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__40_in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw1925506066_bdw cynw_cm_float_add2_ieee_I40 (.inst_cellmath__39__19__2mx_out0({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__39__19__2mx_in0({inst_cellmath__33[49], inst_cellmath__33[48], inst_cellmath__33[47], inst_cellmath__33[46], inst_cellmath__33[45], inst_cellmath__33[44], inst_cellmath__33[43], inst_cellmath__33[42], inst_cellmath__33[41], inst_cellmath__33[40], inst_cellmath__33[39], inst_cellmath__33[38], inst_cellmath__33[37], inst_cellmath__33[36], inst_cellmath__33[35], inst_cellmath__33[34], inst_cellmath__33[33], inst_cellmath__33[32], inst_cellmath__33[31], inst_cellmath__33[30], inst_cellmath__33[29], inst_cellmath__33[28], inst_cellmath__33[27], inst_cellmath__33[26], inst_cellmath__33[25]}), .inst_cellmath__39__19__2mx_in1(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I41 (.inst_cellmath__45_0_out0({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}), .inst_cellmath__45_0_in0(inst_cellmath__44), .inst_cellmath__45_0_in1({N677, N676, N675, N674, N673, N672, N671, N670, N669, N668, N667, N666, N665, N664, N663, N662, N661, N660, N659, N658, N657, N656, N655}), .inst_cellmath__45_0_in2({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__45_0_in3(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I42 (.inst_cellmath__49_0_out0({inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__49_0_in0({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw1925506066_bdw cynw_cm_float_add2_ieee_I43 (.inst_cellmath__67__66__out0({N647}), .inst_cellmath__67__66__in0({inst_cellmath__49[5]}), .inst_cellmath__67__66__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw1925506066_bdw cynw_cm_float_add2_ieee_I44 (.inst_cellmath__67__65__out0({N646}), .inst_cellmath__67__65__in0({inst_cellmath__49[5]}), .inst_cellmath__67__65__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw1925506066_bdw cynw_cm_float_add2_ieee_I45 (.inst_cellmath__66__59__out0({N644}), .inst_cellmath__66__59__in0(b_sign), .inst_cellmath__66__59__in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw1925506066_bdw cynw_cm_float_add2_ieee_I46 (.inst_cellmath__66__58__out0({N643}), .inst_cellmath__66__58__in0(b_sign), .inst_cellmath__66__58__in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw1925506066_bdw cynw_cm_float_add2_ieee_I47 (.inst_cellmath__66__56__out0({N645}), .inst_cellmath__66__56__in0({N644}), .inst_cellmath__66__56__in1({N643}), .inst_cellmath__66__56__in2(inst_cellmath__6));
cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I48 (.inst_cellmath__66_0_out0(inst_cellmath__66), .inst_cellmath__66_0_in0({N645}), .inst_cellmath__66_0_in1(inst_cellmath__16), .inst_cellmath__66_0_in2(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw1925506066_bdw cynw_cm_float_add2_ieee_I49 (.inst_cellmath__64__48__2WWMM_out0({inst_cellmath__64[21], inst_cellmath__64[20], inst_cellmath__64[19], inst_cellmath__64[18], inst_cellmath__64[17], inst_cellmath__64[16], inst_cellmath__64[15], inst_cellmath__64[14], inst_cellmath__64[13], inst_cellmath__64[12], inst_cellmath__64[11], inst_cellmath__64[10], inst_cellmath__64[9], inst_cellmath__64[8], inst_cellmath__64[7], inst_cellmath__64[6], inst_cellmath__64[5], inst_cellmath__64[4], inst_cellmath__64[3], inst_cellmath__64[2], inst_cellmath__64[1], inst_cellmath__64[0], N710}), .inst_cellmath__64__48__2WWMM_in0(inst_cellmath__18), .inst_cellmath__64__48__2WWMM_in1(inst_cellmath__13), .inst_cellmath__64__48__2WWMM_in2(b_sign), .inst_cellmath__64__48__2WWMM_in3({b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__64__48__2WWMM_in4(a_sign), .inst_cellmath__64__48__2WWMM_in5({a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I50 (.inst_cellmath__67_0_out0(x[31]), .inst_cellmath__67_0_in0({N706}), .inst_cellmath__67_0_in1({N647}), .inst_cellmath__67_0_in2({N646}), .inst_cellmath__67_0_in3(inst_cellmath__66), .inst_cellmath__67_0_in4({N710}), .inst_cellmath__67_0_in5(inst_cellmath__63), .inst_cellmath__67_0_in6(inst_cellmath__6));
cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I51 (.inst_cellmath__50_0_out0({inst_cellmath__50[24], inst_cellmath__50[23], inst_cellmath__50[22], inst_cellmath__50[21], inst_cellmath__50[20], inst_cellmath__50[19], inst_cellmath__50[18], inst_cellmath__50[17], inst_cellmath__50[16], inst_cellmath__50[15], inst_cellmath__50[14], inst_cellmath__50[13], inst_cellmath__50[12], inst_cellmath__50[11], inst_cellmath__50[10], inst_cellmath__50[9], inst_cellmath__50[8], inst_cellmath__50[7], inst_cellmath__50[6], inst_cellmath__50[5], inst_cellmath__50[4], inst_cellmath__50[3], inst_cellmath__50[2], inst_cellmath__50[1], inst_cellmath__50[0]}), .inst_cellmath__50_0_in0({inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__50_0_in1({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw1925506066_bdw cynw_cm_float_add2_ieee_I52 (.inst_cellmath__43__26__out0({N626}), .inst_cellmath__43__26__in0(inst_cellmath__42), .inst_cellmath__43__26__in1({inst_cellmath__33[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw1925506066_bdw cynw_cm_float_add2_ieee_I53 (.inst_cellmath__43__25__out0({N627}), .inst_cellmath__43__25__in0({N626}), .inst_cellmath__43__25__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw1925506066_bdw cynw_cm_float_add2_ieee_I54 (.inst_cellmath__43__28__out0({N628}), .inst_cellmath__43__28__in0(inst_cellmath__42), .inst_cellmath__43__28__in1({inst_cellmath__33[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw1925506066_bdw cynw_cm_float_add2_ieee_I55 (.inst_cellmath__43__27__out0({N629}), .inst_cellmath__43__27__in0({N628}), .inst_cellmath__43__27__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw1925506066_bdw cynw_cm_float_add2_ieee_I56 (.inst_cellmath__43__24__out0({N630}), .inst_cellmath__43__24__in0({N629}), .inst_cellmath__43__24__in1({N627}));
cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I57 (.inst_cellmath__43_0_out0(inst_cellmath__43), .inst_cellmath__43_0_in0({N630}), .inst_cellmath__43_0_in1({inst_cellmath__33[24]}), .inst_cellmath__43_0_in2(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I58 (.inst_cellmath__53_0_out0(inst_cellmath__53), .inst_cellmath__53_0_in0({inst_cellmath__50[1]}), .inst_cellmath__53_0_in1({inst_cellmath__49[1]}), .inst_cellmath__53_0_in2(inst_cellmath__43));
cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I59 (.inst_cellmath__5_0_out0(inst_cellmath__5), .inst_cellmath__5_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw1925506066_bdw cynw_cm_float_add2_ieee_I60 (.inst_cellmath__55__39__out0({N635}), .inst_cellmath__55__39__in0(inst_cellmath__5), .inst_cellmath__55__39__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw1925506066_bdw cynw_cm_float_add2_ieee_I61 (.inst_cellmath__55__38__out0({N634}), .inst_cellmath__55__38__in0(inst_cellmath__6), .inst_cellmath__55__38__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I62 (.inst_cellmath__8_0_out0(inst_cellmath__8), .inst_cellmath__8_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I63 (.inst_cellmath__4_0_out0(inst_cellmath__4), .inst_cellmath__4_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw1925506066_bdw cynw_cm_float_add2_ieee_I64 (.inst_cellmath__54__33__out0({N631}), .inst_cellmath__54__33__in0({inst_cellmath__50[0]}), .inst_cellmath__54__33__in1(inst_cellmath__43), .inst_cellmath__54__33__in2(inst_cellmath__42));
cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I65 (.inst_cellmath__54_0_out0(inst_cellmath__54), .inst_cellmath__54_0_in0({N631}), .inst_cellmath__54_0_in1({inst_cellmath__49[1]}), .inst_cellmath__54_0_in2(inst_cellmath__42));
cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw1925506066_bdw cynw_cm_float_add2_ieee_I66 (.inst_cellmath__55__37__out0({N632}), .inst_cellmath__55__37__in0(inst_cellmath__54), .inst_cellmath__55__37__in1({inst_cellmath__50[2]}));
cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw1925506066_bdw cynw_cm_float_add2_ieee_I67 (.inst_cellmath__55__36__out0({N633}), .inst_cellmath__55__36__in0({N632}), .inst_cellmath__55__36__in1(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw1925506066_bdw cynw_cm_float_add2_ieee_I68 (.inst_cellmath__55__35__out0({N636}), .inst_cellmath__55__35__in0(inst_cellmath__8), .inst_cellmath__55__35__in1({N635}), .inst_cellmath__55__35__in2({N634}), .inst_cellmath__55__35__in3({N633}));
cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw1925506066_bdw cynw_cm_float_add2_ieee_I69 (.inst_cellmath__55__34__out0({N637}), .inst_cellmath__55__34__in0({N636}), .inst_cellmath__55__34__in1(inst_cellmath__53));
cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw1925506066_bdw cynw_cm_float_add2_ieee_I70 (.inst_cellmath__55__41__out0({N638}), .inst_cellmath__55__41__in0({N635}), .inst_cellmath__55__41__in1({N634}));
cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw1925506066_bdw cynw_cm_float_add2_ieee_I71 (.inst_cellmath__55__40__out0({N639}), .inst_cellmath__55__40__in0({N638}), .inst_cellmath__55__40__in1(inst_cellmath__54));
cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I72 (.inst_cellmath__55_0_out0(inst_cellmath__55), .inst_cellmath__55_0_in0({N639}), .inst_cellmath__55_0_in1({N637}));
cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I73 (.inst_cellmath__57_0_out0({inst_cellmath__57[23], inst_cellmath__57[22], inst_cellmath__57[21], inst_cellmath__57[20], inst_cellmath__57[19], inst_cellmath__57[18], inst_cellmath__57[17], inst_cellmath__57[16], inst_cellmath__57[15], inst_cellmath__57[14], inst_cellmath__57[13], inst_cellmath__57[12], inst_cellmath__57[11], inst_cellmath__57[10], inst_cellmath__57[9], inst_cellmath__57[8], inst_cellmath__57[7], inst_cellmath__57[6], inst_cellmath__57[5], inst_cellmath__57[4], inst_cellmath__57[3], inst_cellmath__57[2], inst_cellmath__57[1], inst_cellmath__57[0]}), .inst_cellmath__57_0_in0(inst_cellmath__55), .inst_cellmath__57_0_in1({inst_cellmath__50[24], inst_cellmath__50[23], inst_cellmath__50[22], inst_cellmath__50[21], inst_cellmath__50[20], inst_cellmath__50[19], inst_cellmath__50[18], inst_cellmath__50[17], inst_cellmath__50[16], inst_cellmath__50[15], inst_cellmath__50[14], inst_cellmath__50[13], inst_cellmath__50[12], inst_cellmath__50[11], inst_cellmath__50[10], inst_cellmath__50[9], inst_cellmath__50[8], inst_cellmath__50[7], inst_cellmath__50[6], inst_cellmath__50[5], inst_cellmath__50[4], inst_cellmath__50[3], inst_cellmath__50[2]}));
cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw1925506066_bdw cynw_cm_float_add2_ieee_I74 (.inst_cellmath__62__46__out0({N641}), .inst_cellmath__62__46__in0({inst_cellmath__57[23]}), .inst_cellmath__62__46__in1({inst_cellmath__45[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw1925506066_bdw cynw_cm_float_add2_ieee_I75 (.inst_cellmath__62__45__out0({N642}), .inst_cellmath__62__45__in0({N641}), .inst_cellmath__62__45__in1({inst_cellmath__45[25]}));
INVXL cynw_cm_float_add2_ieee_I76 (.Y(N574), .A(inst_cellmath__28[8]));
cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I77 (.inst_cellmath__29_0_out0({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}), .inst_cellmath__29_0_in0({N574}), .inst_cellmath__29_0_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}), .inst_cellmath__29_0_in2({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I78 (.inst_cellmath__62_0_out0(inst_cellmath__62), .inst_cellmath__62_0_in0({N642}), .inst_cellmath__62_0_in1({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I79 (.inst_cellmath__59_0_out0({inst_cellmath__59[9], inst_cellmath__59[8], inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}), .inst_cellmath__59_0_in0({inst_cellmath__57[23]}), .inst_cellmath__59_0_in1({inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__59_0_in2({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw1925506066_bdw cynw_cm_float_add2_ieee_I80 (.inst_cellmath__60__44__out0({N640}), .inst_cellmath__60__44__in0({inst_cellmath__59[8], inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw1925506066_bdw cynw_cm_float_add2_ieee_I81 (.inst_cellmath__71_1_out0(inst_cellmath__71), .inst_cellmath__71_1_in0({N706}), .inst_cellmath__71_1_in1(inst_cellmath__63), .inst_cellmath__71_1_in2(inst_cellmath__62), .inst_cellmath__71_1_in3({N640}), .inst_cellmath__71_1_in4({inst_cellmath__59[9]}), .inst_cellmath__71_1_in5({inst_cellmath__49[5]}), .inst_cellmath__71_1_in6(inst_cellmath__17), .inst_cellmath__71_1_in7(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw1925506066_bdw cynw_cm_float_add2_ieee_I82 (.inst_cellmath__68__69__out0({N650}), .inst_cellmath__68__69__in0(inst_cellmath__8), .inst_cellmath__68__69__in1({N635}), .inst_cellmath__68__69__in2({N634}), .inst_cellmath__68__69__in3(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw1925506066_bdw cynw_cm_float_add2_ieee_I83 (.inst_cellmath__68__68__out0({N651}), .inst_cellmath__68__68__in0({N650}), .inst_cellmath__68__68__in1(inst_cellmath__62));
cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I84 (.inst_cellmath__68_0_out0({inst_cellmath__68[0]}), .inst_cellmath__68_0_in0({N651}), .inst_cellmath__68_0_in1(inst_cellmath__63), .inst_cellmath__68_0_in2(inst_cellmath__17), .inst_cellmath__68_0_in3(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw1925506066_bdw cynw_cm_float_add2_ieee_I85 (.inst_cellmath__68__0__out0({inst_cellmath__68[7]}), .inst_cellmath__68__0__in0(inst_cellmath__63), .inst_cellmath__68__0__in1(inst_cellmath__62), .inst_cellmath__68__0__in2(inst_cellmath__17), .inst_cellmath__68__0__in3(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I86 (.inst_cellmath__72_0_out0({x[30], x[29], x[28], x[27], x[26], x[25], x[24], x[23]}), .inst_cellmath__72_0_in0(inst_cellmath__71), .inst_cellmath__72_0_in1({inst_cellmath__68[7]}), .inst_cellmath__72_0_in2({inst_cellmath__68[0]}), .inst_cellmath__72_0_in3({inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I87 (.inst_cellmath__7_0_out0(inst_cellmath__7), .inst_cellmath__7_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw1925506066_bdw cynw_cm_float_add2_ieee_I88 (.inst_cellmath__70__74__out0({N652}), .inst_cellmath__70__74__in0(inst_cellmath__5), .inst_cellmath__70__74__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw1925506066_bdw cynw_cm_float_add2_ieee_I89 (.inst_cellmath__70__73__out0({N653}), .inst_cellmath__70__73__in0({N652}), .inst_cellmath__70__73__in1(inst_cellmath__7));
cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I90 (.inst_cellmath__70_0_out0(inst_cellmath__70), .inst_cellmath__70_0_in0(inst_cellmath__8), .inst_cellmath__70_0_in1({N653}), .inst_cellmath__70_0_in2(inst_cellmath__62), .inst_cellmath__70_0_in3(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_I91 (.inst_cellmath__73_0_out0({x[22], x[21], x[20], x[19], x[18], x[17], x[16], x[15], x[14], x[13], x[12], x[11], x[10], x[9], x[8], x[7], x[6], x[5], x[4], x[3], x[2], x[1], x[0]}), .inst_cellmath__73_0_in0(inst_cellmath__71), .inst_cellmath__73_0_in1(inst_cellmath__70), .inst_cellmath__73_0_in2({inst_cellmath__64[21], inst_cellmath__64[20], inst_cellmath__64[19], inst_cellmath__64[18], inst_cellmath__64[17], inst_cellmath__64[16], inst_cellmath__64[15], inst_cellmath__64[14], inst_cellmath__64[13], inst_cellmath__64[12], inst_cellmath__64[11], inst_cellmath__64[10], inst_cellmath__64[9], inst_cellmath__64[8], inst_cellmath__64[7], inst_cellmath__64[6], inst_cellmath__64[5], inst_cellmath__64[4], inst_cellmath__64[3], inst_cellmath__64[2], inst_cellmath__64[1], inst_cellmath__64[0]}), .inst_cellmath__73_0_in3(inst_cellmath__63), .inst_cellmath__73_0_in4({inst_cellmath__57[22], inst_cellmath__57[21], inst_cellmath__57[20], inst_cellmath__57[19], inst_cellmath__57[18], inst_cellmath__57[17], inst_cellmath__57[16], inst_cellmath__57[15], inst_cellmath__57[14], inst_cellmath__57[13], inst_cellmath__57[12], inst_cellmath__57[11], inst_cellmath__57[10], inst_cellmath__57[9], inst_cellmath__57[8], inst_cellmath__57[7], inst_cellmath__57[6], inst_cellmath__57[5], inst_cellmath__57[4], inst_cellmath__57[3], inst_cellmath__57[2], inst_cellmath__57[1], inst_cellmath__57[0]}));
assign inst_cellmath__28[0] = 1'B0;
assign inst_cellmath__28[1] = 1'B0;
assign inst_cellmath__28[2] = 1'B0;
assign inst_cellmath__28[3] = 1'B0;
assign inst_cellmath__28[4] = 1'B0;
assign inst_cellmath__28[5] = 1'B0;
assign inst_cellmath__28[6] = 1'B0;
assign inst_cellmath__28[7] = 1'B0;
assign inst_cellmath__33[0] = 1'B0;
assign inst_cellmath__33[1] = 1'B0;
assign inst_cellmath__33[2] = 1'B0;
assign inst_cellmath__33[3] = 1'B0;
assign inst_cellmath__33[4] = 1'B0;
assign inst_cellmath__33[5] = 1'B0;
assign inst_cellmath__33[6] = 1'B0;
assign inst_cellmath__33[7] = 1'B0;
assign inst_cellmath__33[8] = 1'B0;
assign inst_cellmath__33[9] = 1'B0;
assign inst_cellmath__33[10] = 1'B0;
assign inst_cellmath__33[11] = 1'B0;
assign inst_cellmath__33[12] = 1'B0;
assign inst_cellmath__33[13] = 1'B0;
assign inst_cellmath__33[14] = 1'B0;
assign inst_cellmath__33[15] = 1'B0;
assign inst_cellmath__33[16] = 1'B0;
assign inst_cellmath__33[17] = 1'B0;
assign inst_cellmath__33[18] = 1'B0;
assign inst_cellmath__33[19] = 1'B0;
assign inst_cellmath__33[20] = 1'B0;
assign inst_cellmath__33[21] = 1'B0;
assign inst_cellmath__33[22] = 1'B0;
assign inst_cellmath__33[23] = 1'B0;
assign inst_cellmath__36[0] = 1'B0;
assign inst_cellmath__36[1] = 1'B0;
assign inst_cellmath__36[2] = 1'B0;
assign inst_cellmath__36[3] = 1'B0;
assign inst_cellmath__36[4] = 1'B0;
assign inst_cellmath__36[5] = 1'B0;
assign inst_cellmath__36[6] = 1'B0;
assign inst_cellmath__36[7] = 1'B0;
assign inst_cellmath__36[8] = 1'B0;
assign inst_cellmath__36[9] = 1'B0;
assign inst_cellmath__36[10] = 1'B0;
assign inst_cellmath__36[11] = 1'B0;
assign inst_cellmath__36[12] = 1'B0;
assign inst_cellmath__36[13] = 1'B0;
assign inst_cellmath__36[14] = 1'B0;
assign inst_cellmath__36[15] = 1'B0;
assign inst_cellmath__36[16] = 1'B0;
assign inst_cellmath__36[17] = 1'B0;
assign inst_cellmath__36[18] = 1'B0;
assign inst_cellmath__36[19] = 1'B0;
assign inst_cellmath__36[20] = 1'B0;
assign inst_cellmath__36[21] = 1'B0;
assign inst_cellmath__36[22] = 1'B0;
assign inst_cellmath__36[23] = 1'B0;
assign inst_cellmath__36[24] = 1'B0;
assign inst_cellmath__36[25] = 1'B0;
assign inst_cellmath__36[49] = 1'B1;
assign inst_cellmath__45[26] = 1'B0;
assign inst_cellmath__64[22] = 1'B1;
assign inst_cellmath__68[1] = inst_cellmath__68[7];
assign inst_cellmath__68[2] = inst_cellmath__68[7];
assign inst_cellmath__68[3] = inst_cellmath__68[7];
assign inst_cellmath__68[4] = inst_cellmath__68[7];
assign inst_cellmath__68[5] = inst_cellmath__68[7];
assign inst_cellmath__68[6] = inst_cellmath__68[7];
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw1925506066_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;
CLKXOR2X1 inst_cellmath__21_0_I0 (.Y(inst_cellmath__21_0_out0), .A(inst_cellmath__21_0_in1), .B(inst_cellmath__21_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw1925506066_bdw (
	inst_cellmath__9_0_out0,
	inst_cellmath__9_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__9_0_out0;
input [7:0] inst_cellmath__9_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2XL inst_cellmath__9_0_I0 (.Y(N11), .A(inst_cellmath__9_0_in0[0]), .B(inst_cellmath__9_0_in0[1]));
NAND2XL inst_cellmath__9_0_I1 (.Y(N12), .A(inst_cellmath__9_0_in0[7]), .B(inst_cellmath__9_0_in0[6]));
NAND2XL inst_cellmath__9_0_I2 (.Y(N13), .A(inst_cellmath__9_0_in0[5]), .B(inst_cellmath__9_0_in0[4]));
NAND2XL inst_cellmath__9_0_I3 (.Y(N14), .A(inst_cellmath__9_0_in0[3]), .B(inst_cellmath__9_0_in0[2]));
NOR2XL inst_cellmath__9_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__9_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__9_0_I6 (.Y(inst_cellmath__9_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw1925506066_bdw (
	inst_cellmath__10__1__out0,
	inst_cellmath__10__1__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__10__1__out0;
input [22:0] inst_cellmath__10__1__in0;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N39,N40,N41,N44,N45 
	,N47,N48;
NOR2XL inst_cellmath__10__1__I1 (.Y(N27), .A(inst_cellmath__10__1__in0[22]), .B(inst_cellmath__10__1__in0[21]));
NOR2XL inst_cellmath__10__1__I2 (.Y(N28), .A(inst_cellmath__10__1__in0[20]), .B(inst_cellmath__10__1__in0[19]));
NOR2XL inst_cellmath__10__1__I3 (.Y(N29), .A(inst_cellmath__10__1__in0[18]), .B(inst_cellmath__10__1__in0[17]));
NOR2XL inst_cellmath__10__1__I4 (.Y(N30), .A(inst_cellmath__10__1__in0[16]), .B(inst_cellmath__10__1__in0[15]));
NOR2XL inst_cellmath__10__1__I5 (.Y(N31), .A(inst_cellmath__10__1__in0[14]), .B(inst_cellmath__10__1__in0[13]));
NOR2XL inst_cellmath__10__1__I6 (.Y(N32), .A(inst_cellmath__10__1__in0[12]), .B(inst_cellmath__10__1__in0[11]));
NOR2XL inst_cellmath__10__1__I7 (.Y(N33), .A(inst_cellmath__10__1__in0[10]), .B(inst_cellmath__10__1__in0[9]));
NOR2XL inst_cellmath__10__1__I8 (.Y(N34), .A(inst_cellmath__10__1__in0[8]), .B(inst_cellmath__10__1__in0[7]));
NOR2XL inst_cellmath__10__1__I9 (.Y(N35), .A(inst_cellmath__10__1__in0[6]), .B(inst_cellmath__10__1__in0[5]));
NOR2XL inst_cellmath__10__1__I10 (.Y(N36), .A(inst_cellmath__10__1__in0[4]), .B(inst_cellmath__10__1__in0[3]));
NAND2XL inst_cellmath__10__1__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__10__1__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__10__1__I15 (.Y(N41), .A(N31), .B(N32));
NOR4XL inst_cellmath__10__1__I25 (.Y(N44), .A(inst_cellmath__10__1__in0[0]), .B(inst_cellmath__10__1__in0[1]), .C(inst_cellmath__10__1__in0[2]), .D(N39));
NOR2XL inst_cellmath__10__1__I19 (.Y(N45), .A(N40), .B(N41));
NAND4XL inst_cellmath__10__1__I27 (.Y(N48), .A(N33), .B(N35), .C(N34), .D(N36));
NAND2XL inst_cellmath__10__1__I21 (.Y(N47), .A(N44), .B(N45));
NOR2XL inst_cellmath__10__1__I23 (.Y(inst_cellmath__10__1__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw1925506066_bdw (
	inst_cellmath__12_0_out0,
	inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__12_0_out0;
input  inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1;
AND2XL inst_cellmath__12_0_I0 (.Y(inst_cellmath__12_0_out0), .A(inst_cellmath__12_0_in0), .B(inst_cellmath__12_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw1925506066_bdw (
	inst_cellmath__14_0_out0,
	inst_cellmath__14_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__14_0_out0;
input [7:0] inst_cellmath__14_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2XL inst_cellmath__14_0_I0 (.Y(N11), .A(inst_cellmath__14_0_in0[0]), .B(inst_cellmath__14_0_in0[1]));
NAND2XL inst_cellmath__14_0_I1 (.Y(N12), .A(inst_cellmath__14_0_in0[7]), .B(inst_cellmath__14_0_in0[6]));
NAND2XL inst_cellmath__14_0_I2 (.Y(N13), .A(inst_cellmath__14_0_in0[5]), .B(inst_cellmath__14_0_in0[4]));
NAND2XL inst_cellmath__14_0_I3 (.Y(N14), .A(inst_cellmath__14_0_in0[3]), .B(inst_cellmath__14_0_in0[2]));
NOR2XL inst_cellmath__14_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__14_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__14_0_I6 (.Y(inst_cellmath__14_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw1925506066_bdw (
	inst_cellmath__15__3__out0,
	inst_cellmath__15__3__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__15__3__out0;
input [22:0] inst_cellmath__15__3__in0;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N39,N40,N41,N44,N45 
	,N47,N48;
NOR2XL inst_cellmath__15__3__I1 (.Y(N27), .A(inst_cellmath__15__3__in0[22]), .B(inst_cellmath__15__3__in0[21]));
NOR2XL inst_cellmath__15__3__I2 (.Y(N28), .A(inst_cellmath__15__3__in0[20]), .B(inst_cellmath__15__3__in0[19]));
NOR2XL inst_cellmath__15__3__I3 (.Y(N29), .A(inst_cellmath__15__3__in0[18]), .B(inst_cellmath__15__3__in0[17]));
NOR2XL inst_cellmath__15__3__I4 (.Y(N30), .A(inst_cellmath__15__3__in0[16]), .B(inst_cellmath__15__3__in0[15]));
NOR2XL inst_cellmath__15__3__I5 (.Y(N31), .A(inst_cellmath__15__3__in0[14]), .B(inst_cellmath__15__3__in0[13]));
NOR2XL inst_cellmath__15__3__I6 (.Y(N32), .A(inst_cellmath__15__3__in0[12]), .B(inst_cellmath__15__3__in0[11]));
NOR2XL inst_cellmath__15__3__I7 (.Y(N33), .A(inst_cellmath__15__3__in0[10]), .B(inst_cellmath__15__3__in0[9]));
NOR2XL inst_cellmath__15__3__I8 (.Y(N34), .A(inst_cellmath__15__3__in0[8]), .B(inst_cellmath__15__3__in0[7]));
NOR2XL inst_cellmath__15__3__I9 (.Y(N35), .A(inst_cellmath__15__3__in0[6]), .B(inst_cellmath__15__3__in0[5]));
NOR2XL inst_cellmath__15__3__I10 (.Y(N36), .A(inst_cellmath__15__3__in0[4]), .B(inst_cellmath__15__3__in0[3]));
NAND2XL inst_cellmath__15__3__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__15__3__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__15__3__I15 (.Y(N41), .A(N31), .B(N32));
NOR4XL inst_cellmath__15__3__I25 (.Y(N44), .A(inst_cellmath__15__3__in0[0]), .B(inst_cellmath__15__3__in0[1]), .C(inst_cellmath__15__3__in0[2]), .D(N39));
NOR2XL inst_cellmath__15__3__I19 (.Y(N45), .A(N40), .B(N41));
NAND4XL inst_cellmath__15__3__I27 (.Y(N48), .A(N33), .B(N35), .C(N34), .D(N36));
NAND2XL inst_cellmath__15__3__I21 (.Y(N47), .A(N44), .B(N45));
NOR2XL inst_cellmath__15__3__I23 (.Y(inst_cellmath__15__3__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw1925506066_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__17_0_out0;
input  inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1;
AND2XL inst_cellmath__17_0_I0 (.Y(inst_cellmath__17_0_out0), .A(inst_cellmath__17_0_in1), .B(inst_cellmath__17_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw1925506066_bdw (
	inst_cellmath__24__5__out0,
	inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__24__5__out0;
input  inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2;
AND3XL inst_cellmath__24__5__I4 (.Y(inst_cellmath__24__5__out0[0]), .A(inst_cellmath__24__5__in1), .B(inst_cellmath__24__5__in2), .C(inst_cellmath__24__5__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw1925506066_bdw (
	inst_cellmath__13_1_out0,
	inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__13_1_out0;
input  inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1;
NOR2BX1 inst_cellmath__13_1_I2 (.Y(inst_cellmath__13_1_out0), .AN(inst_cellmath__13_1_in0), .B(inst_cellmath__13_1_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw1925506066_bdw (
	inst_cellmath__18_0_out0,
	inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__18_0_out0;
input  inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1;
NOR2BX1 inst_cellmath__18_0_I2 (.Y(inst_cellmath__18_0_out0), .AN(inst_cellmath__18_0_in1), .B(inst_cellmath__18_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw1925506066_bdw (
	inst_cellmath__63_1_out0,
	inst_cellmath__63_1_in0,
	inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__63_1_out0;
input [0:0] inst_cellmath__63_1_in0;
input  inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2;
OR3XL inst_cellmath__63_1_I4 (.Y(inst_cellmath__63_1_out0), .A(inst_cellmath__63_1_in1), .B(inst_cellmath__63_1_in2), .C(inst_cellmath__63_1_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw1925506066_bdw (
	inst_cellmath__11__2__out0,
	inst_cellmath__11__2__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__11__2__out0;
input [7:0] inst_cellmath__11__2__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2XL inst_cellmath__11__2__I0 (.Y(N11), .A(inst_cellmath__11__2__in0[0]), .B(inst_cellmath__11__2__in0[1]));
NOR2XL inst_cellmath__11__2__I1 (.Y(N12), .A(inst_cellmath__11__2__in0[7]), .B(inst_cellmath__11__2__in0[6]));
NOR2XL inst_cellmath__11__2__I2 (.Y(N13), .A(inst_cellmath__11__2__in0[5]), .B(inst_cellmath__11__2__in0[4]));
NOR2XL inst_cellmath__11__2__I3 (.Y(N14), .A(inst_cellmath__11__2__in0[3]), .B(inst_cellmath__11__2__in0[2]));
NAND2XL inst_cellmath__11__2__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__11__2__I5 (.Y(N16), .A(N13), .B(N14));
NOR2XL inst_cellmath__11__2__I6 (.Y(inst_cellmath__11__2__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw1925506066_bdw (
	inst_cellmath__16__4__out0,
	inst_cellmath__16__4__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__16__4__out0;
input [7:0] inst_cellmath__16__4__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2XL inst_cellmath__16__4__I0 (.Y(N11), .A(inst_cellmath__16__4__in0[0]), .B(inst_cellmath__16__4__in0[1]));
NOR2XL inst_cellmath__16__4__I1 (.Y(N12), .A(inst_cellmath__16__4__in0[7]), .B(inst_cellmath__16__4__in0[6]));
NOR2XL inst_cellmath__16__4__I2 (.Y(N13), .A(inst_cellmath__16__4__in0[5]), .B(inst_cellmath__16__4__in0[4]));
NOR2XL inst_cellmath__16__4__I3 (.Y(N14), .A(inst_cellmath__16__4__in0[3]), .B(inst_cellmath__16__4__in0[2]));
NAND2XL inst_cellmath__16__4__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__16__4__I5 (.Y(N16), .A(N13), .B(N14));
NOR2XL inst_cellmath__16__4__I6 (.Y(inst_cellmath__16__4__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw1925506066_bdw (
	inst_cellmath__67__67__out0,
	inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__67__out0;
input  inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1;
AND2XL inst_cellmath__67__67__I0 (.Y(inst_cellmath__67__67__out0[0]), .A(inst_cellmath__67__67__in1), .B(inst_cellmath__67__67__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw1925506066_bdw (
	inst_cellmath__6_0_out0,
	inst_cellmath__6_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__6_0_out0;
input [2:0] inst_cellmath__6_0_in0;
NOR3BXL inst_cellmath__6_0_I23 (.Y(inst_cellmath__6_0_out0), .AN(inst_cellmath__6_0_in0[1]), .B(inst_cellmath__6_0_in0[2]), .C(inst_cellmath__6_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw1925506066_bdw (
	inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1,
	inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1
	); /* architecture "gate_level" */ 
output [8:0] inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1;
input [7:0] inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1;
wire N46,N50,N52,N54,N56,N58,N60 
	,N64,N70,N74,N76,N78,N80,N82,N84 
	,N88;
ADDHX1 inst_cellmath__28__8__I0 (.CO(N46), .S(inst_cellmath__28__8__out0[0]), .A(inst_cellmath__28__8__in1[0]), .B(inst_cellmath__28__8__in0[0]));
ADDFX1 inst_cellmath__28__8__I1 (.CO(N50), .S(inst_cellmath__28__8__out0[1]), .A(inst_cellmath__28__8__in0[1]), .B(inst_cellmath__28__8__in1[1]), .CI(N46));
ADDFX1 inst_cellmath__28__8__I2 (.CO(N52), .S(inst_cellmath__28__8__out0[2]), .A(inst_cellmath__28__8__in0[2]), .B(inst_cellmath__28__8__in1[2]), .CI(N50));
ADDFX1 inst_cellmath__28__8__I3 (.CO(N54), .S(inst_cellmath__28__8__out0[3]), .A(inst_cellmath__28__8__in0[3]), .B(inst_cellmath__28__8__in1[3]), .CI(N52));
ADDFX1 inst_cellmath__28__8__I4 (.CO(N56), .S(inst_cellmath__28__8__out0[4]), .A(inst_cellmath__28__8__in0[4]), .B(inst_cellmath__28__8__in1[4]), .CI(N54));
ADDFX1 inst_cellmath__28__8__I5 (.CO(N58), .S(inst_cellmath__28__8__out0[5]), .A(inst_cellmath__28__8__in0[5]), .B(inst_cellmath__28__8__in1[5]), .CI(N56));
ADDFX1 inst_cellmath__28__8__I6 (.CO(N60), .S(inst_cellmath__28__8__out0[6]), .A(inst_cellmath__28__8__in0[6]), .B(inst_cellmath__28__8__in1[6]), .CI(N58));
ADDFX1 inst_cellmath__28__8__I7 (.CO(N64), .S(inst_cellmath__28__8__out0[7]), .A(inst_cellmath__28__8__in0[7]), .B(inst_cellmath__28__8__in1[7]), .CI(N60));
INVXL inst_cellmath__28__8__I8 (.Y(inst_cellmath__28__8__out0[8]), .A(N64));
XNOR2X1 hap1_A_I25 (.Y(inst_cellmath__28__8__out1[0]), .A(inst_cellmath__28__8__in0[0]), .B(inst_cellmath__28__8__in1[0]));
OR2XL hap1_A_I26 (.Y(N70), .A(inst_cellmath__28__8__in0[0]), .B(inst_cellmath__28__8__in1[0]));
ADDFX1 inst_cellmath__28__8__I10 (.CO(N74), .S(inst_cellmath__28__8__out1[1]), .A(inst_cellmath__28__8__in0[1]), .B(inst_cellmath__28__8__in1[1]), .CI(N70));
ADDFX1 inst_cellmath__28__8__I11 (.CO(N76), .S(inst_cellmath__28__8__out1[2]), .A(inst_cellmath__28__8__in0[2]), .B(inst_cellmath__28__8__in1[2]), .CI(N74));
ADDFX1 inst_cellmath__28__8__I12 (.CO(N78), .S(inst_cellmath__28__8__out1[3]), .A(inst_cellmath__28__8__in0[3]), .B(inst_cellmath__28__8__in1[3]), .CI(N76));
ADDFX1 inst_cellmath__28__8__I13 (.CO(N80), .S(inst_cellmath__28__8__out1[4]), .A(inst_cellmath__28__8__in0[4]), .B(inst_cellmath__28__8__in1[4]), .CI(N78));
ADDFX1 inst_cellmath__28__8__I14 (.CO(N82), .S(inst_cellmath__28__8__out1[5]), .A(inst_cellmath__28__8__in0[5]), .B(inst_cellmath__28__8__in1[5]), .CI(N80));
ADDFX1 inst_cellmath__28__8__I15 (.CO(N84), .S(inst_cellmath__28__8__out1[6]), .A(inst_cellmath__28__8__in0[6]), .B(inst_cellmath__28__8__in1[6]), .CI(N82));
ADDFX1 inst_cellmath__28__8__I16 (.CO(N88), .S(inst_cellmath__28__8__out1[7]), .A(inst_cellmath__28__8__in0[7]), .B(inst_cellmath__28__8__in1[7]), .CI(N84));
INVXL inst_cellmath__28__8__I17 (.Y(inst_cellmath__28__8__out1[8]), .A(N88));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw1925506066_bdw (
	inst_cellmath__34_0_out0,
	inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__34_0_out0;
input [22:0] inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1;
wire N136,N140,N144,N148,N152,N156,N160 
	,N164,N168,N172,N176,N190,N192,N193,N194 
	,N195,N196,N197,N198,N199,N200,N201,N202 
	,N203,N204,N205,N206,N207,N208,N209,N210 
	,N211,N212,N216,N218,N227,N229,N238,N240 
	,N249,N251,N260,N262,N271,N273,N282,N284 
	,N293,N295,N304,N306,N315,N317,N326,N328 
	,N381,N388,N395,N402,N409,N416,N423,N430 
	,N437,N444,N451;
INVXL inst_cellmath__34_0_I35 (.Y(N136), .A(inst_cellmath__34_0_in1[2]));
INVXL inst_cellmath__34_0_I37 (.Y(N140), .A(inst_cellmath__34_0_in1[4]));
INVXL inst_cellmath__34_0_I39 (.Y(N144), .A(inst_cellmath__34_0_in1[6]));
INVXL inst_cellmath__34_0_I41 (.Y(N148), .A(inst_cellmath__34_0_in1[8]));
INVXL inst_cellmath__34_0_I43 (.Y(N152), .A(inst_cellmath__34_0_in1[10]));
INVXL inst_cellmath__34_0_I45 (.Y(N156), .A(inst_cellmath__34_0_in1[12]));
INVXL inst_cellmath__34_0_I47 (.Y(N160), .A(inst_cellmath__34_0_in1[14]));
INVXL inst_cellmath__34_0_I49 (.Y(N164), .A(inst_cellmath__34_0_in1[16]));
INVXL inst_cellmath__34_0_I51 (.Y(N168), .A(inst_cellmath__34_0_in1[18]));
INVXL inst_cellmath__34_0_I53 (.Y(N172), .A(inst_cellmath__34_0_in1[20]));
INVXL inst_cellmath__34_0_I55 (.Y(N176), .A(inst_cellmath__34_0_in1[22]));
NAND2BXL inst_cellmath__34_0_I134 (.Y(N190), .AN(inst_cellmath__34_0_in1[0]), .B(inst_cellmath__34_0_in0[0]));
INVXL cmpii_A_I90 (.Y(N218), .A(inst_cellmath__34_0_in0[1]));
AND2XL cmpii_A_I92 (.Y(N216), .A(N218), .B(inst_cellmath__34_0_in1[1]));
OAI22XL cmpii_A_I93 (.Y(N192), .A0(N216), .A1(N190), .B0(N218), .B1(inst_cellmath__34_0_in1[1]));
OR2XL cmpoi_A_I136 (.Y(N381), .A(inst_cellmath__34_0_in0[2]), .B(N136));
AOI22XL cmpoi_A_I137 (.Y(N193), .A0(N192), .A1(N381), .B0(inst_cellmath__34_0_in0[2]), .B1(N136));
INVXL cmpii_A_I94 (.Y(N229), .A(inst_cellmath__34_0_in0[3]));
AND2XL cmpii_A_I96 (.Y(N227), .A(N229), .B(inst_cellmath__34_0_in1[3]));
OAI22XL cmpii_A_I97 (.Y(N194), .A0(N227), .A1(N193), .B0(N229), .B1(inst_cellmath__34_0_in1[3]));
OR2XL cmpoi_A_I138 (.Y(N388), .A(inst_cellmath__34_0_in0[4]), .B(N140));
AOI22XL cmpoi_A_I139 (.Y(N195), .A0(N194), .A1(N388), .B0(inst_cellmath__34_0_in0[4]), .B1(N140));
INVXL cmpii_A_I98 (.Y(N240), .A(inst_cellmath__34_0_in0[5]));
AND2XL cmpii_A_I100 (.Y(N238), .A(N240), .B(inst_cellmath__34_0_in1[5]));
OAI22XL cmpii_A_I101 (.Y(N196), .A0(N238), .A1(N195), .B0(N240), .B1(inst_cellmath__34_0_in1[5]));
OR2XL cmpoi_A_I140 (.Y(N395), .A(inst_cellmath__34_0_in0[6]), .B(N144));
AOI22XL cmpoi_A_I141 (.Y(N197), .A0(N196), .A1(N395), .B0(inst_cellmath__34_0_in0[6]), .B1(N144));
INVXL cmpii_A_I102 (.Y(N251), .A(inst_cellmath__34_0_in0[7]));
AND2XL cmpii_A_I104 (.Y(N249), .A(N251), .B(inst_cellmath__34_0_in1[7]));
OAI22XL cmpii_A_I105 (.Y(N198), .A0(N249), .A1(N197), .B0(N251), .B1(inst_cellmath__34_0_in1[7]));
OR2XL cmpoi_A_I142 (.Y(N402), .A(inst_cellmath__34_0_in0[8]), .B(N148));
AOI22XL cmpoi_A_I143 (.Y(N199), .A0(N198), .A1(N402), .B0(inst_cellmath__34_0_in0[8]), .B1(N148));
INVXL cmpii_A_I106 (.Y(N262), .A(inst_cellmath__34_0_in0[9]));
AND2XL cmpii_A_I108 (.Y(N260), .A(N262), .B(inst_cellmath__34_0_in1[9]));
OAI22XL cmpii_A_I109 (.Y(N200), .A0(N260), .A1(N199), .B0(N262), .B1(inst_cellmath__34_0_in1[9]));
OR2XL cmpoi_A_I144 (.Y(N409), .A(inst_cellmath__34_0_in0[10]), .B(N152));
AOI22XL cmpoi_A_I145 (.Y(N201), .A0(N200), .A1(N409), .B0(inst_cellmath__34_0_in0[10]), .B1(N152));
INVXL cmpii_A_I110 (.Y(N273), .A(inst_cellmath__34_0_in0[11]));
AND2XL cmpii_A_I112 (.Y(N271), .A(N273), .B(inst_cellmath__34_0_in1[11]));
OAI22XL cmpii_A_I113 (.Y(N202), .A0(N271), .A1(N201), .B0(N273), .B1(inst_cellmath__34_0_in1[11]));
OR2XL cmpoi_A_I146 (.Y(N416), .A(inst_cellmath__34_0_in0[12]), .B(N156));
AOI22XL cmpoi_A_I147 (.Y(N203), .A0(N202), .A1(N416), .B0(inst_cellmath__34_0_in0[12]), .B1(N156));
INVXL cmpii_A_I114 (.Y(N284), .A(inst_cellmath__34_0_in0[13]));
AND2XL cmpii_A_I116 (.Y(N282), .A(N284), .B(inst_cellmath__34_0_in1[13]));
OAI22XL cmpii_A_I117 (.Y(N204), .A0(N282), .A1(N203), .B0(N284), .B1(inst_cellmath__34_0_in1[13]));
OR2XL cmpoi_A_I148 (.Y(N423), .A(inst_cellmath__34_0_in0[14]), .B(N160));
AOI22XL cmpoi_A_I149 (.Y(N205), .A0(N204), .A1(N423), .B0(inst_cellmath__34_0_in0[14]), .B1(N160));
INVXL cmpii_A_I118 (.Y(N295), .A(inst_cellmath__34_0_in0[15]));
AND2XL cmpii_A_I120 (.Y(N293), .A(N295), .B(inst_cellmath__34_0_in1[15]));
OAI22XL cmpii_A_I121 (.Y(N206), .A0(N293), .A1(N205), .B0(N295), .B1(inst_cellmath__34_0_in1[15]));
OR2XL cmpoi_A_I150 (.Y(N430), .A(inst_cellmath__34_0_in0[16]), .B(N164));
AOI22XL cmpoi_A_I151 (.Y(N207), .A0(N206), .A1(N430), .B0(inst_cellmath__34_0_in0[16]), .B1(N164));
INVXL cmpii_A_I122 (.Y(N306), .A(inst_cellmath__34_0_in0[17]));
AND2XL cmpii_A_I124 (.Y(N304), .A(N306), .B(inst_cellmath__34_0_in1[17]));
OAI22XL cmpii_A_I125 (.Y(N208), .A0(N304), .A1(N207), .B0(N306), .B1(inst_cellmath__34_0_in1[17]));
OR2XL cmpoi_A_I152 (.Y(N437), .A(inst_cellmath__34_0_in0[18]), .B(N168));
AOI22XL cmpoi_A_I153 (.Y(N209), .A0(N208), .A1(N437), .B0(inst_cellmath__34_0_in0[18]), .B1(N168));
INVXL cmpii_A_I126 (.Y(N317), .A(inst_cellmath__34_0_in0[19]));
AND2XL cmpii_A_I128 (.Y(N315), .A(N317), .B(inst_cellmath__34_0_in1[19]));
OAI22XL cmpii_A_I129 (.Y(N210), .A0(N315), .A1(N209), .B0(N317), .B1(inst_cellmath__34_0_in1[19]));
OR2XL cmpoi_A_I154 (.Y(N444), .A(inst_cellmath__34_0_in0[20]), .B(N172));
AOI22XL cmpoi_A_I155 (.Y(N211), .A0(N210), .A1(N444), .B0(inst_cellmath__34_0_in0[20]), .B1(N172));
INVXL cmpii_A_I130 (.Y(N328), .A(inst_cellmath__34_0_in0[21]));
AND2XL cmpii_A_I132 (.Y(N326), .A(N328), .B(inst_cellmath__34_0_in1[21]));
OAI22XL cmpii_A_I133 (.Y(N212), .A0(N326), .A1(N211), .B0(N328), .B1(inst_cellmath__34_0_in1[21]));
OR2XL cmp_A_I156 (.Y(N451), .A(inst_cellmath__34_0_in0[22]), .B(N176));
AO22XL cmp_A_I157 (.Y(inst_cellmath__34_0_out0), .A0(N451), .A1(N212), .B0(inst_cellmath__34_0_in0[22]), .B1(N176));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw1925506066_bdw (
	inst_cellmath__32__14__out0,
	inst_cellmath__32__14__in0,
	inst_cellmath__32__14__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__32__14__out0;
input  inst_cellmath__32__14__in0;
input [8:8] inst_cellmath__32__14__in1;
NOR2BX1 inst_cellmath__32__14__I3 (.Y(inst_cellmath__32__14__out0[0]), .AN(inst_cellmath__32__14__in0), .B(inst_cellmath__32__14__in1[8]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw1925506066_bdw (
	inst_cellmath__32_0_out0,
	inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__32_0_out0;
input [0:0] inst_cellmath__32_0_in0;
input [8:8] inst_cellmath__32_0_in1;
OR2XL inst_cellmath__32_0_I0 (.Y(inst_cellmath__32_0_out0), .A(inst_cellmath__32_0_in1[8]), .B(inst_cellmath__32_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw1925506066_bdw (
	inst_cellmath__48_0_out0,
	inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__48_0_out0;
input  inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1,
	inst_cellmath__48_0_in2;
MX2X1 inst_cellmath__48_0_I2 (.Y(inst_cellmath__48_0_out0), .A(inst_cellmath__48_0_in2), .B(inst_cellmath__48_0_in1), .S0(inst_cellmath__48_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw1925506066_bdw (
	inst_cellmath__35_0_out0,
	inst_cellmath__35_0_in0,
	inst_cellmath__35_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__35_0_out0;
input [7:0] inst_cellmath__35_0_in0;
input [8:0] inst_cellmath__35_0_in1;
wire N43,N44,N45,N46,N47,N48,N49 
	,N50,N62;
INVXL inst_cellmath__35_0_I16 (.Y(N43), .A(inst_cellmath__35_0_in1[0]));
INVXL inst_cellmath__35_0_I17 (.Y(N44), .A(inst_cellmath__35_0_in1[1]));
INVXL inst_cellmath__35_0_I18 (.Y(N45), .A(inst_cellmath__35_0_in1[2]));
INVXL inst_cellmath__35_0_I19 (.Y(N46), .A(inst_cellmath__35_0_in1[3]));
INVXL inst_cellmath__35_0_I20 (.Y(N47), .A(inst_cellmath__35_0_in1[4]));
INVXL inst_cellmath__35_0_I21 (.Y(N48), .A(inst_cellmath__35_0_in1[5]));
INVXL inst_cellmath__35_0_I22 (.Y(N49), .A(inst_cellmath__35_0_in1[6]));
INVXL inst_cellmath__35_0_I23 (.Y(N50), .A(inst_cellmath__35_0_in1[7]));
INVXL inst_cellmath__35_0_I34 (.Y(N62), .A(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I25 (.Y(inst_cellmath__35_0_out0[0]), .A0(N62), .A1(N43), .B0(inst_cellmath__35_0_in0[0]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I26 (.Y(inst_cellmath__35_0_out0[1]), .A0(N62), .A1(N44), .B0(inst_cellmath__35_0_in0[1]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I27 (.Y(inst_cellmath__35_0_out0[2]), .A0(N62), .A1(N45), .B0(inst_cellmath__35_0_in0[2]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I28 (.Y(inst_cellmath__35_0_out0[3]), .A0(N62), .A1(N46), .B0(inst_cellmath__35_0_in0[3]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I29 (.Y(inst_cellmath__35_0_out0[4]), .A0(N62), .A1(N47), .B0(inst_cellmath__35_0_in0[4]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I30 (.Y(inst_cellmath__35_0_out0[5]), .A0(N62), .A1(N48), .B0(inst_cellmath__35_0_in0[5]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I31 (.Y(inst_cellmath__35_0_out0[6]), .A0(N62), .A1(N49), .B0(inst_cellmath__35_0_in0[6]), .B1(inst_cellmath__35_0_in1[8]));
AOI22XL inst_cellmath__35_0_I32 (.Y(inst_cellmath__35_0_out0[7]), .A0(N62), .A1(N50), .B0(inst_cellmath__35_0_in0[7]), .B1(inst_cellmath__35_0_in1[8]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw1925506066_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;
wire N64,N68;
OAI211X1 inst_cellmath__30_0_I34 (.Y(N64), .A0(inst_cellmath__30_0_in0[2]), .A1(inst_cellmath__30_0_in0[1]), .B0(inst_cellmath__30_0_in0[4]), .C0(inst_cellmath__30_0_in0[3]));
NOR3BXL inst_cellmath__30_0_I35 (.Y(N68), .AN(N64), .B(inst_cellmath__30_0_in0[6]), .C(inst_cellmath__30_0_in0[5]));
NAND2BXL inst_cellmath__30_0_I32 (.Y(inst_cellmath__30_0_out0), .AN(inst_cellmath__30_0_in0[7]), .B(N68));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw1925506066_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__31_0_out0;
input  inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1;
OR2XL inst_cellmath__31_0_I0 (.Y(inst_cellmath__31_0_out0), .A(inst_cellmath__31_0_in1), .B(inst_cellmath__31_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw1925506066_bdw (
	inst_cellmath__33__18__out0,
	inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__33__18__out0;
input  inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1;
OR2XL inst_cellmath__33__18__I0 (.Y(inst_cellmath__33__18__out0[0]), .A(inst_cellmath__33__18__in0), .B(inst_cellmath__33__18__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw1925506066_bdw (
	inst_cellmath__36__15__out0,
	inst_cellmath__36__15__in0,
	inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__36__15__out0;
input  inst_cellmath__36__15__in0;
input [22:0] inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2;
wire N263,N266;
INVXL buf1_A_I77 (.Y(N266), .A(inst_cellmath__36__15__in0));
INVXL buf1_A_I78 (.Y(N263), .A(N266));
MX2XL inst_cellmath__36__15__I46 (.Y(inst_cellmath__36__15__out0[0]), .A(inst_cellmath__36__15__in1[0]), .B(inst_cellmath__36__15__in2[0]), .S0(N263));
MX2XL inst_cellmath__36__15__I47 (.Y(inst_cellmath__36__15__out0[1]), .A(inst_cellmath__36__15__in1[1]), .B(inst_cellmath__36__15__in2[1]), .S0(N263));
MX2XL inst_cellmath__36__15__I48 (.Y(inst_cellmath__36__15__out0[2]), .A(inst_cellmath__36__15__in1[2]), .B(inst_cellmath__36__15__in2[2]), .S0(N263));
MX2XL inst_cellmath__36__15__I49 (.Y(inst_cellmath__36__15__out0[3]), .A(inst_cellmath__36__15__in1[3]), .B(inst_cellmath__36__15__in2[3]), .S0(N263));
MX2XL inst_cellmath__36__15__I50 (.Y(inst_cellmath__36__15__out0[4]), .A(inst_cellmath__36__15__in1[4]), .B(inst_cellmath__36__15__in2[4]), .S0(N263));
MX2XL inst_cellmath__36__15__I51 (.Y(inst_cellmath__36__15__out0[5]), .A(inst_cellmath__36__15__in1[5]), .B(inst_cellmath__36__15__in2[5]), .S0(N263));
MX2XL inst_cellmath__36__15__I52 (.Y(inst_cellmath__36__15__out0[6]), .A(inst_cellmath__36__15__in1[6]), .B(inst_cellmath__36__15__in2[6]), .S0(N263));
MX2XL inst_cellmath__36__15__I53 (.Y(inst_cellmath__36__15__out0[7]), .A(inst_cellmath__36__15__in1[7]), .B(inst_cellmath__36__15__in2[7]), .S0(N263));
MX2XL inst_cellmath__36__15__I54 (.Y(inst_cellmath__36__15__out0[8]), .A(inst_cellmath__36__15__in1[8]), .B(inst_cellmath__36__15__in2[8]), .S0(N263));
MX2XL inst_cellmath__36__15__I55 (.Y(inst_cellmath__36__15__out0[9]), .A(inst_cellmath__36__15__in1[9]), .B(inst_cellmath__36__15__in2[9]), .S0(N263));
MX2XL inst_cellmath__36__15__I56 (.Y(inst_cellmath__36__15__out0[10]), .A(inst_cellmath__36__15__in1[10]), .B(inst_cellmath__36__15__in2[10]), .S0(N263));
MX2XL inst_cellmath__36__15__I57 (.Y(inst_cellmath__36__15__out0[11]), .A(inst_cellmath__36__15__in1[11]), .B(inst_cellmath__36__15__in2[11]), .S0(N263));
MX2XL inst_cellmath__36__15__I58 (.Y(inst_cellmath__36__15__out0[12]), .A(inst_cellmath__36__15__in1[12]), .B(inst_cellmath__36__15__in2[12]), .S0(N263));
MX2XL inst_cellmath__36__15__I59 (.Y(inst_cellmath__36__15__out0[13]), .A(inst_cellmath__36__15__in1[13]), .B(inst_cellmath__36__15__in2[13]), .S0(N263));
MX2XL inst_cellmath__36__15__I60 (.Y(inst_cellmath__36__15__out0[14]), .A(inst_cellmath__36__15__in1[14]), .B(inst_cellmath__36__15__in2[14]), .S0(N263));
MX2XL inst_cellmath__36__15__I61 (.Y(inst_cellmath__36__15__out0[15]), .A(inst_cellmath__36__15__in1[15]), .B(inst_cellmath__36__15__in2[15]), .S0(N263));
MX2XL inst_cellmath__36__15__I62 (.Y(inst_cellmath__36__15__out0[16]), .A(inst_cellmath__36__15__in1[16]), .B(inst_cellmath__36__15__in2[16]), .S0(N263));
MX2XL inst_cellmath__36__15__I63 (.Y(inst_cellmath__36__15__out0[17]), .A(inst_cellmath__36__15__in1[17]), .B(inst_cellmath__36__15__in2[17]), .S0(N263));
MX2XL inst_cellmath__36__15__I64 (.Y(inst_cellmath__36__15__out0[18]), .A(inst_cellmath__36__15__in1[18]), .B(inst_cellmath__36__15__in2[18]), .S0(N263));
MX2XL inst_cellmath__36__15__I65 (.Y(inst_cellmath__36__15__out0[19]), .A(inst_cellmath__36__15__in1[19]), .B(inst_cellmath__36__15__in2[19]), .S0(N263));
MX2XL inst_cellmath__36__15__I66 (.Y(inst_cellmath__36__15__out0[20]), .A(inst_cellmath__36__15__in1[20]), .B(inst_cellmath__36__15__in2[20]), .S0(N263));
MX2XL inst_cellmath__36__15__I67 (.Y(inst_cellmath__36__15__out0[21]), .A(inst_cellmath__36__15__in1[21]), .B(inst_cellmath__36__15__in2[21]), .S0(N263));
MX2XL inst_cellmath__36__15__I68 (.Y(inst_cellmath__36__15__out0[22]), .A(inst_cellmath__36__15__in1[22]), .B(inst_cellmath__36__15__in2[22]), .S0(N263));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw1925506066_bdw (
	inst_cellmath__37_0_out0,
	inst_cellmath__37_0_in0,
	inst_cellmath__37_0_in1
	); /* architecture "gate_level" */ 
output [49:0] inst_cellmath__37_0_out0;
input [22:0] inst_cellmath__37_0_in0;
input [4:0] inst_cellmath__37_0_in1;
wire N157,N159,N160,N161,N162,N163,N164 
	,N165,N166,N167,N168,N169,N170,N171,N172 
	,N173,N174,N175,N176,N177,N178,N179,N180 
	,N181,N261,N263,N265,N267,N269,N270,N271 
	,N272,N273,N274,N275,N276,N277,N278,N279 
	,N280,N281,N282,N283,N284,N285,N286,N287 
	,N288,N289,N290,N292,N294,N296,N390,N393 
	,N396,N397,N398,N399,N400,N401,N402,N403 
	,N404,N405,N406,N407,N408,N409,N410,N411 
	,N412,N413,N414,N415,N416,N417,N418,N419 
	,N420,N421,N422,N423,N426,N536,N538,N540 
	,N542,N544,N546,N548,N550,N552,N554,N556 
	,N558,N560,N562,N564,N566,N568,N569,N570 
	,N571,N572,N573,N574,N575,N576,N577,N578 
	,N579,N580,N581,N582,N583,N585,N587,N589 
	,N591,N593,N595,N597,N599,N601,N603,N605 
	,N607,N609,N611,N613,N875,N876,N877,N879 
	,N880,N882,N883,N885,N886,N894;
INVX1 inst_cellmath__37_0_I536 (.Y(N875), .A(inst_cellmath__37_0_in1[0]));
NOR2BX1 inst_cellmath__37_0_I27 (.Y(N157), .AN(inst_cellmath__37_0_in0[0]), .B(N875));
MX2XL inst_cellmath__37_0_I28 (.Y(N159), .A(inst_cellmath__37_0_in0[1]), .B(inst_cellmath__37_0_in0[0]), .S0(N875));
MX2XL inst_cellmath__37_0_I29 (.Y(N160), .A(inst_cellmath__37_0_in0[2]), .B(inst_cellmath__37_0_in0[1]), .S0(N875));
MX2XL inst_cellmath__37_0_I30 (.Y(N161), .A(inst_cellmath__37_0_in0[3]), .B(inst_cellmath__37_0_in0[2]), .S0(N875));
MX2XL inst_cellmath__37_0_I31 (.Y(N162), .A(inst_cellmath__37_0_in0[4]), .B(inst_cellmath__37_0_in0[3]), .S0(N875));
MX2XL inst_cellmath__37_0_I32 (.Y(N163), .A(inst_cellmath__37_0_in0[5]), .B(inst_cellmath__37_0_in0[4]), .S0(N875));
MX2XL inst_cellmath__37_0_I33 (.Y(N164), .A(inst_cellmath__37_0_in0[6]), .B(inst_cellmath__37_0_in0[5]), .S0(N875));
MX2XL inst_cellmath__37_0_I34 (.Y(N165), .A(inst_cellmath__37_0_in0[7]), .B(inst_cellmath__37_0_in0[6]), .S0(N875));
MX2XL inst_cellmath__37_0_I35 (.Y(N166), .A(inst_cellmath__37_0_in0[8]), .B(inst_cellmath__37_0_in0[7]), .S0(N875));
MX2XL inst_cellmath__37_0_I36 (.Y(N167), .A(inst_cellmath__37_0_in0[9]), .B(inst_cellmath__37_0_in0[8]), .S0(N875));
MX2XL inst_cellmath__37_0_I37 (.Y(N168), .A(inst_cellmath__37_0_in0[10]), .B(inst_cellmath__37_0_in0[9]), .S0(N875));
MX2XL inst_cellmath__37_0_I38 (.Y(N169), .A(inst_cellmath__37_0_in0[11]), .B(inst_cellmath__37_0_in0[10]), .S0(N875));
MX2XL inst_cellmath__37_0_I39 (.Y(N170), .A(inst_cellmath__37_0_in0[12]), .B(inst_cellmath__37_0_in0[11]), .S0(N875));
MX2XL inst_cellmath__37_0_I40 (.Y(N171), .A(inst_cellmath__37_0_in0[13]), .B(inst_cellmath__37_0_in0[12]), .S0(N875));
MX2XL inst_cellmath__37_0_I41 (.Y(N172), .A(inst_cellmath__37_0_in0[14]), .B(inst_cellmath__37_0_in0[13]), .S0(N875));
MX2XL inst_cellmath__37_0_I42 (.Y(N173), .A(inst_cellmath__37_0_in0[15]), .B(inst_cellmath__37_0_in0[14]), .S0(N875));
MX2XL inst_cellmath__37_0_I43 (.Y(N174), .A(inst_cellmath__37_0_in0[16]), .B(inst_cellmath__37_0_in0[15]), .S0(N875));
MX2XL inst_cellmath__37_0_I44 (.Y(N175), .A(inst_cellmath__37_0_in0[17]), .B(inst_cellmath__37_0_in0[16]), .S0(N875));
MX2XL inst_cellmath__37_0_I45 (.Y(N176), .A(inst_cellmath__37_0_in0[18]), .B(inst_cellmath__37_0_in0[17]), .S0(N875));
MX2XL inst_cellmath__37_0_I46 (.Y(N177), .A(inst_cellmath__37_0_in0[19]), .B(inst_cellmath__37_0_in0[18]), .S0(N875));
MX2XL inst_cellmath__37_0_I47 (.Y(N178), .A(inst_cellmath__37_0_in0[20]), .B(inst_cellmath__37_0_in0[19]), .S0(N875));
MX2XL inst_cellmath__37_0_I48 (.Y(N179), .A(inst_cellmath__37_0_in0[21]), .B(inst_cellmath__37_0_in0[20]), .S0(N875));
MX2XL inst_cellmath__37_0_I49 (.Y(N180), .A(inst_cellmath__37_0_in0[22]), .B(inst_cellmath__37_0_in0[21]), .S0(N875));
NAND2BXL inst_cellmath__37_0_I50 (.Y(N181), .AN(inst_cellmath__37_0_in0[22]), .B(N875));
INVX1 inst_cellmath__37_0_I561 (.Y(N876), .A(inst_cellmath__37_0_in1[2]));
INVX1 inst_cellmath__37_0_I538 (.Y(N877), .A(N876));
NAND2XL inst_cellmath__37_0_I127 (.Y(N261), .A(N877), .B(N157));
NAND2XL inst_cellmath__37_0_I128 (.Y(N263), .A(N877), .B(N159));
NAND2XL inst_cellmath__37_0_I129 (.Y(N265), .A(N877), .B(N160));
NAND2XL inst_cellmath__37_0_I130 (.Y(N267), .A(N877), .B(N161));
AOI22XL inst_cellmath__37_0_I131 (.Y(N269), .A0(N877), .A1(N162), .B0(N157), .B1(N876));
AOI22XL inst_cellmath__37_0_I132 (.Y(N270), .A0(N877), .A1(N163), .B0(N159), .B1(N876));
AOI22XL inst_cellmath__37_0_I133 (.Y(N271), .A0(N877), .A1(N164), .B0(N160), .B1(N876));
AOI22XL inst_cellmath__37_0_I134 (.Y(N272), .A0(N877), .A1(N165), .B0(N161), .B1(N876));
AOI22XL inst_cellmath__37_0_I135 (.Y(N273), .A0(N877), .A1(N166), .B0(N162), .B1(N876));
AOI22XL inst_cellmath__37_0_I136 (.Y(N274), .A0(N877), .A1(N167), .B0(N163), .B1(N876));
AOI22XL inst_cellmath__37_0_I137 (.Y(N275), .A0(N877), .A1(N168), .B0(N164), .B1(N876));
AOI22XL inst_cellmath__37_0_I138 (.Y(N276), .A0(N877), .A1(N169), .B0(N165), .B1(N876));
AOI22XL inst_cellmath__37_0_I139 (.Y(N277), .A0(N877), .A1(N170), .B0(N166), .B1(N876));
AOI22XL inst_cellmath__37_0_I140 (.Y(N278), .A0(N877), .A1(N171), .B0(N167), .B1(N876));
AOI22XL inst_cellmath__37_0_I141 (.Y(N279), .A0(N877), .A1(N172), .B0(N168), .B1(N876));
AOI22XL inst_cellmath__37_0_I142 (.Y(N280), .A0(N877), .A1(N173), .B0(N169), .B1(N876));
AOI22XL inst_cellmath__37_0_I143 (.Y(N281), .A0(N877), .A1(N174), .B0(N170), .B1(N876));
AOI22XL inst_cellmath__37_0_I144 (.Y(N282), .A0(N877), .A1(N175), .B0(N171), .B1(N876));
AOI22XL inst_cellmath__37_0_I145 (.Y(N283), .A0(N877), .A1(N176), .B0(N172), .B1(N876));
AOI22XL inst_cellmath__37_0_I146 (.Y(N284), .A0(N877), .A1(N177), .B0(N173), .B1(N876));
AOI22XL inst_cellmath__37_0_I147 (.Y(N285), .A0(N877), .A1(N178), .B0(N174), .B1(N876));
AOI22XL inst_cellmath__37_0_I148 (.Y(N286), .A0(N877), .A1(N179), .B0(N175), .B1(N876));
AOI22XL inst_cellmath__37_0_I149 (.Y(N287), .A0(N877), .A1(N180), .B0(N176), .B1(N876));
AOI22XL inst_cellmath__37_0_I150 (.Y(N288), .A0(N877), .A1(N181), .B0(N177), .B1(N876));
AOI22XL inst_cellmath__37_0_I151 (.Y(N289), .A0(N877), .A1(N875), .B0(N178), .B1(N876));
NAND2XL inst_cellmath__37_0_I152 (.Y(N290), .A(N179), .B(N876));
NAND2XL inst_cellmath__37_0_I153 (.Y(N292), .A(N180), .B(N876));
NAND2XL inst_cellmath__37_0_I154 (.Y(N294), .A(N181), .B(N876));
NAND2XL inst_cellmath__37_0_I155 (.Y(N296), .A(N875), .B(N876));
INVX1 inst_cellmath__37_0_I562 (.Y(N879), .A(inst_cellmath__37_0_in1[1]));
INVX1 inst_cellmath__37_0_I541 (.Y(N880), .A(N879));
NOR2XL inst_cellmath__37_0_I229 (.Y(N390), .A(N879), .B(N261));
NOR2XL inst_cellmath__37_0_I230 (.Y(N393), .A(N879), .B(N263));
AOI22XL inst_cellmath__37_0_I231 (.Y(N396), .A0(N879), .A1(N261), .B0(N265), .B1(N880));
AOI22XL inst_cellmath__37_0_I232 (.Y(N397), .A0(N879), .A1(N263), .B0(N267), .B1(N880));
AOI22XL inst_cellmath__37_0_I233 (.Y(N398), .A0(N879), .A1(N265), .B0(N269), .B1(N880));
AOI22XL inst_cellmath__37_0_I234 (.Y(N399), .A0(N879), .A1(N267), .B0(N270), .B1(N880));
AOI22XL inst_cellmath__37_0_I235 (.Y(N400), .A0(N879), .A1(N269), .B0(N271), .B1(N880));
AOI22XL inst_cellmath__37_0_I236 (.Y(N401), .A0(N879), .A1(N270), .B0(N272), .B1(N880));
AOI22XL inst_cellmath__37_0_I237 (.Y(N402), .A0(N879), .A1(N271), .B0(N273), .B1(N880));
AOI22XL inst_cellmath__37_0_I238 (.Y(N403), .A0(N879), .A1(N272), .B0(N274), .B1(N880));
AOI22XL inst_cellmath__37_0_I239 (.Y(N404), .A0(N879), .A1(N273), .B0(N275), .B1(N880));
AOI22XL inst_cellmath__37_0_I240 (.Y(N405), .A0(N879), .A1(N274), .B0(N276), .B1(N880));
AOI22XL inst_cellmath__37_0_I241 (.Y(N406), .A0(N879), .A1(N275), .B0(N277), .B1(N880));
AOI22XL inst_cellmath__37_0_I242 (.Y(N407), .A0(N879), .A1(N276), .B0(N278), .B1(N880));
AOI22XL inst_cellmath__37_0_I243 (.Y(N408), .A0(N879), .A1(N277), .B0(N279), .B1(N880));
AOI22XL inst_cellmath__37_0_I244 (.Y(N409), .A0(N879), .A1(N278), .B0(N280), .B1(N880));
AOI22XL inst_cellmath__37_0_I245 (.Y(N410), .A0(N879), .A1(N279), .B0(N281), .B1(N880));
AOI22XL inst_cellmath__37_0_I246 (.Y(N411), .A0(N879), .A1(N280), .B0(N282), .B1(N880));
AOI22XL inst_cellmath__37_0_I247 (.Y(N412), .A0(N879), .A1(N281), .B0(N283), .B1(N880));
AOI22XL inst_cellmath__37_0_I248 (.Y(N413), .A0(N879), .A1(N282), .B0(N284), .B1(N880));
AOI22XL inst_cellmath__37_0_I249 (.Y(N414), .A0(N879), .A1(N283), .B0(N285), .B1(N880));
AOI22XL inst_cellmath__37_0_I250 (.Y(N415), .A0(N879), .A1(N284), .B0(N286), .B1(N880));
AOI22XL inst_cellmath__37_0_I251 (.Y(N416), .A0(N879), .A1(N285), .B0(N287), .B1(N880));
AOI22XL inst_cellmath__37_0_I252 (.Y(N417), .A0(N879), .A1(N286), .B0(N288), .B1(N880));
AOI22XL inst_cellmath__37_0_I253 (.Y(N418), .A0(N879), .A1(N287), .B0(N289), .B1(N880));
AOI22XL inst_cellmath__37_0_I254 (.Y(N419), .A0(N879), .A1(N288), .B0(N290), .B1(N880));
AOI22XL inst_cellmath__37_0_I255 (.Y(N420), .A0(N879), .A1(N289), .B0(N292), .B1(N880));
AOI22XL inst_cellmath__37_0_I256 (.Y(N421), .A0(N879), .A1(N290), .B0(N294), .B1(N880));
AOI22XL inst_cellmath__37_0_I257 (.Y(N422), .A0(N879), .A1(N292), .B0(N296), .B1(N880));
NOR2XL inst_cellmath__37_0_I258 (.Y(N423), .A(N880), .B(N294));
NOR2XL inst_cellmath__37_0_I259 (.Y(N426), .A(N880), .B(N296));
INVX2 inst_cellmath__37_0_I563 (.Y(N882), .A(inst_cellmath__37_0_in1[4]));
INVX1 inst_cellmath__37_0_I544 (.Y(N883), .A(N882));
NAND2XL inst_cellmath__37_0_I317 (.Y(N536), .A(N883), .B(N390));
NAND2XL inst_cellmath__37_0_I318 (.Y(N538), .A(N883), .B(N393));
NAND2XL inst_cellmath__37_0_I319 (.Y(N540), .A(N883), .B(N396));
NAND2XL inst_cellmath__37_0_I320 (.Y(N542), .A(N883), .B(N397));
NAND2XL inst_cellmath__37_0_I321 (.Y(N544), .A(N883), .B(N398));
NAND2XL inst_cellmath__37_0_I322 (.Y(N546), .A(N883), .B(N399));
NAND2XL inst_cellmath__37_0_I323 (.Y(N548), .A(N883), .B(N400));
NAND2XL inst_cellmath__37_0_I324 (.Y(N550), .A(N883), .B(N401));
NAND2XL inst_cellmath__37_0_I325 (.Y(N552), .A(N883), .B(N402));
NAND2XL inst_cellmath__37_0_I326 (.Y(N554), .A(N883), .B(N403));
NAND2XL inst_cellmath__37_0_I327 (.Y(N556), .A(N883), .B(N404));
NAND2XL inst_cellmath__37_0_I328 (.Y(N558), .A(N883), .B(N405));
NAND2XL inst_cellmath__37_0_I329 (.Y(N560), .A(N883), .B(N406));
NAND2XL inst_cellmath__37_0_I330 (.Y(N562), .A(N883), .B(N407));
NAND2XL inst_cellmath__37_0_I331 (.Y(N564), .A(N883), .B(N408));
NAND2XL inst_cellmath__37_0_I332 (.Y(N566), .A(N883), .B(N409));
AOI22XL inst_cellmath__37_0_I333 (.Y(N568), .A0(N883), .A1(N410), .B0(N390), .B1(N882));
AOI22XL inst_cellmath__37_0_I334 (.Y(N569), .A0(N883), .A1(N411), .B0(N393), .B1(N882));
AOI22XL inst_cellmath__37_0_I335 (.Y(N570), .A0(N883), .A1(N412), .B0(N396), .B1(N882));
AOI22XL inst_cellmath__37_0_I336 (.Y(N571), .A0(N883), .A1(N413), .B0(N397), .B1(N882));
AOI22XL inst_cellmath__37_0_I337 (.Y(N572), .A0(N883), .A1(N414), .B0(N398), .B1(N882));
AOI22XL inst_cellmath__37_0_I338 (.Y(N573), .A0(N883), .A1(N415), .B0(N399), .B1(N882));
AOI22XL inst_cellmath__37_0_I339 (.Y(N574), .A0(N883), .A1(N416), .B0(N400), .B1(N882));
AOI22XL inst_cellmath__37_0_I340 (.Y(N575), .A0(N883), .A1(N417), .B0(N401), .B1(N882));
AOI22XL inst_cellmath__37_0_I341 (.Y(N576), .A0(N883), .A1(N418), .B0(N402), .B1(N882));
AOI22XL inst_cellmath__37_0_I342 (.Y(N577), .A0(N883), .A1(N419), .B0(N403), .B1(N882));
AOI22XL inst_cellmath__37_0_I343 (.Y(N578), .A0(N883), .A1(N420), .B0(N404), .B1(N882));
AOI22XL inst_cellmath__37_0_I344 (.Y(N579), .A0(N883), .A1(N421), .B0(N405), .B1(N882));
AOI22XL inst_cellmath__37_0_I345 (.Y(N580), .A0(N883), .A1(N422), .B0(N406), .B1(N882));
AOI22XL inst_cellmath__37_0_I346 (.Y(N581), .A0(N883), .A1(N423), .B0(N407), .B1(N882));
AOI22XL inst_cellmath__37_0_I347 (.Y(N582), .A0(N883), .A1(N426), .B0(N408), .B1(N882));
NAND2XL inst_cellmath__37_0_I348 (.Y(N583), .A(N409), .B(N882));
NAND2XL inst_cellmath__37_0_I349 (.Y(N585), .A(N410), .B(N882));
NAND2XL inst_cellmath__37_0_I350 (.Y(N587), .A(N411), .B(N882));
NAND2XL inst_cellmath__37_0_I351 (.Y(N589), .A(N412), .B(N882));
NAND2XL inst_cellmath__37_0_I352 (.Y(N591), .A(N413), .B(N882));
NAND2XL inst_cellmath__37_0_I353 (.Y(N593), .A(N414), .B(N882));
NAND2XL inst_cellmath__37_0_I354 (.Y(N595), .A(N415), .B(N882));
NAND2XL inst_cellmath__37_0_I355 (.Y(N597), .A(N416), .B(N882));
NAND2XL inst_cellmath__37_0_I356 (.Y(N599), .A(N417), .B(N882));
NAND2XL inst_cellmath__37_0_I357 (.Y(N601), .A(N418), .B(N882));
NAND2XL inst_cellmath__37_0_I358 (.Y(N603), .A(N419), .B(N882));
NAND2XL inst_cellmath__37_0_I359 (.Y(N605), .A(N420), .B(N882));
NAND2XL inst_cellmath__37_0_I360 (.Y(N607), .A(N421), .B(N882));
NAND2XL inst_cellmath__37_0_I361 (.Y(N609), .A(N422), .B(N882));
NAND2XL inst_cellmath__37_0_I362 (.Y(N611), .A(N423), .B(N882));
NAND2XL inst_cellmath__37_0_I363 (.Y(N613), .A(N426), .B(N882));
INVXL inst_cellmath__37_0_I555 (.Y(N894), .A(inst_cellmath__37_0_in1[3]));
BUFX2 inst_cellmath__37_0_I560 (.Y(N885), .A(N894));
INVX2 inst_cellmath__37_0_I547 (.Y(N886), .A(N885));
NOR2X1 inst_cellmath__37_0_I418 (.Y(inst_cellmath__37_0_out0[0]), .A(N885), .B(N546));
NOR2X1 inst_cellmath__37_0_I419 (.Y(inst_cellmath__37_0_out0[1]), .A(N885), .B(N548));
NOR2X1 inst_cellmath__37_0_I420 (.Y(inst_cellmath__37_0_out0[2]), .A(N885), .B(N550));
AOI22X1 inst_cellmath__37_0_I421 (.Y(inst_cellmath__37_0_out0[3]), .A0(N885), .A1(N536), .B0(N552), .B1(N886));
AOI22X1 inst_cellmath__37_0_I422 (.Y(inst_cellmath__37_0_out0[4]), .A0(N885), .A1(N538), .B0(N554), .B1(N886));
AOI22X1 inst_cellmath__37_0_I423 (.Y(inst_cellmath__37_0_out0[5]), .A0(N885), .A1(N540), .B0(N556), .B1(N886));
AOI22X1 inst_cellmath__37_0_I424 (.Y(inst_cellmath__37_0_out0[6]), .A0(N885), .A1(N542), .B0(N558), .B1(N886));
AOI22X1 inst_cellmath__37_0_I425 (.Y(inst_cellmath__37_0_out0[7]), .A0(N885), .A1(N544), .B0(N560), .B1(N886));
AOI22X1 inst_cellmath__37_0_I426 (.Y(inst_cellmath__37_0_out0[8]), .A0(N885), .A1(N546), .B0(N562), .B1(N886));
AOI22X1 inst_cellmath__37_0_I427 (.Y(inst_cellmath__37_0_out0[9]), .A0(N885), .A1(N548), .B0(N564), .B1(N886));
AOI22X1 inst_cellmath__37_0_I428 (.Y(inst_cellmath__37_0_out0[10]), .A0(N885), .A1(N550), .B0(N566), .B1(N886));
AOI22XL inst_cellmath__37_0_I429 (.Y(inst_cellmath__37_0_out0[11]), .A0(N885), .A1(N552), .B0(N568), .B1(N886));
AOI22XL inst_cellmath__37_0_I430 (.Y(inst_cellmath__37_0_out0[12]), .A0(N885), .A1(N554), .B0(N569), .B1(N886));
AOI22XL inst_cellmath__37_0_I431 (.Y(inst_cellmath__37_0_out0[13]), .A0(N885), .A1(N556), .B0(N570), .B1(N886));
AOI22XL inst_cellmath__37_0_I432 (.Y(inst_cellmath__37_0_out0[14]), .A0(N885), .A1(N558), .B0(N571), .B1(N886));
AOI22XL inst_cellmath__37_0_I433 (.Y(inst_cellmath__37_0_out0[15]), .A0(N885), .A1(N560), .B0(N572), .B1(N886));
AOI22XL inst_cellmath__37_0_I434 (.Y(inst_cellmath__37_0_out0[16]), .A0(N885), .A1(N562), .B0(N573), .B1(N886));
AOI22XL inst_cellmath__37_0_I435 (.Y(inst_cellmath__37_0_out0[17]), .A0(N885), .A1(N564), .B0(N574), .B1(N886));
AOI22XL inst_cellmath__37_0_I436 (.Y(inst_cellmath__37_0_out0[18]), .A0(N885), .A1(N566), .B0(N575), .B1(N886));
AOI22XL inst_cellmath__37_0_I437 (.Y(inst_cellmath__37_0_out0[19]), .A0(N885), .A1(N568), .B0(N576), .B1(N886));
AOI22XL inst_cellmath__37_0_I438 (.Y(inst_cellmath__37_0_out0[20]), .A0(N885), .A1(N569), .B0(N577), .B1(N886));
AOI22XL inst_cellmath__37_0_I439 (.Y(inst_cellmath__37_0_out0[21]), .A0(N885), .A1(N570), .B0(N578), .B1(N886));
AOI22XL inst_cellmath__37_0_I440 (.Y(inst_cellmath__37_0_out0[22]), .A0(N885), .A1(N571), .B0(N579), .B1(N886));
AOI22XL inst_cellmath__37_0_I441 (.Y(inst_cellmath__37_0_out0[23]), .A0(N885), .A1(N572), .B0(N580), .B1(N886));
AOI22XL inst_cellmath__37_0_I442 (.Y(inst_cellmath__37_0_out0[24]), .A0(N885), .A1(N573), .B0(N581), .B1(N886));
AOI22XL inst_cellmath__37_0_I443 (.Y(inst_cellmath__37_0_out0[25]), .A0(N885), .A1(N574), .B0(N582), .B1(N886));
AOI22XL inst_cellmath__37_0_I444 (.Y(inst_cellmath__37_0_out0[26]), .A0(N885), .A1(N575), .B0(N583), .B1(N886));
AOI22XL inst_cellmath__37_0_I445 (.Y(inst_cellmath__37_0_out0[27]), .A0(N885), .A1(N576), .B0(N585), .B1(N886));
AOI22XL inst_cellmath__37_0_I446 (.Y(inst_cellmath__37_0_out0[28]), .A0(N885), .A1(N577), .B0(N587), .B1(N886));
AOI22XL inst_cellmath__37_0_I447 (.Y(inst_cellmath__37_0_out0[29]), .A0(N885), .A1(N578), .B0(N589), .B1(N886));
AOI22XL inst_cellmath__37_0_I448 (.Y(inst_cellmath__37_0_out0[30]), .A0(N885), .A1(N579), .B0(N591), .B1(N886));
AOI22XL inst_cellmath__37_0_I449 (.Y(inst_cellmath__37_0_out0[31]), .A0(N885), .A1(N580), .B0(N593), .B1(N886));
AOI22XL inst_cellmath__37_0_I450 (.Y(inst_cellmath__37_0_out0[32]), .A0(N885), .A1(N581), .B0(N595), .B1(N886));
AOI22XL inst_cellmath__37_0_I451 (.Y(inst_cellmath__37_0_out0[33]), .A0(N885), .A1(N582), .B0(N597), .B1(N886));
AOI22X4 inst_cellmath__37_0_I452 (.Y(inst_cellmath__37_0_out0[34]), .A0(N885), .A1(N583), .B0(N599), .B1(N886));
AOI22X4 inst_cellmath__37_0_I453 (.Y(inst_cellmath__37_0_out0[35]), .A0(N885), .A1(N585), .B0(N601), .B1(N886));
AOI22X4 inst_cellmath__37_0_I454 (.Y(inst_cellmath__37_0_out0[36]), .A0(N885), .A1(N587), .B0(N603), .B1(N886));
AOI22X4 inst_cellmath__37_0_I455 (.Y(inst_cellmath__37_0_out0[37]), .A0(N885), .A1(N589), .B0(N605), .B1(N886));
AOI22X4 inst_cellmath__37_0_I456 (.Y(inst_cellmath__37_0_out0[38]), .A0(N885), .A1(N591), .B0(N607), .B1(N886));
AOI22X4 inst_cellmath__37_0_I457 (.Y(inst_cellmath__37_0_out0[39]), .A0(N885), .A1(N593), .B0(N609), .B1(N886));
AOI22X4 inst_cellmath__37_0_I458 (.Y(inst_cellmath__37_0_out0[40]), .A0(N885), .A1(N595), .B0(N611), .B1(N886));
AOI22X4 inst_cellmath__37_0_I459 (.Y(inst_cellmath__37_0_out0[41]), .A0(N885), .A1(N597), .B0(N613), .B1(N886));
NOR2X1 inst_cellmath__37_0_I460 (.Y(inst_cellmath__37_0_out0[42]), .A(N886), .B(N599));
NOR2X1 inst_cellmath__37_0_I461 (.Y(inst_cellmath__37_0_out0[43]), .A(N886), .B(N601));
NOR2X1 inst_cellmath__37_0_I462 (.Y(inst_cellmath__37_0_out0[44]), .A(N886), .B(N603));
NOR2X1 inst_cellmath__37_0_I463 (.Y(inst_cellmath__37_0_out0[45]), .A(N886), .B(N605));
NOR2X1 inst_cellmath__37_0_I464 (.Y(inst_cellmath__37_0_out0[46]), .A(N886), .B(N607));
NOR2X1 inst_cellmath__37_0_I465 (.Y(inst_cellmath__37_0_out0[47]), .A(N886), .B(N609));
NOR2X1 inst_cellmath__37_0_I466 (.Y(inst_cellmath__37_0_out0[48]), .A(N886), .B(N611));
NOR2X1 inst_cellmath__37_0_I467 (.Y(inst_cellmath__37_0_out0[49]), .A(N886), .B(N613));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw1925506066_bdw (
	inst_cellmath__33_49_24_out0,
	inst_cellmath__33_49_24_in0,
	inst_cellmath__33_49_24_in1
	); /* architecture "gate_level" */ 
output [49:24] inst_cellmath__33_49_24_out0;
input [49:24] inst_cellmath__33_49_24_in0;
input [0:0] inst_cellmath__33_49_24_in1;
wire N241;
INVXL inst_cellmath__33_49_24_I54 (.Y(N241), .A(inst_cellmath__33_49_24_in1[0]));
AND2XL inst_cellmath__33_49_24_I27 (.Y(inst_cellmath__33_49_24_out0[24]), .A(N241), .B(inst_cellmath__33_49_24_in0[24]));
AND2XL inst_cellmath__33_49_24_I28 (.Y(inst_cellmath__33_49_24_out0[25]), .A(N241), .B(inst_cellmath__33_49_24_in0[25]));
AND2XL inst_cellmath__33_49_24_I29 (.Y(inst_cellmath__33_49_24_out0[26]), .A(N241), .B(inst_cellmath__33_49_24_in0[26]));
AND2XL inst_cellmath__33_49_24_I30 (.Y(inst_cellmath__33_49_24_out0[27]), .A(N241), .B(inst_cellmath__33_49_24_in0[27]));
AND2XL inst_cellmath__33_49_24_I31 (.Y(inst_cellmath__33_49_24_out0[28]), .A(N241), .B(inst_cellmath__33_49_24_in0[28]));
AND2XL inst_cellmath__33_49_24_I32 (.Y(inst_cellmath__33_49_24_out0[29]), .A(N241), .B(inst_cellmath__33_49_24_in0[29]));
AND2XL inst_cellmath__33_49_24_I33 (.Y(inst_cellmath__33_49_24_out0[30]), .A(N241), .B(inst_cellmath__33_49_24_in0[30]));
AND2XL inst_cellmath__33_49_24_I34 (.Y(inst_cellmath__33_49_24_out0[31]), .A(N241), .B(inst_cellmath__33_49_24_in0[31]));
AND2XL inst_cellmath__33_49_24_I35 (.Y(inst_cellmath__33_49_24_out0[32]), .A(N241), .B(inst_cellmath__33_49_24_in0[32]));
AND2XL inst_cellmath__33_49_24_I36 (.Y(inst_cellmath__33_49_24_out0[33]), .A(N241), .B(inst_cellmath__33_49_24_in0[33]));
AND2XL inst_cellmath__33_49_24_I37 (.Y(inst_cellmath__33_49_24_out0[34]), .A(N241), .B(inst_cellmath__33_49_24_in0[34]));
AND2XL inst_cellmath__33_49_24_I38 (.Y(inst_cellmath__33_49_24_out0[35]), .A(N241), .B(inst_cellmath__33_49_24_in0[35]));
AND2XL inst_cellmath__33_49_24_I39 (.Y(inst_cellmath__33_49_24_out0[36]), .A(N241), .B(inst_cellmath__33_49_24_in0[36]));
AND2XL inst_cellmath__33_49_24_I40 (.Y(inst_cellmath__33_49_24_out0[37]), .A(N241), .B(inst_cellmath__33_49_24_in0[37]));
AND2XL inst_cellmath__33_49_24_I41 (.Y(inst_cellmath__33_49_24_out0[38]), .A(N241), .B(inst_cellmath__33_49_24_in0[38]));
AND2XL inst_cellmath__33_49_24_I42 (.Y(inst_cellmath__33_49_24_out0[39]), .A(N241), .B(inst_cellmath__33_49_24_in0[39]));
AND2XL inst_cellmath__33_49_24_I43 (.Y(inst_cellmath__33_49_24_out0[40]), .A(N241), .B(inst_cellmath__33_49_24_in0[40]));
AND2XL inst_cellmath__33_49_24_I44 (.Y(inst_cellmath__33_49_24_out0[41]), .A(N241), .B(inst_cellmath__33_49_24_in0[41]));
AND2XL inst_cellmath__33_49_24_I45 (.Y(inst_cellmath__33_49_24_out0[42]), .A(N241), .B(inst_cellmath__33_49_24_in0[42]));
AND2XL inst_cellmath__33_49_24_I46 (.Y(inst_cellmath__33_49_24_out0[43]), .A(N241), .B(inst_cellmath__33_49_24_in0[43]));
AND2XL inst_cellmath__33_49_24_I47 (.Y(inst_cellmath__33_49_24_out0[44]), .A(N241), .B(inst_cellmath__33_49_24_in0[44]));
AND2XL inst_cellmath__33_49_24_I48 (.Y(inst_cellmath__33_49_24_out0[45]), .A(N241), .B(inst_cellmath__33_49_24_in0[45]));
AND2XL inst_cellmath__33_49_24_I49 (.Y(inst_cellmath__33_49_24_out0[46]), .A(N241), .B(inst_cellmath__33_49_24_in0[46]));
AND2XL inst_cellmath__33_49_24_I50 (.Y(inst_cellmath__33_49_24_out0[47]), .A(N241), .B(inst_cellmath__33_49_24_in0[47]));
AND2XL inst_cellmath__33_49_24_I51 (.Y(inst_cellmath__33_49_24_out0[48]), .A(N241), .B(inst_cellmath__33_49_24_in0[48]));
AND2XL inst_cellmath__33_49_24_I52 (.Y(inst_cellmath__33_49_24_out0[49]), .A(N241), .B(inst_cellmath__33_49_24_in0[49]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw1925506066_bdw (
	inst_cellmath__42__22__out0,
	inst_cellmath__42__22__in0,
	inst_cellmath__42__22__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__42__22__out0;
input [23:0] inst_cellmath__42__22__in0;
input  inst_cellmath__42__22__in1;
wire N28,N29,N30,N31,N32,N33,N34 
	,N36,N39,N42,N44,N47,N48,N51,N52 
	,N53,N54,N55;
NOR2XL inst_cellmath__42__22__I0 (.Y(N28), .A(inst_cellmath__42__22__in1), .B(inst_cellmath__42__22__in0[0]));
NOR2XL inst_cellmath__42__22__I1 (.Y(N29), .A(inst_cellmath__42__22__in0[1]), .B(inst_cellmath__42__22__in0[2]));
NAND2XL inst_cellmath__42__22__I2 (.Y(N30), .A(N28), .B(N29));
NOR2XL inst_cellmath__42__22__I3 (.Y(N31), .A(inst_cellmath__42__22__in0[3]), .B(inst_cellmath__42__22__in0[7]));
NOR2XL inst_cellmath__42__22__I4 (.Y(N32), .A(inst_cellmath__42__22__in0[5]), .B(inst_cellmath__42__22__in0[9]));
NOR2XL inst_cellmath__42__22__I5 (.Y(N33), .A(inst_cellmath__42__22__in0[8]), .B(inst_cellmath__42__22__in0[6]));
NOR2XL inst_cellmath__42__22__I6 (.Y(N34), .A(inst_cellmath__42__22__in0[4]), .B(inst_cellmath__42__22__in0[10]));
NOR2XL inst_cellmath__42__22__I8 (.Y(N36), .A(inst_cellmath__42__22__in0[12]), .B(inst_cellmath__42__22__in0[17]));
NOR2XL inst_cellmath__42__22__I11 (.Y(N39), .A(N30), .B(inst_cellmath__42__22__in0[19]));
NAND2XL inst_cellmath__42__22__I14 (.Y(N42), .A(N31), .B(N32));
NAND2XL inst_cellmath__42__22__I15 (.Y(N48), .A(N33), .B(N34));
NAND2XL inst_cellmath__42__22__I16 (.Y(N44), .A(N36), .B(N39));
NOR4X1 inst_cellmath__42__22__I36 (.Y(N52), .A(inst_cellmath__42__22__in0[15]), .B(inst_cellmath__42__22__in0[13]), .C(inst_cellmath__42__22__in0[11]), .D(inst_cellmath__42__22__in0[16]));
NOR3XL inst_cellmath__42__22__I31 (.Y(N47), .A(inst_cellmath__42__22__in0[18]), .B(inst_cellmath__42__22__in0[14]), .C(N42));
NOR3XL inst_cellmath__42__22__I32 (.Y(N54), .A(inst_cellmath__42__22__in0[23]), .B(inst_cellmath__42__22__in0[22]), .C(N48));
NOR3XL inst_cellmath__42__22__I33 (.Y(N51), .A(inst_cellmath__42__22__in0[21]), .B(inst_cellmath__42__22__in0[20]), .C(N44));
NAND2XL inst_cellmath__42__22__I25 (.Y(N53), .A(N52), .B(N47));
NAND2XL inst_cellmath__42__22__I27 (.Y(N55), .A(N54), .B(N51));
OR2XL inst_cellmath__42__22__I28 (.Y(inst_cellmath__42__22__out0[0]), .A(N53), .B(N55));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw1925506066_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__42_0_out0;
input [0:0] inst_cellmath__42_0_in0;
input  inst_cellmath__42_0_in1;
NOR2BX1 inst_cellmath__42_0_I3 (.Y(inst_cellmath__42_0_out0), .AN(inst_cellmath__42_0_in0[0]), .B(inst_cellmath__42_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw1925506066_bdw (
	inst_cellmath__44_0_out0,
	inst_cellmath__44_0_in0,
	inst_cellmath__44_0_in1,
	inst_cellmath__44_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__44_0_out0;
input  inst_cellmath__44_0_in0;
input [24:24] inst_cellmath__44_0_in1;
input  inst_cellmath__44_0_in2;
wire N18;
INVXL inst_cellmath__44_0_I5 (.Y(N18), .A(inst_cellmath__44_0_in2));
NOR3XL inst_cellmath__44_0_I7 (.Y(inst_cellmath__44_0_out0), .A(N18), .B(inst_cellmath__44_0_in1[24]), .C(inst_cellmath__44_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__40_bdw1925506066_bdw (
	inst_cellmath__40_out0,
	inst_cellmath__40_in0,
	inst_cellmath__40_in1,
	inst_cellmath__40_in2
	); /* architecture "gate_level" */ 
output [23:0] inst_cellmath__40_out0;
input  inst_cellmath__40_in0;
input [22:0] inst_cellmath__40_in1,
	inst_cellmath__40_in2;
wire N315,N318;
INVXL buf1_A_I80 (.Y(N318), .A(inst_cellmath__40_in0));
INVXL buf1_A_I81 (.Y(N315), .A(N318));
MX2XL inst_cellmath__40_I49 (.Y(inst_cellmath__40_out0[1]), .A(inst_cellmath__40_in2[0]), .B(inst_cellmath__40_in1[0]), .S0(N315));
MX2XL inst_cellmath__40_I50 (.Y(inst_cellmath__40_out0[2]), .A(inst_cellmath__40_in2[1]), .B(inst_cellmath__40_in1[1]), .S0(N315));
MX2XL inst_cellmath__40_I51 (.Y(inst_cellmath__40_out0[3]), .A(inst_cellmath__40_in2[2]), .B(inst_cellmath__40_in1[2]), .S0(N315));
MX2XL inst_cellmath__40_I52 (.Y(inst_cellmath__40_out0[4]), .A(inst_cellmath__40_in2[3]), .B(inst_cellmath__40_in1[3]), .S0(N315));
MX2XL inst_cellmath__40_I53 (.Y(inst_cellmath__40_out0[5]), .A(inst_cellmath__40_in2[4]), .B(inst_cellmath__40_in1[4]), .S0(N315));
MX2XL inst_cellmath__40_I54 (.Y(inst_cellmath__40_out0[6]), .A(inst_cellmath__40_in2[5]), .B(inst_cellmath__40_in1[5]), .S0(N315));
MX2XL inst_cellmath__40_I55 (.Y(inst_cellmath__40_out0[7]), .A(inst_cellmath__40_in2[6]), .B(inst_cellmath__40_in1[6]), .S0(N315));
MX2XL inst_cellmath__40_I56 (.Y(inst_cellmath__40_out0[8]), .A(inst_cellmath__40_in2[7]), .B(inst_cellmath__40_in1[7]), .S0(N315));
MX2XL inst_cellmath__40_I57 (.Y(inst_cellmath__40_out0[9]), .A(inst_cellmath__40_in2[8]), .B(inst_cellmath__40_in1[8]), .S0(N315));
MX2XL inst_cellmath__40_I58 (.Y(inst_cellmath__40_out0[10]), .A(inst_cellmath__40_in2[9]), .B(inst_cellmath__40_in1[9]), .S0(N315));
MX2XL inst_cellmath__40_I59 (.Y(inst_cellmath__40_out0[11]), .A(inst_cellmath__40_in2[10]), .B(inst_cellmath__40_in1[10]), .S0(N315));
MX2XL inst_cellmath__40_I60 (.Y(inst_cellmath__40_out0[12]), .A(inst_cellmath__40_in2[11]), .B(inst_cellmath__40_in1[11]), .S0(N315));
MX2XL inst_cellmath__40_I61 (.Y(inst_cellmath__40_out0[13]), .A(inst_cellmath__40_in2[12]), .B(inst_cellmath__40_in1[12]), .S0(N315));
MX2XL inst_cellmath__40_I62 (.Y(inst_cellmath__40_out0[14]), .A(inst_cellmath__40_in2[13]), .B(inst_cellmath__40_in1[13]), .S0(N315));
MX2XL inst_cellmath__40_I63 (.Y(inst_cellmath__40_out0[15]), .A(inst_cellmath__40_in2[14]), .B(inst_cellmath__40_in1[14]), .S0(N315));
MX2XL inst_cellmath__40_I64 (.Y(inst_cellmath__40_out0[16]), .A(inst_cellmath__40_in2[15]), .B(inst_cellmath__40_in1[15]), .S0(N315));
MX2XL inst_cellmath__40_I65 (.Y(inst_cellmath__40_out0[17]), .A(inst_cellmath__40_in2[16]), .B(inst_cellmath__40_in1[16]), .S0(N315));
MX2XL inst_cellmath__40_I66 (.Y(inst_cellmath__40_out0[18]), .A(inst_cellmath__40_in2[17]), .B(inst_cellmath__40_in1[17]), .S0(N315));
MX2XL inst_cellmath__40_I67 (.Y(inst_cellmath__40_out0[19]), .A(inst_cellmath__40_in2[18]), .B(inst_cellmath__40_in1[18]), .S0(N315));
MX2XL inst_cellmath__40_I68 (.Y(inst_cellmath__40_out0[20]), .A(inst_cellmath__40_in2[19]), .B(inst_cellmath__40_in1[19]), .S0(N315));
MX2XL inst_cellmath__40_I69 (.Y(inst_cellmath__40_out0[21]), .A(inst_cellmath__40_in2[20]), .B(inst_cellmath__40_in1[20]), .S0(N315));
MX2XL inst_cellmath__40_I70 (.Y(inst_cellmath__40_out0[22]), .A(inst_cellmath__40_in2[21]), .B(inst_cellmath__40_in1[21]), .S0(N315));
MX2XL inst_cellmath__40_I71 (.Y(inst_cellmath__40_out0[23]), .A(inst_cellmath__40_in2[22]), .B(inst_cellmath__40_in1[22]), .S0(N315));
assign inst_cellmath__40_out0[0] = 1'B0;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw1925506066_bdw (
	inst_cellmath__39__19__2mx_out0,
	inst_cellmath__39__19__2mx_in0,
	inst_cellmath__39__19__2mx_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39__19__2mx_out0;
input [49:25] inst_cellmath__39__19__2mx_in0;
input  inst_cellmath__39__19__2mx_in1;
wire N389;
INVXL inst_cellmath__39__19__2mx_I80 (.Y(N389), .A(inst_cellmath__39__19__2mx_in1));
XNOR2X1 inst_cellmath__39__19__2mx_I29 (.Y(inst_cellmath__39__19__2mx_out0[0]), .A(inst_cellmath__39__19__2mx_in0[25]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I30 (.Y(inst_cellmath__39__19__2mx_out0[1]), .A(inst_cellmath__39__19__2mx_in0[26]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I31 (.Y(inst_cellmath__39__19__2mx_out0[2]), .A(inst_cellmath__39__19__2mx_in0[27]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I32 (.Y(inst_cellmath__39__19__2mx_out0[3]), .A(inst_cellmath__39__19__2mx_in0[28]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I33 (.Y(inst_cellmath__39__19__2mx_out0[4]), .A(inst_cellmath__39__19__2mx_in0[29]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I34 (.Y(inst_cellmath__39__19__2mx_out0[5]), .A(inst_cellmath__39__19__2mx_in0[30]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I35 (.Y(inst_cellmath__39__19__2mx_out0[6]), .A(inst_cellmath__39__19__2mx_in0[31]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I36 (.Y(inst_cellmath__39__19__2mx_out0[7]), .A(inst_cellmath__39__19__2mx_in0[32]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I37 (.Y(inst_cellmath__39__19__2mx_out0[8]), .A(inst_cellmath__39__19__2mx_in0[33]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I38 (.Y(inst_cellmath__39__19__2mx_out0[9]), .A(inst_cellmath__39__19__2mx_in0[34]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I39 (.Y(inst_cellmath__39__19__2mx_out0[10]), .A(inst_cellmath__39__19__2mx_in0[35]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I40 (.Y(inst_cellmath__39__19__2mx_out0[11]), .A(inst_cellmath__39__19__2mx_in0[36]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I41 (.Y(inst_cellmath__39__19__2mx_out0[12]), .A(inst_cellmath__39__19__2mx_in0[37]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I42 (.Y(inst_cellmath__39__19__2mx_out0[13]), .A(inst_cellmath__39__19__2mx_in0[38]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I43 (.Y(inst_cellmath__39__19__2mx_out0[14]), .A(inst_cellmath__39__19__2mx_in0[39]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I44 (.Y(inst_cellmath__39__19__2mx_out0[15]), .A(inst_cellmath__39__19__2mx_in0[40]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I45 (.Y(inst_cellmath__39__19__2mx_out0[16]), .A(inst_cellmath__39__19__2mx_in0[41]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I46 (.Y(inst_cellmath__39__19__2mx_out0[17]), .A(inst_cellmath__39__19__2mx_in0[42]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I47 (.Y(inst_cellmath__39__19__2mx_out0[18]), .A(inst_cellmath__39__19__2mx_in0[43]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I48 (.Y(inst_cellmath__39__19__2mx_out0[19]), .A(inst_cellmath__39__19__2mx_in0[44]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I49 (.Y(inst_cellmath__39__19__2mx_out0[20]), .A(inst_cellmath__39__19__2mx_in0[45]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I50 (.Y(inst_cellmath__39__19__2mx_out0[21]), .A(inst_cellmath__39__19__2mx_in0[46]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I51 (.Y(inst_cellmath__39__19__2mx_out0[22]), .A(inst_cellmath__39__19__2mx_in0[47]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I52 (.Y(inst_cellmath__39__19__2mx_out0[23]), .A(inst_cellmath__39__19__2mx_in0[48]), .B(N389));
XNOR2X1 inst_cellmath__39__19__2mx_I53 (.Y(inst_cellmath__39__19__2mx_out0[24]), .A(inst_cellmath__39__19__2mx_in0[49]), .B(N389));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw1925506066_bdw (
	inst_cellmath__45_0_out0,
	inst_cellmath__45_0_in0,
	inst_cellmath__45_0_in1,
	inst_cellmath__45_0_in2,
	inst_cellmath__45_0_in3
	); /* architecture "gate_level" */ 
output [25:0] inst_cellmath__45_0_out0;
input  inst_cellmath__45_0_in0;
input [23:1] inst_cellmath__45_0_in1;
input [24:0] inst_cellmath__45_0_in2;
input  inst_cellmath__45_0_in3;
wire N300,N302,N304,N306,N308,N310,N312 
	,N314,N316,N318,N320,N322,N324,N326,N328 
	,N330,N332,N333,N334,N336,N337,N338,N340 
	,N341,N342,N344,N345,N346,N351,N359,N367 
	,N379,N391,N407,N423,N443,N463,N487,N511 
	,N539,N567,N599,N631,N667,N703,N743,N783 
	,N827,N871,N919,N967,N1893;
NAND2XL inst_cellmath__45_0_I65 (.Y(N300), .A(inst_cellmath__45_0_in2[0]), .B(inst_cellmath__45_0_in0));
XOR2XL inst_cellmath__45_0_I67 (.Y(N302), .A(inst_cellmath__45_0_in1[1]), .B(inst_cellmath__45_0_in2[1]));
XNOR2X1 inst_cellmath__45_0_I69 (.Y(N304), .A(inst_cellmath__45_0_in1[2]), .B(inst_cellmath__45_0_in2[2]));
XOR2XL inst_cellmath__45_0_I71 (.Y(N306), .A(inst_cellmath__45_0_in1[3]), .B(inst_cellmath__45_0_in2[3]));
XNOR2X1 inst_cellmath__45_0_I73 (.Y(N308), .A(inst_cellmath__45_0_in1[4]), .B(inst_cellmath__45_0_in2[4]));
XOR2XL inst_cellmath__45_0_I75 (.Y(N310), .A(inst_cellmath__45_0_in1[5]), .B(inst_cellmath__45_0_in2[5]));
XNOR2X1 inst_cellmath__45_0_I77 (.Y(N312), .A(inst_cellmath__45_0_in1[6]), .B(inst_cellmath__45_0_in2[6]));
XOR2XL inst_cellmath__45_0_I79 (.Y(N314), .A(inst_cellmath__45_0_in1[7]), .B(inst_cellmath__45_0_in2[7]));
XNOR2X1 inst_cellmath__45_0_I81 (.Y(N316), .A(inst_cellmath__45_0_in1[8]), .B(inst_cellmath__45_0_in2[8]));
XOR2XL inst_cellmath__45_0_I83 (.Y(N318), .A(inst_cellmath__45_0_in1[9]), .B(inst_cellmath__45_0_in2[9]));
XNOR2X1 inst_cellmath__45_0_I85 (.Y(N320), .A(inst_cellmath__45_0_in1[10]), .B(inst_cellmath__45_0_in2[10]));
XOR2XL inst_cellmath__45_0_I87 (.Y(N322), .A(inst_cellmath__45_0_in1[11]), .B(inst_cellmath__45_0_in2[11]));
XNOR2X1 inst_cellmath__45_0_I89 (.Y(N324), .A(inst_cellmath__45_0_in1[12]), .B(inst_cellmath__45_0_in2[12]));
XOR2XL inst_cellmath__45_0_I91 (.Y(N326), .A(inst_cellmath__45_0_in1[13]), .B(inst_cellmath__45_0_in2[13]));
XNOR2X1 inst_cellmath__45_0_I93 (.Y(N328), .A(inst_cellmath__45_0_in1[14]), .B(inst_cellmath__45_0_in2[14]));
XOR2XL inst_cellmath__45_0_I95 (.Y(N330), .A(inst_cellmath__45_0_in1[15]), .B(inst_cellmath__45_0_in2[15]));
XNOR2X1 inst_cellmath__45_0_I97 (.Y(N332), .A(inst_cellmath__45_0_in1[16]), .B(inst_cellmath__45_0_in2[16]));
NOR2XL inst_cellmath__45_0_I98 (.Y(N333), .A(inst_cellmath__45_0_in1[17]), .B(inst_cellmath__45_0_in2[17]));
XOR2XL inst_cellmath__45_0_I99 (.Y(N334), .A(inst_cellmath__45_0_in1[17]), .B(inst_cellmath__45_0_in2[17]));
XNOR2X1 inst_cellmath__45_0_I101 (.Y(N336), .A(inst_cellmath__45_0_in1[18]), .B(inst_cellmath__45_0_in2[18]));
NOR2XL inst_cellmath__45_0_I102 (.Y(N337), .A(inst_cellmath__45_0_in1[19]), .B(inst_cellmath__45_0_in2[19]));
XOR2XL inst_cellmath__45_0_I103 (.Y(N338), .A(inst_cellmath__45_0_in1[19]), .B(inst_cellmath__45_0_in2[19]));
XNOR2X1 inst_cellmath__45_0_I105 (.Y(N340), .A(inst_cellmath__45_0_in1[20]), .B(inst_cellmath__45_0_in2[20]));
NOR2XL inst_cellmath__45_0_I106 (.Y(N341), .A(inst_cellmath__45_0_in1[21]), .B(inst_cellmath__45_0_in2[21]));
XOR2XL inst_cellmath__45_0_I107 (.Y(N342), .A(inst_cellmath__45_0_in1[21]), .B(inst_cellmath__45_0_in2[21]));
XNOR2X1 inst_cellmath__45_0_I109 (.Y(N344), .A(inst_cellmath__45_0_in1[22]), .B(inst_cellmath__45_0_in2[22]));
NOR2XL inst_cellmath__45_0_I110 (.Y(N345), .A(inst_cellmath__45_0_in1[23]), .B(inst_cellmath__45_0_in2[23]));
XOR2XL inst_cellmath__45_0_I111 (.Y(N346), .A(inst_cellmath__45_0_in1[23]), .B(inst_cellmath__45_0_in2[23]));
AOI2BB2X1 inst_cellmath__45_0_I1282 (.Y(N351), .A0N(inst_cellmath__45_0_in1[1]), .A1N(inst_cellmath__45_0_in2[1]), .B0(N300), .B1(N302));
OAI22XL inst_cellmath__45_0_I1284 (.Y(N359), .A0(N304), .A1(N351), .B0(inst_cellmath__45_0_in1[2]), .B1(inst_cellmath__45_0_in2[2]));
AOI2BB2X1 inst_cellmath__45_0_I1285 (.Y(N367), .A0N(inst_cellmath__45_0_in1[3]), .A1N(inst_cellmath__45_0_in2[3]), .B0(N359), .B1(N306));
OAI22XL inst_cellmath__45_0_I1287 (.Y(N379), .A0(N308), .A1(N367), .B0(inst_cellmath__45_0_in1[4]), .B1(inst_cellmath__45_0_in2[4]));
AOI2BB2X1 inst_cellmath__45_0_I1288 (.Y(N391), .A0N(inst_cellmath__45_0_in1[5]), .A1N(inst_cellmath__45_0_in2[5]), .B0(N379), .B1(N310));
OAI22XL inst_cellmath__45_0_I1290 (.Y(N407), .A0(N312), .A1(N391), .B0(inst_cellmath__45_0_in1[6]), .B1(inst_cellmath__45_0_in2[6]));
AOI2BB2X1 inst_cellmath__45_0_I1291 (.Y(N423), .A0N(inst_cellmath__45_0_in1[7]), .A1N(inst_cellmath__45_0_in2[7]), .B0(N407), .B1(N314));
OAI22XL inst_cellmath__45_0_I1293 (.Y(N443), .A0(N316), .A1(N423), .B0(inst_cellmath__45_0_in1[8]), .B1(inst_cellmath__45_0_in2[8]));
AOI2BB2X1 inst_cellmath__45_0_I1294 (.Y(N463), .A0N(inst_cellmath__45_0_in1[9]), .A1N(inst_cellmath__45_0_in2[9]), .B0(N443), .B1(N318));
OAI22XL inst_cellmath__45_0_I1296 (.Y(N487), .A0(N320), .A1(N463), .B0(inst_cellmath__45_0_in1[10]), .B1(inst_cellmath__45_0_in2[10]));
AOI2BB2X1 inst_cellmath__45_0_I1297 (.Y(N511), .A0N(inst_cellmath__45_0_in1[11]), .A1N(inst_cellmath__45_0_in2[11]), .B0(N487), .B1(N322));
OAI22XL inst_cellmath__45_0_I1299 (.Y(N539), .A0(N324), .A1(N511), .B0(inst_cellmath__45_0_in1[12]), .B1(inst_cellmath__45_0_in2[12]));
AOI2BB2X1 inst_cellmath__45_0_I1300 (.Y(N567), .A0N(inst_cellmath__45_0_in1[13]), .A1N(inst_cellmath__45_0_in2[13]), .B0(N539), .B1(N326));
OAI22XL inst_cellmath__45_0_I1302 (.Y(N599), .A0(N328), .A1(N567), .B0(inst_cellmath__45_0_in1[14]), .B1(inst_cellmath__45_0_in2[14]));
AOI2BB2X1 inst_cellmath__45_0_I1303 (.Y(N631), .A0N(inst_cellmath__45_0_in1[15]), .A1N(inst_cellmath__45_0_in2[15]), .B0(N599), .B1(N330));
OAI22XL inst_cellmath__45_0_I1305 (.Y(N667), .A0(N332), .A1(N631), .B0(inst_cellmath__45_0_in1[16]), .B1(inst_cellmath__45_0_in2[16]));
AOI21XL inst_cellmath__45_0_I468 (.Y(N703), .A0(N334), .A1(N667), .B0(N333));
OAI22XL inst_cellmath__45_0_I1307 (.Y(N743), .A0(N336), .A1(N703), .B0(inst_cellmath__45_0_in1[18]), .B1(inst_cellmath__45_0_in2[18]));
AOI21XL inst_cellmath__45_0_I548 (.Y(N783), .A0(N338), .A1(N743), .B0(N337));
OAI22XL inst_cellmath__45_0_I1309 (.Y(N827), .A0(N340), .A1(N783), .B0(inst_cellmath__45_0_in1[20]), .B1(inst_cellmath__45_0_in2[20]));
AOI21XL inst_cellmath__45_0_I636 (.Y(N871), .A0(N342), .A1(N827), .B0(N341));
OAI22XL inst_cellmath__45_0_I1311 (.Y(N919), .A0(N344), .A1(N871), .B0(inst_cellmath__45_0_in1[22]), .B1(inst_cellmath__45_0_in2[22]));
AOI21XL inst_cellmath__45_0_I732 (.Y(N967), .A0(N346), .A1(N919), .B0(N345));
XOR2XL inst_cellmath__45_0_I867 (.Y(inst_cellmath__45_0_out0[0]), .A(inst_cellmath__45_0_in2[0]), .B(inst_cellmath__45_0_in0));
XNOR2X1 inst_cellmath__45_0_I868 (.Y(inst_cellmath__45_0_out0[1]), .A(N300), .B(N302));
XNOR2X1 inst_cellmath__45_0_I869 (.Y(inst_cellmath__45_0_out0[2]), .A(N351), .B(N304));
XNOR2X1 inst_cellmath__45_0_I870 (.Y(inst_cellmath__45_0_out0[3]), .A(N359), .B(N306));
XNOR2X1 inst_cellmath__45_0_I871 (.Y(inst_cellmath__45_0_out0[4]), .A(N367), .B(N308));
XNOR2X1 inst_cellmath__45_0_I872 (.Y(inst_cellmath__45_0_out0[5]), .A(N379), .B(N310));
XNOR2X1 inst_cellmath__45_0_I873 (.Y(inst_cellmath__45_0_out0[6]), .A(N391), .B(N312));
XNOR2X1 inst_cellmath__45_0_I874 (.Y(inst_cellmath__45_0_out0[7]), .A(N407), .B(N314));
XNOR2X1 inst_cellmath__45_0_I875 (.Y(inst_cellmath__45_0_out0[8]), .A(N423), .B(N316));
XNOR2X1 inst_cellmath__45_0_I876 (.Y(inst_cellmath__45_0_out0[9]), .A(N443), .B(N318));
XNOR2X1 inst_cellmath__45_0_I877 (.Y(inst_cellmath__45_0_out0[10]), .A(N463), .B(N320));
XNOR2X1 inst_cellmath__45_0_I878 (.Y(inst_cellmath__45_0_out0[11]), .A(N487), .B(N322));
XNOR2X1 inst_cellmath__45_0_I879 (.Y(inst_cellmath__45_0_out0[12]), .A(N511), .B(N324));
XNOR2X1 inst_cellmath__45_0_I880 (.Y(inst_cellmath__45_0_out0[13]), .A(N539), .B(N326));
XNOR2X1 inst_cellmath__45_0_I881 (.Y(inst_cellmath__45_0_out0[14]), .A(N567), .B(N328));
XNOR2X1 inst_cellmath__45_0_I882 (.Y(inst_cellmath__45_0_out0[15]), .A(N599), .B(N330));
XNOR2X1 inst_cellmath__45_0_I883 (.Y(inst_cellmath__45_0_out0[16]), .A(N631), .B(N332));
XNOR2X1 inst_cellmath__45_0_I884 (.Y(inst_cellmath__45_0_out0[17]), .A(N667), .B(N334));
XNOR2X1 inst_cellmath__45_0_I885 (.Y(inst_cellmath__45_0_out0[18]), .A(N703), .B(N336));
XNOR2X1 inst_cellmath__45_0_I886 (.Y(inst_cellmath__45_0_out0[19]), .A(N743), .B(N338));
XNOR2X1 inst_cellmath__45_0_I887 (.Y(inst_cellmath__45_0_out0[20]), .A(N783), .B(N340));
XNOR2X1 inst_cellmath__45_0_I888 (.Y(inst_cellmath__45_0_out0[21]), .A(N827), .B(N342));
XNOR2X1 inst_cellmath__45_0_I889 (.Y(inst_cellmath__45_0_out0[22]), .A(N871), .B(N344));
XNOR2X1 inst_cellmath__45_0_I890 (.Y(inst_cellmath__45_0_out0[23]), .A(N919), .B(N346));
XNOR2X1 inst_cellmath__45_0_I891 (.Y(inst_cellmath__45_0_out0[24]), .A(N967), .B(inst_cellmath__45_0_in2[24]));
NOR2XL node_cs_const1_cs_A_I1472 (.Y(N1893), .A(inst_cellmath__45_0_in2[24]), .B(N967));
XNOR2X1 node_cs_const1_cs_A_I1473 (.Y(inst_cellmath__45_0_out0[25]), .A(inst_cellmath__45_0_in3), .B(N1893));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw1925506066_bdw (
	inst_cellmath__49_0_out0,
	inst_cellmath__49_0_in0
	); /* architecture "gate_level" */ 
output [5:0] inst_cellmath__49_0_out0;
input [25:0] inst_cellmath__49_0_in0;
wire N46,N48,N49,N50,N51,N52,N54 
	,N55,N56,N57,N58,N60,N61,N62,N63 
	,N64,N66,N67,N68,N69,N70,N72,N73 
	,N74,N75,N76,N78,N79,N80,N81,N82 
	,N91,N94,N95,N97,N98,N99,N100,N101 
	,N103,N104,N105,N106,N107,N111,N115,N117 
	,N118,N119,N120,N123,N124,N126,N141,N144 
	,N157,N161,N163,N165,N167,N169,N173,N175 
	;
NOR2BX1 inst_cellmath__49_0_I300 (.Y(N157), .AN(inst_cellmath__49_0_in0[0]), .B(inst_cellmath__49_0_in0[1]));
NOR2XL inst_cellmath__49_0_I11 (.Y(N46), .A(inst_cellmath__49_0_in0[1]), .B(inst_cellmath__49_0_in0[0]));
NOR2BX1 inst_cellmath__49_0_I138 (.Y(N48), .AN(inst_cellmath__49_0_in0[2]), .B(inst_cellmath__49_0_in0[3]));
INVXL inst_cellmath__49_0_I14 (.Y(N49), .A(inst_cellmath__49_0_in0[5]));
OAI21XL inst_cellmath__49_0_I15 (.Y(N50), .A0(inst_cellmath__49_0_in0[4]), .A1(N48), .B0(N49));
NOR2XL inst_cellmath__49_0_I16 (.Y(N51), .A(inst_cellmath__49_0_in0[3]), .B(inst_cellmath__49_0_in0[2]));
NOR2XL inst_cellmath__49_0_I17 (.Y(N52), .A(inst_cellmath__49_0_in0[5]), .B(inst_cellmath__49_0_in0[4]));
NOR2BX1 inst_cellmath__49_0_I139 (.Y(N54), .AN(inst_cellmath__49_0_in0[6]), .B(inst_cellmath__49_0_in0[7]));
INVXL inst_cellmath__49_0_I20 (.Y(N55), .A(inst_cellmath__49_0_in0[9]));
OAI21XL inst_cellmath__49_0_I21 (.Y(N56), .A0(inst_cellmath__49_0_in0[8]), .A1(N54), .B0(N55));
NOR2XL inst_cellmath__49_0_I22 (.Y(N57), .A(inst_cellmath__49_0_in0[7]), .B(inst_cellmath__49_0_in0[6]));
NOR2XL inst_cellmath__49_0_I23 (.Y(N58), .A(inst_cellmath__49_0_in0[9]), .B(inst_cellmath__49_0_in0[8]));
NOR2BX1 inst_cellmath__49_0_I140 (.Y(N60), .AN(inst_cellmath__49_0_in0[10]), .B(inst_cellmath__49_0_in0[11]));
INVXL inst_cellmath__49_0_I26 (.Y(N61), .A(inst_cellmath__49_0_in0[13]));
OAI21XL inst_cellmath__49_0_I27 (.Y(N62), .A0(inst_cellmath__49_0_in0[12]), .A1(N60), .B0(N61));
NOR2XL inst_cellmath__49_0_I28 (.Y(N63), .A(inst_cellmath__49_0_in0[11]), .B(inst_cellmath__49_0_in0[10]));
NOR2XL inst_cellmath__49_0_I29 (.Y(N64), .A(inst_cellmath__49_0_in0[13]), .B(inst_cellmath__49_0_in0[12]));
NOR2BX1 inst_cellmath__49_0_I141 (.Y(N66), .AN(inst_cellmath__49_0_in0[14]), .B(inst_cellmath__49_0_in0[15]));
INVXL inst_cellmath__49_0_I32 (.Y(N67), .A(inst_cellmath__49_0_in0[17]));
OAI21XL inst_cellmath__49_0_I33 (.Y(N68), .A0(inst_cellmath__49_0_in0[16]), .A1(N66), .B0(N67));
NOR2XL inst_cellmath__49_0_I34 (.Y(N69), .A(inst_cellmath__49_0_in0[15]), .B(inst_cellmath__49_0_in0[14]));
NOR2XL inst_cellmath__49_0_I35 (.Y(N70), .A(inst_cellmath__49_0_in0[17]), .B(inst_cellmath__49_0_in0[16]));
NOR2BX1 inst_cellmath__49_0_I142 (.Y(N72), .AN(inst_cellmath__49_0_in0[18]), .B(inst_cellmath__49_0_in0[19]));
INVXL inst_cellmath__49_0_I38 (.Y(N73), .A(inst_cellmath__49_0_in0[21]));
OAI21XL inst_cellmath__49_0_I39 (.Y(N74), .A0(inst_cellmath__49_0_in0[20]), .A1(N72), .B0(N73));
NOR2XL inst_cellmath__49_0_I40 (.Y(N75), .A(inst_cellmath__49_0_in0[19]), .B(inst_cellmath__49_0_in0[18]));
NOR2XL inst_cellmath__49_0_I41 (.Y(N76), .A(inst_cellmath__49_0_in0[21]), .B(inst_cellmath__49_0_in0[20]));
NOR2BX1 inst_cellmath__49_0_I143 (.Y(N78), .AN(inst_cellmath__49_0_in0[22]), .B(inst_cellmath__49_0_in0[23]));
INVXL inst_cellmath__49_0_I44 (.Y(N79), .A(inst_cellmath__49_0_in0[25]));
OAI21XL inst_cellmath__49_0_I45 (.Y(N80), .A0(inst_cellmath__49_0_in0[24]), .A1(N78), .B0(N79));
NOR2XL inst_cellmath__49_0_I46 (.Y(N81), .A(inst_cellmath__49_0_in0[23]), .B(inst_cellmath__49_0_in0[22]));
NOR2XL inst_cellmath__49_0_I47 (.Y(N82), .A(inst_cellmath__49_0_in0[25]), .B(inst_cellmath__49_0_in0[24]));
NAND2BXL inst_cellmath__49_0_I144 (.Y(N91), .AN(N51), .B(N52));
NAND2XL inst_cellmath__49_0_I58 (.Y(N94), .A(N52), .B(N51));
NAND2XL inst_cellmath__49_0_I59 (.Y(N95), .A(N58), .B(N57));
NAND2BXL inst_cellmath__49_0_I145 (.Y(N97), .AN(N63), .B(N64));
INVXL inst_cellmath__49_0_I62 (.Y(N98), .A(N70));
AOI21XL inst_cellmath__49_0_I63 (.Y(N99), .A0(N69), .A1(N97), .B0(N98));
NAND2XL inst_cellmath__49_0_I64 (.Y(N100), .A(N64), .B(N63));
NAND2XL inst_cellmath__49_0_I65 (.Y(N101), .A(N70), .B(N69));
NAND2BXL inst_cellmath__49_0_I146 (.Y(N103), .AN(N75), .B(N76));
INVXL inst_cellmath__49_0_I68 (.Y(N104), .A(N82));
AOI21XL inst_cellmath__49_0_I69 (.Y(N105), .A0(N81), .A1(N103), .B0(N104));
NAND2XL inst_cellmath__49_0_I70 (.Y(N106), .A(N76), .B(N75));
NAND2X1 inst_cellmath__49_0_I71 (.Y(N107), .A(N82), .B(N81));
NAND2BXL inst_cellmath__49_0_I147 (.Y(N111), .AN(N95), .B(N94));
NOR2XL inst_cellmath__49_0_I77 (.Y(N115), .A(N95), .B(N94));
NOR2BX1 inst_cellmath__49_0_I148 (.Y(N117), .AN(N100), .B(N101));
INVXL inst_cellmath__49_0_I80 (.Y(N118), .A(N107));
OAI21XL inst_cellmath__49_0_I81 (.Y(N119), .A0(N106), .A1(N117), .B0(N118));
NOR2XL inst_cellmath__49_0_I82 (.Y(N120), .A(N101), .B(N100));
NOR2X1 inst_cellmath__49_0_I83 (.Y(N173), .A(N107), .B(N106));
NAND2BXL inst_cellmath__49_0_I149 (.Y(N123), .AN(N46), .B(N115));
INVXL inst_cellmath__49_0_I86 (.Y(N124), .A(N173));
AOI21XL inst_cellmath__49_0_I87 (.Y(inst_cellmath__49_0_out0[3]), .A0(N120), .A1(N123), .B0(N124));
NAND2XL inst_cellmath__49_0_I88 (.Y(N126), .A(N115), .B(N46));
NAND2XL inst_cellmath__49_0_I89 (.Y(N175), .A(N173), .B(N120));
NOR2BX1 inst_cellmath__49_0_I150 (.Y(inst_cellmath__49_0_out0[4]), .AN(N126), .B(N175));
NOR2XL inst_cellmath__49_0_I92 (.Y(inst_cellmath__49_0_out0[5]), .A(N175), .B(N126));
OAI21XL inst_cellmath__49_0_I96 (.Y(inst_cellmath__49_0_out0[2]), .A0(N175), .A1(N111), .B0(N119));
OAI2BB1X1 inst_cellmath__49_0_I154 (.Y(N141), .A0N(N57), .A1N(N91), .B0(N58));
AOI21XL inst_cellmath__49_0_I104 (.Y(N144), .A0(N173), .A1(N99), .B0(N105));
OAI21XL inst_cellmath__49_0_I106 (.Y(inst_cellmath__49_0_out0[1]), .A0(N175), .A1(N141), .B0(N144));
OAI21XL inst_cellmath__49_0_I118 (.Y(N161), .A0(N95), .A1(N50), .B0(N56));
OAI21XL inst_cellmath__49_0_I120 (.Y(N163), .A0(N101), .A1(N62), .B0(N68));
OAI21XL inst_cellmath__49_0_I122 (.Y(N165), .A0(N107), .A1(N74), .B0(N80));
AOI21XL inst_cellmath__49_0_I124 (.Y(N167), .A0(N115), .A1(N157), .B0(N161));
AOI21XL inst_cellmath__49_0_I126 (.Y(N169), .A0(N173), .A1(N163), .B0(N165));
OAI21XL inst_cellmath__49_0_I128 (.Y(inst_cellmath__49_0_out0[0]), .A0(N175), .A1(N167), .B0(N169));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw1925506066_bdw (
	inst_cellmath__67__66__out0,
	inst_cellmath__67__66__in0,
	inst_cellmath__67__66__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__66__out0;
input [5:5] inst_cellmath__67__66__in0;
input  inst_cellmath__67__66__in1;
NOR2BX1 inst_cellmath__67__66__I2 (.Y(inst_cellmath__67__66__out0[0]), .AN(inst_cellmath__67__66__in1), .B(inst_cellmath__67__66__in0[5]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw1925506066_bdw (
	inst_cellmath__67__65__out0,
	inst_cellmath__67__65__in0,
	inst_cellmath__67__65__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__65__out0;
input [5:5] inst_cellmath__67__65__in0;
input  inst_cellmath__67__65__in1;
OR2XL inst_cellmath__67__65__I0 (.Y(inst_cellmath__67__65__out0[0]), .A(inst_cellmath__67__65__in1), .B(inst_cellmath__67__65__in0[5]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw1925506066_bdw (
	inst_cellmath__66__59__out0,
	inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__59__out0;
input  inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1;
AND2XL inst_cellmath__66__59__I0 (.Y(inst_cellmath__66__59__out0[0]), .A(inst_cellmath__66__59__in1), .B(inst_cellmath__66__59__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw1925506066_bdw (
	inst_cellmath__66__58__out0,
	inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__58__out0;
input  inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1;
OR2XL inst_cellmath__66__58__I0 (.Y(inst_cellmath__66__58__out0[0]), .A(inst_cellmath__66__58__in1), .B(inst_cellmath__66__58__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw1925506066_bdw (
	inst_cellmath__66__56__out0,
	inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1,
	inst_cellmath__66__56__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__56__out0;
input [0:0] inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1;
input  inst_cellmath__66__56__in2;
MX2XL inst_cellmath__66__56__I2 (.Y(inst_cellmath__66__56__out0[0]), .A(inst_cellmath__66__56__in0[0]), .B(inst_cellmath__66__56__in1[0]), .S0(inst_cellmath__66__56__in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw1925506066_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__66_0_out0;
input [0:0] inst_cellmath__66_0_in0;
input  inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2;
AND3XL inst_cellmath__66_0_I4 (.Y(inst_cellmath__66_0_out0), .A(inst_cellmath__66_0_in2), .B(inst_cellmath__66_0_in1), .C(inst_cellmath__66_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw1925506066_bdw (
	inst_cellmath__64__48__2WWMM_out0,
	inst_cellmath__64__48__2WWMM_in0,
	inst_cellmath__64__48__2WWMM_in1,
	inst_cellmath__64__48__2WWMM_in2,
	inst_cellmath__64__48__2WWMM_in3,
	inst_cellmath__64__48__2WWMM_in4,
	inst_cellmath__64__48__2WWMM_in5
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__64__48__2WWMM_out0;
input  inst_cellmath__64__48__2WWMM_in0,
	inst_cellmath__64__48__2WWMM_in1,
	inst_cellmath__64__48__2WWMM_in2;
input [21:0] inst_cellmath__64__48__2WWMM_in3;
input  inst_cellmath__64__48__2WWMM_in4;
input [21:0] inst_cellmath__64__48__2WWMM_in5;
wire N127,N245;
NOR2BX1 inst_cellmath__64__48__2WWMM_I88 (.Y(N245), .AN(inst_cellmath__64__48__2WWMM_in0), .B(inst_cellmath__64__48__2WWMM_in1));
AOI22XL inst_cellmath__64__48__2WWMM_I6 (.Y(N127), .A0(inst_cellmath__64__48__2WWMM_in4), .A1(inst_cellmath__64__48__2WWMM_in1), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in2));
AO22XL inst_cellmath__64__48__2WWMM_I7 (.Y(inst_cellmath__64__48__2WWMM_out0[1]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[0]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[0]));
AO22XL inst_cellmath__64__48__2WWMM_I8 (.Y(inst_cellmath__64__48__2WWMM_out0[2]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[1]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[1]));
AO22XL inst_cellmath__64__48__2WWMM_I9 (.Y(inst_cellmath__64__48__2WWMM_out0[3]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[2]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[2]));
AO22XL inst_cellmath__64__48__2WWMM_I10 (.Y(inst_cellmath__64__48__2WWMM_out0[4]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[3]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[3]));
AO22XL inst_cellmath__64__48__2WWMM_I11 (.Y(inst_cellmath__64__48__2WWMM_out0[5]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[4]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[4]));
AO22XL inst_cellmath__64__48__2WWMM_I12 (.Y(inst_cellmath__64__48__2WWMM_out0[6]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[5]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[5]));
AO22XL inst_cellmath__64__48__2WWMM_I13 (.Y(inst_cellmath__64__48__2WWMM_out0[7]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[6]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[6]));
AO22XL inst_cellmath__64__48__2WWMM_I14 (.Y(inst_cellmath__64__48__2WWMM_out0[8]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[7]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[7]));
AO22XL inst_cellmath__64__48__2WWMM_I15 (.Y(inst_cellmath__64__48__2WWMM_out0[9]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[8]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[8]));
AO22XL inst_cellmath__64__48__2WWMM_I16 (.Y(inst_cellmath__64__48__2WWMM_out0[10]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[9]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[9]));
AO22XL inst_cellmath__64__48__2WWMM_I17 (.Y(inst_cellmath__64__48__2WWMM_out0[11]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[10]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[10]));
AO22XL inst_cellmath__64__48__2WWMM_I18 (.Y(inst_cellmath__64__48__2WWMM_out0[12]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[11]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[11]));
AO22XL inst_cellmath__64__48__2WWMM_I19 (.Y(inst_cellmath__64__48__2WWMM_out0[13]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[12]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[12]));
AO22XL inst_cellmath__64__48__2WWMM_I20 (.Y(inst_cellmath__64__48__2WWMM_out0[14]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[13]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[13]));
AO22XL inst_cellmath__64__48__2WWMM_I21 (.Y(inst_cellmath__64__48__2WWMM_out0[15]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[14]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[14]));
AO22XL inst_cellmath__64__48__2WWMM_I22 (.Y(inst_cellmath__64__48__2WWMM_out0[16]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[15]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[15]));
AO22XL inst_cellmath__64__48__2WWMM_I23 (.Y(inst_cellmath__64__48__2WWMM_out0[17]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[16]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[16]));
AO22XL inst_cellmath__64__48__2WWMM_I24 (.Y(inst_cellmath__64__48__2WWMM_out0[18]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[17]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[17]));
AO22XL inst_cellmath__64__48__2WWMM_I25 (.Y(inst_cellmath__64__48__2WWMM_out0[19]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[18]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[18]));
AO22XL inst_cellmath__64__48__2WWMM_I26 (.Y(inst_cellmath__64__48__2WWMM_out0[20]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[19]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[19]));
AO22XL inst_cellmath__64__48__2WWMM_I27 (.Y(inst_cellmath__64__48__2WWMM_out0[21]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[20]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[20]));
AO22XL inst_cellmath__64__48__2WWMM_I28 (.Y(inst_cellmath__64__48__2WWMM_out0[22]), .A0(inst_cellmath__64__48__2WWMM_in1), .A1(inst_cellmath__64__48__2WWMM_in5[21]), .B0(N245), .B1(inst_cellmath__64__48__2WWMM_in3[21]));
OAI21XL inst_cellmath__64__48__2WWMM_I89 (.Y(inst_cellmath__64__48__2WWMM_out0[0]), .A0(inst_cellmath__64__48__2WWMM_in0), .A1(inst_cellmath__64__48__2WWMM_in1), .B0(N127));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw1925506066_bdw (
	inst_cellmath__67_0_out0,
	inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2,
	inst_cellmath__67_0_in3,
	inst_cellmath__67_0_in4,
	inst_cellmath__67_0_in5,
	inst_cellmath__67_0_in6
	); /* architecture "gate_level" */ 
output  inst_cellmath__67_0_out0;
input [0:0] inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2;
input  inst_cellmath__67_0_in3;
input [0:0] inst_cellmath__67_0_in4;
input  inst_cellmath__67_0_in5,
	inst_cellmath__67_0_in6;
wire N14,N16,N18;
MX2XL inst_cellmath__67_0_I1 (.Y(N14), .A(inst_cellmath__67_0_in3), .B(inst_cellmath__67_0_in4[0]), .S0(inst_cellmath__67_0_in5));
NOR2XL inst_cellmath__67_0_I2 (.Y(N18), .A(inst_cellmath__67_0_in5), .B(inst_cellmath__67_0_in0[0]));
MX2XL inst_cellmath__67_0_I3 (.Y(N16), .A(inst_cellmath__67_0_in1[0]), .B(inst_cellmath__67_0_in2[0]), .S0(inst_cellmath__67_0_in6));
MX2XL inst_cellmath__67_0_I6 (.Y(inst_cellmath__67_0_out0), .A(N14), .B(N16), .S0(N18));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw1925506066_bdw (
	inst_cellmath__50_0_out0,
	inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__50_0_out0;
input [4:0] inst_cellmath__50_0_in0;
input [25:0] inst_cellmath__50_0_in1;
wire N60,N62,N64,N66,N68,N70,N72 
	,N74,N76,N77,N78,N79,N80,N81,N82 
	,N83,N84,N85,N86,N87,N88,N89,N90 
	,N91,N92,N124,N126,N128,N130,N132,N134 
	,N136,N138,N140,N142,N144,N146,N148,N150 
	,N152,N154,N156,N157,N158,N159,N160,N161 
	,N162,N163,N164,N196,N199,N200,N201,N202 
	,N203,N204,N205,N206,N207,N208,N209,N210 
	,N211,N212,N213,N214,N215,N216,N217,N218 
	,N219,N220,N221,N222,N280,N282,N284,N286 
	,N288,N289,N290,N291,N292,N293,N294,N295 
	,N296,N297,N298,N299,N300,N301,N302,N303 
	,N304,N305,N306,N307,N308,N490,N491,N492 
	,N494,N495,N497,N498,N500,N501;
INVXL inst_cellmath__50_0_I313 (.Y(N490), .A(inst_cellmath__50_0_in0[3]));
AND2XL inst_cellmath__50_0_I2 (.Y(N60), .A(N490), .B(inst_cellmath__50_0_in1[0]));
AND2XL inst_cellmath__50_0_I3 (.Y(N62), .A(N490), .B(inst_cellmath__50_0_in1[1]));
AND2XL inst_cellmath__50_0_I4 (.Y(N64), .A(N490), .B(inst_cellmath__50_0_in1[2]));
AND2XL inst_cellmath__50_0_I5 (.Y(N66), .A(N490), .B(inst_cellmath__50_0_in1[3]));
AND2XL inst_cellmath__50_0_I6 (.Y(N68), .A(N490), .B(inst_cellmath__50_0_in1[4]));
AND2XL inst_cellmath__50_0_I7 (.Y(N70), .A(N490), .B(inst_cellmath__50_0_in1[5]));
AND2XL inst_cellmath__50_0_I8 (.Y(N72), .A(N490), .B(inst_cellmath__50_0_in1[6]));
AND2XL inst_cellmath__50_0_I9 (.Y(N74), .A(N490), .B(inst_cellmath__50_0_in1[7]));
MX2XL inst_cellmath__50_0_I10 (.Y(N76), .A(inst_cellmath__50_0_in1[0]), .B(inst_cellmath__50_0_in1[8]), .S0(N490));
MX2XL inst_cellmath__50_0_I11 (.Y(N77), .A(inst_cellmath__50_0_in1[1]), .B(inst_cellmath__50_0_in1[9]), .S0(N490));
MX2XL inst_cellmath__50_0_I12 (.Y(N78), .A(inst_cellmath__50_0_in1[2]), .B(inst_cellmath__50_0_in1[10]), .S0(N490));
MX2XL inst_cellmath__50_0_I13 (.Y(N79), .A(inst_cellmath__50_0_in1[3]), .B(inst_cellmath__50_0_in1[11]), .S0(N490));
MX2XL inst_cellmath__50_0_I14 (.Y(N80), .A(inst_cellmath__50_0_in1[4]), .B(inst_cellmath__50_0_in1[12]), .S0(N490));
MX2XL inst_cellmath__50_0_I15 (.Y(N81), .A(inst_cellmath__50_0_in1[5]), .B(inst_cellmath__50_0_in1[13]), .S0(N490));
MX2XL inst_cellmath__50_0_I16 (.Y(N82), .A(inst_cellmath__50_0_in1[6]), .B(inst_cellmath__50_0_in1[14]), .S0(N490));
MX2XL inst_cellmath__50_0_I17 (.Y(N83), .A(inst_cellmath__50_0_in1[7]), .B(inst_cellmath__50_0_in1[15]), .S0(N490));
MX2XL inst_cellmath__50_0_I18 (.Y(N84), .A(inst_cellmath__50_0_in1[8]), .B(inst_cellmath__50_0_in1[16]), .S0(N490));
MX2XL inst_cellmath__50_0_I19 (.Y(N85), .A(inst_cellmath__50_0_in1[9]), .B(inst_cellmath__50_0_in1[17]), .S0(N490));
MX2XL inst_cellmath__50_0_I20 (.Y(N86), .A(inst_cellmath__50_0_in1[10]), .B(inst_cellmath__50_0_in1[18]), .S0(N490));
MX2XL inst_cellmath__50_0_I21 (.Y(N87), .A(inst_cellmath__50_0_in1[11]), .B(inst_cellmath__50_0_in1[19]), .S0(N490));
MX2XL inst_cellmath__50_0_I22 (.Y(N88), .A(inst_cellmath__50_0_in1[12]), .B(inst_cellmath__50_0_in1[20]), .S0(N490));
MX2XL inst_cellmath__50_0_I23 (.Y(N89), .A(inst_cellmath__50_0_in1[13]), .B(inst_cellmath__50_0_in1[21]), .S0(N490));
MX2XL inst_cellmath__50_0_I24 (.Y(N90), .A(inst_cellmath__50_0_in1[14]), .B(inst_cellmath__50_0_in1[22]), .S0(N490));
MX2XL inst_cellmath__50_0_I25 (.Y(N91), .A(inst_cellmath__50_0_in1[15]), .B(inst_cellmath__50_0_in1[23]), .S0(N490));
MX2XL inst_cellmath__50_0_I26 (.Y(N92), .A(inst_cellmath__50_0_in1[16]), .B(inst_cellmath__50_0_in1[24]), .S0(N490));
INVX1 inst_cellmath__50_0_I338 (.Y(N491), .A(inst_cellmath__50_0_in0[4]));
INVXL inst_cellmath__50_0_I315 (.Y(N492), .A(N491));
NAND2XL inst_cellmath__50_0_I58 (.Y(N124), .A(N60), .B(N491));
NAND2XL inst_cellmath__50_0_I59 (.Y(N126), .A(N62), .B(N491));
NAND2XL inst_cellmath__50_0_I60 (.Y(N128), .A(N64), .B(N491));
NAND2XL inst_cellmath__50_0_I61 (.Y(N130), .A(N66), .B(N491));
NAND2XL inst_cellmath__50_0_I62 (.Y(N132), .A(N68), .B(N491));
NAND2XL inst_cellmath__50_0_I63 (.Y(N134), .A(N70), .B(N491));
NAND2XL inst_cellmath__50_0_I64 (.Y(N136), .A(N72), .B(N491));
NAND2XL inst_cellmath__50_0_I65 (.Y(N138), .A(N74), .B(N491));
NAND2XL inst_cellmath__50_0_I66 (.Y(N140), .A(N76), .B(N491));
NAND2XL inst_cellmath__50_0_I67 (.Y(N142), .A(N77), .B(N491));
NAND2XL inst_cellmath__50_0_I68 (.Y(N144), .A(N78), .B(N491));
NAND2XL inst_cellmath__50_0_I69 (.Y(N146), .A(N79), .B(N491));
NAND2XL inst_cellmath__50_0_I70 (.Y(N148), .A(N80), .B(N491));
NAND2XL inst_cellmath__50_0_I71 (.Y(N150), .A(N81), .B(N491));
NAND2XL inst_cellmath__50_0_I72 (.Y(N152), .A(N82), .B(N491));
NAND2XL inst_cellmath__50_0_I73 (.Y(N154), .A(N83), .B(N491));
AOI22XL inst_cellmath__50_0_I74 (.Y(N156), .A0(N492), .A1(N60), .B0(N84), .B1(N491));
AOI22XL inst_cellmath__50_0_I75 (.Y(N157), .A0(N492), .A1(N62), .B0(N85), .B1(N491));
AOI22XL inst_cellmath__50_0_I76 (.Y(N158), .A0(N492), .A1(N64), .B0(N86), .B1(N491));
AOI22XL inst_cellmath__50_0_I77 (.Y(N159), .A0(N492), .A1(N66), .B0(N87), .B1(N491));
AOI22XL inst_cellmath__50_0_I78 (.Y(N160), .A0(N492), .A1(N68), .B0(N88), .B1(N491));
AOI22XL inst_cellmath__50_0_I79 (.Y(N161), .A0(N492), .A1(N70), .B0(N89), .B1(N491));
AOI22XL inst_cellmath__50_0_I80 (.Y(N162), .A0(N492), .A1(N72), .B0(N90), .B1(N491));
AOI22XL inst_cellmath__50_0_I81 (.Y(N163), .A0(N492), .A1(N74), .B0(N91), .B1(N491));
AOI22XL inst_cellmath__50_0_I82 (.Y(N164), .A0(N492), .A1(N76), .B0(N92), .B1(N491));
INVX1 inst_cellmath__50_0_I339 (.Y(N494), .A(inst_cellmath__50_0_in0[0]));
INVX1 inst_cellmath__50_0_I318 (.Y(N495), .A(N494));
NOR2XL inst_cellmath__50_0_I114 (.Y(N196), .A(N495), .B(N124));
AOI22XL inst_cellmath__50_0_I115 (.Y(N199), .A0(N494), .A1(N126), .B0(N124), .B1(N495));
AOI22XL inst_cellmath__50_0_I116 (.Y(N200), .A0(N494), .A1(N128), .B0(N126), .B1(N495));
AOI22XL inst_cellmath__50_0_I117 (.Y(N201), .A0(N494), .A1(N130), .B0(N128), .B1(N495));
AOI22XL inst_cellmath__50_0_I118 (.Y(N202), .A0(N494), .A1(N132), .B0(N130), .B1(N495));
AOI22XL inst_cellmath__50_0_I119 (.Y(N203), .A0(N494), .A1(N134), .B0(N132), .B1(N495));
AOI22XL inst_cellmath__50_0_I120 (.Y(N204), .A0(N494), .A1(N136), .B0(N134), .B1(N495));
AOI22XL inst_cellmath__50_0_I121 (.Y(N205), .A0(N494), .A1(N138), .B0(N136), .B1(N495));
AOI22XL inst_cellmath__50_0_I122 (.Y(N206), .A0(N494), .A1(N140), .B0(N138), .B1(N495));
AOI22XL inst_cellmath__50_0_I123 (.Y(N207), .A0(N494), .A1(N142), .B0(N140), .B1(N495));
AOI22XL inst_cellmath__50_0_I124 (.Y(N208), .A0(N494), .A1(N144), .B0(N142), .B1(N495));
AOI22XL inst_cellmath__50_0_I125 (.Y(N209), .A0(N494), .A1(N146), .B0(N144), .B1(N495));
AOI22XL inst_cellmath__50_0_I126 (.Y(N210), .A0(N494), .A1(N148), .B0(N146), .B1(N495));
AOI22XL inst_cellmath__50_0_I127 (.Y(N211), .A0(N494), .A1(N150), .B0(N148), .B1(N495));
AOI22XL inst_cellmath__50_0_I128 (.Y(N212), .A0(N494), .A1(N152), .B0(N150), .B1(N495));
AOI22XL inst_cellmath__50_0_I129 (.Y(N213), .A0(N494), .A1(N154), .B0(N152), .B1(N495));
AOI22XL inst_cellmath__50_0_I130 (.Y(N214), .A0(N494), .A1(N156), .B0(N154), .B1(N495));
AOI22XL inst_cellmath__50_0_I131 (.Y(N215), .A0(N494), .A1(N157), .B0(N156), .B1(N495));
AOI22XL inst_cellmath__50_0_I132 (.Y(N216), .A0(N494), .A1(N158), .B0(N157), .B1(N495));
AOI22XL inst_cellmath__50_0_I133 (.Y(N217), .A0(N494), .A1(N159), .B0(N158), .B1(N495));
AOI22XL inst_cellmath__50_0_I134 (.Y(N218), .A0(N494), .A1(N160), .B0(N159), .B1(N495));
AOI22XL inst_cellmath__50_0_I135 (.Y(N219), .A0(N494), .A1(N161), .B0(N160), .B1(N495));
AOI22XL inst_cellmath__50_0_I136 (.Y(N220), .A0(N494), .A1(N162), .B0(N161), .B1(N495));
AOI22XL inst_cellmath__50_0_I137 (.Y(N221), .A0(N494), .A1(N163), .B0(N162), .B1(N495));
AOI22XL inst_cellmath__50_0_I138 (.Y(N222), .A0(N494), .A1(N164), .B0(N163), .B1(N495));
INVX1 inst_cellmath__50_0_I340 (.Y(N497), .A(inst_cellmath__50_0_in0[2]));
INVXL inst_cellmath__50_0_I321 (.Y(N498), .A(N497));
NAND2XL inst_cellmath__50_0_I170 (.Y(N280), .A(N196), .B(N497));
NAND2XL inst_cellmath__50_0_I171 (.Y(N282), .A(N199), .B(N497));
NAND2XL inst_cellmath__50_0_I172 (.Y(N284), .A(N200), .B(N497));
NAND2XL inst_cellmath__50_0_I173 (.Y(N286), .A(N201), .B(N497));
AOI22XL inst_cellmath__50_0_I174 (.Y(N288), .A0(N498), .A1(N196), .B0(N202), .B1(N497));
AOI22XL inst_cellmath__50_0_I175 (.Y(N289), .A0(N498), .A1(N199), .B0(N203), .B1(N497));
AOI22XL inst_cellmath__50_0_I176 (.Y(N290), .A0(N498), .A1(N200), .B0(N204), .B1(N497));
AOI22XL inst_cellmath__50_0_I177 (.Y(N291), .A0(N498), .A1(N201), .B0(N205), .B1(N497));
AOI22XL inst_cellmath__50_0_I178 (.Y(N292), .A0(N498), .A1(N202), .B0(N206), .B1(N497));
AOI22XL inst_cellmath__50_0_I179 (.Y(N293), .A0(N498), .A1(N203), .B0(N207), .B1(N497));
AOI22XL inst_cellmath__50_0_I180 (.Y(N294), .A0(N498), .A1(N204), .B0(N208), .B1(N497));
AOI22XL inst_cellmath__50_0_I181 (.Y(N295), .A0(N498), .A1(N205), .B0(N209), .B1(N497));
AOI22XL inst_cellmath__50_0_I182 (.Y(N296), .A0(N498), .A1(N206), .B0(N210), .B1(N497));
AOI22XL inst_cellmath__50_0_I183 (.Y(N297), .A0(N498), .A1(N207), .B0(N211), .B1(N497));
AOI22XL inst_cellmath__50_0_I184 (.Y(N298), .A0(N498), .A1(N208), .B0(N212), .B1(N497));
AOI22XL inst_cellmath__50_0_I185 (.Y(N299), .A0(N498), .A1(N209), .B0(N213), .B1(N497));
AOI22XL inst_cellmath__50_0_I186 (.Y(N300), .A0(N498), .A1(N210), .B0(N214), .B1(N497));
AOI22XL inst_cellmath__50_0_I187 (.Y(N301), .A0(N498), .A1(N211), .B0(N215), .B1(N497));
AOI22XL inst_cellmath__50_0_I188 (.Y(N302), .A0(N498), .A1(N212), .B0(N216), .B1(N497));
AOI22XL inst_cellmath__50_0_I189 (.Y(N303), .A0(N498), .A1(N213), .B0(N217), .B1(N497));
AOI22XL inst_cellmath__50_0_I190 (.Y(N304), .A0(N498), .A1(N214), .B0(N218), .B1(N497));
AOI22XL inst_cellmath__50_0_I191 (.Y(N305), .A0(N498), .A1(N215), .B0(N219), .B1(N497));
AOI22XL inst_cellmath__50_0_I192 (.Y(N306), .A0(N498), .A1(N216), .B0(N220), .B1(N497));
AOI22XL inst_cellmath__50_0_I193 (.Y(N307), .A0(N498), .A1(N217), .B0(N221), .B1(N497));
AOI22XL inst_cellmath__50_0_I194 (.Y(N308), .A0(N498), .A1(N218), .B0(N222), .B1(N497));
INVX1 inst_cellmath__50_0_I341 (.Y(N500), .A(inst_cellmath__50_0_in0[1]));
INVX1 inst_cellmath__50_0_I324 (.Y(N501), .A(N500));
NOR2XL inst_cellmath__50_0_I226 (.Y(inst_cellmath__50_0_out0[0]), .A(N501), .B(N280));
NOR2XL inst_cellmath__50_0_I227 (.Y(inst_cellmath__50_0_out0[1]), .A(N501), .B(N282));
AOI22XL inst_cellmath__50_0_I228 (.Y(inst_cellmath__50_0_out0[2]), .A0(N500), .A1(N284), .B0(N280), .B1(N501));
AOI22XL inst_cellmath__50_0_I229 (.Y(inst_cellmath__50_0_out0[3]), .A0(N500), .A1(N286), .B0(N282), .B1(N501));
AOI22XL inst_cellmath__50_0_I230 (.Y(inst_cellmath__50_0_out0[4]), .A0(N500), .A1(N288), .B0(N284), .B1(N501));
AOI22XL inst_cellmath__50_0_I231 (.Y(inst_cellmath__50_0_out0[5]), .A0(N500), .A1(N289), .B0(N286), .B1(N501));
AOI22XL inst_cellmath__50_0_I232 (.Y(inst_cellmath__50_0_out0[6]), .A0(N500), .A1(N290), .B0(N288), .B1(N501));
AOI22XL inst_cellmath__50_0_I233 (.Y(inst_cellmath__50_0_out0[7]), .A0(N500), .A1(N291), .B0(N289), .B1(N501));
AOI22XL inst_cellmath__50_0_I234 (.Y(inst_cellmath__50_0_out0[8]), .A0(N500), .A1(N292), .B0(N290), .B1(N501));
AOI22XL inst_cellmath__50_0_I235 (.Y(inst_cellmath__50_0_out0[9]), .A0(N500), .A1(N293), .B0(N291), .B1(N501));
AOI22XL inst_cellmath__50_0_I236 (.Y(inst_cellmath__50_0_out0[10]), .A0(N500), .A1(N294), .B0(N292), .B1(N501));
AOI22XL inst_cellmath__50_0_I237 (.Y(inst_cellmath__50_0_out0[11]), .A0(N500), .A1(N295), .B0(N293), .B1(N501));
AOI22XL inst_cellmath__50_0_I238 (.Y(inst_cellmath__50_0_out0[12]), .A0(N500), .A1(N296), .B0(N294), .B1(N501));
AOI22XL inst_cellmath__50_0_I239 (.Y(inst_cellmath__50_0_out0[13]), .A0(N500), .A1(N297), .B0(N295), .B1(N501));
AOI22XL inst_cellmath__50_0_I240 (.Y(inst_cellmath__50_0_out0[14]), .A0(N500), .A1(N298), .B0(N296), .B1(N501));
AOI22XL inst_cellmath__50_0_I241 (.Y(inst_cellmath__50_0_out0[15]), .A0(N500), .A1(N299), .B0(N297), .B1(N501));
AOI22XL inst_cellmath__50_0_I242 (.Y(inst_cellmath__50_0_out0[16]), .A0(N500), .A1(N300), .B0(N298), .B1(N501));
AOI22XL inst_cellmath__50_0_I243 (.Y(inst_cellmath__50_0_out0[17]), .A0(N500), .A1(N301), .B0(N299), .B1(N501));
AOI22XL inst_cellmath__50_0_I244 (.Y(inst_cellmath__50_0_out0[18]), .A0(N500), .A1(N302), .B0(N300), .B1(N501));
AOI22XL inst_cellmath__50_0_I245 (.Y(inst_cellmath__50_0_out0[19]), .A0(N500), .A1(N303), .B0(N301), .B1(N501));
AOI22XL inst_cellmath__50_0_I246 (.Y(inst_cellmath__50_0_out0[20]), .A0(N500), .A1(N304), .B0(N302), .B1(N501));
AOI22XL inst_cellmath__50_0_I247 (.Y(inst_cellmath__50_0_out0[21]), .A0(N500), .A1(N305), .B0(N303), .B1(N501));
AOI22XL inst_cellmath__50_0_I248 (.Y(inst_cellmath__50_0_out0[22]), .A0(N500), .A1(N306), .B0(N304), .B1(N501));
AOI22XL inst_cellmath__50_0_I249 (.Y(inst_cellmath__50_0_out0[23]), .A0(N500), .A1(N307), .B0(N305), .B1(N501));
AOI22XL inst_cellmath__50_0_I250 (.Y(inst_cellmath__50_0_out0[24]), .A0(N500), .A1(N308), .B0(N306), .B1(N501));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw1925506066_bdw (
	inst_cellmath__43__26__out0,
	inst_cellmath__43__26__in0,
	inst_cellmath__43__26__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__26__out0;
input  inst_cellmath__43__26__in0;
input [24:24] inst_cellmath__43__26__in1;
XOR2XL inst_cellmath__43__26__I0 (.Y(inst_cellmath__43__26__out0[0]), .A(inst_cellmath__43__26__in1[24]), .B(inst_cellmath__43__26__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw1925506066_bdw (
	inst_cellmath__43__25__out0,
	inst_cellmath__43__25__in0,
	inst_cellmath__43__25__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__25__out0;
input [0:0] inst_cellmath__43__25__in0;
input  inst_cellmath__43__25__in1;
wire N16;
INVXL inst_cellmath__43__25__I4 (.Y(N16), .A(inst_cellmath__43__25__in1));
AND2XL inst_cellmath__43__25__I1 (.Y(inst_cellmath__43__25__out0[0]), .A(N16), .B(inst_cellmath__43__25__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw1925506066_bdw (
	inst_cellmath__43__28__out0,
	inst_cellmath__43__28__in0,
	inst_cellmath__43__28__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__28__out0;
input  inst_cellmath__43__28__in0;
input [24:24] inst_cellmath__43__28__in1;
OR2XL inst_cellmath__43__28__I0 (.Y(inst_cellmath__43__28__out0[0]), .A(inst_cellmath__43__28__in1[24]), .B(inst_cellmath__43__28__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw1925506066_bdw (
	inst_cellmath__43__27__out0,
	inst_cellmath__43__27__in0,
	inst_cellmath__43__27__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__27__out0;
input [0:0] inst_cellmath__43__27__in0;
input  inst_cellmath__43__27__in1;
AND2XL inst_cellmath__43__27__I0 (.Y(inst_cellmath__43__27__out0[0]), .A(inst_cellmath__43__27__in1), .B(inst_cellmath__43__27__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw1925506066_bdw (
	inst_cellmath__43__24__out0,
	inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__24__out0;
input [0:0] inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1;
OR2XL inst_cellmath__43__24__I0 (.Y(inst_cellmath__43__24__out0[0]), .A(inst_cellmath__43__24__in0[0]), .B(inst_cellmath__43__24__in1[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw1925506066_bdw (
	inst_cellmath__43_0_out0,
	inst_cellmath__43_0_in0,
	inst_cellmath__43_0_in1,
	inst_cellmath__43_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__43_0_out0;
input [0:0] inst_cellmath__43_0_in0;
input [24:24] inst_cellmath__43_0_in1;
input  inst_cellmath__43_0_in2;
MX2XL inst_cellmath__43_0_I2 (.Y(inst_cellmath__43_0_out0), .A(inst_cellmath__43_0_in1[24]), .B(inst_cellmath__43_0_in0[0]), .S0(inst_cellmath__43_0_in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw1925506066_bdw (
	inst_cellmath__53_0_out0,
	inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1,
	inst_cellmath__53_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__53_0_out0;
input [1:1] inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1;
input  inst_cellmath__53_0_in2;
MX2XL inst_cellmath__53_0_I2 (.Y(inst_cellmath__53_0_out0), .A(inst_cellmath__53_0_in0[1]), .B(inst_cellmath__53_0_in2), .S0(inst_cellmath__53_0_in1[1]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw1925506066_bdw (
	inst_cellmath__5_0_out0,
	inst_cellmath__5_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__5_0_out0;
input [2:0] inst_cellmath__5_0_in0;
NOR3BXL inst_cellmath__5_0_I17 (.Y(inst_cellmath__5_0_out0), .AN(inst_cellmath__5_0_in0[0]), .B(inst_cellmath__5_0_in0[2]), .C(inst_cellmath__5_0_in0[1]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw1925506066_bdw (
	inst_cellmath__55__39__out0,
	inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__39__out0;
input  inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1;
wire N13;
INVXL inst_cellmath__55__39__I3 (.Y(N13), .A(inst_cellmath__55__39__in1));
AND2XL inst_cellmath__55__39__I1 (.Y(inst_cellmath__55__39__out0[0]), .A(inst_cellmath__55__39__in0), .B(N13));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw1925506066_bdw (
	inst_cellmath__55__38__out0,
	inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__38__out0;
input  inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1;
AND2XL inst_cellmath__55__38__I0 (.Y(inst_cellmath__55__38__out0[0]), .A(inst_cellmath__55__38__in0), .B(inst_cellmath__55__38__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw1925506066_bdw (
	inst_cellmath__8_0_out0,
	inst_cellmath__8_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__8_0_out0;
input [2:0] inst_cellmath__8_0_in0;
NOR3BXL inst_cellmath__8_0_I24 (.Y(inst_cellmath__8_0_out0), .AN(inst_cellmath__8_0_in0[2]), .B(inst_cellmath__8_0_in0[1]), .C(inst_cellmath__8_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw1925506066_bdw (
	inst_cellmath__4_0_out0,
	inst_cellmath__4_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__4_0_out0;
input [2:0] inst_cellmath__4_0_in0;
NOR3XL inst_cellmath__4_0_I26 (.Y(inst_cellmath__4_0_out0), .A(inst_cellmath__4_0_in0[1]), .B(inst_cellmath__4_0_in0[2]), .C(inst_cellmath__4_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw1925506066_bdw (
	inst_cellmath__54__33__out0,
	inst_cellmath__54__33__in0,
	inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__54__33__out0;
input [0:0] inst_cellmath__54__33__in0;
input  inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2;
wire N7;
OR2XL inst_cellmath__54__33__I0 (.Y(N7), .A(inst_cellmath__54__33__in2), .B(inst_cellmath__54__33__in1));
OR2XL inst_cellmath__54__33__I2 (.Y(inst_cellmath__54__33__out0[0]), .A(N7), .B(inst_cellmath__54__33__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw1925506066_bdw (
	inst_cellmath__54_0_out0,
	inst_cellmath__54_0_in0,
	inst_cellmath__54_0_in1,
	inst_cellmath__54_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__54_0_out0;
input [0:0] inst_cellmath__54_0_in0;
input [1:1] inst_cellmath__54_0_in1;
input  inst_cellmath__54_0_in2;
MX2XL inst_cellmath__54_0_I2 (.Y(inst_cellmath__54_0_out0), .A(inst_cellmath__54_0_in0[0]), .B(inst_cellmath__54_0_in2), .S0(inst_cellmath__54_0_in1[1]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw1925506066_bdw (
	inst_cellmath__55__37__out0,
	inst_cellmath__55__37__in0,
	inst_cellmath__55__37__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__37__out0;
input  inst_cellmath__55__37__in0;
input [2:2] inst_cellmath__55__37__in1;
OR2XL inst_cellmath__55__37__I0 (.Y(inst_cellmath__55__37__out0[0]), .A(inst_cellmath__55__37__in1[2]), .B(inst_cellmath__55__37__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw1925506066_bdw (
	inst_cellmath__55__36__out0,
	inst_cellmath__55__36__in0,
	inst_cellmath__55__36__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__36__out0;
input [0:0] inst_cellmath__55__36__in0;
input  inst_cellmath__55__36__in1;
AND2XL inst_cellmath__55__36__I0 (.Y(inst_cellmath__55__36__out0[0]), .A(inst_cellmath__55__36__in1), .B(inst_cellmath__55__36__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw1925506066_bdw (
	inst_cellmath__55__35__out0,
	inst_cellmath__55__35__in0,
	inst_cellmath__55__35__in1,
	inst_cellmath__55__35__in2,
	inst_cellmath__55__35__in3
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__35__out0;
input  inst_cellmath__55__35__in0;
input [0:0] inst_cellmath__55__35__in1,
	inst_cellmath__55__35__in2,
	inst_cellmath__55__35__in3;
OR4X1 inst_cellmath__55__35__I6 (.Y(inst_cellmath__55__35__out0[0]), .A(inst_cellmath__55__35__in0), .B(inst_cellmath__55__35__in1[0]), .C(inst_cellmath__55__35__in2[0]), .D(inst_cellmath__55__35__in3[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw1925506066_bdw (
	inst_cellmath__55__34__out0,
	inst_cellmath__55__34__in0,
	inst_cellmath__55__34__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__34__out0;
input [0:0] inst_cellmath__55__34__in0;
input  inst_cellmath__55__34__in1;
AND2XL inst_cellmath__55__34__I0 (.Y(inst_cellmath__55__34__out0[0]), .A(inst_cellmath__55__34__in1), .B(inst_cellmath__55__34__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw1925506066_bdw (
	inst_cellmath__55__41__out0,
	inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__41__out0;
input [0:0] inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1;
OR2XL inst_cellmath__55__41__I0 (.Y(inst_cellmath__55__41__out0[0]), .A(inst_cellmath__55__41__in0[0]), .B(inst_cellmath__55__41__in1[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw1925506066_bdw (
	inst_cellmath__55__40__out0,
	inst_cellmath__55__40__in0,
	inst_cellmath__55__40__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__40__out0;
input [0:0] inst_cellmath__55__40__in0;
input  inst_cellmath__55__40__in1;
AND2XL inst_cellmath__55__40__I0 (.Y(inst_cellmath__55__40__out0[0]), .A(inst_cellmath__55__40__in0[0]), .B(inst_cellmath__55__40__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw1925506066_bdw (
	inst_cellmath__55_0_out0,
	inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__55_0_out0;
input [0:0] inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1;
OR2XL inst_cellmath__55_0_I0 (.Y(inst_cellmath__55_0_out0), .A(inst_cellmath__55_0_in0[0]), .B(inst_cellmath__55_0_in1[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw1925506066_bdw (
	inst_cellmath__57_0_out0,
	inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1
	); /* architecture "gate_level" */ 
output [23:0] inst_cellmath__57_0_out0;
input  inst_cellmath__57_0_in0;
input [24:2] inst_cellmath__57_0_in1;
wire N137,N141,N145,N149,N153,N157,N161 
	,N165,N169,N173,N177,N181,N185,N189,N193 
	,N197,N201,N205,N209,N213,N217,N221;
ADDHX1 inst_cellmath__57_0_I34 (.CO(N137), .S(inst_cellmath__57_0_out0[0]), .A(inst_cellmath__57_0_in1[2]), .B(inst_cellmath__57_0_in0));
ADDHX1 inst_cellmath__57_0_I35 (.CO(N141), .S(inst_cellmath__57_0_out0[1]), .A(inst_cellmath__57_0_in1[3]), .B(N137));
ADDHX1 inst_cellmath__57_0_I36 (.CO(N145), .S(inst_cellmath__57_0_out0[2]), .A(inst_cellmath__57_0_in1[4]), .B(N141));
ADDHX1 inst_cellmath__57_0_I37 (.CO(N149), .S(inst_cellmath__57_0_out0[3]), .A(inst_cellmath__57_0_in1[5]), .B(N145));
ADDHX1 inst_cellmath__57_0_I38 (.CO(N153), .S(inst_cellmath__57_0_out0[4]), .A(inst_cellmath__57_0_in1[6]), .B(N149));
ADDHX1 inst_cellmath__57_0_I39 (.CO(N157), .S(inst_cellmath__57_0_out0[5]), .A(inst_cellmath__57_0_in1[7]), .B(N153));
ADDHX1 inst_cellmath__57_0_I40 (.CO(N161), .S(inst_cellmath__57_0_out0[6]), .A(inst_cellmath__57_0_in1[8]), .B(N157));
ADDHX1 inst_cellmath__57_0_I41 (.CO(N165), .S(inst_cellmath__57_0_out0[7]), .A(inst_cellmath__57_0_in1[9]), .B(N161));
ADDHX1 inst_cellmath__57_0_I42 (.CO(N169), .S(inst_cellmath__57_0_out0[8]), .A(inst_cellmath__57_0_in1[10]), .B(N165));
ADDHX1 inst_cellmath__57_0_I43 (.CO(N173), .S(inst_cellmath__57_0_out0[9]), .A(inst_cellmath__57_0_in1[11]), .B(N169));
ADDHX1 inst_cellmath__57_0_I44 (.CO(N177), .S(inst_cellmath__57_0_out0[10]), .A(inst_cellmath__57_0_in1[12]), .B(N173));
ADDHX1 inst_cellmath__57_0_I45 (.CO(N181), .S(inst_cellmath__57_0_out0[11]), .A(inst_cellmath__57_0_in1[13]), .B(N177));
ADDHX1 inst_cellmath__57_0_I46 (.CO(N185), .S(inst_cellmath__57_0_out0[12]), .A(inst_cellmath__57_0_in1[14]), .B(N181));
ADDHX1 inst_cellmath__57_0_I47 (.CO(N189), .S(inst_cellmath__57_0_out0[13]), .A(inst_cellmath__57_0_in1[15]), .B(N185));
ADDHX1 inst_cellmath__57_0_I48 (.CO(N193), .S(inst_cellmath__57_0_out0[14]), .A(inst_cellmath__57_0_in1[16]), .B(N189));
ADDHX1 inst_cellmath__57_0_I49 (.CO(N197), .S(inst_cellmath__57_0_out0[15]), .A(inst_cellmath__57_0_in1[17]), .B(N193));
ADDHX1 inst_cellmath__57_0_I50 (.CO(N201), .S(inst_cellmath__57_0_out0[16]), .A(inst_cellmath__57_0_in1[18]), .B(N197));
ADDHX1 inst_cellmath__57_0_I51 (.CO(N205), .S(inst_cellmath__57_0_out0[17]), .A(inst_cellmath__57_0_in1[19]), .B(N201));
ADDHX1 inst_cellmath__57_0_I52 (.CO(N209), .S(inst_cellmath__57_0_out0[18]), .A(inst_cellmath__57_0_in1[20]), .B(N205));
ADDHX1 inst_cellmath__57_0_I53 (.CO(N213), .S(inst_cellmath__57_0_out0[19]), .A(inst_cellmath__57_0_in1[21]), .B(N209));
ADDHX1 inst_cellmath__57_0_I54 (.CO(N217), .S(inst_cellmath__57_0_out0[20]), .A(inst_cellmath__57_0_in1[22]), .B(N213));
ADDHX1 inst_cellmath__57_0_I55 (.CO(N221), .S(inst_cellmath__57_0_out0[21]), .A(inst_cellmath__57_0_in1[23]), .B(N217));
ADDHX1 inst_cellmath__57_0_I56 (.CO(inst_cellmath__57_0_out0[23]), .S(inst_cellmath__57_0_out0[22]), .A(inst_cellmath__57_0_in1[24]), .B(N221));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw1925506066_bdw (
	inst_cellmath__62__46__out0,
	inst_cellmath__62__46__in0,
	inst_cellmath__62__46__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__46__out0;
input [23:23] inst_cellmath__62__46__in0;
input [24:24] inst_cellmath__62__46__in1;
AND2XL inst_cellmath__62__46__I0 (.Y(inst_cellmath__62__46__out0[0]), .A(inst_cellmath__62__46__in1[24]), .B(inst_cellmath__62__46__in0[23]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw1925506066_bdw (
	inst_cellmath__62__45__out0,
	inst_cellmath__62__45__in0,
	inst_cellmath__62__45__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__45__out0;
input [0:0] inst_cellmath__62__45__in0;
input [25:25] inst_cellmath__62__45__in1;
OR2XL inst_cellmath__62__45__I0 (.Y(inst_cellmath__62__45__out0[0]), .A(inst_cellmath__62__45__in1[25]), .B(inst_cellmath__62__45__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw1925506066_bdw (
	inst_cellmath__29_0_out0,
	inst_cellmath__29_0_in0,
	inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__29_0_out0;
input [0:0] inst_cellmath__29_0_in0;
input [7:0] inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2;
MX2XL inst_cellmath__29_0_I16 (.Y(inst_cellmath__29_0_out0[0]), .A(inst_cellmath__29_0_in2[0]), .B(inst_cellmath__29_0_in1[0]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I17 (.Y(inst_cellmath__29_0_out0[1]), .A(inst_cellmath__29_0_in2[1]), .B(inst_cellmath__29_0_in1[1]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I18 (.Y(inst_cellmath__29_0_out0[2]), .A(inst_cellmath__29_0_in2[2]), .B(inst_cellmath__29_0_in1[2]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I19 (.Y(inst_cellmath__29_0_out0[3]), .A(inst_cellmath__29_0_in2[3]), .B(inst_cellmath__29_0_in1[3]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I20 (.Y(inst_cellmath__29_0_out0[4]), .A(inst_cellmath__29_0_in2[4]), .B(inst_cellmath__29_0_in1[4]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I21 (.Y(inst_cellmath__29_0_out0[5]), .A(inst_cellmath__29_0_in2[5]), .B(inst_cellmath__29_0_in1[5]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I22 (.Y(inst_cellmath__29_0_out0[6]), .A(inst_cellmath__29_0_in2[6]), .B(inst_cellmath__29_0_in1[6]), .S0(inst_cellmath__29_0_in0[0]));
MX2XL inst_cellmath__29_0_I23 (.Y(inst_cellmath__29_0_out0[7]), .A(inst_cellmath__29_0_in2[7]), .B(inst_cellmath__29_0_in1[7]), .S0(inst_cellmath__29_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw1925506066_bdw (
	inst_cellmath__62_0_out0,
	inst_cellmath__62_0_in0,
	inst_cellmath__62_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__62_0_out0;
input [0:0] inst_cellmath__62_0_in0;
input [7:0] inst_cellmath__62_0_in1;
wire N12,N18,N20,N32,N40;
NAND2XL inst_cellmath__62_0_I0 (.Y(N12), .A(inst_cellmath__62_0_in1[1]), .B(inst_cellmath__62_0_in1[2]));
NAND3XL hyperpropagate_4_1_A_I17 (.Y(N32), .A(inst_cellmath__62_0_in1[6]), .B(inst_cellmath__62_0_in1[7]), .C(inst_cellmath__62_0_in1[5]));
NOR2XL hyperpropagate_4_1_A_I18 (.Y(N18), .A(inst_cellmath__62_0_in1[0]), .B(N32));
NAND3XL hyperpropagate_4_1_A_I19 (.Y(N40), .A(inst_cellmath__62_0_in1[4]), .B(inst_cellmath__62_0_in1[3]), .C(N18));
NOR2XL hyperpropagate_4_1_A_I20 (.Y(N20), .A(N12), .B(N40));
AND2XL inst_cellmath__62_0_I9 (.Y(inst_cellmath__62_0_out0), .A(N20), .B(inst_cellmath__62_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw1925506066_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1,
	inst_cellmath__59_0_in2
	); /* architecture "gate_level" */ 
output [9:0] inst_cellmath__59_0_out0;
input [23:23] inst_cellmath__59_0_in0;
input [4:0] inst_cellmath__59_0_in1;
input [7:0] inst_cellmath__59_0_in2;
wire N43,N45,N47,N49,N51,N94,N98 
	,N99,N100,N101,N102,N103,N104,N108,N112 
	,N117,N119,N121,N123,N125,N127,N129,N131 
	;
INVXL inst_cellmath__59_0_I11 (.Y(N43), .A(inst_cellmath__59_0_in1[0]));
INVXL inst_cellmath__59_0_I12 (.Y(N45), .A(inst_cellmath__59_0_in1[1]));
INVXL inst_cellmath__59_0_I13 (.Y(N47), .A(inst_cellmath__59_0_in1[2]));
INVXL inst_cellmath__59_0_I14 (.Y(N49), .A(inst_cellmath__59_0_in1[3]));
INVXL inst_cellmath__59_0_I15 (.Y(N51), .A(inst_cellmath__59_0_in1[4]));
INVXL inst_cellmath__59_0_I37 (.Y(N94), .A(inst_cellmath__59_0_in2[1]));
ADDHX1 inst_cellmath__59_0_I38 (.CO(N99), .S(N98), .A(inst_cellmath__59_0_in2[1]), .B(inst_cellmath__59_0_in2[2]));
ADDHX1 inst_cellmath__59_0_I39 (.CO(N101), .S(N100), .A(inst_cellmath__59_0_in2[3]), .B(N99));
ADDHX1 inst_cellmath__59_0_I40 (.CO(N103), .S(N102), .A(inst_cellmath__59_0_in2[4]), .B(N101));
INVXL inst_cellmath__59_0_I41 (.Y(N104), .A(inst_cellmath__59_0_in2[5]));
INVXL inst_cellmath__59_0_I42 (.Y(N108), .A(inst_cellmath__59_0_in2[6]));
INVXL inst_cellmath__59_0_I43 (.Y(N112), .A(inst_cellmath__59_0_in2[7]));
ADDFX1 inst_cellmath__59_0_I44 (.CO(N117), .S(inst_cellmath__59_0_out0[0]), .A(N43), .B(inst_cellmath__59_0_in2[0]), .CI(inst_cellmath__59_0_in0[23]));
ADDFX1 inst_cellmath__59_0_I45 (.CO(N119), .S(inst_cellmath__59_0_out0[1]), .A(N45), .B(N94), .CI(N117));
ADDFX1 inst_cellmath__59_0_I46 (.CO(N121), .S(inst_cellmath__59_0_out0[2]), .A(N47), .B(N98), .CI(N119));
ADDFX1 inst_cellmath__59_0_I47 (.CO(N123), .S(inst_cellmath__59_0_out0[3]), .A(N49), .B(N100), .CI(N121));
ADDFX1 inst_cellmath__59_0_I48 (.CO(N125), .S(inst_cellmath__59_0_out0[4]), .A(N51), .B(N102), .CI(N123));
ADDFX1 inst_cellmath__59_0_I49 (.CO(N127), .S(inst_cellmath__59_0_out0[5]), .A(N103), .B(N104), .CI(N125));
ADDFX1 inst_cellmath__59_0_I50 (.CO(N129), .S(inst_cellmath__59_0_out0[6]), .A(N108), .B(inst_cellmath__59_0_in2[5]), .CI(N127));
ADDFX1 inst_cellmath__59_0_I51 (.CO(N131), .S(inst_cellmath__59_0_out0[7]), .A(N112), .B(inst_cellmath__59_0_in2[6]), .CI(N129));
XNOR2X1 hap1_A_I55 (.Y(inst_cellmath__59_0_out0[8]), .A(inst_cellmath__59_0_in2[7]), .B(N131));
NOR2XL hap1_A_I56 (.Y(inst_cellmath__59_0_out0[9]), .A(inst_cellmath__59_0_in2[7]), .B(N131));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw1925506066_bdw (
	inst_cellmath__60__44__out0,
	inst_cellmath__60__44__in0
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__60__44__out0;
input [8:0] inst_cellmath__60__44__in0;
wire N13,N15,N16,N19,N20;
NOR2XL inst_cellmath__60__44__I1 (.Y(N13), .A(inst_cellmath__60__44__in0[2]), .B(inst_cellmath__60__44__in0[5]));
NOR3XL inst_cellmath__60__44__I11 (.Y(N15), .A(inst_cellmath__60__44__in0[0]), .B(inst_cellmath__60__44__in0[1]), .C(inst_cellmath__60__44__in0[3]));
NOR2XL inst_cellmath__60__44__I4 (.Y(N16), .A(inst_cellmath__60__44__in0[4]), .B(inst_cellmath__60__44__in0[6]));
NOR2XL inst_cellmath__60__44__I5 (.Y(N19), .A(inst_cellmath__60__44__in0[7]), .B(inst_cellmath__60__44__in0[8]));
NAND2XL inst_cellmath__60__44__I8 (.Y(N20), .A(N19), .B(N15));
NAND3BXL inst_cellmath__60__44__I12 (.Y(inst_cellmath__60__44__out0[0]), .AN(N20), .B(N13), .C(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw1925506066_bdw (
	inst_cellmath__71_1_out0,
	inst_cellmath__71_1_in0,
	inst_cellmath__71_1_in1,
	inst_cellmath__71_1_in2,
	inst_cellmath__71_1_in3,
	inst_cellmath__71_1_in4,
	inst_cellmath__71_1_in5,
	inst_cellmath__71_1_in6,
	inst_cellmath__71_1_in7
	); /* architecture "gate_level" */ 
output  inst_cellmath__71_1_out0;
input [0:0] inst_cellmath__71_1_in0;
input  inst_cellmath__71_1_in1,
	inst_cellmath__71_1_in2;
input [0:0] inst_cellmath__71_1_in3;
input [9:9] inst_cellmath__71_1_in4;
input [5:5] inst_cellmath__71_1_in5;
input  inst_cellmath__71_1_in6,
	inst_cellmath__71_1_in7;
wire N15,N20;
OR4X1 inst_cellmath__71_1_I12 (.Y(N15), .A(inst_cellmath__71_1_in0[0]), .B(inst_cellmath__71_1_in6), .C(inst_cellmath__71_1_in7), .D(inst_cellmath__71_1_in1));
NOR4X1 inst_cellmath__71_1_I14 (.Y(N20), .A(N15), .B(inst_cellmath__71_1_in5[5]), .C(inst_cellmath__71_1_in2), .D(inst_cellmath__71_1_in4[9]));
NAND2XL inst_cellmath__71_1_I10 (.Y(inst_cellmath__71_1_out0), .A(N20), .B(inst_cellmath__71_1_in3[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw1925506066_bdw (
	inst_cellmath__68__69__out0,
	inst_cellmath__68__69__in0,
	inst_cellmath__68__69__in1,
	inst_cellmath__68__69__in2,
	inst_cellmath__68__69__in3
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__68__69__out0;
input  inst_cellmath__68__69__in0;
input [0:0] inst_cellmath__68__69__in1,
	inst_cellmath__68__69__in2;
input  inst_cellmath__68__69__in3;
wire N2,N29;
INVXL inst_cellmath__68__69__I8 (.Y(N29), .A(inst_cellmath__68__69__in1[0]));
NOR4BX1 inst_cellmath__68__69__I12 (.Y(N2), .AN(N29), .B(inst_cellmath__68__69__in0), .C(inst_cellmath__68__69__in2[0]), .D(inst_cellmath__68__69__in3));
INVXL inst_cellmath__68__69__I7 (.Y(inst_cellmath__68__69__out0[0]), .A(N2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw1925506066_bdw (
	inst_cellmath__68__68__out0,
	inst_cellmath__68__68__in0,
	inst_cellmath__68__68__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__68__68__out0;
input [0:0] inst_cellmath__68__68__in0;
input  inst_cellmath__68__68__in1;
AND2XL inst_cellmath__68__68__I0 (.Y(inst_cellmath__68__68__out0[0]), .A(inst_cellmath__68__68__in0[0]), .B(inst_cellmath__68__68__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw1925506066_bdw (
	inst_cellmath__68_0_out0,
	inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1,
	inst_cellmath__68_0_in2,
	inst_cellmath__68_0_in3
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__68_0_out0;
input [0:0] inst_cellmath__68_0_in0;
input  inst_cellmath__68_0_in1,
	inst_cellmath__68_0_in2,
	inst_cellmath__68_0_in3;
OR4X1 inst_cellmath__68_0_I7 (.Y(inst_cellmath__68_0_out0[0]), .A(inst_cellmath__68_0_in2), .B(inst_cellmath__68_0_in3), .C(inst_cellmath__68_0_in1), .D(inst_cellmath__68_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw1925506066_bdw (
	inst_cellmath__68__0__out0,
	inst_cellmath__68__0__in0,
	inst_cellmath__68__0__in1,
	inst_cellmath__68__0__in2,
	inst_cellmath__68__0__in3
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__68__0__out0;
input  inst_cellmath__68__0__in0,
	inst_cellmath__68__0__in1,
	inst_cellmath__68__0__in2,
	inst_cellmath__68__0__in3;
OR4X1 inst_cellmath__68__0__I7 (.Y(inst_cellmath__68__0__out0[0]), .A(inst_cellmath__68__0__in2), .B(inst_cellmath__68__0__in3), .C(inst_cellmath__68__0__in0), .D(inst_cellmath__68__0__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw1925506066_bdw (
	inst_cellmath__72_0_out0,
	inst_cellmath__72_0_in0,
	inst_cellmath__72_0_in1,
	inst_cellmath__72_0_in2,
	inst_cellmath__72_0_in3
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__72_0_out0;
input  inst_cellmath__72_0_in0;
input [0:0] inst_cellmath__72_0_in1,
	inst_cellmath__72_0_in2;
input [7:0] inst_cellmath__72_0_in3;
wire N99,N101,N104,N109;
INVXL buf1_A_I39 (.Y(N104), .A(inst_cellmath__72_0_in1[0]));
INVXL buf1_A_I40 (.Y(N99), .A(N104));
INVXL buf1_A_I41 (.Y(N109), .A(inst_cellmath__72_0_in0));
INVXL buf1_A_I42 (.Y(N101), .A(N109));
MX2XL inst_cellmath__72_0_I16 (.Y(inst_cellmath__72_0_out0[0]), .A(inst_cellmath__72_0_in3[0]), .B(inst_cellmath__72_0_in2[0]), .S0(N101));
MX2XL inst_cellmath__72_0_I17 (.Y(inst_cellmath__72_0_out0[1]), .A(inst_cellmath__72_0_in3[1]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I18 (.Y(inst_cellmath__72_0_out0[2]), .A(inst_cellmath__72_0_in3[2]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I19 (.Y(inst_cellmath__72_0_out0[3]), .A(inst_cellmath__72_0_in3[3]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I20 (.Y(inst_cellmath__72_0_out0[4]), .A(inst_cellmath__72_0_in3[4]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I21 (.Y(inst_cellmath__72_0_out0[5]), .A(inst_cellmath__72_0_in3[5]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I22 (.Y(inst_cellmath__72_0_out0[6]), .A(inst_cellmath__72_0_in3[6]), .B(N99), .S0(N101));
MX2XL inst_cellmath__72_0_I23 (.Y(inst_cellmath__72_0_out0[7]), .A(inst_cellmath__72_0_in3[7]), .B(N99), .S0(N101));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw1925506066_bdw (
	inst_cellmath__7_0_out0,
	inst_cellmath__7_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__7_0_out0;
input [2:0] inst_cellmath__7_0_in0;
wire N42;
NAND2XL inst_cellmath__7_0_I24 (.Y(N42), .A(inst_cellmath__7_0_in0[0]), .B(inst_cellmath__7_0_in0[1]));
NOR2XL inst_cellmath__7_0_I25 (.Y(inst_cellmath__7_0_out0), .A(inst_cellmath__7_0_in0[2]), .B(N42));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw1925506066_bdw (
	inst_cellmath__70__74__out0,
	inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__70__74__out0;
input  inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1;
wire N6;
INVXL inst_cellmath__70__74__I1 (.Y(N6), .A(inst_cellmath__70__74__in1));
MXI2XL inst_cellmath__70__74__I3 (.Y(inst_cellmath__70__74__out0[0]), .A(inst_cellmath__70__74__in1), .B(N6), .S0(inst_cellmath__70__74__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw1925506066_bdw (
	inst_cellmath__70__73__out0,
	inst_cellmath__70__73__in0,
	inst_cellmath__70__73__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__70__73__out0;
input [0:0] inst_cellmath__70__73__in0;
input  inst_cellmath__70__73__in1;
OR2XL inst_cellmath__70__73__I0 (.Y(inst_cellmath__70__73__out0[0]), .A(inst_cellmath__70__73__in1), .B(inst_cellmath__70__73__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw1925506066_bdw (
	inst_cellmath__70_0_out0,
	inst_cellmath__70_0_in0,
	inst_cellmath__70_0_in1,
	inst_cellmath__70_0_in2,
	inst_cellmath__70_0_in3
	); /* architecture "gate_level" */ 
output  inst_cellmath__70_0_out0;
input  inst_cellmath__70_0_in0;
input [0:0] inst_cellmath__70_0_in1;
input  inst_cellmath__70_0_in2,
	inst_cellmath__70_0_in3;
wire N9;
NOR3BXL inst_cellmath__70_0_I5 (.Y(N9), .AN(inst_cellmath__70_0_in1[0]), .B(inst_cellmath__70_0_in0), .C(inst_cellmath__70_0_in3));
AND2XL inst_cellmath__70_0_I3 (.Y(inst_cellmath__70_0_out0), .A(N9), .B(inst_cellmath__70_0_in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw1925506066_bdw (
	inst_cellmath__73_0_out0,
	inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1,
	inst_cellmath__73_0_in2,
	inst_cellmath__73_0_in3,
	inst_cellmath__73_0_in4
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__73_0_out0;
input  inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1;
input [22:1] inst_cellmath__73_0_in2;
input  inst_cellmath__73_0_in3;
input [22:0] inst_cellmath__73_0_in4;
wire N98,N106,N108,N110,N112,N114,N116 
	,N118,N120,N122,N124,N126,N128,N130,N132 
	,N134,N136,N138,N140,N142,N144,N146,N148 
	,N150,N224,N226;
INVXL inst_cellmath__73_0_I0 (.Y(N98), .A(inst_cellmath__73_0_in0));
NOR2XL inst_cellmath__73_0_I2 (.Y(N224), .A(inst_cellmath__73_0_in3), .B(N98));
NOR2BX1 inst_cellmath__73_0_I91 (.Y(N226), .AN(inst_cellmath__73_0_in3), .B(N98));
AOI22XL inst_cellmath__73_0_I8 (.Y(N106), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[0]));
AOI22XL inst_cellmath__73_0_I9 (.Y(N108), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[1]));
AOI22XL inst_cellmath__73_0_I10 (.Y(N110), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[2]));
AOI22XL inst_cellmath__73_0_I11 (.Y(N112), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[3]));
AOI22XL inst_cellmath__73_0_I12 (.Y(N114), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[4]));
AOI22XL inst_cellmath__73_0_I13 (.Y(N116), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[5]));
AOI22XL inst_cellmath__73_0_I14 (.Y(N118), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[6]));
AOI22XL inst_cellmath__73_0_I15 (.Y(N120), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[7]));
AOI22XL inst_cellmath__73_0_I16 (.Y(N122), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[8]));
AOI22XL inst_cellmath__73_0_I17 (.Y(N124), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[9]));
AOI22XL inst_cellmath__73_0_I18 (.Y(N126), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[10]));
AOI22XL inst_cellmath__73_0_I19 (.Y(N128), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[11]));
AOI22XL inst_cellmath__73_0_I20 (.Y(N130), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[12]));
AOI22XL inst_cellmath__73_0_I21 (.Y(N132), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[13]));
AOI22XL inst_cellmath__73_0_I22 (.Y(N134), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[14]));
AOI22XL inst_cellmath__73_0_I23 (.Y(N136), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[15]));
AOI22XL inst_cellmath__73_0_I24 (.Y(N138), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[16]));
AOI22XL inst_cellmath__73_0_I25 (.Y(N140), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[17]));
AOI22XL inst_cellmath__73_0_I26 (.Y(N142), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[18]));
AOI22XL inst_cellmath__73_0_I27 (.Y(N144), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[19]));
AOI22XL inst_cellmath__73_0_I28 (.Y(N146), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[20]));
AOI22XL inst_cellmath__73_0_I29 (.Y(N148), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[21]));
AOI22XL inst_cellmath__73_0_I30 (.Y(N150), .A0(inst_cellmath__73_0_in1), .A1(N224), .B0(N98), .B1(inst_cellmath__73_0_in4[22]));
OAI2BB1X1 inst_cellmath__73_0_I92 (.Y(inst_cellmath__73_0_out0[0]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[1]), .B0(N106));
OAI2BB1X1 inst_cellmath__73_0_I93 (.Y(inst_cellmath__73_0_out0[1]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[2]), .B0(N108));
OAI2BB1X1 inst_cellmath__73_0_I94 (.Y(inst_cellmath__73_0_out0[2]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[3]), .B0(N110));
OAI2BB1X1 inst_cellmath__73_0_I95 (.Y(inst_cellmath__73_0_out0[3]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[4]), .B0(N112));
OAI2BB1X1 inst_cellmath__73_0_I96 (.Y(inst_cellmath__73_0_out0[4]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[5]), .B0(N114));
OAI2BB1X1 inst_cellmath__73_0_I97 (.Y(inst_cellmath__73_0_out0[5]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[6]), .B0(N116));
OAI2BB1X1 inst_cellmath__73_0_I98 (.Y(inst_cellmath__73_0_out0[6]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[7]), .B0(N118));
OAI2BB1X1 inst_cellmath__73_0_I99 (.Y(inst_cellmath__73_0_out0[7]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[8]), .B0(N120));
OAI2BB1X1 inst_cellmath__73_0_I100 (.Y(inst_cellmath__73_0_out0[8]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[9]), .B0(N122));
OAI2BB1X1 inst_cellmath__73_0_I101 (.Y(inst_cellmath__73_0_out0[9]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[10]), .B0(N124));
OAI2BB1X1 inst_cellmath__73_0_I102 (.Y(inst_cellmath__73_0_out0[10]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[11]), .B0(N126));
OAI2BB1X1 inst_cellmath__73_0_I103 (.Y(inst_cellmath__73_0_out0[11]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[12]), .B0(N128));
OAI2BB1X1 inst_cellmath__73_0_I104 (.Y(inst_cellmath__73_0_out0[12]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[13]), .B0(N130));
OAI2BB1X1 inst_cellmath__73_0_I105 (.Y(inst_cellmath__73_0_out0[13]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[14]), .B0(N132));
OAI2BB1X1 inst_cellmath__73_0_I106 (.Y(inst_cellmath__73_0_out0[14]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[15]), .B0(N134));
OAI2BB1X1 inst_cellmath__73_0_I107 (.Y(inst_cellmath__73_0_out0[15]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[16]), .B0(N136));
OAI2BB1X1 inst_cellmath__73_0_I108 (.Y(inst_cellmath__73_0_out0[16]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[17]), .B0(N138));
OAI2BB1X1 inst_cellmath__73_0_I109 (.Y(inst_cellmath__73_0_out0[17]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[18]), .B0(N140));
OAI2BB1X1 inst_cellmath__73_0_I110 (.Y(inst_cellmath__73_0_out0[18]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[19]), .B0(N142));
OAI2BB1X1 inst_cellmath__73_0_I111 (.Y(inst_cellmath__73_0_out0[19]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[20]), .B0(N144));
OAI2BB1X1 inst_cellmath__73_0_I112 (.Y(inst_cellmath__73_0_out0[20]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[21]), .B0(N146));
OAI2BB1X1 inst_cellmath__73_0_I113 (.Y(inst_cellmath__73_0_out0[21]), .A0N(N226), .A1N(inst_cellmath__73_0_in2[22]), .B0(N148));
NAND2BXL inst_cellmath__73_0_I114 (.Y(inst_cellmath__73_0_out0[22]), .AN(N226), .B(N150));
endmodule

/* CADENCE  ubDzQgrarRw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




module fp_add_cynw_cm_float_add2_ieee_E8_M23_3_1( a_sign, a_exp, a_man, b_sign, b_exp, b_man, rm, x, aclk, astall );
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
cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw1925506066_bdw cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw2650604635_bdw_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .rm(rm), .x(x_wire));
reg [31:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
assign x = x_reg_0;
endmodule


