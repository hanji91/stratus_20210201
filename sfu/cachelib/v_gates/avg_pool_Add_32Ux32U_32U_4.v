`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 21 2020 13:30:38 KST (Dec 21 2020 04:30:38 UTC)

module avg_pool_Add_32Ux32U_32U_4(in2, in1, out1);
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
       add_23_2_n_76, add_23_2_n_77, add_23_2_n_78, add_23_2_n_79;
  wire add_23_2_n_80, add_23_2_n_81, add_23_2_n_82, add_23_2_n_83,
       add_23_2_n_84, add_23_2_n_85, add_23_2_n_86, add_23_2_n_87;
  wire add_23_2_n_88, add_23_2_n_89, add_23_2_n_90, add_23_2_n_91,
       add_23_2_n_92, add_23_2_n_93, add_23_2_n_94, add_23_2_n_95;
  wire add_23_2_n_96, add_23_2_n_97, add_23_2_n_98, add_23_2_n_99,
       add_23_2_n_100, add_23_2_n_101, add_23_2_n_102, add_23_2_n_103;
  wire add_23_2_n_104, add_23_2_n_105, add_23_2_n_106, add_23_2_n_107,
       add_23_2_n_109, add_23_2_n_110, add_23_2_n_111, add_23_2_n_112;
  wire add_23_2_n_113, add_23_2_n_114, add_23_2_n_115, add_23_2_n_116,
       add_23_2_n_117, add_23_2_n_118, add_23_2_n_119, add_23_2_n_120;
  wire add_23_2_n_122, add_23_2_n_123, add_23_2_n_124, add_23_2_n_126,
       add_23_2_n_127, add_23_2_n_128, add_23_2_n_129, add_23_2_n_131;
  wire add_23_2_n_132, add_23_2_n_134, add_23_2_n_135, add_23_2_n_136,
       add_23_2_n_139, add_23_2_n_140, add_23_2_n_141, add_23_2_n_144;
  wire add_23_2_n_145, add_23_2_n_146, add_23_2_n_147, add_23_2_n_148,
       add_23_2_n_152, add_23_2_n_153, add_23_2_n_154, add_23_2_n_156;
  wire add_23_2_n_157, add_23_2_n_158, add_23_2_n_162, add_23_2_n_163,
       add_23_2_n_164, add_23_2_n_168, add_23_2_n_169, add_23_2_n_170;
  wire add_23_2_n_173, add_23_2_n_174, add_23_2_n_175, add_23_2_n_179,
       add_23_2_n_180, add_23_2_n_183, add_23_2_n_188, add_23_2_n_189;
  XNOR2X1 add_23_2_g1138(.A (add_23_2_n_58), .B (add_23_2_n_189), .Y
       (out1[31]));
  ADDFX1 add_23_2_g1139(.A (add_23_2_n_188), .B (in1[30]), .CI
       (in2[30]), .CO (add_23_2_n_189), .S (out1[30]));
  OAI2BB1X1 add_23_2_g1140(.A0N (add_23_2_n_53), .A1N (add_23_2_n_0),
       .B0 (add_23_2_n_21), .Y (add_23_2_n_188));
  XNOR2X1 add_23_2_g1141(.A (add_23_2_n_70), .B (add_23_2_n_0), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g1142(.A (add_23_2_n_67), .B (add_23_2_n_183), .Y
       (out1[27]));
  XNOR2X1 add_23_2_g1145(.A (add_23_2_n_66), .B (add_23_2_n_179), .Y
       (out1[28]));
  XNOR2X1 add_23_2_g1146(.A (add_23_2_n_59), .B (add_23_2_n_180), .Y
       (out1[23]));
  OAI21X1 add_23_2_g1147(.A0 (add_23_2_n_12), .A1 (add_23_2_n_174), .B0
       (add_23_2_n_7), .Y (add_23_2_n_183));
  XNOR2X1 add_23_2_g1148(.A (add_23_2_n_62), .B (add_23_2_n_174), .Y
       (out1[26]));
  XNOR2X1 add_23_2_g1149(.A (add_23_2_n_61), .B (add_23_2_n_173), .Y
       (out1[25]));
  OAI21X1 add_23_2_g1150(.A0 (add_23_2_n_41), .A1 (add_23_2_n_168), .B0
       (add_23_2_n_46), .Y (add_23_2_n_180));
  OAI211X1 add_23_2_g1151(.A0 (add_23_2_n_7), .A1 (add_23_2_n_47), .B0
       (add_23_2_n_175), .C0 (add_23_2_n_117), .Y (add_23_2_n_179));
  XNOR2X1 add_23_2_g1152(.A (add_23_2_n_94), .B (add_23_2_n_168), .Y
       (out1[22]));
  XNOR2X1 add_23_2_g1153(.A (add_23_2_n_93), .B (add_23_2_n_170), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g1154(.A (add_23_2_n_91), .B (add_23_2_n_169), .Y
       (out1[19]));
  AOI31X1 add_23_2_g1155(.A0 (add_23_2_n_163), .A1 (add_23_2_n_96), .A2
       (add_23_2_n_79), .B0 (add_23_2_n_25), .Y (add_23_2_n_175));
  AOI21X1 add_23_2_g1156(.A0 (add_23_2_n_79), .A1 (add_23_2_n_163), .B0
       (add_23_2_n_103), .Y (add_23_2_n_174));
  OAI21X1 add_23_2_g1157(.A0 (add_23_2_n_15), .A1 (add_23_2_n_162), .B0
       (add_23_2_n_48), .Y (add_23_2_n_173));
  XNOR2X1 add_23_2_g1158(.A (add_23_2_n_82), .B (add_23_2_n_164), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g1159(.A (add_23_2_n_60), .B (add_23_2_n_163), .Y
       (out1[24]));
  OAI21X1 add_23_2_g1160(.A0 (add_23_2_n_5), .A1 (add_23_2_n_156), .B0
       (add_23_2_n_38), .Y (add_23_2_n_170));
  OAI21X1 add_23_2_g1161(.A0 (add_23_2_n_40), .A1 (add_23_2_n_158), .B0
       (add_23_2_n_8), .Y (add_23_2_n_169));
  AOI2BB1X1 add_23_2_g1162(.A0N (add_23_2_n_98), .A1N (add_23_2_n_156),
       .B0 (add_23_2_n_109), .Y (add_23_2_n_168));
  XNOR2X1 add_23_2_g1163(.A (add_23_2_n_92), .B (add_23_2_n_156), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g1164(.A (add_23_2_n_83), .B (add_23_2_n_158), .Y
       (out1[18]));
  XNOR2X1 add_23_2_g1165(.A (add_23_2_n_65), .B (add_23_2_n_157), .Y
       (out1[17]));
  OAI21X1 add_23_2_g1166(.A0 (add_23_2_n_20), .A1 (add_23_2_n_154), .B0
       (add_23_2_n_39), .Y (add_23_2_n_164));
  INVX1 add_23_2_g1167(.A (add_23_2_n_163), .Y (add_23_2_n_162));
  OAI31X1 add_23_2_g1168(.A0 (add_23_2_n_113), .A1 (add_23_2_n_110),
       .A2 (add_23_2_n_147), .B0 (add_23_2_n_127), .Y (add_23_2_n_163));
  XNOR2X1 add_23_2_g1169(.A (add_23_2_n_85), .B (add_23_2_n_154), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g1170(.A (add_23_2_n_89), .B (add_23_2_n_153), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g1171(.A (add_23_2_n_84), .B (add_23_2_n_152), .Y
       (out1[11]));
  AOI21X1 add_23_2_g1172(.A0 (add_23_2_n_78), .A1 (add_23_2_n_148), .B0
       (add_23_2_n_105), .Y (add_23_2_n_158));
  OAI21X1 add_23_2_g1173(.A0 (add_23_2_n_35), .A1 (add_23_2_n_147), .B0
       (add_23_2_n_19), .Y (add_23_2_n_157));
  AOI2BB1X1 add_23_2_g1174(.A0N (add_23_2_n_110), .A1N
       (add_23_2_n_147), .B0 (add_23_2_n_118), .Y (add_23_2_n_156));
  XNOR2X1 add_23_2_g1175(.A (add_23_2_n_86), .B (add_23_2_n_148), .Y
       (out1[16]));
  AOI21X1 add_23_2_g1176(.A0 (add_23_2_n_99), .A1 (add_23_2_n_146), .B0
       (add_23_2_n_102), .Y (add_23_2_n_154));
  OAI2BB1X1 add_23_2_g1177(.A0N (add_23_2_n_44), .A1N (add_23_2_n_146),
       .B0 (add_23_2_n_11), .Y (add_23_2_n_153));
  OAI21X1 add_23_2_g1178(.A0 (add_23_2_n_36), .A1 (add_23_2_n_145), .B0
       (add_23_2_n_42), .Y (add_23_2_n_152));
  XNOR2X1 add_23_2_g1179(.A (add_23_2_n_88), .B (add_23_2_n_146), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g1180(.A (add_23_2_n_87), .B (add_23_2_n_145), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g1181(.A (add_23_2_n_81), .B (add_23_2_n_144), .Y
       (out1[9]));
  INVX1 add_23_2_g1182(.A (add_23_2_n_148), .Y (add_23_2_n_147));
  OAI31X1 add_23_2_g1183(.A0 (add_23_2_n_112), .A1 (add_23_2_n_111),
       .A2 (add_23_2_n_140), .B0 (add_23_2_n_126), .Y (add_23_2_n_148));
  OAI211X1 add_23_2_g1184(.A0 (add_23_2_n_112), .A1 (add_23_2_n_140),
       .B0 (add_23_2_n_106), .C0 (add_23_2_n_116), .Y (add_23_2_n_146));
  AOI21X1 add_23_2_g1185(.A0 (add_23_2_n_73), .A1 (add_23_2_n_139), .B0
       (add_23_2_n_101), .Y (add_23_2_n_145));
  OAI21X1 add_23_2_g1186(.A0 (add_23_2_n_50), .A1 (add_23_2_n_140), .B0
       (add_23_2_n_37), .Y (add_23_2_n_144));
  XNOR2X1 add_23_2_g1187(.A (add_23_2_n_90), .B (add_23_2_n_140), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1188(.A (add_23_2_n_80), .B (add_23_2_n_141), .Y
       (out1[7]));
  OAI21X1 add_23_2_g1189(.A0 (add_23_2_n_1), .A1 (add_23_2_n_135), .B0
       (add_23_2_n_49), .Y (add_23_2_n_141));
  INVX1 add_23_2_g1190(.A (add_23_2_n_139), .Y (add_23_2_n_140));
  OAI211X1 add_23_2_g1191(.A0 (add_23_2_n_49), .A1 (add_23_2_n_31), .B0
       (add_23_2_n_136), .C0 (add_23_2_n_115), .Y (add_23_2_n_139));
  XNOR2X1 add_23_2_g1192(.A (add_23_2_n_64), .B (add_23_2_n_135), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1193(.A (add_23_2_n_63), .B (add_23_2_n_134), .Y
       (out1[5]));
  AOI31X1 add_23_2_g1194(.A0 (add_23_2_n_77), .A1 (add_23_2_n_75), .A2
       (add_23_2_n_131), .B0 (add_23_2_n_27), .Y (add_23_2_n_136));
  AOI21X1 add_23_2_g1195(.A0 (add_23_2_n_77), .A1 (add_23_2_n_131), .B0
       (add_23_2_n_104), .Y (add_23_2_n_135));
  OAI21X1 add_23_2_g1196(.A0 (add_23_2_n_10), .A1 (add_23_2_n_132), .B0
       (add_23_2_n_14), .Y (add_23_2_n_134));
  XNOR2X1 add_23_2_g1197(.A (add_23_2_n_68), .B (add_23_2_n_132), .Y
       (out1[4]));
  INVX1 add_23_2_g1198(.A (add_23_2_n_131), .Y (add_23_2_n_132));
  OAI21X1 add_23_2_g1199(.A0 (add_23_2_n_26), .A1 (add_23_2_n_128), .B0
       (add_23_2_n_24), .Y (add_23_2_n_131));
  XNOR2X1 add_23_2_g1200(.A (add_23_2_n_95), .B (add_23_2_n_129), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g1201(.A0N (add_23_2_n_17), .A1N (add_23_2_n_122),
       .B0 (add_23_2_n_3), .Y (add_23_2_n_129));
  AOI21X1 add_23_2_g1202(.A0 (add_23_2_n_17), .A1 (add_23_2_n_122), .B0
       (add_23_2_n_2), .Y (add_23_2_n_128));
  AOI211XL add_23_2_g1203(.A0 (add_23_2_n_100), .A1 (add_23_2_n_109),
       .B0 (add_23_2_n_123), .C0 (add_23_2_n_71), .Y (add_23_2_n_127));
  AOI211XL add_23_2_g1204(.A0 (add_23_2_n_74), .A1 (add_23_2_n_102),
       .B0 (add_23_2_n_124), .C0 (add_23_2_n_72), .Y (add_23_2_n_126));
  XNOR2X1 add_23_2_g1205(.A (add_23_2_n_69), .B (add_23_2_n_122), .Y
       (out1[2]));
  OAI21X1 add_23_2_g1206(.A0 (add_23_2_n_111), .A1 (add_23_2_n_120),
       .B0 (add_23_2_n_56), .Y (add_23_2_n_124));
  OAI21X1 add_23_2_g1207(.A0 (add_23_2_n_113), .A1 (add_23_2_n_119),
       .B0 (add_23_2_n_23), .Y (add_23_2_n_123));
  ADDFX1 add_23_2_g1208(.A (add_23_2_n_107), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_122), .S (out1[1]));
  AND2XL add_23_2_g1209(.A (add_23_2_n_106), .B (add_23_2_n_116), .Y
       (add_23_2_n_120));
  INVX1 add_23_2_g1210(.A (add_23_2_n_118), .Y (add_23_2_n_119));
  OAI211X1 add_23_2_g1211(.A0 (add_23_2_n_8), .A1 (add_23_2_n_4), .B0
       (add_23_2_n_114), .C0 (add_23_2_n_55), .Y (add_23_2_n_118));
  NAND2XL add_23_2_g1212(.A (add_23_2_n_96), .B (add_23_2_n_103), .Y
       (add_23_2_n_117));
  NAND2X1 add_23_2_g1213(.A (add_23_2_n_97), .B (add_23_2_n_101), .Y
       (add_23_2_n_116));
  NAND2X1 add_23_2_g1214(.A (add_23_2_n_75), .B (add_23_2_n_104), .Y
       (add_23_2_n_115));
  NAND2XL add_23_2_g1215(.A (add_23_2_n_76), .B (add_23_2_n_105), .Y
       (add_23_2_n_114));
  ADDHX1 add_23_2_g1216(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_107),
       .S (out1[0]));
  NAND2BX1 add_23_2_g1217(.AN (add_23_2_n_98), .B (add_23_2_n_100), .Y
       (add_23_2_n_113));
  NAND2X1 add_23_2_g1218(.A (add_23_2_n_97), .B (add_23_2_n_73), .Y
       (add_23_2_n_112));
  NAND2X1 add_23_2_g1219(.A (add_23_2_n_74), .B (add_23_2_n_99), .Y
       (add_23_2_n_111));
  NAND2X1 add_23_2_g1220(.A (add_23_2_n_76), .B (add_23_2_n_78), .Y
       (add_23_2_n_110));
  OAI21X1 add_23_2_g1221(.A0 (add_23_2_n_38), .A1 (add_23_2_n_30), .B0
       (add_23_2_n_57), .Y (add_23_2_n_109));
  OA21X1 add_23_2_g1222(.A0 (add_23_2_n_42), .A1 (add_23_2_n_45), .B0
       (add_23_2_n_52), .Y (add_23_2_n_106));
  OAI21X1 add_23_2_g1223(.A0 (add_23_2_n_19), .A1 (add_23_2_n_16), .B0
       (add_23_2_n_28), .Y (add_23_2_n_105));
  OAI21X1 add_23_2_g1224(.A0 (add_23_2_n_14), .A1 (add_23_2_n_34), .B0
       (add_23_2_n_29), .Y (add_23_2_n_104));
  OAI21X1 add_23_2_g1225(.A0 (add_23_2_n_48), .A1 (add_23_2_n_13), .B0
       (add_23_2_n_51), .Y (add_23_2_n_103));
  OAI21X1 add_23_2_g1226(.A0 (add_23_2_n_11), .A1 (add_23_2_n_9), .B0
       (add_23_2_n_22), .Y (add_23_2_n_102));
  OAI21X1 add_23_2_g1227(.A0 (add_23_2_n_37), .A1 (add_23_2_n_33), .B0
       (add_23_2_n_54), .Y (add_23_2_n_101));
  NAND2BX1 add_23_2_g1228(.AN (add_23_2_n_26), .B (add_23_2_n_24), .Y
       (add_23_2_n_95));
  NOR2BX1 add_23_2_g1229(.AN (add_23_2_n_46), .B (add_23_2_n_41), .Y
       (add_23_2_n_94));
  NAND2BX1 add_23_2_g1230(.AN (add_23_2_n_30), .B (add_23_2_n_57), .Y
       (add_23_2_n_93));
  NOR2X1 add_23_2_g1231(.A (add_23_2_n_6), .B (add_23_2_n_41), .Y
       (add_23_2_n_100));
  NOR2BX1 add_23_2_g1232(.AN (add_23_2_n_44), .B (add_23_2_n_9), .Y
       (add_23_2_n_99));
  NOR2BX1 add_23_2_g1233(.AN (add_23_2_n_38), .B (add_23_2_n_5), .Y
       (add_23_2_n_92));
  NAND2BX1 add_23_2_g1234(.AN (add_23_2_n_4), .B (add_23_2_n_55), .Y
       (add_23_2_n_91));
  NOR2BX1 add_23_2_g1235(.AN (add_23_2_n_37), .B (add_23_2_n_50), .Y
       (add_23_2_n_90));
  NAND2BX1 add_23_2_g1236(.AN (add_23_2_n_9), .B (add_23_2_n_22), .Y
       (add_23_2_n_89));
  NAND2X1 add_23_2_g1237(.A (add_23_2_n_11), .B (add_23_2_n_44), .Y
       (add_23_2_n_88));
  NOR2BX1 add_23_2_g1238(.AN (add_23_2_n_42), .B (add_23_2_n_36), .Y
       (add_23_2_n_87));
  OR2XL add_23_2_g1239(.A (add_23_2_n_30), .B (add_23_2_n_5), .Y
       (add_23_2_n_98));
  NOR2X1 add_23_2_g1240(.A (add_23_2_n_45), .B (add_23_2_n_36), .Y
       (add_23_2_n_97));
  NAND2BX1 add_23_2_g1241(.AN (add_23_2_n_35), .B (add_23_2_n_19), .Y
       (add_23_2_n_86));
  NOR2X1 add_23_2_g1242(.A (add_23_2_n_47), .B (add_23_2_n_12), .Y
       (add_23_2_n_96));
  NOR2BX1 add_23_2_g1243(.AN (add_23_2_n_39), .B (add_23_2_n_20), .Y
       (add_23_2_n_85));
  NAND2BX1 add_23_2_g1244(.AN (add_23_2_n_45), .B (add_23_2_n_52), .Y
       (add_23_2_n_84));
  NOR2BX1 add_23_2_g1245(.AN (add_23_2_n_8), .B (add_23_2_n_40), .Y
       (add_23_2_n_83));
  NAND2BX1 add_23_2_g1246(.AN (add_23_2_n_43), .B (add_23_2_n_56), .Y
       (add_23_2_n_82));
  NAND2BX1 add_23_2_g1247(.AN (add_23_2_n_33), .B (add_23_2_n_54), .Y
       (add_23_2_n_81));
  OR2XL add_23_2_g1248(.A (add_23_2_n_27), .B (add_23_2_n_31), .Y
       (add_23_2_n_80));
  NOR2X1 add_23_2_g1249(.A (add_23_2_n_39), .B (add_23_2_n_43), .Y
       (add_23_2_n_72));
  NOR2X1 add_23_2_g1250(.A (add_23_2_n_46), .B (add_23_2_n_6), .Y
       (add_23_2_n_71));
  NOR2X1 add_23_2_g1251(.A (add_23_2_n_13), .B (add_23_2_n_15), .Y
       (add_23_2_n_79));
  NOR2X1 add_23_2_g1252(.A (add_23_2_n_16), .B (add_23_2_n_35), .Y
       (add_23_2_n_78));
  NAND2X1 add_23_2_g1253(.A (add_23_2_n_21), .B (add_23_2_n_53), .Y
       (add_23_2_n_70));
  NOR2X1 add_23_2_g1254(.A (add_23_2_n_34), .B (add_23_2_n_10), .Y
       (add_23_2_n_77));
  NAND2X1 add_23_2_g1255(.A (add_23_2_n_3), .B (add_23_2_n_17), .Y
       (add_23_2_n_69));
  NOR2BX1 add_23_2_g1256(.AN (add_23_2_n_14), .B (add_23_2_n_10), .Y
       (add_23_2_n_68));
  OR2XL add_23_2_g1257(.A (add_23_2_n_25), .B (add_23_2_n_47), .Y
       (add_23_2_n_67));
  NAND2X1 add_23_2_g1258(.A (add_23_2_n_32), .B (add_23_2_n_18), .Y
       (add_23_2_n_66));
  NAND2BX1 add_23_2_g1259(.AN (add_23_2_n_16), .B (add_23_2_n_28), .Y
       (add_23_2_n_65));
  NOR2X1 add_23_2_g1260(.A (add_23_2_n_4), .B (add_23_2_n_40), .Y
       (add_23_2_n_76));
  NOR2X1 add_23_2_g1261(.A (add_23_2_n_31), .B (add_23_2_n_1), .Y
       (add_23_2_n_75));
  NOR2BX1 add_23_2_g1262(.AN (add_23_2_n_49), .B (add_23_2_n_1), .Y
       (add_23_2_n_64));
  NAND2BX1 add_23_2_g1263(.AN (add_23_2_n_34), .B (add_23_2_n_29), .Y
       (add_23_2_n_63));
  NOR2X1 add_23_2_g1264(.A (add_23_2_n_43), .B (add_23_2_n_20), .Y
       (add_23_2_n_74));
  NOR2BX1 add_23_2_g1265(.AN (add_23_2_n_7), .B (add_23_2_n_12), .Y
       (add_23_2_n_62));
  NAND2BX1 add_23_2_g1266(.AN (add_23_2_n_13), .B (add_23_2_n_51), .Y
       (add_23_2_n_61));
  NAND2BX1 add_23_2_g1267(.AN (add_23_2_n_15), .B (add_23_2_n_48), .Y
       (add_23_2_n_60));
  NAND2BX1 add_23_2_g1268(.AN (add_23_2_n_6), .B (add_23_2_n_23), .Y
       (add_23_2_n_59));
  NOR2X1 add_23_2_g1269(.A (add_23_2_n_33), .B (add_23_2_n_50), .Y
       (add_23_2_n_73));
  XNOR2X1 add_23_2_g1270(.A (in2[31]), .B (in1[31]), .Y
       (add_23_2_n_58));
  NAND2X1 add_23_2_g1271(.A (in2[21]), .B (in1[21]), .Y
       (add_23_2_n_57));
  NAND2X1 add_23_2_g1272(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_56));
  NAND2X1 add_23_2_g1273(.A (in2[19]), .B (in1[19]), .Y
       (add_23_2_n_55));
  NAND2X1 add_23_2_g1274(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_54));
  OR2XL add_23_2_g1275(.A (in2[29]), .B (in1[29]), .Y (add_23_2_n_53));
  NAND2X1 add_23_2_g1276(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_52));
  NAND2X1 add_23_2_g1277(.A (in2[25]), .B (in1[25]), .Y
       (add_23_2_n_51));
  NOR2X1 add_23_2_g1278(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_50));
  NAND2X1 add_23_2_g1279(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_49));
  NAND2X1 add_23_2_g1280(.A (in2[24]), .B (in1[24]), .Y
       (add_23_2_n_48));
  NOR2X1 add_23_2_g1281(.A (in2[27]), .B (in1[27]), .Y (add_23_2_n_47));
  NAND2X1 add_23_2_g1282(.A (in2[22]), .B (in1[22]), .Y
       (add_23_2_n_46));
  NOR2X1 add_23_2_g1283(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_45));
  OR2XL add_23_2_g1284(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_44));
  NOR2X1 add_23_2_g1285(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_43));
  NAND2X1 add_23_2_g1286(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_42));
  NOR2X1 add_23_2_g1287(.A (in2[22]), .B (in1[22]), .Y (add_23_2_n_41));
  NOR2X1 add_23_2_g1288(.A (in2[18]), .B (in1[18]), .Y (add_23_2_n_40));
  NAND2X1 add_23_2_g1289(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_39));
  NAND2X1 add_23_2_g1290(.A (in2[20]), .B (in1[20]), .Y
       (add_23_2_n_38));
  NAND2X1 add_23_2_g1291(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_37));
  NOR2X1 add_23_2_g1292(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_36));
  NOR2X1 add_23_2_g1293(.A (in2[16]), .B (in1[16]), .Y (add_23_2_n_35));
  NOR2X1 add_23_2_g1294(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_34));
  NOR2X1 add_23_2_g1295(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_33));
  NAND2X1 add_23_2_g1296(.A (in2[28]), .B (in1[28]), .Y
       (add_23_2_n_32));
  NOR2X1 add_23_2_g1297(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_31));
  NOR2X1 add_23_2_g1298(.A (in2[21]), .B (in1[21]), .Y (add_23_2_n_30));
  INVX1 add_23_2_g1299(.A (add_23_2_n_3), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g1300(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_29));
  NAND2X1 add_23_2_g1301(.A (in2[17]), .B (in1[17]), .Y
       (add_23_2_n_28));
  AND2XL add_23_2_g1302(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_27));
  NOR2X1 add_23_2_g1303(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_26));
  AND2X1 add_23_2_g1304(.A (in2[27]), .B (in1[27]), .Y (add_23_2_n_25));
  NAND2X1 add_23_2_g1305(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g1306(.A (in2[23]), .B (in1[23]), .Y
       (add_23_2_n_23));
  NAND2X1 add_23_2_g1307(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_22));
  NAND2X1 add_23_2_g1308(.A (in2[29]), .B (in1[29]), .Y
       (add_23_2_n_21));
  NOR2X1 add_23_2_g1309(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_20));
  NAND2X1 add_23_2_g1310(.A (in2[16]), .B (in1[16]), .Y
       (add_23_2_n_19));
  OR2XL add_23_2_g1311(.A (in2[28]), .B (in1[28]), .Y (add_23_2_n_18));
  OR2X1 add_23_2_g1312(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_17));
  NOR2X1 add_23_2_g1313(.A (in2[17]), .B (in1[17]), .Y (add_23_2_n_16));
  NOR2X1 add_23_2_g1314(.A (in2[24]), .B (in1[24]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g1315(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g1316(.A (in2[25]), .B (in1[25]), .Y (add_23_2_n_13));
  NOR2X1 add_23_2_g1317(.A (in2[26]), .B (in1[26]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g1318(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_11));
  NOR2X1 add_23_2_g1319(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g1320(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g1321(.A (in2[18]), .B (in1[18]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g1322(.A (in2[26]), .B (in1[26]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1323(.A (in2[23]), .B (in1[23]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1324(.A (in2[20]), .B (in1[20]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1325(.A (in2[19]), .B (in1[19]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g1326(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g1327(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_1));
  OAI2BB1X1 add_23_2_g1328(.A0N (add_23_2_n_18), .A1N (add_23_2_n_179),
       .B0 (add_23_2_n_32), .Y (add_23_2_n_0));
endmodule


