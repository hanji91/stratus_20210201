/*****************************************************************************
    Verilog Hierarchical Gate Level Netlist
    
    Configured at: 22:37:39 KST (+0900), Thursday 31 December 2020
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

module cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw105316586_bdw (
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
	,N679,N706,N710,N1692,N1693,N2854,N2855,N4308 
	,N4309;
cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I0 (.inst_cellmath__21_0_out0(inst_cellmath__39[25]), .inst_cellmath__21_0_in0(b_sign), .inst_cellmath__21_0_in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I1 (.inst_cellmath__9_0_out0(inst_cellmath__9), .inst_cellmath__9_0_in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw105316586_bdw cynw_cm_float_add2_ieee_I2 (.inst_cellmath__10__1__out0(inst_cellmath__10), .inst_cellmath__10__1__in0({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I3 (.inst_cellmath__12_0_out0(inst_cellmath__12), .inst_cellmath__12_0_in0(inst_cellmath__9), .inst_cellmath__12_0_in1(inst_cellmath__10));
cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I4 (.inst_cellmath__14_0_out0(inst_cellmath__14), .inst_cellmath__14_0_in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw105316586_bdw cynw_cm_float_add2_ieee_I5 (.inst_cellmath__15__3__out0(inst_cellmath__15), .inst_cellmath__15__3__in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I6 (.inst_cellmath__17_0_out0(inst_cellmath__17), .inst_cellmath__17_0_in0(inst_cellmath__15), .inst_cellmath__17_0_in1(inst_cellmath__14));
cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw105316586_bdw cynw_cm_float_add2_ieee_I7 (.inst_cellmath__24__5__out0({N547}), .inst_cellmath__24__5__in0(inst_cellmath__39[25]), .inst_cellmath__24__5__in1(inst_cellmath__17), .inst_cellmath__24__5__in2(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw105316586_bdw cynw_cm_float_add2_ieee_I8 (.inst_cellmath__13_1_out0(inst_cellmath__13), .inst_cellmath__13_1_in0(inst_cellmath__9), .inst_cellmath__13_1_in1(inst_cellmath__10));
cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I9 (.inst_cellmath__18_0_out0(inst_cellmath__18), .inst_cellmath__18_0_in0(inst_cellmath__15), .inst_cellmath__18_0_in1(inst_cellmath__14));
cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw105316586_bdw cynw_cm_float_add2_ieee_I10 (.inst_cellmath__63_1_out0(inst_cellmath__63), .inst_cellmath__63_1_in0({N547}), .inst_cellmath__63_1_in1(inst_cellmath__18), .inst_cellmath__63_1_in2(inst_cellmath__13));
cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw105316586_bdw cynw_cm_float_add2_ieee_I11 (.inst_cellmath__11__2__out0(inst_cellmath__11), .inst_cellmath__11__2__in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw105316586_bdw cynw_cm_float_add2_ieee_I12 (.inst_cellmath__16__4__out0(inst_cellmath__16), .inst_cellmath__16__4__in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw105316586_bdw cynw_cm_float_add2_ieee_I13 (.inst_cellmath__67__67__out0({N706}), .inst_cellmath__67__67__in0(inst_cellmath__16), .inst_cellmath__67__67__in1(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I14 (.inst_cellmath__6_0_out0(inst_cellmath__6), .inst_cellmath__6_0_in0({rm[2], rm[1], rm[0]}));
INVXL cynw_cm_float_add2_ieee_I15 (.Y(N556), .A(b_exp[0]));
INVXL cynw_cm_float_add2_ieee_I16 (.Y(N557), .A(b_exp[1]));
INVXL cynw_cm_float_add2_ieee_I17 (.Y(N558), .A(b_exp[2]));
INVX1 cynw_cm_float_add2_ieee_I18 (.Y(N559), .A(b_exp[3]));
INVXL cynw_cm_float_add2_ieee_I19 (.Y(N560), .A(b_exp[4]));
INVX1 cynw_cm_float_add2_ieee_I20 (.Y(N561), .A(b_exp[5]));
INVXL cynw_cm_float_add2_ieee_I21 (.Y(N562), .A(b_exp[6]));
INVXL cynw_cm_float_add2_ieee_I22 (.Y(N563), .A(b_exp[7]));
cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw105316586_bdw cynw_cm_float_add2_ieee_I23 (.inst_cellmath__28__8__out0({N573, N572, N571, N570, N569, N568, N567, N566, N565}), .inst_cellmath__28__8__out1({inst_cellmath__27[8], inst_cellmath__27[7], inst_cellmath__27[6], inst_cellmath__27[5], inst_cellmath__27[4], inst_cellmath__27[3], inst_cellmath__27[2], inst_cellmath__27[1], inst_cellmath__27[0]}), .inst_cellmath__28__8__in0({N563, N562, N561, N560, N559, N558, N557, N556}), .inst_cellmath__28__8__in1({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
INVXL cynw_cm_float_add2_ieee_I24 (.Y(inst_cellmath__28[8]), .A(N573));
cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I25 (.inst_cellmath__34_0_out0(inst_cellmath__34), .inst_cellmath__34_0_in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__34_0_in1({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw105316586_bdw cynw_cm_float_add2_ieee_I26 (.inst_cellmath__32__14__out0({N575}), .inst_cellmath__32__14__in0(inst_cellmath__34), .inst_cellmath__32__14__in1({inst_cellmath__28[8]}));
cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I27 (.inst_cellmath__32_0_out0(inst_cellmath__32), .inst_cellmath__32_0_in0({N575}), .inst_cellmath__32_0_in1({inst_cellmath__27[8]}));
CLKINVX1 cynw_cm_float_add2_ieee_I801 (.Y(N4308), .A(inst_cellmath__32));
INVX3 cynw_cm_float_add2_ieee_I802 (.Y(N4309), .A(N4308));
cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I28 (.inst_cellmath__48_0_out0(inst_cellmath__48), .inst_cellmath__48_0_in0(N4309), .inst_cellmath__48_0_in1(b_sign), .inst_cellmath__48_0_in2(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I29 (.inst_cellmath__35_0_out0({inst_cellmath__35[7], inst_cellmath__35[6], inst_cellmath__35[5], inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}), .inst_cellmath__35_0_in0({N572, N571, N570, N569, N568, N567, N566, N565}), .inst_cellmath__35_0_in1({inst_cellmath__27[8], inst_cellmath__27[7], inst_cellmath__27[6], inst_cellmath__27[5], inst_cellmath__27[4], inst_cellmath__27[3], inst_cellmath__27[2], inst_cellmath__27[1], inst_cellmath__27[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I30 (.inst_cellmath__30_0_out0(inst_cellmath__30), .inst_cellmath__30_0_in0({inst_cellmath__35[7], inst_cellmath__35[6], inst_cellmath__35[5], inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I31 (.inst_cellmath__31_0_out0(inst_cellmath__31), .inst_cellmath__31_0_in0(inst_cellmath__16), .inst_cellmath__31_0_in1(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw105316586_bdw cynw_cm_float_add2_ieee_I32 (.inst_cellmath__33__18__out0({N599}), .inst_cellmath__33__18__in0(inst_cellmath__31), .inst_cellmath__33__18__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw105316586_bdw cynw_cm_float_add2_ieee_I33 (.inst_cellmath__36__15__out0({inst_cellmath__36[48], inst_cellmath__36[47], inst_cellmath__36[46], inst_cellmath__36[45], inst_cellmath__36[44], inst_cellmath__36[43], inst_cellmath__36[42], inst_cellmath__36[41], inst_cellmath__36[40], inst_cellmath__36[39], inst_cellmath__36[38], inst_cellmath__36[37], inst_cellmath__36[36], inst_cellmath__36[35], inst_cellmath__36[34], inst_cellmath__36[33], inst_cellmath__36[32], inst_cellmath__36[31], inst_cellmath__36[30], inst_cellmath__36[29], inst_cellmath__36[28], inst_cellmath__36[27], inst_cellmath__36[26]}), .inst_cellmath__36__15__in0(inst_cellmath__32), .inst_cellmath__36__15__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__36__15__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I34 (.inst_cellmath__37_0_out0({inst_cellmath__37[49], inst_cellmath__37[48], inst_cellmath__37[47], inst_cellmath__37[46], inst_cellmath__37[45], inst_cellmath__37[44], inst_cellmath__37[43], inst_cellmath__37[42], inst_cellmath__37[41], inst_cellmath__37[40], inst_cellmath__37[39], inst_cellmath__37[38], inst_cellmath__37[37], inst_cellmath__37[36], inst_cellmath__37[35], inst_cellmath__37[34], inst_cellmath__37[33], inst_cellmath__37[32], inst_cellmath__37[31], inst_cellmath__37[30], inst_cellmath__37[29], inst_cellmath__37[28], inst_cellmath__37[27], inst_cellmath__37[26], inst_cellmath__37[25], inst_cellmath__37[24], inst_cellmath__37[23], inst_cellmath__37[22], inst_cellmath__37[21], inst_cellmath__37[20], inst_cellmath__37[19], inst_cellmath__37[18], inst_cellmath__37[17], inst_cellmath__37[16], inst_cellmath__37[15], inst_cellmath__37[14], inst_cellmath__37[13], inst_cellmath__37[12], inst_cellmath__37[11], inst_cellmath__37[10], inst_cellmath__37[9], inst_cellmath__37[8], inst_cellmath__37[7], inst_cellmath__37[6], inst_cellmath__37[5], inst_cellmath__37[4], inst_cellmath__37[3], inst_cellmath__37[2], inst_cellmath__37[1], inst_cellmath__37[0]}), .inst_cellmath__37_0_in0({inst_cellmath__36[48], inst_cellmath__36[47], inst_cellmath__36[46], inst_cellmath__36[45], inst_cellmath__36[44], inst_cellmath__36[43], inst_cellmath__36[42], inst_cellmath__36[41], inst_cellmath__36[40], inst_cellmath__36[39], inst_cellmath__36[38], inst_cellmath__36[37], inst_cellmath__36[36], inst_cellmath__36[35], inst_cellmath__36[34], inst_cellmath__36[33], inst_cellmath__36[32], inst_cellmath__36[31], inst_cellmath__36[30], inst_cellmath__36[29], inst_cellmath__36[28], inst_cellmath__36[27], inst_cellmath__36[26]}), .inst_cellmath__37_0_in1({inst_cellmath__35[4], inst_cellmath__35[3], inst_cellmath__35[2], inst_cellmath__35[1], inst_cellmath__35[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw105316586_bdw cynw_cm_float_add2_ieee_I35 (.inst_cellmath__33_49_24_out0({inst_cellmath__33[49], inst_cellmath__33[48], inst_cellmath__33[47], inst_cellmath__33[46], inst_cellmath__33[45], inst_cellmath__33[44], inst_cellmath__33[43], inst_cellmath__33[42], inst_cellmath__33[41], inst_cellmath__33[40], inst_cellmath__33[39], inst_cellmath__33[38], inst_cellmath__33[37], inst_cellmath__33[36], inst_cellmath__33[35], inst_cellmath__33[34], inst_cellmath__33[33], inst_cellmath__33[32], inst_cellmath__33[31], inst_cellmath__33[30], inst_cellmath__33[29], inst_cellmath__33[28], inst_cellmath__33[27], inst_cellmath__33[26], inst_cellmath__33[25], inst_cellmath__33[24]}), .inst_cellmath__33_49_24_in0({inst_cellmath__37[49], inst_cellmath__37[48], inst_cellmath__37[47], inst_cellmath__37[46], inst_cellmath__37[45], inst_cellmath__37[44], inst_cellmath__37[43], inst_cellmath__37[42], inst_cellmath__37[41], inst_cellmath__37[40], inst_cellmath__37[39], inst_cellmath__37[38], inst_cellmath__37[37], inst_cellmath__37[36], inst_cellmath__37[35], inst_cellmath__37[34], inst_cellmath__37[33], inst_cellmath__37[32], inst_cellmath__37[31], inst_cellmath__37[30], inst_cellmath__37[29], inst_cellmath__37[28], inst_cellmath__37[27], inst_cellmath__37[26], inst_cellmath__37[25], inst_cellmath__37[24]}), .inst_cellmath__33_49_24_in1({N599}));
cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw105316586_bdw cynw_cm_float_add2_ieee_I36 (.inst_cellmath__42__22__out0({N625}), .inst_cellmath__42__22__in0({inst_cellmath__37[23], inst_cellmath__37[22], inst_cellmath__37[21], inst_cellmath__37[20], inst_cellmath__37[19], inst_cellmath__37[18], inst_cellmath__37[17], inst_cellmath__37[16], inst_cellmath__37[15], inst_cellmath__37[14], inst_cellmath__37[13], inst_cellmath__37[12], inst_cellmath__37[11], inst_cellmath__37[10], inst_cellmath__37[9], inst_cellmath__37[8], inst_cellmath__37[7], inst_cellmath__37[6], inst_cellmath__37[5], inst_cellmath__37[4], inst_cellmath__37[3], inst_cellmath__37[2], inst_cellmath__37[1], inst_cellmath__37[0]}), .inst_cellmath__42__22__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I37 (.inst_cellmath__42_0_out0(inst_cellmath__42), .inst_cellmath__42_0_in0({N625}), .inst_cellmath__42_0_in1(inst_cellmath__31));
INVXL cynw_cm_float_add2_ieee_I204 (.Y(N1692), .A(inst_cellmath__42));
INVXL cynw_cm_float_add2_ieee_I205 (.Y(N1693), .A(N1692));
cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I38 (.inst_cellmath__44_0_out0(inst_cellmath__44), .inst_cellmath__44_0_in0(inst_cellmath__42), .inst_cellmath__44_0_in1({inst_cellmath__33[24]}), .inst_cellmath__44_0_in2(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__40_bdw105316586_bdw cynw_cm_float_add2_ieee_I39 (.inst_cellmath__40_out0({N677, N676, N675, N674, N673, N672, N671, N670, N669, N668, N667, N666, N665, N664, N663, N662, N661, N660, N659, N658, N657, N656, N655, N679}), .inst_cellmath__40_in0(N4309), .inst_cellmath__40_in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__40_in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw105316586_bdw cynw_cm_float_add2_ieee_I40 (.inst_cellmath__39__19__2mx_out0({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__39__19__2mx_in0({inst_cellmath__33[49], inst_cellmath__33[48], inst_cellmath__33[47], inst_cellmath__33[46], inst_cellmath__33[45], inst_cellmath__33[44], inst_cellmath__33[43], inst_cellmath__33[42], inst_cellmath__33[41], inst_cellmath__33[40], inst_cellmath__33[39], inst_cellmath__33[38], inst_cellmath__33[37], inst_cellmath__33[36], inst_cellmath__33[35], inst_cellmath__33[34], inst_cellmath__33[33], inst_cellmath__33[32], inst_cellmath__33[31], inst_cellmath__33[30], inst_cellmath__33[29], inst_cellmath__33[28], inst_cellmath__33[27], inst_cellmath__33[26], inst_cellmath__33[25]}), .inst_cellmath__39__19__2mx_in1(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I41 (.inst_cellmath__45_0_out0({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}), .inst_cellmath__45_0_in0(inst_cellmath__44), .inst_cellmath__45_0_in1({N677, N676, N675, N674, N673, N672, N671, N670, N669, N668, N667, N666, N665, N664, N663, N662, N661, N660, N659, N658, N657, N656, N655}), .inst_cellmath__45_0_in2({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__45_0_in3(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I42 (.inst_cellmath__49_0_out0({inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__49_0_in0({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw105316586_bdw cynw_cm_float_add2_ieee_I43 (.inst_cellmath__67__66__out0({N647}), .inst_cellmath__67__66__in0({inst_cellmath__49[5]}), .inst_cellmath__67__66__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw105316586_bdw cynw_cm_float_add2_ieee_I44 (.inst_cellmath__67__65__out0({N646}), .inst_cellmath__67__65__in0({inst_cellmath__49[5]}), .inst_cellmath__67__65__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw105316586_bdw cynw_cm_float_add2_ieee_I45 (.inst_cellmath__66__59__out0({N644}), .inst_cellmath__66__59__in0(b_sign), .inst_cellmath__66__59__in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw105316586_bdw cynw_cm_float_add2_ieee_I46 (.inst_cellmath__66__58__out0({N643}), .inst_cellmath__66__58__in0(b_sign), .inst_cellmath__66__58__in1(a_sign));
cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw105316586_bdw cynw_cm_float_add2_ieee_I47 (.inst_cellmath__66__56__out0({N645}), .inst_cellmath__66__56__in0({N644}), .inst_cellmath__66__56__in1({N643}), .inst_cellmath__66__56__in2(inst_cellmath__6));
cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I48 (.inst_cellmath__66_0_out0(inst_cellmath__66), .inst_cellmath__66_0_in0({N645}), .inst_cellmath__66_0_in1(inst_cellmath__16), .inst_cellmath__66_0_in2(inst_cellmath__11));
cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw105316586_bdw cynw_cm_float_add2_ieee_I49 (.inst_cellmath__64__48__2WWMM_out0({inst_cellmath__64[21], inst_cellmath__64[20], inst_cellmath__64[19], inst_cellmath__64[18], inst_cellmath__64[17], inst_cellmath__64[16], inst_cellmath__64[15], inst_cellmath__64[14], inst_cellmath__64[13], inst_cellmath__64[12], inst_cellmath__64[11], inst_cellmath__64[10], inst_cellmath__64[9], inst_cellmath__64[8], inst_cellmath__64[7], inst_cellmath__64[6], inst_cellmath__64[5], inst_cellmath__64[4], inst_cellmath__64[3], inst_cellmath__64[2], inst_cellmath__64[1], inst_cellmath__64[0], N710}), .inst_cellmath__64__48__2WWMM_in0(inst_cellmath__18), .inst_cellmath__64__48__2WWMM_in1(inst_cellmath__13), .inst_cellmath__64__48__2WWMM_in2(b_sign), .inst_cellmath__64__48__2WWMM_in3({b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__64__48__2WWMM_in4(a_sign), .inst_cellmath__64__48__2WWMM_in5({a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I50 (.inst_cellmath__67_0_out0(x[31]), .inst_cellmath__67_0_in0({N706}), .inst_cellmath__67_0_in1({N647}), .inst_cellmath__67_0_in2({N646}), .inst_cellmath__67_0_in3(inst_cellmath__66), .inst_cellmath__67_0_in4({N710}), .inst_cellmath__67_0_in5(inst_cellmath__63), .inst_cellmath__67_0_in6(inst_cellmath__6));
cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I51 (.inst_cellmath__50_0_out0({inst_cellmath__50[24], inst_cellmath__50[23], inst_cellmath__50[22], inst_cellmath__50[21], inst_cellmath__50[20], inst_cellmath__50[19], inst_cellmath__50[18], inst_cellmath__50[17], inst_cellmath__50[16], inst_cellmath__50[15], inst_cellmath__50[14], inst_cellmath__50[13], inst_cellmath__50[12], inst_cellmath__50[11], inst_cellmath__50[10], inst_cellmath__50[9], inst_cellmath__50[8], inst_cellmath__50[7], inst_cellmath__50[6], inst_cellmath__50[5], inst_cellmath__50[4], inst_cellmath__50[3], inst_cellmath__50[2], inst_cellmath__50[1], inst_cellmath__50[0]}), .inst_cellmath__50_0_in0({inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__50_0_in1({inst_cellmath__45[25], inst_cellmath__45[24], inst_cellmath__45[23], inst_cellmath__45[22], inst_cellmath__45[21], inst_cellmath__45[20], inst_cellmath__45[19], inst_cellmath__45[18], inst_cellmath__45[17], inst_cellmath__45[16], inst_cellmath__45[15], inst_cellmath__45[14], inst_cellmath__45[13], inst_cellmath__45[12], inst_cellmath__45[11], inst_cellmath__45[10], inst_cellmath__45[9], inst_cellmath__45[8], inst_cellmath__45[7], inst_cellmath__45[6], inst_cellmath__45[5], inst_cellmath__45[4], inst_cellmath__45[3], inst_cellmath__45[2], inst_cellmath__45[1], inst_cellmath__45[0]}));
INVXL cynw_cm_float_add2_ieee_I499 (.Y(N2854), .A(inst_cellmath__50[2]));
INVXL cynw_cm_float_add2_ieee_I500 (.Y(N2855), .A(N2854));
cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw105316586_bdw cynw_cm_float_add2_ieee_I52 (.inst_cellmath__43__26__out0({N626}), .inst_cellmath__43__26__in0(N1693), .inst_cellmath__43__26__in1({inst_cellmath__33[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw105316586_bdw cynw_cm_float_add2_ieee_I53 (.inst_cellmath__43__25__out0({N627}), .inst_cellmath__43__25__in0({N626}), .inst_cellmath__43__25__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw105316586_bdw cynw_cm_float_add2_ieee_I54 (.inst_cellmath__43__28__out0({N628}), .inst_cellmath__43__28__in0(N1693), .inst_cellmath__43__28__in1({inst_cellmath__33[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw105316586_bdw cynw_cm_float_add2_ieee_I55 (.inst_cellmath__43__27__out0({N629}), .inst_cellmath__43__27__in0({N628}), .inst_cellmath__43__27__in1(inst_cellmath__30));
cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw105316586_bdw cynw_cm_float_add2_ieee_I56 (.inst_cellmath__43__24__out0({N630}), .inst_cellmath__43__24__in0({N629}), .inst_cellmath__43__24__in1({N627}));
cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I57 (.inst_cellmath__43_0_out0(inst_cellmath__43), .inst_cellmath__43_0_in0({N630}), .inst_cellmath__43_0_in1({inst_cellmath__33[24]}), .inst_cellmath__43_0_in2(inst_cellmath__39[25]));
cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I58 (.inst_cellmath__53_0_out0(inst_cellmath__53), .inst_cellmath__53_0_in0({inst_cellmath__50[1]}), .inst_cellmath__53_0_in1({inst_cellmath__49[1]}), .inst_cellmath__53_0_in2(inst_cellmath__43));
cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I59 (.inst_cellmath__5_0_out0(inst_cellmath__5), .inst_cellmath__5_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw105316586_bdw cynw_cm_float_add2_ieee_I60 (.inst_cellmath__55__39__out0({N635}), .inst_cellmath__55__39__in0(inst_cellmath__5), .inst_cellmath__55__39__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw105316586_bdw cynw_cm_float_add2_ieee_I61 (.inst_cellmath__55__38__out0({N634}), .inst_cellmath__55__38__in0(inst_cellmath__6), .inst_cellmath__55__38__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I62 (.inst_cellmath__8_0_out0(inst_cellmath__8), .inst_cellmath__8_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I63 (.inst_cellmath__4_0_out0(inst_cellmath__4), .inst_cellmath__4_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw105316586_bdw cynw_cm_float_add2_ieee_I64 (.inst_cellmath__54__33__out0({N631}), .inst_cellmath__54__33__in0({inst_cellmath__50[0]}), .inst_cellmath__54__33__in1(inst_cellmath__43), .inst_cellmath__54__33__in2(N1693));
cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I65 (.inst_cellmath__54_0_out0(inst_cellmath__54), .inst_cellmath__54_0_in0({N631}), .inst_cellmath__54_0_in1({inst_cellmath__49[1]}), .inst_cellmath__54_0_in2(N1693));
cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw105316586_bdw cynw_cm_float_add2_ieee_I66 (.inst_cellmath__55__37__out0({N632}), .inst_cellmath__55__37__in0(inst_cellmath__54), .inst_cellmath__55__37__in1({inst_cellmath__50[2]}));
cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw105316586_bdw cynw_cm_float_add2_ieee_I67 (.inst_cellmath__55__36__out0({N633}), .inst_cellmath__55__36__in0({N632}), .inst_cellmath__55__36__in1(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw105316586_bdw cynw_cm_float_add2_ieee_I68 (.inst_cellmath__55__35__out0({N636}), .inst_cellmath__55__35__in0(inst_cellmath__8), .inst_cellmath__55__35__in1({N635}), .inst_cellmath__55__35__in2({N634}), .inst_cellmath__55__35__in3({N633}));
cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw105316586_bdw cynw_cm_float_add2_ieee_I69 (.inst_cellmath__55__34__out0({N637}), .inst_cellmath__55__34__in0({N636}), .inst_cellmath__55__34__in1(inst_cellmath__53));
cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw105316586_bdw cynw_cm_float_add2_ieee_I70 (.inst_cellmath__55__41__out0({N638}), .inst_cellmath__55__41__in0({N635}), .inst_cellmath__55__41__in1({N634}));
cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw105316586_bdw cynw_cm_float_add2_ieee_I71 (.inst_cellmath__55__40__out0({N639}), .inst_cellmath__55__40__in0({N638}), .inst_cellmath__55__40__in1(inst_cellmath__54));
cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I72 (.inst_cellmath__55_0_out0(inst_cellmath__55), .inst_cellmath__55_0_in0({N639}), .inst_cellmath__55_0_in1({N637}));
cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I73 (.inst_cellmath__57_0_out0({inst_cellmath__57[23], inst_cellmath__57[22], inst_cellmath__57[21], inst_cellmath__57[20], inst_cellmath__57[19], inst_cellmath__57[18], inst_cellmath__57[17], inst_cellmath__57[16], inst_cellmath__57[15], inst_cellmath__57[14], inst_cellmath__57[13], inst_cellmath__57[12], inst_cellmath__57[11], inst_cellmath__57[10], inst_cellmath__57[9], inst_cellmath__57[8], inst_cellmath__57[7], inst_cellmath__57[6], inst_cellmath__57[5], inst_cellmath__57[4], inst_cellmath__57[3], inst_cellmath__57[2], inst_cellmath__57[1], inst_cellmath__57[0]}), .inst_cellmath__57_0_in0(inst_cellmath__55), .inst_cellmath__57_0_in1({inst_cellmath__50[24], inst_cellmath__50[23], inst_cellmath__50[22], inst_cellmath__50[21], inst_cellmath__50[20], inst_cellmath__50[19], inst_cellmath__50[18], inst_cellmath__50[17], inst_cellmath__50[16], inst_cellmath__50[15], inst_cellmath__50[14], inst_cellmath__50[13], inst_cellmath__50[12], inst_cellmath__50[11], inst_cellmath__50[10], inst_cellmath__50[9], inst_cellmath__50[8], inst_cellmath__50[7], inst_cellmath__50[6], inst_cellmath__50[5], inst_cellmath__50[4], inst_cellmath__50[3], N2855}));
cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw105316586_bdw cynw_cm_float_add2_ieee_I74 (.inst_cellmath__62__46__out0({N641}), .inst_cellmath__62__46__in0({inst_cellmath__57[23]}), .inst_cellmath__62__46__in1({inst_cellmath__45[24]}));
cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw105316586_bdw cynw_cm_float_add2_ieee_I75 (.inst_cellmath__62__45__out0({N642}), .inst_cellmath__62__45__in0({N641}), .inst_cellmath__62__45__in1({inst_cellmath__45[25]}));
INVXL cynw_cm_float_add2_ieee_I76 (.Y(N574), .A(inst_cellmath__28[8]));
cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I77 (.inst_cellmath__29_0_out0({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}), .inst_cellmath__29_0_in0({N574}), .inst_cellmath__29_0_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}), .inst_cellmath__29_0_in2({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I78 (.inst_cellmath__62_0_out0(inst_cellmath__62), .inst_cellmath__62_0_in0({N642}), .inst_cellmath__62_0_in1({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I79 (.inst_cellmath__59_0_out0({inst_cellmath__59[9], inst_cellmath__59[8], inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}), .inst_cellmath__59_0_in0({inst_cellmath__57[23]}), .inst_cellmath__59_0_in1({inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__59_0_in2({inst_cellmath__29[7], inst_cellmath__29[6], inst_cellmath__29[5], inst_cellmath__29[4], inst_cellmath__29[3], inst_cellmath__29[2], inst_cellmath__29[1], inst_cellmath__29[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw105316586_bdw cynw_cm_float_add2_ieee_I80 (.inst_cellmath__60__44__out0({N640}), .inst_cellmath__60__44__in0({inst_cellmath__59[8], inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw105316586_bdw cynw_cm_float_add2_ieee_I81 (.inst_cellmath__71_1_out0(inst_cellmath__71), .inst_cellmath__71_1_in0({N706}), .inst_cellmath__71_1_in1(inst_cellmath__63), .inst_cellmath__71_1_in2(inst_cellmath__62), .inst_cellmath__71_1_in3({N640}), .inst_cellmath__71_1_in4({inst_cellmath__59[9]}), .inst_cellmath__71_1_in5({inst_cellmath__49[5]}), .inst_cellmath__71_1_in6(inst_cellmath__17), .inst_cellmath__71_1_in7(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw105316586_bdw cynw_cm_float_add2_ieee_I82 (.inst_cellmath__68__69__out0({N650}), .inst_cellmath__68__69__in0(inst_cellmath__8), .inst_cellmath__68__69__in1({N635}), .inst_cellmath__68__69__in2({N634}), .inst_cellmath__68__69__in3(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw105316586_bdw cynw_cm_float_add2_ieee_I83 (.inst_cellmath__68__68__out0({N651}), .inst_cellmath__68__68__in0({N650}), .inst_cellmath__68__68__in1(inst_cellmath__62));
cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I84 (.inst_cellmath__68_0_out0({inst_cellmath__68[0]}), .inst_cellmath__68_0_in0({N651}), .inst_cellmath__68_0_in1(inst_cellmath__63), .inst_cellmath__68_0_in2(inst_cellmath__17), .inst_cellmath__68_0_in3(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw105316586_bdw cynw_cm_float_add2_ieee_I85 (.inst_cellmath__68__0__out0({inst_cellmath__68[7]}), .inst_cellmath__68__0__in0(inst_cellmath__63), .inst_cellmath__68__0__in1(inst_cellmath__62), .inst_cellmath__68__0__in2(inst_cellmath__17), .inst_cellmath__68__0__in3(inst_cellmath__12));
cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I86 (.inst_cellmath__72_0_out0({x[30], x[29], x[28], x[27], x[26], x[25], x[24], x[23]}), .inst_cellmath__72_0_in0(inst_cellmath__71), .inst_cellmath__72_0_in1({inst_cellmath__68[7]}), .inst_cellmath__72_0_in2({inst_cellmath__68[0]}), .inst_cellmath__72_0_in3({inst_cellmath__59[7], inst_cellmath__59[6], inst_cellmath__59[5], inst_cellmath__59[4], inst_cellmath__59[3], inst_cellmath__59[2], inst_cellmath__59[1], inst_cellmath__59[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I87 (.inst_cellmath__7_0_out0(inst_cellmath__7), .inst_cellmath__7_0_in0({rm[2], rm[1], rm[0]}));
cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw105316586_bdw cynw_cm_float_add2_ieee_I88 (.inst_cellmath__70__74__out0({N652}), .inst_cellmath__70__74__in0(inst_cellmath__5), .inst_cellmath__70__74__in1(inst_cellmath__48));
cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw105316586_bdw cynw_cm_float_add2_ieee_I89 (.inst_cellmath__70__73__out0({N653}), .inst_cellmath__70__73__in0({N652}), .inst_cellmath__70__73__in1(inst_cellmath__7));
cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I90 (.inst_cellmath__70_0_out0(inst_cellmath__70), .inst_cellmath__70_0_in0(inst_cellmath__8), .inst_cellmath__70_0_in1({N653}), .inst_cellmath__70_0_in2(inst_cellmath__62), .inst_cellmath__70_0_in3(inst_cellmath__4));
cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw105316586_bdw cynw_cm_float_add2_ieee_I91 (.inst_cellmath__73_0_out0({x[22], x[21], x[20], x[19], x[18], x[17], x[16], x[15], x[14], x[13], x[12], x[11], x[10], x[9], x[8], x[7], x[6], x[5], x[4], x[3], x[2], x[1], x[0]}), .inst_cellmath__73_0_in0(inst_cellmath__71), .inst_cellmath__73_0_in1(inst_cellmath__70), .inst_cellmath__73_0_in2({inst_cellmath__64[21], inst_cellmath__64[20], inst_cellmath__64[19], inst_cellmath__64[18], inst_cellmath__64[17], inst_cellmath__64[16], inst_cellmath__64[15], inst_cellmath__64[14], inst_cellmath__64[13], inst_cellmath__64[12], inst_cellmath__64[11], inst_cellmath__64[10], inst_cellmath__64[9], inst_cellmath__64[8], inst_cellmath__64[7], inst_cellmath__64[6], inst_cellmath__64[5], inst_cellmath__64[4], inst_cellmath__64[3], inst_cellmath__64[2], inst_cellmath__64[1], inst_cellmath__64[0]}), .inst_cellmath__73_0_in3(inst_cellmath__63), .inst_cellmath__73_0_in4({inst_cellmath__57[22], inst_cellmath__57[21], inst_cellmath__57[20], inst_cellmath__57[19], inst_cellmath__57[18], inst_cellmath__57[17], inst_cellmath__57[16], inst_cellmath__57[15], inst_cellmath__57[14], inst_cellmath__57[13], inst_cellmath__57[12], inst_cellmath__57[11], inst_cellmath__57[10], inst_cellmath__57[9], inst_cellmath__57[8], inst_cellmath__57[7], inst_cellmath__57[6], inst_cellmath__57[5], inst_cellmath__57[4], inst_cellmath__57[3], inst_cellmath__57[2], inst_cellmath__57[1], inst_cellmath__57[0]}));
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

module cynw_cm_float_add2_ieee_inst_cellmath__21_0_bdw105316586_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;
CLKXOR2X1 inst_cellmath__21_0_I0 (.Y(inst_cellmath__21_0_out0), .A(inst_cellmath__21_0_in1), .B(inst_cellmath__21_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__9_0_bdw105316586_bdw (
	inst_cellmath__9_0_out0,
	inst_cellmath__9_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__9_0_out0;
input [7:0] inst_cellmath__9_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2X1 inst_cellmath__9_0_I0 (.Y(N11), .A(inst_cellmath__9_0_in0[0]), .B(inst_cellmath__9_0_in0[1]));
NAND2XL inst_cellmath__9_0_I1 (.Y(N12), .A(inst_cellmath__9_0_in0[7]), .B(inst_cellmath__9_0_in0[6]));
NAND2XL inst_cellmath__9_0_I2 (.Y(N13), .A(inst_cellmath__9_0_in0[5]), .B(inst_cellmath__9_0_in0[4]));
NAND2XL inst_cellmath__9_0_I3 (.Y(N14), .A(inst_cellmath__9_0_in0[3]), .B(inst_cellmath__9_0_in0[2]));
NOR2XL inst_cellmath__9_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__9_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__9_0_I6 (.Y(inst_cellmath__9_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__10__1__bdw105316586_bdw (
	inst_cellmath__10__1__out0,
	inst_cellmath__10__1__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__10__1__out0;
input [22:0] inst_cellmath__10__1__in0;
wire N26,N27,N28,N29,N30,N31,N32 
	,N33,N34,N35,N36,N37,N38,N39,N40 
	,N41,N42,N43,N44,N45,N47,N48;
NOR2XL inst_cellmath__10__1__I0 (.Y(N26), .A(inst_cellmath__10__1__in0[0]), .B(inst_cellmath__10__1__in0[1]));
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
INVXL inst_cellmath__10__1__I11 (.Y(N37), .A(inst_cellmath__10__1__in0[2]));
NAND2XL inst_cellmath__10__1__I12 (.Y(N38), .A(N37), .B(N26));
NAND2XL inst_cellmath__10__1__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__10__1__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__10__1__I15 (.Y(N41), .A(N31), .B(N32));
NAND2XL inst_cellmath__10__1__I16 (.Y(N42), .A(N33), .B(N34));
NAND2XL inst_cellmath__10__1__I17 (.Y(N43), .A(N35), .B(N36));
NOR2XL inst_cellmath__10__1__I18 (.Y(N44), .A(N38), .B(N39));
NOR2XL inst_cellmath__10__1__I19 (.Y(N45), .A(N40), .B(N41));
NAND2XL inst_cellmath__10__1__I21 (.Y(N47), .A(N44), .B(N45));
OR2XL inst_cellmath__10__1__I169 (.Y(N48), .A(N42), .B(N43));
NOR2XL inst_cellmath__10__1__I23 (.Y(inst_cellmath__10__1__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__12_0_bdw105316586_bdw (
	inst_cellmath__12_0_out0,
	inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__12_0_out0;
input  inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1;
AND2XL inst_cellmath__12_0_I0 (.Y(inst_cellmath__12_0_out0), .A(inst_cellmath__12_0_in0), .B(inst_cellmath__12_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__14_0_bdw105316586_bdw (
	inst_cellmath__14_0_out0,
	inst_cellmath__14_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__14_0_out0;
input [7:0] inst_cellmath__14_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2X1 inst_cellmath__14_0_I0 (.Y(N11), .A(inst_cellmath__14_0_in0[0]), .B(inst_cellmath__14_0_in0[1]));
NAND2XL inst_cellmath__14_0_I1 (.Y(N12), .A(inst_cellmath__14_0_in0[7]), .B(inst_cellmath__14_0_in0[6]));
NAND2XL inst_cellmath__14_0_I2 (.Y(N13), .A(inst_cellmath__14_0_in0[5]), .B(inst_cellmath__14_0_in0[4]));
NAND2XL inst_cellmath__14_0_I3 (.Y(N14), .A(inst_cellmath__14_0_in0[3]), .B(inst_cellmath__14_0_in0[2]));
NOR2XL inst_cellmath__14_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__14_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__14_0_I6 (.Y(inst_cellmath__14_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__15__3__bdw105316586_bdw (
	inst_cellmath__15__3__out0,
	inst_cellmath__15__3__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__15__3__out0;
input [22:0] inst_cellmath__15__3__in0;
wire N26,N27,N28,N29,N30,N31,N32 
	,N33,N34,N35,N36,N37,N38,N39,N40 
	,N41,N42,N43,N44,N45,N47,N48;
NOR2XL inst_cellmath__15__3__I0 (.Y(N26), .A(inst_cellmath__15__3__in0[0]), .B(inst_cellmath__15__3__in0[1]));
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
INVXL inst_cellmath__15__3__I11 (.Y(N37), .A(inst_cellmath__15__3__in0[2]));
NAND2XL inst_cellmath__15__3__I12 (.Y(N38), .A(N37), .B(N26));
NAND2XL inst_cellmath__15__3__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__15__3__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__15__3__I15 (.Y(N41), .A(N31), .B(N32));
NAND2XL inst_cellmath__15__3__I16 (.Y(N42), .A(N33), .B(N34));
NAND2XL inst_cellmath__15__3__I17 (.Y(N43), .A(N35), .B(N36));
NOR2XL inst_cellmath__15__3__I18 (.Y(N44), .A(N38), .B(N39));
NOR2XL inst_cellmath__15__3__I19 (.Y(N45), .A(N40), .B(N41));
NAND2XL inst_cellmath__15__3__I21 (.Y(N47), .A(N44), .B(N45));
OR2XL inst_cellmath__15__3__I169 (.Y(N48), .A(N42), .B(N43));
NOR2XL inst_cellmath__15__3__I23 (.Y(inst_cellmath__15__3__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__17_0_bdw105316586_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__17_0_out0;
input  inst_cellmath__17_0_in0,
	inst_cellmath__17_0_in1;
AND2X1 inst_cellmath__17_0_I0 (.Y(inst_cellmath__17_0_out0), .A(inst_cellmath__17_0_in0), .B(inst_cellmath__17_0_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__24__5__bdw105316586_bdw (
	inst_cellmath__24__5__out0,
	inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__24__5__out0;
input  inst_cellmath__24__5__in0,
	inst_cellmath__24__5__in1,
	inst_cellmath__24__5__in2;
wire N7;
AND2XL inst_cellmath__24__5__I0 (.Y(N7), .A(inst_cellmath__24__5__in1), .B(inst_cellmath__24__5__in2));
AND2XL inst_cellmath__24__5__I2 (.Y(inst_cellmath__24__5__out0[0]), .A(N7), .B(inst_cellmath__24__5__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__13_1_bdw105316586_bdw (
	inst_cellmath__13_1_out0,
	inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__13_1_out0;
input  inst_cellmath__13_1_in0,
	inst_cellmath__13_1_in1;
wire N5;
INVXL inst_cellmath__13_1_I0 (.Y(N5), .A(inst_cellmath__13_1_in0));
NOR2X2 inst_cellmath__13_1_I1 (.Y(inst_cellmath__13_1_out0), .A(N5), .B(inst_cellmath__13_1_in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__18_0_bdw105316586_bdw (
	inst_cellmath__18_0_out0,
	inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__18_0_out0;
input  inst_cellmath__18_0_in0,
	inst_cellmath__18_0_in1;
wire N5;
INVXL inst_cellmath__18_0_I0 (.Y(N5), .A(inst_cellmath__18_0_in1));
NOR2X2 inst_cellmath__18_0_I1 (.Y(inst_cellmath__18_0_out0), .A(N5), .B(inst_cellmath__18_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__63_1_bdw105316586_bdw (
	inst_cellmath__63_1_out0,
	inst_cellmath__63_1_in0,
	inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__63_1_out0;
input [0:0] inst_cellmath__63_1_in0;
input  inst_cellmath__63_1_in1,
	inst_cellmath__63_1_in2;
wire N7,N25;
OR2XL inst_cellmath__63_1_I0 (.Y(N7), .A(inst_cellmath__63_1_in1), .B(inst_cellmath__63_1_in2));
NOR2X2 or2_A_I10 (.Y(N25), .A(N7), .B(inst_cellmath__63_1_in0[0]));
INVX2 or2_A_I11 (.Y(inst_cellmath__63_1_out0), .A(N25));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__11__2__bdw105316586_bdw (
	inst_cellmath__11__2__out0,
	inst_cellmath__11__2__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__11__2__out0;
input [7:0] inst_cellmath__11__2__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2X1 inst_cellmath__11__2__I0 (.Y(N11), .A(inst_cellmath__11__2__in0[0]), .B(inst_cellmath__11__2__in0[1]));
NOR2X1 inst_cellmath__11__2__I1 (.Y(N12), .A(inst_cellmath__11__2__in0[7]), .B(inst_cellmath__11__2__in0[6]));
NOR2XL inst_cellmath__11__2__I2 (.Y(N13), .A(inst_cellmath__11__2__in0[5]), .B(inst_cellmath__11__2__in0[4]));
NOR2XL inst_cellmath__11__2__I3 (.Y(N14), .A(inst_cellmath__11__2__in0[3]), .B(inst_cellmath__11__2__in0[2]));
NAND2X1 inst_cellmath__11__2__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__11__2__I5 (.Y(N16), .A(N13), .B(N14));
NOR2X1 inst_cellmath__11__2__I6 (.Y(inst_cellmath__11__2__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__16__4__bdw105316586_bdw (
	inst_cellmath__16__4__out0,
	inst_cellmath__16__4__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__16__4__out0;
input [7:0] inst_cellmath__16__4__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2X1 inst_cellmath__16__4__I0 (.Y(N11), .A(inst_cellmath__16__4__in0[0]), .B(inst_cellmath__16__4__in0[1]));
NOR2X1 inst_cellmath__16__4__I1 (.Y(N12), .A(inst_cellmath__16__4__in0[7]), .B(inst_cellmath__16__4__in0[6]));
NOR2XL inst_cellmath__16__4__I2 (.Y(N13), .A(inst_cellmath__16__4__in0[5]), .B(inst_cellmath__16__4__in0[4]));
NOR2XL inst_cellmath__16__4__I3 (.Y(N14), .A(inst_cellmath__16__4__in0[3]), .B(inst_cellmath__16__4__in0[2]));
NAND2X1 inst_cellmath__16__4__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__16__4__I5 (.Y(N16), .A(N13), .B(N14));
NOR2X1 inst_cellmath__16__4__I6 (.Y(inst_cellmath__16__4__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__67__bdw105316586_bdw (
	inst_cellmath__67__67__out0,
	inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__67__out0;
input  inst_cellmath__67__67__in0,
	inst_cellmath__67__67__in1;
AND2XL inst_cellmath__67__67__I0 (.Y(inst_cellmath__67__67__out0[0]), .A(inst_cellmath__67__67__in1), .B(inst_cellmath__67__67__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__6_0_bdw105316586_bdw (
	inst_cellmath__6_0_out0,
	inst_cellmath__6_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__6_0_out0;
input [2:0] inst_cellmath__6_0_in0;
wire N29,N34,N36;
INVXL inst_cellmath__6_0_I16 (.Y(N29), .A(inst_cellmath__6_0_in0[0]));
INVX1 inst_cellmath__6_0_I18 (.Y(N34), .A(inst_cellmath__6_0_in0[2]));
NAND3X1 inst_cellmath__6_0_I19 (.Y(N36), .A(inst_cellmath__6_0_in0[1]), .B(N34), .C(N29));
INVXL inst_cellmath__6_0_I20 (.Y(inst_cellmath__6_0_out0), .A(N36));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__28__8__bdw105316586_bdw (
	inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1,
	inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1
	); /* architecture "gate_level" */ 
