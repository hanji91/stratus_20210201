`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 21 2020 13:30:51 KST (Dec 21 2020 04:30:51 UTC)

module avg_pool_LessThan_33Sx32S_1U_1(in2, in1, out1);
  input [32:0] in2;
  input [31:0] in1;
  output out1;
  wire [32:0] in2;
  wire [31:0] in1;
  wire out1;
  wire gt_21_84_n_0, gt_21_84_n_1, gt_21_84_n_2, gt_21_84_n_3,
       gt_21_84_n_4, gt_21_84_n_5, gt_21_84_n_6, gt_21_84_n_7;
  wire gt_21_84_n_8, gt_21_84_n_9, gt_21_84_n_10, gt_21_84_n_11,
       gt_21_84_n_12, gt_21_84_n_13, gt_21_84_n_14, gt_21_84_n_15;
  wire gt_21_84_n_17, gt_21_84_n_18, gt_21_84_n_19, gt_21_84_n_20,
       gt_21_84_n_21, gt_21_84_n_22, gt_21_84_n_23, gt_21_84_n_24;
  wire gt_21_84_n_25, gt_21_84_n_26, gt_21_84_n_27, gt_21_84_n_28,
       gt_21_84_n_29, gt_21_84_n_30, gt_21_84_n_31, gt_21_84_n_32;
  wire gt_21_84_n_33, gt_21_84_n_34, gt_21_84_n_35, gt_21_84_n_36,
       gt_21_84_n_37, gt_21_84_n_38, gt_21_84_n_39, gt_21_84_n_40;
  wire gt_21_84_n_41, gt_21_84_n_42, gt_21_84_n_43, gt_21_84_n_44,
       gt_21_84_n_45, gt_21_84_n_46, gt_21_84_n_47, gt_21_84_n_48;
  wire gt_21_84_n_49, gt_21_84_n_50, gt_21_84_n_51, gt_21_84_n_52,
       gt_21_84_n_54, gt_21_84_n_55, gt_21_84_n_56, gt_21_84_n_57;
  wire gt_21_84_n_58, gt_21_84_n_59, gt_21_84_n_60, gt_21_84_n_61,
       gt_21_84_n_62, gt_21_84_n_63, gt_21_84_n_64, gt_21_84_n_65;
  wire gt_21_84_n_66, gt_21_84_n_67, gt_21_84_n_68, gt_21_84_n_69,
       gt_21_84_n_70, gt_21_84_n_71, gt_21_84_n_72, gt_21_84_n_73;
  wire gt_21_84_n_74, gt_21_84_n_75, gt_21_84_n_76, gt_21_84_n_77,
       gt_21_84_n_78, gt_21_84_n_79, gt_21_84_n_80, gt_21_84_n_81;
  wire gt_21_84_n_82, gt_21_84_n_83, gt_21_84_n_84, gt_21_84_n_85,
       gt_21_84_n_86, gt_21_84_n_87, gt_21_84_n_88, gt_21_84_n_89;
  wire gt_21_84_n_90, gt_21_84_n_91, gt_21_84_n_92, gt_21_84_n_93,
       gt_21_84_n_94, gt_21_84_n_95, gt_21_84_n_96, gt_21_84_n_97;
  wire gt_21_84_n_98, gt_21_84_n_99, gt_21_84_n_100, gt_21_84_n_101,
       gt_21_84_n_102, gt_21_84_n_103, gt_21_84_n_104, gt_21_84_n_105;
  wire gt_21_84_n_106, gt_21_84_n_107, gt_21_84_n_108, gt_21_84_n_109,
       gt_21_84_n_110, gt_21_84_n_111, gt_21_84_n_112, gt_21_84_n_113;
  wire gt_21_84_n_114, gt_21_84_n_115, gt_21_84_n_116, gt_21_84_n_117,
       gt_21_84_n_118, gt_21_84_n_119, gt_21_84_n_120, gt_21_84_n_121;
  wire gt_21_84_n_122, gt_21_84_n_123, gt_21_84_n_124, gt_21_84_n_125,
       gt_21_84_n_126, gt_21_84_n_127, gt_21_84_n_128, gt_21_84_n_129;
  wire gt_21_84_n_130, gt_21_84_n_131, gt_21_84_n_132, gt_21_84_n_133,
       gt_21_84_n_134, gt_21_84_n_135, gt_21_84_n_136, gt_21_84_n_137;
  wire gt_21_84_n_138, gt_21_84_n_139, gt_21_84_n_140, gt_21_84_n_141,
       gt_21_84_n_142, gt_21_84_n_143, gt_21_84_n_144, gt_21_84_n_145;
  wire gt_21_84_n_146, gt_21_84_n_147, gt_21_84_n_148, gt_21_84_n_149,
       gt_21_84_n_150, gt_21_84_n_218;
  NOR2X1 gt_21_84_g839(.A (gt_21_84_n_144), .B (gt_21_84_n_150), .Y
       (out1));
  NOR2X1 gt_21_84_g840(.A (gt_21_84_n_120), .B (gt_21_84_n_149), .Y
       (gt_21_84_n_150));
  NOR2BX1 gt_21_84_g841(.AN (gt_21_84_n_147), .B (gt_21_84_n_148), .Y
       (gt_21_84_n_149));
  NOR2X1 gt_21_84_g842(.A (gt_21_84_n_140), .B (gt_21_84_n_146), .Y
       (gt_21_84_n_148));
  AOI21X1 gt_21_84_g843(.A0 (gt_21_84_n_130), .A1 (gt_21_84_n_142), .B0
       (gt_21_84_n_143), .Y (gt_21_84_n_147));
  AOI21X1 gt_21_84_g844(.A0 (gt_21_84_n_129), .A1 (gt_21_84_n_145), .B0
       (gt_21_84_n_141), .Y (gt_21_84_n_146));
  OAI21X1 gt_21_84_g845(.A0 (gt_21_84_n_19), .A1 (gt_21_84_n_139), .B0
       (gt_21_84_n_133), .Y (gt_21_84_n_145));
  OAI21X1 gt_21_84_g846(.A0 (gt_21_84_n_100), .A1 (gt_21_84_n_138), .B0
       (gt_21_84_n_48), .Y (gt_21_84_n_144));
  OAI21X1 gt_21_84_g847(.A0 (gt_21_84_n_18), .A1 (gt_21_84_n_134), .B0
       (gt_21_84_n_136), .Y (gt_21_84_n_143));
  OAI21X1 gt_21_84_g848(.A0 (gt_21_84_n_20), .A1 (gt_21_84_n_132), .B0
       (gt_21_84_n_137), .Y (gt_21_84_n_142));
  OAI21X1 gt_21_84_g849(.A0 (gt_21_84_n_115), .A1 (gt_21_84_n_135), .B0
       (gt_21_84_n_131), .Y (gt_21_84_n_141));
  NAND2X1 gt_21_84_g850(.A (gt_21_84_n_130), .B (gt_21_84_n_128), .Y
       (gt_21_84_n_140));
  NOR2X1 gt_21_84_g851(.A (gt_21_84_n_112), .B (gt_21_84_n_127), .Y
       (gt_21_84_n_139));
  AOI2BB1X1 gt_21_84_g853(.A0N (gt_21_84_n_104), .A1N (gt_21_84_n_117),
       .B0 (gt_21_84_n_121), .Y (gt_21_84_n_137));
  AOI2BB1X1 gt_21_84_g854(.A0N (gt_21_84_n_92), .A1N (gt_21_84_n_109),
       .B0 (gt_21_84_n_119), .Y (gt_21_84_n_136));
  AOI21X1 gt_21_84_g855(.A0 (gt_21_84_n_105), .A1 (gt_21_84_n_118), .B0
       (gt_21_84_n_126), .Y (gt_21_84_n_135));
  AOI2BB1X1 gt_21_84_g856(.A0N (gt_21_84_n_99), .A1N (gt_21_84_n_110),
       .B0 (gt_21_84_n_124), .Y (gt_21_84_n_134));
  AOI2BB1X1 gt_21_84_g857(.A0N (gt_21_84_n_101), .A1N (gt_21_84_n_113),
       .B0 (gt_21_84_n_116), .Y (gt_21_84_n_133));
  AOI21X1 gt_21_84_g858(.A0 (gt_21_84_n_102), .A1 (gt_21_84_n_111), .B0
       (gt_21_84_n_114), .Y (gt_21_84_n_132));
  AOI2BB1X1 gt_21_84_g859(.A0N (gt_21_84_n_122), .A1N (gt_21_84_n_103),
       .B0 (gt_21_84_n_123), .Y (gt_21_84_n_131));
  NOR2X1 gt_21_84_g860(.A (gt_21_84_n_18), .B (gt_21_84_n_108), .Y
       (gt_21_84_n_130));
  NOR2X1 gt_21_84_g861(.A (gt_21_84_n_115), .B (gt_21_84_n_106), .Y
       (gt_21_84_n_129));
  NOR2X1 gt_21_84_g862(.A (gt_21_84_n_20), .B (gt_21_84_n_107), .Y
       (gt_21_84_n_128));
  NOR2X1 gt_21_84_g863(.A (gt_21_84_n_91), .B (gt_21_84_n_125), .Y
       (gt_21_84_n_127));
  NAND2X1 gt_21_84_g864(.A (gt_21_84_n_69), .B (gt_21_84_n_86), .Y
       (gt_21_84_n_126));
  AOI21X1 gt_21_84_g865(.A0 (gt_21_84_n_44), .A1 (gt_21_84_n_15), .B0
       (gt_21_84_n_64), .Y (gt_21_84_n_125));
  NAND2X1 gt_21_84_g866(.A (gt_21_84_n_47), .B (gt_21_84_n_83), .Y
       (gt_21_84_n_124));
  NAND2X1 gt_21_84_g867(.A (gt_21_84_n_68), .B (gt_21_84_n_88), .Y
       (gt_21_84_n_123));
  AOI21X1 gt_21_84_g868(.A0 (gt_21_84_n_63), .A1 (gt_21_84_n_7), .B0
       (gt_21_84_n_71), .Y (gt_21_84_n_122));
  NAND2X1 gt_21_84_g869(.A (gt_21_84_n_60), .B (gt_21_84_n_87), .Y
       (gt_21_84_n_121));
  NAND2BX1 gt_21_84_g870(.AN (gt_21_84_n_100), .B (gt_21_84_n_48), .Y
       (gt_21_84_n_120));
  NAND2X1 gt_21_84_g871(.A (gt_21_84_n_62), .B (gt_21_84_n_80), .Y
       (gt_21_84_n_119));
  NAND2X1 gt_21_84_g872(.A (gt_21_84_n_36), .B (gt_21_84_n_85), .Y
       (gt_21_84_n_118));
  AOI21X1 gt_21_84_g873(.A0 (gt_21_84_n_0), .A1 (gt_21_84_n_12), .B0
       (gt_21_84_n_67), .Y (gt_21_84_n_117));
  NAND2X1 gt_21_84_g874(.A (gt_21_84_n_45), .B (gt_21_84_n_84), .Y
       (gt_21_84_n_116));
  NAND2X1 gt_21_84_g876(.A (gt_21_84_n_54), .B (gt_21_84_n_82), .Y
       (gt_21_84_n_114));
  AOI21X1 gt_21_84_g877(.A0 (gt_21_84_n_11), .A1 (gt_21_84_n_41), .B0
       (gt_21_84_n_35), .Y (gt_21_84_n_113));
  NAND2X1 gt_21_84_g878(.A (gt_21_84_n_59), .B (gt_21_84_n_81), .Y
       (gt_21_84_n_112));
  NAND2X1 gt_21_84_g879(.A (gt_21_84_n_56), .B (gt_21_84_n_90), .Y
       (gt_21_84_n_111));
  AOI21X1 gt_21_84_g880(.A0 (gt_21_84_n_9), .A1 (gt_21_84_n_65), .B0
       (gt_21_84_n_37), .Y (gt_21_84_n_110));
  AOI21X1 gt_21_84_g881(.A0 (gt_21_84_n_75), .A1 (gt_21_84_n_61), .B0
       (gt_21_84_n_46), .Y (gt_21_84_n_109));
  NAND2BX1 gt_21_84_g882(.AN (gt_21_84_n_99), .B (gt_21_84_n_98), .Y
       (gt_21_84_n_108));
  NAND2X1 gt_21_84_g883(.A (gt_21_84_n_102), .B (gt_21_84_n_89), .Y
       (gt_21_84_n_107));
  NAND2X1 gt_21_84_g885(.A (gt_21_84_n_105), .B (gt_21_84_n_95), .Y
       (gt_21_84_n_106));
  NAND2X1 gt_21_84_g888(.A (gt_21_84_n_17), .B (gt_21_84_n_97), .Y
       (gt_21_84_n_115));
  INVXL gt_21_84_g890(.A (gt_21_84_n_17), .Y (gt_21_84_n_103));
  NOR2BX1 gt_21_84_g892(.AN (gt_21_84_n_9), .B (gt_21_84_n_66), .Y
       (gt_21_84_n_98));
  AOI21X1 gt_21_84_g893(.A0 (in1[12]), .A1 (gt_21_84_n_30), .B0
       (gt_21_84_n_79), .Y (gt_21_84_n_97));
  AOI21X1 gt_21_84_g894(.A0 (in1[28]), .A1 (gt_21_84_n_31), .B0
       (gt_21_84_n_76), .Y (gt_21_84_n_96));
  AOI21X1 gt_21_84_g895(.A0 (in1[8]), .A1 (gt_21_84_n_28), .B0
       (gt_21_84_n_74), .Y (gt_21_84_n_95));
  NOR2BX1 gt_21_84_g896(.AN (gt_21_84_n_0), .B (gt_21_84_n_39), .Y
       (gt_21_84_n_94));
  AOI21X1 gt_21_84_g897(.A0 (in1[4]), .A1 (gt_21_84_n_23), .B0
       (gt_21_84_n_51), .Y (gt_21_84_n_93));
  AOI21X2 gt_21_84_g898(.A0 (in1[10]), .A1 (gt_21_84_n_21), .B0
       (gt_21_84_n_77), .Y (gt_21_84_n_105));
  NAND2X1 gt_21_84_g899(.A (gt_21_84_n_52), .B (gt_21_84_n_3), .Y
       (gt_21_84_n_104));
  AOI21X2 gt_21_84_g901(.A0 (in1[18]), .A1 (gt_21_84_n_27), .B0
       (gt_21_84_n_50), .Y (gt_21_84_n_102));
  NAND2X1 gt_21_84_g902(.A (gt_21_84_n_78), .B (gt_21_84_n_4), .Y
       (gt_21_84_n_101));
  NAND2X1 gt_21_84_g903(.A (gt_21_84_n_72), .B (gt_21_84_n_48), .Y
       (gt_21_84_n_100));
  NAND2X1 gt_21_84_g904(.A (gt_21_84_n_8), .B (gt_21_84_n_58), .Y
       (gt_21_84_n_99));
  NAND2X1 gt_21_84_g906(.A (gt_21_84_n_13), .B (gt_21_84_n_57), .Y
       (gt_21_84_n_91));
  NAND2X1 gt_21_84_g907(.A (gt_21_84_n_5), .B (gt_21_84_n_42), .Y
       (gt_21_84_n_90));
  AOI21X1 gt_21_84_g908(.A0 (in1[16]), .A1 (gt_21_84_n_26), .B0
       (gt_21_84_n_218), .Y (gt_21_84_n_89));
  NAND3BXL gt_21_84_g909(.AN (in1[14]), .B (gt_21_84_n_73), .C
       (in2[14]), .Y (gt_21_84_n_88));
  NAND3BXL gt_21_84_g910(.AN (in1[22]), .B (in2[22]), .C
       (gt_21_84_n_52), .Y (gt_21_84_n_87));
  NAND2X1 gt_21_84_g911(.A (gt_21_84_n_10), .B (gt_21_84_n_55), .Y
       (gt_21_84_n_86));
  NAND2X1 gt_21_84_g912(.A (gt_21_84_n_14), .B (gt_21_84_n_70), .Y
       (gt_21_84_n_85));
  NAND2X1 gt_21_84_g913(.A (gt_21_84_n_78), .B (gt_21_84_n_43), .Y
       (gt_21_84_n_84));
  NAND3BXL gt_21_84_g914(.AN (in1[26]), .B (in2[26]), .C
       (gt_21_84_n_8), .Y (gt_21_84_n_83));
  NAND2X1 gt_21_84_g915(.A (gt_21_84_n_2), .B (gt_21_84_n_40), .Y
       (gt_21_84_n_82));
  NAND2X1 gt_21_84_g916(.A (gt_21_84_n_13), .B (gt_21_84_n_38), .Y
       (gt_21_84_n_81));
  NAND3BXL gt_21_84_g917(.AN (in1[30]), .B (gt_21_84_n_49), .C
       (in2[30]), .Y (gt_21_84_n_80));
  NAND2X1 gt_21_84_g918(.A (gt_21_84_n_49), .B (gt_21_84_n_6), .Y
       (gt_21_84_n_92));
  INVX1 gt_21_84_g919(.A (gt_21_84_n_7), .Y (gt_21_84_n_79));
  INVX1 gt_21_84_g920(.A (gt_21_84_n_10), .Y (gt_21_84_n_77));
  INVX1 gt_21_84_g921(.A (gt_21_84_n_75), .Y (gt_21_84_n_76));
  INVX1 gt_21_84_g922(.A (gt_21_84_n_14), .Y (gt_21_84_n_74));
  NOR2BX1 gt_21_84_g924(.AN (in2[13]), .B (in1[13]), .Y
       (gt_21_84_n_71));
  NOR2X1 gt_21_84_g925(.A (gt_21_84_n_28), .B (in1[8]), .Y
       (gt_21_84_n_70));
  NAND2BXL gt_21_84_g926(.AN (in1[11]), .B (in2[11]), .Y
       (gt_21_84_n_69));
  NAND2BXL gt_21_84_g927(.AN (in1[15]), .B (in2[15]), .Y
       (gt_21_84_n_68));
  NOR2BX1 gt_21_84_g928(.AN (in2[21]), .B (in1[21]), .Y
       (gt_21_84_n_67));
  NOR2BX1 gt_21_84_g929(.AN (in1[24]), .B (in2[24]), .Y
       (gt_21_84_n_66));
  NOR2BX1 gt_21_84_g930(.AN (in2[24]), .B (in1[24]), .Y
       (gt_21_84_n_65));
  NOR2X1 gt_21_84_g932(.A (gt_21_84_n_25), .B (in1[1]), .Y
       (gt_21_84_n_64));
  NOR2X1 gt_21_84_g934(.A (gt_21_84_n_30), .B (in1[12]), .Y
       (gt_21_84_n_63));
  NAND2BXL gt_21_84_g935(.AN (in1[31]), .B (in2[31]), .Y
       (gt_21_84_n_62));
  NOR2X1 gt_21_84_g936(.A (gt_21_84_n_31), .B (in1[28]), .Y
       (gt_21_84_n_61));
  NAND2BXL gt_21_84_g937(.AN (in1[23]), .B (in2[23]), .Y
       (gt_21_84_n_60));
  NAND2BX1 gt_21_84_g938(.AN (in1[3]), .B (in2[3]), .Y (gt_21_84_n_59));
  NAND2BX1 gt_21_84_g939(.AN (in2[26]), .B (in1[26]), .Y
       (gt_21_84_n_58));
  NAND2X1 gt_21_84_g940(.A (in1[2]), .B (gt_21_84_n_33), .Y
       (gt_21_84_n_57));
  NAND2BX1 gt_21_84_g941(.AN (in1[17]), .B (in2[17]), .Y
       (gt_21_84_n_56));
  NOR2X1 gt_21_84_g942(.A (gt_21_84_n_21), .B (in1[10]), .Y
       (gt_21_84_n_55));
  NAND2BXL gt_21_84_g943(.AN (in1[19]), .B (in2[19]), .Y
       (gt_21_84_n_54));
  NAND2X1 gt_21_84_g945(.A (in1[7]), .B (gt_21_84_n_24), .Y
       (gt_21_84_n_78));
  NAND2X1 gt_21_84_g947(.A (in1[29]), .B (gt_21_84_n_34), .Y
       (gt_21_84_n_75));
  NAND2X1 gt_21_84_g949(.A (in1[15]), .B (gt_21_84_n_22), .Y
       (gt_21_84_n_73));
  NAND2BX1 gt_21_84_g950(.AN (in1[31]), .B (in2[32]), .Y
       (gt_21_84_n_72));
  INVX1 gt_21_84_g952(.A (gt_21_84_n_11), .Y (gt_21_84_n_51));
  INVX1 gt_21_84_g953(.A (gt_21_84_n_2), .Y (gt_21_84_n_50));
  NAND2BXL gt_21_84_g955(.AN (in1[27]), .B (in2[27]), .Y
       (gt_21_84_n_47));
  NOR2X1 gt_21_84_g956(.A (gt_21_84_n_34), .B (in1[29]), .Y
       (gt_21_84_n_46));
  NAND2BXL gt_21_84_g958(.AN (in1[7]), .B (in2[7]), .Y (gt_21_84_n_45));
  NAND2X1 gt_21_84_g959(.A (in1[1]), .B (gt_21_84_n_25), .Y
       (gt_21_84_n_44));
  NOR2BX1 gt_21_84_g960(.AN (in2[6]), .B (in1[6]), .Y (gt_21_84_n_43));
  NOR2X1 gt_21_84_g963(.A (gt_21_84_n_26), .B (in1[16]), .Y
       (gt_21_84_n_42));
  NOR2X1 gt_21_84_g964(.A (gt_21_84_n_23), .B (in1[4]), .Y
       (gt_21_84_n_41));
  NOR2X1 gt_21_84_g965(.A (gt_21_84_n_27), .B (in1[18]), .Y
       (gt_21_84_n_40));
  NOR2BX1 gt_21_84_g966(.AN (in1[20]), .B (in2[20]), .Y
       (gt_21_84_n_39));
  NOR2X1 gt_21_84_g967(.A (gt_21_84_n_33), .B (in1[2]), .Y
       (gt_21_84_n_38));
  NOR2BX1 gt_21_84_g968(.AN (in2[25]), .B (in1[25]), .Y
       (gt_21_84_n_37));
  NAND2BX1 gt_21_84_g969(.AN (in1[9]), .B (in2[9]), .Y (gt_21_84_n_36));
  NOR2BX1 gt_21_84_g970(.AN (in2[5]), .B (in1[5]), .Y (gt_21_84_n_35));
  NAND2X1 gt_21_84_g974(.A (in1[23]), .B (gt_21_84_n_32), .Y
       (gt_21_84_n_52));
  NAND2X1 gt_21_84_g980(.A (in1[31]), .B (gt_21_84_n_29), .Y
       (gt_21_84_n_49));
  NAND2BX1 gt_21_84_g981(.AN (in2[32]), .B (in1[31]), .Y
       (gt_21_84_n_48));
  INVX1 gt_21_84_g983(.A (in2[29]), .Y (gt_21_84_n_34));
  INVX1 gt_21_84_g984(.A (in2[2]), .Y (gt_21_84_n_33));
  INVX1 gt_21_84_g985(.A (in2[23]), .Y (gt_21_84_n_32));
  INVX1 gt_21_84_g986(.A (in2[28]), .Y (gt_21_84_n_31));
  INVX1 gt_21_84_g987(.A (in2[12]), .Y (gt_21_84_n_30));
  INVX1 gt_21_84_g989(.A (in2[31]), .Y (gt_21_84_n_29));
  INVX1 gt_21_84_g992(.A (in2[8]), .Y (gt_21_84_n_28));
  INVX1 gt_21_84_g993(.A (in2[18]), .Y (gt_21_84_n_27));
  INVX1 gt_21_84_g997(.A (in2[16]), .Y (gt_21_84_n_26));
  INVX1 gt_21_84_g998(.A (in2[1]), .Y (gt_21_84_n_25));
  INVX1 gt_21_84_g1002(.A (in2[7]), .Y (gt_21_84_n_24));
  INVX1 gt_21_84_g1004(.A (in2[4]), .Y (gt_21_84_n_23));
  INVX1 gt_21_84_g1005(.A (in2[15]), .Y (gt_21_84_n_22));
  INVX1 gt_21_84_g1010(.A (in2[10]), .Y (gt_21_84_n_21));
  NAND2BX1 gt_21_84_g2(.AN (gt_21_84_n_104), .B (gt_21_84_n_94), .Y
       (gt_21_84_n_20));
  NAND2BX1 gt_21_84_g1012(.AN (gt_21_84_n_101), .B (gt_21_84_n_93), .Y
       (gt_21_84_n_19));
  NAND2BX1 gt_21_84_g1013(.AN (gt_21_84_n_92), .B (gt_21_84_n_96), .Y
       (gt_21_84_n_18));
  NOR2BX1 gt_21_84_g1014(.AN (gt_21_84_n_73), .B (gt_21_84_n_1), .Y
       (gt_21_84_n_17));
  NAND2BX1 gt_21_84_g1016(.AN (in2[0]), .B (in1[0]), .Y
       (gt_21_84_n_15));
  NAND2BX4 gt_21_84_g1017(.AN (in2[9]), .B (in1[9]), .Y
       (gt_21_84_n_14));
  NAND2BX1 gt_21_84_g1018(.AN (in2[3]), .B (in1[3]), .Y
       (gt_21_84_n_13));
  NOR2BX1 gt_21_84_g1019(.AN (in2[20]), .B (in1[20]), .Y
       (gt_21_84_n_12));
  NAND2BX1 gt_21_84_g1020(.AN (in2[5]), .B (in1[5]), .Y
       (gt_21_84_n_11));
  NAND2BX1 gt_21_84_g1021(.AN (in2[11]), .B (in1[11]), .Y
       (gt_21_84_n_10));
  NAND2BX1 gt_21_84_g1022(.AN (in2[25]), .B (in1[25]), .Y
       (gt_21_84_n_9));
  NAND2BX1 gt_21_84_g1023(.AN (in2[27]), .B (in1[27]), .Y
       (gt_21_84_n_8));
  NAND2BX4 gt_21_84_g1024(.AN (in2[13]), .B (in1[13]), .Y
       (gt_21_84_n_7));
  NAND2BX1 gt_21_84_g1025(.AN (in2[30]), .B (in1[30]), .Y
       (gt_21_84_n_6));
  NAND2BX4 gt_21_84_g1026(.AN (in2[17]), .B (in1[17]), .Y
       (gt_21_84_n_5));
  NAND2BX1 gt_21_84_g1027(.AN (in2[6]), .B (in1[6]), .Y (gt_21_84_n_4));
  NAND2BX1 gt_21_84_g1028(.AN (in2[22]), .B (in1[22]), .Y
       (gt_21_84_n_3));
  NAND2BX4 gt_21_84_g1029(.AN (in2[19]), .B (in1[19]), .Y
       (gt_21_84_n_2));
  NOR2BX1 gt_21_84_g1030(.AN (in1[14]), .B (in2[14]), .Y
       (gt_21_84_n_1));
  NAND2BX1 gt_21_84_g1031(.AN (in2[21]), .B (in1[21]), .Y
       (gt_21_84_n_0));
  CLKBUFX2 gt_21_84_g1032(.A (gt_21_84_n_72), .Y (gt_21_84_n_138));
  INVXL gt_21_84_fopt(.A (gt_21_84_n_5), .Y (gt_21_84_n_218));
endmodule
