`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:33 KST (Dec  7 2020 09:42:33 UTC)

module st_weight_addr_gen_Add_33Sx16U_33S_1(in2, in1, out1);
  input [32:0] in2;
  input [15:0] in1;
  output [32:0] out1;
  wire [32:0] in2;
  wire [15:0] in1;
  wire [32:0] out1;
  wire add_23_2_n_1, add_23_2_n_2, add_23_2_n_3, add_23_2_n_4,
       add_23_2_n_5, add_23_2_n_12, add_23_2_n_13, add_23_2_n_17;
  wire add_23_2_n_21, add_23_2_n_23, add_23_2_n_24, add_23_2_n_25,
       add_23_2_n_26, add_23_2_n_27, add_23_2_n_28, add_23_2_n_29;
  wire add_23_2_n_30, add_23_2_n_31, add_23_2_n_32, add_23_2_n_33,
       add_23_2_n_34, add_23_2_n_35, add_23_2_n_36, add_23_2_n_37;
  wire add_23_2_n_38, add_23_2_n_39, add_23_2_n_40, add_23_2_n_41,
       add_23_2_n_42, add_23_2_n_43, add_23_2_n_44, add_23_2_n_45;
  wire add_23_2_n_46, add_23_2_n_47, add_23_2_n_48, add_23_2_n_49,
       add_23_2_n_50, add_23_2_n_51, add_23_2_n_52, add_23_2_n_53;
  wire add_23_2_n_54, add_23_2_n_55, add_23_2_n_56, add_23_2_n_57,
       add_23_2_n_58, add_23_2_n_59, add_23_2_n_60, add_23_2_n_61;
  wire add_23_2_n_62, add_23_2_n_63, add_23_2_n_64, add_23_2_n_65,
       add_23_2_n_66, add_23_2_n_67, add_23_2_n_68, add_23_2_n_69;
  wire add_23_2_n_70, add_23_2_n_71, add_23_2_n_72, add_23_2_n_73,
       add_23_2_n_74, add_23_2_n_75, add_23_2_n_76, add_23_2_n_77;
  wire add_23_2_n_78, add_23_2_n_79, add_23_2_n_80, add_23_2_n_81,
       add_23_2_n_82, add_23_2_n_83, add_23_2_n_84, add_23_2_n_85;
  wire add_23_2_n_86, add_23_2_n_87, add_23_2_n_88, add_23_2_n_89,
       add_23_2_n_90, add_23_2_n_91, add_23_2_n_92, add_23_2_n_93;
  wire add_23_2_n_94, add_23_2_n_95, add_23_2_n_96, add_23_2_n_97,
       add_23_2_n_98, add_23_2_n_99, add_23_2_n_100, add_23_2_n_101;
  wire add_23_2_n_102, add_23_2_n_103, add_23_2_n_104, add_23_2_n_105,
       add_23_2_n_106, add_23_2_n_107, add_23_2_n_108, add_23_2_n_109;
  wire add_23_2_n_110, add_23_2_n_111, add_23_2_n_112, add_23_2_n_113,
       add_23_2_n_114, add_23_2_n_115, add_23_2_n_116, add_23_2_n_117;
  wire add_23_2_n_118, add_23_2_n_119, add_23_2_n_120, add_23_2_n_121,
       add_23_2_n_122, add_23_2_n_123, add_23_2_n_124, add_23_2_n_125;
  wire add_23_2_n_126, add_23_2_n_127, add_23_2_n_128, add_23_2_n_129,
       add_23_2_n_130, add_23_2_n_131, add_23_2_n_132, add_23_2_n_133;
  wire add_23_2_n_134, add_23_2_n_135, add_23_2_n_136, add_23_2_n_137,
       add_23_2_n_138, add_23_2_n_139, add_23_2_n_140, add_23_2_n_141;
  wire add_23_2_n_142, add_23_2_n_143, add_23_2_n_144, add_23_2_n_145,
       add_23_2_n_146, add_23_2_n_147, add_23_2_n_148, add_23_2_n_149;
  wire add_23_2_n_150, add_23_2_n_151, add_23_2_n_152, add_23_2_n_153,
       add_23_2_n_154, add_23_2_n_155, add_23_2_n_156, add_23_2_n_157;
  wire add_23_2_n_158, add_23_2_n_159, add_23_2_n_160, add_23_2_n_161,
       add_23_2_n_162, add_23_2_n_163, add_23_2_n_164, add_23_2_n_165;
  wire add_23_2_n_166, add_23_2_n_167, add_23_2_n_168, add_23_2_n_169,
       add_23_2_n_170, add_23_2_n_171, add_23_2_n_172, add_23_2_n_173;
  wire add_23_2_n_174, add_23_2_n_175, add_23_2_n_176, add_23_2_n_177,
       add_23_2_n_178, add_23_2_n_179, add_23_2_n_180, add_23_2_n_181;
  wire add_23_2_n_182, add_23_2_n_183, add_23_2_n_184, add_23_2_n_185,
       add_23_2_n_186, add_23_2_n_187, add_23_2_n_188, add_23_2_n_189;
  wire add_23_2_n_190, add_23_2_n_191, add_23_2_n_192, add_23_2_n_193,
       add_23_2_n_194, add_23_2_n_195, add_23_2_n_196, add_23_2_n_197;
  wire add_23_2_n_198, add_23_2_n_199, add_23_2_n_200, add_23_2_n_269,
       add_23_2_n_270, add_23_2_n_271, add_23_2_n_273, add_23_2_n_274;
  wire add_23_2_n_275, add_23_2_n_277, add_23_2_n_279, add_23_2_n_281,
       add_23_2_n_283, add_23_2_n_284, add_23_2_n_285, add_23_2_n_286;
  wire add_23_2_n_293, add_23_2_n_296, add_23_2_n_303;
  MXI2XL add_23_2_g854(.A (add_23_2_n_39), .B (in2[17]), .S0
       (add_23_2_n_199), .Y (out1[17]));
  MXI2XL add_23_2_g855(.A (add_23_2_n_35), .B (in2[26]), .S0
       (add_23_2_n_191), .Y (out1[26]));
  MXI2XL add_23_2_g856(.A (add_23_2_n_29), .B (in2[29]), .S0
       (add_23_2_n_192), .Y (out1[29]));
  MXI2XL add_23_2_g857(.A (add_23_2_n_28), .B (in2[19]), .S0
       (add_23_2_n_189), .Y (out1[19]));
  MXI2XL add_23_2_g858(.A (add_23_2_n_27), .B (in2[21]), .S0
       (add_23_2_n_193), .Y (out1[21]));
  MXI2XL add_23_2_g859(.A (add_23_2_n_26), .B (in2[27]), .S0
       (add_23_2_n_187), .Y (out1[27]));
  MXI2XL add_23_2_g860(.A (add_23_2_n_37), .B (in2[23]), .S0
       (add_23_2_n_186), .Y (out1[23]));
  MXI2XL add_23_2_g861(.A (add_23_2_n_38), .B (in2[25]), .S0
       (add_23_2_n_194), .Y (out1[25]));
  MXI2XL add_23_2_g862(.A (add_23_2_n_40), .B (in2[31]), .S0
       (add_23_2_n_195), .Y (out1[31]));
  MXI2XL add_23_2_g863(.A (add_23_2_n_25), .B (in2[28]), .S0
       (add_23_2_n_188), .Y (out1[28]));
  MXI2XL add_23_2_g864(.A (add_23_2_n_33), .B (in2[22]), .S0
       (add_23_2_n_190), .Y (out1[22]));
  MXI2XL add_23_2_g865(.A (add_23_2_n_34), .B (in2[20]), .S0
       (add_23_2_n_197), .Y (out1[20]));
  MXI2XL add_23_2_g866(.A (add_23_2_n_32), .B (in2[24]), .S0
       (add_23_2_n_198), .Y (out1[24]));
  MXI2XL add_23_2_g867(.A (add_23_2_n_36), .B (in2[18]), .S0
       (add_23_2_n_196), .Y (out1[18]));
  MXI2XL add_23_2_g868(.A (add_23_2_n_30), .B (in2[32]), .S0
       (add_23_2_n_200), .Y (out1[32]));
  MXI2XL add_23_2_g869(.A (add_23_2_n_31), .B (in2[30]), .S0
       (add_23_2_n_185), .Y (out1[30]));
  MXI2XL add_23_2_g872(.A (add_23_2_n_104), .B (add_23_2_n_105), .S0
       (add_23_2_n_183), .Y (out1[9]));
  MXI2XL add_23_2_g873(.A (add_23_2_n_96), .B (add_23_2_n_97), .S0
       (add_23_2_n_182), .Y (out1[15]));
  MXI2XL add_23_2_g877(.A (in2[16]), .B (add_23_2_n_24), .S0
       (add_23_2_n_179), .Y (out1[16]));
  NOR2XL add_23_2_g878(.A (add_23_2_n_144), .B (add_23_2_n_179), .Y
       (add_23_2_n_200));
  NOR2XL add_23_2_g879(.A (add_23_2_n_24), .B (add_23_2_n_179), .Y
       (add_23_2_n_199));
  NOR2XL add_23_2_g880(.A (add_23_2_n_121), .B (add_23_2_n_179), .Y
       (add_23_2_n_198));
  NOR2XL add_23_2_g881(.A (add_23_2_n_85), .B (add_23_2_n_179), .Y
       (add_23_2_n_197));
  NOR2XL add_23_2_g882(.A (add_23_2_n_52), .B (add_23_2_n_179), .Y
       (add_23_2_n_196));
  NOR2XL add_23_2_g883(.A (add_23_2_n_137), .B (add_23_2_n_179), .Y
       (add_23_2_n_195));
  NOR2XL add_23_2_g884(.A (add_23_2_n_146), .B (add_23_2_n_179), .Y
       (add_23_2_n_194));
  NOR2XL add_23_2_g885(.A (add_23_2_n_128), .B (add_23_2_n_179), .Y
       (add_23_2_n_193));
  NOR2XL add_23_2_g886(.A (add_23_2_n_139), .B (add_23_2_n_179), .Y
       (add_23_2_n_192));
  NOR2XL add_23_2_g887(.A (add_23_2_n_147), .B (add_23_2_n_179), .Y
       (add_23_2_n_191));
  NOR2XL add_23_2_g888(.A (add_23_2_n_129), .B (add_23_2_n_179), .Y
       (add_23_2_n_190));
  NOR2XL add_23_2_g889(.A (add_23_2_n_98), .B (add_23_2_n_179), .Y
       (add_23_2_n_189));
  NOR2XL add_23_2_g890(.A (add_23_2_n_148), .B (add_23_2_n_179), .Y
       (add_23_2_n_188));
  NOR2XL add_23_2_g891(.A (add_23_2_n_138), .B (add_23_2_n_179), .Y
       (add_23_2_n_187));
  NOR2XL add_23_2_g892(.A (add_23_2_n_119), .B (add_23_2_n_179), .Y
       (add_23_2_n_186));
  NOR2XL add_23_2_g893(.A (add_23_2_n_141), .B (add_23_2_n_179), .Y
       (add_23_2_n_185));
  NOR2X1 add_23_2_g894(.A (add_23_2_n_126), .B (add_23_2_n_12), .Y
       (add_23_2_n_184));
  NOR2BX1 add_23_2_g895(.AN (add_23_2_n_70), .B (add_23_2_n_177), .Y
       (add_23_2_n_183));
  NOR2X1 add_23_2_g897(.A (add_23_2_n_157), .B (add_23_2_n_173), .Y
       (add_23_2_n_182));
  NOR2X1 add_23_2_g898(.A (add_23_2_n_156), .B (add_23_2_n_171), .Y
       (add_23_2_n_181));
  NOR2X1 add_23_2_g899(.A (add_23_2_n_159), .B (add_23_2_n_172), .Y
       (add_23_2_n_180));
  NOR2X1 add_23_2_g904(.A (add_23_2_n_158), .B (add_23_2_n_174), .Y
       (add_23_2_n_178));
  NOR2X4 add_23_2_g905(.A (add_23_2_n_160), .B (add_23_2_n_175), .Y
       (add_23_2_n_179));
  NOR2X1 add_23_2_g907(.A (add_23_2_n_47), .B (add_23_2_n_170), .Y
       (add_23_2_n_177));
  NOR2X1 add_23_2_g908(.A (add_23_2_n_134), .B (add_23_2_n_170), .Y
       (add_23_2_n_176));
  NOR2X2 add_23_2_g909(.A (add_23_2_n_149), .B (add_23_2_n_170), .Y
       (add_23_2_n_175));
  NOR2X1 add_23_2_g910(.A (add_23_2_n_143), .B (add_23_2_n_170), .Y
       (add_23_2_n_174));
  NOR2X1 add_23_2_g911(.A (add_23_2_n_142), .B (add_23_2_n_170), .Y
       (add_23_2_n_173));
  NOR2X1 add_23_2_g912(.A (add_23_2_n_140), .B (add_23_2_n_170), .Y
       (add_23_2_n_172));
  NOR2X1 add_23_2_g913(.A (add_23_2_n_133), .B (add_23_2_n_170), .Y
       (add_23_2_n_171));
  NOR2X6 add_23_2_g914(.A (add_23_2_n_152), .B (add_23_2_n_165), .Y
       (add_23_2_n_170));
  NOR2BX1 add_23_2_g916(.AN (add_23_2_n_74), .B (add_23_2_n_167), .Y
       (add_23_2_n_169));
  NOR2X1 add_23_2_g919(.A (add_23_2_n_155), .B (add_23_2_n_164), .Y
       (add_23_2_n_168));
  NOR2X1 add_23_2_g920(.A (add_23_2_n_55), .B (add_23_2_n_296), .Y
       (add_23_2_n_167));
  NOR2X1 add_23_2_g921(.A (add_23_2_n_101), .B (add_23_2_n_296), .Y
       (add_23_2_n_166));
  NOR2X4 add_23_2_g922(.A (add_23_2_n_127), .B (add_23_2_n_162), .Y
       (add_23_2_n_165));
  NOR2X1 add_23_2_g923(.A (add_23_2_n_132), .B (add_23_2_n_296), .Y
       (add_23_2_n_164));
  NOR2BX1 add_23_2_g924(.AN (add_23_2_n_69), .B (add_23_2_n_4), .Y
       (add_23_2_n_163));
  NOR2X6 add_23_2_g926(.A (add_23_2_n_161), .B (add_23_2_n_130), .Y
       (add_23_2_n_162));
  NOR2X4 add_23_2_g928(.A (add_23_2_n_5), .B (add_23_2_n_150), .Y
       (add_23_2_n_161));
  OAI21X2 add_23_2_g929(.A0 (add_23_2_n_136), .A1 (add_23_2_n_153), .B0
       (add_23_2_n_151), .Y (add_23_2_n_160));
  OAI21X1 add_23_2_g930(.A0 (add_23_2_n_88), .A1 (add_23_2_n_293), .B0
       (add_23_2_n_123), .Y (add_23_2_n_159));
  OAI21X1 add_23_2_g931(.A0 (add_23_2_n_65), .A1 (add_23_2_n_293), .B0
       (add_23_2_n_68), .Y (add_23_2_n_158));
  OAI21X1 add_23_2_g932(.A0 (add_23_2_n_135), .A1 (add_23_2_n_293), .B0
       (add_23_2_n_154), .Y (add_23_2_n_157));
  OAI2BB1X1 add_23_2_g933(.A0N (add_23_2_n_64), .A1N (add_23_2_n_126),
       .B0 (add_23_2_n_45), .Y (add_23_2_n_156));
  OAI21X1 add_23_2_g934(.A0 (add_23_2_n_284), .A1 (add_23_2_n_274), .B0
       (add_23_2_n_49), .Y (add_23_2_n_155));
  OA21X1 add_23_2_g935(.A0 (add_23_2_n_66), .A1 (add_23_2_n_123), .B0
       (add_23_2_n_73), .Y (add_23_2_n_154));
  NOR2X2 add_23_2_g937(.A (add_23_2_n_116), .B (add_23_2_n_17), .Y
       (add_23_2_n_153));
  OAI21X2 add_23_2_g938(.A0 (add_23_2_n_109), .A1 (add_23_2_n_124), .B0
       (add_23_2_n_118), .Y (add_23_2_n_152));
  NOR2X1 add_23_2_g939(.A (add_23_2_n_120), .B (add_23_2_n_13), .Y
       (add_23_2_n_151));
  NOR2X2 add_23_2_g940(.A (add_23_2_n_1), .B (add_23_2_n_145), .Y
       (add_23_2_n_150));
  OR2XL add_23_2_g943(.A (add_23_2_n_136), .B (add_23_2_n_134), .Y
       (add_23_2_n_149));
  OR2XL add_23_2_g944(.A (add_23_2_n_87), .B (add_23_2_n_121), .Y
       (add_23_2_n_148));
  OR2XL add_23_2_g946(.A (add_23_2_n_67), .B (add_23_2_n_121), .Y
       (add_23_2_n_147));
  NAND2X1 add_23_2_g947(.A (in2[24]), .B (add_23_2_n_122), .Y
       (add_23_2_n_146));
  NOR2X2 add_23_2_g948(.A (add_23_2_n_56), .B (add_23_2_n_79), .Y
       (add_23_2_n_145));
  NAND2BXL add_23_2_g949(.AN (add_23_2_n_117), .B (add_23_2_n_122), .Y
       (add_23_2_n_144));
  OR2XL add_23_2_g950(.A (add_23_2_n_65), .B (add_23_2_n_134), .Y
       (add_23_2_n_143));
  OR2XL add_23_2_g951(.A (add_23_2_n_135), .B (add_23_2_n_134), .Y
       (add_23_2_n_142));
  NAND2XL add_23_2_g952(.A (add_23_2_n_131), .B (add_23_2_n_122), .Y
       (add_23_2_n_141));
  OR2XL add_23_2_g953(.A (add_23_2_n_88), .B (add_23_2_n_134), .Y
       (add_23_2_n_140));
  NAND3BXL add_23_2_g954(.AN (add_23_2_n_87), .B (add_23_2_n_122), .C
       (in2[28]), .Y (add_23_2_n_139));
  NAND3BXL add_23_2_g955(.AN (add_23_2_n_67), .B (add_23_2_n_122), .C
       (in2[26]), .Y (add_23_2_n_138));
  NAND2XL add_23_2_g956(.A (add_23_2_n_115), .B (add_23_2_n_122), .Y
       (add_23_2_n_137));
  NAND2X1 add_23_2_g958(.A (add_23_2_n_64), .B (add_23_2_n_102), .Y
       (add_23_2_n_133));
  OR2XL add_23_2_g959(.A (add_23_2_n_286), .B (add_23_2_n_101), .Y
       (add_23_2_n_132));
  NOR2X1 add_23_2_g960(.A (add_23_2_n_50), .B (add_23_2_n_87), .Y
       (add_23_2_n_131));
  OAI21X2 add_23_2_g961(.A0 (add_23_2_n_69), .A1 (add_23_2_n_303), .B0
       (add_23_2_n_77), .Y (add_23_2_n_130));
  OR2XL add_23_2_g962(.A (add_23_2_n_46), .B (add_23_2_n_85), .Y
       (add_23_2_n_129));
  NAND2X1 add_23_2_g963(.A (in2[20]), .B (add_23_2_n_84), .Y
       (add_23_2_n_128));
  NAND2X1 add_23_2_g964(.A (add_23_2_n_108), .B (add_23_2_n_100), .Y
       (add_23_2_n_127));
  NAND2X2 add_23_2_g965(.A (add_23_2_n_103), .B (add_23_2_n_89), .Y
       (add_23_2_n_136));
  NAND2BX1 add_23_2_g966(.AN (add_23_2_n_66), .B (add_23_2_n_89), .Y
       (add_23_2_n_135));
  NAND2X2 add_23_2_g967(.A (add_23_2_n_111), .B (add_23_2_n_102), .Y
       (add_23_2_n_134));
  INVX1 add_23_2_g968(.A (add_23_2_n_125), .Y (add_23_2_n_126));
  INVX1 add_23_2_g970(.A (add_23_2_n_122), .Y (add_23_2_n_121));
  OAI21X1 add_23_2_g971(.A0 (add_23_2_n_73), .A1 (add_23_2_n_54), .B0
       (add_23_2_n_58), .Y (add_23_2_n_120));
  NAND3BXL add_23_2_g972(.AN (add_23_2_n_46), .B (add_23_2_n_84), .C
       (in2[22]), .Y (add_23_2_n_119));
  AOI2BB1X1 add_23_2_g973(.A0N (add_23_2_n_49), .A1N (add_23_2_n_53),
       .B0 (add_23_2_n_78), .Y (add_23_2_n_118));
  NAND4BX1 add_23_2_g974(.AN (add_23_2_n_50), .B (add_23_2_n_86), .C
       (in2[31]), .D (in2[30]), .Y (add_23_2_n_117));
  OAI21X1 add_23_2_g975(.A0 (add_23_2_n_45), .A1 (add_23_2_n_48), .B0
       (add_23_2_n_59), .Y (add_23_2_n_116));
  NOR3X1 add_23_2_g976(.A (add_23_2_n_87), .B (add_23_2_n_31), .C
       (add_23_2_n_50), .Y (add_23_2_n_115));
  NOR2X1 add_23_2_g977(.A (add_23_2_n_3), .B (add_23_2_n_99), .Y
       (add_23_2_n_125));
  NOR2X1 add_23_2_g978(.A (add_23_2_n_2), .B (add_23_2_n_82), .Y
       (add_23_2_n_124));
  NOR2X1 add_23_2_g979(.A (add_23_2_n_60), .B (add_23_2_n_83), .Y
       (add_23_2_n_123));
  NOR2X1 add_23_2_g980(.A (add_23_2_n_81), .B (add_23_2_n_85), .Y
       (add_23_2_n_122));
  INVX1 add_23_2_g986(.A (add_23_2_n_108), .Y (add_23_2_n_109));
  INVX1 add_23_2_g989(.A (add_23_2_n_104), .Y (add_23_2_n_105));
  INVX1 add_23_2_g992(.A (add_23_2_n_100), .Y (add_23_2_n_101));
  NOR2X1 add_23_2_g993(.A (add_23_2_n_70), .B (add_23_2_n_76), .Y
       (add_23_2_n_99));
  OR2XL add_23_2_g994(.A (add_23_2_n_36), .B (add_23_2_n_52), .Y
       (add_23_2_n_98));
  NOR2BX1 add_23_2_g996(.AN (add_23_2_n_77), .B (add_23_2_n_303), .Y
       (add_23_2_n_114));
  NAND2BX1 add_23_2_g997(.AN (add_23_2_n_55), .B (add_23_2_n_74), .Y
       (add_23_2_n_113));
  NOR2X1 add_23_2_g998(.A (add_23_2_n_78), .B (add_23_2_n_279), .Y
       (add_23_2_n_112));
  NOR2X1 add_23_2_g999(.A (add_23_2_n_48), .B (add_23_2_n_63), .Y
       (add_23_2_n_111));
  NAND2X1 add_23_2_g1000(.A (add_23_2_n_45), .B (add_23_2_n_64), .Y
       (add_23_2_n_110));
  NOR2X1 add_23_2_g1001(.A (add_23_2_n_53), .B (add_23_2_n_44), .Y
       (add_23_2_n_108));
  NAND2BX1 add_23_2_g1002(.AN (add_23_2_n_283), .B (add_23_2_n_49), .Y
       (add_23_2_n_107));
  NOR2X1 add_23_2_g1003(.A (add_23_2_n_2), .B (add_23_2_n_75), .Y
       (add_23_2_n_106));
  NOR2X1 add_23_2_g1004(.A (add_23_2_n_3), .B (add_23_2_n_277), .Y
       (add_23_2_n_104));
  NOR2X1 add_23_2_g1005(.A (add_23_2_n_54), .B (add_23_2_n_66), .Y
       (add_23_2_n_103));
  NOR2X1 add_23_2_g1006(.A (add_23_2_n_76), .B (add_23_2_n_47), .Y
       (add_23_2_n_102));
  NOR2X1 add_23_2_g1007(.A (add_23_2_n_75), .B (add_23_2_n_55), .Y
       (add_23_2_n_100));
  INVX1 add_23_2_g1008(.A (add_23_2_n_96), .Y (add_23_2_n_97));
  INVX1 add_23_2_g1015(.A (add_23_2_n_89), .Y (add_23_2_n_88));
  INVX1 add_23_2_g1016(.A (add_23_2_n_86), .Y (add_23_2_n_87));
  INVX1 add_23_2_g1017(.A (add_23_2_n_85), .Y (add_23_2_n_84));
  NOR2X1 add_23_2_g1019(.A (add_23_2_n_68), .B (add_23_2_n_72), .Y
       (add_23_2_n_83));
  NOR2X1 add_23_2_g1020(.A (add_23_2_n_74), .B (add_23_2_n_75), .Y
       (add_23_2_n_82));
  OR2XL add_23_2_g1021(.A (add_23_2_n_61), .B (add_23_2_n_46), .Y
       (add_23_2_n_81));
  NOR2BX1 add_23_2_g1022(.AN (add_23_2_n_58), .B (add_23_2_n_54), .Y
       (add_23_2_n_96));
  NAND2X1 add_23_2_g1023(.A (add_23_2_n_69), .B (add_23_2_n_57), .Y
       (add_23_2_n_95));
  NAND2BX1 add_23_2_g1024(.AN (add_23_2_n_66), .B (add_23_2_n_73), .Y
       (add_23_2_n_94));
  NAND2BX1 add_23_2_g1025(.AN (add_23_2_n_47), .B (add_23_2_n_70), .Y
       (add_23_2_n_93));
  NOR2BX1 add_23_2_g1026(.AN (add_23_2_n_59), .B (add_23_2_n_48), .Y
       (add_23_2_n_92));
  NOR2X1 add_23_2_g1027(.A (add_23_2_n_1), .B (add_23_2_n_79), .Y
       (add_23_2_n_80));
  NAND2BX1 add_23_2_g1028(.AN (add_23_2_n_65), .B (add_23_2_n_68), .Y
       (add_23_2_n_91));
  NOR2X1 add_23_2_g1029(.A (add_23_2_n_60), .B (add_23_2_n_281), .Y
       (add_23_2_n_90));
  NOR2X1 add_23_2_g1030(.A (add_23_2_n_72), .B (add_23_2_n_65), .Y
       (add_23_2_n_89));
  NOR2X1 add_23_2_g1031(.A (add_23_2_n_62), .B (add_23_2_n_67), .Y
       (add_23_2_n_86));
  NAND2X1 add_23_2_g1032(.A (add_23_2_n_43), .B (add_23_2_n_51), .Y
       (add_23_2_n_85));
  INVX1 add_23_2_g1034(.A (add_23_2_n_63), .Y (add_23_2_n_64));
  NAND2X1 add_23_2_g1035(.A (in2[27]), .B (in2[26]), .Y
       (add_23_2_n_62));
  NAND2X1 add_23_2_g1036(.A (in2[23]), .B (in2[22]), .Y
       (add_23_2_n_61));
  NOR2X4 add_23_2_g1037(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_79));
  AND2X1 add_23_2_g1038(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_78));
  NAND2X1 add_23_2_g1040(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_77));
  NOR2X2 add_23_2_g1041(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_76));
  NOR2X2 add_23_2_g1042(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_75));
  NAND2X1 add_23_2_g1043(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_74));
  NAND2X1 add_23_2_g1044(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_73));
  NOR2X2 add_23_2_g1045(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_72));
  NOR2X8 add_23_2_g1046(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_71));
  NAND2X1 add_23_2_g1047(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_70));
  NAND2X2 add_23_2_g1048(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_69));
  NAND2X1 add_23_2_g1049(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_68));
  NAND2X1 add_23_2_g1050(.A (in2[25]), .B (in2[24]), .Y
       (add_23_2_n_67));
  NOR2X1 add_23_2_g1051(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_66));
  NOR2X1 add_23_2_g1052(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_65));
  NOR2X1 add_23_2_g1053(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_63));
  INVX1 add_23_2_g1055(.A (add_23_2_n_51), .Y (add_23_2_n_52));
  NOR2X1 add_23_2_g1056(.A (add_23_2_n_28), .B (add_23_2_n_36), .Y
       (add_23_2_n_43));
  AND2X1 add_23_2_g1058(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_60));
  NAND2X1 add_23_2_g1059(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_59));
  NAND2X1 add_23_2_g1060(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_58));
  NAND2X2 add_23_2_g1062(.A (add_23_2_n_42), .B (add_23_2_n_41), .Y
       (add_23_2_n_57));
  NAND2X4 add_23_2_g1063(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_56));
  NOR2X1 add_23_2_g1064(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_55));
  NOR2X1 add_23_2_g1065(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_54));
  NOR2X1 add_23_2_g1066(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_53));
  NOR2X1 add_23_2_g1067(.A (add_23_2_n_39), .B (add_23_2_n_24), .Y
       (add_23_2_n_51));
  NAND2X1 add_23_2_g1068(.A (in2[29]), .B (in2[28]), .Y
       (add_23_2_n_50));
  NAND2X1 add_23_2_g1069(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_49));
  NOR2X2 add_23_2_g1070(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_48));
  NOR2X1 add_23_2_g1071(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_47));
  NAND2X1 add_23_2_g1072(.A (in2[21]), .B (in2[20]), .Y
       (add_23_2_n_46));
  NAND2X1 add_23_2_g1073(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_45));
  NOR2X1 add_23_2_g1074(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_44));
  INVX2 add_23_2_g1077(.A (in2[2]), .Y (add_23_2_n_42));
  INVX1 add_23_2_g1078(.A (in1[2]), .Y (add_23_2_n_41));
  INVXL add_23_2_g1080(.A (in2[31]), .Y (add_23_2_n_40));
  INVX1 add_23_2_g1081(.A (in2[17]), .Y (add_23_2_n_39));
  INVXL add_23_2_g1082(.A (in2[25]), .Y (add_23_2_n_38));
  INVXL add_23_2_g1083(.A (in2[23]), .Y (add_23_2_n_37));
  INVX1 add_23_2_g1084(.A (in2[18]), .Y (add_23_2_n_36));
  INVXL add_23_2_g1085(.A (in2[26]), .Y (add_23_2_n_35));
  INVXL add_23_2_g1086(.A (in2[20]), .Y (add_23_2_n_34));
  INVXL add_23_2_g1087(.A (in2[22]), .Y (add_23_2_n_33));
  INVXL add_23_2_g1088(.A (in2[24]), .Y (add_23_2_n_32));
  INVX1 add_23_2_g1089(.A (in2[30]), .Y (add_23_2_n_31));
  INVXL add_23_2_g1093(.A (in2[32]), .Y (add_23_2_n_30));
  INVXL add_23_2_g1094(.A (in2[29]), .Y (add_23_2_n_29));
  INVX1 add_23_2_g1096(.A (in2[19]), .Y (add_23_2_n_28));
  INVXL add_23_2_g1097(.A (in2[21]), .Y (add_23_2_n_27));
  INVXL add_23_2_g1098(.A (in2[27]), .Y (add_23_2_n_26));
  INVXL add_23_2_g1099(.A (in2[28]), .Y (add_23_2_n_25));
  INVX1 add_23_2_g1100(.A (in2[16]), .Y (add_23_2_n_24));
  NOR2BX1 add_23_2_g2(.AN (add_23_2_n_293), .B (add_23_2_n_176), .Y
       (add_23_2_n_23));
  XNOR2X1 add_23_2_g1101(.A (add_23_2_n_56), .B (add_23_2_n_80), .Y
       (out1[1]));
  NOR2BX1 add_23_2_g1102(.AN (add_23_2_n_273), .B (add_23_2_n_166), .Y
       (add_23_2_n_21));
  XNOR2X1 add_23_2_g1103(.A (add_23_2_n_114), .B (add_23_2_n_163), .Y
       (out1[3]));
  CLKXOR2X1 add_23_2_g1104(.A (add_23_2_n_113), .B (add_23_2_n_296), .Y
       (out1[4]));
  XNOR2X1 add_23_2_g1105(.A (add_23_2_n_112), .B (add_23_2_n_168), .Y
       (out1[7]));
  NOR2BX1 add_23_2_g1106(.AN (add_23_2_n_111), .B (add_23_2_n_125), .Y
       (add_23_2_n_17));
  CLKXOR2X1 add_23_2_g1107(.A (add_23_2_n_110), .B (add_23_2_n_184), .Y
       (out1[10]));
  CLKXOR2X1 add_23_2_g1108(.A (add_23_2_n_107), .B (add_23_2_n_21), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1109(.A (add_23_2_n_106), .B (add_23_2_n_169), .Y
       (out1[5]));
  NOR2BX1 add_23_2_g1110(.AN (add_23_2_n_103), .B (add_23_2_n_123), .Y
       (add_23_2_n_13));
  NOR2BX1 add_23_2_g1111(.AN (add_23_2_n_102), .B (add_23_2_n_170), .Y
       (add_23_2_n_12));
  CLKXOR2X1 add_23_2_g1112(.A (add_23_2_n_95), .B (add_23_2_n_269), .Y
       (out1[2]));
  CLKXOR2X1 add_23_2_g1113(.A (add_23_2_n_94), .B (add_23_2_n_180), .Y
       (out1[14]));
  CLKXOR2X1 add_23_2_g1114(.A (add_23_2_n_93), .B (add_23_2_n_170), .Y
       (out1[8]));
  XNOR2XL add_23_2_g1115(.A (add_23_2_n_92), .B (add_23_2_n_181), .Y
       (out1[11]));
  CLKXOR2X1 add_23_2_g1116(.A (add_23_2_n_91), .B (add_23_2_n_23), .Y
       (out1[12]));
  XNOR2XL add_23_2_g1117(.A (add_23_2_n_90), .B (add_23_2_n_178), .Y
       (out1[13]));
  NAND2BX4 add_23_2_g1118(.AN (add_23_2_n_71), .B (add_23_2_n_57), .Y
       (add_23_2_n_5));
  NOR2BX1 add_23_2_g1119(.AN (add_23_2_n_57), .B (add_23_2_n_270), .Y
       (add_23_2_n_4));
  AND2X1 add_23_2_g1120(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_3));
  AND2X1 add_23_2_g1121(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  CLKAND2X6 add_23_2_g1122(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_1));
  CLKXOR2X1 add_23_2_g1123(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  INVXL add_23_2_fopt(.A (add_23_2_n_271), .Y (add_23_2_n_269));
  INVXL add_23_2_fopt1124(.A (add_23_2_n_271), .Y (add_23_2_n_270));
  INVXL add_23_2_fopt1125(.A (add_23_2_n_150), .Y (add_23_2_n_271));
  INVXL add_23_2_fopt1126(.A (add_23_2_n_275), .Y (add_23_2_n_273));
  INVXL add_23_2_fopt1127(.A (add_23_2_n_275), .Y (add_23_2_n_274));
  INVXL add_23_2_fopt1128(.A (add_23_2_n_124), .Y (add_23_2_n_275));
  BUFX2 add_23_2_fopt1129(.A (add_23_2_n_76), .Y (add_23_2_n_277));
  BUFX2 add_23_2_fopt1130(.A (add_23_2_n_53), .Y (add_23_2_n_279));
  BUFX2 add_23_2_fopt1131(.A (add_23_2_n_72), .Y (add_23_2_n_281));
  INVXL add_23_2_fopt1132(.A (add_23_2_n_285), .Y (add_23_2_n_283));
  INVXL add_23_2_fopt1133(.A (add_23_2_n_285), .Y (add_23_2_n_284));
  INVXL add_23_2_fopt1134(.A (add_23_2_n_286), .Y (add_23_2_n_285));
  BUFX2 add_23_2_fopt1135(.A (add_23_2_n_44), .Y (add_23_2_n_286));
  BUFX3 add_23_2_fopt1138(.A (add_23_2_n_153), .Y (add_23_2_n_293));
  BUFX3 add_23_2_fopt1139(.A (add_23_2_n_162), .Y (add_23_2_n_296));
  BUFX3 add_23_2_fopt1141(.A (add_23_2_n_71), .Y (add_23_2_n_303));
endmodule


