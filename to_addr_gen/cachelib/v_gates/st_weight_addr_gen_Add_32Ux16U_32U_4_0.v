`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:51:44 KST (Dec  7 2020 09:51:44 UTC)

module st_weight_addr_gen_Add_32Ux16U_32U_4_0(in2, in1, out1);
  input [31:0] in2;
  input [15:0] in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire [15:0] in1;
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
       add_23_2_n_60, add_23_2_n_62, add_23_2_n_63, add_23_2_n_64;
  wire add_23_2_n_66, add_23_2_n_67, add_23_2_n_69, add_23_2_n_70,
       add_23_2_n_71, add_23_2_n_73, add_23_2_n_74, add_23_2_n_76;
  wire add_23_2_n_77, add_23_2_n_78, add_23_2_n_81, add_23_2_n_82,
       add_23_2_n_83, add_23_2_n_86, add_23_2_n_87, add_23_2_n_88;
  wire add_23_2_n_89, add_23_2_n_90, add_23_2_n_94, add_23_2_n_95,
       add_23_2_n_96, add_23_2_n_97, add_23_2_n_98, add_23_2_n_99;
  wire add_23_2_n_100, add_23_2_n_102, add_23_2_n_103, add_23_2_n_104,
       add_23_2_n_110, add_23_2_n_111, add_23_2_n_112, add_23_2_n_113;
  wire add_23_2_n_115, add_23_2_n_116, add_23_2_n_120, add_23_2_n_121,
       add_23_2_n_125, add_23_2_n_128, add_23_2_n_130;
  XNOR2X1 add_23_2_g959(.A (in2[31]), .B (add_23_2_n_130), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g960(.A (in2[29]), .B (add_23_2_n_125), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g961(.A (in2[30]), .B (add_23_2_n_128), .Y
       (out1[30]));
  XNOR2X1 add_23_2_g962(.A (in2[27]), .B (add_23_2_n_121), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g963(.AN (add_23_2_n_128), .B (in2[30]), .Y
       (add_23_2_n_130));
  XNOR2X1 add_23_2_g964(.A (in2[25]), .B (add_23_2_n_115), .Y
       (out1[25]));
  NAND3BXL add_23_2_g965(.AN (add_23_2_n_120), .B (in2[28]), .C
       (in2[29]), .Y (add_23_2_n_128));
  XNOR2X1 add_23_2_g966(.A (in2[28]), .B (add_23_2_n_120), .Y
       (out1[28]));
  XNOR2X1 add_23_2_g967(.A (in2[23]), .B (add_23_2_n_113), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g968(.AN (add_23_2_n_120), .B (in2[28]), .Y
       (add_23_2_n_125));
  XNOR2X1 add_23_2_g969(.A (in2[21]), .B (add_23_2_n_103), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g970(.A (in2[19]), .B (add_23_2_n_102), .Y
       (out1[19]));
  XOR2XL add_23_2_g971(.A (in2[26]), .B (add_23_2_n_116), .Y
       (out1[26]));
  NAND2X1 add_23_2_g972(.A (in2[26]), .B (add_23_2_n_116), .Y
       (add_23_2_n_121));
  NAND4XL add_23_2_g973(.A (in2[27]), .B (in2[26]), .C (add_23_2_n_30),
       .D (add_23_2_n_110), .Y (add_23_2_n_120));
  XNOR2X1 add_23_2_g974(.A (in2[24]), .B (add_23_2_n_111), .Y
       (out1[24]));
  XNOR2X1 add_23_2_g975(.A (in2[17]), .B (add_23_2_n_97), .Y
       (out1[17]));
  XNOR2X1 add_23_2_g976(.A (add_23_2_n_35), .B (add_23_2_n_112), .Y
       (out1[15]));
  NOR2BX1 add_23_2_g977(.AN (add_23_2_n_30), .B (add_23_2_n_111), .Y
       (add_23_2_n_116));
  NAND2X1 add_23_2_g978(.A (in2[24]), .B (add_23_2_n_110), .Y
       (add_23_2_n_115));
  XNOR2X1 add_23_2_g979(.A (in2[22]), .B (add_23_2_n_104), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g980(.AN (add_23_2_n_104), .B (in2[22]), .Y
       (add_23_2_n_113));
  OAI21X1 add_23_2_g981(.A0 (add_23_2_n_9), .A1 (add_23_2_n_96), .B0
       (add_23_2_n_10), .Y (add_23_2_n_112));
  INVX1 add_23_2_g982(.A (add_23_2_n_111), .Y (add_23_2_n_110));
  NAND4BX1 add_23_2_g983(.AN (add_23_2_n_26), .B (in2[22]), .C
       (add_23_2_n_98), .D (in2[23]), .Y (add_23_2_n_111));
  XNOR2X1 add_23_2_g984(.A (add_23_2_n_36), .B (add_23_2_n_96), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g985(.A (add_23_2_n_32), .B (add_23_2_n_95), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g986(.A (add_23_2_n_38), .B (add_23_2_n_94), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g987(.A (in2[20]), .B (add_23_2_n_100), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g988(.A (in2[18]), .B (add_23_2_n_99), .Y
       (out1[18]));
  OR2XL add_23_2_g989(.A (add_23_2_n_26), .B (add_23_2_n_100), .Y
       (add_23_2_n_104));
  NAND2BX1 add_23_2_g990(.AN (add_23_2_n_100), .B (in2[20]), .Y
       (add_23_2_n_103));
  NAND2BX1 add_23_2_g991(.AN (add_23_2_n_99), .B (in2[18]), .Y
       (add_23_2_n_102));
  XNOR2X1 add_23_2_g992(.A (in2[16]), .B (add_23_2_n_90), .Y
       (out1[16]));
  OR2XL add_23_2_g993(.A (add_23_2_n_53), .B (add_23_2_n_90), .Y
       (add_23_2_n_100));
  OR2XL add_23_2_g994(.A (add_23_2_n_12), .B (add_23_2_n_90), .Y
       (add_23_2_n_99));
  NOR2X1 add_23_2_g995(.A (add_23_2_n_53), .B (add_23_2_n_90), .Y
       (add_23_2_n_98));
  NAND2X1 add_23_2_g996(.A (in2[16]), .B (add_23_2_n_89), .Y
       (add_23_2_n_97));
  AOI21X1 add_23_2_g997(.A0 (add_23_2_n_52), .A1 (add_23_2_n_87), .B0
       (add_23_2_n_55), .Y (add_23_2_n_96));
  OAI2BB1X1 add_23_2_g998(.A0N (add_23_2_n_25), .A1N (add_23_2_n_87),
       .B0 (add_23_2_n_17), .Y (add_23_2_n_95));
  OAI21X1 add_23_2_g999(.A0 (add_23_2_n_6), .A1 (add_23_2_n_88), .B0
       (add_23_2_n_4), .Y (add_23_2_n_94));
  XNOR2X1 add_23_2_g1000(.A (add_23_2_n_33), .B (add_23_2_n_87), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g1001(.A (add_23_2_n_46), .B (add_23_2_n_88), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g1002(.A (add_23_2_n_34), .B (add_23_2_n_86), .Y
       (out1[9]));
  INVX1 add_23_2_g1003(.A (add_23_2_n_89), .Y (add_23_2_n_90));
  OAI31X1 add_23_2_g1004(.A0 (add_23_2_n_58), .A1 (add_23_2_n_59), .A2
       (add_23_2_n_82), .B0 (add_23_2_n_69), .Y (add_23_2_n_89));
  AOI21X1 add_23_2_g1005(.A0 (add_23_2_n_40), .A1 (add_23_2_n_81), .B0
       (add_23_2_n_56), .Y (add_23_2_n_88));
  OAI211X1 add_23_2_g1006(.A0 (add_23_2_n_58), .A1 (add_23_2_n_82), .B0
       (add_23_2_n_57), .C0 (add_23_2_n_63), .Y (add_23_2_n_87));
  OAI21X1 add_23_2_g1007(.A0 (add_23_2_n_7), .A1 (add_23_2_n_82), .B0
       (add_23_2_n_23), .Y (add_23_2_n_86));
  XNOR2X1 add_23_2_g1008(.A (add_23_2_n_37), .B (add_23_2_n_82), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1009(.A (add_23_2_n_47), .B (add_23_2_n_83), .Y
       (out1[7]));
  OAI21X1 add_23_2_g1010(.A0 (add_23_2_n_18), .A1 (add_23_2_n_77), .B0
       (add_23_2_n_0), .Y (add_23_2_n_83));
  INVX1 add_23_2_g1011(.A (add_23_2_n_81), .Y (add_23_2_n_82));
  OAI211X1 add_23_2_g1012(.A0 (add_23_2_n_0), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_78), .C0 (add_23_2_n_62), .Y (add_23_2_n_81));
  XNOR2X1 add_23_2_g1013(.A (add_23_2_n_44), .B (add_23_2_n_77), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g1014(.A (add_23_2_n_43), .B (add_23_2_n_76), .Y
       (out1[5]));
  AOI31X1 add_23_2_g1015(.A0 (add_23_2_n_39), .A1 (add_23_2_n_42), .A2
       (add_23_2_n_73), .B0 (add_23_2_n_31), .Y (add_23_2_n_78));
  AOI21X1 add_23_2_g1016(.A0 (add_23_2_n_39), .A1 (add_23_2_n_73), .B0
       (add_23_2_n_54), .Y (add_23_2_n_77));
  OAI21X1 add_23_2_g1017(.A0 (add_23_2_n_16), .A1 (add_23_2_n_74), .B0
       (add_23_2_n_8), .Y (add_23_2_n_76));
  XNOR2X1 add_23_2_g1018(.A (add_23_2_n_49), .B (add_23_2_n_74), .Y
       (out1[4]));
  INVX1 add_23_2_g1019(.A (add_23_2_n_73), .Y (add_23_2_n_74));
  OAI21X1 add_23_2_g1020(.A0 (add_23_2_n_13), .A1 (add_23_2_n_70), .B0
       (add_23_2_n_27), .Y (add_23_2_n_73));
  XNOR2X1 add_23_2_g1021(.A (add_23_2_n_48), .B (add_23_2_n_71), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g1022(.A0N (add_23_2_n_1), .A1N (add_23_2_n_66),
       .B0 (add_23_2_n_22), .Y (add_23_2_n_71));
  AOI21X1 add_23_2_g1023(.A0 (add_23_2_n_1), .A1 (add_23_2_n_66), .B0
       (add_23_2_n_21), .Y (add_23_2_n_70));
  AOI211XL add_23_2_g1024(.A0 (add_23_2_n_41), .A1 (add_23_2_n_55), .B0
       (add_23_2_n_67), .C0 (add_23_2_n_50), .Y (add_23_2_n_69));
  XNOR2X1 add_23_2_g1025(.A (add_23_2_n_45), .B (add_23_2_n_66), .Y
       (out1[2]));
  OAI21XL add_23_2_g1026(.A0 (add_23_2_n_59), .A1 (add_23_2_n_64), .B0
       (add_23_2_n_15), .Y (add_23_2_n_67));
  ADDFX1 add_23_2_g1027(.A (add_23_2_n_60), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_66), .S (out1[1]));
  AND2XL add_23_2_g1028(.A (add_23_2_n_57), .B (add_23_2_n_63), .Y
       (add_23_2_n_64));
  NAND2X1 add_23_2_g1029(.A (add_23_2_n_51), .B (add_23_2_n_56), .Y
       (add_23_2_n_63));
  NAND2X1 add_23_2_g1030(.A (add_23_2_n_42), .B (add_23_2_n_54), .Y
       (add_23_2_n_62));
  ADDHX1 add_23_2_g1031(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_60),
       .S (out1[0]));
  NAND2X1 add_23_2_g1032(.A (add_23_2_n_41), .B (add_23_2_n_52), .Y
       (add_23_2_n_59));
  NAND2X1 add_23_2_g1033(.A (add_23_2_n_51), .B (add_23_2_n_40), .Y
       (add_23_2_n_58));
  OA21X1 add_23_2_g1034(.A0 (add_23_2_n_4), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_28), .Y (add_23_2_n_57));
  OAI21X1 add_23_2_g1035(.A0 (add_23_2_n_23), .A1 (add_23_2_n_24), .B0
       (add_23_2_n_14), .Y (add_23_2_n_56));
  OAI21X1 add_23_2_g1036(.A0 (add_23_2_n_17), .A1 (add_23_2_n_5), .B0
       (add_23_2_n_29), .Y (add_23_2_n_55));
  OAI21X1 add_23_2_g1037(.A0 (add_23_2_n_8), .A1 (add_23_2_n_3), .B0
       (add_23_2_n_11), .Y (add_23_2_n_54));
  NAND3BXL add_23_2_g1038(.AN (add_23_2_n_12), .B (in2[18]), .C
       (in2[19]), .Y (add_23_2_n_53));
  NOR2X1 add_23_2_g1039(.A (add_23_2_n_10), .B (add_23_2_n_20), .Y
       (add_23_2_n_50));
  NOR2BX1 add_23_2_g1040(.AN (add_23_2_n_8), .B (add_23_2_n_16), .Y
       (add_23_2_n_49));
  NAND2BX1 add_23_2_g1041(.AN (add_23_2_n_13), .B (add_23_2_n_27), .Y
       (add_23_2_n_48));
  NOR2BX1 add_23_2_g1042(.AN (add_23_2_n_25), .B (add_23_2_n_5), .Y
       (add_23_2_n_52));
  OR2XL add_23_2_g1043(.A (add_23_2_n_31), .B (add_23_2_n_2), .Y
       (add_23_2_n_47));
  NOR2X1 add_23_2_g1044(.A (add_23_2_n_19), .B (add_23_2_n_6), .Y
       (add_23_2_n_51));
  NOR2BX1 add_23_2_g1045(.AN (add_23_2_n_4), .B (add_23_2_n_6), .Y
       (add_23_2_n_46));
  NAND2X1 add_23_2_g1046(.A (add_23_2_n_22), .B (add_23_2_n_1), .Y
       (add_23_2_n_45));
  NOR2BX1 add_23_2_g1047(.AN (add_23_2_n_0), .B (add_23_2_n_18), .Y
       (add_23_2_n_44));
  NAND2BX1 add_23_2_g1048(.AN (add_23_2_n_3), .B (add_23_2_n_11), .Y
       (add_23_2_n_43));
  NOR2X1 add_23_2_g1049(.A (add_23_2_n_2), .B (add_23_2_n_18), .Y
       (add_23_2_n_42));
  NOR2X1 add_23_2_g1050(.A (add_23_2_n_20), .B (add_23_2_n_9), .Y
       (add_23_2_n_41));
  NAND2BX1 add_23_2_g1051(.AN (add_23_2_n_19), .B (add_23_2_n_28), .Y
       (add_23_2_n_38));
  NOR2BX1 add_23_2_g1052(.AN (add_23_2_n_23), .B (add_23_2_n_7), .Y
       (add_23_2_n_37));
  NOR2BX1 add_23_2_g1053(.AN (add_23_2_n_10), .B (add_23_2_n_9), .Y
       (add_23_2_n_36));
  NOR2X1 add_23_2_g1054(.A (add_23_2_n_24), .B (add_23_2_n_7), .Y
       (add_23_2_n_40));
  NAND2BX1 add_23_2_g1055(.AN (add_23_2_n_20), .B (add_23_2_n_15), .Y
       (add_23_2_n_35));
  NAND2BX1 add_23_2_g1056(.AN (add_23_2_n_24), .B (add_23_2_n_14), .Y
       (add_23_2_n_34));
  NOR2X1 add_23_2_g1057(.A (add_23_2_n_3), .B (add_23_2_n_16), .Y
       (add_23_2_n_39));
  NAND2X1 add_23_2_g1058(.A (add_23_2_n_17), .B (add_23_2_n_25), .Y
       (add_23_2_n_33));
  NAND2BX1 add_23_2_g1059(.AN (add_23_2_n_5), .B (add_23_2_n_29), .Y
       (add_23_2_n_32));
  INVX1 add_23_2_g1060(.A (add_23_2_n_22), .Y (add_23_2_n_21));
  AND2XL add_23_2_g1061(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_31));
  AND2XL add_23_2_g1062(.A (in2[25]), .B (in2[24]), .Y (add_23_2_n_30));
  NAND2X1 add_23_2_g1063(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g1064(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_28));
  NAND2X1 add_23_2_g1065(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_27));
  NAND2X1 add_23_2_g1066(.A (in2[21]), .B (in2[20]), .Y
       (add_23_2_n_26));
  OR2X1 add_23_2_g1067(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_25));
  NOR2X1 add_23_2_g1068(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g1069(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_23));
  NAND2X1 add_23_2_g1070(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_22));
  NOR2X1 add_23_2_g1071(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_20));
  NOR2X1 add_23_2_g1072(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_19));
  NOR2X1 add_23_2_g1073(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_18));
  NAND2X1 add_23_2_g1074(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_17));
  NOR2X1 add_23_2_g1075(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_16));
  NAND2X1 add_23_2_g1076(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_15));
  NAND2X1 add_23_2_g1077(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g1078(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_13));
  NAND2X1 add_23_2_g1079(.A (in2[17]), .B (in2[16]), .Y
       (add_23_2_n_12));
  NAND2X1 add_23_2_g1080(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_11));
  NAND2X1 add_23_2_g1081(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_10));
  NOR2X1 add_23_2_g1082(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g1083(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g1084(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1085(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1086(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g1087(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g1088(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g1089(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_2));
  OR2X1 add_23_2_g1090(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g1091(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_0));
endmodule


