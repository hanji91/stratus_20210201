`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 14 2020 14:04:01 KST (Dec 14 2020 05:04:01 UTC)

module bn_addr_gen_Add_32Ux18U_32U_4(in2, in1, out1);
  input [31:0] in2;
  input [17:0] in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire [17:0] in1;
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
       add_23_2_n_68, add_23_2_n_70, add_23_2_n_71, add_23_2_n_72;
  wire add_23_2_n_73, add_23_2_n_75, add_23_2_n_76, add_23_2_n_78,
       add_23_2_n_79, add_23_2_n_80, add_23_2_n_82, add_23_2_n_83;
  wire add_23_2_n_85, add_23_2_n_86, add_23_2_n_87, add_23_2_n_90,
       add_23_2_n_91, add_23_2_n_92, add_23_2_n_95, add_23_2_n_96;
  wire add_23_2_n_97, add_23_2_n_98, add_23_2_n_99, add_23_2_n_103,
       add_23_2_n_104, add_23_2_n_105, add_23_2_n_107, add_23_2_n_108;
  wire add_23_2_n_109, add_23_2_n_110, add_23_2_n_114, add_23_2_n_115,
       add_23_2_n_116, add_23_2_n_117, add_23_2_n_120, add_23_2_n_121;
  wire add_23_2_n_123, add_23_2_n_126, add_23_2_n_127, add_23_2_n_129,
       add_23_2_n_130, add_23_2_n_134, add_23_2_n_137, add_23_2_n_139;
  XNOR2X1 add_23_2_g1000(.A (in2[31]), .B (add_23_2_n_139), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g1001(.A (in2[29]), .B (add_23_2_n_134), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g1002(.A (in2[30]), .B (add_23_2_n_137), .Y
       (out1[30]));
  XNOR2X1 add_23_2_g1003(.A (in2[27]), .B (add_23_2_n_130), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g1004(.AN (add_23_2_n_137), .B (in2[30]), .Y
       (add_23_2_n_139));
  XNOR2X1 add_23_2_g1005(.A (in2[25]), .B (add_23_2_n_126), .Y
       (out1[25]));
  NAND3BXL add_23_2_g1006(.AN (add_23_2_n_129), .B (in2[28]), .C
       (in2[29]), .Y (add_23_2_n_137));
  XNOR2X1 add_23_2_g1007(.A (in2[28]), .B (add_23_2_n_129), .Y
       (out1[28]));
  XNOR2X1 add_23_2_g1008(.A (in2[23]), .B (add_23_2_n_123), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g1009(.AN (add_23_2_n_129), .B (in2[28]), .Y
       (add_23_2_n_134));
  XNOR2X1 add_23_2_g1010(.A (in2[21]), .B (add_23_2_n_115), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g1011(.A (in2[19]), .B (add_23_2_n_116), .Y
       (out1[19]));
  XOR2XL add_23_2_g1012(.A (in2[26]), .B (add_23_2_n_127), .Y
       (out1[26]));
  NAND2X1 add_23_2_g1013(.A (in2[26]), .B (add_23_2_n_127), .Y
       (add_23_2_n_130));
  NAND4XL add_23_2_g1014(.A (in2[27]), .B (in2[26]), .C
       (add_23_2_n_13), .D (add_23_2_n_120), .Y (add_23_2_n_129));
  MXI2XL add_23_2_g1015(.A (add_23_2_n_121), .B (add_23_2_n_120), .S0
       (in2[24]), .Y (out1[24]));
  NOR2BX1 add_23_2_g1016(.AN (add_23_2_n_13), .B (add_23_2_n_121), .Y
       (add_23_2_n_127));
  NAND2X1 add_23_2_g1017(.A (in2[24]), .B (add_23_2_n_120), .Y
       (add_23_2_n_126));
  XNOR2X1 add_23_2_g1018(.A (add_23_2_n_41), .B (add_23_2_n_114), .Y
       (out1[15]));
  XOR2XL add_23_2_g1019(.A (in2[22]), .B (add_23_2_n_117), .Y
       (out1[22]));
  NAND2X1 add_23_2_g1020(.A (in2[22]), .B (add_23_2_n_117), .Y
       (add_23_2_n_123));
  XNOR2X1 add_23_2_g1021(.A (in2[18]), .B (add_23_2_n_110), .Y
       (out1[18]));
  INVX1 add_23_2_g1022(.A (add_23_2_n_121), .Y (add_23_2_n_120));
  NAND4XL add_23_2_g1023(.A (in2[23]), .B (add_23_2_n_17), .C
       (in2[22]), .D (add_23_2_n_107), .Y (add_23_2_n_121));
  XNOR2X1 add_23_2_g1024(.A (in2[20]), .B (add_23_2_n_108), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g1025(.A (add_23_2_n_36), .B (add_23_2_n_109), .Y
       (out1[17]));
  NOR2BX1 add_23_2_g1026(.AN (add_23_2_n_17), .B (add_23_2_n_108), .Y
       (add_23_2_n_117));
  NAND2BX1 add_23_2_g1027(.AN (add_23_2_n_110), .B (in2[18]), .Y
       (add_23_2_n_116));
  NAND2BX1 add_23_2_g1028(.AN (add_23_2_n_108), .B (in2[20]), .Y
       (add_23_2_n_115));
  OAI21X1 add_23_2_g1029(.A0 (add_23_2_n_11), .A1 (add_23_2_n_105), .B0
       (add_23_2_n_4), .Y (add_23_2_n_114));
  XNOR2X1 add_23_2_g1030(.A (add_23_2_n_43), .B (add_23_2_n_105), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g1031(.A (add_23_2_n_38), .B (add_23_2_n_104), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g1032(.A (add_23_2_n_37), .B (add_23_2_n_103), .Y
       (out1[11]));
  AOI21X1 add_23_2_g1033(.A0 (add_23_2_n_57), .A1 (add_23_2_n_99), .B0
       (add_23_2_n_60), .Y (add_23_2_n_110));
  OAI21X1 add_23_2_g1034(.A0 (add_23_2_n_29), .A1 (add_23_2_n_98), .B0
       (add_23_2_n_23), .Y (add_23_2_n_109));
  AOI21X1 add_23_2_g1035(.A0 (add_23_2_n_67), .A1 (add_23_2_n_99), .B0
       (add_23_2_n_70), .Y (add_23_2_n_108));
  AO21XL add_23_2_g1036(.A0 (add_23_2_n_67), .A1 (add_23_2_n_99), .B0
       (add_23_2_n_70), .Y (add_23_2_n_107));
  XNOR2X1 add_23_2_g1037(.A (add_23_2_n_42), .B (add_23_2_n_99), .Y
       (out1[16]));
  AOI21X1 add_23_2_g1038(.A0 (add_23_2_n_59), .A1 (add_23_2_n_97), .B0
       (add_23_2_n_61), .Y (add_23_2_n_105));
  OAI2BB1X1 add_23_2_g1039(.A0N (add_23_2_n_22), .A1N (add_23_2_n_97),
       .B0 (add_23_2_n_1), .Y (add_23_2_n_104));
  OAI21X1 add_23_2_g1040(.A0 (add_23_2_n_21), .A1 (add_23_2_n_96), .B0
       (add_23_2_n_3), .Y (add_23_2_n_103));
  XNOR2X1 add_23_2_g1041(.A (add_23_2_n_39), .B (add_23_2_n_97), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g1042(.A (add_23_2_n_48), .B (add_23_2_n_96), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g1043(.A (add_23_2_n_54), .B (add_23_2_n_95), .Y
       (out1[9]));
  INVX1 add_23_2_g1044(.A (add_23_2_n_99), .Y (add_23_2_n_98));
  OAI31X1 add_23_2_g1045(.A0 (add_23_2_n_65), .A1 (add_23_2_n_66), .A2
       (add_23_2_n_91), .B0 (add_23_2_n_78), .Y (add_23_2_n_99));
  OAI211X1 add_23_2_g1046(.A0 (add_23_2_n_65), .A1 (add_23_2_n_91), .B0
       (add_23_2_n_64), .C0 (add_23_2_n_72), .Y (add_23_2_n_97));
  AOI21X1 add_23_2_g1047(.A0 (add_23_2_n_46), .A1 (add_23_2_n_90), .B0
       (add_23_2_n_63), .Y (add_23_2_n_96));
  OAI21X1 add_23_2_g1048(.A0 (add_23_2_n_6), .A1 (add_23_2_n_91), .B0
       (add_23_2_n_18), .Y (add_23_2_n_95));
  XNOR2X1 add_23_2_g1049(.A (add_23_2_n_40), .B (add_23_2_n_91), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1050(.A (add_23_2_n_50), .B (add_23_2_n_92), .Y
       (out1[7]));
  OAI21X1 add_23_2_g1051(.A0 (add_23_2_n_7), .A1 (add_23_2_n_86), .B0
       (add_23_2_n_5), .Y (add_23_2_n_92));
  INVX1 add_23_2_g1052(.A (add_23_2_n_90), .Y (add_23_2_n_91));
  OAI211X1 add_23_2_g1053(.A0 (add_23_2_n_5), .A1 (add_23_2_n_10), .B0
       (add_23_2_n_87), .C0 (add_23_2_n_71), .Y (add_23_2_n_90));
  XNOR2X1 add_23_2_g1054(.A (add_23_2_n_53), .B (add_23_2_n_86), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1055(.A (add_23_2_n_51), .B (add_23_2_n_85), .Y
       (out1[5]));
  AOI31X1 add_23_2_g1056(.A0 (add_23_2_n_47), .A1 (add_23_2_n_45), .A2
       (add_23_2_n_82), .B0 (add_23_2_n_12), .Y (add_23_2_n_87));
  AOI21X1 add_23_2_g1057(.A0 (add_23_2_n_47), .A1 (add_23_2_n_82), .B0
       (add_23_2_n_62), .Y (add_23_2_n_86));
  OAI21X1 add_23_2_g1058(.A0 (add_23_2_n_26), .A1 (add_23_2_n_83), .B0
       (add_23_2_n_25), .Y (add_23_2_n_85));
  XNOR2X1 add_23_2_g1059(.A (add_23_2_n_49), .B (add_23_2_n_83), .Y
       (out1[4]));
  INVX1 add_23_2_g1060(.A (add_23_2_n_82), .Y (add_23_2_n_83));
  OAI21X1 add_23_2_g1061(.A0 (add_23_2_n_14), .A1 (add_23_2_n_79), .B0
       (add_23_2_n_35), .Y (add_23_2_n_82));
  XNOR2X1 add_23_2_g1062(.A (add_23_2_n_44), .B (add_23_2_n_80), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g1063(.A0N (add_23_2_n_19), .A1N (add_23_2_n_75),
       .B0 (add_23_2_n_28), .Y (add_23_2_n_80));
  AOI21X1 add_23_2_g1064(.A0 (add_23_2_n_19), .A1 (add_23_2_n_75), .B0
       (add_23_2_n_27), .Y (add_23_2_n_79));
  AOI211XL add_23_2_g1065(.A0 (add_23_2_n_56), .A1 (add_23_2_n_61), .B0
       (add_23_2_n_76), .C0 (add_23_2_n_55), .Y (add_23_2_n_78));
  XNOR2X1 add_23_2_g1066(.A (add_23_2_n_52), .B (add_23_2_n_75), .Y
       (out1[2]));
  OAI21XL add_23_2_g1067(.A0 (add_23_2_n_66), .A1 (add_23_2_n_73), .B0
       (add_23_2_n_32), .Y (add_23_2_n_76));
  ADDFX1 add_23_2_g1068(.A (add_23_2_n_68), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_75), .S (out1[1]));
  AND2XL add_23_2_g1069(.A (add_23_2_n_64), .B (add_23_2_n_72), .Y
       (add_23_2_n_73));
  NAND2X1 add_23_2_g1070(.A (add_23_2_n_58), .B (add_23_2_n_63), .Y
       (add_23_2_n_72));
  NAND2X1 add_23_2_g1071(.A (add_23_2_n_45), .B (add_23_2_n_62), .Y
       (add_23_2_n_71));
  NOR2BX1 add_23_2_g1072(.AN (add_23_2_n_60), .B (add_23_2_n_34), .Y
       (add_23_2_n_70));
  ADDHX1 add_23_2_g1073(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_68),
       .S (out1[0]));
  NOR2BX1 add_23_2_g1074(.AN (add_23_2_n_57), .B (add_23_2_n_34), .Y
       (add_23_2_n_67));
  NAND2X1 add_23_2_g1075(.A (add_23_2_n_56), .B (add_23_2_n_59), .Y
       (add_23_2_n_66));
  NAND2X1 add_23_2_g1076(.A (add_23_2_n_58), .B (add_23_2_n_46), .Y
       (add_23_2_n_65));
  OA21X1 add_23_2_g1077(.A0 (add_23_2_n_3), .A1 (add_23_2_n_8), .B0
       (add_23_2_n_33), .Y (add_23_2_n_64));
  OAI21X1 add_23_2_g1078(.A0 (add_23_2_n_18), .A1 (add_23_2_n_0), .B0
       (add_23_2_n_31), .Y (add_23_2_n_63));
  OAI21X1 add_23_2_g1079(.A0 (add_23_2_n_25), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_30), .Y (add_23_2_n_62));
  OAI21X1 add_23_2_g1080(.A0 (add_23_2_n_1), .A1 (add_23_2_n_24), .B0
       (add_23_2_n_15), .Y (add_23_2_n_61));
  OAI21X1 add_23_2_g1081(.A0 (add_23_2_n_23), .A1 (add_23_2_n_20), .B0
       (add_23_2_n_16), .Y (add_23_2_n_60));
  NOR2X1 add_23_2_g1082(.A (add_23_2_n_4), .B (add_23_2_n_9), .Y
       (add_23_2_n_55));
  NAND2BX1 add_23_2_g1083(.AN (add_23_2_n_0), .B (add_23_2_n_31), .Y
       (add_23_2_n_54));
  NOR2BX1 add_23_2_g1084(.AN (add_23_2_n_5), .B (add_23_2_n_7), .Y
       (add_23_2_n_53));
  NAND2X1 add_23_2_g1085(.A (add_23_2_n_28), .B (add_23_2_n_19), .Y
       (add_23_2_n_52));
  NAND2BX1 add_23_2_g1086(.AN (add_23_2_n_2), .B (add_23_2_n_30), .Y
       (add_23_2_n_51));
  NOR2BX1 add_23_2_g1087(.AN (add_23_2_n_22), .B (add_23_2_n_24), .Y
       (add_23_2_n_59));
  OR2XL add_23_2_g1088(.A (add_23_2_n_12), .B (add_23_2_n_10), .Y
       (add_23_2_n_50));
  NOR2X1 add_23_2_g1089(.A (add_23_2_n_8), .B (add_23_2_n_21), .Y
       (add_23_2_n_58));
  NOR2X1 add_23_2_g1090(.A (add_23_2_n_20), .B (add_23_2_n_29), .Y
       (add_23_2_n_57));
  NOR2X1 add_23_2_g1091(.A (add_23_2_n_9), .B (add_23_2_n_11), .Y
       (add_23_2_n_56));
  NOR2BX1 add_23_2_g1092(.AN (add_23_2_n_25), .B (add_23_2_n_26), .Y
       (add_23_2_n_49));
  NOR2BX1 add_23_2_g1093(.AN (add_23_2_n_3), .B (add_23_2_n_21), .Y
       (add_23_2_n_48));
  NAND2BX1 add_23_2_g1094(.AN (add_23_2_n_14), .B (add_23_2_n_35), .Y
       (add_23_2_n_44));
  NOR2BX1 add_23_2_g1095(.AN (add_23_2_n_4), .B (add_23_2_n_11), .Y
       (add_23_2_n_43));
  NOR2X1 add_23_2_g1096(.A (add_23_2_n_2), .B (add_23_2_n_26), .Y
       (add_23_2_n_47));
  NAND2BX1 add_23_2_g1097(.AN (add_23_2_n_29), .B (add_23_2_n_23), .Y
       (add_23_2_n_42));
  NAND2BX1 add_23_2_g1098(.AN (add_23_2_n_9), .B (add_23_2_n_32), .Y
       (add_23_2_n_41));
  NOR2BX1 add_23_2_g1099(.AN (add_23_2_n_18), .B (add_23_2_n_6), .Y
       (add_23_2_n_40));
  NOR2X1 add_23_2_g1100(.A (add_23_2_n_0), .B (add_23_2_n_6), .Y
       (add_23_2_n_46));
  NOR2X1 add_23_2_g1101(.A (add_23_2_n_10), .B (add_23_2_n_7), .Y
       (add_23_2_n_45));
  NAND2X1 add_23_2_g1102(.A (add_23_2_n_1), .B (add_23_2_n_22), .Y
       (add_23_2_n_39));
  NAND2BX1 add_23_2_g1103(.AN (add_23_2_n_24), .B (add_23_2_n_15), .Y
       (add_23_2_n_38));
  NAND2BX1 add_23_2_g1104(.AN (add_23_2_n_8), .B (add_23_2_n_33), .Y
       (add_23_2_n_37));
  NAND2BX1 add_23_2_g1105(.AN (add_23_2_n_20), .B (add_23_2_n_16), .Y
       (add_23_2_n_36));
  INVX1 add_23_2_g1106(.A (add_23_2_n_28), .Y (add_23_2_n_27));
  NAND2X1 add_23_2_g1107(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_35));
  NAND2X1 add_23_2_g1108(.A (in2[19]), .B (in2[18]), .Y
       (add_23_2_n_34));
  NAND2X1 add_23_2_g1109(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_33));
  NAND2X1 add_23_2_g1110(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_32));
  NAND2X1 add_23_2_g1111(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_31));
  NAND2X1 add_23_2_g1112(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_30));
  NOR2X1 add_23_2_g1113(.A (in2[16]), .B (in1[16]), .Y (add_23_2_n_29));
  NAND2X1 add_23_2_g1114(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_28));
  NOR2X1 add_23_2_g1115(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_26));
  NAND2X1 add_23_2_g1116(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_25));
  NOR2X1 add_23_2_g1117(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g1118(.A (in2[16]), .B (in1[16]), .Y
       (add_23_2_n_23));
  OR2X1 add_23_2_g1119(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_22));
  NOR2X1 add_23_2_g1120(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_21));
  NOR2X1 add_23_2_g1121(.A (in2[17]), .B (in1[17]), .Y (add_23_2_n_20));
  OR2X1 add_23_2_g1122(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_19));
  NAND2X1 add_23_2_g1123(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_18));
  AND2XL add_23_2_g1124(.A (in2[21]), .B (in2[20]), .Y (add_23_2_n_17));
  NAND2X1 add_23_2_g1125(.A (in2[17]), .B (in1[17]), .Y
       (add_23_2_n_16));
  NAND2X1 add_23_2_g1126(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_15));
  NOR2X1 add_23_2_g1127(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_14));
  AND2XL add_23_2_g1128(.A (in2[25]), .B (in2[24]), .Y (add_23_2_n_13));
  AND2XL add_23_2_g1129(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_12));
  NOR2X1 add_23_2_g1130(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g1131(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g1132(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g1133(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g1134(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1135(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g1136(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g1137(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g1138(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g1139(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g1140(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_1));
  NOR2X1 add_23_2_g1141(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_0));
endmodule


