`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 19:55:00 KST (Jan 27 2021 10:55:00 UTC)

module avg_pool_Add_32Ux32U_32U_4_0(in2, in1, out1);
  input [31:0] in2, in1;
  output [31:0] out1;
  wire [31:0] in2, in1;
  wire [31:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27,
       add_23_2_n_28, add_23_2_n_29, add_23_2_n_30, add_23_2_n_31;
  wire add_23_2_n_32, add_23_2_n_33, add_23_2_n_34, add_23_2_n_35,
       add_23_2_n_36, add_23_2_n_37, add_23_2_n_38, add_23_2_n_39;
  wire add_23_2_n_40, add_23_2_n_41, add_23_2_n_42, add_23_2_n_43,
       add_23_2_n_44, add_23_2_n_45, add_23_2_n_46, add_23_2_n_47;
  wire add_23_2_n_48, add_23_2_n_49, add_23_2_n_50, add_23_2_n_51,
       add_23_2_n_52, add_23_2_n_53, add_23_2_n_54, add_23_2_n_55;
  wire add_23_2_n_56, add_23_2_n_57, add_23_2_n_58, add_23_2_n_59,
       add_23_2_n_60, add_23_2_n_61, add_23_2_n_62, add_23_2_n_63;
  wire add_23_2_n_64, add_23_2_n_65, add_23_2_n_66, add_23_2_n_67,
       add_23_2_n_68, add_23_2_n_69, add_23_2_n_70, add_23_2_n_71;
  wire add_23_2_n_72, add_23_2_n_73, add_23_2_n_74, add_23_2_n_75,
       add_23_2_n_77, add_23_2_n_78, add_23_2_n_79, add_23_2_n_80;
  wire add_23_2_n_81, add_23_2_n_82, add_23_2_n_83, add_23_2_n_84,
       add_23_2_n_85, add_23_2_n_86, add_23_2_n_87, add_23_2_n_88;
  wire add_23_2_n_89, add_23_2_n_90, add_23_2_n_91, add_23_2_n_92,
       add_23_2_n_93, add_23_2_n_94, add_23_2_n_95, add_23_2_n_96;
  wire add_23_2_n_97, add_23_2_n_98, add_23_2_n_99, add_23_2_n_100,
       add_23_2_n_101, add_23_2_n_102, add_23_2_n_103, add_23_2_n_104;
  wire add_23_2_n_105, add_23_2_n_106, add_23_2_n_107, add_23_2_n_108,
       add_23_2_n_109, add_23_2_n_110, add_23_2_n_111, add_23_2_n_112;
  wire add_23_2_n_113, add_23_2_n_114, add_23_2_n_115, add_23_2_n_116,
       add_23_2_n_117, add_23_2_n_118, add_23_2_n_119, add_23_2_n_121;
  wire add_23_2_n_122, add_23_2_n_123, add_23_2_n_124, add_23_2_n_125,
       add_23_2_n_126, add_23_2_n_127, add_23_2_n_128, add_23_2_n_129;
  wire add_23_2_n_131, add_23_2_n_132, add_23_2_n_133, add_23_2_n_134,
       add_23_2_n_135, add_23_2_n_137, add_23_2_n_138, add_23_2_n_140;
  wire add_23_2_n_141, add_23_2_n_142, add_23_2_n_145, add_23_2_n_146,
       add_23_2_n_147, add_23_2_n_148, add_23_2_n_151, add_23_2_n_152;
  wire add_23_2_n_153, add_23_2_n_154, add_23_2_n_155, add_23_2_n_156,
       add_23_2_n_161, add_23_2_n_162, add_23_2_n_163, add_23_2_n_164;
  wire add_23_2_n_165, add_23_2_n_166, add_23_2_n_167, add_23_2_n_168,
       add_23_2_n_169, add_23_2_n_177, add_23_2_n_178, add_23_2_n_179;
  wire add_23_2_n_180, add_23_2_n_181, add_23_2_n_182, add_23_2_n_183,
       add_23_2_n_190, add_23_2_n_191, add_23_2_n_193, add_23_2_n_194;
  wire add_23_2_n_198, add_23_2_n_199;
  XNOR2X1 add_23_2_g1154(.A (add_23_2_n_60), .B (add_23_2_n_199), .Y
       (out1[31]));
  ADDFX1 add_23_2_g1155(.A (add_23_2_n_198), .B (in1[30]), .CI
       (in2[30]), .CO (add_23_2_n_199), .S (out1[30]));
  OAI21X1 add_23_2_g1156(.A0 (add_23_2_n_54), .A1 (add_23_2_n_194), .B0
       (add_23_2_n_21), .Y (add_23_2_n_198));
  XNOR2X1 add_23_2_g1157(.A (add_23_2_n_72), .B (add_23_2_n_193), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g1158(.A (add_23_2_n_68), .B (add_23_2_n_191), .Y
       (out1[27]));
  XNOR2X1 add_23_2_g1159(.A (add_23_2_n_62), .B (add_23_2_n_190), .Y
       (out1[23]));
  OA21X1 add_23_2_g1160(.A0 (add_23_2_n_17), .A1 (add_23_2_n_183), .B0
       (add_23_2_n_38), .Y (add_23_2_n_194));
  OAI21X1 add_23_2_g1161(.A0 (add_23_2_n_17), .A1 (add_23_2_n_183), .B0
       (add_23_2_n_38), .Y (add_23_2_n_193));
  XNOR2X1 add_23_2_g1162(.A (add_23_2_n_70), .B (add_23_2_n_183), .Y
       (out1[28]));
  OAI21X1 add_23_2_g1163(.A0 (add_23_2_n_35), .A1 (add_23_2_n_181), .B0
       (add_23_2_n_45), .Y (add_23_2_n_191));
  OAI21X1 add_23_2_g1164(.A0 (add_23_2_n_50), .A1 (add_23_2_n_182), .B0
       (add_23_2_n_8), .Y (add_23_2_n_190));
  XNOR2X1 add_23_2_g1165(.A (add_23_2_n_89), .B (add_23_2_n_182), .Y
       (out1[22]));
  XNOR2X1 add_23_2_g1166(.A (add_23_2_n_90), .B (add_23_2_n_180), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g1167(.A (add_23_2_n_87), .B (add_23_2_n_179), .Y
       (out1[19]));
  XNOR2X1 add_23_2_g1168(.A (add_23_2_n_96), .B (add_23_2_n_178), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g1169(.A (add_23_2_n_66), .B (add_23_2_n_181), .Y
       (out1[26]));
  XNOR2X1 add_23_2_g1170(.A (add_23_2_n_65), .B (add_23_2_n_177), .Y
       (out1[25]));
  AOI31X1 add_23_2_g1171(.A0 (add_23_2_n_81), .A1 (add_23_2_n_98), .A2
       (add_23_2_n_162), .B0 (add_23_2_n_122), .Y (add_23_2_n_183));
  OAI21X1 add_23_2_g1172(.A0 (add_23_2_n_3), .A1 (add_23_2_n_163), .B0
       (add_23_2_n_47), .Y (add_23_2_n_180));
  OAI21X1 add_23_2_g1173(.A0 (add_23_2_n_37), .A1 (add_23_2_n_168), .B0
       (add_23_2_n_39), .Y (add_23_2_n_179));
  OAI21X1 add_23_2_g1174(.A0 (add_23_2_n_6), .A1 (add_23_2_n_169), .B0
       (add_23_2_n_9), .Y (add_23_2_n_178));
  OAI21X1 add_23_2_g1175(.A0 (add_23_2_n_12), .A1 (add_23_2_n_161), .B0
       (add_23_2_n_48), .Y (add_23_2_n_177));
  AOI21X1 add_23_2_g1176(.A0 (add_23_2_n_100), .A1 (add_23_2_n_164),
       .B0 (add_23_2_n_111), .Y (add_23_2_n_182));
  AOI21X1 add_23_2_g1177(.A0 (add_23_2_n_81), .A1 (add_23_2_n_162), .B0
       (add_23_2_n_107), .Y (add_23_2_n_181));
  MXI2XL add_23_2_g1178(.A (add_23_2_n_161), .B (add_23_2_n_162), .S0
       (add_23_2_n_63), .Y (out1[24]));
  XNOR2X1 add_23_2_g1179(.A (add_23_2_n_86), .B (add_23_2_n_168), .Y
       (out1[18]));
  XNOR2X1 add_23_2_g1180(.A (add_23_2_n_82), .B (add_23_2_n_167), .Y
       (out1[17]));
  XNOR2X1 add_23_2_g1181(.A (add_23_2_n_85), .B (add_23_2_n_169), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g1182(.A (add_23_2_n_84), .B (add_23_2_n_166), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g1183(.A (add_23_2_n_88), .B (add_23_2_n_165), .Y
       (out1[11]));
  MXI2XL add_23_2_g1184(.A (add_23_2_n_163), .B (add_23_2_n_164), .S0
       (add_23_2_n_73), .Y (out1[20]));
  OAI21X1 add_23_2_g1185(.A0 (add_23_2_n_0), .A1 (add_23_2_n_152), .B0
       (add_23_2_n_18), .Y (add_23_2_n_167));
  OAI21X1 add_23_2_g1186(.A0 (add_23_2_n_40), .A1 (add_23_2_n_156), .B0
       (add_23_2_n_1), .Y (add_23_2_n_166));
  OAI21X1 add_23_2_g1187(.A0 (add_23_2_n_36), .A1 (add_23_2_n_154), .B0
       (add_23_2_n_46), .Y (add_23_2_n_165));
  AOI21X1 add_23_2_g1188(.A0 (add_23_2_n_103), .A1 (add_23_2_n_155),
       .B0 (add_23_2_n_106), .Y (add_23_2_n_169));
  AOI21X1 add_23_2_g1189(.A0 (add_23_2_n_80), .A1 (add_23_2_n_151), .B0
       (add_23_2_n_108), .Y (add_23_2_n_168));
  INVX1 add_23_2_g1190(.A (add_23_2_n_164), .Y (add_23_2_n_163));
  INVX1 add_23_2_g1191(.A (add_23_2_n_162), .Y (add_23_2_n_161));
  MXI2XL add_23_2_g1192(.A (add_23_2_n_155), .B (add_23_2_n_156), .S0
       (add_23_2_n_93), .Y (out1[12]));
  MXI2XL add_23_2_g1193(.A (add_23_2_n_151), .B (add_23_2_n_152), .S0
       (add_23_2_n_83), .Y (out1[16]));
  XNOR2X1 add_23_2_g1194(.A (add_23_2_n_59), .B (add_23_2_n_153), .Y
       (out1[9]));
  XNOR2X1 add_23_2_g1195(.A (add_23_2_n_92), .B (add_23_2_n_154), .Y
       (out1[10]));
  OAI21X1 add_23_2_g1196(.A0 (add_23_2_n_115), .A1 (add_23_2_n_152),
       .B0 (add_23_2_n_123), .Y (add_23_2_n_164));
  OAI31X1 add_23_2_g1197(.A0 (add_23_2_n_152), .A1 (add_23_2_n_112),
       .A2 (add_23_2_n_115), .B0 (add_23_2_n_132), .Y (add_23_2_n_162));
  INVX1 add_23_2_g1198(.A (add_23_2_n_156), .Y (add_23_2_n_155));
  AOI21X1 add_23_2_g1199(.A0 (add_23_2_n_114), .A1 (add_23_2_n_145),
       .B0 (add_23_2_n_124), .Y (add_23_2_n_156));
  AOI21X1 add_23_2_g1200(.A0 (add_23_2_n_97), .A1 (add_23_2_n_145), .B0
       (add_23_2_n_110), .Y (add_23_2_n_154));
  OAI21X1 add_23_2_g1201(.A0 (add_23_2_n_49), .A1 (add_23_2_n_146), .B0
       (add_23_2_n_43), .Y (add_23_2_n_153));
  INVX1 add_23_2_g1202(.A (add_23_2_n_152), .Y (add_23_2_n_151));
  NOR2X1 add_23_2_g1203(.A (add_23_2_n_131), .B (add_23_2_n_148), .Y
       (add_23_2_n_152));
  XNOR2X1 add_23_2_g1204(.A (add_23_2_n_94), .B (add_23_2_n_145), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1205(.A (add_23_2_n_95), .B (add_23_2_n_147), .Y
       (out1[7]));
  NOR2X1 add_23_2_g1206(.A (add_23_2_n_117), .B (add_23_2_n_146), .Y
       (add_23_2_n_148));
  OAI21X1 add_23_2_g1207(.A0 (add_23_2_n_32), .A1 (add_23_2_n_142), .B0
       (add_23_2_n_14), .Y (add_23_2_n_147));
  INVX1 add_23_2_g1208(.A (add_23_2_n_146), .Y (add_23_2_n_145));
  NOR3BX1 add_23_2_g1209(.AN (add_23_2_n_57), .B (add_23_2_n_127), .C
       (add_23_2_n_140), .Y (add_23_2_n_146));
  XNOR2X1 add_23_2_g1210(.A (add_23_2_n_64), .B (add_23_2_n_142), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1211(.A (add_23_2_n_61), .B (add_23_2_n_141), .Y
       (out1[5]));
  AOI21X1 add_23_2_g1212(.A0 (add_23_2_n_99), .A1 (add_23_2_n_138), .B0
       (add_23_2_n_109), .Y (add_23_2_n_142));
  OAI21X1 add_23_2_g1213(.A0 (add_23_2_n_4), .A1 (add_23_2_n_137), .B0
       (add_23_2_n_34), .Y (add_23_2_n_141));
  NOR3BX1 add_23_2_g1214(.AN (add_23_2_n_99), .B (add_23_2_n_102), .C
       (add_23_2_n_137), .Y (add_23_2_n_140));
  XNOR2X1 add_23_2_g1215(.A (add_23_2_n_67), .B (add_23_2_n_138), .Y
       (out1[4]));
  INVX2 add_23_2_g1216(.A (add_23_2_n_138), .Y (add_23_2_n_137));
  NAND2X1 add_23_2_g1217(.A (add_23_2_n_25), .B (add_23_2_n_135), .Y
       (add_23_2_n_138));
  XNOR2X1 add_23_2_g1218(.A (add_23_2_n_69), .B (add_23_2_n_134), .Y
       (out1[3]));
  NAND2X2 add_23_2_g1219(.A (add_23_2_n_27), .B (add_23_2_n_133), .Y
       (add_23_2_n_135));
  OAI2BB1X1 add_23_2_g1220(.A0N (add_23_2_n_16), .A1N (add_23_2_n_121),
       .B0 (add_23_2_n_7), .Y (add_23_2_n_134));
  NAND2X1 add_23_2_g1221(.A (add_23_2_n_7), .B (add_23_2_n_129), .Y
       (add_23_2_n_133));
  AOI211XL add_23_2_g1222(.A0 (add_23_2_n_77), .A1 (add_23_2_n_111),
       .B0 (add_23_2_n_128), .C0 (add_23_2_n_75), .Y (add_23_2_n_132));
  OAI211X1 add_23_2_g1223(.A0 (add_23_2_n_113), .A1 (add_23_2_n_125),
       .B0 (add_23_2_n_126), .C0 (add_23_2_n_28), .Y (add_23_2_n_131));
  XNOR2X1 add_23_2_g1224(.A (add_23_2_n_71), .B (add_23_2_n_121), .Y
       (out1[2]));
  NAND2X1 add_23_2_g1225(.A (add_23_2_n_16), .B (add_23_2_n_121), .Y
       (add_23_2_n_129));
  OAI21X1 add_23_2_g1226(.A0 (add_23_2_n_112), .A1 (add_23_2_n_123),
       .B0 (add_23_2_n_29), .Y (add_23_2_n_128));
  OAI21X1 add_23_2_g1227(.A0 (add_23_2_n_14), .A1 (add_23_2_n_13), .B0
       (add_23_2_n_116), .Y (add_23_2_n_127));
  AOI21X1 add_23_2_g1228(.A0 (add_23_2_n_78), .A1 (add_23_2_n_106), .B0
       (add_23_2_n_74), .Y (add_23_2_n_126));
  INVX1 add_23_2_g1229(.A (add_23_2_n_124), .Y (add_23_2_n_125));
  OAI211X1 add_23_2_g1230(.A0 (add_23_2_n_46), .A1 (add_23_2_n_33), .B0
       (add_23_2_n_119), .C0 (add_23_2_n_53), .Y (add_23_2_n_124));
  AOI21X1 add_23_2_g1231(.A0 (add_23_2_n_79), .A1 (add_23_2_n_108), .B0
       (add_23_2_n_105), .Y (add_23_2_n_123));
  OAI211X1 add_23_2_g1232(.A0 (add_23_2_n_45), .A1 (add_23_2_n_42), .B0
       (add_23_2_n_118), .C0 (add_23_2_n_24), .Y (add_23_2_n_122));
  OAI21X2 add_23_2_g1233(.A0 (add_23_2_n_2), .A1 (add_23_2_n_55), .B0
       (add_23_2_n_26), .Y (add_23_2_n_121));
  XNOR2X1 add_23_2_g1234(.A (add_23_2_n_2), .B (add_23_2_n_91), .Y
       (out1[1]));
  NAND2XL add_23_2_g1235(.A (add_23_2_n_104), .B (add_23_2_n_110), .Y
       (add_23_2_n_119));
  NAND2XL add_23_2_g1236(.A (add_23_2_n_98), .B (add_23_2_n_107), .Y
       (add_23_2_n_118));
  NAND2BX1 add_23_2_g1237(.AN (add_23_2_n_113), .B (add_23_2_n_114), .Y
       (add_23_2_n_117));
  NAND2XL add_23_2_g1238(.A (add_23_2_n_101), .B (add_23_2_n_109), .Y
       (add_23_2_n_116));
  NAND2X1 add_23_2_g1239(.A (add_23_2_n_79), .B (add_23_2_n_80), .Y
       (add_23_2_n_115));
  AND2XL add_23_2_g1240(.A (add_23_2_n_104), .B (add_23_2_n_97), .Y
       (add_23_2_n_114));
  NAND2X1 add_23_2_g1241(.A (add_23_2_n_78), .B (add_23_2_n_103), .Y
       (add_23_2_n_113));
  NAND2X1 add_23_2_g1242(.A (add_23_2_n_77), .B (add_23_2_n_100), .Y
       (add_23_2_n_112));
  OAI21X1 add_23_2_g1243(.A0 (add_23_2_n_47), .A1 (add_23_2_n_31), .B0
       (add_23_2_n_51), .Y (add_23_2_n_111));
  OAI21X1 add_23_2_g1244(.A0 (add_23_2_n_39), .A1 (add_23_2_n_10), .B0
       (add_23_2_n_20), .Y (add_23_2_n_105));
  OAI21X1 add_23_2_g1245(.A0 (add_23_2_n_43), .A1 (add_23_2_n_41), .B0
       (add_23_2_n_23), .Y (add_23_2_n_110));
  OAI21X1 add_23_2_g1246(.A0 (add_23_2_n_34), .A1 (add_23_2_n_11), .B0
       (add_23_2_n_52), .Y (add_23_2_n_109));
  OAI21X1 add_23_2_g1247(.A0 (add_23_2_n_18), .A1 (add_23_2_n_15), .B0
       (add_23_2_n_58), .Y (add_23_2_n_108));
  OAI21X1 add_23_2_g1248(.A0 (add_23_2_n_48), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_56), .Y (add_23_2_n_107));
  OAI21X1 add_23_2_g1249(.A0 (add_23_2_n_1), .A1 (add_23_2_n_44), .B0
       (add_23_2_n_22), .Y (add_23_2_n_106));
  INVX1 add_23_2_g1250(.A (add_23_2_n_101), .Y (add_23_2_n_102));
  NOR2X1 add_23_2_g1251(.A (add_23_2_n_33), .B (add_23_2_n_36), .Y
       (add_23_2_n_104));
  NAND2BX1 add_23_2_g1252(.AN (add_23_2_n_30), .B (add_23_2_n_28), .Y
       (add_23_2_n_96));
  NAND2BX1 add_23_2_g1253(.AN (add_23_2_n_13), .B (add_23_2_n_57), .Y
       (add_23_2_n_95));
  NOR2X1 add_23_2_g1254(.A (add_23_2_n_44), .B (add_23_2_n_40), .Y
       (add_23_2_n_103));
  NAND2BX1 add_23_2_g1255(.AN (add_23_2_n_49), .B (add_23_2_n_43), .Y
       (add_23_2_n_94));
  NOR2X1 add_23_2_g1256(.A (add_23_2_n_13), .B (add_23_2_n_32), .Y
       (add_23_2_n_101));
  NAND2BX1 add_23_2_g1257(.AN (add_23_2_n_40), .B (add_23_2_n_1), .Y
       (add_23_2_n_93));
  NOR2BX1 add_23_2_g1258(.AN (add_23_2_n_46), .B (add_23_2_n_36), .Y
       (add_23_2_n_92));
  NOR2BX1 add_23_2_g1259(.AN (add_23_2_n_26), .B (add_23_2_n_55), .Y
       (add_23_2_n_91));
  NOR2X1 add_23_2_g1260(.A (add_23_2_n_31), .B (add_23_2_n_3), .Y
       (add_23_2_n_100));
  NAND2BX1 add_23_2_g1261(.AN (add_23_2_n_31), .B (add_23_2_n_51), .Y
       (add_23_2_n_90));
  NOR2BX1 add_23_2_g1262(.AN (add_23_2_n_8), .B (add_23_2_n_50), .Y
       (add_23_2_n_89));
  NOR2X1 add_23_2_g1263(.A (add_23_2_n_11), .B (add_23_2_n_4), .Y
       (add_23_2_n_99));
  NAND2BX1 add_23_2_g1264(.AN (add_23_2_n_33), .B (add_23_2_n_53), .Y
       (add_23_2_n_88));
  NAND2BX1 add_23_2_g1265(.AN (add_23_2_n_10), .B (add_23_2_n_20), .Y
       (add_23_2_n_87));
  NOR2BX1 add_23_2_g1266(.AN (add_23_2_n_39), .B (add_23_2_n_37), .Y
       (add_23_2_n_86));
  NOR2X1 add_23_2_g1267(.A (add_23_2_n_42), .B (add_23_2_n_35), .Y
       (add_23_2_n_98));
  NOR2BX1 add_23_2_g1268(.AN (add_23_2_n_9), .B (add_23_2_n_6), .Y
       (add_23_2_n_85));
  NAND2BX1 add_23_2_g1269(.AN (add_23_2_n_44), .B (add_23_2_n_22), .Y
       (add_23_2_n_84));
  NOR2X1 add_23_2_g1270(.A (add_23_2_n_41), .B (add_23_2_n_49), .Y
       (add_23_2_n_97));
  NAND2BX1 add_23_2_g1271(.AN (add_23_2_n_0), .B (add_23_2_n_18), .Y
       (add_23_2_n_83));
  NAND2BX1 add_23_2_g1272(.AN (add_23_2_n_15), .B (add_23_2_n_58), .Y
       (add_23_2_n_82));
  XOR2XL add_23_2_g1273(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NOR2X1 add_23_2_g1274(.A (add_23_2_n_8), .B (add_23_2_n_5), .Y
       (add_23_2_n_75));
  NOR2X1 add_23_2_g1275(.A (add_23_2_n_9), .B (add_23_2_n_30), .Y
       (add_23_2_n_74));
  NOR2X1 add_23_2_g1276(.A (add_23_2_n_19), .B (add_23_2_n_12), .Y
       (add_23_2_n_81));
  NOR2X1 add_23_2_g1277(.A (add_23_2_n_15), .B (add_23_2_n_0), .Y
       (add_23_2_n_80));
  NOR2BX1 add_23_2_g1278(.AN (add_23_2_n_47), .B (add_23_2_n_3), .Y
       (add_23_2_n_73));
  NAND2BX1 add_23_2_g1279(.AN (add_23_2_n_54), .B (add_23_2_n_21), .Y
       (add_23_2_n_72));
  NAND2X1 add_23_2_g1280(.A (add_23_2_n_7), .B (add_23_2_n_16), .Y
       (add_23_2_n_71));
  NOR2X1 add_23_2_g1281(.A (add_23_2_n_10), .B (add_23_2_n_37), .Y
       (add_23_2_n_79));
  NOR2BX1 add_23_2_g1282(.AN (add_23_2_n_38), .B (add_23_2_n_17), .Y
       (add_23_2_n_70));
  NAND2X1 add_23_2_g1283(.A (add_23_2_n_25), .B (add_23_2_n_27), .Y
       (add_23_2_n_69));
  NAND2BX1 add_23_2_g1284(.AN (add_23_2_n_42), .B (add_23_2_n_24), .Y
       (add_23_2_n_68));
  NAND2BX1 add_23_2_g1285(.AN (add_23_2_n_4), .B (add_23_2_n_34), .Y
       (add_23_2_n_67));
  NOR2X1 add_23_2_g1286(.A (add_23_2_n_30), .B (add_23_2_n_6), .Y
       (add_23_2_n_78));
  NOR2BX1 add_23_2_g1287(.AN (add_23_2_n_45), .B (add_23_2_n_35), .Y
       (add_23_2_n_66));
  NAND2BX1 add_23_2_g1288(.AN (add_23_2_n_19), .B (add_23_2_n_56), .Y
       (add_23_2_n_65));
  NOR2BX1 add_23_2_g1289(.AN (add_23_2_n_14), .B (add_23_2_n_32), .Y
       (add_23_2_n_64));
  NOR2BX1 add_23_2_g1290(.AN (add_23_2_n_48), .B (add_23_2_n_12), .Y
       (add_23_2_n_63));
  NAND2BX1 add_23_2_g1291(.AN (add_23_2_n_5), .B (add_23_2_n_29), .Y
       (add_23_2_n_62));
  NAND2BX1 add_23_2_g1292(.AN (add_23_2_n_11), .B (add_23_2_n_52), .Y
       (add_23_2_n_61));
  XNOR2X1 add_23_2_g1293(.A (in2[31]), .B (in1[31]), .Y
       (add_23_2_n_60));
  NAND2BX1 add_23_2_g1294(.AN (add_23_2_n_41), .B (add_23_2_n_23), .Y
       (add_23_2_n_59));
  NOR2X1 add_23_2_g1295(.A (add_23_2_n_5), .B (add_23_2_n_50), .Y
       (add_23_2_n_77));
  NAND2X1 add_23_2_g1296(.A (in2[17]), .B (in1[17]), .Y
       (add_23_2_n_58));
  NAND2X1 add_23_2_g1297(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_57));
  NAND2X1 add_23_2_g1298(.A (in2[25]), .B (in1[25]), .Y
       (add_23_2_n_56));
  NOR2X2 add_23_2_g1299(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_55));
  NOR2X1 add_23_2_g1300(.A (in2[29]), .B (in1[29]), .Y (add_23_2_n_54));
  NAND2X1 add_23_2_g1301(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_53));
  NAND2X1 add_23_2_g1302(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_52));
  NAND2X1 add_23_2_g1303(.A (in2[21]), .B (in1[21]), .Y
       (add_23_2_n_51));
  NOR2X1 add_23_2_g1304(.A (in2[22]), .B (in1[22]), .Y (add_23_2_n_50));
  NOR2X1 add_23_2_g1305(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_49));
  NAND2X1 add_23_2_g1306(.A (in2[24]), .B (in1[24]), .Y
       (add_23_2_n_48));
  NAND2X1 add_23_2_g1307(.A (in2[20]), .B (in1[20]), .Y
       (add_23_2_n_47));
  NAND2X1 add_23_2_g1308(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_46));
  NAND2X1 add_23_2_g1309(.A (in2[26]), .B (in1[26]), .Y
       (add_23_2_n_45));
  NOR2X1 add_23_2_g1310(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_44));
  NAND2X1 add_23_2_g1311(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_43));
  NOR2X1 add_23_2_g1312(.A (in2[27]), .B (in1[27]), .Y (add_23_2_n_42));
  NOR2X1 add_23_2_g1313(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_41));
  NOR2X1 add_23_2_g1314(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_40));
  NAND2X1 add_23_2_g1315(.A (in2[18]), .B (in1[18]), .Y
       (add_23_2_n_39));
  NAND2X1 add_23_2_g1316(.A (in2[28]), .B (in1[28]), .Y
       (add_23_2_n_38));
  NOR2X1 add_23_2_g1317(.A (in2[18]), .B (in1[18]), .Y (add_23_2_n_37));
  NOR2X1 add_23_2_g1318(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_36));
  NOR2X1 add_23_2_g1319(.A (in2[26]), .B (in1[26]), .Y (add_23_2_n_35));
  NAND2X1 add_23_2_g1320(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_34));
  NOR2X1 add_23_2_g1321(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_33));
  NOR2X1 add_23_2_g1322(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_32));
  NOR2X1 add_23_2_g1323(.A (in2[21]), .B (in1[21]), .Y (add_23_2_n_31));
  NOR2X1 add_23_2_g1324(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_30));
  NAND2X1 add_23_2_g1325(.A (in2[23]), .B (in1[23]), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g1326(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_28));
  OR2X1 add_23_2_g1327(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_27));
  NAND2X1 add_23_2_g1328(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_26));
  NAND2X1 add_23_2_g1329(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_25));
  NAND2X1 add_23_2_g1330(.A (in2[27]), .B (in1[27]), .Y
       (add_23_2_n_24));
  NAND2X1 add_23_2_g1331(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_23));
  NAND2X1 add_23_2_g1332(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_22));
  NAND2X1 add_23_2_g1333(.A (in2[29]), .B (in1[29]), .Y
       (add_23_2_n_21));
  NAND2X1 add_23_2_g1334(.A (in2[19]), .B (in1[19]), .Y
       (add_23_2_n_20));
  NOR2X1 add_23_2_g1335(.A (in2[25]), .B (in1[25]), .Y (add_23_2_n_19));
  NAND2X1 add_23_2_g1336(.A (in2[16]), .B (in1[16]), .Y
       (add_23_2_n_18));
  NOR2X1 add_23_2_g1337(.A (in2[28]), .B (in1[28]), .Y (add_23_2_n_17));
  OR2X1 add_23_2_g1338(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_16));
  NOR2X1 add_23_2_g1339(.A (in2[17]), .B (in1[17]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g1340(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g1341(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_13));
  NOR2X1 add_23_2_g1342(.A (in2[24]), .B (in1[24]), .Y (add_23_2_n_12));
  NOR2X1 add_23_2_g1343(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g1344(.A (in2[19]), .B (in1[19]), .Y (add_23_2_n_10));
  NAND2X1 add_23_2_g1345(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g1346(.A (in2[22]), .B (in1[22]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g1347(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1348(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1349(.A (in2[23]), .B (in1[23]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1350(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g1351(.A (in2[20]), .B (in1[20]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g1352(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g1353(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_1));
  NOR2X1 add_23_2_g1354(.A (in2[16]), .B (in1[16]), .Y (add_23_2_n_0));
endmodule

