`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 00:26:16 KST (Dec  7 2020 15:26:16 UTC)

module st_weight_addr_gen_Add_33Sx16U_33S_4_10(in2, in1, out1);
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
  wire add_23_2_n_49, add_23_2_n_50, add_23_2_n_51, add_23_2_n_52,
       add_23_2_n_54, add_23_2_n_55, add_23_2_n_56, add_23_2_n_59;
  wire add_23_2_n_60, add_23_2_n_62, add_23_2_n_63, add_23_2_n_64,
       add_23_2_n_66, add_23_2_n_68, add_23_2_n_69, add_23_2_n_70;
  wire add_23_2_n_73, add_23_2_n_74, add_23_2_n_75, add_23_2_n_76,
       add_23_2_n_79, add_23_2_n_80, add_23_2_n_81, add_23_2_n_83;
  wire add_23_2_n_84, add_23_2_n_85, add_23_2_n_86, add_23_2_n_87,
       add_23_2_n_90, add_23_2_n_91, add_23_2_n_92, add_23_2_n_97;
  wire add_23_2_n_98, add_23_2_n_104, add_23_2_n_106, add_23_2_n_107,
       add_23_2_n_109, add_23_2_n_112, add_23_2_n_114, add_23_2_n_116;
  wire add_23_2_n_118, add_23_2_n_120;
  XNOR2X1 add_23_2_g979(.A (in2[32]), .B (add_23_2_n_120), .Y
       (out1[32]));
  XNOR2X1 add_23_2_g980(.A (in2[31]), .B (add_23_2_n_118), .Y
       (out1[31]));
  NAND2BX1 add_23_2_g981(.AN (add_23_2_n_118), .B (in2[31]), .Y
       (add_23_2_n_120));
  XNOR2X1 add_23_2_g982(.A (in2[30]), .B (add_23_2_n_116), .Y
       (out1[30]));
  NAND2BX1 add_23_2_g983(.AN (add_23_2_n_116), .B (in2[30]), .Y
       (add_23_2_n_118));
  XNOR2X1 add_23_2_g984(.A (in2[29]), .B (add_23_2_n_114), .Y
       (out1[29]));
  NAND2BX1 add_23_2_g985(.AN (add_23_2_n_114), .B (in2[29]), .Y
       (add_23_2_n_116));
  XNOR2X1 add_23_2_g986(.A (in2[28]), .B (add_23_2_n_112), .Y
       (out1[28]));
  NAND2BX1 add_23_2_g987(.AN (add_23_2_n_112), .B (in2[28]), .Y
       (add_23_2_n_114));
  XNOR2X1 add_23_2_g988(.A (in2[27]), .B (add_23_2_n_109), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g989(.AN (add_23_2_n_109), .B (in2[27]), .Y
       (add_23_2_n_112));
  XNOR2X1 add_23_2_g990(.A (in2[25]), .B (add_23_2_n_107), .Y
       (out1[25]));
  XNOR2X1 add_23_2_g991(.A (in2[26]), .B (add_23_2_n_106), .Y
       (out1[26]));
  NAND2BX1 add_23_2_g992(.AN (add_23_2_n_106), .B (in2[26]), .Y
       (add_23_2_n_109));
  XNOR2X1 add_23_2_g993(.A (in2[24]), .B (add_23_2_n_104), .Y
       (out1[24]));
  NAND2BX1 add_23_2_g994(.AN (add_23_2_n_104), .B (in2[24]), .Y
       (add_23_2_n_107));
  NAND3BXL add_23_2_g995(.AN (add_23_2_n_104), .B (in2[25]), .C
       (in2[24]), .Y (add_23_2_n_106));
  XNOR2X1 add_23_2_g996(.A (in2[23]), .B (add_23_2_n_98), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g997(.AN (add_23_2_n_98), .B (in2[23]), .Y
       (add_23_2_n_104));
  XNOR2X1 add_23_2_g998(.A (in2[19]), .B (add_23_2_n_91), .Y
       (out1[19]));
  XNOR2X1 add_23_2_g999(.A (in2[21]), .B (add_23_2_n_92), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g1000(.A (in2[17]), .B (add_23_2_n_86), .Y
       (out1[17]));
  XNOR2X1 add_23_2_g1001(.A (add_23_2_n_30), .B (add_23_2_n_97), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g1002(.A (in2[22]), .B (add_23_2_n_90), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g1003(.AN (add_23_2_n_90), .B (in2[22]), .Y
       (add_23_2_n_98));
  OAI21XL add_23_2_g1004(.A0 (add_23_2_n_4), .A1 (add_23_2_n_85), .B0
       (add_23_2_n_1), .Y (add_23_2_n_97));
  XNOR2X1 add_23_2_g1005(.A (in2[20]), .B (add_23_2_n_83), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g1006(.A (add_23_2_n_29), .B (add_23_2_n_85), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g1007(.A (add_23_2_n_27), .B (add_23_2_n_84), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g1008(.A (in2[18]), .B (add_23_2_n_87), .Y
       (out1[18]));
  NAND2BX1 add_23_2_g1009(.AN (add_23_2_n_83), .B (in2[20]), .Y
       (add_23_2_n_92));
  NAND2BX1 add_23_2_g1010(.AN (add_23_2_n_87), .B (in2[18]), .Y
       (add_23_2_n_91));
  NAND3BXL add_23_2_g1011(.AN (add_23_2_n_83), .B (in2[21]), .C
       (in2[20]), .Y (add_23_2_n_90));
  XNOR2X1 add_23_2_g1012(.A (add_23_2_n_36), .B (add_23_2_n_79), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g1013(.A (in2[16]), .B (add_23_2_n_80), .Y
       (out1[16]));
  OR2XL add_23_2_g1014(.A (add_23_2_n_22), .B (add_23_2_n_80), .Y
       (add_23_2_n_87));
  NAND2X1 add_23_2_g1015(.A (in2[16]), .B (add_23_2_n_81), .Y
       (add_23_2_n_86));
  AOI21X1 add_23_2_g1016(.A0 (add_23_2_n_41), .A1 (add_23_2_n_76), .B0
       (add_23_2_n_44), .Y (add_23_2_n_85));
  OAI2BB1X1 add_23_2_g1017(.A0N (add_23_2_n_7), .A1N (add_23_2_n_76),
       .B0 (add_23_2_n_14), .Y (add_23_2_n_84));
  NAND4BX1 add_23_2_g1018(.AN (add_23_2_n_22), .B (add_23_2_n_81), .C
       (in2[18]), .D (in2[19]), .Y (add_23_2_n_83));
  XNOR2X1 add_23_2_g1019(.A (add_23_2_n_28), .B (add_23_2_n_76), .Y
       (out1[12]));
  INVX1 add_23_2_g1020(.A (add_23_2_n_81), .Y (add_23_2_n_80));
  OAI21X1 add_23_2_g1021(.A0 (add_23_2_n_46), .A1 (add_23_2_n_75), .B0
       (add_23_2_n_55), .Y (add_23_2_n_81));
  OAI21X1 add_23_2_g1022(.A0 (add_23_2_n_16), .A1 (add_23_2_n_74), .B0
       (add_23_2_n_13), .Y (add_23_2_n_79));
  XNOR2X1 add_23_2_g1023(.A (add_23_2_n_31), .B (add_23_2_n_74), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g1024(.A (add_23_2_n_26), .B (add_23_2_n_73), .Y
       (out1[9]));
  NAND2BX1 add_23_2_g1025(.AN (add_23_2_n_50), .B (add_23_2_n_75), .Y
       (add_23_2_n_76));
  NAND2X1 add_23_2_g1026(.A (add_23_2_n_42), .B (add_23_2_n_70), .Y
       (add_23_2_n_75));
  NOR2X1 add_23_2_g1027(.A (add_23_2_n_45), .B (add_23_2_n_70), .Y
       (add_23_2_n_74));
  OAI21XL add_23_2_g1028(.A0 (add_23_2_n_10), .A1 (add_23_2_n_68), .B0
       (add_23_2_n_0), .Y (add_23_2_n_73));
  XNOR2X1 add_23_2_g1029(.A (add_23_2_n_37), .B (add_23_2_n_68), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1030(.A (add_23_2_n_38), .B (add_23_2_n_69), .Y
       (out1[7]));
  NOR3X1 add_23_2_g1031(.A (add_23_2_n_68), .B (add_23_2_n_8), .C
       (add_23_2_n_10), .Y (add_23_2_n_70));
  OAI21X1 add_23_2_g1032(.A0 (add_23_2_n_9), .A1 (add_23_2_n_64), .B0
       (add_23_2_n_15), .Y (add_23_2_n_69));
  AOI211XL add_23_2_g1033(.A0 (add_23_2_n_32), .A1 (add_23_2_n_43), .B0
       (add_23_2_n_66), .C0 (add_23_2_n_40), .Y (add_23_2_n_68));
  XNOR2X1 add_23_2_g1034(.A (add_23_2_n_35), .B (add_23_2_n_64), .Y
       (out1[6]));
  OAI2BB1X1 add_23_2_g1035(.A0N (add_23_2_n_32), .A1N (add_23_2_n_63),
       .B0 (add_23_2_n_23), .Y (add_23_2_n_66));
  XNOR2X1 add_23_2_g1036(.A (add_23_2_n_25), .B (add_23_2_n_62), .Y
       (out1[5]));
  NOR2X1 add_23_2_g1037(.A (add_23_2_n_43), .B (add_23_2_n_63), .Y
       (add_23_2_n_64));
  NOR2X1 add_23_2_g1038(.A (add_23_2_n_2), .B (add_23_2_n_60), .Y
       (add_23_2_n_63));
  NAND2X1 add_23_2_g1039(.A (add_23_2_n_6), .B (add_23_2_n_60), .Y
       (add_23_2_n_62));
  XNOR2X1 add_23_2_g1040(.A (add_23_2_n_34), .B (add_23_2_n_59), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g1041(.AN (add_23_2_n_24), .B (add_23_2_n_59), .Y
       (add_23_2_n_60));
  ADDFX1 add_23_2_g1042(.A (add_23_2_n_56), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_59), .S (out1[3]));
  ADDFX1 add_23_2_g1043(.A (add_23_2_n_52), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_56), .S (out1[2]));
  AOI211XL add_23_2_g1044(.A0 (add_23_2_n_33), .A1 (add_23_2_n_44), .B0
       (add_23_2_n_54), .C0 (add_23_2_n_39), .Y (add_23_2_n_55));
  OAI21XL add_23_2_g1045(.A0 (add_23_2_n_46), .A1 (add_23_2_n_51), .B0
       (add_23_2_n_11), .Y (add_23_2_n_54));
  ADDFX1 add_23_2_g1046(.A (add_23_2_n_47), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_52), .S (out1[1]));
  INVX1 add_23_2_g1047(.A (add_23_2_n_50), .Y (add_23_2_n_51));
  OAI211X1 add_23_2_g1048(.A0 (add_23_2_n_13), .A1 (add_23_2_n_17), .B0
       (add_23_2_n_49), .C0 (add_23_2_n_21), .Y (add_23_2_n_50));
  NAND2X1 add_23_2_g1049(.A (add_23_2_n_42), .B (add_23_2_n_45), .Y
       (add_23_2_n_49));
  ADDHX1 add_23_2_g1050(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_47),
       .S (out1[0]));
  NAND2X1 add_23_2_g1051(.A (add_23_2_n_33), .B (add_23_2_n_41), .Y
       (add_23_2_n_46));
  OAI21X1 add_23_2_g1052(.A0 (add_23_2_n_0), .A1 (add_23_2_n_8), .B0
       (add_23_2_n_20), .Y (add_23_2_n_45));
  OAI21X1 add_23_2_g1053(.A0 (add_23_2_n_14), .A1 (add_23_2_n_3), .B0
       (add_23_2_n_19), .Y (add_23_2_n_44));
  OAI21X1 add_23_2_g1054(.A0 (add_23_2_n_6), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_12), .Y (add_23_2_n_43));
  NOR2X1 add_23_2_g1055(.A (add_23_2_n_15), .B (add_23_2_n_5), .Y
       (add_23_2_n_40));
  NOR2X1 add_23_2_g1056(.A (add_23_2_n_1), .B (add_23_2_n_18), .Y
       (add_23_2_n_39));
  NOR2X1 add_23_2_g1057(.A (add_23_2_n_17), .B (add_23_2_n_16), .Y
       (add_23_2_n_42));
  NAND2BX1 add_23_2_g1058(.AN (add_23_2_n_5), .B (add_23_2_n_23), .Y
       (add_23_2_n_38));
  NOR2BX1 add_23_2_g1059(.AN (add_23_2_n_7), .B (add_23_2_n_3), .Y
       (add_23_2_n_41));
  NOR2BX1 add_23_2_g1060(.AN (add_23_2_n_0), .B (add_23_2_n_10), .Y
       (add_23_2_n_37));
  NAND2BX1 add_23_2_g1061(.AN (add_23_2_n_17), .B (add_23_2_n_21), .Y
       (add_23_2_n_36));
  NOR2BX1 add_23_2_g1062(.AN (add_23_2_n_15), .B (add_23_2_n_9), .Y
       (add_23_2_n_35));
  NAND2BX1 add_23_2_g1063(.AN (add_23_2_n_24), .B (add_23_2_n_6), .Y
       (add_23_2_n_34));
  NOR2BX1 add_23_2_g1064(.AN (add_23_2_n_13), .B (add_23_2_n_16), .Y
       (add_23_2_n_31));
  NOR2X1 add_23_2_g1065(.A (add_23_2_n_18), .B (add_23_2_n_4), .Y
       (add_23_2_n_33));
  NAND2BX1 add_23_2_g1066(.AN (add_23_2_n_18), .B (add_23_2_n_11), .Y
       (add_23_2_n_30));
  NOR2BX1 add_23_2_g1067(.AN (add_23_2_n_1), .B (add_23_2_n_4), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g1068(.A (add_23_2_n_14), .B (add_23_2_n_7), .Y
       (add_23_2_n_28));
  NAND2BX1 add_23_2_g1069(.AN (add_23_2_n_3), .B (add_23_2_n_19), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g1070(.A (add_23_2_n_5), .B (add_23_2_n_9), .Y
       (add_23_2_n_32));
  NAND2BX1 add_23_2_g1071(.AN (add_23_2_n_8), .B (add_23_2_n_20), .Y
       (add_23_2_n_26));
  NAND2BX1 add_23_2_g1072(.AN (add_23_2_n_2), .B (add_23_2_n_12), .Y
       (add_23_2_n_25));
  NOR2X1 add_23_2_g1073(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g1074(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_23));
  NAND2X1 add_23_2_g1075(.A (in2[17]), .B (in2[16]), .Y
       (add_23_2_n_22));
  NAND2X1 add_23_2_g1076(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_21));
  NAND2X1 add_23_2_g1077(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_20));
  NAND2X1 add_23_2_g1078(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_19));
  NOR2X1 add_23_2_g1079(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_18));
  NOR2X1 add_23_2_g1080(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_17));
  NOR2X1 add_23_2_g1081(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_16));
  NAND2X1 add_23_2_g1082(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g1083(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_14));
  NAND2X1 add_23_2_g1084(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_13));
  NAND2X1 add_23_2_g1085(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g1086(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_11));
  NOR2X1 add_23_2_g1087(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g1088(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g1089(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_8));
  OR2X1 add_23_2_g1090(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g1091(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1092(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1093(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g1094(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g1095(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g1096(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g1097(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_0));
endmodule