output [8:0] inst_cellmath__28__8__out0,
	inst_cellmath__28__8__out1;
input [7:0] inst_cellmath__28__8__in0,
	inst_cellmath__28__8__in1;
wire N45,N46,N47,N48,N49,N50,N51 
	,N52,N53,N54,N55,N56,N57,N58,N59 
	,N62,N64,N65,N66,N67,N68,N69,N70 
	,N71,N72,N73,N74,N75,N80,N82,N84 
	,N85,N86,N87,N88,N89,N90,N91,N100 
	,N102,N104,N121,N124,N127,N130,N133,N136 
	,N139,N149,N151,N168,N171,N173,N175,N190 
	,N192,N194,N195,N197,N212,N214,N216,N218 
	,N220,N221,N249,N321,N322,N324,N333,N334 
	,N335,N336;
NAND2X1 inst_cellmath__28__8__I0 (.Y(N45), .A(inst_cellmath__28__8__in1[0]), .B(inst_cellmath__28__8__in0[0]));
NOR2X1 inst_cellmath__28__8__I1 (.Y(N46), .A(inst_cellmath__28__8__in1[1]), .B(inst_cellmath__28__8__in0[1]));
NAND2X2 inst_cellmath__28__8__I2 (.Y(N47), .A(inst_cellmath__28__8__in1[1]), .B(inst_cellmath__28__8__in0[1]));
NOR2X2 inst_cellmath__28__8__I3 (.Y(N48), .A(inst_cellmath__28__8__in1[2]), .B(inst_cellmath__28__8__in0[2]));
NAND2X2 inst_cellmath__28__8__I4 (.Y(N49), .A(inst_cellmath__28__8__in1[2]), .B(inst_cellmath__28__8__in0[2]));
NOR2X1 inst_cellmath__28__8__I5 (.Y(N50), .A(inst_cellmath__28__8__in1[3]), .B(inst_cellmath__28__8__in0[3]));
NAND2X2 inst_cellmath__28__8__I6 (.Y(N51), .A(inst_cellmath__28__8__in1[3]), .B(inst_cellmath__28__8__in0[3]));
NOR2X1 inst_cellmath__28__8__I7 (.Y(N52), .A(inst_cellmath__28__8__in1[4]), .B(inst_cellmath__28__8__in0[4]));
NAND2X1 inst_cellmath__28__8__I8 (.Y(N53), .A(inst_cellmath__28__8__in1[4]), .B(inst_cellmath__28__8__in0[4]));
NOR2XL inst_cellmath__28__8__I9 (.Y(N54), .A(inst_cellmath__28__8__in1[5]), .B(inst_cellmath__28__8__in0[5]));
NAND2X2 inst_cellmath__28__8__I10 (.Y(N55), .A(inst_cellmath__28__8__in1[5]), .B(inst_cellmath__28__8__in0[5]));
NOR2XL inst_cellmath__28__8__I11 (.Y(N56), .A(inst_cellmath__28__8__in1[6]), .B(inst_cellmath__28__8__in0[6]));
NAND2X1 inst_cellmath__28__8__I12 (.Y(N57), .A(inst_cellmath__28__8__in1[6]), .B(inst_cellmath__28__8__in0[6]));
NOR2XL inst_cellmath__28__8__I13 (.Y(N58), .A(inst_cellmath__28__8__in1[7]), .B(inst_cellmath__28__8__in0[7]));
NAND2X2 inst_cellmath__28__8__I14 (.Y(N59), .A(inst_cellmath__28__8__in1[7]), .B(inst_cellmath__28__8__in0[7]));
INVXL inst_cellmath__28__8__I244 (.Y(N321), .A(N45));
AOI21X2 inst_cellmath__28__8__I17 (.Y(N62), .A0(N47), .A1(N45), .B0(N46));
INVXL inst_cellmath__28__8__I245 (.Y(N322), .A(N62));
AOI21XL inst_cellmath__28__8__I19 (.Y(N64), .A0(N49), .A1(N46), .B0(N48));
NAND2XL inst_cellmath__28__8__I20 (.Y(N65), .A(N49), .B(N47));
AOI21X2 inst_cellmath__28__8__I21 (.Y(N66), .A0(N51), .A1(N48), .B0(N50));
NAND2X2 inst_cellmath__28__8__I22 (.Y(N67), .A(N51), .B(N49));
AOI21XL inst_cellmath__28__8__I23 (.Y(N68), .A0(N53), .A1(N50), .B0(N52));
NAND2XL inst_cellmath__28__8__I24 (.Y(N69), .A(N53), .B(N51));
AOI21X1 inst_cellmath__28__8__I25 (.Y(N70), .A0(N55), .A1(N52), .B0(N54));
NAND2X1 inst_cellmath__28__8__I26 (.Y(N71), .A(N55), .B(N53));
AOI21XL inst_cellmath__28__8__I27 (.Y(N72), .A0(N57), .A1(N54), .B0(N56));
NAND2XL inst_cellmath__28__8__I28 (.Y(N73), .A(N57), .B(N55));
AOI21X1 inst_cellmath__28__8__I29 (.Y(N74), .A0(N59), .A1(N56), .B0(N58));
NAND2X2 inst_cellmath__28__8__I30 (.Y(N75), .A(N59), .B(N57));
INVXL inst_cellmath__28__8__I247 (.Y(N324), .A(N321));
OAI21XL inst_cellmath__28__8__I35 (.Y(N80), .A0(N65), .A1(N321), .B0(N64));
OAI21X2 inst_cellmath__28__8__I37 (.Y(N82), .A0(N67), .A1(N62), .B0(N66));
OAI21XL inst_cellmath__28__8__I39 (.Y(N84), .A0(N69), .A1(N64), .B0(N68));
NOR2XL inst_cellmath__28__8__I40 (.Y(N85), .A(N69), .B(N65));
OAI21XL inst_cellmath__28__8__I41 (.Y(N86), .A0(N71), .A1(N66), .B0(N70));
NOR2XL inst_cellmath__28__8__I42 (.Y(N87), .A(N71), .B(N67));
OAI21XL inst_cellmath__28__8__I43 (.Y(N88), .A0(N73), .A1(N68), .B0(N72));
NOR2XL inst_cellmath__28__8__I44 (.Y(N89), .A(N73), .B(N69));
OAI21X2 inst_cellmath__28__8__I45 (.Y(N90), .A0(N75), .A1(N70), .B0(N74));
NOR2X2 inst_cellmath__28__8__I46 (.Y(N91), .A(N75), .B(N71));
AOI21XL inst_cellmath__28__8__I55 (.Y(N100), .A0(N85), .A1(N324), .B0(N84));
AOI21XL inst_cellmath__28__8__I57 (.Y(N102), .A0(N87), .A1(N322), .B0(N86));
AOI21XL inst_cellmath__28__8__I59 (.Y(N104), .A0(N89), .A1(N80), .B0(N88));
NAND2BXL inst_cellmath__28__8__I76 (.Y(N121), .AN(N46), .B(N47));
NAND2BXL inst_cellmath__28__8__I79 (.Y(N124), .AN(N48), .B(N49));
NAND2BXL inst_cellmath__28__8__I82 (.Y(N127), .AN(N50), .B(N51));
NAND2BXL inst_cellmath__28__8__I85 (.Y(N130), .AN(N52), .B(N53));
NAND2BXL inst_cellmath__28__8__I88 (.Y(N133), .AN(N54), .B(N55));
NAND2BXL inst_cellmath__28__8__I91 (.Y(N136), .AN(N56), .B(N57));
NAND2BXL inst_cellmath__28__8__I94 (.Y(N139), .AN(N58), .B(N59));
XOR2XL inst_cellmath__28__8__I95 (.Y(inst_cellmath__28__8__out0[0]), .A(inst_cellmath__28__8__in1[0]), .B(inst_cellmath__28__8__in0[0]));
XOR2XL inst_cellmath__28__8__I272 (.Y(inst_cellmath__28__8__out0[1]), .A(N324), .B(N121));
XOR2XL inst_cellmath__28__8__I273 (.Y(inst_cellmath__28__8__out0[2]), .A(N322), .B(N124));
XOR2XL inst_cellmath__28__8__I274 (.Y(inst_cellmath__28__8__out0[3]), .A(N80), .B(N127));
XOR2XL inst_cellmath__28__8__I275 (.Y(inst_cellmath__28__8__out0[4]), .A(N82), .B(N130));
XNOR2X1 inst_cellmath__28__8__I100 (.Y(inst_cellmath__28__8__out0[5]), .A(N100), .B(N133));
XNOR2X1 inst_cellmath__28__8__I101 (.Y(inst_cellmath__28__8__out0[6]), .A(N102), .B(N136));
XNOR2X1 inst_cellmath__28__8__I102 (.Y(inst_cellmath__28__8__out0[7]), .A(N104), .B(N139));
AO21XL inst_cellmath__28__8__I269 (.Y(inst_cellmath__28__8__out0[8]), .A0(N91), .A1(N82), .B0(N90));
INVXL inst_cellmath__28__8__I104 (.Y(N149), .A(inst_cellmath__28__8__in1[0]));
INVXL inst_cellmath__28__8__I105 (.Y(N151), .A(inst_cellmath__28__8__in0[0]));
INVXL inst_cellmath__28__8__I256 (.Y(N333), .A(N149));
NAND2XL inst_cellmath__28__8__I122 (.Y(N168), .A(N151), .B(N149));
INVXL inst_cellmath__28__8__I124 (.Y(N171), .A(N46));
NAND2XL inst_cellmath__28__8__I125 (.Y(N173), .A(N47), .B(N151));
NAND2XL inst_cellmath__28__8__I127 (.Y(N175), .A(N49), .B(N47));
INVXL inst_cellmath__28__8__I257 (.Y(N334), .A(N333));
INVXL inst_cellmath__28__8__I258 (.Y(N335), .A(N168));
OAI21XL inst_cellmath__28__8__I142 (.Y(N190), .A0(N173), .A1(N333), .B0(N171));
OAI21XL inst_cellmath__28__8__I144 (.Y(N192), .A0(N175), .A1(N168), .B0(N64));
OAI21X2 inst_cellmath__28__8__I146 (.Y(N194), .A0(N67), .A1(N171), .B0(N66));
NOR2XL inst_cellmath__28__8__I147 (.Y(N195), .A(N67), .B(N173));
NOR2XL inst_cellmath__28__8__I149 (.Y(N197), .A(N69), .B(N175));
INVXL inst_cellmath__28__8__I259 (.Y(N336), .A(N334));
AOI21XL inst_cellmath__28__8__I164 (.Y(N212), .A0(N195), .A1(N334), .B0(N194));
AOI21XL inst_cellmath__28__8__I166 (.Y(N214), .A0(N197), .A1(N335), .B0(N84));
AOI21XL inst_cellmath__28__8__I168 (.Y(N216), .A0(N87), .A1(N190), .B0(N86));
AOI21XL inst_cellmath__28__8__I170 (.Y(N218), .A0(N89), .A1(N192), .B0(N88));
AOI21X2 inst_cellmath__28__8__I172 (.Y(N220), .A0(N91), .A1(N194), .B0(N90));
NAND2X1 inst_cellmath__28__8__I173 (.Y(N221), .A(N91), .B(N195));
NAND2BXL inst_cellmath__28__8__I200 (.Y(N249), .AN(N46), .B(N47));
XOR2XL inst_cellmath__28__8__I276 (.Y(inst_cellmath__28__8__out1[0]), .A(N336), .B(N151));
XOR2XL inst_cellmath__28__8__I277 (.Y(inst_cellmath__28__8__out1[1]), .A(N335), .B(N249));
XOR2XL inst_cellmath__28__8__I278 (.Y(inst_cellmath__28__8__out1[2]), .A(N190), .B(N124));
XOR2XL inst_cellmath__28__8__I279 (.Y(inst_cellmath__28__8__out1[3]), .A(N192), .B(N127));
XNOR2X1 inst_cellmath__28__8__I224 (.Y(inst_cellmath__28__8__out1[4]), .A(N212), .B(N130));
XNOR2X1 inst_cellmath__28__8__I225 (.Y(inst_cellmath__28__8__out1[5]), .A(N214), .B(N133));
XNOR2X1 inst_cellmath__28__8__I226 (.Y(inst_cellmath__28__8__out1[6]), .A(N216), .B(N136));
XNOR2X1 inst_cellmath__28__8__I227 (.Y(inst_cellmath__28__8__out1[7]), .A(N218), .B(N139));
OAI21X4 inst_cellmath__28__8__I268 (.Y(inst_cellmath__28__8__out1[8]), .A0(N221), .A1(N336), .B0(N220));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__34_0_bdw105316586_bdw (
	inst_cellmath__34_0_out0,
	inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__34_0_out0;
input [22:0] inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1;
wire N134,N136,N138,N140,N142,N144,N146 
	,N148,N150,N152,N154,N156,N158,N160,N162 
	,N164,N166,N168,N170,N172,N174,N176,N193 
	,N194,N196,N197,N199,N200,N202,N203,N205 
	,N206,N208,N209,N211,N212,N214,N215,N217 
	,N218,N220,N221,N223,N224,N226,N227,N229 
	,N230,N232,N233,N235,N236,N238,N239,N241 
	,N242,N244,N245,N247,N248,N250,N251,N253 
	,N254,N259,N260,N261,N262,N263,N264,N265 
	,N266,N267,N268,N269,N270,N271,N272,N273 
	,N274,N275,N276,N277,N278,N279,N281,N282 
	,N283,N284,N285,N287,N288,N289,N290,N291 
	,N292,N293,N297,N298,N299,N301,N303,N304 
	,N499;
INVXL inst_cellmath__34_0_I34 (.Y(N134), .A(inst_cellmath__34_0_in1[1]));
INVXL inst_cellmath__34_0_I35 (.Y(N136), .A(inst_cellmath__34_0_in1[2]));
INVXL inst_cellmath__34_0_I36 (.Y(N138), .A(inst_cellmath__34_0_in1[3]));
INVXL inst_cellmath__34_0_I37 (.Y(N140), .A(inst_cellmath__34_0_in1[4]));
INVXL inst_cellmath__34_0_I38 (.Y(N142), .A(inst_cellmath__34_0_in1[5]));
INVXL inst_cellmath__34_0_I39 (.Y(N144), .A(inst_cellmath__34_0_in1[6]));
INVXL inst_cellmath__34_0_I40 (.Y(N146), .A(inst_cellmath__34_0_in1[7]));
INVXL inst_cellmath__34_0_I41 (.Y(N148), .A(inst_cellmath__34_0_in1[8]));
INVXL inst_cellmath__34_0_I42 (.Y(N150), .A(inst_cellmath__34_0_in1[9]));
INVXL inst_cellmath__34_0_I43 (.Y(N152), .A(inst_cellmath__34_0_in1[10]));
INVXL inst_cellmath__34_0_I44 (.Y(N154), .A(inst_cellmath__34_0_in1[11]));
INVXL inst_cellmath__34_0_I45 (.Y(N156), .A(inst_cellmath__34_0_in1[12]));
INVXL inst_cellmath__34_0_I46 (.Y(N158), .A(inst_cellmath__34_0_in1[13]));
INVXL inst_cellmath__34_0_I47 (.Y(N160), .A(inst_cellmath__34_0_in1[14]));
INVX1 inst_cellmath__34_0_I48 (.Y(N162), .A(inst_cellmath__34_0_in1[15]));
INVXL inst_cellmath__34_0_I49 (.Y(N164), .A(inst_cellmath__34_0_in1[16]));
INVXL inst_cellmath__34_0_I50 (.Y(N166), .A(inst_cellmath__34_0_in1[17]));
INVXL inst_cellmath__34_0_I51 (.Y(N168), .A(inst_cellmath__34_0_in1[18]));
INVXL inst_cellmath__34_0_I52 (.Y(N170), .A(inst_cellmath__34_0_in1[19]));
INVXL inst_cellmath__34_0_I53 (.Y(N172), .A(inst_cellmath__34_0_in1[20]));
INVXL inst_cellmath__34_0_I54 (.Y(N174), .A(inst_cellmath__34_0_in1[21]));
INVXL inst_cellmath__34_0_I55 (.Y(N176), .A(inst_cellmath__34_0_in1[22]));
NAND2XL cla0c_A_I142 (.Y(N194), .A(inst_cellmath__34_0_in0[1]), .B(N134));
NOR2XL cla0c_A_I143 (.Y(N193), .A(inst_cellmath__34_0_in0[1]), .B(N134));
NAND2XL cla0c_A_I144 (.Y(N197), .A(inst_cellmath__34_0_in0[2]), .B(N136));
NOR2XL cla0c_A_I145 (.Y(N196), .A(inst_cellmath__34_0_in0[2]), .B(N136));
NAND2XL cla0c_A_I146 (.Y(N200), .A(inst_cellmath__34_0_in0[3]), .B(N138));
NOR2X1 cla0c_A_I147 (.Y(N199), .A(inst_cellmath__34_0_in0[3]), .B(N138));
NAND2XL cla0c_A_I148 (.Y(N203), .A(inst_cellmath__34_0_in0[4]), .B(N140));
NOR2XL cla0c_A_I149 (.Y(N202), .A(inst_cellmath__34_0_in0[4]), .B(N140));
NAND2XL cla0c_A_I150 (.Y(N206), .A(inst_cellmath__34_0_in0[5]), .B(N142));
NOR2X1 cla0c_A_I151 (.Y(N205), .A(inst_cellmath__34_0_in0[5]), .B(N142));
NAND2XL cla0c_A_I152 (.Y(N209), .A(inst_cellmath__34_0_in0[6]), .B(N144));
NOR2XL cla0c_A_I153 (.Y(N208), .A(inst_cellmath__34_0_in0[6]), .B(N144));
NAND2XL cla0c_A_I154 (.Y(N212), .A(inst_cellmath__34_0_in0[7]), .B(N146));
NOR2X1 cla0c_A_I155 (.Y(N211), .A(inst_cellmath__34_0_in0[7]), .B(N146));
NAND2XL cla0c_A_I156 (.Y(N215), .A(inst_cellmath__34_0_in0[8]), .B(N148));
NOR2XL cla0c_A_I157 (.Y(N214), .A(inst_cellmath__34_0_in0[8]), .B(N148));
NAND2XL cla0c_A_I158 (.Y(N218), .A(inst_cellmath__34_0_in0[9]), .B(N150));
NOR2X1 cla0c_A_I159 (.Y(N217), .A(inst_cellmath__34_0_in0[9]), .B(N150));
NAND2XL cla0c_A_I160 (.Y(N221), .A(inst_cellmath__34_0_in0[10]), .B(N152));
NOR2XL cla0c_A_I161 (.Y(N220), .A(inst_cellmath__34_0_in0[10]), .B(N152));
NAND2XL cla0c_A_I162 (.Y(N224), .A(inst_cellmath__34_0_in0[11]), .B(N154));
NOR2XL cla0c_A_I163 (.Y(N223), .A(inst_cellmath__34_0_in0[11]), .B(N154));
NAND2XL cla0c_A_I164 (.Y(N227), .A(inst_cellmath__34_0_in0[12]), .B(N156));
NOR2XL cla0c_A_I165 (.Y(N226), .A(inst_cellmath__34_0_in0[12]), .B(N156));
NAND2XL cla0c_A_I166 (.Y(N230), .A(inst_cellmath__34_0_in0[13]), .B(N158));
NOR2X1 cla0c_A_I167 (.Y(N229), .A(inst_cellmath__34_0_in0[13]), .B(N158));
NAND2XL cla0c_A_I168 (.Y(N233), .A(inst_cellmath__34_0_in0[14]), .B(N160));
NOR2XL cla0c_A_I169 (.Y(N232), .A(inst_cellmath__34_0_in0[14]), .B(N160));
NAND2XL cla0c_A_I170 (.Y(N236), .A(inst_cellmath__34_0_in0[15]), .B(N162));
NOR2X1 cla0c_A_I171 (.Y(N235), .A(inst_cellmath__34_0_in0[15]), .B(N162));
NAND2XL cla0c_A_I172 (.Y(N239), .A(inst_cellmath__34_0_in0[16]), .B(N164));
NOR2XL cla0c_A_I173 (.Y(N238), .A(inst_cellmath__34_0_in0[16]), .B(N164));
NAND2XL cla0c_A_I174 (.Y(N242), .A(inst_cellmath__34_0_in0[17]), .B(N166));
NOR2XL cla0c_A_I175 (.Y(N241), .A(inst_cellmath__34_0_in0[17]), .B(N166));
NAND2XL cla0c_A_I176 (.Y(N245), .A(inst_cellmath__34_0_in0[18]), .B(N168));
NOR2XL cla0c_A_I177 (.Y(N244), .A(inst_cellmath__34_0_in0[18]), .B(N168));
NAND2XL cla0c_A_I178 (.Y(N248), .A(inst_cellmath__34_0_in0[19]), .B(N170));
NOR2XL cla0c_A_I179 (.Y(N247), .A(inst_cellmath__34_0_in0[19]), .B(N170));
NAND2XL cla0c_A_I180 (.Y(N251), .A(inst_cellmath__34_0_in0[20]), .B(N172));
NOR2XL cla0c_A_I181 (.Y(N250), .A(inst_cellmath__34_0_in0[20]), .B(N172));
NAND2XL cla0c_A_I182 (.Y(N254), .A(inst_cellmath__34_0_in0[21]), .B(N174));
NOR2XL cla0c_A_I183 (.Y(N253), .A(inst_cellmath__34_0_in0[21]), .B(N174));
AND2XL cla0c_A_I184 (.Y(N281), .A(inst_cellmath__34_0_in0[22]), .B(N176));
OR2XL cla0c_A_I185 (.Y(N282), .A(inst_cellmath__34_0_in0[22]), .B(N176));
OAI21XL ECLA_Stage_Fwd_I89 (.Y(N259), .A0(N253), .A1(N251), .B0(N254));
NOR2XL ECLA_Stage_Fwd_I90 (.Y(N260), .A(N253), .B(N250));
OAI21XL ECLA_Stage_Fwd_I91 (.Y(N261), .A0(N247), .A1(N245), .B0(N248));
NOR2XL ECLA_Stage_Fwd_I92 (.Y(N262), .A(N247), .B(N244));
OAI21XL ECLA_Stage_Fwd_I93 (.Y(N263), .A0(N241), .A1(N239), .B0(N242));
NOR2XL ECLA_Stage_Fwd_I94 (.Y(N264), .A(N241), .B(N238));
OAI21XL ECLA_Stage_Fwd_I95 (.Y(N265), .A0(N235), .A1(N233), .B0(N236));
NOR2XL ECLA_Stage_Fwd_I96 (.Y(N266), .A(N235), .B(N232));
OAI21X1 ECLA_Stage_Fwd_I97 (.Y(N267), .A0(N229), .A1(N227), .B0(N230));
NOR2XL ECLA_Stage_Fwd_I98 (.Y(N268), .A(N229), .B(N226));
OAI21XL ECLA_Stage_Fwd_I99 (.Y(N269), .A0(N223), .A1(N221), .B0(N224));
NOR2XL ECLA_Stage_Fwd_I100 (.Y(N270), .A(N223), .B(N220));
OAI21X1 ECLA_Stage_Fwd_I101 (.Y(N271), .A0(N217), .A1(N215), .B0(N218));
NOR2XL ECLA_Stage_Fwd_I102 (.Y(N272), .A(N217), .B(N214));
OAI21X1 ECLA_Stage_Fwd_I103 (.Y(N273), .A0(N211), .A1(N209), .B0(N212));
NOR2XL ECLA_Stage_Fwd_I104 (.Y(N274), .A(N211), .B(N208));
OAI21X1 ECLA_Stage_Fwd_I105 (.Y(N275), .A0(N205), .A1(N203), .B0(N206));
NOR2XL ECLA_Stage_Fwd_I106 (.Y(N276), .A(N205), .B(N202));
OAI21XL ECLA_Stage_Fwd_I107 (.Y(N277), .A0(N199), .A1(N197), .B0(N200));
NOR2XL ECLA_Stage_Fwd_I108 (.Y(N278), .A(N199), .B(N196));
INVXL inst_cellmath__34_0_I191 (.Y(N499), .A(inst_cellmath__34_0_in0[0]));
OAI31X1 ECLA_Stage_Fwd_I138 (.Y(N279), .A0(N499), .A1(inst_cellmath__34_0_in1[0]), .A2(N193), .B0(N194));
AOI21XL ECLA_Stage_Fwd_I113 (.Y(N283), .A0(N282), .A1(N259), .B0(N281));
NAND2XL ECLA_Stage_Fwd_I114 (.Y(N284), .A(N282), .B(N260));
AOI21XL ECLA_Stage_Fwd_I115 (.Y(N285), .A0(N262), .A1(N263), .B0(N261));
AOI21X1 ECLA_Stage_Fwd_I117 (.Y(N287), .A0(N266), .A1(N267), .B0(N265));
NAND2X1 ECLA_Stage_Fwd_I118 (.Y(N288), .A(N266), .B(N268));
AOI21X1 ECLA_Stage_Fwd_I119 (.Y(N289), .A0(N270), .A1(N271), .B0(N269));
NAND2XL ECLA_Stage_Fwd_I120 (.Y(N290), .A(N270), .B(N272));
AOI21X1 ECLA_Stage_Fwd_I121 (.Y(N291), .A0(N274), .A1(N275), .B0(N273));
NAND2XL ECLA_Stage_Fwd_I122 (.Y(N292), .A(N274), .B(N276));
AOI21X1 ECLA_Stage_Fwd_I123 (.Y(N293), .A0(N278), .A1(N279), .B0(N277));
NAND3BX1 ECLA_Stage_Fwd_I188 (.Y(N304), .AN(N284), .B(N262), .C(N264));
OAI21X1 ECLA_Stage_Fwd_I127 (.Y(N297), .A0(N288), .A1(N289), .B0(N287));
NOR2XL ECLA_Stage_Fwd_I128 (.Y(N298), .A(N288), .B(N290));
OAI21X1 ECLA_Stage_Fwd_I129 (.Y(N299), .A0(N292), .A1(N293), .B0(N291));
AOI21X1 ECLA_Stage_Fwd_I131 (.Y(N301), .A0(N298), .A1(N299), .B0(N297));
OA21X1 ECLA_Stage_Fwd_I189 (.Y(N303), .A0(N284), .A1(N285), .B0(N283));
OAI21X2 ECLA_Stage_Fwd_I135 (.Y(inst_cellmath__34_0_out0), .A0(N304), .A1(N301), .B0(N303));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32__14__bdw105316586_bdw (
	inst_cellmath__32__14__out0,
	inst_cellmath__32__14__in0,
	inst_cellmath__32__14__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__32__14__out0;
input  inst_cellmath__32__14__in0;
input [8:8] inst_cellmath__32__14__in1;
wire N5,N6;
INVXL inst_cellmath__32__14__I0 (.Y(N5), .A(inst_cellmath__32__14__in1[8]));
NAND2X2 inst_cellmath__32__14__I1 (.Y(N6), .A(N5), .B(inst_cellmath__32__14__in0));
INVX2 inst_cellmath__32__14__I2 (.Y(inst_cellmath__32__14__out0[0]), .A(N6));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__32_0_bdw105316586_bdw (
	inst_cellmath__32_0_out0,
	inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__32_0_out0;
input [0:0] inst_cellmath__32_0_in0;
input [8:8] inst_cellmath__32_0_in1;
wire N5;
NOR2X4 inst_cellmath__32_0_I0 (.Y(N5), .A(inst_cellmath__32_0_in1[8]), .B(inst_cellmath__32_0_in0[0]));
CLKINVX3 inst_cellmath__32_0_I1 (.Y(inst_cellmath__32_0_out0), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__48_0_bdw105316586_bdw (
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

module cynw_cm_float_add2_ieee_inst_cellmath__35_0_bdw105316586_bdw (
	inst_cellmath__35_0_out0,
	inst_cellmath__35_0_in0,
	inst_cellmath__35_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__35_0_out0;
input [7:0] inst_cellmath__35_0_in0;
input [8:0] inst_cellmath__35_0_in1;
wire N43,N44,N45,N46,N47,N48,N49 
	,N50;
INVXL inst_cellmath__35_0_I16 (.Y(N43), .A(inst_cellmath__35_0_in1[0]));
INVXL inst_cellmath__35_0_I17 (.Y(N44), .A(inst_cellmath__35_0_in1[1]));
INVXL inst_cellmath__35_0_I18 (.Y(N45), .A(inst_cellmath__35_0_in1[2]));
INVXL inst_cellmath__35_0_I19 (.Y(N46), .A(inst_cellmath__35_0_in1[3]));
INVXL inst_cellmath__35_0_I20 (.Y(N47), .A(inst_cellmath__35_0_in1[4]));
INVXL inst_cellmath__35_0_I21 (.Y(N48), .A(inst_cellmath__35_0_in1[5]));
INVXL inst_cellmath__35_0_I22 (.Y(N49), .A(inst_cellmath__35_0_in1[6]));
INVXL inst_cellmath__35_0_I23 (.Y(N50), .A(inst_cellmath__35_0_in1[7]));
MXI2XL inst_cellmath__35_0_I24 (.Y(inst_cellmath__35_0_out0[0]), .A(N43), .B(inst_cellmath__35_0_in0[0]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I25 (.Y(inst_cellmath__35_0_out0[1]), .A(N44), .B(inst_cellmath__35_0_in0[1]), .S0(inst_cellmath__35_0_in1[8]));
MXI2XL inst_cellmath__35_0_I26 (.Y(inst_cellmath__35_0_out0[2]), .A(N45), .B(inst_cellmath__35_0_in0[2]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I27 (.Y(inst_cellmath__35_0_out0[3]), .A(N46), .B(inst_cellmath__35_0_in0[3]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I28 (.Y(inst_cellmath__35_0_out0[4]), .A(N47), .B(inst_cellmath__35_0_in0[4]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I29 (.Y(inst_cellmath__35_0_out0[5]), .A(N48), .B(inst_cellmath__35_0_in0[5]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I30 (.Y(inst_cellmath__35_0_out0[6]), .A(N49), .B(inst_cellmath__35_0_in0[6]), .S0(inst_cellmath__35_0_in1[8]));
MXI2X2 inst_cellmath__35_0_I31 (.Y(inst_cellmath__35_0_out0[7]), .A(N50), .B(inst_cellmath__35_0_in0[7]), .S0(inst_cellmath__35_0_in1[8]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__30_0_bdw105316586_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;
wire N60,N62,N68;
NOR2X1 inst_cellmath__30_0_I27 (.Y(N60), .A(inst_cellmath__30_0_in0[2]), .B(inst_cellmath__30_0_in0[1]));
NAND2XL inst_cellmath__30_0_I28 (.Y(N62), .A(inst_cellmath__30_0_in0[3]), .B(inst_cellmath__30_0_in0[4]));
NOR3X2 inst_cellmath__30_0_I33 (.Y(N68), .A(inst_cellmath__30_0_in0[7]), .B(inst_cellmath__30_0_in0[6]), .C(inst_cellmath__30_0_in0[5]));
OAI21X2 inst_cellmath__30_0_I34 (.Y(inst_cellmath__30_0_out0), .A0(N60), .A1(N62), .B0(N68));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__31_0_bdw105316586_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__31_0_out0;
input  inst_cellmath__31_0_in0,
	inst_cellmath__31_0_in1;
wire N19;
NOR2X1 inst_cellmath__31_0_I4 (.Y(N19), .A(inst_cellmath__31_0_in1), .B(inst_cellmath__31_0_in0));
INVXL inst_cellmath__31_0_I5 (.Y(inst_cellmath__31_0_out0), .A(N19));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33__18__bdw105316586_bdw (
	inst_cellmath__33__18__out0,
	inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__33__18__out0;
input  inst_cellmath__33__18__in0,
	inst_cellmath__33__18__in1;
OR2XL inst_cellmath__33__18__I0 (.Y(inst_cellmath__33__18__out0[0]), .A(inst_cellmath__33__18__in0), .B(inst_cellmath__33__18__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__36__15__bdw105316586_bdw (
	inst_cellmath__36__15__out0,
	inst_cellmath__36__15__in0,
	inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__36__15__out0;
input  inst_cellmath__36__15__in0;
input [22:0] inst_cellmath__36__15__in1,
	inst_cellmath__36__15__in2;
wire N72,N73,N74,N75,N76,N77,N78 
	,N79,N80,N81,N82,N83,N84,N85,N86 
	,N87,N88,N89,N90,N91,N92,N93,N94 
	,N95,N96,N97,N98,N99,N100,N101,N102 
	,N103,N104,N105,N106,N107,N108,N109,N110 
	,N111,N112,N113,N114,N115,N116,N117,N143 
	,N144,N145,N146,N147,N148;
INVXL inst_cellmath__36__15__I0 (.Y(N72), .A(inst_cellmath__36__15__in2[0]));
INVXL inst_cellmath__36__15__I1 (.Y(N73), .A(inst_cellmath__36__15__in2[1]));
INVXL inst_cellmath__36__15__I2 (.Y(N74), .A(inst_cellmath__36__15__in2[2]));
INVXL inst_cellmath__36__15__I3 (.Y(N75), .A(inst_cellmath__36__15__in2[3]));
INVXL inst_cellmath__36__15__I4 (.Y(N76), .A(inst_cellmath__36__15__in2[4]));
INVXL inst_cellmath__36__15__I5 (.Y(N77), .A(inst_cellmath__36__15__in2[5]));
INVXL inst_cellmath__36__15__I6 (.Y(N78), .A(inst_cellmath__36__15__in2[6]));
INVXL inst_cellmath__36__15__I7 (.Y(N79), .A(inst_cellmath__36__15__in2[7]));
INVXL inst_cellmath__36__15__I8 (.Y(N80), .A(inst_cellmath__36__15__in2[8]));
INVXL inst_cellmath__36__15__I9 (.Y(N81), .A(inst_cellmath__36__15__in2[9]));
INVXL inst_cellmath__36__15__I10 (.Y(N82), .A(inst_cellmath__36__15__in2[10]));
INVXL inst_cellmath__36__15__I11 (.Y(N83), .A(inst_cellmath__36__15__in2[11]));
INVXL inst_cellmath__36__15__I12 (.Y(N84), .A(inst_cellmath__36__15__in2[12]));
INVXL inst_cellmath__36__15__I13 (.Y(N85), .A(inst_cellmath__36__15__in2[13]));
INVXL inst_cellmath__36__15__I14 (.Y(N86), .A(inst_cellmath__36__15__in2[14]));
INVXL inst_cellmath__36__15__I15 (.Y(N87), .A(inst_cellmath__36__15__in2[15]));
INVXL inst_cellmath__36__15__I16 (.Y(N88), .A(inst_cellmath__36__15__in2[16]));
INVXL inst_cellmath__36__15__I17 (.Y(N89), .A(inst_cellmath__36__15__in2[17]));
INVXL inst_cellmath__36__15__I18 (.Y(N90), .A(inst_cellmath__36__15__in2[18]));
INVXL inst_cellmath__36__15__I19 (.Y(N91), .A(inst_cellmath__36__15__in2[19]));
INVXL inst_cellmath__36__15__I20 (.Y(N92), .A(inst_cellmath__36__15__in2[20]));
INVXL inst_cellmath__36__15__I21 (.Y(N93), .A(inst_cellmath__36__15__in2[21]));
INVXL inst_cellmath__36__15__I22 (.Y(N94), .A(inst_cellmath__36__15__in2[22]));
INVXL inst_cellmath__36__15__I23 (.Y(N95), .A(inst_cellmath__36__15__in1[0]));
INVXL inst_cellmath__36__15__I24 (.Y(N96), .A(inst_cellmath__36__15__in1[1]));
INVXL inst_cellmath__36__15__I25 (.Y(N97), .A(inst_cellmath__36__15__in1[2]));
INVXL inst_cellmath__36__15__I26 (.Y(N98), .A(inst_cellmath__36__15__in1[3]));
INVXL inst_cellmath__36__15__I27 (.Y(N99), .A(inst_cellmath__36__15__in1[4]));
INVXL inst_cellmath__36__15__I28 (.Y(N100), .A(inst_cellmath__36__15__in1[5]));
INVXL inst_cellmath__36__15__I29 (.Y(N101), .A(inst_cellmath__36__15__in1[6]));
INVXL inst_cellmath__36__15__I30 (.Y(N102), .A(inst_cellmath__36__15__in1[7]));
INVXL inst_cellmath__36__15__I31 (.Y(N103), .A(inst_cellmath__36__15__in1[8]));
INVXL inst_cellmath__36__15__I32 (.Y(N104), .A(inst_cellmath__36__15__in1[9]));
INVXL inst_cellmath__36__15__I33 (.Y(N105), .A(inst_cellmath__36__15__in1[10]));
INVXL inst_cellmath__36__15__I34 (.Y(N106), .A(inst_cellmath__36__15__in1[11]));
INVXL inst_cellmath__36__15__I35 (.Y(N107), .A(inst_cellmath__36__15__in1[12]));
INVXL inst_cellmath__36__15__I36 (.Y(N108), .A(inst_cellmath__36__15__in1[13]));
INVXL inst_cellmath__36__15__I37 (.Y(N109), .A(inst_cellmath__36__15__in1[14]));
INVXL inst_cellmath__36__15__I38 (.Y(N110), .A(inst_cellmath__36__15__in1[15]));
INVXL inst_cellmath__36__15__I39 (.Y(N111), .A(inst_cellmath__36__15__in1[16]));
INVXL inst_cellmath__36__15__I40 (.Y(N112), .A(inst_cellmath__36__15__in1[17]));
INVXL inst_cellmath__36__15__I41 (.Y(N113), .A(inst_cellmath__36__15__in1[18]));
INVXL inst_cellmath__36__15__I42 (.Y(N114), .A(inst_cellmath__36__15__in1[19]));
INVXL inst_cellmath__36__15__I43 (.Y(N115), .A(inst_cellmath__36__15__in1[20]));
INVXL inst_cellmath__36__15__I44 (.Y(N116), .A(inst_cellmath__36__15__in1[21]));
INVXL inst_cellmath__36__15__I45 (.Y(N117), .A(inst_cellmath__36__15__in1[22]));
INVX3 inst_cellmath__36__15__I70 (.Y(N143), .A(inst_cellmath__36__15__in0));
INVXL inst_cellmath__36__15__I75 (.Y(N148), .A(N143));
INVX1 inst_cellmath__36__15__I74 (.Y(N147), .A(N143));
INVX1 inst_cellmath__36__15__I73 (.Y(N146), .A(N143));
INVX1 inst_cellmath__36__15__I72 (.Y(N145), .A(N143));
INVX1 inst_cellmath__36__15__I71 (.Y(N144), .A(N143));
MXI2XL inst_cellmath__36__15__I46 (.Y(inst_cellmath__36__15__out0[0]), .A(N95), .B(N72), .S0(N148));
MXI2XL inst_cellmath__36__15__I47 (.Y(inst_cellmath__36__15__out0[1]), .A(N96), .B(N73), .S0(N148));
MXI2XL inst_cellmath__36__15__I48 (.Y(inst_cellmath__36__15__out0[2]), .A(N97), .B(N74), .S0(N148));
MXI2XL inst_cellmath__36__15__I49 (.Y(inst_cellmath__36__15__out0[3]), .A(N98), .B(N75), .S0(N147));
MXI2X1 inst_cellmath__36__15__I50 (.Y(inst_cellmath__36__15__out0[4]), .A(N99), .B(N76), .S0(N147));
MXI2X1 inst_cellmath__36__15__I51 (.Y(inst_cellmath__36__15__out0[5]), .A(N100), .B(N77), .S0(N147));
MXI2X1 inst_cellmath__36__15__I52 (.Y(inst_cellmath__36__15__out0[6]), .A(N101), .B(N78), .S0(N147));
MXI2X1 inst_cellmath__36__15__I53 (.Y(inst_cellmath__36__15__out0[7]), .A(N102), .B(N79), .S0(N147));
MXI2X1 inst_cellmath__36__15__I54 (.Y(inst_cellmath__36__15__out0[8]), .A(N103), .B(N80), .S0(N146));
MXI2X1 inst_cellmath__36__15__I55 (.Y(inst_cellmath__36__15__out0[9]), .A(N104), .B(N81), .S0(N146));
MXI2X1 inst_cellmath__36__15__I56 (.Y(inst_cellmath__36__15__out0[10]), .A(N105), .B(N82), .S0(N146));
MXI2X1 inst_cellmath__36__15__I57 (.Y(inst_cellmath__36__15__out0[11]), .A(N106), .B(N83), .S0(N146));
MXI2X1 inst_cellmath__36__15__I58 (.Y(inst_cellmath__36__15__out0[12]), .A(N107), .B(N84), .S0(N146));
MXI2X1 inst_cellmath__36__15__I59 (.Y(inst_cellmath__36__15__out0[13]), .A(N108), .B(N85), .S0(N145));
MXI2X1 inst_cellmath__36__15__I60 (.Y(inst_cellmath__36__15__out0[14]), .A(N109), .B(N86), .S0(N145));
MXI2X1 inst_cellmath__36__15__I61 (.Y(inst_cellmath__36__15__out0[15]), .A(N110), .B(N87), .S0(N145));
MXI2X1 inst_cellmath__36__15__I62 (.Y(inst_cellmath__36__15__out0[16]), .A(N111), .B(N88), .S0(N145));
MXI2X1 inst_cellmath__36__15__I63 (.Y(inst_cellmath__36__15__out0[17]), .A(N112), .B(N89), .S0(N145));
MXI2XL inst_cellmath__36__15__I64 (.Y(inst_cellmath__36__15__out0[18]), .A(N113), .B(N90), .S0(N144));
MXI2XL inst_cellmath__36__15__I65 (.Y(inst_cellmath__36__15__out0[19]), .A(N114), .B(N91), .S0(N144));
MXI2XL inst_cellmath__36__15__I66 (.Y(inst_cellmath__36__15__out0[20]), .A(N115), .B(N92), .S0(N144));
MXI2XL inst_cellmath__36__15__I67 (.Y(inst_cellmath__36__15__out0[21]), .A(N116), .B(N93), .S0(N144));
MXI2XL inst_cellmath__36__15__I68 (.Y(inst_cellmath__36__15__out0[22]), .A(N117), .B(N94), .S0(N144));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__37_0_bdw105316586_bdw (
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
	,N288,N289,N290,N292,N294,N296,N371,N373 
	,N375,N376,N377,N378,N379,N380,N381,N382 
	,N383,N384,N385,N386,N387,N388,N389,N390 
	,N391,N392,N393,N394,N395,N396,N397,N398 
	,N399,N400,N401,N402,N404,N471,N473,N475 
	,N477,N479,N481,N483,N485,N487,N488,N489 
	,N490,N491,N492,N493,N494,N495,N496,N497 
	,N498,N499,N500,N501,N502,N503,N504,N505 
	,N506,N507,N508,N509,N510,N512,N514,N516 
	,N518,N520,N522,N524,N709,N710,N711,N712 
	,N713,N714,N715,N716,N717,N718,N719,N720 
	,N721,N722,N723,N724,N725,N726,N727,N728 
	,N729,N730,N731,N732,N733,N734,N735,N736 
	,N737,N738,N739,N740,N741,N742,N743,N744 
	,N745,N746,N747,N748,N749,N750,N751,N752 
	,N753,N754,N755,N756,N757;
INVXL inst_cellmath__37_0_I520 (.Y(N709), .A(inst_cellmath__37_0_in1[0]));
INVX2 inst_cellmath__37_0_I521 (.Y(N710), .A(N709));
INVXL inst_cellmath__37_0_I527 (.Y(N716), .A(N710));
INVX1 inst_cellmath__37_0_I526 (.Y(N715), .A(N710));
INVX1 inst_cellmath__37_0_I525 (.Y(N714), .A(N710));
INVX1 inst_cellmath__37_0_I524 (.Y(N713), .A(N710));
INVX1 inst_cellmath__37_0_I523 (.Y(N712), .A(N710));
INVXL inst_cellmath__37_0_I522 (.Y(N711), .A(N710));
NOR2BX1 inst_cellmath__37_0_I27 (.Y(N157), .AN(inst_cellmath__37_0_in0[0]), .B(N711));
MX2XL inst_cellmath__37_0_I28 (.Y(N159), .A(inst_cellmath__37_0_in0[1]), .B(inst_cellmath__37_0_in0[0]), .S0(N711));
MX2XL inst_cellmath__37_0_I29 (.Y(N160), .A(inst_cellmath__37_0_in0[2]), .B(inst_cellmath__37_0_in0[1]), .S0(N711));
MX2XL inst_cellmath__37_0_I30 (.Y(N161), .A(inst_cellmath__37_0_in0[3]), .B(inst_cellmath__37_0_in0[2]), .S0(N712));
MX2XL inst_cellmath__37_0_I31 (.Y(N162), .A(inst_cellmath__37_0_in0[4]), .B(inst_cellmath__37_0_in0[3]), .S0(N712));
MX2XL inst_cellmath__37_0_I32 (.Y(N163), .A(inst_cellmath__37_0_in0[5]), .B(inst_cellmath__37_0_in0[4]), .S0(N712));
MX2XL inst_cellmath__37_0_I33 (.Y(N164), .A(inst_cellmath__37_0_in0[6]), .B(inst_cellmath__37_0_in0[5]), .S0(N712));
MX2XL inst_cellmath__37_0_I34 (.Y(N165), .A(inst_cellmath__37_0_in0[7]), .B(inst_cellmath__37_0_in0[6]), .S0(N712));
MX2XL inst_cellmath__37_0_I35 (.Y(N166), .A(inst_cellmath__37_0_in0[8]), .B(inst_cellmath__37_0_in0[7]), .S0(N713));
MX2XL inst_cellmath__37_0_I36 (.Y(N167), .A(inst_cellmath__37_0_in0[9]), .B(inst_cellmath__37_0_in0[8]), .S0(N713));
MX2XL inst_cellmath__37_0_I37 (.Y(N168), .A(inst_cellmath__37_0_in0[10]), .B(inst_cellmath__37_0_in0[9]), .S0(N713));
MX2XL inst_cellmath__37_0_I38 (.Y(N169), .A(inst_cellmath__37_0_in0[11]), .B(inst_cellmath__37_0_in0[10]), .S0(N713));
MX2XL inst_cellmath__37_0_I39 (.Y(N170), .A(inst_cellmath__37_0_in0[12]), .B(inst_cellmath__37_0_in0[11]), .S0(N713));
MX2XL inst_cellmath__37_0_I40 (.Y(N171), .A(inst_cellmath__37_0_in0[13]), .B(inst_cellmath__37_0_in0[12]), .S0(N714));
MX2XL inst_cellmath__37_0_I41 (.Y(N172), .A(inst_cellmath__37_0_in0[14]), .B(inst_cellmath__37_0_in0[13]), .S0(N714));
MX2XL inst_cellmath__37_0_I42 (.Y(N173), .A(inst_cellmath__37_0_in0[15]), .B(inst_cellmath__37_0_in0[14]), .S0(N714));
MX2XL inst_cellmath__37_0_I43 (.Y(N174), .A(inst_cellmath__37_0_in0[16]), .B(inst_cellmath__37_0_in0[15]), .S0(N714));
MX2XL inst_cellmath__37_0_I44 (.Y(N175), .A(inst_cellmath__37_0_in0[17]), .B(inst_cellmath__37_0_in0[16]), .S0(N714));
MX2XL inst_cellmath__37_0_I45 (.Y(N176), .A(inst_cellmath__37_0_in0[18]), .B(inst_cellmath__37_0_in0[17]), .S0(N715));
MX2XL inst_cellmath__37_0_I46 (.Y(N177), .A(inst_cellmath__37_0_in0[19]), .B(inst_cellmath__37_0_in0[18]), .S0(N715));
MX2XL inst_cellmath__37_0_I47 (.Y(N178), .A(inst_cellmath__37_0_in0[20]), .B(inst_cellmath__37_0_in0[19]), .S0(N715));
MX2XL inst_cellmath__37_0_I48 (.Y(N179), .A(inst_cellmath__37_0_in0[21]), .B(inst_cellmath__37_0_in0[20]), .S0(N715));
MX2XL inst_cellmath__37_0_I49 (.Y(N180), .A(inst_cellmath__37_0_in0[22]), .B(inst_cellmath__37_0_in0[21]), .S0(N715));
NAND2BXL inst_cellmath__37_0_I50 (.Y(N181), .AN(inst_cellmath__37_0_in0[22]), .B(N716));
INVXL inst_cellmath__37_0_I528 (.Y(N717), .A(inst_cellmath__37_0_in1[2]));
INVXL inst_cellmath__37_0_I529 (.Y(N718), .A(N717));
INVXL inst_cellmath__37_0_I535 (.Y(N724), .A(N718));
INVXL inst_cellmath__37_0_I534 (.Y(N723), .A(N718));
INVXL inst_cellmath__37_0_I533 (.Y(N722), .A(N718));
INVXL inst_cellmath__37_0_I532 (.Y(N721), .A(N718));
INVXL inst_cellmath__37_0_I531 (.Y(N720), .A(N718));
INVXL inst_cellmath__37_0_I530 (.Y(N719), .A(N718));
NAND2BXL inst_cellmath__37_0_I127 (.Y(N261), .AN(N724), .B(N157));
NAND2BXL inst_cellmath__37_0_I128 (.Y(N263), .AN(N724), .B(N159));
NAND2BXL inst_cellmath__37_0_I129 (.Y(N265), .AN(N724), .B(N160));
NAND2BXL inst_cellmath__37_0_I130 (.Y(N267), .AN(N724), .B(N161));
MXI2XL inst_cellmath__37_0_I131 (.Y(N269), .A(N162), .B(N157), .S0(N723));
MXI2XL inst_cellmath__37_0_I132 (.Y(N270), .A(N163), .B(N159), .S0(N723));
MXI2XL inst_cellmath__37_0_I133 (.Y(N271), .A(N164), .B(N160), .S0(N723));
MXI2X1 inst_cellmath__37_0_I134 (.Y(N272), .A(N165), .B(N161), .S0(N723));
MXI2X1 inst_cellmath__37_0_I135 (.Y(N273), .A(N166), .B(N162), .S0(N723));
MXI2X1 inst_cellmath__37_0_I136 (.Y(N274), .A(N167), .B(N163), .S0(N722));
MXI2X1 inst_cellmath__37_0_I137 (.Y(N275), .A(N168), .B(N164), .S0(N722));
MXI2X1 inst_cellmath__37_0_I138 (.Y(N276), .A(N169), .B(N165), .S0(N722));
MXI2X1 inst_cellmath__37_0_I139 (.Y(N277), .A(N170), .B(N166), .S0(N722));
MXI2XL inst_cellmath__37_0_I140 (.Y(N278), .A(N171), .B(N167), .S0(N722));
MXI2XL inst_cellmath__37_0_I141 (.Y(N279), .A(N172), .B(N168), .S0(N721));
MXI2X1 inst_cellmath__37_0_I142 (.Y(N280), .A(N173), .B(N169), .S0(N721));
MXI2X1 inst_cellmath__37_0_I143 (.Y(N281), .A(N174), .B(N170), .S0(N721));
MXI2X1 inst_cellmath__37_0_I144 (.Y(N282), .A(N175), .B(N171), .S0(N721));
MXI2X1 inst_cellmath__37_0_I145 (.Y(N283), .A(N176), .B(N172), .S0(N721));
MXI2X1 inst_cellmath__37_0_I146 (.Y(N284), .A(N177), .B(N173), .S0(N720));
MXI2X1 inst_cellmath__37_0_I147 (.Y(N285), .A(N178), .B(N174), .S0(N720));
MXI2XL inst_cellmath__37_0_I148 (.Y(N286), .A(N179), .B(N175), .S0(N720));
MXI2XL inst_cellmath__37_0_I149 (.Y(N287), .A(N180), .B(N176), .S0(N720));
MXI2XL inst_cellmath__37_0_I150 (.Y(N288), .A(N181), .B(N177), .S0(N720));
MXI2XL inst_cellmath__37_0_I151 (.Y(N289), .A(N711), .B(N178), .S0(N719));
NAND2XL inst_cellmath__37_0_I152 (.Y(N290), .A(N179), .B(N719));
NAND2XL inst_cellmath__37_0_I153 (.Y(N292), .A(N180), .B(N719));
NAND2XL inst_cellmath__37_0_I154 (.Y(N294), .A(N181), .B(N719));
NAND2XL inst_cellmath__37_0_I155 (.Y(N296), .A(N711), .B(N719));
INVXL inst_cellmath__37_0_I536 (.Y(N725), .A(inst_cellmath__37_0_in1[1]));
INVXL inst_cellmath__37_0_I543 (.Y(N732), .A(N725));
INVXL inst_cellmath__37_0_I542 (.Y(N731), .A(N725));
INVXL inst_cellmath__37_0_I541 (.Y(N730), .A(N725));
INVXL inst_cellmath__37_0_I540 (.Y(N729), .A(N725));
INVXL inst_cellmath__37_0_I539 (.Y(N728), .A(N725));
INVXL inst_cellmath__37_0_I538 (.Y(N727), .A(N725));
INVXL inst_cellmath__37_0_I537 (.Y(N726), .A(N725));
NOR2BX1 inst_cellmath__37_0_I229 (.Y(N371), .AN(N732), .B(N261));
NOR2BX1 inst_cellmath__37_0_I230 (.Y(N373), .AN(N731), .B(N263));
MXI2XL inst_cellmath__37_0_I231 (.Y(N375), .A(N261), .B(N265), .S0(N731));
MXI2XL inst_cellmath__37_0_I232 (.Y(N376), .A(N263), .B(N267), .S0(N731));
MXI2XL inst_cellmath__37_0_I233 (.Y(N377), .A(N265), .B(N269), .S0(N731));
MXI2XL inst_cellmath__37_0_I234 (.Y(N378), .A(N267), .B(N270), .S0(N731));
MXI2XL inst_cellmath__37_0_I235 (.Y(N379), .A(N269), .B(N271), .S0(N730));
MXI2XL inst_cellmath__37_0_I236 (.Y(N380), .A(N270), .B(N272), .S0(N730));
MXI2XL inst_cellmath__37_0_I237 (.Y(N381), .A(N271), .B(N273), .S0(N730));
MXI2X1 inst_cellmath__37_0_I238 (.Y(N382), .A(N272), .B(N274), .S0(N730));
MXI2X1 inst_cellmath__37_0_I239 (.Y(N383), .A(N273), .B(N275), .S0(N730));
MXI2X1 inst_cellmath__37_0_I240 (.Y(N384), .A(N274), .B(N276), .S0(N729));
MXI2X1 inst_cellmath__37_0_I241 (.Y(N385), .A(N275), .B(N277), .S0(N729));
MXI2X1 inst_cellmath__37_0_I242 (.Y(N386), .A(N276), .B(N278), .S0(N729));
MXI2XL inst_cellmath__37_0_I243 (.Y(N387), .A(N277), .B(N279), .S0(N729));
MXI2XL inst_cellmath__37_0_I244 (.Y(N388), .A(N278), .B(N280), .S0(N729));
MXI2XL inst_cellmath__37_0_I245 (.Y(N389), .A(N279), .B(N281), .S0(N728));
MXI2X1 inst_cellmath__37_0_I246 (.Y(N390), .A(N280), .B(N282), .S0(N728));
MXI2X1 inst_cellmath__37_0_I247 (.Y(N391), .A(N281), .B(N283), .S0(N728));
MXI2X1 inst_cellmath__37_0_I248 (.Y(N392), .A(N282), .B(N284), .S0(N728));
MXI2X1 inst_cellmath__37_0_I249 (.Y(N393), .A(N283), .B(N285), .S0(N728));
MXI2X1 inst_cellmath__37_0_I250 (.Y(N394), .A(N284), .B(N286), .S0(N727));
MXI2XL inst_cellmath__37_0_I251 (.Y(N395), .A(N285), .B(N287), .S0(N727));
MXI2XL inst_cellmath__37_0_I252 (.Y(N396), .A(N286), .B(N288), .S0(N727));
MXI2XL inst_cellmath__37_0_I253 (.Y(N397), .A(N287), .B(N289), .S0(N727));
MXI2XL inst_cellmath__37_0_I254 (.Y(N398), .A(N288), .B(N290), .S0(N727));
MXI2XL inst_cellmath__37_0_I255 (.Y(N399), .A(N289), .B(N292), .S0(N726));
MXI2XL inst_cellmath__37_0_I256 (.Y(N400), .A(N290), .B(N294), .S0(N726));
MXI2XL inst_cellmath__37_0_I257 (.Y(N401), .A(N292), .B(N296), .S0(N726));
NOR2XL inst_cellmath__37_0_I258 (.Y(N402), .A(N294), .B(N726));
NOR2XL inst_cellmath__37_0_I259 (.Y(N404), .A(N296), .B(N726));
INVXL inst_cellmath__37_0_I544 (.Y(N733), .A(inst_cellmath__37_0_in1[3]));
INVXL inst_cellmath__37_0_I551 (.Y(N740), .A(N733));
INVXL inst_cellmath__37_0_I545 (.Y(N734), .A(N733));
INVXL inst_cellmath__37_0_I554 (.Y(N743), .A(N740));
INVXL inst_cellmath__37_0_I553 (.Y(N742), .A(N740));
INVXL inst_cellmath__37_0_I552 (.Y(N741), .A(N740));
INVXL inst_cellmath__37_0_I550 (.Y(N739), .A(N734));
INVXL inst_cellmath__37_0_I549 (.Y(N738), .A(N734));
INVXL inst_cellmath__37_0_I548 (.Y(N737), .A(N734));
INVXL inst_cellmath__37_0_I547 (.Y(N736), .A(N734));
INVXL inst_cellmath__37_0_I546 (.Y(N735), .A(N734));
NAND2BXL inst_cellmath__37_0_I325 (.Y(N471), .AN(N743), .B(N371));
NAND2BXL inst_cellmath__37_0_I326 (.Y(N473), .AN(N743), .B(N373));
NAND2BXL inst_cellmath__37_0_I327 (.Y(N475), .AN(N743), .B(N375));
NAND2BXL inst_cellmath__37_0_I328 (.Y(N477), .AN(N743), .B(N376));
NAND2BXL inst_cellmath__37_0_I329 (.Y(N479), .AN(N742), .B(N377));
NAND2BXL inst_cellmath__37_0_I330 (.Y(N481), .AN(N742), .B(N378));
NAND2BXL inst_cellmath__37_0_I331 (.Y(N483), .AN(N742), .B(N379));
NAND2BXL inst_cellmath__37_0_I332 (.Y(N485), .AN(N742), .B(N380));
MXI2XL inst_cellmath__37_0_I333 (.Y(N487), .A(N381), .B(N371), .S0(N742));
MXI2XL inst_cellmath__37_0_I334 (.Y(N488), .A(N382), .B(N373), .S0(N741));
MXI2XL inst_cellmath__37_0_I335 (.Y(N489), .A(N383), .B(N375), .S0(N741));
MXI2XL inst_cellmath__37_0_I336 (.Y(N490), .A(N384), .B(N376), .S0(N741));
MXI2XL inst_cellmath__37_0_I337 (.Y(N491), .A(N385), .B(N377), .S0(N741));
MXI2XL inst_cellmath__37_0_I338 (.Y(N492), .A(N386), .B(N378), .S0(N741));
MXI2XL inst_cellmath__37_0_I339 (.Y(N493), .A(N387), .B(N379), .S0(N739));
MXI2XL inst_cellmath__37_0_I340 (.Y(N494), .A(N388), .B(N380), .S0(N739));
MXI2XL inst_cellmath__37_0_I341 (.Y(N495), .A(N389), .B(N381), .S0(N739));
MXI2X1 inst_cellmath__37_0_I342 (.Y(N496), .A(N390), .B(N382), .S0(N739));
MXI2X1 inst_cellmath__37_0_I343 (.Y(N497), .A(N391), .B(N383), .S0(N739));
MXI2X1 inst_cellmath__37_0_I344 (.Y(N498), .A(N392), .B(N384), .S0(N738));
MXI2X1 inst_cellmath__37_0_I345 (.Y(N499), .A(N393), .B(N385), .S0(N738));
MXI2X1 inst_cellmath__37_0_I346 (.Y(N500), .A(N394), .B(N386), .S0(N738));
MXI2XL inst_cellmath__37_0_I347 (.Y(N501), .A(N395), .B(N387), .S0(N738));
MXI2XL inst_cellmath__37_0_I348 (.Y(N502), .A(N396), .B(N388), .S0(N738));
MXI2XL inst_cellmath__37_0_I349 (.Y(N503), .A(N397), .B(N389), .S0(N737));
MXI2XL inst_cellmath__37_0_I350 (.Y(N504), .A(N398), .B(N390), .S0(N737));
MXI2XL inst_cellmath__37_0_I351 (.Y(N505), .A(N399), .B(N391), .S0(N737));
MXI2XL inst_cellmath__37_0_I352 (.Y(N506), .A(N400), .B(N392), .S0(N737));
MXI2XL inst_cellmath__37_0_I353 (.Y(N507), .A(N401), .B(N393), .S0(N737));
MXI2XL inst_cellmath__37_0_I354 (.Y(N508), .A(N402), .B(N394), .S0(N736));
MXI2X1 inst_cellmath__37_0_I355 (.Y(N509), .A(N404), .B(N395), .S0(N736));
NAND2XL inst_cellmath__37_0_I356 (.Y(N510), .A(N396), .B(N736));
NAND2XL inst_cellmath__37_0_I357 (.Y(N512), .A(N397), .B(N736));
NAND2XL inst_cellmath__37_0_I358 (.Y(N514), .A(N398), .B(N736));
NAND2XL inst_cellmath__37_0_I359 (.Y(N516), .A(N399), .B(N735));
NAND2XL inst_cellmath__37_0_I360 (.Y(N518), .A(N400), .B(N735));
NAND2XL inst_cellmath__37_0_I361 (.Y(N520), .A(N401), .B(N735));
NAND2XL inst_cellmath__37_0_I362 (.Y(N522), .A(N402), .B(N735));
NAND2XL inst_cellmath__37_0_I363 (.Y(N524), .A(N404), .B(N735));
INVXL inst_cellmath__37_0_I555 (.Y(N744), .A(inst_cellmath__37_0_in1[4]));
INVXL inst_cellmath__37_0_I556 (.Y(N745), .A(N744));
INVXL inst_cellmath__37_0_I563 (.Y(N752), .A(N745));
INVXL inst_cellmath__37_0_I557 (.Y(N746), .A(N745));
INVXL inst_cellmath__37_0_I568 (.Y(N757), .A(N752));
INVXL inst_cellmath__37_0_I567 (.Y(N756), .A(N752));
INVXL inst_cellmath__37_0_I566 (.Y(N755), .A(N752));
INVXL inst_cellmath__37_0_I565 (.Y(N754), .A(N752));
INVXL inst_cellmath__37_0_I564 (.Y(N753), .A(N752));
INVXL inst_cellmath__37_0_I562 (.Y(N751), .A(N746));
INVXL inst_cellmath__37_0_I561 (.Y(N750), .A(N746));
INVXL inst_cellmath__37_0_I560 (.Y(N749), .A(N746));
INVXL inst_cellmath__37_0_I559 (.Y(N748), .A(N746));
INVXL inst_cellmath__37_0_I558 (.Y(N747), .A(N746));
NOR2BX1 inst_cellmath__37_0_I418 (.Y(inst_cellmath__37_0_out0[0]), .AN(N757), .B(N481));
NOR2BX1 inst_cellmath__37_0_I419 (.Y(inst_cellmath__37_0_out0[1]), .AN(N757), .B(N483));
NOR2BX1 inst_cellmath__37_0_I420 (.Y(inst_cellmath__37_0_out0[2]), .AN(N757), .B(N485));
NOR2BX1 inst_cellmath__37_0_I421 (.Y(inst_cellmath__37_0_out0[3]), .AN(N757), .B(N487));
NOR2BX1 inst_cellmath__37_0_I422 (.Y(inst_cellmath__37_0_out0[4]), .AN(N757), .B(N488));
NOR2BX1 inst_cellmath__37_0_I423 (.Y(inst_cellmath__37_0_out0[5]), .AN(N756), .B(N489));
NOR2BX1 inst_cellmath__37_0_I424 (.Y(inst_cellmath__37_0_out0[6]), .AN(N756), .B(N490));
NOR2BX1 inst_cellmath__37_0_I425 (.Y(inst_cellmath__37_0_out0[7]), .AN(N756), .B(N491));
NOR2BX1 inst_cellmath__37_0_I426 (.Y(inst_cellmath__37_0_out0[8]), .AN(N756), .B(N492));
NOR2BX1 inst_cellmath__37_0_I427 (.Y(inst_cellmath__37_0_out0[9]), .AN(N756), .B(N493));
NOR2BX1 inst_cellmath__37_0_I428 (.Y(inst_cellmath__37_0_out0[10]), .AN(N755), .B(N494));
MXI2XL inst_cellmath__37_0_I429 (.Y(inst_cellmath__37_0_out0[11]), .A(N471), .B(N495), .S0(N755));
MXI2X1 inst_cellmath__37_0_I430 (.Y(inst_cellmath__37_0_out0[12]), .A(N473), .B(N496), .S0(N755));
MXI2X1 inst_cellmath__37_0_I431 (.Y(inst_cellmath__37_0_out0[13]), .A(N475), .B(N497), .S0(N755));
MXI2X1 inst_cellmath__37_0_I432 (.Y(inst_cellmath__37_0_out0[14]), .A(N477), .B(N498), .S0(N755));
MXI2X1 inst_cellmath__37_0_I433 (.Y(inst_cellmath__37_0_out0[15]), .A(N479), .B(N499), .S0(N754));
MXI2X1 inst_cellmath__37_0_I434 (.Y(inst_cellmath__37_0_out0[16]), .A(N481), .B(N500), .S0(N754));
MXI2XL inst_cellmath__37_0_I435 (.Y(inst_cellmath__37_0_out0[17]), .A(N483), .B(N501), .S0(N754));
MXI2XL inst_cellmath__37_0_I436 (.Y(inst_cellmath__37_0_out0[18]), .A(N485), .B(N502), .S0(N754));
MXI2XL inst_cellmath__37_0_I437 (.Y(inst_cellmath__37_0_out0[19]), .A(N487), .B(N503), .S0(N754));
MXI2XL inst_cellmath__37_0_I438 (.Y(inst_cellmath__37_0_out0[20]), .A(N488), .B(N504), .S0(N753));
MXI2XL inst_cellmath__37_0_I439 (.Y(inst_cellmath__37_0_out0[21]), .A(N489), .B(N505), .S0(N753));
MXI2XL inst_cellmath__37_0_I440 (.Y(inst_cellmath__37_0_out0[22]), .A(N490), .B(N506), .S0(N753));
MXI2XL inst_cellmath__37_0_I441 (.Y(inst_cellmath__37_0_out0[23]), .A(N491), .B(N507), .S0(N753));
MXI2XL inst_cellmath__37_0_I442 (.Y(inst_cellmath__37_0_out0[24]), .A(N492), .B(N508), .S0(N753));
MXI2XL inst_cellmath__37_0_I443 (.Y(inst_cellmath__37_0_out0[25]), .A(N493), .B(N509), .S0(N751));
MXI2XL inst_cellmath__37_0_I444 (.Y(inst_cellmath__37_0_out0[26]), .A(N494), .B(N510), .S0(N751));
MXI2XL inst_cellmath__37_0_I445 (.Y(inst_cellmath__37_0_out0[27]), .A(N495), .B(N512), .S0(N751));
MXI2XL inst_cellmath__37_0_I446 (.Y(inst_cellmath__37_0_out0[28]), .A(N496), .B(N514), .S0(N751));
MXI2XL inst_cellmath__37_0_I447 (.Y(inst_cellmath__37_0_out0[29]), .A(N497), .B(N516), .S0(N751));
MXI2XL inst_cellmath__37_0_I448 (.Y(inst_cellmath__37_0_out0[30]), .A(N498), .B(N518), .S0(N750));
MXI2XL inst_cellmath__37_0_I449 (.Y(inst_cellmath__37_0_out0[31]), .A(N499), .B(N520), .S0(N750));
MXI2XL inst_cellmath__37_0_I450 (.Y(inst_cellmath__37_0_out0[32]), .A(N500), .B(N522), .S0(N750));
MXI2XL inst_cellmath__37_0_I451 (.Y(inst_cellmath__37_0_out0[33]), .A(N501), .B(N524), .S0(N750));
NOR2XL inst_cellmath__37_0_I452 (.Y(inst_cellmath__37_0_out0[34]), .A(N502), .B(N750));
NOR2XL inst_cellmath__37_0_I453 (.Y(inst_cellmath__37_0_out0[35]), .A(N503), .B(N749));
NOR2XL inst_cellmath__37_0_I454 (.Y(inst_cellmath__37_0_out0[36]), .A(N504), .B(N749));
NOR2XL inst_cellmath__37_0_I455 (.Y(inst_cellmath__37_0_out0[37]), .A(N505), .B(N749));
NOR2XL inst_cellmath__37_0_I456 (.Y(inst_cellmath__37_0_out0[38]), .A(N506), .B(N749));
NOR2XL inst_cellmath__37_0_I457 (.Y(inst_cellmath__37_0_out0[39]), .A(N507), .B(N749));
NOR2XL inst_cellmath__37_0_I458 (.Y(inst_cellmath__37_0_out0[40]), .A(N508), .B(N748));
NOR2XL inst_cellmath__37_0_I459 (.Y(inst_cellmath__37_0_out0[41]), .A(N509), .B(N748));
NOR2XL inst_cellmath__37_0_I460 (.Y(inst_cellmath__37_0_out0[42]), .A(N510), .B(N748));
NOR2XL inst_cellmath__37_0_I461 (.Y(inst_cellmath__37_0_out0[43]), .A(N512), .B(N748));
NOR2XL inst_cellmath__37_0_I462 (.Y(inst_cellmath__37_0_out0[44]), .A(N514), .B(N748));
NOR2XL inst_cellmath__37_0_I463 (.Y(inst_cellmath__37_0_out0[45]), .A(N516), .B(N747));
NOR2XL inst_cellmath__37_0_I464 (.Y(inst_cellmath__37_0_out0[46]), .A(N518), .B(N747));
NOR2XL inst_cellmath__37_0_I465 (.Y(inst_cellmath__37_0_out0[47]), .A(N520), .B(N747));
NOR2XL inst_cellmath__37_0_I466 (.Y(inst_cellmath__37_0_out0[48]), .A(N522), .B(N747));
NOR2XL inst_cellmath__37_0_I467 (.Y(inst_cellmath__37_0_out0[49]), .A(N524), .B(N747));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__33_49_24_bdw105316586_bdw (
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

module cynw_cm_float_add2_ieee_inst_cellmath__42__22__bdw105316586_bdw (
	inst_cellmath__42__22__out0,
	inst_cellmath__42__22__in0,
	inst_cellmath__42__22__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__42__22__out0;
input [23:0] inst_cellmath__42__22__in0;
input  inst_cellmath__42__22__in1;
wire N31,N34,N36,N37,N38,N39,N40 
	,N41,N45,N46,N47,N49,N50,N51,N52 
	,N53,N54,N55,N56;
NOR3XL inst_cellmath__42__22__I44 (.Y(N31), .A(inst_cellmath__42__22__in1), .B(inst_cellmath__42__22__in0[2]), .C(inst_cellmath__42__22__in0[5]));
NOR3XL inst_cellmath__42__22__I45 (.Y(N34), .A(inst_cellmath__42__22__in0[1]), .B(inst_cellmath__42__22__in0[0]), .C(inst_cellmath__42__22__in0[6]));
NOR2XL inst_cellmath__42__22__I8 (.Y(N36), .A(inst_cellmath__42__22__in0[12]), .B(inst_cellmath__42__22__in0[9]));
NOR2XL inst_cellmath__42__22__I9 (.Y(N37), .A(inst_cellmath__42__22__in0[13]), .B(inst_cellmath__42__22__in0[14]));
NOR2XL inst_cellmath__42__22__I10 (.Y(N38), .A(inst_cellmath__42__22__in0[16]), .B(inst_cellmath__42__22__in0[8]));
NOR2XL inst_cellmath__42__22__I11 (.Y(N39), .A(inst_cellmath__42__22__in0[21]), .B(inst_cellmath__42__22__in0[20]));
NOR2XL inst_cellmath__42__22__I12 (.Y(N40), .A(inst_cellmath__42__22__in0[11]), .B(inst_cellmath__42__22__in0[19]));
NOR2XL inst_cellmath__42__22__I13 (.Y(N41), .A(inst_cellmath__42__22__in0[10]), .B(inst_cellmath__42__22__in0[23]));
OR3XL inst_cellmath__42__22__I108 (.Y(N51), .A(inst_cellmath__42__22__in0[4]), .B(inst_cellmath__42__22__in0[3]), .C(inst_cellmath__42__22__in0[22]));
OR3XL inst_cellmath__42__22__I31 (.Y(N45), .A(inst_cellmath__42__22__in0[7]), .B(inst_cellmath__42__22__in0[15]), .C(inst_cellmath__42__22__in0[17]));
NAND2XL inst_cellmath__42__22__I18 (.Y(N46), .A(N36), .B(N37));
NAND2XL inst_cellmath__42__22__I19 (.Y(N47), .A(N31), .B(N38));
AND2XL inst_cellmath__42__22__I20 (.Y(N54), .A(N41), .B(N40));
NAND2XL inst_cellmath__42__22__I21 (.Y(N49), .A(N39), .B(N34));
NOR2XL inst_cellmath__42__22__I22 (.Y(N50), .A(inst_cellmath__42__22__in0[18]), .B(N47));
NOR2XL inst_cellmath__42__22__I24 (.Y(N52), .A(N51), .B(N46));
NOR2XL inst_cellmath__42__22__I25 (.Y(N53), .A(N45), .B(N49));
NAND2XL inst_cellmath__42__22__I27 (.Y(N55), .A(N54), .B(N50));
NAND2XL inst_cellmath__42__22__I28 (.Y(N56), .A(N52), .B(N53));
OR2X1 inst_cellmath__42__22__I29 (.Y(inst_cellmath__42__22__out0[0]), .A(N55), .B(N56));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__42_0_bdw105316586_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__42_0_out0;
input [0:0] inst_cellmath__42_0_in0;
input  inst_cellmath__42_0_in1;
wire N5,N6;
INVXL inst_cellmath__42_0_I0 (.Y(N5), .A(inst_cellmath__42_0_in1));
NAND2X4 inst_cellmath__42_0_I1 (.Y(N6), .A(N5), .B(inst_cellmath__42_0_in0[0]));
INVX4 inst_cellmath__42_0_I2 (.Y(inst_cellmath__42_0_out0), .A(N6));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__44_0_bdw105316586_bdw (
	inst_cellmath__44_0_out0,
	inst_cellmath__44_0_in0,
	inst_cellmath__44_0_in1,
	inst_cellmath__44_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__44_0_out0;
input  inst_cellmath__44_0_in0;
input [24:24] inst_cellmath__44_0_in1;
input  inst_cellmath__44_0_in2;
wire N8,N18;
INVXL inst_cellmath__44_0_I6 (.Y(N18), .A(inst_cellmath__44_0_in2));
OR2XL inst_cellmath__44_0_I1 (.Y(N8), .A(N18), .B(inst_cellmath__44_0_in1[24]));
NOR2X6 inst_cellmath__44_0_I3 (.Y(inst_cellmath__44_0_out0), .A(N8), .B(inst_cellmath__44_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__40_bdw105316586_bdw (
	inst_cellmath__40_out0,
	inst_cellmath__40_in0,
	inst_cellmath__40_in1,
	inst_cellmath__40_in2
	); /* architecture "gate_level" */ 
output [23:0] inst_cellmath__40_out0;
input  inst_cellmath__40_in0;
input [22:0] inst_cellmath__40_in1,
	inst_cellmath__40_in2;
wire N310,N312,N313,N314,N315;
INVX3 inst_cellmath__40_I73 (.Y(N310), .A(inst_cellmath__40_in0));
INVXL inst_cellmath__40_I78 (.Y(N315), .A(N310));
MX2XL inst_cellmath__40_I49 (.Y(inst_cellmath__40_out0[1]), .A(inst_cellmath__40_in2[0]), .B(inst_cellmath__40_in1[0]), .S0(N315));
MX2XL inst_cellmath__40_I50 (.Y(inst_cellmath__40_out0[2]), .A(inst_cellmath__40_in2[1]), .B(inst_cellmath__40_in1[1]), .S0(N315));
MX2XL inst_cellmath__40_I51 (.Y(inst_cellmath__40_out0[3]), .A(inst_cellmath__40_in2[2]), .B(inst_cellmath__40_in1[2]), .S0(N315));
INVX2 inst_cellmath__40_I77 (.Y(N314), .A(N310));
MX2XL inst_cellmath__40_I52 (.Y(inst_cellmath__40_out0[4]), .A(inst_cellmath__40_in2[3]), .B(inst_cellmath__40_in1[3]), .S0(N314));
MX2XL inst_cellmath__40_I53 (.Y(inst_cellmath__40_out0[5]), .A(inst_cellmath__40_in2[4]), .B(inst_cellmath__40_in1[4]), .S0(N314));
MX2XL inst_cellmath__40_I54 (.Y(inst_cellmath__40_out0[6]), .A(inst_cellmath__40_in2[5]), .B(inst_cellmath__40_in1[5]), .S0(N314));
MX2XL inst_cellmath__40_I55 (.Y(inst_cellmath__40_out0[7]), .A(inst_cellmath__40_in2[6]), .B(inst_cellmath__40_in1[6]), .S0(N314));
MX2XL inst_cellmath__40_I56 (.Y(inst_cellmath__40_out0[8]), .A(inst_cellmath__40_in2[7]), .B(inst_cellmath__40_in1[7]), .S0(N314));
INVX1 inst_cellmath__40_I76 (.Y(N313), .A(N310));
MX2XL inst_cellmath__40_I57 (.Y(inst_cellmath__40_out0[9]), .A(inst_cellmath__40_in2[8]), .B(inst_cellmath__40_in1[8]), .S0(N313));
MX2XL inst_cellmath__40_I58 (.Y(inst_cellmath__40_out0[10]), .A(inst_cellmath__40_in2[9]), .B(inst_cellmath__40_in1[9]), .S0(N313));
MX2XL inst_cellmath__40_I59 (.Y(inst_cellmath__40_out0[11]), .A(inst_cellmath__40_in2[10]), .B(inst_cellmath__40_in1[10]), .S0(N313));
MX2XL inst_cellmath__40_I60 (.Y(inst_cellmath__40_out0[12]), .A(inst_cellmath__40_in2[11]), .B(inst_cellmath__40_in1[11]), .S0(N313));
MX2XL inst_cellmath__40_I61 (.Y(inst_cellmath__40_out0[13]), .A(inst_cellmath__40_in2[12]), .B(inst_cellmath__40_in1[12]), .S0(N313));
INVX1 inst_cellmath__40_I75 (.Y(N312), .A(N310));
MX2XL inst_cellmath__40_I62 (.Y(inst_cellmath__40_out0[14]), .A(inst_cellmath__40_in2[13]), .B(inst_cellmath__40_in1[13]), .S0(N312));
MX2XL inst_cellmath__40_I63 (.Y(inst_cellmath__40_out0[15]), .A(inst_cellmath__40_in2[14]), .B(inst_cellmath__40_in1[14]), .S0(N312));
MX2XL inst_cellmath__40_I64 (.Y(inst_cellmath__40_out0[16]), .A(inst_cellmath__40_in2[15]), .B(inst_cellmath__40_in1[15]), .S0(N312));
MX2XL inst_cellmath__40_I65 (.Y(inst_cellmath__40_out0[17]), .A(inst_cellmath__40_in2[16]), .B(inst_cellmath__40_in1[16]), .S0(N312));
MX2XL inst_cellmath__40_I66 (.Y(inst_cellmath__40_out0[18]), .A(inst_cellmath__40_in2[17]), .B(inst_cellmath__40_in1[17]), .S0(N312));
MX2XL inst_cellmath__40_I67 (.Y(inst_cellmath__40_out0[19]), .A(inst_cellmath__40_in2[18]), .B(inst_cellmath__40_in1[18]), .S0(N314));
MX2XL inst_cellmath__40_I68 (.Y(inst_cellmath__40_out0[20]), .A(inst_cellmath__40_in2[19]), .B(inst_cellmath__40_in1[19]), .S0(N314));
MX2XL inst_cellmath__40_I69 (.Y(inst_cellmath__40_out0[21]), .A(inst_cellmath__40_in2[20]), .B(inst_cellmath__40_in1[20]), .S0(N314));
MX2XL inst_cellmath__40_I70 (.Y(inst_cellmath__40_out0[22]), .A(inst_cellmath__40_in2[21]), .B(inst_cellmath__40_in1[21]), .S0(N314));
MX2XL inst_cellmath__40_I71 (.Y(inst_cellmath__40_out0[23]), .A(inst_cellmath__40_in2[22]), .B(inst_cellmath__40_in1[22]), .S0(N314));
assign inst_cellmath__40_out0[0] = 1'B0;
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__39__19__2mx_bdw105316586_bdw (
	inst_cellmath__39__19__2mx_out0,
	inst_cellmath__39__19__2mx_in0,
	inst_cellmath__39__19__2mx_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39__19__2mx_out0;
input [49:25] inst_cellmath__39__19__2mx_in0;
input  inst_cellmath__39__19__2mx_in1;
wire N256,N262;
INVXL inst_cellmath__39__19__2mx_I55 (.Y(N262), .A(inst_cellmath__39__19__2mx_in1));
XNOR2X1 inst_cellmath__39__19__2mx_I26 (.Y(inst_cellmath__39__19__2mx_out0[0]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[25]));
XNOR2X1 inst_cellmath__39__19__2mx_I27 (.Y(inst_cellmath__39__19__2mx_out0[1]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[26]));
XNOR2X1 inst_cellmath__39__19__2mx_I28 (.Y(inst_cellmath__39__19__2mx_out0[2]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[27]));
XNOR2X1 inst_cellmath__39__19__2mx_I29 (.Y(inst_cellmath__39__19__2mx_out0[3]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[28]));
XNOR2X1 inst_cellmath__39__19__2mx_I30 (.Y(inst_cellmath__39__19__2mx_out0[4]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[29]));
XNOR2X1 inst_cellmath__39__19__2mx_I31 (.Y(inst_cellmath__39__19__2mx_out0[5]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[30]));
XNOR2X1 inst_cellmath__39__19__2mx_I32 (.Y(inst_cellmath__39__19__2mx_out0[6]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[31]));
XNOR2X1 inst_cellmath__39__19__2mx_I33 (.Y(inst_cellmath__39__19__2mx_out0[7]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[32]));
INVXL xnor2_A_I51 (.Y(N256), .A(N262));
MXI2XL xnor2_A_I52 (.Y(inst_cellmath__39__19__2mx_out0[8]), .A(N262), .B(N256), .S0(inst_cellmath__39__19__2mx_in0[33]));
XNOR2X1 inst_cellmath__39__19__2mx_I35 (.Y(inst_cellmath__39__19__2mx_out0[9]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[34]));
XNOR2X1 inst_cellmath__39__19__2mx_I36 (.Y(inst_cellmath__39__19__2mx_out0[10]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[35]));
XNOR2X1 inst_cellmath__39__19__2mx_I37 (.Y(inst_cellmath__39__19__2mx_out0[11]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[36]));
XNOR2X1 inst_cellmath__39__19__2mx_I38 (.Y(inst_cellmath__39__19__2mx_out0[12]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[37]));
XNOR2X1 inst_cellmath__39__19__2mx_I39 (.Y(inst_cellmath__39__19__2mx_out0[13]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[38]));
XNOR2X1 inst_cellmath__39__19__2mx_I40 (.Y(inst_cellmath__39__19__2mx_out0[14]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[39]));
XNOR2X1 inst_cellmath__39__19__2mx_I41 (.Y(inst_cellmath__39__19__2mx_out0[15]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[40]));
XNOR2X1 inst_cellmath__39__19__2mx_I42 (.Y(inst_cellmath__39__19__2mx_out0[16]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[41]));
XNOR2X1 inst_cellmath__39__19__2mx_I43 (.Y(inst_cellmath__39__19__2mx_out0[17]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[42]));
XNOR2X1 inst_cellmath__39__19__2mx_I44 (.Y(inst_cellmath__39__19__2mx_out0[18]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[43]));
XNOR2X1 inst_cellmath__39__19__2mx_I45 (.Y(inst_cellmath__39__19__2mx_out0[19]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[44]));
XNOR2X1 inst_cellmath__39__19__2mx_I46 (.Y(inst_cellmath__39__19__2mx_out0[20]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[45]));
XNOR2X1 inst_cellmath__39__19__2mx_I47 (.Y(inst_cellmath__39__19__2mx_out0[21]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[46]));
XNOR2X1 inst_cellmath__39__19__2mx_I48 (.Y(inst_cellmath__39__19__2mx_out0[22]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[47]));
XNOR2X1 inst_cellmath__39__19__2mx_I49 (.Y(inst_cellmath__39__19__2mx_out0[23]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[48]));
XNOR2X1 inst_cellmath__39__19__2mx_I50 (.Y(inst_cellmath__39__19__2mx_out0[24]), .A(N262), .B(inst_cellmath__39__19__2mx_in0[49]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__45_0_bdw105316586_bdw (
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
wire N300,N301,N302,N303,N304,N305,N306 
	,N307,N308,N309,N310,N311,N312,N313,N314 
	,N315,N316,N317,N318,N319,N320,N321,N322 
	,N323,N324,N325,N326,N327,N328,N329,N330 
	,N331,N332,N333,N334,N335,N336,N337,N338 
	,N339,N340,N341,N342,N343,N344,N345,N346 
	,N347,N351,N353,N354,N355,N356,N357,N358 
	,N359,N360,N361,N362,N363,N364,N365,N366 
	,N367,N368,N369,N370,N371,N372,N373,N374 
	,N375,N376,N377,N378,N379,N380,N381,N382 
	,N383,N384,N385,N386,N387,N388,N389,N390 
	,N391,N392,N393,N394,N395,N396,N399,N408 
	,N410,N412,N413,N414,N415,N416,N417,N418 
	,N419,N420,N421,N422,N423,N424,N425,N426 
	,N427,N428,N429,N430,N431,N432,N433,N434 
	,N435,N436,N437,N438,N439,N440,N441,N442 
	,N443,N444,N445,N446,N447,N448,N449,N450 
	,N451,N452,N453,N464,N466,N468,N470,N472 
	,N473,N474,N475,N476,N477,N478,N479,N480 
	,N481,N482,N483,N484,N485,N486,N487,N488 
	,N489,N490,N491,N492,N493,N494,N495,N496 
	,N497,N498,N499,N500,N501,N502,N503,N504 
	,N505,N524,N536,N540,N541,N542,N543,N544 
	,N545,N546,N547,N548,N549,N550,N551,N552 
	,N553,N554,N555,N556,N557,N592,N594,N596 
	,N598,N600,N602,N604,N606,N608,N642,N645 
	,N648,N651,N654,N657,N660,N663,N666,N669 
	,N672,N675,N678,N681,N684,N687,N690,N693 
	,N696,N699,N702,N705,N708,N884,N890,N896 
	,N1012,N1013,N1014,N1015,N1016,N1017,N1018,N1019 
	,N1020,N1021,N1022,N1023,N1024,N1025,N1026,N1036 
	,N1037,N1038,N1039,N1040,N1042;
NAND2X4 inst_cellmath__45_0_I65 (.Y(N300), .A(inst_cellmath__45_0_in2[0]), .B(inst_cellmath__45_0_in0));
NOR2X1 inst_cellmath__45_0_I66 (.Y(N301), .A(inst_cellmath__45_0_in1[1]), .B(inst_cellmath__45_0_in2[1]));
NAND2XL inst_cellmath__45_0_I67 (.Y(N302), .A(inst_cellmath__45_0_in1[1]), .B(inst_cellmath__45_0_in2[1]));
NOR2XL inst_cellmath__45_0_I68 (.Y(N303), .A(inst_cellmath__45_0_in1[2]), .B(inst_cellmath__45_0_in2[2]));
NAND2XL inst_cellmath__45_0_I69 (.Y(N304), .A(inst_cellmath__45_0_in1[2]), .B(inst_cellmath__45_0_in2[2]));
NOR2XL inst_cellmath__45_0_I70 (.Y(N305), .A(inst_cellmath__45_0_in1[3]), .B(inst_cellmath__45_0_in2[3]));
NAND2XL inst_cellmath__45_0_I71 (.Y(N306), .A(inst_cellmath__45_0_in1[3]), .B(inst_cellmath__45_0_in2[3]));
NOR2XL inst_cellmath__45_0_I72 (.Y(N307), .A(inst_cellmath__45_0_in1[4]), .B(inst_cellmath__45_0_in2[4]));
NAND2XL inst_cellmath__45_0_I73 (.Y(N308), .A(inst_cellmath__45_0_in1[4]), .B(inst_cellmath__45_0_in2[4]));
NOR2XL inst_cellmath__45_0_I74 (.Y(N309), .A(inst_cellmath__45_0_in1[5]), .B(inst_cellmath__45_0_in2[5]));
NAND2XL inst_cellmath__45_0_I75 (.Y(N310), .A(inst_cellmath__45_0_in1[5]), .B(inst_cellmath__45_0_in2[5]));
NOR2XL inst_cellmath__45_0_I76 (.Y(N311), .A(inst_cellmath__45_0_in1[6]), .B(inst_cellmath__45_0_in2[6]));
NAND2XL inst_cellmath__45_0_I77 (.Y(N312), .A(inst_cellmath__45_0_in1[6]), .B(inst_cellmath__45_0_in2[6]));
NOR2XL inst_cellmath__45_0_I78 (.Y(N313), .A(inst_cellmath__45_0_in1[7]), .B(inst_cellmath__45_0_in2[7]));
NAND2XL inst_cellmath__45_0_I79 (.Y(N314), .A(inst_cellmath__45_0_in1[7]), .B(inst_cellmath__45_0_in2[7]));
NOR2XL inst_cellmath__45_0_I80 (.Y(N315), .A(inst_cellmath__45_0_in1[8]), .B(inst_cellmath__45_0_in2[8]));
NAND2XL inst_cellmath__45_0_I81 (.Y(N316), .A(inst_cellmath__45_0_in1[8]), .B(inst_cellmath__45_0_in2[8]));
NOR2XL inst_cellmath__45_0_I82 (.Y(N317), .A(inst_cellmath__45_0_in1[9]), .B(inst_cellmath__45_0_in2[9]));
NAND2XL inst_cellmath__45_0_I83 (.Y(N318), .A(inst_cellmath__45_0_in1[9]), .B(inst_cellmath__45_0_in2[9]));
NOR2XL inst_cellmath__45_0_I84 (.Y(N319), .A(inst_cellmath__45_0_in1[10]), .B(inst_cellmath__45_0_in2[10]));
NAND2XL inst_cellmath__45_0_I85 (.Y(N320), .A(inst_cellmath__45_0_in1[10]), .B(inst_cellmath__45_0_in2[10]));
NOR2XL inst_cellmath__45_0_I86 (.Y(N321), .A(inst_cellmath__45_0_in1[11]), .B(inst_cellmath__45_0_in2[11]));
NAND2XL inst_cellmath__45_0_I87 (.Y(N322), .A(inst_cellmath__45_0_in1[11]), .B(inst_cellmath__45_0_in2[11]));
NOR2XL inst_cellmath__45_0_I88 (.Y(N323), .A(inst_cellmath__45_0_in1[12]), .B(inst_cellmath__45_0_in2[12]));
NAND2XL inst_cellmath__45_0_I89 (.Y(N324), .A(inst_cellmath__45_0_in1[12]), .B(inst_cellmath__45_0_in2[12]));
NOR2XL inst_cellmath__45_0_I90 (.Y(N325), .A(inst_cellmath__45_0_in1[13]), .B(inst_cellmath__45_0_in2[13]));
NAND2XL inst_cellmath__45_0_I91 (.Y(N326), .A(inst_cellmath__45_0_in1[13]), .B(inst_cellmath__45_0_in2[13]));
NOR2XL inst_cellmath__45_0_I92 (.Y(N327), .A(inst_cellmath__45_0_in1[14]), .B(inst_cellmath__45_0_in2[14]));
NAND2XL inst_cellmath__45_0_I93 (.Y(N328), .A(inst_cellmath__45_0_in1[14]), .B(inst_cellmath__45_0_in2[14]));
NOR2XL inst_cellmath__45_0_I94 (.Y(N329), .A(inst_cellmath__45_0_in1[15]), .B(inst_cellmath__45_0_in2[15]));
NAND2XL inst_cellmath__45_0_I95 (.Y(N330), .A(inst_cellmath__45_0_in1[15]), .B(inst_cellmath__45_0_in2[15]));
NOR2XL inst_cellmath__45_0_I96 (.Y(N331), .A(inst_cellmath__45_0_in1[16]), .B(inst_cellmath__45_0_in2[16]));
NAND2XL inst_cellmath__45_0_I97 (.Y(N332), .A(inst_cellmath__45_0_in1[16]), .B(inst_cellmath__45_0_in2[16]));
NOR2XL inst_cellmath__45_0_I98 (.Y(N333), .A(inst_cellmath__45_0_in1[17]), .B(inst_cellmath__45_0_in2[17]));
NAND2XL inst_cellmath__45_0_I99 (.Y(N334), .A(inst_cellmath__45_0_in1[17]), .B(inst_cellmath__45_0_in2[17]));
NOR2XL inst_cellmath__45_0_I100 (.Y(N335), .A(inst_cellmath__45_0_in1[18]), .B(inst_cellmath__45_0_in2[18]));
NAND2XL inst_cellmath__45_0_I101 (.Y(N336), .A(inst_cellmath__45_0_in1[18]), .B(inst_cellmath__45_0_in2[18]));
NOR2XL inst_cellmath__45_0_I102 (.Y(N337), .A(inst_cellmath__45_0_in1[19]), .B(inst_cellmath__45_0_in2[19]));
NAND2XL inst_cellmath__45_0_I103 (.Y(N338), .A(inst_cellmath__45_0_in1[19]), .B(inst_cellmath__45_0_in2[19]));
NOR2XL inst_cellmath__45_0_I104 (.Y(N339), .A(inst_cellmath__45_0_in1[20]), .B(inst_cellmath__45_0_in2[20]));
NAND2XL inst_cellmath__45_0_I105 (.Y(N340), .A(inst_cellmath__45_0_in1[20]), .B(inst_cellmath__45_0_in2[20]));
NOR2XL inst_cellmath__45_0_I106 (.Y(N341), .A(inst_cellmath__45_0_in1[21]), .B(inst_cellmath__45_0_in2[21]));
NAND2XL inst_cellmath__45_0_I107 (.Y(N342), .A(inst_cellmath__45_0_in1[21]), .B(inst_cellmath__45_0_in2[21]));
NOR2XL inst_cellmath__45_0_I108 (.Y(N343), .A(inst_cellmath__45_0_in1[22]), .B(inst_cellmath__45_0_in2[22]));
NAND2XL inst_cellmath__45_0_I109 (.Y(N344), .A(inst_cellmath__45_0_in1[22]), .B(inst_cellmath__45_0_in2[22]));
NOR2XL inst_cellmath__45_0_I110 (.Y(N345), .A(inst_cellmath__45_0_in1[23]), .B(inst_cellmath__45_0_in2[23]));
NAND2XL inst_cellmath__45_0_I111 (.Y(N346), .A(inst_cellmath__45_0_in1[23]), .B(inst_cellmath__45_0_in2[23]));
INVXL inst_cellmath__45_0_I112 (.Y(N347), .A(inst_cellmath__45_0_in2[24]));
INVX1 inst_cellmath__45_0_I689 (.Y(N1012), .A(N300));
AOI21X4 inst_cellmath__45_0_I116 (.Y(N351), .A0(N302), .A1(N300), .B0(N301));
AOI21XL inst_cellmath__45_0_I118 (.Y(N353), .A0(N304), .A1(N301), .B0(N303));
NAND2XL inst_cellmath__45_0_I119 (.Y(N354), .A(N304), .B(N302));
AOI21XL inst_cellmath__45_0_I120 (.Y(N355), .A0(N306), .A1(N303), .B0(N305));
NAND2XL inst_cellmath__45_0_I121 (.Y(N356), .A(N306), .B(N304));
AOI21XL inst_cellmath__45_0_I122 (.Y(N357), .A0(N308), .A1(N305), .B0(N307));
NAND2XL inst_cellmath__45_0_I123 (.Y(N358), .A(N308), .B(N306));
AOI21XL inst_cellmath__45_0_I124 (.Y(N359), .A0(N310), .A1(N307), .B0(N309));
NAND2XL inst_cellmath__45_0_I125 (.Y(N360), .A(N310), .B(N308));
AOI21XL inst_cellmath__45_0_I126 (.Y(N361), .A0(N312), .A1(N309), .B0(N311));
NAND2XL inst_cellmath__45_0_I127 (.Y(N362), .A(N312), .B(N310));
AOI21XL inst_cellmath__45_0_I128 (.Y(N363), .A0(N314), .A1(N311), .B0(N313));
NAND2XL inst_cellmath__45_0_I129 (.Y(N364), .A(N314), .B(N312));
AOI21XL inst_cellmath__45_0_I130 (.Y(N365), .A0(N316), .A1(N313), .B0(N315));
NAND2XL inst_cellmath__45_0_I131 (.Y(N366), .A(N316), .B(N314));
AOI21XL inst_cellmath__45_0_I132 (.Y(N367), .A0(N318), .A1(N315), .B0(N317));
NAND2XL inst_cellmath__45_0_I133 (.Y(N368), .A(N318), .B(N316));
AOI21XL inst_cellmath__45_0_I134 (.Y(N369), .A0(N320), .A1(N317), .B0(N319));
NAND2XL inst_cellmath__45_0_I135 (.Y(N370), .A(N320), .B(N318));
AOI21XL inst_cellmath__45_0_I136 (.Y(N371), .A0(N322), .A1(N319), .B0(N321));
NAND2XL inst_cellmath__45_0_I137 (.Y(N372), .A(N322), .B(N320));
AOI21XL inst_cellmath__45_0_I138 (.Y(N373), .A0(N324), .A1(N321), .B0(N323));
NAND2XL inst_cellmath__45_0_I139 (.Y(N374), .A(N324), .B(N322));
AOI21XL inst_cellmath__45_0_I140 (.Y(N375), .A0(N326), .A1(N323), .B0(N325));
NAND2XL inst_cellmath__45_0_I141 (.Y(N376), .A(N326), .B(N324));
AOI21XL inst_cellmath__45_0_I142 (.Y(N377), .A0(N328), .A1(N325), .B0(N327));
NAND2XL inst_cellmath__45_0_I143 (.Y(N378), .A(N328), .B(N326));
AOI21XL inst_cellmath__45_0_I144 (.Y(N379), .A0(N330), .A1(N327), .B0(N329));
NAND2XL inst_cellmath__45_0_I145 (.Y(N380), .A(N330), .B(N328));
AOI21XL inst_cellmath__45_0_I146 (.Y(N381), .A0(N332), .A1(N329), .B0(N331));
NAND2XL inst_cellmath__45_0_I147 (.Y(N382), .A(N332), .B(N330));
AOI21XL inst_cellmath__45_0_I148 (.Y(N383), .A0(N334), .A1(N331), .B0(N333));
NAND2XL inst_cellmath__45_0_I149 (.Y(N384), .A(N334), .B(N332));
AOI21XL inst_cellmath__45_0_I150 (.Y(N385), .A0(N336), .A1(N333), .B0(N335));
NAND2XL inst_cellmath__45_0_I151 (.Y(N386), .A(N336), .B(N334));
AOI21XL inst_cellmath__45_0_I152 (.Y(N387), .A0(N338), .A1(N335), .B0(N337));
NAND2XL inst_cellmath__45_0_I153 (.Y(N388), .A(N338), .B(N336));
AOI21XL inst_cellmath__45_0_I154 (.Y(N389), .A0(N340), .A1(N337), .B0(N339));
NAND2XL inst_cellmath__45_0_I155 (.Y(N390), .A(N340), .B(N338));
AOI21XL inst_cellmath__45_0_I156 (.Y(N391), .A0(N342), .A1(N339), .B0(N341));
NAND2XL inst_cellmath__45_0_I157 (.Y(N392), .A(N342), .B(N340));
AOI21XL inst_cellmath__45_0_I158 (.Y(N393), .A0(N344), .A1(N341), .B0(N343));
NAND2XL inst_cellmath__45_0_I159 (.Y(N394), .A(N344), .B(N342));
AOI21XL inst_cellmath__45_0_I160 (.Y(N395), .A0(N346), .A1(N343), .B0(N345));
NAND2XL inst_cellmath__45_0_I161 (.Y(N396), .A(N346), .B(N344));
NAND2XL inst_cellmath__45_0_I163 (.Y(N399), .A(N347), .B(N346));
INVXL inst_cellmath__45_0_I690 (.Y(N1013), .A(N1012));
INVXL inst_cellmath__45_0_I691 (.Y(N1014), .A(N351));
OAI21XL inst_cellmath__45_0_I170 (.Y(N408), .A0(N354), .A1(N1012), .B0(N353));
OAI21X4 inst_cellmath__45_0_I172 (.Y(N410), .A0(N356), .A1(N351), .B0(N355));
OAI21XL inst_cellmath__45_0_I174 (.Y(N412), .A0(N358), .A1(N353), .B0(N357));
NOR2XL inst_cellmath__45_0_I175 (.Y(N413), .A(N358), .B(N354));
OAI21XL inst_cellmath__45_0_I176 (.Y(N414), .A0(N360), .A1(N355), .B0(N359));
NOR2XL inst_cellmath__45_0_I177 (.Y(N415), .A(N360), .B(N356));
OAI21XL inst_cellmath__45_0_I178 (.Y(N416), .A0(N362), .A1(N357), .B0(N361));
NOR2XL inst_cellmath__45_0_I179 (.Y(N417), .A(N362), .B(N358));
OAI21XL inst_cellmath__45_0_I180 (.Y(N418), .A0(N364), .A1(N359), .B0(N363));
NOR2XL inst_cellmath__45_0_I181 (.Y(N419), .A(N364), .B(N360));
OAI21XL inst_cellmath__45_0_I182 (.Y(N420), .A0(N366), .A1(N361), .B0(N365));
NOR2XL inst_cellmath__45_0_I183 (.Y(N421), .A(N366), .B(N362));
OAI21XL inst_cellmath__45_0_I184 (.Y(N422), .A0(N368), .A1(N363), .B0(N367));
NOR2XL inst_cellmath__45_0_I185 (.Y(N423), .A(N368), .B(N364));
OAI21XL inst_cellmath__45_0_I186 (.Y(N424), .A0(N370), .A1(N365), .B0(N369));
NOR2XL inst_cellmath__45_0_I187 (.Y(N425), .A(N370), .B(N366));
OAI21XL inst_cellmath__45_0_I188 (.Y(N426), .A0(N372), .A1(N367), .B0(N371));
NOR2XL inst_cellmath__45_0_I189 (.Y(N427), .A(N372), .B(N368));
OAI21XL inst_cellmath__45_0_I190 (.Y(N428), .A0(N374), .A1(N369), .B0(N373));
NOR2XL inst_cellmath__45_0_I191 (.Y(N429), .A(N374), .B(N370));
OAI21XL inst_cellmath__45_0_I192 (.Y(N430), .A0(N376), .A1(N371), .B0(N375));
NOR2XL inst_cellmath__45_0_I193 (.Y(N431), .A(N376), .B(N372));
OAI21XL inst_cellmath__45_0_I194 (.Y(N432), .A0(N378), .A1(N373), .B0(N377));
NOR2XL inst_cellmath__45_0_I195 (.Y(N433), .A(N378), .B(N374));
OAI21XL inst_cellmath__45_0_I196 (.Y(N434), .A0(N380), .A1(N375), .B0(N379));
NOR2XL inst_cellmath__45_0_I197 (.Y(N435), .A(N380), .B(N376));
OAI21XL inst_cellmath__45_0_I198 (.Y(N436), .A0(N382), .A1(N377), .B0(N381));
NOR2XL inst_cellmath__45_0_I199 (.Y(N437), .A(N382), .B(N378));
OAI21XL inst_cellmath__45_0_I200 (.Y(N438), .A0(N384), .A1(N379), .B0(N383));
NOR2XL inst_cellmath__45_0_I201 (.Y(N439), .A(N384), .B(N380));
OAI21XL inst_cellmath__45_0_I202 (.Y(N440), .A0(N386), .A1(N381), .B0(N385));
NOR2XL inst_cellmath__45_0_I203 (.Y(N441), .A(N386), .B(N382));
OAI21XL inst_cellmath__45_0_I204 (.Y(N442), .A0(N388), .A1(N383), .B0(N387));
NOR2XL inst_cellmath__45_0_I205 (.Y(N443), .A(N388), .B(N384));
OAI21XL inst_cellmath__45_0_I206 (.Y(N444), .A0(N390), .A1(N385), .B0(N389));
NOR2XL inst_cellmath__45_0_I207 (.Y(N445), .A(N390), .B(N386));
OAI21XL inst_cellmath__45_0_I208 (.Y(N446), .A0(N392), .A1(N387), .B0(N391));
NOR2XL inst_cellmath__45_0_I209 (.Y(N447), .A(N392), .B(N388));
OAI21XL inst_cellmath__45_0_I210 (.Y(N448), .A0(N394), .A1(N389), .B0(N393));
NOR2XL inst_cellmath__45_0_I211 (.Y(N449), .A(N394), .B(N390));
OAI21XL inst_cellmath__45_0_I212 (.Y(N450), .A0(N396), .A1(N391), .B0(N395));
NOR2XL inst_cellmath__45_0_I213 (.Y(N451), .A(N396), .B(N392));
OAI2BB2XL inst_cellmath__45_0_I582 (.Y(N452), .A0N(N347), .A1N(N345), .B0(N399), .B1(N393));
NOR2XL inst_cellmath__45_0_I215 (.Y(N453), .A(N399), .B(N394));
INVXL inst_cellmath__45_0_I692 (.Y(N1015), .A(N1013));
INVXL inst_cellmath__45_0_I693 (.Y(N1016), .A(N1014));
INVXL inst_cellmath__45_0_I694 (.Y(N1017), .A(N408));
INVXL inst_cellmath__45_0_I695 (.Y(N1018), .A(N410));
AOI21XL inst_cellmath__45_0_I226 (.Y(N464), .A0(N413), .A1(N1013), .B0(N412));
AOI21XL inst_cellmath__45_0_I228 (.Y(N466), .A0(N415), .A1(N1014), .B0(N414));
AOI21XL inst_cellmath__45_0_I230 (.Y(N468), .A0(N417), .A1(N408), .B0(N416));
AOI21X2 inst_cellmath__45_0_I232 (.Y(N470), .A0(N419), .A1(N410), .B0(N418));
AOI21XL inst_cellmath__45_0_I234 (.Y(N472), .A0(N421), .A1(N412), .B0(N420));
NAND2XL inst_cellmath__45_0_I235 (.Y(N473), .A(N421), .B(N413));
AOI21XL inst_cellmath__45_0_I236 (.Y(N474), .A0(N423), .A1(N414), .B0(N422));
NAND2XL inst_cellmath__45_0_I237 (.Y(N475), .A(N423), .B(N415));
AOI21XL inst_cellmath__45_0_I238 (.Y(N476), .A0(N425), .A1(N416), .B0(N424));
NAND2XL inst_cellmath__45_0_I239 (.Y(N477), .A(N425), .B(N417));
AOI21XL inst_cellmath__45_0_I240 (.Y(N478), .A0(N427), .A1(N418), .B0(N426));
NAND2XL inst_cellmath__45_0_I241 (.Y(N479), .A(N427), .B(N419));
AOI21XL inst_cellmath__45_0_I242 (.Y(N480), .A0(N429), .A1(N420), .B0(N428));
NAND2XL inst_cellmath__45_0_I243 (.Y(N481), .A(N429), .B(N421));
AOI21XL inst_cellmath__45_0_I244 (.Y(N482), .A0(N431), .A1(N422), .B0(N430));
NAND2XL inst_cellmath__45_0_I245 (.Y(N483), .A(N431), .B(N423));
AOI21XL inst_cellmath__45_0_I246 (.Y(N484), .A0(N433), .A1(N424), .B0(N432));
NAND2XL inst_cellmath__45_0_I247 (.Y(N485), .A(N433), .B(N425));
AOI21XL inst_cellmath__45_0_I248 (.Y(N486), .A0(N435), .A1(N426), .B0(N434));
NAND2XL inst_cellmath__45_0_I249 (.Y(N487), .A(N435), .B(N427));
AOI21XL inst_cellmath__45_0_I250 (.Y(N488), .A0(N437), .A1(N428), .B0(N436));
NAND2XL inst_cellmath__45_0_I251 (.Y(N489), .A(N437), .B(N429));
AOI21XL inst_cellmath__45_0_I252 (.Y(N490), .A0(N439), .A1(N430), .B0(N438));
NAND2XL inst_cellmath__45_0_I253 (.Y(N491), .A(N439), .B(N431));
AOI21XL inst_cellmath__45_0_I254 (.Y(N492), .A0(N441), .A1(N432), .B0(N440));
NAND2XL inst_cellmath__45_0_I255 (.Y(N493), .A(N441), .B(N433));
AOI21XL inst_cellmath__45_0_I256 (.Y(N494), .A0(N443), .A1(N434), .B0(N442));
NAND2XL inst_cellmath__45_0_I257 (.Y(N495), .A(N443), .B(N435));
AOI21XL inst_cellmath__45_0_I258 (.Y(N496), .A0(N445), .A1(N436), .B0(N444));
NAND2XL inst_cellmath__45_0_I259 (.Y(N497), .A(N445), .B(N437));
AOI21XL inst_cellmath__45_0_I260 (.Y(N498), .A0(N447), .A1(N438), .B0(N446));
NAND2XL inst_cellmath__45_0_I261 (.Y(N499), .A(N447), .B(N439));
AOI21XL inst_cellmath__45_0_I262 (.Y(N500), .A0(N449), .A1(N440), .B0(N448));
NAND2XL inst_cellmath__45_0_I263 (.Y(N501), .A(N449), .B(N441));
AOI21XL inst_cellmath__45_0_I264 (.Y(N502), .A0(N451), .A1(N442), .B0(N450));
NAND2XL inst_cellmath__45_0_I265 (.Y(N503), .A(N451), .B(N443));
AOI21XL inst_cellmath__45_0_I266 (.Y(N504), .A0(N453), .A1(N444), .B0(N452));
NAND2XL inst_cellmath__45_0_I267 (.Y(N505), .A(N453), .B(N445));
INVXL inst_cellmath__45_0_I696 (.Y(N1019), .A(N1015));
INVXL inst_cellmath__45_0_I697 (.Y(N1020), .A(N1016));
INVXL inst_cellmath__45_0_I698 (.Y(N1021), .A(N1017));
INVXL inst_cellmath__45_0_I699 (.Y(N1022), .A(N1018));
INVXL inst_cellmath__45_0_I700 (.Y(N1023), .A(N464));
INVXL inst_cellmath__45_0_I701 (.Y(N1024), .A(N466));
INVXL inst_cellmath__45_0_I702 (.Y(N1025), .A(N468));
INVXL inst_cellmath__45_0_I703 (.Y(N1026), .A(N470));
OAI21XL inst_cellmath__45_0_I286 (.Y(N524), .A0(N473), .A1(N1015), .B0(N472));
OAI21XL inst_cellmath__45_0_I298 (.Y(N536), .A0(N485), .A1(N468), .B0(N484));
OAI21XL inst_cellmath__45_0_I302 (.Y(N540), .A0(N489), .A1(N472), .B0(N488));
NOR2XL inst_cellmath__45_0_I303 (.Y(N541), .A(N489), .B(N473));
OAI21XL inst_cellmath__45_0_I304 (.Y(N542), .A0(N491), .A1(N474), .B0(N490));
NOR2XL inst_cellmath__45_0_I305 (.Y(N543), .A(N491), .B(N475));
OAI21XL inst_cellmath__45_0_I306 (.Y(N544), .A0(N493), .A1(N476), .B0(N492));
NOR2XL inst_cellmath__45_0_I307 (.Y(N545), .A(N493), .B(N477));
OAI21XL inst_cellmath__45_0_I308 (.Y(N546), .A0(N495), .A1(N478), .B0(N494));
NOR2XL inst_cellmath__45_0_I309 (.Y(N547), .A(N495), .B(N479));
OAI21XL inst_cellmath__45_0_I310 (.Y(N548), .A0(N497), .A1(N480), .B0(N496));
NOR2XL inst_cellmath__45_0_I311 (.Y(N549), .A(N497), .B(N481));
OAI21XL inst_cellmath__45_0_I312 (.Y(N550), .A0(N499), .A1(N482), .B0(N498));
NOR2XL inst_cellmath__45_0_I313 (.Y(N551), .A(N499), .B(N483));
OAI21XL inst_cellmath__45_0_I314 (.Y(N552), .A0(N501), .A1(N484), .B0(N500));
NOR2XL inst_cellmath__45_0_I315 (.Y(N553), .A(N501), .B(N485));
OAI21XL inst_cellmath__45_0_I316 (.Y(N554), .A0(N503), .A1(N486), .B0(N502));
NOR2XL inst_cellmath__45_0_I317 (.Y(N555), .A(N503), .B(N487));
OAI21XL inst_cellmath__45_0_I318 (.Y(N556), .A0(N505), .A1(N488), .B0(N504));
NOR2XL inst_cellmath__45_0_I319 (.Y(N557), .A(N505), .B(N489));
OA21X1 inst_cellmath__45_0_I793 (.Y(N1036), .A0(N475), .A1(N1016), .B0(N474));
OA21X1 inst_cellmath__45_0_I794 (.Y(N1037), .A0(N477), .A1(N1017), .B0(N476));
OA21X1 inst_cellmath__45_0_I847 (.Y(N1038), .A0(N479), .A1(N1018), .B0(N478));
OA21X1 inst_cellmath__45_0_I742 (.Y(N1039), .A0(N481), .A1(N464), .B0(N480));
OA21X1 inst_cellmath__45_0_I848 (.Y(N1040), .A0(N483), .A1(N466), .B0(N482));
OA21X1 inst_cellmath__45_0_I1513 (.Y(N1042), .A0(N487), .A1(N470), .B0(N486));
AOI21XL inst_cellmath__45_0_I354 (.Y(N592), .A0(N541), .A1(N1019), .B0(N540));
AOI21XL inst_cellmath__45_0_I356 (.Y(N594), .A0(N543), .A1(N1020), .B0(N542));
AOI21XL inst_cellmath__45_0_I358 (.Y(N596), .A0(N545), .A1(N1021), .B0(N544));
AOI21XL inst_cellmath__45_0_I360 (.Y(N598), .A0(N547), .A1(N1022), .B0(N546));
AOI21XL inst_cellmath__45_0_I362 (.Y(N600), .A0(N549), .A1(N1023), .B0(N548));
AOI21XL inst_cellmath__45_0_I364 (.Y(N602), .A0(N551), .A1(N1024), .B0(N550));
AOI21XL inst_cellmath__45_0_I366 (.Y(N604), .A0(N553), .A1(N1025), .B0(N552));
AOI21XL inst_cellmath__45_0_I368 (.Y(N606), .A0(N555), .A1(N1026), .B0(N554));
AOI21XL inst_cellmath__45_0_I370 (.Y(N608), .A0(N557), .A1(N524), .B0(N556));
NAND2BXL inst_cellmath__45_0_I404 (.Y(N642), .AN(N301), .B(N302));
NAND2BXL inst_cellmath__45_0_I407 (.Y(N645), .AN(N303), .B(N304));
NAND2BXL inst_cellmath__45_0_I410 (.Y(N648), .AN(N305), .B(N306));
NAND2BXL inst_cellmath__45_0_I413 (.Y(N651), .AN(N307), .B(N308));
NAND2BXL inst_cellmath__45_0_I416 (.Y(N654), .AN(N309), .B(N310));
NAND2BXL inst_cellmath__45_0_I419 (.Y(N657), .AN(N311), .B(N312));
NAND2BXL inst_cellmath__45_0_I422 (.Y(N660), .AN(N313), .B(N314));
NAND2BXL inst_cellmath__45_0_I425 (.Y(N663), .AN(N315), .B(N316));
NAND2BXL inst_cellmath__45_0_I428 (.Y(N666), .AN(N317), .B(N318));
NAND2BXL inst_cellmath__45_0_I431 (.Y(N669), .AN(N319), .B(N320));
NAND2BXL inst_cellmath__45_0_I434 (.Y(N672), .AN(N321), .B(N322));
NAND2BXL inst_cellmath__45_0_I437 (.Y(N675), .AN(N323), .B(N324));
NAND2BXL inst_cellmath__45_0_I440 (.Y(N678), .AN(N325), .B(N326));
NAND2BXL inst_cellmath__45_0_I443 (.Y(N681), .AN(N327), .B(N328));
NAND2BXL inst_cellmath__45_0_I446 (.Y(N684), .AN(N329), .B(N330));
NAND2BXL inst_cellmath__45_0_I449 (.Y(N687), .AN(N331), .B(N332));
NAND2BXL inst_cellmath__45_0_I452 (.Y(N690), .AN(N333), .B(N334));
NAND2BXL inst_cellmath__45_0_I455 (.Y(N693), .AN(N335), .B(N336));
NAND2BXL inst_cellmath__45_0_I458 (.Y(N696), .AN(N337), .B(N338));
NAND2BXL inst_cellmath__45_0_I461 (.Y(N699), .AN(N339), .B(N340));
NAND2BXL inst_cellmath__45_0_I464 (.Y(N702), .AN(N341), .B(N342));
NAND2BXL inst_cellmath__45_0_I467 (.Y(N705), .AN(N343), .B(N344));
NAND2BXL inst_cellmath__45_0_I470 (.Y(N708), .AN(N345), .B(N346));
XOR2XL inst_cellmath__45_0_I477 (.Y(inst_cellmath__45_0_out0[0]), .A(inst_cellmath__45_0_in2[0]), .B(inst_cellmath__45_0_in0));
XOR2XL inst_cellmath__45_0_I798 (.Y(inst_cellmath__45_0_out0[1]), .A(N1019), .B(N642));
XOR2XL inst_cellmath__45_0_I799 (.Y(inst_cellmath__45_0_out0[2]), .A(N1020), .B(N645));
XOR2XL inst_cellmath__45_0_I800 (.Y(inst_cellmath__45_0_out0[3]), .A(N1021), .B(N648));
XOR2XL inst_cellmath__45_0_I824 (.Y(inst_cellmath__45_0_out0[4]), .A(N1022), .B(N651));
XOR2XL inst_cellmath__45_0_I802 (.Y(inst_cellmath__45_0_out0[5]), .A(N1023), .B(N654));
XOR2XL inst_cellmath__45_0_I803 (.Y(inst_cellmath__45_0_out0[6]), .A(N1024), .B(N657));
XOR2XL inst_cellmath__45_0_I804 (.Y(inst_cellmath__45_0_out0[7]), .A(N1025), .B(N660));
XOR2XL inst_cellmath__45_0_I1520 (.Y(inst_cellmath__45_0_out0[8]), .A(N1026), .B(N663));
XOR2XL inst_cellmath__45_0_I806 (.Y(inst_cellmath__45_0_out0[9]), .A(N524), .B(N666));
XNOR2X1 inst_cellmath__45_0_I487 (.Y(inst_cellmath__45_0_out0[10]), .A(N1036), .B(N669));
XNOR2X1 inst_cellmath__45_0_I488 (.Y(inst_cellmath__45_0_out0[11]), .A(N1037), .B(N672));
INVXL xnor2_A_I568 (.Y(N884), .A(N1038));
MXI2X1 xnor2_A_I569 (.Y(inst_cellmath__45_0_out0[12]), .A(N1038), .B(N884), .S0(N675));
XNOR2X1 inst_cellmath__45_0_I490 (.Y(inst_cellmath__45_0_out0[13]), .A(N1039), .B(N678));
INVXL xnor2_A_I570 (.Y(N890), .A(N1040));
MXI2X1 xnor2_A_I571 (.Y(inst_cellmath__45_0_out0[14]), .A(N1040), .B(N890), .S0(N681));
CLKXOR2X1 inst_cellmath__45_0_I739 (.Y(inst_cellmath__45_0_out0[15]), .A(N536), .B(N684));
INVXL xnor2_A_I572 (.Y(N896), .A(N1042));
MXI2X1 xnor2_A_I573 (.Y(inst_cellmath__45_0_out0[16]), .A(N1042), .B(N896), .S0(N687));
XNOR2X1 inst_cellmath__45_0_I494 (.Y(inst_cellmath__45_0_out0[17]), .A(N592), .B(N690));
XNOR2X1 inst_cellmath__45_0_I495 (.Y(inst_cellmath__45_0_out0[18]), .A(N594), .B(N693));
XNOR2X1 inst_cellmath__45_0_I496 (.Y(inst_cellmath__45_0_out0[19]), .A(N596), .B(N696));
XNOR2X1 inst_cellmath__45_0_I497 (.Y(inst_cellmath__45_0_out0[20]), .A(N598), .B(N699));
XNOR2X1 inst_cellmath__45_0_I498 (.Y(inst_cellmath__45_0_out0[21]), .A(N600), .B(N702));
XNOR2X1 inst_cellmath__45_0_I499 (.Y(inst_cellmath__45_0_out0[22]), .A(N602), .B(N705));
XNOR2X1 inst_cellmath__45_0_I1518 (.Y(inst_cellmath__45_0_out0[23]), .A(N604), .B(N708));
CLKXOR2X1 inst_cellmath__45_0_I831 (.Y(inst_cellmath__45_0_out0[24]), .A(N606), .B(N347));
CLKXOR2X1 inst_cellmath__45_0_I1519 (.Y(inst_cellmath__45_0_out0[25]), .A(N608), .B(inst_cellmath__45_0_in3));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__49_0_bdw105316586_bdw (
	inst_cellmath__49_0_out0,
	inst_cellmath__49_0_in0
	); /* architecture "gate_level" */ 
output [5:0] inst_cellmath__49_0_out0;
input [25:0] inst_cellmath__49_0_in0;
wire N46,N48,N49,N50,N51,N52,N54 
	,N55,N56,N57,N58,N60,N61,N62,N63 
	,N64,N66,N67,N68,N69,N70,N72,N73 
	,N74,N75,N76,N78,N79,N80,N81,N82 
	,N91,N92,N93,N94,N95,N97,N98,N99 
	,N100,N101,N103,N104,N105,N106,N107,N111 
	,N115,N117,N118,N119,N120,N123,N124,N126 
	,N141,N144,N157,N161,N163,N165,N167,N169 
	,N173,N175;
NOR2XL inst_cellmath__49_0_I11 (.Y(N46), .A(inst_cellmath__49_0_in0[1]), .B(inst_cellmath__49_0_in0[0]));
NOR2BX1 inst_cellmath__49_0_I677 (.Y(N48), .AN(inst_cellmath__49_0_in0[2]), .B(inst_cellmath__49_0_in0[3]));
INVXL inst_cellmath__49_0_I14 (.Y(N49), .A(inst_cellmath__49_0_in0[5]));
OAI21XL inst_cellmath__49_0_I15 (.Y(N50), .A0(inst_cellmath__49_0_in0[4]), .A1(N48), .B0(N49));
NOR2XL inst_cellmath__49_0_I16 (.Y(N51), .A(inst_cellmath__49_0_in0[3]), .B(inst_cellmath__49_0_in0[2]));
NOR2XL inst_cellmath__49_0_I17 (.Y(N52), .A(inst_cellmath__49_0_in0[5]), .B(inst_cellmath__49_0_in0[4]));
NOR2BX1 inst_cellmath__49_0_I678 (.Y(N54), .AN(inst_cellmath__49_0_in0[6]), .B(inst_cellmath__49_0_in0[7]));
INVXL inst_cellmath__49_0_I20 (.Y(N55), .A(inst_cellmath__49_0_in0[9]));
OAI21XL inst_cellmath__49_0_I21 (.Y(N56), .A0(inst_cellmath__49_0_in0[8]), .A1(N54), .B0(N55));
NOR2X1 inst_cellmath__49_0_I22 (.Y(N57), .A(inst_cellmath__49_0_in0[7]), .B(inst_cellmath__49_0_in0[6]));
NOR2XL inst_cellmath__49_0_I23 (.Y(N58), .A(inst_cellmath__49_0_in0[9]), .B(inst_cellmath__49_0_in0[8]));
NOR2BX1 inst_cellmath__49_0_I679 (.Y(N60), .AN(inst_cellmath__49_0_in0[10]), .B(inst_cellmath__49_0_in0[11]));
INVXL inst_cellmath__49_0_I26 (.Y(N61), .A(inst_cellmath__49_0_in0[13]));
OAI21XL inst_cellmath__49_0_I27 (.Y(N62), .A0(inst_cellmath__49_0_in0[12]), .A1(N60), .B0(N61));
NOR2X2 inst_cellmath__49_0_I28 (.Y(N63), .A(inst_cellmath__49_0_in0[11]), .B(inst_cellmath__49_0_in0[10]));
NOR2X1 inst_cellmath__49_0_I29 (.Y(N64), .A(inst_cellmath__49_0_in0[13]), .B(inst_cellmath__49_0_in0[12]));
NOR2BX1 inst_cellmath__49_0_I680 (.Y(N66), .AN(inst_cellmath__49_0_in0[14]), .B(inst_cellmath__49_0_in0[15]));
INVXL inst_cellmath__49_0_I32 (.Y(N67), .A(inst_cellmath__49_0_in0[17]));
OAI21XL inst_cellmath__49_0_I33 (.Y(N68), .A0(inst_cellmath__49_0_in0[16]), .A1(N66), .B0(N67));
NOR2X2 inst_cellmath__49_0_I34 (.Y(N69), .A(inst_cellmath__49_0_in0[15]), .B(inst_cellmath__49_0_in0[14]));
NOR2X2 inst_cellmath__49_0_I35 (.Y(N70), .A(inst_cellmath__49_0_in0[17]), .B(inst_cellmath__49_0_in0[16]));
NOR2BX1 inst_cellmath__49_0_I681 (.Y(N72), .AN(inst_cellmath__49_0_in0[18]), .B(inst_cellmath__49_0_in0[19]));
INVXL inst_cellmath__49_0_I38 (.Y(N73), .A(inst_cellmath__49_0_in0[21]));
OAI21XL inst_cellmath__49_0_I39 (.Y(N74), .A0(inst_cellmath__49_0_in0[20]), .A1(N72), .B0(N73));
NOR2X1 inst_cellmath__49_0_I40 (.Y(N75), .A(inst_cellmath__49_0_in0[19]), .B(inst_cellmath__49_0_in0[18]));
NOR2X1 inst_cellmath__49_0_I41 (.Y(N76), .A(inst_cellmath__49_0_in0[21]), .B(inst_cellmath__49_0_in0[20]));
NOR2BX1 inst_cellmath__49_0_I682 (.Y(N78), .AN(inst_cellmath__49_0_in0[22]), .B(inst_cellmath__49_0_in0[23]));
INVXL inst_cellmath__49_0_I44 (.Y(N79), .A(inst_cellmath__49_0_in0[25]));
OAI21XL inst_cellmath__49_0_I45 (.Y(N80), .A0(inst_cellmath__49_0_in0[24]), .A1(N78), .B0(N79));
NOR2X1 inst_cellmath__49_0_I46 (.Y(N81), .A(inst_cellmath__49_0_in0[23]), .B(inst_cellmath__49_0_in0[22]));
NOR2X1 inst_cellmath__49_0_I47 (.Y(N82), .A(inst_cellmath__49_0_in0[25]), .B(inst_cellmath__49_0_in0[24]));
NAND2BXL inst_cellmath__49_0_I683 (.Y(N91), .AN(N51), .B(N52));
INVXL inst_cellmath__49_0_I56 (.Y(N92), .A(N58));
AOI21XL inst_cellmath__49_0_I57 (.Y(N93), .A0(N57), .A1(N91), .B0(N92));
NAND2XL inst_cellmath__49_0_I58 (.Y(N94), .A(N52), .B(N51));
NAND2X1 inst_cellmath__49_0_I59 (.Y(N95), .A(N58), .B(N57));
NAND2BXL inst_cellmath__49_0_I684 (.Y(N97), .AN(N63), .B(N64));
INVXL inst_cellmath__49_0_I62 (.Y(N98), .A(N70));
AOI21XL inst_cellmath__49_0_I63 (.Y(N99), .A0(N69), .A1(N97), .B0(N98));
NAND2X4 inst_cellmath__49_0_I64 (.Y(N100), .A(N64), .B(N63));
NAND2X4 inst_cellmath__49_0_I65 (.Y(N101), .A(N70), .B(N69));
NAND2BXL inst_cellmath__49_0_I685 (.Y(N103), .AN(N75), .B(N76));
INVXL inst_cellmath__49_0_I68 (.Y(N104), .A(N82));
AOI21XL inst_cellmath__49_0_I69 (.Y(N105), .A0(N81), .A1(N103), .B0(N104));
NAND2X1 inst_cellmath__49_0_I70 (.Y(N106), .A(N76), .B(N75));
NAND2X1 inst_cellmath__49_0_I71 (.Y(N107), .A(N82), .B(N81));
NAND2BXL inst_cellmath__49_0_I686 (.Y(N111), .AN(N95), .B(N94));
NOR2X1 inst_cellmath__49_0_I77 (.Y(N115), .A(N95), .B(N94));
NOR2BX1 inst_cellmath__49_0_I687 (.Y(N117), .AN(N100), .B(N101));
INVXL inst_cellmath__49_0_I80 (.Y(N118), .A(N107));
OAI21X1 inst_cellmath__49_0_I81 (.Y(N119), .A0(N106), .A1(N117), .B0(N118));
NOR2X6 inst_cellmath__49_0_I82 (.Y(N120), .A(N101), .B(N100));
NOR2X2 inst_cellmath__49_0_I83 (.Y(N173), .A(N107), .B(N106));
NAND2BX1 inst_cellmath__49_0_I688 (.Y(N123), .AN(N46), .B(N115));
INVX1 inst_cellmath__49_0_I86 (.Y(N124), .A(N173));
AOI21X4 inst_cellmath__49_0_I87 (.Y(inst_cellmath__49_0_out0[3]), .A0(N120), .A1(N123), .B0(N124));
NAND2XL inst_cellmath__49_0_I88 (.Y(N126), .A(N115), .B(N46));
NAND2X4 inst_cellmath__49_0_I89 (.Y(N175), .A(N173), .B(N120));
NOR2BX1 inst_cellmath__49_0_I689 (.Y(inst_cellmath__49_0_out0[4]), .AN(N126), .B(N175));
NOR2XL inst_cellmath__49_0_I92 (.Y(inst_cellmath__49_0_out0[5]), .A(N175), .B(N126));
OAI21X1 inst_cellmath__49_0_I96 (.Y(inst_cellmath__49_0_out0[2]), .A0(N175), .A1(N111), .B0(N119));
INVXL inst_cellmath__49_0_I102 (.Y(N141), .A(N93));
AOI21XL inst_cellmath__49_0_I104 (.Y(N144), .A0(N173), .A1(N99), .B0(N105));
OAI21X1 inst_cellmath__49_0_I106 (.Y(inst_cellmath__49_0_out0[1]), .A0(N175), .A1(N141), .B0(N144));
NOR2BX1 inst_cellmath__49_0_I690 (.Y(N157), .AN(inst_cellmath__49_0_in0[0]), .B(inst_cellmath__49_0_in0[1]));
OAI21XL inst_cellmath__49_0_I118 (.Y(N161), .A0(N95), .A1(N50), .B0(N56));
OAI21XL inst_cellmath__49_0_I120 (.Y(N163), .A0(N101), .A1(N62), .B0(N68));
OAI21XL inst_cellmath__49_0_I122 (.Y(N165), .A0(N107), .A1(N74), .B0(N80));
AOI21XL inst_cellmath__49_0_I124 (.Y(N167), .A0(N115), .A1(N157), .B0(N161));
AOI21XL inst_cellmath__49_0_I126 (.Y(N169), .A0(N173), .A1(N163), .B0(N165));
OAI21X1 inst_cellmath__49_0_I128 (.Y(inst_cellmath__49_0_out0[0]), .A0(N175), .A1(N167), .B0(N169));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__66__bdw105316586_bdw (
	inst_cellmath__67__66__out0,
	inst_cellmath__67__66__in0,
	inst_cellmath__67__66__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__66__out0;
input [5:5] inst_cellmath__67__66__in0;
input  inst_cellmath__67__66__in1;
wire N5;
INVXL inst_cellmath__67__66__I0 (.Y(N5), .A(inst_cellmath__67__66__in1));
NOR2X2 inst_cellmath__67__66__I1 (.Y(inst_cellmath__67__66__out0[0]), .A(N5), .B(inst_cellmath__67__66__in0[5]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67__65__bdw105316586_bdw (
	inst_cellmath__67__65__out0,
	inst_cellmath__67__65__in0,
	inst_cellmath__67__65__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__67__65__out0;
input [5:5] inst_cellmath__67__65__in0;
input  inst_cellmath__67__65__in1;
OR2XL inst_cellmath__67__65__I0 (.Y(inst_cellmath__67__65__out0[0]), .A(inst_cellmath__67__65__in1), .B(inst_cellmath__67__65__in0[5]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__59__bdw105316586_bdw (
	inst_cellmath__66__59__out0,
	inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__59__out0;
input  inst_cellmath__66__59__in0,
	inst_cellmath__66__59__in1;
CLKAND2X2 inst_cellmath__66__59__I0 (.Y(inst_cellmath__66__59__out0[0]), .A(inst_cellmath__66__59__in1), .B(inst_cellmath__66__59__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__58__bdw105316586_bdw (
	inst_cellmath__66__58__out0,
	inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__58__out0;
input  inst_cellmath__66__58__in0,
	inst_cellmath__66__58__in1;
wire N19;
NOR2X1 inst_cellmath__66__58__I4 (.Y(N19), .A(inst_cellmath__66__58__in1), .B(inst_cellmath__66__58__in0));
INVXL inst_cellmath__66__58__I5 (.Y(inst_cellmath__66__58__out0[0]), .A(N19));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66__56__bdw105316586_bdw (
	inst_cellmath__66__56__out0,
	inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1,
	inst_cellmath__66__56__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__66__56__out0;
input [0:0] inst_cellmath__66__56__in0,
	inst_cellmath__66__56__in1;
input  inst_cellmath__66__56__in2;
wire N6,N7;
INVXL inst_cellmath__66__56__I0 (.Y(N6), .A(inst_cellmath__66__56__in1[0]));
INVXL inst_cellmath__66__56__I1 (.Y(N7), .A(inst_cellmath__66__56__in0[0]));
MXI2XL inst_cellmath__66__56__I2 (.Y(inst_cellmath__66__56__out0[0]), .A(N7), .B(N6), .S0(inst_cellmath__66__56__in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__66_0_bdw105316586_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__66_0_out0;
input [0:0] inst_cellmath__66_0_in0;
input  inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2;
wire N6,N7;
NAND2XL inst_cellmath__66_0_I0 (.Y(N6), .A(inst_cellmath__66_0_in2), .B(inst_cellmath__66_0_in1));
INVXL inst_cellmath__66_0_I1 (.Y(N7), .A(inst_cellmath__66_0_in0[0]));
NOR2XL inst_cellmath__66_0_I2 (.Y(inst_cellmath__66_0_out0), .A(N7), .B(N6));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__64__48__2WWMM_bdw105316586_bdw (
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
wire N121,N122,N123,N124,N125,N126,N127 
	,N128,N129,N130,N131,N132,N133,N134,N135 
	,N136,N137,N138,N139,N140,N141,N142,N143 
	,N144,N145,N148,N150,N152,N154,N156,N158 
	,N160,N162,N164,N166,N168,N170,N172,N174 
	,N176,N178,N180,N182,N184,N186,N188,N190 
	,N220,N221,N222,N223,N224,N225,N226,N227 
	,N228,N229,N230,N232,N234;
INVXL inst_cellmath__64__48__2WWMM_I0 (.Y(N121), .A(inst_cellmath__64__48__2WWMM_in4));
INVXL inst_cellmath__64__48__2WWMM_I1 (.Y(N122), .A(inst_cellmath__64__48__2WWMM_in5[0]));
INVXL inst_cellmath__64__48__2WWMM_I2 (.Y(N123), .A(inst_cellmath__64__48__2WWMM_in5[1]));
INVXL inst_cellmath__64__48__2WWMM_I3 (.Y(N124), .A(inst_cellmath__64__48__2WWMM_in5[2]));
INVXL inst_cellmath__64__48__2WWMM_I4 (.Y(N125), .A(inst_cellmath__64__48__2WWMM_in5[3]));
INVXL inst_cellmath__64__48__2WWMM_I5 (.Y(N126), .A(inst_cellmath__64__48__2WWMM_in5[4]));
INVXL inst_cellmath__64__48__2WWMM_I6 (.Y(N127), .A(inst_cellmath__64__48__2WWMM_in5[5]));
INVXL inst_cellmath__64__48__2WWMM_I7 (.Y(N128), .A(inst_cellmath__64__48__2WWMM_in5[6]));
INVXL inst_cellmath__64__48__2WWMM_I8 (.Y(N129), .A(inst_cellmath__64__48__2WWMM_in5[7]));
INVXL inst_cellmath__64__48__2WWMM_I9 (.Y(N130), .A(inst_cellmath__64__48__2WWMM_in5[8]));
INVXL inst_cellmath__64__48__2WWMM_I10 (.Y(N131), .A(inst_cellmath__64__48__2WWMM_in5[9]));
INVXL inst_cellmath__64__48__2WWMM_I11 (.Y(N132), .A(inst_cellmath__64__48__2WWMM_in5[10]));
INVXL inst_cellmath__64__48__2WWMM_I12 (.Y(N133), .A(inst_cellmath__64__48__2WWMM_in5[11]));
INVXL inst_cellmath__64__48__2WWMM_I13 (.Y(N134), .A(inst_cellmath__64__48__2WWMM_in5[12]));
INVXL inst_cellmath__64__48__2WWMM_I14 (.Y(N135), .A(inst_cellmath__64__48__2WWMM_in5[13]));
INVXL inst_cellmath__64__48__2WWMM_I15 (.Y(N136), .A(inst_cellmath__64__48__2WWMM_in5[14]));
INVXL inst_cellmath__64__48__2WWMM_I16 (.Y(N137), .A(inst_cellmath__64__48__2WWMM_in5[15]));
INVXL inst_cellmath__64__48__2WWMM_I17 (.Y(N138), .A(inst_cellmath__64__48__2WWMM_in5[16]));
INVXL inst_cellmath__64__48__2WWMM_I18 (.Y(N139), .A(inst_cellmath__64__48__2WWMM_in5[17]));
INVXL inst_cellmath__64__48__2WWMM_I19 (.Y(N140), .A(inst_cellmath__64__48__2WWMM_in5[18]));
INVXL inst_cellmath__64__48__2WWMM_I20 (.Y(N141), .A(inst_cellmath__64__48__2WWMM_in5[19]));
INVXL inst_cellmath__64__48__2WWMM_I21 (.Y(N142), .A(inst_cellmath__64__48__2WWMM_in5[20]));
INVXL inst_cellmath__64__48__2WWMM_I22 (.Y(N143), .A(inst_cellmath__64__48__2WWMM_in5[21]));
INVX3 inst_cellmath__64__48__2WWMM_I74 (.Y(N221), .A(inst_cellmath__64__48__2WWMM_in0));
INVX1 inst_cellmath__64__48__2WWMM_I80 (.Y(N227), .A(N221));
INVXL inst_cellmath__64__48__2WWMM_I23 (.Y(N144), .A(N227));
NOR2X1 inst_cellmath__64__48__2WWMM_I24 (.Y(N145), .A(N144), .B(inst_cellmath__64__48__2WWMM_in2));
NAND2XL inst_cellmath__64__48__2WWMM_I25 (.Y(N148), .A(inst_cellmath__64__48__2WWMM_in3[0]), .B(N227));
NAND2XL inst_cellmath__64__48__2WWMM_I26 (.Y(N150), .A(inst_cellmath__64__48__2WWMM_in3[1]), .B(N227));
INVXL inst_cellmath__64__48__2WWMM_I79 (.Y(N226), .A(N221));
NAND2XL inst_cellmath__64__48__2WWMM_I27 (.Y(N152), .A(inst_cellmath__64__48__2WWMM_in3[2]), .B(N226));
NAND2XL inst_cellmath__64__48__2WWMM_I28 (.Y(N154), .A(inst_cellmath__64__48__2WWMM_in3[3]), .B(N226));
NAND2XL inst_cellmath__64__48__2WWMM_I29 (.Y(N156), .A(inst_cellmath__64__48__2WWMM_in3[4]), .B(N226));
NAND2XL inst_cellmath__64__48__2WWMM_I30 (.Y(N158), .A(inst_cellmath__64__48__2WWMM_in3[5]), .B(N226));
INVXL inst_cellmath__64__48__2WWMM_I78 (.Y(N225), .A(N221));
NAND2XL inst_cellmath__64__48__2WWMM_I31 (.Y(N160), .A(inst_cellmath__64__48__2WWMM_in3[6]), .B(N225));
NAND2XL inst_cellmath__64__48__2WWMM_I32 (.Y(N162), .A(inst_cellmath__64__48__2WWMM_in3[7]), .B(N225));
NAND2XL inst_cellmath__64__48__2WWMM_I33 (.Y(N164), .A(inst_cellmath__64__48__2WWMM_in3[8]), .B(N225));
NAND2XL inst_cellmath__64__48__2WWMM_I34 (.Y(N166), .A(inst_cellmath__64__48__2WWMM_in3[9]), .B(N225));
INVXL inst_cellmath__64__48__2WWMM_I77 (.Y(N224), .A(N221));
NAND2XL inst_cellmath__64__48__2WWMM_I35 (.Y(N168), .A(inst_cellmath__64__48__2WWMM_in3[10]), .B(N224));
NAND2XL inst_cellmath__64__48__2WWMM_I36 (.Y(N170), .A(inst_cellmath__64__48__2WWMM_in3[11]), .B(N224));
NAND2XL inst_cellmath__64__48__2WWMM_I37 (.Y(N172), .A(inst_cellmath__64__48__2WWMM_in3[12]), .B(N224));
NAND2XL inst_cellmath__64__48__2WWMM_I38 (.Y(N174), .A(inst_cellmath__64__48__2WWMM_in3[13]), .B(N224));
INVXL inst_cellmath__64__48__2WWMM_I76 (.Y(N223), .A(N221));
NAND2XL inst_cellmath__64__48__2WWMM_I39 (.Y(N176), .A(inst_cellmath__64__48__2WWMM_in3[14]), .B(N223));
NAND2XL inst_cellmath__64__48__2WWMM_I40 (.Y(N178), .A(inst_cellmath__64__48__2WWMM_in3[15]), .B(N223));
NAND2XL inst_cellmath__64__48__2WWMM_I41 (.Y(N180), .A(inst_cellmath__64__48__2WWMM_in3[16]), .B(N223));
NAND2XL inst_cellmath__64__48__2WWMM_I42 (.Y(N182), .A(inst_cellmath__64__48__2WWMM_in3[17]), .B(N223));
INVXL inst_cellmath__64__48__2WWMM_I75 (.Y(N222), .A(N221));
NAND2XL inst_cellmath__64__48__2WWMM_I43 (.Y(N184), .A(inst_cellmath__64__48__2WWMM_in3[18]), .B(N222));
NAND2XL inst_cellmath__64__48__2WWMM_I44 (.Y(N186), .A(inst_cellmath__64__48__2WWMM_in3[19]), .B(N222));
NAND2XL inst_cellmath__64__48__2WWMM_I45 (.Y(N188), .A(inst_cellmath__64__48__2WWMM_in3[20]), .B(N222));
NAND2XL inst_cellmath__64__48__2WWMM_I46 (.Y(N190), .A(inst_cellmath__64__48__2WWMM_in3[21]), .B(N222));
INVX3 inst_cellmath__64__48__2WWMM_I81 (.Y(N228), .A(inst_cellmath__64__48__2WWMM_in1));
INVX3 inst_cellmath__64__48__2WWMM_I82 (.Y(N229), .A(N228));
CLKINVX4 inst_cellmath__64__48__2WWMM_I73 (.Y(N220), .A(N229));
INVXL inst_cellmath__64__48__2WWMM_I87 (.Y(N234), .A(N228));
AOI22XL inst_cellmath__64__48__2WWMM_I48 (.Y(inst_cellmath__64__48__2WWMM_out0[0]), .A0(N145), .A1(N220), .B0(N121), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I49 (.Y(inst_cellmath__64__48__2WWMM_out0[1]), .A0(N220), .A1(N148), .B0(N122), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I50 (.Y(inst_cellmath__64__48__2WWMM_out0[2]), .A0(N220), .A1(N150), .B0(N123), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I51 (.Y(inst_cellmath__64__48__2WWMM_out0[3]), .A0(N220), .A1(N152), .B0(N124), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I52 (.Y(inst_cellmath__64__48__2WWMM_out0[4]), .A0(N220), .A1(N154), .B0(N125), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I53 (.Y(inst_cellmath__64__48__2WWMM_out0[5]), .A0(N220), .A1(N156), .B0(N126), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I54 (.Y(inst_cellmath__64__48__2WWMM_out0[6]), .A0(N220), .A1(N158), .B0(N127), .B1(N234));
AOI22XL inst_cellmath__64__48__2WWMM_I55 (.Y(inst_cellmath__64__48__2WWMM_out0[7]), .A0(N220), .A1(N160), .B0(N128), .B1(N234));
INVXL inst_cellmath__64__48__2WWMM_I85 (.Y(N232), .A(N228));
AOI22XL inst_cellmath__64__48__2WWMM_I56 (.Y(inst_cellmath__64__48__2WWMM_out0[8]), .A0(N220), .A1(N162), .B0(N129), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I57 (.Y(inst_cellmath__64__48__2WWMM_out0[9]), .A0(N220), .A1(N164), .B0(N130), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I58 (.Y(inst_cellmath__64__48__2WWMM_out0[10]), .A0(N220), .A1(N166), .B0(N131), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I59 (.Y(inst_cellmath__64__48__2WWMM_out0[11]), .A0(N220), .A1(N168), .B0(N132), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I60 (.Y(inst_cellmath__64__48__2WWMM_out0[12]), .A0(N220), .A1(N170), .B0(N133), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I61 (.Y(inst_cellmath__64__48__2WWMM_out0[13]), .A0(N220), .A1(N172), .B0(N134), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I62 (.Y(inst_cellmath__64__48__2WWMM_out0[14]), .A0(N220), .A1(N174), .B0(N135), .B1(N232));
AOI22XL inst_cellmath__64__48__2WWMM_I63 (.Y(inst_cellmath__64__48__2WWMM_out0[15]), .A0(N220), .A1(N176), .B0(N136), .B1(N232));
INVXL inst_cellmath__64__48__2WWMM_I83 (.Y(N230), .A(N228));
AOI22XL inst_cellmath__64__48__2WWMM_I64 (.Y(inst_cellmath__64__48__2WWMM_out0[16]), .A0(N220), .A1(N178), .B0(N137), .B1(N230));
AOI22XL inst_cellmath__64__48__2WWMM_I65 (.Y(inst_cellmath__64__48__2WWMM_out0[17]), .A0(N220), .A1(N180), .B0(N138), .B1(N230));
AOI22XL inst_cellmath__64__48__2WWMM_I66 (.Y(inst_cellmath__64__48__2WWMM_out0[18]), .A0(N220), .A1(N182), .B0(N139), .B1(N230));
AOI22XL inst_cellmath__64__48__2WWMM_I67 (.Y(inst_cellmath__64__48__2WWMM_out0[19]), .A0(N220), .A1(N184), .B0(N140), .B1(N230));
AOI22XL inst_cellmath__64__48__2WWMM_I68 (.Y(inst_cellmath__64__48__2WWMM_out0[20]), .A0(N220), .A1(N186), .B0(N141), .B1(N229));
AOI22XL inst_cellmath__64__48__2WWMM_I69 (.Y(inst_cellmath__64__48__2WWMM_out0[21]), .A0(N220), .A1(N188), .B0(N142), .B1(N229));
AOI22XL inst_cellmath__64__48__2WWMM_I70 (.Y(inst_cellmath__64__48__2WWMM_out0[22]), .A0(N220), .A1(N190), .B0(N143), .B1(N229));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__67_0_bdw105316586_bdw (
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
MXI2XL inst_cellmath__67_0_I1 (.Y(N14), .A(inst_cellmath__67_0_in3), .B(inst_cellmath__67_0_in4[0]), .S0(inst_cellmath__67_0_in5));
NOR2XL inst_cellmath__67_0_I2 (.Y(N18), .A(inst_cellmath__67_0_in5), .B(inst_cellmath__67_0_in0[0]));
MXI2X1 inst_cellmath__67_0_I3 (.Y(N16), .A(inst_cellmath__67_0_in1[0]), .B(inst_cellmath__67_0_in2[0]), .S0(inst_cellmath__67_0_in6));
MXI2XL inst_cellmath__67_0_I6 (.Y(inst_cellmath__67_0_out0), .A(N14), .B(N16), .S0(N18));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__50_0_bdw105316586_bdw (
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
	,N162,N163,N164,N196,N198,N200,N202,N204 
	,N205,N206,N207,N208,N209,N210,N211,N212 
	,N213,N214,N215,N216,N217,N218,N219,N220 
	,N221,N222,N223,N224,N256,N258,N259,N260 
	,N261,N262,N263,N264,N265,N266,N267,N268 
	,N269,N270,N271,N272,N273,N274,N275,N276 
	,N277,N278,N279,N280,N281,N431,N432,N433 
	,N436,N437,N438,N443,N444,N445,N446,N449 
	,N451;
CLKINVX6 inst_cellmath__50_0_I311 (.Y(N431), .A(inst_cellmath__50_0_in0[3]));
CLKAND2X6 inst_cellmath__50_0_I2 (.Y(N60), .A(N431), .B(inst_cellmath__50_0_in1[0]));
AND2XL inst_cellmath__50_0_I3 (.Y(N62), .A(N431), .B(inst_cellmath__50_0_in1[1]));
AND2XL inst_cellmath__50_0_I4 (.Y(N64), .A(N431), .B(inst_cellmath__50_0_in1[2]));
AND2XL inst_cellmath__50_0_I5 (.Y(N66), .A(N431), .B(inst_cellmath__50_0_in1[3]));
AND2XL inst_cellmath__50_0_I6 (.Y(N68), .A(N431), .B(inst_cellmath__50_0_in1[4]));
AND2XL inst_cellmath__50_0_I7 (.Y(N70), .A(N431), .B(inst_cellmath__50_0_in1[5]));
AND2XL inst_cellmath__50_0_I8 (.Y(N72), .A(N431), .B(inst_cellmath__50_0_in1[6]));
AND2XL inst_cellmath__50_0_I9 (.Y(N74), .A(N431), .B(inst_cellmath__50_0_in1[7]));
MX2XL inst_cellmath__50_0_I10 (.Y(N76), .A(inst_cellmath__50_0_in1[0]), .B(inst_cellmath__50_0_in1[8]), .S0(N431));
MX2XL inst_cellmath__50_0_I11 (.Y(N77), .A(inst_cellmath__50_0_in1[1]), .B(inst_cellmath__50_0_in1[9]), .S0(N431));
MX2XL inst_cellmath__50_0_I12 (.Y(N78), .A(inst_cellmath__50_0_in1[2]), .B(inst_cellmath__50_0_in1[10]), .S0(N431));
MX2XL inst_cellmath__50_0_I13 (.Y(N79), .A(inst_cellmath__50_0_in1[3]), .B(inst_cellmath__50_0_in1[11]), .S0(N431));
MX2XL inst_cellmath__50_0_I14 (.Y(N80), .A(inst_cellmath__50_0_in1[4]), .B(inst_cellmath__50_0_in1[12]), .S0(N431));
MX2XL inst_cellmath__50_0_I15 (.Y(N81), .A(inst_cellmath__50_0_in1[5]), .B(inst_cellmath__50_0_in1[13]), .S0(N431));
MX2XL inst_cellmath__50_0_I16 (.Y(N82), .A(inst_cellmath__50_0_in1[6]), .B(inst_cellmath__50_0_in1[14]), .S0(N431));
MX2XL inst_cellmath__50_0_I17 (.Y(N83), .A(inst_cellmath__50_0_in1[7]), .B(inst_cellmath__50_0_in1[15]), .S0(N431));
MX2XL inst_cellmath__50_0_I18 (.Y(N84), .A(inst_cellmath__50_0_in1[8]), .B(inst_cellmath__50_0_in1[16]), .S0(N431));
MX2XL inst_cellmath__50_0_I19 (.Y(N85), .A(inst_cellmath__50_0_in1[9]), .B(inst_cellmath__50_0_in1[17]), .S0(N431));
MX2XL inst_cellmath__50_0_I20 (.Y(N86), .A(inst_cellmath__50_0_in1[10]), .B(inst_cellmath__50_0_in1[18]), .S0(N431));
MX2XL inst_cellmath__50_0_I21 (.Y(N87), .A(inst_cellmath__50_0_in1[11]), .B(inst_cellmath__50_0_in1[19]), .S0(N431));
MX2XL inst_cellmath__50_0_I22 (.Y(N88), .A(inst_cellmath__50_0_in1[12]), .B(inst_cellmath__50_0_in1[20]), .S0(N431));
MX2XL inst_cellmath__50_0_I23 (.Y(N89), .A(inst_cellmath__50_0_in1[13]), .B(inst_cellmath__50_0_in1[21]), .S0(N431));
MX2XL inst_cellmath__50_0_I24 (.Y(N90), .A(inst_cellmath__50_0_in1[14]), .B(inst_cellmath__50_0_in1[22]), .S0(N431));
MX2XL inst_cellmath__50_0_I25 (.Y(N91), .A(inst_cellmath__50_0_in1[15]), .B(inst_cellmath__50_0_in1[23]), .S0(N431));
MX2XL inst_cellmath__50_0_I26 (.Y(N92), .A(inst_cellmath__50_0_in1[16]), .B(inst_cellmath__50_0_in1[24]), .S0(N431));
INVX3 inst_cellmath__50_0_I312 (.Y(N432), .A(inst_cellmath__50_0_in0[4]));
NAND2X8 inst_cellmath__50_0_I58 (.Y(N124), .A(N60), .B(N432));
NAND2X1 inst_cellmath__50_0_I59 (.Y(N126), .A(N62), .B(N432));
NAND2X1 inst_cellmath__50_0_I60 (.Y(N128), .A(N64), .B(N432));
NAND2XL inst_cellmath__50_0_I61 (.Y(N130), .A(N66), .B(N432));
NAND2XL inst_cellmath__50_0_I62 (.Y(N132), .A(N68), .B(N432));
NAND2XL inst_cellmath__50_0_I63 (.Y(N134), .A(N70), .B(N432));
NAND2XL inst_cellmath__50_0_I64 (.Y(N136), .A(N72), .B(N432));
NAND2XL inst_cellmath__50_0_I65 (.Y(N138), .A(N74), .B(N432));
NAND2XL inst_cellmath__50_0_I66 (.Y(N140), .A(N76), .B(N432));
NAND2XL inst_cellmath__50_0_I67 (.Y(N142), .A(N77), .B(N432));
NAND2XL inst_cellmath__50_0_I68 (.Y(N144), .A(N78), .B(N432));
NAND2XL inst_cellmath__50_0_I69 (.Y(N146), .A(N79), .B(N432));
NAND2XL inst_cellmath__50_0_I70 (.Y(N148), .A(N80), .B(N432));
NAND2XL inst_cellmath__50_0_I71 (.Y(N150), .A(N81), .B(N432));
NAND2XL inst_cellmath__50_0_I72 (.Y(N152), .A(N82), .B(N432));
NAND2XL inst_cellmath__50_0_I73 (.Y(N154), .A(N83), .B(N432));
MXI2XL inst_cellmath__50_0_I74 (.Y(N156), .A(N60), .B(N84), .S0(N432));
MXI2XL inst_cellmath__50_0_I75 (.Y(N157), .A(N62), .B(N85), .S0(N432));
MXI2XL inst_cellmath__50_0_I76 (.Y(N158), .A(N64), .B(N86), .S0(N432));
MXI2XL inst_cellmath__50_0_I77 (.Y(N159), .A(N66), .B(N87), .S0(N432));
MXI2XL inst_cellmath__50_0_I78 (.Y(N160), .A(N68), .B(N88), .S0(N432));
MXI2XL inst_cellmath__50_0_I79 (.Y(N161), .A(N70), .B(N89), .S0(N432));
MXI2XL inst_cellmath__50_0_I80 (.Y(N162), .A(N72), .B(N90), .S0(N432));
MXI2XL inst_cellmath__50_0_I81 (.Y(N163), .A(N74), .B(N91), .S0(N432));
MXI2XL inst_cellmath__50_0_I82 (.Y(N164), .A(N76), .B(N92), .S0(N432));
INVX2 inst_cellmath__50_0_I313 (.Y(N433), .A(inst_cellmath__50_0_in0[2]));
INVX2 inst_cellmath__50_0_I318 (.Y(N438), .A(N433));
INVXL inst_cellmath__50_0_I317 (.Y(N437), .A(N433));
INVXL inst_cellmath__50_0_I316 (.Y(N436), .A(N433));
NOR2X6 inst_cellmath__50_0_I114 (.Y(N196), .A(N124), .B(N438));
NOR2XL inst_cellmath__50_0_I115 (.Y(N198), .A(N126), .B(N438));
NOR2XL inst_cellmath__50_0_I116 (.Y(N200), .A(N128), .B(N438));
NOR2XL inst_cellmath__50_0_I117 (.Y(N202), .A(N130), .B(N438));
MXI2XL inst_cellmath__50_0_I118 (.Y(N204), .A(N132), .B(N124), .S0(N438));
MXI2XL inst_cellmath__50_0_I119 (.Y(N205), .A(N134), .B(N126), .S0(N437));
MXI2XL inst_cellmath__50_0_I120 (.Y(N206), .A(N136), .B(N128), .S0(N437));
MXI2XL inst_cellmath__50_0_I121 (.Y(N207), .A(N138), .B(N130), .S0(N437));
MXI2XL inst_cellmath__50_0_I122 (.Y(N208), .A(N140), .B(N132), .S0(N437));
MXI2XL inst_cellmath__50_0_I123 (.Y(N209), .A(N142), .B(N134), .S0(N437));
MXI2XL inst_cellmath__50_0_I124 (.Y(N210), .A(N144), .B(N136), .S0(N436));
MXI2XL inst_cellmath__50_0_I125 (.Y(N211), .A(N146), .B(N138), .S0(N436));
MXI2XL inst_cellmath__50_0_I126 (.Y(N212), .A(N148), .B(N140), .S0(N436));
MXI2XL inst_cellmath__50_0_I127 (.Y(N213), .A(N150), .B(N142), .S0(N436));
MXI2XL inst_cellmath__50_0_I128 (.Y(N214), .A(N152), .B(N144), .S0(N436));
MXI2XL inst_cellmath__50_0_I129 (.Y(N215), .A(N154), .B(N146), .S0(N436));
MXI2XL inst_cellmath__50_0_I130 (.Y(N216), .A(N156), .B(N148), .S0(N436));
MXI2XL inst_cellmath__50_0_I131 (.Y(N217), .A(N157), .B(N150), .S0(N436));
MXI2XL inst_cellmath__50_0_I132 (.Y(N218), .A(N158), .B(N152), .S0(N436));
MXI2XL inst_cellmath__50_0_I133 (.Y(N219), .A(N159), .B(N154), .S0(N436));
MXI2XL inst_cellmath__50_0_I134 (.Y(N220), .A(N160), .B(N156), .S0(N437));
MXI2XL inst_cellmath__50_0_I135 (.Y(N221), .A(N161), .B(N157), .S0(N437));
MXI2XL inst_cellmath__50_0_I136 (.Y(N222), .A(N162), .B(N158), .S0(N437));
MXI2XL inst_cellmath__50_0_I137 (.Y(N223), .A(N163), .B(N159), .S0(N437));
MXI2XL inst_cellmath__50_0_I138 (.Y(N224), .A(N164), .B(N160), .S0(N437));
INVX2 inst_cellmath__50_0_I325 (.Y(N445), .A(inst_cellmath__50_0_in0[0]));
INVXL inst_cellmath__50_0_I324 (.Y(N444), .A(inst_cellmath__50_0_in0[0]));
INVXL inst_cellmath__50_0_I323 (.Y(N443), .A(inst_cellmath__50_0_in0[0]));
NAND2X6 inst_cellmath__50_0_I170 (.Y(N256), .A(N196), .B(N445));
MXI2XL inst_cellmath__50_0_I171 (.Y(N258), .A(N196), .B(N198), .S0(N445));
MXI2XL inst_cellmath__50_0_I172 (.Y(N259), .A(N198), .B(N200), .S0(N445));
MXI2XL inst_cellmath__50_0_I173 (.Y(N260), .A(N200), .B(N202), .S0(N445));
MXI2XL inst_cellmath__50_0_I174 (.Y(N261), .A(N202), .B(N204), .S0(N445));
MXI2XL inst_cellmath__50_0_I175 (.Y(N262), .A(N204), .B(N205), .S0(N444));
MXI2XL inst_cellmath__50_0_I176 (.Y(N263), .A(N205), .B(N206), .S0(N444));
MXI2XL inst_cellmath__50_0_I177 (.Y(N264), .A(N206), .B(N207), .S0(N444));
MXI2XL inst_cellmath__50_0_I178 (.Y(N265), .A(N207), .B(N208), .S0(N444));
MXI2XL inst_cellmath__50_0_I179 (.Y(N266), .A(N208), .B(N209), .S0(N444));
MXI2XL inst_cellmath__50_0_I180 (.Y(N267), .A(N209), .B(N210), .S0(N443));
MXI2XL inst_cellmath__50_0_I181 (.Y(N268), .A(N210), .B(N211), .S0(N443));
MXI2XL inst_cellmath__50_0_I182 (.Y(N269), .A(N211), .B(N212), .S0(N443));
MXI2XL inst_cellmath__50_0_I183 (.Y(N270), .A(N212), .B(N213), .S0(N443));
MXI2XL inst_cellmath__50_0_I184 (.Y(N271), .A(N213), .B(N214), .S0(N443));
MXI2XL inst_cellmath__50_0_I185 (.Y(N272), .A(N214), .B(N215), .S0(N443));
MXI2XL inst_cellmath__50_0_I186 (.Y(N273), .A(N215), .B(N216), .S0(N443));
MXI2XL inst_cellmath__50_0_I187 (.Y(N274), .A(N216), .B(N217), .S0(N443));
MXI2XL inst_cellmath__50_0_I188 (.Y(N275), .A(N217), .B(N218), .S0(N443));
MXI2XL inst_cellmath__50_0_I189 (.Y(N276), .A(N218), .B(N219), .S0(N443));
MXI2XL inst_cellmath__50_0_I190 (.Y(N277), .A(N219), .B(N220), .S0(N444));
MXI2XL inst_cellmath__50_0_I191 (.Y(N278), .A(N220), .B(N221), .S0(N444));
MXI2XL inst_cellmath__50_0_I192 (.Y(N279), .A(N221), .B(N222), .S0(N444));
MXI2XL inst_cellmath__50_0_I193 (.Y(N280), .A(N222), .B(N223), .S0(N444));
MXI2XL inst_cellmath__50_0_I194 (.Y(N281), .A(N223), .B(N224), .S0(N444));
INVX1 inst_cellmath__50_0_I326 (.Y(N446), .A(inst_cellmath__50_0_in0[1]));
INVX2 inst_cellmath__50_0_I331 (.Y(N451), .A(N446));
INVXL inst_cellmath__50_0_I329 (.Y(N449), .A(N446));
NOR2X4 inst_cellmath__50_0_I226 (.Y(inst_cellmath__50_0_out0[0]), .A(N256), .B(N451));
NOR2XL inst_cellmath__50_0_I227 (.Y(inst_cellmath__50_0_out0[1]), .A(N258), .B(N451));
MXI2XL inst_cellmath__50_0_I228 (.Y(inst_cellmath__50_0_out0[2]), .A(N259), .B(N256), .S0(N451));
MXI2XL inst_cellmath__50_0_I229 (.Y(inst_cellmath__50_0_out0[3]), .A(N260), .B(N258), .S0(N451));
MXI2XL inst_cellmath__50_0_I230 (.Y(inst_cellmath__50_0_out0[4]), .A(N261), .B(N259), .S0(N451));
MXI2XL inst_cellmath__50_0_I231 (.Y(inst_cellmath__50_0_out0[5]), .A(N262), .B(N260), .S0(N451));
MXI2XL inst_cellmath__50_0_I232 (.Y(inst_cellmath__50_0_out0[6]), .A(N263), .B(N261), .S0(N451));
MXI2XL inst_cellmath__50_0_I233 (.Y(inst_cellmath__50_0_out0[7]), .A(N264), .B(N262), .S0(N451));
MXI2XL inst_cellmath__50_0_I234 (.Y(inst_cellmath__50_0_out0[8]), .A(N265), .B(N263), .S0(N451));
MXI2XL inst_cellmath__50_0_I235 (.Y(inst_cellmath__50_0_out0[9]), .A(N266), .B(N264), .S0(N451));
MXI2XL inst_cellmath__50_0_I236 (.Y(inst_cellmath__50_0_out0[10]), .A(N267), .B(N265), .S0(N449));
MXI2XL inst_cellmath__50_0_I237 (.Y(inst_cellmath__50_0_out0[11]), .A(N268), .B(N266), .S0(N449));
MXI2XL inst_cellmath__50_0_I238 (.Y(inst_cellmath__50_0_out0[12]), .A(N269), .B(N267), .S0(N449));
MXI2XL inst_cellmath__50_0_I239 (.Y(inst_cellmath__50_0_out0[13]), .A(N270), .B(N268), .S0(N449));
MXI2XL inst_cellmath__50_0_I240 (.Y(inst_cellmath__50_0_out0[14]), .A(N271), .B(N269), .S0(N449));
MXI2XL inst_cellmath__50_0_I241 (.Y(inst_cellmath__50_0_out0[15]), .A(N272), .B(N270), .S0(N449));
MXI2XL inst_cellmath__50_0_I242 (.Y(inst_cellmath__50_0_out0[16]), .A(N273), .B(N271), .S0(N449));
MXI2XL inst_cellmath__50_0_I243 (.Y(inst_cellmath__50_0_out0[17]), .A(N274), .B(N272), .S0(N449));
MXI2XL inst_cellmath__50_0_I244 (.Y(inst_cellmath__50_0_out0[18]), .A(N275), .B(N273), .S0(N449));
MXI2XL inst_cellmath__50_0_I245 (.Y(inst_cellmath__50_0_out0[19]), .A(N276), .B(N274), .S0(N449));
MXI2XL inst_cellmath__50_0_I246 (.Y(inst_cellmath__50_0_out0[20]), .A(N277), .B(N275), .S0(N451));
MXI2XL inst_cellmath__50_0_I247 (.Y(inst_cellmath__50_0_out0[21]), .A(N278), .B(N276), .S0(N451));
MXI2XL inst_cellmath__50_0_I248 (.Y(inst_cellmath__50_0_out0[22]), .A(N279), .B(N277), .S0(N451));
MXI2XL inst_cellmath__50_0_I249 (.Y(inst_cellmath__50_0_out0[23]), .A(N280), .B(N278), .S0(N451));
MXI2XL inst_cellmath__50_0_I250 (.Y(inst_cellmath__50_0_out0[24]), .A(N281), .B(N279), .S0(N451));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__26__bdw105316586_bdw (
	inst_cellmath__43__26__out0,
	inst_cellmath__43__26__in0,
	inst_cellmath__43__26__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__26__out0;
input  inst_cellmath__43__26__in0;
input [24:24] inst_cellmath__43__26__in1;
wire N6,N14,N16,N20;
INVXL inst_cellmath__43__26__I1 (.Y(N6), .A(inst_cellmath__43__26__in1[24]));
INVX1 mx2i_pc_A_I6 (.Y(N14), .A(inst_cellmath__43__26__in0));
INVXL mx2i_pc_A_I7 (.Y(N16), .A(N6));
NAND2X1 mx2i_pc_A_I9 (.Y(N20), .A(N16), .B(N14));
OAI2BB1XL mx2i_pc_A_I13 (.Y(inst_cellmath__43__26__out0[0]), .A0N(N6), .A1N(inst_cellmath__43__26__in0), .B0(N20));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__25__bdw105316586_bdw (
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

module cynw_cm_float_add2_ieee_inst_cellmath__43__28__bdw105316586_bdw (
	inst_cellmath__43__28__out0,
	inst_cellmath__43__28__in0,
	inst_cellmath__43__28__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__28__out0;
input  inst_cellmath__43__28__in0;
input [24:24] inst_cellmath__43__28__in1;
OR2XL inst_cellmath__43__28__I0 (.Y(inst_cellmath__43__28__out0[0]), .A(inst_cellmath__43__28__in1[24]), .B(inst_cellmath__43__28__in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__27__bdw105316586_bdw (
	inst_cellmath__43__27__out0,
	inst_cellmath__43__27__in0,
	inst_cellmath__43__27__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__27__out0;
input [0:0] inst_cellmath__43__27__in0;
input  inst_cellmath__43__27__in1;
wire N5;
NAND2XL inst_cellmath__43__27__I0 (.Y(N5), .A(inst_cellmath__43__27__in1), .B(inst_cellmath__43__27__in0[0]));
INVXL inst_cellmath__43__27__I1 (.Y(inst_cellmath__43__27__out0[0]), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43__24__bdw105316586_bdw (
	inst_cellmath__43__24__out0,
	inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__43__24__out0;
input [0:0] inst_cellmath__43__24__in0,
	inst_cellmath__43__24__in1;
wire N19;
NOR2X2 inst_cellmath__43__24__I4 (.Y(N19), .A(inst_cellmath__43__24__in0[0]), .B(inst_cellmath__43__24__in1[0]));
INVXL inst_cellmath__43__24__I5 (.Y(inst_cellmath__43__24__out0[0]), .A(N19));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__43_0_bdw105316586_bdw (
	inst_cellmath__43_0_out0,
	inst_cellmath__43_0_in0,
	inst_cellmath__43_0_in1,
	inst_cellmath__43_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__43_0_out0;
input [0:0] inst_cellmath__43_0_in0;
input [24:24] inst_cellmath__43_0_in1;
input  inst_cellmath__43_0_in2;
wire N6,N7,N8;
INVX1 inst_cellmath__43_0_I0 (.Y(N6), .A(inst_cellmath__43_0_in0[0]));
INVXL inst_cellmath__43_0_I1 (.Y(N7), .A(inst_cellmath__43_0_in1[24]));
INVXL inst_cellmath__43_0_I2 (.Y(N8), .A(inst_cellmath__43_0_in2));
AOI22X1 inst_cellmath__43_0_I3 (.Y(inst_cellmath__43_0_out0), .A0(N8), .A1(N7), .B0(N6), .B1(inst_cellmath__43_0_in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__53_0_bdw105316586_bdw (
	inst_cellmath__53_0_out0,
	inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1,
	inst_cellmath__53_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__53_0_out0;
input [1:1] inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1;
input  inst_cellmath__53_0_in2;
wire N6,N7;
INVXL inst_cellmath__53_0_I0 (.Y(N6), .A(inst_cellmath__53_0_in2));
INVXL inst_cellmath__53_0_I1 (.Y(N7), .A(inst_cellmath__53_0_in0[1]));
MXI2X1 inst_cellmath__53_0_I4 (.Y(inst_cellmath__53_0_out0), .A(N7), .B(N6), .S0(inst_cellmath__53_0_in1[1]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__5_0_bdw105316586_bdw (
	inst_cellmath__5_0_out0,
	inst_cellmath__5_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__5_0_out0;
input [2:0] inst_cellmath__5_0_in0;
wire N24,N26,N28;
INVXL inst_cellmath__5_0_I11 (.Y(N24), .A(inst_cellmath__5_0_in0[1]));
INVX1 inst_cellmath__5_0_I12 (.Y(N26), .A(inst_cellmath__5_0_in0[2]));
NAND3X1 inst_cellmath__5_0_I13 (.Y(N28), .A(inst_cellmath__5_0_in0[0]), .B(N26), .C(N24));
INVXL inst_cellmath__5_0_I14 (.Y(inst_cellmath__5_0_out0), .A(N28));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__39__bdw105316586_bdw (
	inst_cellmath__55__39__out0,
	inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__39__out0;
input  inst_cellmath__55__39__in0,
	inst_cellmath__55__39__in1;
wire N5;
INVXL inst_cellmath__55__39__I0 (.Y(N5), .A(inst_cellmath__55__39__in0));
NOR2XL inst_cellmath__55__39__I1 (.Y(inst_cellmath__55__39__out0[0]), .A(N5), .B(inst_cellmath__55__39__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__38__bdw105316586_bdw (
	inst_cellmath__55__38__out0,
	inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__38__out0;
input  inst_cellmath__55__38__in0,
	inst_cellmath__55__38__in1;
AND2XL inst_cellmath__55__38__I0 (.Y(inst_cellmath__55__38__out0[0]), .A(inst_cellmath__55__38__in0), .B(inst_cellmath__55__38__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__8_0_bdw105316586_bdw (
	inst_cellmath__8_0_out0,
	inst_cellmath__8_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__8_0_out0;
input [2:0] inst_cellmath__8_0_in0;
wire N30,N32,N37;
INVXL inst_cellmath__8_0_I17 (.Y(N30), .A(inst_cellmath__8_0_in0[0]));
INVX1 inst_cellmath__8_0_I18 (.Y(N32), .A(inst_cellmath__8_0_in0[1]));
NAND3X1 inst_cellmath__8_0_I20 (.Y(N37), .A(inst_cellmath__8_0_in0[2]), .B(N32), .C(N30));
INVXL inst_cellmath__8_0_I21 (.Y(inst_cellmath__8_0_out0), .A(N37));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__4_0_bdw105316586_bdw (
	inst_cellmath__4_0_out0,
	inst_cellmath__4_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__4_0_out0;
input [2:0] inst_cellmath__4_0_in0;
wire N31,N33,N35,N37;
INVXL inst_cellmath__4_0_I18 (.Y(N31), .A(inst_cellmath__4_0_in0[0]));
INVX1 inst_cellmath__4_0_I19 (.Y(N33), .A(inst_cellmath__4_0_in0[1]));
CLKINVX1 inst_cellmath__4_0_I20 (.Y(N35), .A(inst_cellmath__4_0_in0[2]));
NAND3X2 inst_cellmath__4_0_I21 (.Y(N37), .A(N33), .B(N35), .C(N31));
INVX1 inst_cellmath__4_0_I22 (.Y(inst_cellmath__4_0_out0), .A(N37));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54__33__bdw105316586_bdw (
	inst_cellmath__54__33__out0,
	inst_cellmath__54__33__in0,
	inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__54__33__out0;
input [0:0] inst_cellmath__54__33__in0;
input  inst_cellmath__54__33__in1,
	inst_cellmath__54__33__in2;
wire N7,N27;
OR2XL inst_cellmath__54__33__I0 (.Y(N7), .A(inst_cellmath__54__33__in2), .B(inst_cellmath__54__33__in1));
NOR2X6 or2_A_I13 (.Y(N27), .A(N7), .B(inst_cellmath__54__33__in0[0]));
INVX2 or2_A_I14 (.Y(inst_cellmath__54__33__out0[0]), .A(N27));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__54_0_bdw105316586_bdw (
	inst_cellmath__54_0_out0,
	inst_cellmath__54_0_in0,
	inst_cellmath__54_0_in1,
	inst_cellmath__54_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__54_0_out0;
input [0:0] inst_cellmath__54_0_in0;
input [1:1] inst_cellmath__54_0_in1;
input  inst_cellmath__54_0_in2;
wire N6,N7;
INVXL inst_cellmath__54_0_I0 (.Y(N6), .A(inst_cellmath__54_0_in2));
INVX2 inst_cellmath__54_0_I1 (.Y(N7), .A(inst_cellmath__54_0_in0[0]));
MXI2X1 inst_cellmath__54_0_I4 (.Y(inst_cellmath__54_0_out0), .A(N7), .B(N6), .S0(inst_cellmath__54_0_in1[1]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__37__bdw105316586_bdw (
	inst_cellmath__55__37__out0,
	inst_cellmath__55__37__in0,
	inst_cellmath__55__37__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__37__out0;
input  inst_cellmath__55__37__in0;
input [2:2] inst_cellmath__55__37__in1;
wire N5;
NOR2X1 inst_cellmath__55__37__I0 (.Y(N5), .A(inst_cellmath__55__37__in1[2]), .B(inst_cellmath__55__37__in0));
INVX1 inst_cellmath__55__37__I1 (.Y(inst_cellmath__55__37__out0[0]), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__36__bdw105316586_bdw (
	inst_cellmath__55__36__out0,
	inst_cellmath__55__36__in0,
	inst_cellmath__55__36__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__36__out0;
input [0:0] inst_cellmath__55__36__in0;
input  inst_cellmath__55__36__in1;
wire N5;
NAND2X2 inst_cellmath__55__36__I0 (.Y(N5), .A(inst_cellmath__55__36__in1), .B(inst_cellmath__55__36__in0[0]));
INVX2 inst_cellmath__55__36__I1 (.Y(inst_cellmath__55__36__out0[0]), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__35__bdw105316586_bdw (
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
wire N7,N8,N9,N10,N11;
NOR2XL inst_cellmath__55__35__I0 (.Y(N7), .A(inst_cellmath__55__35__in0), .B(inst_cellmath__55__35__in1[0]));
INVXL inst_cellmath__55__35__I1 (.Y(N8), .A(N7));
NOR2XL inst_cellmath__55__35__I2 (.Y(N9), .A(N8), .B(inst_cellmath__55__35__in2[0]));
INVXL inst_cellmath__55__35__I3 (.Y(N10), .A(N9));
NOR2X4 inst_cellmath__55__35__I4 (.Y(N11), .A(N10), .B(inst_cellmath__55__35__in3[0]));
INVX2 inst_cellmath__55__35__I5 (.Y(inst_cellmath__55__35__out0[0]), .A(N11));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__34__bdw105316586_bdw (
	inst_cellmath__55__34__out0,
	inst_cellmath__55__34__in0,
	inst_cellmath__55__34__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__34__out0;
input [0:0] inst_cellmath__55__34__in0;
input  inst_cellmath__55__34__in1;
wire N19;
NAND2X4 inst_cellmath__55__34__I4 (.Y(N19), .A(inst_cellmath__55__34__in1), .B(inst_cellmath__55__34__in0[0]));
INVX2 inst_cellmath__55__34__I5 (.Y(inst_cellmath__55__34__out0[0]), .A(N19));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__41__bdw105316586_bdw (
	inst_cellmath__55__41__out0,
	inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__41__out0;
input [0:0] inst_cellmath__55__41__in0,
	inst_cellmath__55__41__in1;
OR2XL inst_cellmath__55__41__I0 (.Y(inst_cellmath__55__41__out0[0]), .A(inst_cellmath__55__41__in0[0]), .B(inst_cellmath__55__41__in1[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55__40__bdw105316586_bdw (
	inst_cellmath__55__40__out0,
	inst_cellmath__55__40__in0,
	inst_cellmath__55__40__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__55__40__out0;
input [0:0] inst_cellmath__55__40__in0;
input  inst_cellmath__55__40__in1;
AND2XL inst_cellmath__55__40__I0 (.Y(inst_cellmath__55__40__out0[0]), .A(inst_cellmath__55__40__in0[0]), .B(inst_cellmath__55__40__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__55_0_bdw105316586_bdw (
	inst_cellmath__55_0_out0,
	inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__55_0_out0;
input [0:0] inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1;
wire N5;
NOR2X2 inst_cellmath__55_0_I0 (.Y(N5), .A(inst_cellmath__55_0_in0[0]), .B(inst_cellmath__55_0_in1[0]));
INVX2 inst_cellmath__55_0_I1 (.Y(inst_cellmath__55_0_out0), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__57_0_bdw105316586_bdw (
	inst_cellmath__57_0_out0,
	inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1
	); /* architecture "gate_level" */ 
output [23:0] inst_cellmath__57_0_out0;
input  inst_cellmath__57_0_in0;
input [24:2] inst_cellmath__57_0_in1;
wire N144,N148,N150,N152,N154,N156,N158 
	,N160,N162,N164,N166,N168,N170,N172,N174 
	,N176,N178,N180,N182,N184,N186,N190,N195 
	,N198,N202,N204,N206,N208,N210,N212,N214 
	,N216,N218,N220,N222,N224,N226,N228,N230 
	,N232,N234,N236,N238,N240,N249,N252,N255 
	,N258,N262,N264,N266,N268,N270,N272,N274 
	,N276,N280,N286,N288,N292,N312,N327,N330 
	,N334,N336,N338,N340,N342,N344,N346,N348 
	,N381,N384,N387,N390,N393,N396,N399,N735 
	,N736,N737,N738,N739,N740,N743,N748,N749 
	,N752,N759,N760,N761,N762,N763,N780,N781 
	;
CLKINVX3 inst_cellmath__57_0_I450 (.Y(N780), .A(inst_cellmath__57_0_in1[2]));
INVXL inst_cellmath__57_0_I451 (.Y(N781), .A(N780));
CLKAND2X6 inst_cellmath__57_0_I38 (.Y(N144), .A(inst_cellmath__57_0_in0), .B(N781));
AND2XL inst_cellmath__57_0_I41 (.Y(N148), .A(inst_cellmath__57_0_in1[3]), .B(inst_cellmath__57_0_in0));
AND2XL inst_cellmath__57_0_I43 (.Y(N150), .A(inst_cellmath__57_0_in1[4]), .B(inst_cellmath__57_0_in1[3]));
AND2XL inst_cellmath__57_0_I45 (.Y(N152), .A(inst_cellmath__57_0_in1[5]), .B(inst_cellmath__57_0_in1[4]));
AND2XL inst_cellmath__57_0_I47 (.Y(N154), .A(inst_cellmath__57_0_in1[6]), .B(inst_cellmath__57_0_in1[5]));
AND2XL inst_cellmath__57_0_I49 (.Y(N156), .A(inst_cellmath__57_0_in1[7]), .B(inst_cellmath__57_0_in1[6]));
AND2XL inst_cellmath__57_0_I51 (.Y(N158), .A(inst_cellmath__57_0_in1[8]), .B(inst_cellmath__57_0_in1[7]));
AND2XL inst_cellmath__57_0_I53 (.Y(N160), .A(inst_cellmath__57_0_in1[9]), .B(inst_cellmath__57_0_in1[8]));
AND2XL inst_cellmath__57_0_I55 (.Y(N162), .A(inst_cellmath__57_0_in1[10]), .B(inst_cellmath__57_0_in1[9]));
AND2XL inst_cellmath__57_0_I57 (.Y(N164), .A(inst_cellmath__57_0_in1[11]), .B(inst_cellmath__57_0_in1[10]));
AND2XL inst_cellmath__57_0_I59 (.Y(N166), .A(inst_cellmath__57_0_in1[12]), .B(inst_cellmath__57_0_in1[11]));
AND2XL inst_cellmath__57_0_I61 (.Y(N168), .A(inst_cellmath__57_0_in1[13]), .B(inst_cellmath__57_0_in1[12]));
AND2XL inst_cellmath__57_0_I63 (.Y(N170), .A(inst_cellmath__57_0_in1[14]), .B(inst_cellmath__57_0_in1[13]));
AND2XL inst_cellmath__57_0_I65 (.Y(N172), .A(inst_cellmath__57_0_in1[15]), .B(inst_cellmath__57_0_in1[14]));
CLKAND2X2 inst_cellmath__57_0_I67 (.Y(N174), .A(inst_cellmath__57_0_in1[16]), .B(inst_cellmath__57_0_in1[15]));
AND2XL inst_cellmath__57_0_I69 (.Y(N176), .A(inst_cellmath__57_0_in1[17]), .B(inst_cellmath__57_0_in1[16]));
CLKAND2X2 inst_cellmath__57_0_I71 (.Y(N178), .A(inst_cellmath__57_0_in1[18]), .B(inst_cellmath__57_0_in1[17]));
AND2XL inst_cellmath__57_0_I73 (.Y(N180), .A(inst_cellmath__57_0_in1[19]), .B(inst_cellmath__57_0_in1[18]));
CLKAND2X2 inst_cellmath__57_0_I75 (.Y(N182), .A(inst_cellmath__57_0_in1[20]), .B(inst_cellmath__57_0_in1[19]));
AND2XL inst_cellmath__57_0_I77 (.Y(N184), .A(inst_cellmath__57_0_in1[21]), .B(inst_cellmath__57_0_in1[20]));
CLKAND2X2 inst_cellmath__57_0_I79 (.Y(N186), .A(inst_cellmath__57_0_in1[22]), .B(inst_cellmath__57_0_in1[21]));
CLKAND2X2 inst_cellmath__57_0_I83 (.Y(N190), .A(inst_cellmath__57_0_in1[24]), .B(inst_cellmath__57_0_in1[23]));
INVXL inst_cellmath__57_0_I405 (.Y(N735), .A(N781));
INVXL inst_cellmath__57_0_I406 (.Y(N736), .A(N144));
NAND2XL inst_cellmath__57_0_I88 (.Y(N195), .A(N148), .B(N781));
NAND2X8 inst_cellmath__57_0_I90 (.Y(N198), .A(N150), .B(N144));
NAND2XL inst_cellmath__57_0_I93 (.Y(N202), .A(N152), .B(N148));
NAND2XL inst_cellmath__57_0_I95 (.Y(N204), .A(N154), .B(N150));
NAND2XL inst_cellmath__57_0_I97 (.Y(N206), .A(N156), .B(N152));
NAND2X1 inst_cellmath__57_0_I99 (.Y(N208), .A(N158), .B(N154));
NAND2XL inst_cellmath__57_0_I101 (.Y(N210), .A(N160), .B(N156));
NAND2XL inst_cellmath__57_0_I103 (.Y(N212), .A(N162), .B(N158));
NAND2XL inst_cellmath__57_0_I105 (.Y(N214), .A(N164), .B(N160));
NAND2X2 inst_cellmath__57_0_I107 (.Y(N216), .A(N166), .B(N162));
NAND2XL inst_cellmath__57_0_I109 (.Y(N218), .A(N168), .B(N164));
NAND2XL inst_cellmath__57_0_I111 (.Y(N220), .A(N170), .B(N166));
NAND2XL inst_cellmath__57_0_I113 (.Y(N222), .A(N172), .B(N168));
NAND2X2 inst_cellmath__57_0_I115 (.Y(N224), .A(N174), .B(N170));
NAND2XL inst_cellmath__57_0_I117 (.Y(N226), .A(N176), .B(N172));
NAND2XL inst_cellmath__57_0_I119 (.Y(N228), .A(N178), .B(N174));
NAND2XL inst_cellmath__57_0_I121 (.Y(N230), .A(N180), .B(N176));
NAND2X2 inst_cellmath__57_0_I123 (.Y(N232), .A(N182), .B(N178));
NAND2XL inst_cellmath__57_0_I125 (.Y(N234), .A(N184), .B(N180));
NAND2XL inst_cellmath__57_0_I127 (.Y(N236), .A(N186), .B(N182));
NAND3XL inst_cellmath__57_0_I477 (.Y(N238), .A(inst_cellmath__57_0_in1[22]), .B(inst_cellmath__57_0_in1[23]), .C(N184));
NAND2X2 inst_cellmath__57_0_I131 (.Y(N240), .A(N190), .B(N186));
INVXL inst_cellmath__57_0_I407 (.Y(N737), .A(N735));
INVXL inst_cellmath__57_0_I408 (.Y(N738), .A(N736));
INVXL inst_cellmath__57_0_I409 (.Y(N739), .A(N195));
INVXL inst_cellmath__57_0_I410 (.Y(N740), .A(N198));
NOR2XL inst_cellmath__57_0_I140 (.Y(N249), .A(N202), .B(N735));
NOR2XL inst_cellmath__57_0_I142 (.Y(N252), .A(N204), .B(N736));
NOR2XL inst_cellmath__57_0_I144 (.Y(N255), .A(N206), .B(N195));
NOR2X6 inst_cellmath__57_0_I146 (.Y(N258), .A(N208), .B(N198));
NOR2XL inst_cellmath__57_0_I149 (.Y(N262), .A(N210), .B(N202));
NOR2XL inst_cellmath__57_0_I151 (.Y(N264), .A(N212), .B(N204));
NOR2XL inst_cellmath__57_0_I153 (.Y(N266), .A(N214), .B(N206));
NOR2XL inst_cellmath__57_0_I155 (.Y(N268), .A(N216), .B(N208));
NOR2XL inst_cellmath__57_0_I157 (.Y(N270), .A(N218), .B(N210));
NOR2XL inst_cellmath__57_0_I159 (.Y(N272), .A(N220), .B(N212));
NOR2XL inst_cellmath__57_0_I161 (.Y(N274), .A(N222), .B(N214));
NOR2X2 inst_cellmath__57_0_I163 (.Y(N276), .A(N224), .B(N216));
NOR2XL inst_cellmath__57_0_I167 (.Y(N280), .A(N228), .B(N220));
NOR2XL inst_cellmath__57_0_I173 (.Y(N286), .A(N234), .B(N226));
NOR2XL inst_cellmath__57_0_I175 (.Y(N288), .A(N236), .B(N228));
NOR2X2 inst_cellmath__57_0_I179 (.Y(N292), .A(N240), .B(N232));
INVXL inst_cellmath__57_0_I413 (.Y(N743), .A(N738));
INVXL inst_cellmath__57_0_I418 (.Y(N748), .A(N249));
INVXL inst_cellmath__57_0_I419 (.Y(N749), .A(N252));
CLKINVX4 inst_cellmath__57_0_I422 (.Y(N752), .A(N258));
NAND2XL inst_cellmath__57_0_I198 (.Y(N312), .A(N264), .B(N738));
NAND2XL inst_cellmath__57_0_I208 (.Y(N327), .A(N274), .B(N255));
NAND2XL inst_cellmath__57_0_I210 (.Y(N330), .A(N276), .B(N258));
NOR3BXL inst_cellmath__57_0_I480 (.Y(N334), .AN(N262), .B(N226), .C(N218));
NAND2XL inst_cellmath__57_0_I215 (.Y(N336), .A(N280), .B(N264));
NOR3BXL inst_cellmath__57_0_I481 (.Y(N338), .AN(N266), .B(N230), .C(N222));
NOR3BXL inst_cellmath__57_0_I482 (.Y(N340), .AN(N268), .B(N232), .C(N224));
NAND2XL inst_cellmath__57_0_I221 (.Y(N342), .A(N286), .B(N270));
NAND2XL inst_cellmath__57_0_I223 (.Y(N344), .A(N288), .B(N272));
NOR3BXL inst_cellmath__57_0_I483 (.Y(N346), .AN(N274), .B(N230), .C(N238));
NAND2X4 inst_cellmath__57_0_I227 (.Y(N348), .A(N292), .B(N276));
AND2XL inst_cellmath__57_0_I484 (.Y(N759), .A(N262), .B(N737));
AND2XL inst_cellmath__57_0_I485 (.Y(N760), .A(N266), .B(N739));
AND2XL inst_cellmath__57_0_I486 (.Y(N761), .A(N268), .B(N740));
AND2XL inst_cellmath__57_0_I487 (.Y(N762), .A(N270), .B(N249));
AND2XL inst_cellmath__57_0_I488 (.Y(N763), .A(N272), .B(N252));
NAND2XL inst_cellmath__57_0_I260 (.Y(N381), .A(N334), .B(N737));
NOR2XL inst_cellmath__57_0_I262 (.Y(N384), .A(N336), .B(N743));
NAND2XL inst_cellmath__57_0_I264 (.Y(N387), .A(N338), .B(N739));
NAND2XL inst_cellmath__57_0_I266 (.Y(N390), .A(N340), .B(N740));
NOR2XL inst_cellmath__57_0_I268 (.Y(N393), .A(N342), .B(N748));
NOR2XL inst_cellmath__57_0_I270 (.Y(N396), .A(N344), .B(N749));
NAND2XL inst_cellmath__57_0_I272 (.Y(N399), .A(N346), .B(N255));
NOR2X4 inst_cellmath__57_0_I274 (.Y(inst_cellmath__57_0_out0[23]), .A(N348), .B(N752));
XOR2XL inst_cellmath__57_0_I490 (.Y(inst_cellmath__57_0_out0[0]), .A(N737), .B(inst_cellmath__57_0_in0));
XNOR2X1 inst_cellmath__57_0_I515 (.Y(inst_cellmath__57_0_out0[1]), .A(inst_cellmath__57_0_in1[3]), .B(N743));
XOR2XL inst_cellmath__57_0_I492 (.Y(inst_cellmath__57_0_out0[2]), .A(N739), .B(inst_cellmath__57_0_in1[4]));
XOR2XL inst_cellmath__57_0_I493 (.Y(inst_cellmath__57_0_out0[3]), .A(N740), .B(inst_cellmath__57_0_in1[5]));
XNOR2X1 inst_cellmath__57_0_I516 (.Y(inst_cellmath__57_0_out0[4]), .A(inst_cellmath__57_0_in1[6]), .B(N748));
XNOR2X1 inst_cellmath__57_0_I354 (.Y(inst_cellmath__57_0_out0[5]), .A(N749), .B(inst_cellmath__57_0_in1[7]));
XOR2XL inst_cellmath__57_0_I495 (.Y(inst_cellmath__57_0_out0[6]), .A(N255), .B(inst_cellmath__57_0_in1[8]));
XNOR2X1 inst_cellmath__57_0_I529 (.Y(inst_cellmath__57_0_out0[7]), .A(N752), .B(inst_cellmath__57_0_in1[9]));
XOR2XL inst_cellmath__57_0_I497 (.Y(inst_cellmath__57_0_out0[8]), .A(N759), .B(inst_cellmath__57_0_in1[10]));
XNOR2X1 inst_cellmath__57_0_I358 (.Y(inst_cellmath__57_0_out0[9]), .A(N312), .B(inst_cellmath__57_0_in1[11]));
XOR2XL inst_cellmath__57_0_I498 (.Y(inst_cellmath__57_0_out0[10]), .A(N760), .B(inst_cellmath__57_0_in1[12]));
XOR2XL inst_cellmath__57_0_I499 (.Y(inst_cellmath__57_0_out0[11]), .A(N761), .B(inst_cellmath__57_0_in1[13]));
XOR2XL inst_cellmath__57_0_I530 (.Y(inst_cellmath__57_0_out0[12]), .A(N762), .B(inst_cellmath__57_0_in1[14]));
XOR2XL inst_cellmath__57_0_I501 (.Y(inst_cellmath__57_0_out0[13]), .A(N763), .B(inst_cellmath__57_0_in1[15]));
XNOR2X1 inst_cellmath__57_0_I363 (.Y(inst_cellmath__57_0_out0[14]), .A(N327), .B(inst_cellmath__57_0_in1[16]));
XNOR2X1 inst_cellmath__57_0_I364 (.Y(inst_cellmath__57_0_out0[15]), .A(N330), .B(inst_cellmath__57_0_in1[17]));
XNOR2X1 inst_cellmath__57_0_I365 (.Y(inst_cellmath__57_0_out0[16]), .A(N381), .B(inst_cellmath__57_0_in1[18]));
XOR2XL inst_cellmath__57_0_I502 (.Y(inst_cellmath__57_0_out0[17]), .A(N384), .B(inst_cellmath__57_0_in1[19]));
XNOR2X1 inst_cellmath__57_0_I367 (.Y(inst_cellmath__57_0_out0[18]), .A(N387), .B(inst_cellmath__57_0_in1[20]));
XNOR2X1 inst_cellmath__57_0_I368 (.Y(inst_cellmath__57_0_out0[19]), .A(N390), .B(inst_cellmath__57_0_in1[21]));
XOR2XL inst_cellmath__57_0_I503 (.Y(inst_cellmath__57_0_out0[20]), .A(N393), .B(inst_cellmath__57_0_in1[22]));
XOR2XL inst_cellmath__57_0_I504 (.Y(inst_cellmath__57_0_out0[21]), .A(N396), .B(inst_cellmath__57_0_in1[23]));
XNOR2X1 inst_cellmath__57_0_I371 (.Y(inst_cellmath__57_0_out0[22]), .A(N399), .B(inst_cellmath__57_0_in1[24]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__46__bdw105316586_bdw (
	inst_cellmath__62__46__out0,
	inst_cellmath__62__46__in0,
	inst_cellmath__62__46__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__46__out0;
input [23:23] inst_cellmath__62__46__in0;
input [24:24] inst_cellmath__62__46__in1;
wire N5;
NAND2XL inst_cellmath__62__46__I0 (.Y(N5), .A(inst_cellmath__62__46__in1[24]), .B(inst_cellmath__62__46__in0[23]));
INVXL inst_cellmath__62__46__I1 (.Y(inst_cellmath__62__46__out0[0]), .A(N5));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62__45__bdw105316586_bdw (
	inst_cellmath__62__45__out0,
	inst_cellmath__62__45__in0,
	inst_cellmath__62__45__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__45__out0;
input [0:0] inst_cellmath__62__45__in0;
input [25:25] inst_cellmath__62__45__in1;
OR2XL inst_cellmath__62__45__I0 (.Y(inst_cellmath__62__45__out0[0]), .A(inst_cellmath__62__45__in1[25]), .B(inst_cellmath__62__45__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__29_0_bdw105316586_bdw (
	inst_cellmath__29_0_out0,
	inst_cellmath__29_0_in0,
	inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__29_0_out0;
input [0:0] inst_cellmath__29_0_in0;
input [7:0] inst_cellmath__29_0_in1,
	inst_cellmath__29_0_in2;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N37,N38,N39,N40,N41 
	,N42,N54,N55,N56,N57;
INVXL inst_cellmath__29_0_I0 (.Y(N27), .A(inst_cellmath__29_0_in1[0]));
INVXL inst_cellmath__29_0_I1 (.Y(N28), .A(inst_cellmath__29_0_in1[1]));
INVXL inst_cellmath__29_0_I2 (.Y(N29), .A(inst_cellmath__29_0_in1[2]));
INVXL inst_cellmath__29_0_I3 (.Y(N30), .A(inst_cellmath__29_0_in1[3]));
INVXL inst_cellmath__29_0_I4 (.Y(N31), .A(inst_cellmath__29_0_in1[4]));
INVXL inst_cellmath__29_0_I5 (.Y(N32), .A(inst_cellmath__29_0_in1[5]));
INVXL inst_cellmath__29_0_I6 (.Y(N33), .A(inst_cellmath__29_0_in1[6]));
INVXL inst_cellmath__29_0_I7 (.Y(N34), .A(inst_cellmath__29_0_in1[7]));
INVXL inst_cellmath__29_0_I8 (.Y(N35), .A(inst_cellmath__29_0_in2[0]));
INVXL inst_cellmath__29_0_I9 (.Y(N36), .A(inst_cellmath__29_0_in2[1]));
INVXL inst_cellmath__29_0_I10 (.Y(N37), .A(inst_cellmath__29_0_in2[2]));
INVXL inst_cellmath__29_0_I11 (.Y(N38), .A(inst_cellmath__29_0_in2[3]));
INVXL inst_cellmath__29_0_I12 (.Y(N39), .A(inst_cellmath__29_0_in2[4]));
INVXL inst_cellmath__29_0_I13 (.Y(N40), .A(inst_cellmath__29_0_in2[5]));
INVXL inst_cellmath__29_0_I14 (.Y(N41), .A(inst_cellmath__29_0_in2[6]));
INVXL inst_cellmath__29_0_I15 (.Y(N42), .A(inst_cellmath__29_0_in2[7]));
INVX2 inst_cellmath__29_0_I27 (.Y(N55), .A(inst_cellmath__29_0_in0[0]));
CLKINVX4 inst_cellmath__29_0_I28 (.Y(N56), .A(N55));
CLKINVX6 inst_cellmath__29_0_I26 (.Y(N54), .A(N56));
INVXL inst_cellmath__29_0_I29 (.Y(N57), .A(N55));
AOI22XL inst_cellmath__29_0_I17 (.Y(inst_cellmath__29_0_out0[0]), .A0(N54), .A1(N35), .B0(N27), .B1(N57));
AOI22XL inst_cellmath__29_0_I18 (.Y(inst_cellmath__29_0_out0[1]), .A0(N54), .A1(N36), .B0(N28), .B1(N57));
AOI22X1 inst_cellmath__29_0_I19 (.Y(inst_cellmath__29_0_out0[2]), .A0(N37), .A1(N54), .B0(N29), .B1(N57));
AOI22X1 inst_cellmath__29_0_I20 (.Y(inst_cellmath__29_0_out0[3]), .A0(N38), .A1(N54), .B0(N30), .B1(N57));
AOI22XL inst_cellmath__29_0_I21 (.Y(inst_cellmath__29_0_out0[4]), .A0(N39), .A1(N54), .B0(N31), .B1(N56));
AOI22XL inst_cellmath__29_0_I22 (.Y(inst_cellmath__29_0_out0[5]), .A0(N54), .A1(N40), .B0(N32), .B1(N56));
AOI22XL inst_cellmath__29_0_I23 (.Y(inst_cellmath__29_0_out0[6]), .A0(N54), .A1(N41), .B0(N33), .B1(N56));
AOI22XL inst_cellmath__29_0_I24 (.Y(inst_cellmath__29_0_out0[7]), .A0(N54), .A1(N42), .B0(N34), .B1(N56));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__62_0_bdw105316586_bdw (
	inst_cellmath__62_0_out0,
	inst_cellmath__62_0_in0,
	inst_cellmath__62_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__62_0_out0;
input [0:0] inst_cellmath__62_0_in0;
input [7:0] inst_cellmath__62_0_in1;
wire N12,N18,N20,N32,N40;
NAND2XL inst_cellmath__62_0_I0 (.Y(N12), .A(inst_cellmath__62_0_in1[1]), .B(inst_cellmath__62_0_in1[2]));
NAND3XL hyperpropagate_4_1_A_I18 (.Y(N32), .A(inst_cellmath__62_0_in1[6]), .B(inst_cellmath__62_0_in1[7]), .C(inst_cellmath__62_0_in1[5]));
NOR2XL hyperpropagate_4_1_A_I19 (.Y(N18), .A(inst_cellmath__62_0_in1[0]), .B(N32));
NAND3XL hyperpropagate_4_1_A_I20 (.Y(N40), .A(inst_cellmath__62_0_in1[4]), .B(inst_cellmath__62_0_in1[3]), .C(N18));
NOR2XL hyperpropagate_4_1_A_I21 (.Y(N20), .A(N12), .B(N40));
AND2X1 inst_cellmath__62_0_I9 (.Y(inst_cellmath__62_0_out0), .A(inst_cellmath__62_0_in0[0]), .B(N20));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__59_0_bdw105316586_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1,
	inst_cellmath__59_0_in2
	); /* architecture "gate_level" */ 
output [9:0] inst_cellmath__59_0_out0;
input [23:23] inst_cellmath__59_0_in0;
input [4:0] inst_cellmath__59_0_in1;
input [7:0] inst_cellmath__59_0_in2;
wire N43,N45,N47,N49,N51,N94,N95 
	,N96,N97,N100,N101,N102,N103,N104,N105 
	,N114,N118,N119,N120,N121,N122,N123,N124 
	,N125,N126,N127,N128,N129,N131,N132,N136 
	,N140,N141,N144,N145,N148,N149,N167,N169 
	,N170,N175,N191,N194,N197,N200,N203,N206 
	,N209,N219,N220,N222,N223,N225,N226,N228 
	,N229,N291,N340,N341,N349,N359,N360,N361 
	,N362;
INVXL inst_cellmath__59_0_I11 (.Y(N43), .A(inst_cellmath__59_0_in1[0]));
INVXL inst_cellmath__59_0_I12 (.Y(N45), .A(inst_cellmath__59_0_in1[1]));
INVXL inst_cellmath__59_0_I13 (.Y(N47), .A(inst_cellmath__59_0_in1[2]));
INVXL inst_cellmath__59_0_I14 (.Y(N49), .A(inst_cellmath__59_0_in1[3]));
INVXL inst_cellmath__59_0_I15 (.Y(N51), .A(inst_cellmath__59_0_in1[4]));
ADDHX1 inst_cellmath__59_0_I37 (.CO(N95), .S(N94), .A(inst_cellmath__59_0_in2[0]), .B(N43));
XNOR2X1 hap1_A_I162 (.Y(N96), .A(inst_cellmath__59_0_in2[1]), .B(N45));
OR2XL hap1_A_I163 (.Y(N97), .A(inst_cellmath__59_0_in2[1]), .B(N45));
ADDHX1 inst_cellmath__59_0_I39 (.CO(N101), .S(N100), .A(inst_cellmath__59_0_in2[2]), .B(N47));
ADDHX1 inst_cellmath__59_0_I40 (.CO(N103), .S(N102), .A(inst_cellmath__59_0_in2[3]), .B(N49));
ADDHX1 inst_cellmath__59_0_I41 (.CO(N105), .S(N104), .A(inst_cellmath__59_0_in2[4]), .B(N51));
INVXL inst_cellmath__59_0_I44 (.Y(N114), .A(inst_cellmath__59_0_in2[7]));
NAND2X4 inst_cellmath__59_0_I45 (.Y(N118), .A(N94), .B(inst_cellmath__59_0_in0[23]));
NOR2XL inst_cellmath__59_0_I46 (.Y(N119), .A(N95), .B(N96));
NAND2XL inst_cellmath__59_0_I47 (.Y(N120), .A(N95), .B(N96));
NOR2XL inst_cellmath__59_0_I48 (.Y(N121), .A(N100), .B(N97));
NAND2XL inst_cellmath__59_0_I49 (.Y(N122), .A(N100), .B(N97));
NOR2XL inst_cellmath__59_0_I50 (.Y(N123), .A(N102), .B(N101));
NAND2XL inst_cellmath__59_0_I51 (.Y(N124), .A(N102), .B(N101));
NOR2XL inst_cellmath__59_0_I52 (.Y(N125), .A(N103), .B(N104));
NAND2XL inst_cellmath__59_0_I53 (.Y(N126), .A(N103), .B(N104));
INVXL inst_cellmath__59_0_I185 (.Y(N340), .A(inst_cellmath__59_0_in2[5]));
NOR2XL inst_cellmath__59_0_I54 (.Y(N127), .A(N340), .B(N105));
NAND2XL inst_cellmath__59_0_I55 (.Y(N128), .A(N340), .B(N105));
AND2XL inst_cellmath__59_0_I56 (.Y(N129), .A(N340), .B(inst_cellmath__59_0_in2[6]));
OR2XL inst_cellmath__59_0_I212 (.Y(N341), .A(N340), .B(inst_cellmath__59_0_in2[6]));
NOR2XL inst_cellmath__59_0_I58 (.Y(N131), .A(inst_cellmath__59_0_in2[6]), .B(N114));
NAND2XL inst_cellmath__59_0_I59 (.Y(N132), .A(inst_cellmath__59_0_in2[6]), .B(N114));
AOI21X4 inst_cellmath__59_0_I63 (.Y(N136), .A0(N120), .A1(N118), .B0(N119));
AOI21XL inst_cellmath__59_0_I67 (.Y(N140), .A0(N124), .A1(N121), .B0(N123));
NAND2XL inst_cellmath__59_0_I68 (.Y(N141), .A(N124), .B(N122));
AOI21XL inst_cellmath__59_0_I71 (.Y(N144), .A0(N128), .A1(N125), .B0(N127));
NAND2XL inst_cellmath__59_0_I72 (.Y(N145), .A(N128), .B(N126));
AOI21XL inst_cellmath__59_0_I75 (.Y(N148), .A0(N132), .A1(N129), .B0(N131));
NAND2XL inst_cellmath__59_0_I76 (.Y(N149), .A(N132), .B(N341));
INVXL inst_cellmath__59_0_I194 (.Y(N349), .A(N114));
OR2XL inst_cellmath__59_0_I214 (.Y(N359), .A(N349), .B(N149));
INVX3 inst_cellmath__59_0_I205 (.Y(N360), .A(N136));
OAI21X2 inst_cellmath__59_0_I93 (.Y(N167), .A0(N141), .A1(N136), .B0(N140));
OAI21XL inst_cellmath__59_0_I95 (.Y(N169), .A0(N145), .A1(N140), .B0(N144));
NOR2XL inst_cellmath__59_0_I96 (.Y(N170), .A(N145), .B(N141));
INVX1 inst_cellmath__59_0_I206 (.Y(N361), .A(N360));
INVX1 inst_cellmath__59_0_I207 (.Y(N362), .A(N167));
AOI21X4 inst_cellmath__59_0_I101 (.Y(N175), .A0(N170), .A1(N360), .B0(N169));
NAND2BXL inst_cellmath__59_0_I117 (.Y(N191), .AN(N119), .B(N120));
NAND2BXL inst_cellmath__59_0_I120 (.Y(N194), .AN(N121), .B(N122));
NAND2BXL inst_cellmath__59_0_I123 (.Y(N197), .AN(N123), .B(N124));
NAND2BXL inst_cellmath__59_0_I126 (.Y(N200), .AN(N125), .B(N126));
NAND2BXL inst_cellmath__59_0_I129 (.Y(N203), .AN(N127), .B(N128));
NAND2BXL inst_cellmath__59_0_I132 (.Y(N206), .AN(N129), .B(N341));
NAND2BXL inst_cellmath__59_0_I135 (.Y(N209), .AN(N131), .B(N132));
XOR2XL inst_cellmath__59_0_I139 (.Y(inst_cellmath__59_0_out0[0]), .A(N94), .B(inst_cellmath__59_0_in0[23]));
XOR2XL inst_cellmath__59_0_I216 (.Y(inst_cellmath__59_0_out0[1]), .A(N118), .B(N191));
XNOR2X1 inst_cellmath__59_0_I141 (.Y(inst_cellmath__59_0_out0[2]), .A(N361), .B(N194));
XNOR2X1 inst_cellmath__59_0_I142 (.Y(inst_cellmath__59_0_out0[4]), .A(N362), .B(N200));
XNOR2X1 inst_cellmath__59_0_I143 (.Y(inst_cellmath__59_0_out0[6]), .A(N175), .B(N206));
XOR2XL node_cs_reduced_ii_local_A_I217 (.Y(N220), .A(N197), .B(N122));
XOR2XL node_cs_reduced_ii_local_A_I218 (.Y(N219), .A(N197), .B(N121));
MX2X1 inst_cellmath__59_0_I145 (.Y(inst_cellmath__59_0_out0[3]), .A(N220), .B(N219), .S0(N361));
XOR2XL node_cs_reduced_ii_local_A_I219 (.Y(N223), .A(N203), .B(N126));
XOR2XL node_cs_reduced_ii_local_A_I220 (.Y(N222), .A(N203), .B(N125));
MX2X1 inst_cellmath__59_0_I147 (.Y(inst_cellmath__59_0_out0[5]), .A(N223), .B(N222), .S0(N362));
XOR2XL node_cs_reduced_ii_local_A_I221 (.Y(N226), .A(N209), .B(N341));
XOR2XL node_cs_reduced_ii_local_A_I222 (.Y(N225), .A(N209), .B(N129));
MX2X1 inst_cellmath__59_0_I149 (.Y(inst_cellmath__59_0_out0[7]), .A(N226), .B(N225), .S0(N175));
XOR2XL node_cs_ii_local_alt_A_I171 (.Y(N228), .A(N349), .B(N148));
NAND2XL node_cs_ii_local_alt_A_I172 (.Y(N291), .A(N149), .B(N148));
XNOR2X1 node_cs_ii_local_alt_A_I173 (.Y(N229), .A(N349), .B(N291));
MXI2XL inst_cellmath__59_0_I151 (.Y(inst_cellmath__59_0_out0[8]), .A(N229), .B(N228), .S0(N175));
OAI22X1 inst_cellmath__59_0_I380 (.Y(inst_cellmath__59_0_out0[9]), .A0(N359), .A1(N175), .B0(N349), .B1(N148));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__60__44__bdw105316586_bdw (
	inst_cellmath__60__44__out0,
	inst_cellmath__60__44__in0
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__60__44__out0;
input [8:0] inst_cellmath__60__44__in0;
wire N13,N14,N15,N17,N18,N19,N20 
	;
NOR2X4 inst_cellmath__60__44__I1 (.Y(N13), .A(inst_cellmath__60__44__in0[2]), .B(inst_cellmath__60__44__in0[5]));
NOR2X4 inst_cellmath__60__44__I2 (.Y(N14), .A(inst_cellmath__60__44__in0[3]), .B(inst_cellmath__60__44__in0[7]));
NOR2X2 inst_cellmath__60__44__I3 (.Y(N15), .A(inst_cellmath__60__44__in0[4]), .B(inst_cellmath__60__44__in0[6]));
NOR3X1 inst_cellmath__60__44__I71 (.Y(N17), .A(inst_cellmath__60__44__in0[0]), .B(inst_cellmath__60__44__in0[1]), .C(inst_cellmath__60__44__in0[8]));
NAND2X4 inst_cellmath__60__44__I6 (.Y(N18), .A(N13), .B(N14));
INVX2 inst_cellmath__60__44__I7 (.Y(N19), .A(N15));
NOR2X4 inst_cellmath__60__44__I8 (.Y(N20), .A(N19), .B(N18));
NAND2X4 inst_cellmath__60__44__I9 (.Y(inst_cellmath__60__44__out0[0]), .A(N17), .B(N20));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__71_1_bdw105316586_bdw (
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
wire N15,N19,N20;
OR4X1 inst_cellmath__71_1_I12 (.Y(N15), .A(inst_cellmath__71_1_in0[0]), .B(inst_cellmath__71_1_in6), .C(inst_cellmath__71_1_in7), .D(inst_cellmath__71_1_in1));
OR3XL inst_cellmath__71_1_I13 (.Y(N19), .A(N15), .B(inst_cellmath__71_1_in5[5]), .C(inst_cellmath__71_1_in2));
NOR2XL inst_cellmath__71_1_I9 (.Y(N20), .A(N19), .B(inst_cellmath__71_1_in4[9]));
NAND2X6 inst_cellmath__71_1_I10 (.Y(inst_cellmath__71_1_out0), .A(N20), .B(inst_cellmath__71_1_in3[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__69__bdw105316586_bdw (
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
wire N8,N9,N29;
NOR2XL inst_cellmath__68__69__I0 (.Y(N8), .A(inst_cellmath__68__69__in0), .B(inst_cellmath__68__69__in3));
INVXL inst_cellmath__68__69__I9 (.Y(N29), .A(inst_cellmath__68__69__in1[0]));
NAND2XL inst_cellmath__68__69__I2 (.Y(N9), .A(N8), .B(N29));
OR2XL inst_cellmath__68__69__I12 (.Y(inst_cellmath__68__69__out0[0]), .A(inst_cellmath__68__69__in2[0]), .B(N9));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__68__bdw105316586_bdw (
	inst_cellmath__68__68__out0,
	inst_cellmath__68__68__in0,
	inst_cellmath__68__68__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__68__68__out0;
input [0:0] inst_cellmath__68__68__in0;
input  inst_cellmath__68__68__in1;
AND2XL inst_cellmath__68__68__I0 (.Y(inst_cellmath__68__68__out0[0]), .A(inst_cellmath__68__68__in0[0]), .B(inst_cellmath__68__68__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68_0_bdw105316586_bdw (
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
wire N10;
OR3XL inst_cellmath__68_0_I7 (.Y(N10), .A(inst_cellmath__68_0_in2), .B(inst_cellmath__68_0_in3), .C(inst_cellmath__68_0_in1));
OR2XL inst_cellmath__68_0_I4 (.Y(inst_cellmath__68_0_out0[0]), .A(N10), .B(inst_cellmath__68_0_in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__68__0__bdw105316586_bdw (
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
wire N10;
OR3XL inst_cellmath__68__0__I7 (.Y(N10), .A(inst_cellmath__68__0__in2), .B(inst_cellmath__68__0__in3), .C(inst_cellmath__68__0__in0));
OR2XL inst_cellmath__68__0__I4 (.Y(inst_cellmath__68__0__out0[0]), .A(N10), .B(inst_cellmath__68__0__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__72_0_bdw105316586_bdw (
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
wire N29,N37,N38,N39,N40,N41,N42 
	,N43,N44,N55;
INVXL inst_cellmath__72_0_I0 (.Y(N29), .A(inst_cellmath__72_0_in2[0]));
INVXL inst_cellmath__72_0_I25 (.Y(N55), .A(inst_cellmath__72_0_in1[0]));
INVXL inst_cellmath__72_0_I8 (.Y(N37), .A(inst_cellmath__72_0_in3[0]));
INVXL inst_cellmath__72_0_I9 (.Y(N38), .A(inst_cellmath__72_0_in3[1]));
INVXL inst_cellmath__72_0_I10 (.Y(N39), .A(inst_cellmath__72_0_in3[2]));
INVXL inst_cellmath__72_0_I11 (.Y(N40), .A(inst_cellmath__72_0_in3[3]));
INVXL inst_cellmath__72_0_I12 (.Y(N41), .A(inst_cellmath__72_0_in3[4]));
INVXL inst_cellmath__72_0_I13 (.Y(N42), .A(inst_cellmath__72_0_in3[5]));
INVXL inst_cellmath__72_0_I14 (.Y(N43), .A(inst_cellmath__72_0_in3[6]));
INVXL inst_cellmath__72_0_I15 (.Y(N44), .A(inst_cellmath__72_0_in3[7]));
MXI2XL inst_cellmath__72_0_I16 (.Y(inst_cellmath__72_0_out0[0]), .A(N37), .B(N29), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I17 (.Y(inst_cellmath__72_0_out0[1]), .A(N38), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I18 (.Y(inst_cellmath__72_0_out0[2]), .A(N39), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I19 (.Y(inst_cellmath__72_0_out0[3]), .A(N40), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I20 (.Y(inst_cellmath__72_0_out0[4]), .A(N41), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I21 (.Y(inst_cellmath__72_0_out0[5]), .A(N42), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I22 (.Y(inst_cellmath__72_0_out0[6]), .A(N43), .B(N55), .S0(inst_cellmath__72_0_in0));
MXI2XL inst_cellmath__72_0_I23 (.Y(inst_cellmath__72_0_out0[7]), .A(N44), .B(N55), .S0(inst_cellmath__72_0_in0));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__7_0_bdw105316586_bdw (
	inst_cellmath__7_0_out0,
	inst_cellmath__7_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__7_0_out0;
input [2:0] inst_cellmath__7_0_in0;
wire N36,N38;
INVX1 inst_cellmath__7_0_I19 (.Y(N36), .A(inst_cellmath__7_0_in0[2]));
NAND3X1 inst_cellmath__7_0_I20 (.Y(N38), .A(inst_cellmath__7_0_in0[0]), .B(inst_cellmath__7_0_in0[1]), .C(N36));
INVXL inst_cellmath__7_0_I21 (.Y(inst_cellmath__7_0_out0), .A(N38));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__74__bdw105316586_bdw (
	inst_cellmath__70__74__out0,
	inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__70__74__out0;
input  inst_cellmath__70__74__in0,
	inst_cellmath__70__74__in1;
wire N14;
INVXL inst_cellmath__70__74__I4 (.Y(N14), .A(inst_cellmath__70__74__in0));
MXI2X1 inst_cellmath__70__74__I5 (.Y(inst_cellmath__70__74__out0[0]), .A(inst_cellmath__70__74__in0), .B(N14), .S0(inst_cellmath__70__74__in1));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70__73__bdw105316586_bdw (
	inst_cellmath__70__73__out0,
	inst_cellmath__70__73__in0,
	inst_cellmath__70__73__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__70__73__out0;
input [0:0] inst_cellmath__70__73__in0;
input  inst_cellmath__70__73__in1;
OR2XL inst_cellmath__70__73__I0 (.Y(inst_cellmath__70__73__out0[0]), .A(inst_cellmath__70__73__in1), .B(inst_cellmath__70__73__in0[0]));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__70_0_bdw105316586_bdw (
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
NOR3BXL inst_cellmath__70_0_I6 (.Y(N9), .AN(inst_cellmath__70_0_in1[0]), .B(inst_cellmath__70_0_in0), .C(inst_cellmath__70_0_in3));
CLKAND2X3 inst_cellmath__70_0_I3 (.Y(inst_cellmath__70_0_out0), .A(N9), .B(inst_cellmath__70_0_in2));
endmodule

module cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw105316586_bdw (
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
wire N98,N99,N100,N101,N102,N103,N104 
	,N105,N106,N107,N108,N109,N110,N111,N112 
	,N113,N114,N115,N116,N117,N118,N119,N120 
	,N122,N123,N124,N125,N126,N127,N128,N129 
	,N130,N131,N132,N133,N134,N135,N136,N137 
	,N138,N139,N140,N141,N142,N143,N144,N186 
	,N187,N188,N189,N190,N191;
MXI2XL inst_cellmath__73_0_I0 (.Y(N98), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[1]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I1 (.Y(N99), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[2]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I2 (.Y(N100), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[3]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I3 (.Y(N101), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[4]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I4 (.Y(N102), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[5]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I5 (.Y(N103), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[6]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I6 (.Y(N104), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[7]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I7 (.Y(N105), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[8]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I8 (.Y(N106), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[9]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I9 (.Y(N107), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[10]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I10 (.Y(N108), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[11]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I11 (.Y(N109), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[12]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I12 (.Y(N110), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[13]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I13 (.Y(N111), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[14]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I14 (.Y(N112), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[15]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I15 (.Y(N113), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[16]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I16 (.Y(N114), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[17]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I17 (.Y(N115), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[18]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I18 (.Y(N116), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[19]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I19 (.Y(N117), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[20]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I20 (.Y(N118), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[21]), .S0(inst_cellmath__73_0_in3));
MXI2XL inst_cellmath__73_0_I21 (.Y(N119), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in2[22]), .S0(inst_cellmath__73_0_in3));
NOR2XL inst_cellmath__73_0_I22 (.Y(N120), .A(inst_cellmath__73_0_in1), .B(inst_cellmath__73_0_in3));
INVXL inst_cellmath__73_0_I23 (.Y(N122), .A(inst_cellmath__73_0_in4[0]));
INVXL inst_cellmath__73_0_I24 (.Y(N123), .A(inst_cellmath__73_0_in4[1]));
INVXL inst_cellmath__73_0_I25 (.Y(N124), .A(inst_cellmath__73_0_in4[2]));
INVXL inst_cellmath__73_0_I26 (.Y(N125), .A(inst_cellmath__73_0_in4[3]));
INVXL inst_cellmath__73_0_I27 (.Y(N126), .A(inst_cellmath__73_0_in4[4]));
INVXL inst_cellmath__73_0_I28 (.Y(N127), .A(inst_cellmath__73_0_in4[5]));
INVXL inst_cellmath__73_0_I29 (.Y(N128), .A(inst_cellmath__73_0_in4[6]));
INVXL inst_cellmath__73_0_I30 (.Y(N129), .A(inst_cellmath__73_0_in4[7]));
INVXL inst_cellmath__73_0_I31 (.Y(N130), .A(inst_cellmath__73_0_in4[8]));
INVXL inst_cellmath__73_0_I32 (.Y(N131), .A(inst_cellmath__73_0_in4[9]));
INVXL inst_cellmath__73_0_I33 (.Y(N132), .A(inst_cellmath__73_0_in4[10]));
INVXL inst_cellmath__73_0_I34 (.Y(N133), .A(inst_cellmath__73_0_in4[11]));
INVXL inst_cellmath__73_0_I35 (.Y(N134), .A(inst_cellmath__73_0_in4[12]));
INVXL inst_cellmath__73_0_I36 (.Y(N135), .A(inst_cellmath__73_0_in4[13]));
INVXL inst_cellmath__73_0_I37 (.Y(N136), .A(inst_cellmath__73_0_in4[14]));
INVXL inst_cellmath__73_0_I38 (.Y(N137), .A(inst_cellmath__73_0_in4[15]));
INVXL inst_cellmath__73_0_I39 (.Y(N138), .A(inst_cellmath__73_0_in4[16]));
INVXL inst_cellmath__73_0_I40 (.Y(N139), .A(inst_cellmath__73_0_in4[17]));
INVXL inst_cellmath__73_0_I41 (.Y(N140), .A(inst_cellmath__73_0_in4[18]));
INVXL inst_cellmath__73_0_I42 (.Y(N141), .A(inst_cellmath__73_0_in4[19]));
INVXL inst_cellmath__73_0_I43 (.Y(N142), .A(inst_cellmath__73_0_in4[20]));
INVXL inst_cellmath__73_0_I44 (.Y(N143), .A(inst_cellmath__73_0_in4[21]));
INVXL inst_cellmath__73_0_I45 (.Y(N144), .A(inst_cellmath__73_0_in4[22]));
INVX3 inst_cellmath__73_0_I84 (.Y(N186), .A(inst_cellmath__73_0_in0));
INVX1 inst_cellmath__73_0_I89 (.Y(N191), .A(N186));
INVX2 inst_cellmath__73_0_I88 (.Y(N190), .A(N186));
INVX2 inst_cellmath__73_0_I87 (.Y(N189), .A(N186));
INVX2 inst_cellmath__73_0_I86 (.Y(N188), .A(N186));
INVX2 inst_cellmath__73_0_I85 (.Y(N187), .A(N186));
MXI2XL inst_cellmath__73_0_I46 (.Y(inst_cellmath__73_0_out0[0]), .A(N122), .B(N98), .S0(N191));
MXI2XL inst_cellmath__73_0_I47 (.Y(inst_cellmath__73_0_out0[1]), .A(N123), .B(N99), .S0(N191));
MXI2XL inst_cellmath__73_0_I48 (.Y(inst_cellmath__73_0_out0[2]), .A(N124), .B(N100), .S0(N191));
MXI2XL inst_cellmath__73_0_I49 (.Y(inst_cellmath__73_0_out0[3]), .A(N125), .B(N101), .S0(N190));
MXI2XL inst_cellmath__73_0_I50 (.Y(inst_cellmath__73_0_out0[4]), .A(N126), .B(N102), .S0(N190));
MXI2XL inst_cellmath__73_0_I51 (.Y(inst_cellmath__73_0_out0[5]), .A(N127), .B(N103), .S0(N190));
MXI2XL inst_cellmath__73_0_I52 (.Y(inst_cellmath__73_0_out0[6]), .A(N128), .B(N104), .S0(N190));
MXI2XL inst_cellmath__73_0_I53 (.Y(inst_cellmath__73_0_out0[7]), .A(N129), .B(N105), .S0(N190));
MXI2XL inst_cellmath__73_0_I54 (.Y(inst_cellmath__73_0_out0[8]), .A(N130), .B(N106), .S0(N189));
MXI2XL inst_cellmath__73_0_I55 (.Y(inst_cellmath__73_0_out0[9]), .A(N131), .B(N107), .S0(N189));
MXI2XL inst_cellmath__73_0_I56 (.Y(inst_cellmath__73_0_out0[10]), .A(N132), .B(N108), .S0(N189));
MXI2XL inst_cellmath__73_0_I57 (.Y(inst_cellmath__73_0_out0[11]), .A(N133), .B(N109), .S0(N189));
MXI2XL inst_cellmath__73_0_I58 (.Y(inst_cellmath__73_0_out0[12]), .A(N134), .B(N110), .S0(N189));
MXI2XL inst_cellmath__73_0_I59 (.Y(inst_cellmath__73_0_out0[13]), .A(N135), .B(N111), .S0(N188));
MXI2XL inst_cellmath__73_0_I60 (.Y(inst_cellmath__73_0_out0[14]), .A(N136), .B(N112), .S0(N188));
MXI2XL inst_cellmath__73_0_I61 (.Y(inst_cellmath__73_0_out0[15]), .A(N137), .B(N113), .S0(N188));
MXI2XL inst_cellmath__73_0_I62 (.Y(inst_cellmath__73_0_out0[16]), .A(N138), .B(N114), .S0(N188));
MXI2XL inst_cellmath__73_0_I63 (.Y(inst_cellmath__73_0_out0[17]), .A(N139), .B(N115), .S0(N188));
MXI2XL inst_cellmath__73_0_I64 (.Y(inst_cellmath__73_0_out0[18]), .A(N140), .B(N116), .S0(N187));
MXI2XL inst_cellmath__73_0_I65 (.Y(inst_cellmath__73_0_out0[19]), .A(N141), .B(N117), .S0(N187));
MXI2XL inst_cellmath__73_0_I66 (.Y(inst_cellmath__73_0_out0[20]), .A(N142), .B(N118), .S0(N187));
MXI2XL inst_cellmath__73_0_I67 (.Y(inst_cellmath__73_0_out0[21]), .A(N143), .B(N119), .S0(N187));
MXI2XL inst_cellmath__73_0_I68 (.Y(inst_cellmath__73_0_out0[22]), .A(N144), .B(N120), .S0(N187));
endmodule

/* CADENCE  ubX2TADeqho= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




module fp_add_cynw_cm_float_add2_ieee_E8_M23_1_0( a_sign, a_exp, a_man, b_sign, b_exp, b_man, rm, x, aclk, astall );
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
cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw105316586_bdw cynw_cm_float_add2_ieee_inst_cellmath__73_0_bdw1945331063_bdw_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .rm(rm), .x(x_wire));
reg [31:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
assign x = x_reg_0;
endmodule


