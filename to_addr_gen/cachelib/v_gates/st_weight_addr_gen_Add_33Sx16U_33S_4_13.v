`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:35:38 KST (Jan 20 2021 09:35:38 UTC)

module st_weight_addr_gen_Add_33Sx16U_33S_4_13(in2, in1, out1);
  input [32:0] in2;
  input [15:0] in1;
  output [32:0] out1;
  wire [32:0] in2;
  wire [15:0] in1;
  wire [32:0] out1;
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
       add_23_2_n_60, add_23_2_n_61, add_23_2_n_62, add_23_2_n_64;
  wire add_23_2_n_65, add_23_2_n_66, add_23_2_n_67, add_23_2_n_69,
       add_23_2_n_70, add_23_2_n_72, add_23_2_n_73, add_23_2_n_74;
  wire add_23_2_n_76, add_23_2_n_77, add_23_2_n_79, add_23_2_n_80,
       add_23_2_n_81, add_23_2_n_84, add_23_2_n_85, add_23_2_n_86;
  wire add_23_2_n_89, add_23_2_n_90, add_23_2_n_91, add_23_2_n_92,
       add_23_2_n_93, add_23_2_n_97, add_23_2_n_98, add_23_2_n_99;
  wire add_23_2_n_100, add_23_2_n_101, add_23_2_n_102, add_23_2_n_103,
       add_23_2_n_105, add_23_2_n_106, add_23_2_n_107, add_23_2_n_113;
  wire add_23_2_n_114, add_23_2_n_115, add_23_2_n_116, add_23_2_n_118,
       add_23_2_n_119, add_23_2_n_120, add_23_2_n_122, add_23_2_n_125;
  wire add_23_2_n_126, add_23_2_n_127, add_23_2_n_132;
  XNOR2X1 add_23_2_g990(.A (in2[31]), .B (add_23_2_n_132), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g991(.A (in2[29]), .B (add_23_2_n_126), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g992(.A (in2[27]), .B (add_23_2_n_125), .Y
       (out1[27]));
  XNOR2X1 add_23_2_g993(.A (in2[25]), .B (add_23_2_n_118), .Y
       (out1[25]));
  XNOR2X1 add_23_2_g994(.A (in2[32]), .B (add_23_2_n_122), .Y
       (out1[32]));
  XNOR2X1 add_23_2_g995(.A (in2[23]), .B (add_23_2_n_116), .Y
       (out1[23]));
  XNOR2X1 add_23_2_g996(.A (in2[30]), .B (add_23_2_n_127), .Y
       (out1[30]));
  NAND2BX1 add_23_2_g997(.AN (add_23_2_n_127), .B (in2[30]), .Y
       (add_23_2_n_132));
  XNOR2X1 add_23_2_g998(.A (in2[21]), .B (add_23_2_n_106), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g999(.A (in2[19]), .B (add_23_2_n_105), .Y
       (out1[19]));
  XOR2XL add_23_2_g1000(.A (in2[28]), .B (add_23_2_n_120), .Y
       (out1[28]));
  XOR2XL add_23_2_g1001(.A (in2[26]), .B (add_23_2_n_119), .Y
       (out1[26]));
  NAND2BX1 add_23_2_g1002(.AN (add_23_2_n_11), .B (add_23_2_n_120), .Y
       (add_23_2_n_127));
  NAND2X1 add_23_2_g1003(.A (in2[28]), .B (add_23_2_n_120), .Y
       (add_23_2_n_126));
  NAND2X1 add_23_2_g1004(.A (in2[26]), .B (add_23_2_n_119), .Y
       (add_23_2_n_125));
  XNOR2X1 add_23_2_g1005(.A (in2[24]), .B (add_23_2_n_114), .Y
       (out1[24]));
  XNOR2X1 add_23_2_g1006(.A (in2[17]), .B (add_23_2_n_100), .Y
       (out1[17]));
  NAND4XL add_23_2_g1007(.A (in2[30]), .B (add_23_2_n_65), .C
       (in2[31]), .D (add_23_2_n_113), .Y (add_23_2_n_122));
  XNOR2X1 add_23_2_g1008(.A (add_23_2_n_40), .B (add_23_2_n_115), .Y
       (out1[15]));
  NOR2X1 add_23_2_g1009(.A (add_23_2_n_57), .B (add_23_2_n_114), .Y
       (add_23_2_n_120));
  NOR2X1 add_23_2_g1010(.A (add_23_2_n_10), .B (add_23_2_n_114), .Y
       (add_23_2_n_119));
  NAND2X1 add_23_2_g1011(.A (in2[24]), .B (add_23_2_n_113), .Y
       (add_23_2_n_118));
  XNOR2X1 add_23_2_g1012(.A (in2[22]), .B (add_23_2_n_107), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g1013(.AN (add_23_2_n_107), .B (in2[22]), .Y
       (add_23_2_n_116));
  OAI21X1 add_23_2_g1014(.A0 (add_23_2_n_4), .A1 (add_23_2_n_99), .B0
       (add_23_2_n_22), .Y (add_23_2_n_115));
  INVX1 add_23_2_g1015(.A (add_23_2_n_114), .Y (add_23_2_n_113));
  NAND4XL add_23_2_g1016(.A (in2[23]), .B (add_23_2_n_15), .C
       (in2[22]), .D (add_23_2_n_101), .Y (add_23_2_n_114));
  XNOR2X1 add_23_2_g1017(.A (add_23_2_n_36), .B (add_23_2_n_99), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g1018(.A (add_23_2_n_35), .B (add_23_2_n_98), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g1019(.A (add_23_2_n_38), .B (add_23_2_n_97), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g1020(.A (in2[20]), .B (add_23_2_n_103), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g1021(.A (in2[18]), .B (add_23_2_n_102), .Y
       (out1[18]));
  NAND2BX1 add_23_2_g1022(.AN (add_23_2_n_103), .B (add_23_2_n_15), .Y
       (add_23_2_n_107));
  NAND2BX1 add_23_2_g1023(.AN (add_23_2_n_103), .B (in2[20]), .Y
       (add_23_2_n_106));
  NAND2BX1 add_23_2_g1024(.AN (add_23_2_n_102), .B (in2[18]), .Y
       (add_23_2_n_105));
  XNOR2X1 add_23_2_g1025(.A (in2[16]), .B (add_23_2_n_93), .Y
       (out1[16]));
  OR2XL add_23_2_g1026(.A (add_23_2_n_54), .B (add_23_2_n_93), .Y
       (add_23_2_n_103));
  OR2XL add_23_2_g1027(.A (add_23_2_n_28), .B (add_23_2_n_93), .Y
       (add_23_2_n_102));
  NOR2X1 add_23_2_g1028(.A (add_23_2_n_54), .B (add_23_2_n_93), .Y
       (add_23_2_n_101));
  NAND2X1 add_23_2_g1029(.A (in2[16]), .B (add_23_2_n_92), .Y
       (add_23_2_n_100));
  AOI21X1 add_23_2_g1030(.A0 (add_23_2_n_52), .A1 (add_23_2_n_90), .B0
       (add_23_2_n_56), .Y (add_23_2_n_99));
  OAI2BB1X1 add_23_2_g1031(.A0N (add_23_2_n_27), .A1N (add_23_2_n_90),
       .B0 (add_23_2_n_8), .Y (add_23_2_n_98));
  OAI21X1 add_23_2_g1032(.A0 (add_23_2_n_25), .A1 (add_23_2_n_91), .B0
       (add_23_2_n_21), .Y (add_23_2_n_97));
  XNOR2X1 add_23_2_g1033(.A (add_23_2_n_34), .B (add_23_2_n_90), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g1034(.A (add_23_2_n_39), .B (add_23_2_n_91), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g1035(.A (add_23_2_n_33), .B (add_23_2_n_89), .Y
       (out1[9]));
  INVX1 add_23_2_g1036(.A (add_23_2_n_92), .Y (add_23_2_n_93));
  OAI31X1 add_23_2_g1037(.A0 (add_23_2_n_61), .A1 (add_23_2_n_60), .A2
       (add_23_2_n_85), .B0 (add_23_2_n_72), .Y (add_23_2_n_92));
  AOI21X1 add_23_2_g1038(.A0 (add_23_2_n_51), .A1 (add_23_2_n_84), .B0
       (add_23_2_n_59), .Y (add_23_2_n_91));
  OAI211X1 add_23_2_g1039(.A0 (add_23_2_n_61), .A1 (add_23_2_n_85), .B0
       (add_23_2_n_58), .C0 (add_23_2_n_66), .Y (add_23_2_n_90));
  OAI21X1 add_23_2_g1040(.A0 (add_23_2_n_1), .A1 (add_23_2_n_85), .B0
       (add_23_2_n_18), .Y (add_23_2_n_89));
  XNOR2X1 add_23_2_g1041(.A (add_23_2_n_47), .B (add_23_2_n_85), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1042(.A (add_23_2_n_48), .B (add_23_2_n_86), .Y
       (out1[7]));
  OAI21X1 add_23_2_g1043(.A0 (add_23_2_n_17), .A1 (add_23_2_n_79), .B0
       (add_23_2_n_9), .Y (add_23_2_n_86));
  INVX1 add_23_2_g1044(.A (add_23_2_n_84), .Y (add_23_2_n_85));
  OAI211X1 add_23_2_g1045(.A0 (add_23_2_n_9), .A1 (add_23_2_n_5), .B0
       (add_23_2_n_81), .C0 (add_23_2_n_64), .Y (add_23_2_n_84));
  XNOR2X1 add_23_2_g1046(.A (add_23_2_n_37), .B (add_23_2_n_79), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1047(.A (add_23_2_n_45), .B (add_23_2_n_80), .Y
       (out1[5]));
  AOI31X1 add_23_2_g1048(.A0 (add_23_2_n_41), .A1 (add_23_2_n_42), .A2
       (add_23_2_n_76), .B0 (add_23_2_n_16), .Y (add_23_2_n_81));
  OAI21X1 add_23_2_g1049(.A0 (add_23_2_n_0), .A1 (add_23_2_n_77), .B0
       (add_23_2_n_24), .Y (add_23_2_n_80));
  AOI21X1 add_23_2_g1050(.A0 (add_23_2_n_41), .A1 (add_23_2_n_76), .B0
       (add_23_2_n_55), .Y (add_23_2_n_79));
  XNOR2X1 add_23_2_g1051(.A (add_23_2_n_46), .B (add_23_2_n_77), .Y
       (out1[4]));
  INVX1 add_23_2_g1052(.A (add_23_2_n_76), .Y (add_23_2_n_77));
  OAI21X1 add_23_2_g1053(.A0 (add_23_2_n_12), .A1 (add_23_2_n_73), .B0
       (add_23_2_n_32), .Y (add_23_2_n_76));
  XNOR2X1 add_23_2_g1054(.A (add_23_2_n_49), .B (add_23_2_n_74), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g1055(.A0N (add_23_2_n_20), .A1N (add_23_2_n_69),
       .B0 (add_23_2_n_3), .Y (add_23_2_n_74));
  AOI21X1 add_23_2_g1056(.A0 (add_23_2_n_20), .A1 (add_23_2_n_69), .B0
       (add_23_2_n_2), .Y (add_23_2_n_73));
  AOI211XL add_23_2_g1057(.A0 (add_23_2_n_43), .A1 (add_23_2_n_56), .B0
       (add_23_2_n_70), .C0 (add_23_2_n_50), .Y (add_23_2_n_72));
  XNOR2X1 add_23_2_g1058(.A (add_23_2_n_44), .B (add_23_2_n_69), .Y
       (out1[2]));
  OAI21XL add_23_2_g1059(.A0 (add_23_2_n_60), .A1 (add_23_2_n_67), .B0
       (add_23_2_n_29), .Y (add_23_2_n_70));
  ADDFX1 add_23_2_g1060(.A (add_23_2_n_62), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_69), .S (out1[1]));
  AND2XL add_23_2_g1061(.A (add_23_2_n_58), .B (add_23_2_n_66), .Y
       (add_23_2_n_67));
  NAND2X1 add_23_2_g1062(.A (add_23_2_n_53), .B (add_23_2_n_59), .Y
       (add_23_2_n_66));
  NOR2XL add_23_2_g1063(.A (add_23_2_n_11), .B (add_23_2_n_57), .Y
       (add_23_2_n_65));
  NAND2X1 add_23_2_g1064(.A (add_23_2_n_42), .B (add_23_2_n_55), .Y
       (add_23_2_n_64));
  ADDHX1 add_23_2_g1065(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_62),
       .S (out1[0]));
  NAND2X1 add_23_2_g1066(.A (add_23_2_n_53), .B (add_23_2_n_51), .Y
       (add_23_2_n_61));
  NAND2X1 add_23_2_g1067(.A (add_23_2_n_43), .B (add_23_2_n_52), .Y
       (add_23_2_n_60));
  OAI21X1 add_23_2_g1068(.A0 (add_23_2_n_18), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_31), .Y (add_23_2_n_59));
  OA21X1 add_23_2_g1069(.A0 (add_23_2_n_21), .A1 (add_23_2_n_26), .B0
       (add_23_2_n_13), .Y (add_23_2_n_58));
  NAND3BXL add_23_2_g1070(.AN (add_23_2_n_10), .B (in2[26]), .C
       (in2[27]), .Y (add_23_2_n_57));
  OAI21X1 add_23_2_g1071(.A0 (add_23_2_n_8), .A1 (add_23_2_n_6), .B0
       (add_23_2_n_14), .Y (add_23_2_n_56));
  OAI21X1 add_23_2_g1072(.A0 (add_23_2_n_24), .A1 (add_23_2_n_7), .B0
       (add_23_2_n_30), .Y (add_23_2_n_55));
  NAND3BXL add_23_2_g1073(.AN (add_23_2_n_28), .B (in2[18]), .C
       (in2[19]), .Y (add_23_2_n_54));
  NOR2X1 add_23_2_g1074(.A (add_23_2_n_22), .B (add_23_2_n_23), .Y
       (add_23_2_n_50));
  NAND2BX1 add_23_2_g1075(.AN (add_23_2_n_12), .B (add_23_2_n_32), .Y
       (add_23_2_n_49));
  OR2XL add_23_2_g1076(.A (add_23_2_n_16), .B (add_23_2_n_5), .Y
       (add_23_2_n_48));
  NOR2BX1 add_23_2_g1077(.AN (add_23_2_n_18), .B (add_23_2_n_1), .Y
       (add_23_2_n_47));
  NOR2X1 add_23_2_g1078(.A (add_23_2_n_26), .B (add_23_2_n_25), .Y
       (add_23_2_n_53));
  NOR2BX1 add_23_2_g1079(.AN (add_23_2_n_27), .B (add_23_2_n_6), .Y
       (add_23_2_n_52));
  NOR2BX1 add_23_2_g1080(.AN (add_23_2_n_24), .B (add_23_2_n_0), .Y
       (add_23_2_n_46));
  NAND2BX1 add_23_2_g1081(.AN (add_23_2_n_7), .B (add_23_2_n_30), .Y
       (add_23_2_n_45));
  NAND2X1 add_23_2_g1082(.A (add_23_2_n_3), .B (add_23_2_n_20), .Y
       (add_23_2_n_44));
  NOR2X1 add_23_2_g1083(.A (add_23_2_n_19), .B (add_23_2_n_1), .Y
       (add_23_2_n_51));
  NAND2BX1 add_23_2_g1084(.AN (add_23_2_n_23), .B (add_23_2_n_29), .Y
       (add_23_2_n_40));
  NOR2BX1 add_23_2_g1085(.AN (add_23_2_n_21), .B (add_23_2_n_25), .Y
       (add_23_2_n_39));
  NOR2X1 add_23_2_g1086(.A (add_23_2_n_23), .B (add_23_2_n_4), .Y
       (add_23_2_n_43));
  NAND2BX1 add_23_2_g1087(.AN (add_23_2_n_26), .B (add_23_2_n_13), .Y
       (add_23_2_n_38));
  NOR2X1 add_23_2_g1088(.A (add_23_2_n_5), .B (add_23_2_n_17), .Y
       (add_23_2_n_42));
  NOR2BX1 add_23_2_g1089(.AN (add_23_2_n_9), .B (add_23_2_n_17), .Y
       (add_23_2_n_37));
  NOR2BX1 add_23_2_g1090(.AN (add_23_2_n_22), .B (add_23_2_n_4), .Y
       (add_23_2_n_36));
  NAND2BX1 add_23_2_g1091(.AN (add_23_2_n_6), .B (add_23_2_n_14), .Y
       (add_23_2_n_35));
  NAND2X1 add_23_2_g1092(.A (add_23_2_n_8), .B (add_23_2_n_27), .Y
       (add_23_2_n_34));
  NOR2X1 add_23_2_g1093(.A (add_23_2_n_7), .B (add_23_2_n_0), .Y
       (add_23_2_n_41));
  NAND2BX1 add_23_2_g1094(.AN (add_23_2_n_19), .B (add_23_2_n_31), .Y
       (add_23_2_n_33));
  NAND2X1 add_23_2_g1095(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_32));
  NAND2X1 add_23_2_g1096(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_31));
  NAND2X1 add_23_2_g1097(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_30));
  NAND2X1 add_23_2_g1098(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g1099(.A (in2[17]), .B (in2[16]), .Y
       (add_23_2_n_28));
  OR2X1 add_23_2_g1100(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_27));
  NOR2X1 add_23_2_g1101(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_26));
  NOR2X1 add_23_2_g1102(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_25));
  NAND2X1 add_23_2_g1103(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_24));
  NOR2X1 add_23_2_g1104(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_23));
  NAND2X1 add_23_2_g1105(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_22));
  NAND2X1 add_23_2_g1106(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_21));
  OR2X1 add_23_2_g1107(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_20));
  NOR2X1 add_23_2_g1108(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_19));
  NAND2X1 add_23_2_g1109(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_18));
  NOR2X1 add_23_2_g1110(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_17));
  INVX1 add_23_2_g1111(.A (add_23_2_n_3), .Y (add_23_2_n_2));
  AND2XL add_23_2_g1112(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_16));
  AND2XL add_23_2_g1113(.A (in2[21]), .B (in2[20]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g1114(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_14));
  NAND2X1 add_23_2_g1115(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_13));
  NOR2X1 add_23_2_g1116(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g1117(.A (in2[29]), .B (in2[28]), .Y
       (add_23_2_n_11));
  NAND2X1 add_23_2_g1118(.A (in2[25]), .B (in2[24]), .Y
       (add_23_2_n_10));
  NAND2X1 add_23_2_g1119(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g1120(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g1121(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1122(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1123(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1124(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g1125(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g1126(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_1));
  NOR2X1 add_23_2_g1127(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_0));
endmodule


