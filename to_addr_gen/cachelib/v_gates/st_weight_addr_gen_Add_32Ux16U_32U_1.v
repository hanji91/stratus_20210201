`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:35 KST (Dec  7 2020 09:42:35 UTC)

module st_weight_addr_gen_Add_32Ux16U_32U_1(in2, in1, out1);
  input [31:0] in2;
  input [15:0] in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire [15:0] in1;
  wire [31:0] out1;
  wire add_23_2_n_1, add_23_2_n_2, add_23_2_n_9, add_23_2_n_10,
       add_23_2_n_12, add_23_2_n_17, add_23_2_n_19, add_23_2_n_20;
  wire add_23_2_n_21, add_23_2_n_22, add_23_2_n_23, add_23_2_n_24,
       add_23_2_n_25, add_23_2_n_26, add_23_2_n_27, add_23_2_n_28;
  wire add_23_2_n_29, add_23_2_n_30, add_23_2_n_31, add_23_2_n_32,
       add_23_2_n_33, add_23_2_n_34, add_23_2_n_35, add_23_2_n_36;
  wire add_23_2_n_37, add_23_2_n_38, add_23_2_n_39, add_23_2_n_40,
       add_23_2_n_41, add_23_2_n_42, add_23_2_n_43, add_23_2_n_44;
  wire add_23_2_n_45, add_23_2_n_46, add_23_2_n_47, add_23_2_n_48,
       add_23_2_n_49, add_23_2_n_50, add_23_2_n_52, add_23_2_n_53;
  wire add_23_2_n_54, add_23_2_n_55, add_23_2_n_56, add_23_2_n_57,
       add_23_2_n_58, add_23_2_n_59, add_23_2_n_60, add_23_2_n_61;
  wire add_23_2_n_62, add_23_2_n_63, add_23_2_n_64, add_23_2_n_65,
       add_23_2_n_66, add_23_2_n_67, add_23_2_n_68, add_23_2_n_69;
  wire add_23_2_n_71, add_23_2_n_72, add_23_2_n_73, add_23_2_n_74,
       add_23_2_n_75, add_23_2_n_76, add_23_2_n_77, add_23_2_n_78;
  wire add_23_2_n_79, add_23_2_n_80, add_23_2_n_81, add_23_2_n_82,
       add_23_2_n_83, add_23_2_n_84, add_23_2_n_85, add_23_2_n_86;
  wire add_23_2_n_87, add_23_2_n_88, add_23_2_n_89, add_23_2_n_90,
       add_23_2_n_91, add_23_2_n_92, add_23_2_n_93, add_23_2_n_94;
  wire add_23_2_n_95, add_23_2_n_96, add_23_2_n_97, add_23_2_n_98,
       add_23_2_n_99, add_23_2_n_100, add_23_2_n_101, add_23_2_n_102;
  wire add_23_2_n_103, add_23_2_n_104, add_23_2_n_105, add_23_2_n_106,
       add_23_2_n_107, add_23_2_n_108, add_23_2_n_109, add_23_2_n_110;
  wire add_23_2_n_111, add_23_2_n_112, add_23_2_n_113, add_23_2_n_114,
       add_23_2_n_115, add_23_2_n_116, add_23_2_n_117, add_23_2_n_118;
  wire add_23_2_n_119, add_23_2_n_120, add_23_2_n_121, add_23_2_n_122,
       add_23_2_n_123, add_23_2_n_124, add_23_2_n_125, add_23_2_n_127;
  wire add_23_2_n_128, add_23_2_n_129, add_23_2_n_130, add_23_2_n_131,
       add_23_2_n_132, add_23_2_n_133, add_23_2_n_134, add_23_2_n_135;
  wire add_23_2_n_136, add_23_2_n_137, add_23_2_n_138, add_23_2_n_139,
       add_23_2_n_140, add_23_2_n_141, add_23_2_n_142, add_23_2_n_143;
  wire add_23_2_n_144, add_23_2_n_145, add_23_2_n_146, add_23_2_n_147,
       add_23_2_n_148, add_23_2_n_149, add_23_2_n_150, add_23_2_n_151;
  wire add_23_2_n_152, add_23_2_n_153, add_23_2_n_154, add_23_2_n_155,
       add_23_2_n_156, add_23_2_n_157, add_23_2_n_158, add_23_2_n_159;
  wire add_23_2_n_160, add_23_2_n_161, add_23_2_n_162, add_23_2_n_163,
       add_23_2_n_164, add_23_2_n_165, add_23_2_n_166, add_23_2_n_167;
  wire add_23_2_n_168, add_23_2_n_169, add_23_2_n_170, add_23_2_n_171,
       add_23_2_n_172, add_23_2_n_173, add_23_2_n_174, add_23_2_n_175;
  wire add_23_2_n_176, add_23_2_n_177, add_23_2_n_178, add_23_2_n_179,
       add_23_2_n_180, add_23_2_n_181, add_23_2_n_182, add_23_2_n_183;
  wire add_23_2_n_184, add_23_2_n_185, add_23_2_n_186, add_23_2_n_187,
       add_23_2_n_188, add_23_2_n_189, add_23_2_n_190, add_23_2_n_191;
  wire add_23_2_n_192, add_23_2_n_193, add_23_2_n_194, add_23_2_n_195,
       add_23_2_n_196, add_23_2_n_197, add_23_2_n_198, add_23_2_n_199;
  wire add_23_2_n_267, add_23_2_n_271, add_23_2_n_272, add_23_2_n_273,
       add_23_2_n_274, add_23_2_n_276, add_23_2_n_277, add_23_2_n_278;
  wire add_23_2_n_280, add_23_2_n_281, add_23_2_n_282, add_23_2_n_284,
       add_23_2_n_286, add_23_2_n_287, add_23_2_n_289, add_23_2_n_290;
  wire add_23_2_n_291, add_23_2_n_293, add_23_2_n_295, add_23_2_n_296,
       add_23_2_n_297, add_23_2_n_302, add_23_2_n_303, add_23_2_n_306;
  wire add_23_2_n_308, add_23_2_n_309, add_23_2_n_310, add_23_2_n_312,
       add_23_2_n_314, add_23_2_n_315, add_23_2_n_316, add_23_2_n_318;
  wire add_23_2_n_319, add_23_2_n_320, add_23_2_n_322, add_23_2_n_323,
       add_23_2_n_326, add_23_2_n_327, add_23_2_n_328, add_23_2_n_330;
  wire add_23_2_n_331, add_23_2_n_332, add_23_2_n_335, add_23_2_n_336,
       add_23_2_n_342, add_23_2_n_343, add_23_2_n_344;
  MXI2X1 add_23_2_g833(.A (add_23_2_n_27), .B (in2[17]), .S0
       (add_23_2_n_198), .Y (out1[17]));
  MXI2X1 add_23_2_g834(.A (add_23_2_n_22), .B (in2[22]), .S0
       (add_23_2_n_190), .Y (out1[22]));
  MXI2X1 add_23_2_g835(.A (add_23_2_n_35), .B (in2[19]), .S0
       (add_23_2_n_189), .Y (out1[19]));
  MXI2X1 add_23_2_g836(.A (add_23_2_n_37), .B (in2[25]), .S0
       (add_23_2_n_199), .Y (out1[25]));
  MXI2X1 add_23_2_g837(.A (add_23_2_n_23), .B (in2[23]), .S0
       (add_23_2_n_192), .Y (out1[23]));
  MXI2X1 add_23_2_g838(.A (add_23_2_n_36), .B (in2[29]), .S0
       (add_23_2_n_187), .Y (out1[29]));
  MXI2X1 add_23_2_g839(.A (add_23_2_n_24), .B (in2[27]), .S0
       (add_23_2_n_186), .Y (out1[27]));
  MXI2X1 add_23_2_g840(.A (add_23_2_n_25), .B (in2[21]), .S0
       (add_23_2_n_194), .Y (out1[21]));
  MXI2X1 add_23_2_g841(.A (add_23_2_n_26), .B (in2[30]), .S0
       (add_23_2_n_185), .Y (out1[30]));
  MXI2X1 add_23_2_g842(.A (add_23_2_n_34), .B (in2[28]), .S0
       (add_23_2_n_188), .Y (out1[28]));
  MXI2X1 add_23_2_g843(.A (add_23_2_n_31), .B (in2[26]), .S0
       (add_23_2_n_191), .Y (out1[26]));
  MXI2X1 add_23_2_g844(.A (add_23_2_n_32), .B (in2[24]), .S0
       (add_23_2_n_197), .Y (out1[24]));
  MXI2X1 add_23_2_g845(.A (add_23_2_n_38), .B (in2[31]), .S0
       (add_23_2_n_195), .Y (out1[31]));
  MXI2X1 add_23_2_g846(.A (add_23_2_n_21), .B (in2[18]), .S0
       (add_23_2_n_193), .Y (out1[18]));
  MXI2X1 add_23_2_g847(.A (add_23_2_n_33), .B (in2[20]), .S0
       (add_23_2_n_196), .Y (out1[20]));
  MXI2XL add_23_2_g848(.A (add_23_2_n_111), .B (add_23_2_n_110), .S0
       (add_23_2_n_184), .Y (out1[10]));
  MXI2XL add_23_2_g849(.A (add_23_2_n_115), .B (add_23_2_n_116), .S0
       (add_23_2_n_183), .Y (out1[9]));
  MXI2XL add_23_2_g852(.A (add_23_2_n_113), .B (add_23_2_n_114), .S0
       (add_23_2_n_178), .Y (out1[13]));
  MXI2XL add_23_2_g855(.A (in2[16]), .B (add_23_2_n_20), .S0
       (add_23_2_n_179), .Y (out1[16]));
  NOR2X1 add_23_2_g856(.A (add_23_2_n_144), .B (add_23_2_n_179), .Y
       (add_23_2_n_199));
  NOR2X1 add_23_2_g857(.A (add_23_2_n_20), .B (add_23_2_n_179), .Y
       (add_23_2_n_198));
  NOR2X1 add_23_2_g858(.A (add_23_2_n_122), .B (add_23_2_n_179), .Y
       (add_23_2_n_197));
  NOR2X1 add_23_2_g859(.A (add_23_2_n_86), .B (add_23_2_n_179), .Y
       (add_23_2_n_196));
  NOR2X1 add_23_2_g860(.A (add_23_2_n_143), .B (add_23_2_n_179), .Y
       (add_23_2_n_195));
  NOR2X1 add_23_2_g861(.A (add_23_2_n_130), .B (add_23_2_n_179), .Y
       (add_23_2_n_194));
  NOR2X1 add_23_2_g862(.A (add_23_2_n_65), .B (add_23_2_n_179), .Y
       (add_23_2_n_193));
  NOR2X1 add_23_2_g863(.A (add_23_2_n_118), .B (add_23_2_n_179), .Y
       (add_23_2_n_192));
  NOR2BX1 add_23_2_g864(.AN (add_23_2_n_146), .B (add_23_2_n_179), .Y
       (add_23_2_n_191));
  NOR2BX1 add_23_2_g865(.AN (add_23_2_n_132), .B (add_23_2_n_179), .Y
       (add_23_2_n_190));
  NOR2X1 add_23_2_g866(.A (add_23_2_n_100), .B (add_23_2_n_179), .Y
       (add_23_2_n_189));
  NOR2BX1 add_23_2_g867(.AN (add_23_2_n_147), .B (add_23_2_n_179), .Y
       (add_23_2_n_188));
  NOR2X1 add_23_2_g868(.A (add_23_2_n_138), .B (add_23_2_n_179), .Y
       (add_23_2_n_187));
  NOR2X1 add_23_2_g869(.A (add_23_2_n_139), .B (add_23_2_n_179), .Y
       (add_23_2_n_186));
  NOR2BX1 add_23_2_g870(.AN (add_23_2_n_140), .B (add_23_2_n_179), .Y
       (add_23_2_n_185));
  NOR2X1 add_23_2_g871(.A (add_23_2_n_322), .B (add_23_2_n_9), .Y
       (add_23_2_n_184));
  NOR2BX1 add_23_2_g872(.AN (add_23_2_n_289), .B (add_23_2_n_177), .Y
       (add_23_2_n_183));
  NOR2X1 add_23_2_g874(.A (add_23_2_n_173), .B (add_23_2_n_156), .Y
       (add_23_2_n_182));
  NOR2X1 add_23_2_g875(.A (add_23_2_n_159), .B (add_23_2_n_172), .Y
       (add_23_2_n_181));
  NOR2X1 add_23_2_g876(.A (add_23_2_n_153), .B (add_23_2_n_171), .Y
       (add_23_2_n_180));
  NOR2X1 add_23_2_g881(.A (add_23_2_n_158), .B (add_23_2_n_174), .Y
       (add_23_2_n_178));
  NOR2X6 add_23_2_g882(.A (add_23_2_n_160), .B (add_23_2_n_175), .Y
       (add_23_2_n_179));
  NOR2X1 add_23_2_g884(.A (add_23_2_n_309), .B (add_23_2_n_170), .Y
       (add_23_2_n_177));
  NOR2X1 add_23_2_g885(.A (add_23_2_n_134), .B (add_23_2_n_170), .Y
       (add_23_2_n_176));
  NOR2X6 add_23_2_g886(.A (add_23_2_n_145), .B (add_23_2_n_170), .Y
       (add_23_2_n_175));
  NOR2X1 add_23_2_g887(.A (add_23_2_n_137), .B (add_23_2_n_170), .Y
       (add_23_2_n_174));
  NOR2X1 add_23_2_g888(.A (add_23_2_n_141), .B (add_23_2_n_170), .Y
       (add_23_2_n_173));
  NOR2X1 add_23_2_g889(.A (add_23_2_n_148), .B (add_23_2_n_170), .Y
       (add_23_2_n_172));
  NOR2X1 add_23_2_g890(.A (add_23_2_n_129), .B (add_23_2_n_170), .Y
       (add_23_2_n_171));
  NOR2X6 add_23_2_g891(.A (add_23_2_n_151), .B (add_23_2_n_165), .Y
       (add_23_2_n_170));
  NOR2BX1 add_23_2_g893(.AN (add_23_2_n_67), .B (add_23_2_n_167), .Y
       (add_23_2_n_169));
  NOR2X1 add_23_2_g896(.A (add_23_2_n_155), .B (add_23_2_n_164), .Y
       (add_23_2_n_168));
  NOR2X1 add_23_2_g897(.A (add_23_2_n_66), .B (add_23_2_n_303), .Y
       (add_23_2_n_167));
  NOR2X1 add_23_2_g898(.A (add_23_2_n_89), .B (add_23_2_n_303), .Y
       (add_23_2_n_166));
  NOR2X6 add_23_2_g899(.A (add_23_2_n_128), .B (add_23_2_n_162), .Y
       (add_23_2_n_165));
  NOR2X1 add_23_2_g900(.A (add_23_2_n_131), .B (add_23_2_n_303), .Y
       (add_23_2_n_164));
  NOR2BX1 add_23_2_g901(.AN (add_23_2_n_280), .B (add_23_2_n_161), .Y
       (add_23_2_n_163));
  NOR2X6 add_23_2_g903(.A (add_23_2_n_117), .B (add_23_2_n_157), .Y
       (add_23_2_n_162));
  NOR2X1 add_23_2_g904(.A (add_23_2_n_286), .B (add_23_2_n_277), .Y
       (add_23_2_n_161));
  OAI21X2 add_23_2_g905(.A0 (add_23_2_n_136), .A1 (add_23_2_n_150), .B0
       (add_23_2_n_152), .Y (add_23_2_n_160));
  OAI21X1 add_23_2_g906(.A0 (add_23_2_n_101), .A1 (add_23_2_n_273), .B0
       (add_23_2_n_295), .Y (add_23_2_n_159));
  OAI21X1 add_23_2_g907(.A0 (add_23_2_n_60), .A1 (add_23_2_n_271), .B0
       (add_23_2_n_331), .Y (add_23_2_n_158));
  NOR2X6 add_23_2_g908(.A (add_23_2_n_98), .B (add_23_2_n_149), .Y
       (add_23_2_n_157));
  OAI21X1 add_23_2_g909(.A0 (add_23_2_n_135), .A1 (add_23_2_n_272), .B0
       (add_23_2_n_154), .Y (add_23_2_n_156));
  OAI21X1 add_23_2_g910(.A0 (add_23_2_n_43), .A1 (add_23_2_n_327), .B0
       (add_23_2_n_315), .Y (add_23_2_n_155));
  OA21X1 add_23_2_g911(.A0 (add_23_2_n_318), .A1 (add_23_2_n_296), .B0
       (add_23_2_n_74), .Y (add_23_2_n_154));
  OAI2BB1X1 add_23_2_g912(.A0N (add_23_2_n_45), .A1N (add_23_2_n_323),
       .B0 (add_23_2_n_62), .Y (add_23_2_n_153));
  NOR2X2 add_23_2_g913(.A (add_23_2_n_133), .B (add_23_2_n_10), .Y
       (add_23_2_n_152));
  OAI21X4 add_23_2_g914(.A0 (add_23_2_n_91), .A1 (add_23_2_n_127), .B0
       (add_23_2_n_119), .Y (add_23_2_n_151));
  NOR2X2 add_23_2_g916(.A (add_23_2_n_120), .B (add_23_2_n_12), .Y
       (add_23_2_n_150));
  NOR2X4 add_23_2_g917(.A (add_23_2_n_79), .B (add_23_2_n_142), .Y
       (add_23_2_n_149));
  OR2XL add_23_2_g919(.A (add_23_2_n_101), .B (add_23_2_n_134), .Y
       (add_23_2_n_148));
  NOR2XL add_23_2_g920(.A (add_23_2_n_87), .B (add_23_2_n_122), .Y
       (add_23_2_n_147));
  NOR2XL add_23_2_g922(.A (add_23_2_n_52), .B (add_23_2_n_122), .Y
       (add_23_2_n_146));
  OR2X6 add_23_2_g923(.A (add_23_2_n_134), .B (add_23_2_n_136), .Y
       (add_23_2_n_145));
  NAND2X1 add_23_2_g924(.A (in2[24]), .B (add_23_2_n_123), .Y
       (add_23_2_n_144));
  NAND2X1 add_23_2_g926(.A (add_23_2_n_121), .B (add_23_2_n_123), .Y
       (add_23_2_n_143));
  NOR2X4 add_23_2_g927(.A (add_23_2_n_59), .B (add_23_2_n_46), .Y
       (add_23_2_n_142));
  OR2XL add_23_2_g928(.A (add_23_2_n_135), .B (add_23_2_n_134), .Y
       (add_23_2_n_141));
  NOR3X1 add_23_2_g929(.A (add_23_2_n_87), .B (add_23_2_n_80), .C
       (add_23_2_n_122), .Y (add_23_2_n_140));
  NAND3BXL add_23_2_g930(.AN (add_23_2_n_52), .B (in2[26]), .C
       (add_23_2_n_123), .Y (add_23_2_n_139));
  NAND3BXL add_23_2_g931(.AN (add_23_2_n_87), .B (in2[28]), .C
       (add_23_2_n_123), .Y (add_23_2_n_138));
  OR2XL add_23_2_g932(.A (add_23_2_n_60), .B (add_23_2_n_134), .Y
       (add_23_2_n_137));
  OAI21X1 add_23_2_g934(.A0 (add_23_2_n_74), .A1 (add_23_2_n_69), .B0
       (add_23_2_n_75), .Y (add_23_2_n_133));
  NOR2X1 add_23_2_g935(.A (add_23_2_n_49), .B (add_23_2_n_86), .Y
       (add_23_2_n_132));
  OR2XL add_23_2_g936(.A (add_23_2_n_43), .B (add_23_2_n_89), .Y
       (add_23_2_n_131));
  NAND2X1 add_23_2_g937(.A (in2[20]), .B (add_23_2_n_85), .Y
       (add_23_2_n_130));
  NAND2X1 add_23_2_g938(.A (add_23_2_n_45), .B (add_23_2_n_343), .Y
       (add_23_2_n_129));
  NAND2X2 add_23_2_g939(.A (add_23_2_n_90), .B (add_23_2_n_88), .Y
       (add_23_2_n_128));
  NAND2X2 add_23_2_g940(.A (add_23_2_n_104), .B (add_23_2_n_102), .Y
       (add_23_2_n_136));
  NAND2BX1 add_23_2_g941(.AN (add_23_2_n_319), .B (add_23_2_n_102), .Y
       (add_23_2_n_135));
  NAND2X2 add_23_2_g942(.A (add_23_2_n_106), .B (add_23_2_n_103), .Y
       (add_23_2_n_134));
  INVX1 add_23_2_g945(.A (add_23_2_n_123), .Y (add_23_2_n_122));
  NOR3X1 add_23_2_g946(.A (add_23_2_n_87), .B (add_23_2_n_26), .C
       (add_23_2_n_80), .Y (add_23_2_n_121));
  OAI21X2 add_23_2_g947(.A0 (add_23_2_n_62), .A1 (add_23_2_n_47), .B0
       (add_23_2_n_58), .Y (add_23_2_n_120));
  AOI2BB1X2 add_23_2_g948(.A0N (add_23_2_n_53), .A1N (add_23_2_n_63),
       .B0 (add_23_2_n_76), .Y (add_23_2_n_119));
  NAND3BXL add_23_2_g949(.AN (add_23_2_n_49), .B (add_23_2_n_85), .C
       (in2[22]), .Y (add_23_2_n_118));
  OAI21X2 add_23_2_g950(.A0 (add_23_2_n_56), .A1 (add_23_2_n_71), .B0
       (add_23_2_n_77), .Y (add_23_2_n_117));
  NOR2X2 add_23_2_g951(.A (add_23_2_n_2), .B (add_23_2_n_83), .Y
       (add_23_2_n_127));
  NOR2X2 add_23_2_g952(.A (add_23_2_n_1), .B (add_23_2_n_99), .Y
       (add_23_2_n_125));
  NOR2X2 add_23_2_g953(.A (add_23_2_n_78), .B (add_23_2_n_84), .Y
       (add_23_2_n_124));
  NOR2X2 add_23_2_g954(.A (add_23_2_n_82), .B (add_23_2_n_86), .Y
       (add_23_2_n_123));
  INVX1 add_23_2_g955(.A (add_23_2_n_115), .Y (add_23_2_n_116));
  INVX1 add_23_2_g956(.A (add_23_2_n_113), .Y (add_23_2_n_114));
  INVX1 add_23_2_g958(.A (add_23_2_n_110), .Y (add_23_2_n_111));
  INVX1 add_23_2_g966(.A (add_23_2_n_102), .Y (add_23_2_n_101));
  OR2XL add_23_2_g967(.A (add_23_2_n_21), .B (add_23_2_n_65), .Y
       (add_23_2_n_100));
  NOR2X1 add_23_2_g968(.A (add_23_2_n_55), .B (add_23_2_n_54), .Y
       (add_23_2_n_99));
  NAND2X4 add_23_2_g969(.A (add_23_2_n_335), .B (add_23_2_n_50), .Y
       (add_23_2_n_98));
  NOR2X1 add_23_2_g970(.A (add_23_2_n_1), .B (add_23_2_n_54), .Y
       (add_23_2_n_115));
  NOR2X1 add_23_2_g971(.A (add_23_2_n_78), .B (add_23_2_n_73), .Y
       (add_23_2_n_113));
  NAND2BX1 add_23_2_g972(.AN (add_23_2_n_287), .B (add_23_2_n_281), .Y
       (add_23_2_n_112));
  NAND2X1 add_23_2_g973(.A (add_23_2_n_62), .B (add_23_2_n_45), .Y
       (add_23_2_n_110));
  NOR2BX1 add_23_2_g974(.AN (add_23_2_n_77), .B (add_23_2_n_336), .Y
       (add_23_2_n_109));
  NAND2BX1 add_23_2_g975(.AN (add_23_2_n_308), .B (add_23_2_n_290), .Y
       (add_23_2_n_108));
  NAND2BX1 add_23_2_g976(.AN (add_23_2_n_66), .B (add_23_2_n_67), .Y
       (add_23_2_n_107));
  NOR2X2 add_23_2_g977(.A (add_23_2_n_44), .B (add_23_2_n_47), .Y
       (add_23_2_n_106));
  NAND2BX1 add_23_2_g978(.AN (add_23_2_n_43), .B (add_23_2_n_314), .Y
       (add_23_2_n_105));
  NOR2X2 add_23_2_g979(.A (add_23_2_n_69), .B (add_23_2_n_61), .Y
       (add_23_2_n_104));
  NOR2X2 add_23_2_g980(.A (add_23_2_n_54), .B (add_23_2_n_57), .Y
       (add_23_2_n_103));
  NOR2X2 add_23_2_g981(.A (add_23_2_n_73), .B (add_23_2_n_60), .Y
       (add_23_2_n_102));
  INVX1 add_23_2_g988(.A (add_23_2_n_90), .Y (add_23_2_n_91));
  INVX1 add_23_2_g989(.A (add_23_2_n_88), .Y (add_23_2_n_89));
  INVX1 add_23_2_g990(.A (add_23_2_n_86), .Y (add_23_2_n_85));
  NOR2X2 add_23_2_g992(.A (add_23_2_n_68), .B (add_23_2_n_73), .Y
       (add_23_2_n_84));
  NOR2X2 add_23_2_g993(.A (add_23_2_n_67), .B (add_23_2_n_72), .Y
       (add_23_2_n_83));
  NAND2X1 add_23_2_g994(.A (add_23_2_n_40), .B (add_23_2_n_48), .Y
       (add_23_2_n_82));
  NOR2BX1 add_23_2_g995(.AN (add_23_2_n_75), .B (add_23_2_n_293), .Y
       (add_23_2_n_97));
  NOR2X1 add_23_2_g996(.A (add_23_2_n_2), .B (add_23_2_n_306), .Y
       (add_23_2_n_96));
  NAND2BX1 add_23_2_g997(.AN (add_23_2_n_60), .B (add_23_2_n_330), .Y
       (add_23_2_n_95));
  NOR2X1 add_23_2_g998(.A (add_23_2_n_76), .B (add_23_2_n_284), .Y
       (add_23_2_n_94));
  NOR2X1 add_23_2_g999(.A (add_23_2_n_79), .B (add_23_2_n_59), .Y
       (add_23_2_n_81));
  NOR2BX1 add_23_2_g1000(.AN (add_23_2_n_58), .B (add_23_2_n_312), .Y
       (add_23_2_n_93));
  NAND2BX1 add_23_2_g1001(.AN (add_23_2_n_318), .B (add_23_2_n_74), .Y
       (add_23_2_n_92));
  NOR2X2 add_23_2_g1002(.A (add_23_2_n_63), .B (add_23_2_n_43), .Y
       (add_23_2_n_90));
  NOR2X2 add_23_2_g1003(.A (add_23_2_n_72), .B (add_23_2_n_66), .Y
       (add_23_2_n_88));
  OR2X1 add_23_2_g1004(.A (add_23_2_n_41), .B (add_23_2_n_52), .Y
       (add_23_2_n_87));
  NAND2X2 add_23_2_g1005(.A (add_23_2_n_64), .B (add_23_2_n_42), .Y
       (add_23_2_n_86));
  INVX1 add_23_2_g1007(.A (add_23_2_n_64), .Y (add_23_2_n_65));
  NAND2X1 add_23_2_g1008(.A (in2[29]), .B (in2[28]), .Y
       (add_23_2_n_80));
  NOR2X4 add_23_2_g1009(.A (add_23_2_n_39), .B (add_23_2_n_30), .Y
       (add_23_2_n_79));
  AND2X1 add_23_2_g1010(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_78));
  NAND2X1 add_23_2_g1011(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_77));
  AND2X1 add_23_2_g1012(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_76));
  NAND2X1 add_23_2_g1013(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_75));
  NAND2X1 add_23_2_g1014(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_74));
  NOR2X4 add_23_2_g1015(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_73));
  NOR2X4 add_23_2_g1016(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_72));
  NOR2X6 add_23_2_g1017(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_71));
  NOR2X2 add_23_2_g1018(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_69));
  NAND2X1 add_23_2_g1019(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_68));
  NAND2X2 add_23_2_g1020(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_67));
  NOR2X2 add_23_2_g1021(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_66));
  NOR2X2 add_23_2_g1022(.A (add_23_2_n_27), .B (add_23_2_n_20), .Y
       (add_23_2_n_64));
  NOR2X8 add_23_2_g1023(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_63));
  NAND2X1 add_23_2_g1024(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_62));
  NOR2X2 add_23_2_g1025(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_61));
  NOR2X2 add_23_2_g1026(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_60));
  INVX1 add_23_2_g1028(.A (add_23_2_n_48), .Y (add_23_2_n_49));
  INVX1 add_23_2_g1029(.A (add_23_2_n_44), .Y (add_23_2_n_45));
  NOR2X1 add_23_2_g1030(.A (add_23_2_n_35), .B (add_23_2_n_21), .Y
       (add_23_2_n_42));
  NAND2X1 add_23_2_g1031(.A (in2[27]), .B (in2[26]), .Y
       (add_23_2_n_41));
  NOR2X1 add_23_2_g1032(.A (add_23_2_n_23), .B (add_23_2_n_22), .Y
       (add_23_2_n_40));
  NOR2X8 add_23_2_g1034(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_59));
  NAND2X1 add_23_2_g1036(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_58));
  NOR2X2 add_23_2_g1037(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_57));
  NAND2X2 add_23_2_g1038(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_56));
  NAND2X4 add_23_2_g1039(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_55));
  NOR2X8 add_23_2_g1040(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_54));
  NAND2X2 add_23_2_g1041(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_53));
  NAND2X1 add_23_2_g1042(.A (in2[25]), .B (in2[24]), .Y
       (add_23_2_n_52));
  NAND2X2 add_23_2_g1043(.A (add_23_2_n_28), .B (add_23_2_n_29), .Y
       (add_23_2_n_50));
  NOR2X1 add_23_2_g1044(.A (add_23_2_n_25), .B (add_23_2_n_33), .Y
       (add_23_2_n_48));
  NOR2X6 add_23_2_g1045(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_47));
  NAND2X8 add_23_2_g1046(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_46));
  NOR2X6 add_23_2_g1047(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_44));
  NOR2X4 add_23_2_g1048(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_43));
  INVX2 add_23_2_g1051(.A (in2[1]), .Y (add_23_2_n_39));
  INVXL add_23_2_g1053(.A (in2[31]), .Y (add_23_2_n_38));
  INVXL add_23_2_g1054(.A (in2[25]), .Y (add_23_2_n_37));
  INVXL add_23_2_g1055(.A (in2[29]), .Y (add_23_2_n_36));
  INVX1 add_23_2_g1056(.A (in2[19]), .Y (add_23_2_n_35));
  INVXL add_23_2_g1057(.A (in2[28]), .Y (add_23_2_n_34));
  INVX1 add_23_2_g1058(.A (in2[20]), .Y (add_23_2_n_33));
  INVXL add_23_2_g1059(.A (in2[24]), .Y (add_23_2_n_32));
  INVXL add_23_2_g1060(.A (in2[26]), .Y (add_23_2_n_31));
  CLKINVX2 add_23_2_g1061(.A (in1[1]), .Y (add_23_2_n_30));
  CLKINVX2 add_23_2_g1062(.A (in1[2]), .Y (add_23_2_n_29));
  CLKINVX2 add_23_2_g1064(.A (in2[2]), .Y (add_23_2_n_28));
  CLKINVX2 add_23_2_g1065(.A (in2[17]), .Y (add_23_2_n_27));
  INVX1 add_23_2_g1066(.A (in2[30]), .Y (add_23_2_n_26));
  INVX1 add_23_2_g1068(.A (in2[21]), .Y (add_23_2_n_25));
  INVXL add_23_2_g1069(.A (in2[27]), .Y (add_23_2_n_24));
  INVX1 add_23_2_g1070(.A (in2[23]), .Y (add_23_2_n_23));
  INVX1 add_23_2_g1071(.A (in2[22]), .Y (add_23_2_n_22));
  INVX1 add_23_2_g1072(.A (in2[18]), .Y (add_23_2_n_21));
  INVX1 add_23_2_g1073(.A (in2[16]), .Y (add_23_2_n_20));
  NOR2BX1 add_23_2_g2(.AN (add_23_2_n_271), .B (add_23_2_n_176), .Y
       (add_23_2_n_19));
  XNOR2X1 add_23_2_g1074(.A (add_23_2_n_46), .B (add_23_2_n_81), .Y
       (out1[1]));
  NOR2BX1 add_23_2_g1075(.AN (add_23_2_n_326), .B (add_23_2_n_166), .Y
       (add_23_2_n_17));
  CLKXOR2X1 add_23_2_g1076(.A (add_23_2_n_112), .B (add_23_2_n_276), .Y
       (out1[2]));
  XNOR2X1 add_23_2_g1077(.A (add_23_2_n_109), .B (add_23_2_n_163), .Y
       (out1[3]));
  CLKXOR2X1 add_23_2_g1078(.A (add_23_2_n_108), .B (add_23_2_n_267), .Y
       (out1[8]));
  CLKXOR2X1 add_23_2_g1079(.A (add_23_2_n_107), .B (add_23_2_n_302), .Y
       (out1[4]));
  NOR2BX2 add_23_2_g1080(.AN (add_23_2_n_106), .B (add_23_2_n_125), .Y
       (add_23_2_n_12));
  CLKXOR2X1 add_23_2_g1081(.A (add_23_2_n_105), .B (add_23_2_n_17), .Y
       (out1[6]));
  NOR2BX1 add_23_2_g1082(.AN (add_23_2_n_104), .B (add_23_2_n_124), .Y
       (add_23_2_n_10));
  NOR2BX1 add_23_2_g1083(.AN (add_23_2_n_342), .B (add_23_2_n_170), .Y
       (add_23_2_n_9));
  XNOR2XL add_23_2_g1084(.A (add_23_2_n_97), .B (add_23_2_n_182), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g1085(.A (add_23_2_n_96), .B (add_23_2_n_169), .Y
       (out1[5]));
  XOR2XL add_23_2_g1086(.A (add_23_2_n_95), .B (add_23_2_n_19), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g1087(.A (add_23_2_n_94), .B (add_23_2_n_168), .Y
       (out1[7]));
  XNOR2XL add_23_2_g1088(.A (add_23_2_n_93), .B (add_23_2_n_180), .Y
       (out1[11]));
  XOR2XL add_23_2_g1089(.A (add_23_2_n_92), .B (add_23_2_n_181), .Y
       (out1[14]));
  AND2X1 add_23_2_g1090(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  AND2X6 add_23_2_g1091(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_1));
  CLKXOR2X1 add_23_2_g1092(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  BUFX2 add_23_2_fopt(.A (add_23_2_n_170), .Y (add_23_2_n_267));
  CLKINVX1 add_23_2_fopt1093(.A (add_23_2_n_274), .Y (add_23_2_n_271));
  INVXL add_23_2_fopt1094(.A (add_23_2_n_274), .Y (add_23_2_n_272));
  CLKINVX1 add_23_2_fopt1095(.A (add_23_2_n_274), .Y (add_23_2_n_273));
  CLKINVX1 add_23_2_fopt1096(.A (add_23_2_n_150), .Y (add_23_2_n_274));
  INVXL add_23_2_fopt1097(.A (add_23_2_n_278), .Y (add_23_2_n_276));
  INVXL add_23_2_fopt1098(.A (add_23_2_n_278), .Y (add_23_2_n_277));
  INVXL add_23_2_fopt1099(.A (add_23_2_n_149), .Y (add_23_2_n_278));
  INVXL add_23_2_fopt1100(.A (add_23_2_n_282), .Y (add_23_2_n_280));
  INVXL add_23_2_fopt1101(.A (add_23_2_n_282), .Y (add_23_2_n_281));
  INVXL add_23_2_fopt1102(.A (add_23_2_n_56), .Y (add_23_2_n_282));
  BUFX2 add_23_2_fopt1103(.A (add_23_2_n_63), .Y (add_23_2_n_284));
  BUFX2 add_23_2_fopt1104(.A (add_23_2_n_287), .Y (add_23_2_n_286));
  INVXL add_23_2_fopt1105(.A (add_23_2_n_50), .Y (add_23_2_n_287));
  INVXL add_23_2_fopt1106(.A (add_23_2_n_291), .Y (add_23_2_n_289));
  INVXL add_23_2_fopt1107(.A (add_23_2_n_291), .Y (add_23_2_n_290));
  INVXL add_23_2_fopt1108(.A (add_23_2_n_55), .Y (add_23_2_n_291));
  BUFX2 add_23_2_fopt1109(.A (add_23_2_n_69), .Y (add_23_2_n_293));
  INVXL add_23_2_fopt1110(.A (add_23_2_n_297), .Y (add_23_2_n_295));
  INVXL add_23_2_fopt1111(.A (add_23_2_n_297), .Y (add_23_2_n_296));
  INVXL add_23_2_fopt1112(.A (add_23_2_n_124), .Y (add_23_2_n_297));
  BUFX2 add_23_2_fopt1114(.A (add_23_2_n_303), .Y (add_23_2_n_302));
  BUFX3 add_23_2_fopt1115(.A (add_23_2_n_162), .Y (add_23_2_n_303));
  BUFX2 add_23_2_fopt1116(.A (add_23_2_n_72), .Y (add_23_2_n_306));
  INVXL add_23_2_fopt1117(.A (add_23_2_n_310), .Y (add_23_2_n_308));
  INVXL add_23_2_fopt1118(.A (add_23_2_n_310), .Y (add_23_2_n_309));
  INVXL add_23_2_fopt1119(.A (add_23_2_n_57), .Y (add_23_2_n_310));
  BUFX2 add_23_2_fopt1120(.A (add_23_2_n_47), .Y (add_23_2_n_312));
  INVXL add_23_2_fopt1121(.A (add_23_2_n_316), .Y (add_23_2_n_314));
  INVXL add_23_2_fopt1122(.A (add_23_2_n_316), .Y (add_23_2_n_315));
  INVXL add_23_2_fopt1123(.A (add_23_2_n_53), .Y (add_23_2_n_316));
  INVXL add_23_2_fopt1124(.A (add_23_2_n_320), .Y (add_23_2_n_318));
  INVXL add_23_2_fopt1125(.A (add_23_2_n_320), .Y (add_23_2_n_319));
  INVXL add_23_2_fopt1126(.A (add_23_2_n_61), .Y (add_23_2_n_320));
  BUFX2 add_23_2_fopt1127(.A (add_23_2_n_323), .Y (add_23_2_n_322));
  INVXL add_23_2_fopt1128(.A (add_23_2_n_125), .Y (add_23_2_n_323));
  INVXL add_23_2_fopt1129(.A (add_23_2_n_328), .Y (add_23_2_n_326));
  INVXL add_23_2_fopt1130(.A (add_23_2_n_328), .Y (add_23_2_n_327));
  INVXL add_23_2_fopt1131(.A (add_23_2_n_127), .Y (add_23_2_n_328));
  INVXL add_23_2_fopt1132(.A (add_23_2_n_332), .Y (add_23_2_n_330));
  INVXL add_23_2_fopt1133(.A (add_23_2_n_332), .Y (add_23_2_n_331));
  INVXL add_23_2_fopt1134(.A (add_23_2_n_68), .Y (add_23_2_n_332));
  CLKINVX3 add_23_2_fopt1135(.A (add_23_2_n_71), .Y (add_23_2_n_335));
  BUFX2 add_23_2_fopt1136(.A (add_23_2_n_71), .Y (add_23_2_n_336));
  INVXL add_23_2_fopt1138(.A (add_23_2_n_344), .Y (add_23_2_n_342));
  INVXL add_23_2_fopt1139(.A (add_23_2_n_344), .Y (add_23_2_n_343));
  INVXL add_23_2_fopt1140(.A (add_23_2_n_103), .Y (add_23_2_n_344));
endmodule


