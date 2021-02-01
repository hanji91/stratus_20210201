`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 19:55:01 KST (Jan 27 2021 10:55:01 UTC)

module avg_pool_LessThan_33Sx32S_1U_4_0(in2, in1, out1);
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
  wire gt_21_84_n_16, gt_21_84_n_17, gt_21_84_n_18, gt_21_84_n_19,
       gt_21_84_n_20, gt_21_84_n_21, gt_21_84_n_22, gt_21_84_n_23;
  wire gt_21_84_n_24, gt_21_84_n_25, gt_21_84_n_26, gt_21_84_n_27,
       gt_21_84_n_28, gt_21_84_n_29, gt_21_84_n_30, gt_21_84_n_31;
  wire gt_21_84_n_32, gt_21_84_n_33, gt_21_84_n_34, gt_21_84_n_35,
       gt_21_84_n_36, gt_21_84_n_37, gt_21_84_n_38, gt_21_84_n_39;
  wire gt_21_84_n_40, gt_21_84_n_41, gt_21_84_n_42, gt_21_84_n_43,
       gt_21_84_n_44, gt_21_84_n_45, gt_21_84_n_46, gt_21_84_n_47;
  wire gt_21_84_n_48, gt_21_84_n_49, gt_21_84_n_50, gt_21_84_n_51,
       gt_21_84_n_52, gt_21_84_n_53, gt_21_84_n_54, gt_21_84_n_55;
  wire gt_21_84_n_56, gt_21_84_n_57, gt_21_84_n_58, gt_21_84_n_59,
       gt_21_84_n_60, gt_21_84_n_61, gt_21_84_n_62, gt_21_84_n_63;
  wire gt_21_84_n_64, gt_21_84_n_65, gt_21_84_n_66, gt_21_84_n_67,
       gt_21_84_n_68, gt_21_84_n_69, gt_21_84_n_70, gt_21_84_n_71;
  wire gt_21_84_n_72, gt_21_84_n_73, gt_21_84_n_74, gt_21_84_n_75,
       gt_21_84_n_76, gt_21_84_n_77, gt_21_84_n_78, gt_21_84_n_79;
  wire gt_21_84_n_80, gt_21_84_n_81, gt_21_84_n_82, gt_21_84_n_83,
       gt_21_84_n_84, gt_21_84_n_85, gt_21_84_n_86, gt_21_84_n_87;
  wire gt_21_84_n_88, gt_21_84_n_89, gt_21_84_n_90, gt_21_84_n_91,
       gt_21_84_n_92, gt_21_84_n_93, gt_21_84_n_94, gt_21_84_n_95;
  wire gt_21_84_n_96, gt_21_84_n_97, gt_21_84_n_98, gt_21_84_n_99,
       gt_21_84_n_100, gt_21_84_n_101;
  NOR2X1 gt_21_84_g1062(.A (gt_21_84_n_46), .B (gt_21_84_n_101), .Y
       (out1));
  AOI221X1 gt_21_84_g1063(.A0 (in2[32]), .A1 (gt_21_84_n_1), .B0
       (gt_21_84_n_96), .B1 (gt_21_84_n_100), .C0 (gt_21_84_n_46), .Y
       (gt_21_84_n_101));
  AOI32X1 gt_21_84_g1064(.A0 (gt_21_84_n_84), .A1 (gt_21_84_n_0), .A2
       (gt_21_84_n_99), .B0 (gt_21_84_n_77), .B1 (gt_21_84_n_88), .Y
       (gt_21_84_n_100));
  OAI211X1 gt_21_84_g1065(.A0 (gt_21_84_n_76), .A1 (gt_21_84_n_92), .B0
       (gt_21_84_n_90), .C0 (gt_21_84_n_98), .Y (gt_21_84_n_99));
  NAND4XL gt_21_84_g1066(.A (gt_21_84_n_97), .B (gt_21_84_n_39), .C
       (gt_21_84_n_47), .D (gt_21_84_n_55), .Y (gt_21_84_n_98));
  AOI21X1 gt_21_84_g1067(.A0 (gt_21_84_n_89), .A1 (gt_21_84_n_95), .B0
       (gt_21_84_n_76), .Y (gt_21_84_n_97));
  AOI221X1 gt_21_84_g1068(.A0 (in2[30]), .A1 (gt_21_84_n_58), .B0
       (gt_21_84_n_0), .B1 (gt_21_84_n_94), .C0 (gt_21_84_n_87), .Y
       (gt_21_84_n_96));
  NAND4XL gt_21_84_g1069(.A (gt_21_84_n_28), .B (gt_21_84_n_50), .C
       (gt_21_84_n_38), .D (gt_21_84_n_93), .Y (gt_21_84_n_95));
  OAI211X1 gt_21_84_g1070(.A0 (gt_21_84_n_75), .A1 (gt_21_84_n_91), .B0
       (gt_21_84_n_63), .C0 (gt_21_84_n_86), .Y (gt_21_84_n_94));
  OAI211X1 gt_21_84_g1071(.A0 (gt_21_84_n_10), .A1 (in1[3]), .B0
       (gt_21_84_n_65), .C0 (gt_21_84_n_85), .Y (gt_21_84_n_93));
  AOI221X1 gt_21_84_g1072(.A0 (in2[10]), .A1 (gt_21_84_n_62), .B0
       (gt_21_84_n_55), .B1 (gt_21_84_n_81), .C0 (gt_21_84_n_36), .Y
       (gt_21_84_n_92));
  AOI221X1 gt_21_84_g1073(.A0 (in2[18]), .A1 (gt_21_84_n_60), .B0
       (gt_21_84_n_51), .B1 (gt_21_84_n_78), .C0 (gt_21_84_n_27), .Y
       (gt_21_84_n_91));
  AOI221X1 gt_21_84_g1074(.A0 (in2[14]), .A1 (gt_21_84_n_61), .B0
       (gt_21_84_n_49), .B1 (gt_21_84_n_80), .C0 (gt_21_84_n_37), .Y
       (gt_21_84_n_90));
  AOI221X1 gt_21_84_g1075(.A0 (in2[6]), .A1 (gt_21_84_n_59), .B0
       (gt_21_84_n_50), .B1 (gt_21_84_n_74), .C0 (gt_21_84_n_40), .Y
       (gt_21_84_n_89));
  OAI221X1 gt_21_84_g1076(.A0 (gt_21_84_n_54), .A1 (gt_21_84_n_73), .B0
       (gt_21_84_n_2), .B1 (in1[27]), .C0 (gt_21_84_n_64), .Y
       (gt_21_84_n_88));
  AO22XL gt_21_84_g1077(.A0 (gt_21_84_n_52), .A1 (gt_21_84_n_79), .B0
       (in2[31]), .B1 (gt_21_84_n_1), .Y (gt_21_84_n_87));
  AOI22X1 gt_21_84_g1078(.A0 (gt_21_84_n_56), .A1 (gt_21_84_n_82), .B0
       (in2[23]), .B1 (gt_21_84_n_17), .Y (gt_21_84_n_86));
  OAI211X1 gt_21_84_g1080(.A0 (gt_21_84_n_5), .A1 (in2[2]), .B0
       (gt_21_84_n_34), .C0 (gt_21_84_n_83), .Y (gt_21_84_n_85));
  NOR2X1 gt_21_84_g1081(.A (gt_21_84_n_75), .B (gt_21_84_n_72), .Y
       (gt_21_84_n_84));
  OAI21X1 gt_21_84_g1082(.A0 (in1[1]), .A1 (gt_21_84_n_24), .B0
       (gt_21_84_n_71), .Y (gt_21_84_n_83));
  OAI32X1 gt_21_84_g1083(.A0 (gt_21_84_n_22), .A1 (in1[20]), .A2
       (gt_21_84_n_45), .B0 (gt_21_84_n_16), .B1 (in1[21]), .Y
       (gt_21_84_n_82));
  OAI2BB1X1 gt_21_84_g1084(.A0N (in2[9]), .A1N (gt_21_84_n_11), .B0
       (gt_21_84_n_67), .Y (gt_21_84_n_81));
  OAI32X1 gt_21_84_g1085(.A0 (gt_21_84_n_12), .A1 (in1[12]), .A2
       (gt_21_84_n_29), .B0 (gt_21_84_n_19), .B1 (in1[13]), .Y
       (gt_21_84_n_80));
  OAI32X1 gt_21_84_g1086(.A0 (gt_21_84_n_4), .A1 (in1[28]), .A2
       (gt_21_84_n_35), .B0 (gt_21_84_n_20), .B1 (in1[29]), .Y
       (gt_21_84_n_79));
  OAI32X1 gt_21_84_g1087(.A0 (gt_21_84_n_7), .A1 (in1[16]), .A2
       (gt_21_84_n_31), .B0 (gt_21_84_n_6), .B1 (in1[17]), .Y
       (gt_21_84_n_78));
  NAND2X1 gt_21_84_g1089(.A (gt_21_84_n_25), .B (gt_21_84_n_66), .Y
       (gt_21_84_n_74));
  AOI22X1 gt_21_84_g1090(.A0 (in2[24]), .A1 (gt_21_84_n_57), .B0
       (in2[25]), .B1 (gt_21_84_n_18), .Y (gt_21_84_n_73));
  OAI2BB1X1 gt_21_84_g1091(.A0N (in1[16]), .A1N (gt_21_84_n_7), .B0
       (gt_21_84_n_69), .Y (gt_21_84_n_72));
  AOI211XL gt_21_84_g1092(.A0 (in1[28]), .A1 (gt_21_84_n_4), .B0
       (gt_21_84_n_35), .C0 (gt_21_84_n_53), .Y (gt_21_84_n_77));
  OAI2BB1X1 gt_21_84_g1093(.A0N (in1[12]), .A1N (gt_21_84_n_12), .B0
       (gt_21_84_n_68), .Y (gt_21_84_n_76));
  OAI2BB1X1 gt_21_84_g1094(.A0N (in1[20]), .A1N (gt_21_84_n_22), .B0
       (gt_21_84_n_70), .Y (gt_21_84_n_75));
  OAI21X1 gt_21_84_g1095(.A0 (in2[0]), .A1 (gt_21_84_n_23), .B0
       (in2[1]), .Y (gt_21_84_n_71));
  NOR2BX1 gt_21_84_g1096(.AN (gt_21_84_n_56), .B (gt_21_84_n_45), .Y
       (gt_21_84_n_70));
  NOR2BX1 gt_21_84_g1097(.AN (gt_21_84_n_51), .B (gt_21_84_n_31), .Y
       (gt_21_84_n_69));
  NOR2BX1 gt_21_84_g1098(.AN (gt_21_84_n_49), .B (gt_21_84_n_29), .Y
       (gt_21_84_n_68));
  NAND3BXL gt_21_84_g1099(.AN (in1[8]), .B (in2[8]), .C
       (gt_21_84_n_47), .Y (gt_21_84_n_67));
  NAND3BXL gt_21_84_g1100(.AN (in1[4]), .B (in2[4]), .C
       (gt_21_84_n_28), .Y (gt_21_84_n_66));
  NAND3X1 gt_21_84_g1101(.A (in2[2]), .B (gt_21_84_n_5), .C
       (gt_21_84_n_34), .Y (gt_21_84_n_65));
  NAND3BXL gt_21_84_g1102(.AN (in1[26]), .B (in2[26]), .C
       (gt_21_84_n_44), .Y (gt_21_84_n_64));
  NAND3BXL gt_21_84_g1103(.AN (in1[22]), .B (in2[22]), .C
       (gt_21_84_n_33), .Y (gt_21_84_n_63));
  NOR2X1 gt_21_84_g1104(.A (in1[10]), .B (gt_21_84_n_43), .Y
       (gt_21_84_n_62));
  NOR2X1 gt_21_84_g1105(.A (in1[14]), .B (gt_21_84_n_41), .Y
       (gt_21_84_n_61));
  NOR2X1 gt_21_84_g1106(.A (in1[18]), .B (gt_21_84_n_48), .Y
       (gt_21_84_n_60));
  NOR2X1 gt_21_84_g1107(.A (in1[6]), .B (gt_21_84_n_32), .Y
       (gt_21_84_n_59));
  NOR2X1 gt_21_84_g1108(.A (in1[30]), .B (gt_21_84_n_30), .Y
       (gt_21_84_n_58));
  NOR2X1 gt_21_84_g1109(.A (in1[24]), .B (gt_21_84_n_42), .Y
       (gt_21_84_n_57));
  INVX1 gt_21_84_g1110(.A (gt_21_84_n_52), .Y (gt_21_84_n_53));
  OA21X1 gt_21_84_g1111(.A0 (gt_21_84_n_9), .A1 (in2[22]), .B0
       (gt_21_84_n_33), .Y (gt_21_84_n_56));
  AOI21X1 gt_21_84_g1112(.A0 (in1[10]), .A1 (gt_21_84_n_14), .B0
       (gt_21_84_n_43), .Y (gt_21_84_n_55));
  OAI2BB1X1 gt_21_84_g1113(.A0N (in1[26]), .A1N (gt_21_84_n_3), .B0
       (gt_21_84_n_44), .Y (gt_21_84_n_54));
  AOI21X1 gt_21_84_g1114(.A0 (in1[30]), .A1 (gt_21_84_n_21), .B0
       (gt_21_84_n_30), .Y (gt_21_84_n_52));
  AOI21X1 gt_21_84_g1115(.A0 (in1[18]), .A1 (gt_21_84_n_8), .B0
       (gt_21_84_n_48), .Y (gt_21_84_n_51));
  AOI21X1 gt_21_84_g1116(.A0 (in1[6]), .A1 (gt_21_84_n_15), .B0
       (gt_21_84_n_32), .Y (gt_21_84_n_50));
  AOI21X1 gt_21_84_g1117(.A0 (in1[14]), .A1 (gt_21_84_n_13), .B0
       (gt_21_84_n_41), .Y (gt_21_84_n_49));
  NOR2BX1 gt_21_84_g1118(.AN (in2[7]), .B (in1[7]), .Y (gt_21_84_n_40));
  NAND2BXL gt_21_84_g1119(.AN (in2[8]), .B (in1[8]), .Y
       (gt_21_84_n_39));
  NAND2BXL gt_21_84_g1120(.AN (in2[4]), .B (in1[4]), .Y
       (gt_21_84_n_38));
  NOR2BX1 gt_21_84_g1121(.AN (in2[15]), .B (in1[15]), .Y
       (gt_21_84_n_37));
  NOR2BX1 gt_21_84_g1122(.AN (in2[11]), .B (in1[11]), .Y
       (gt_21_84_n_36));
  NOR2BX1 gt_21_84_g1123(.AN (in1[19]), .B (in2[19]), .Y
       (gt_21_84_n_48));
  NAND2BXL gt_21_84_g1124(.AN (in2[9]), .B (in1[9]), .Y
       (gt_21_84_n_47));
  NOR2X1 gt_21_84_g1125(.A (gt_21_84_n_1), .B (in2[32]), .Y
       (gt_21_84_n_46));
  NOR2BX1 gt_21_84_g1126(.AN (in1[21]), .B (in2[21]), .Y
       (gt_21_84_n_45));
  NAND2X1 gt_21_84_g1127(.A (in1[27]), .B (gt_21_84_n_2), .Y
       (gt_21_84_n_44));
  NOR2BX1 gt_21_84_g1128(.AN (in1[11]), .B (in2[11]), .Y
       (gt_21_84_n_43));
  NOR2X1 gt_21_84_g1129(.A (gt_21_84_n_18), .B (in2[25]), .Y
       (gt_21_84_n_42));
  NOR2BX1 gt_21_84_g1130(.AN (in1[15]), .B (in2[15]), .Y
       (gt_21_84_n_41));
  NOR2BX1 gt_21_84_g1131(.AN (in2[19]), .B (in1[19]), .Y
       (gt_21_84_n_27));
  NOR2BX1 gt_21_84_g1132(.AN (in1[24]), .B (in2[24]), .Y
       (gt_21_84_n_26));
  NAND2BX1 gt_21_84_g1133(.AN (in1[5]), .B (in2[5]), .Y
       (gt_21_84_n_25));
  NOR2BX1 gt_21_84_g1134(.AN (in1[0]), .B (in2[0]), .Y (gt_21_84_n_24));
  NAND2X1 gt_21_84_g1135(.A (in1[1]), .B (in1[0]), .Y (gt_21_84_n_23));
  NOR2BX1 gt_21_84_g1136(.AN (in1[29]), .B (in2[29]), .Y
       (gt_21_84_n_35));
  NAND2X1 gt_21_84_g1137(.A (in1[3]), .B (gt_21_84_n_10), .Y
       (gt_21_84_n_34));
  NAND2BXL gt_21_84_g1138(.AN (in2[23]), .B (in1[23]), .Y
       (gt_21_84_n_33));
  NOR2BX1 gt_21_84_g1139(.AN (in1[7]), .B (in2[7]), .Y (gt_21_84_n_32));
  NOR2BX1 gt_21_84_g1140(.AN (in1[17]), .B (in2[17]), .Y
       (gt_21_84_n_31));
  NOR2X1 gt_21_84_g1141(.A (gt_21_84_n_1), .B (in2[31]), .Y
       (gt_21_84_n_30));
  NOR2BX1 gt_21_84_g1142(.AN (in1[13]), .B (in2[13]), .Y
       (gt_21_84_n_29));
  NAND2BXL gt_21_84_g1143(.AN (in2[5]), .B (in1[5]), .Y
       (gt_21_84_n_28));
  INVX1 gt_21_84_g1144(.A (in2[20]), .Y (gt_21_84_n_22));
  INVX1 gt_21_84_g1145(.A (in2[30]), .Y (gt_21_84_n_21));
  INVX1 gt_21_84_g1146(.A (in2[29]), .Y (gt_21_84_n_20));
  INVX1 gt_21_84_g1147(.A (in2[13]), .Y (gt_21_84_n_19));
  INVX1 gt_21_84_g1148(.A (in1[25]), .Y (gt_21_84_n_18));
  INVX1 gt_21_84_g1149(.A (in1[23]), .Y (gt_21_84_n_17));
  INVX1 gt_21_84_g1150(.A (in2[21]), .Y (gt_21_84_n_16));
  INVX1 gt_21_84_g1151(.A (in2[6]), .Y (gt_21_84_n_15));
  INVX1 gt_21_84_g1152(.A (in2[10]), .Y (gt_21_84_n_14));
  INVX1 gt_21_84_g1153(.A (in2[14]), .Y (gt_21_84_n_13));
  INVX1 gt_21_84_g1154(.A (in2[12]), .Y (gt_21_84_n_12));
  INVXL gt_21_84_g1155(.A (in1[9]), .Y (gt_21_84_n_11));
  INVX1 gt_21_84_g1156(.A (in2[3]), .Y (gt_21_84_n_10));
  INVXL gt_21_84_g1157(.A (in1[22]), .Y (gt_21_84_n_9));
  INVX1 gt_21_84_g1158(.A (in2[18]), .Y (gt_21_84_n_8));
  INVX1 gt_21_84_g1159(.A (in2[16]), .Y (gt_21_84_n_7));
  INVX1 gt_21_84_g1160(.A (in2[17]), .Y (gt_21_84_n_6));
  INVX1 gt_21_84_g1161(.A (in1[2]), .Y (gt_21_84_n_5));
  INVX1 gt_21_84_g1162(.A (in2[28]), .Y (gt_21_84_n_4));
  INVX1 gt_21_84_g1163(.A (in2[26]), .Y (gt_21_84_n_3));
  INVX1 gt_21_84_g1164(.A (in2[27]), .Y (gt_21_84_n_2));
  INVX1 gt_21_84_g1165(.A (in1[31]), .Y (gt_21_84_n_1));
  NOR4BX1 gt_21_84_g2(.AN (gt_21_84_n_77), .B (gt_21_84_n_42), .C
       (gt_21_84_n_54), .D (gt_21_84_n_26), .Y (gt_21_84_n_0));
endmodule

