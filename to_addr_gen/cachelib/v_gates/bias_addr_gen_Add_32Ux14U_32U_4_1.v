`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 10:22:56 KST (Jan 27 2021 01:22:56 UTC)

module bias_addr_gen_Add_32Ux14U_32U_4_1(in2, in1, out1);
  input [31:0] in2;
  input [13:0] in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire [13:0] in1;
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
  wire add_23_2_n_56, add_23_2_n_58, add_23_2_n_59, add_23_2_n_60,
       add_23_2_n_62, add_23_2_n_64, add_23_2_n_65, add_23_2_n_67;
  wire add_23_2_n_68, add_23_2_n_70, add_23_2_n_71, add_23_2_n_72,
       add_23_2_n_75, add_23_2_n_76, add_23_2_n_77, add_23_2_n_80;
  wire add_23_2_n_81, add_23_2_n_82, add_23_2_n_83, add_23_2_n_87,
       add_23_2_n_88, add_23_2_n_89, add_23_2_n_90, add_23_2_n_91;
  wire add_23_2_n_92, add_23_2_n_97, add_23_2_n_98, add_23_2_n_99,
       add_23_2_n_102, add_23_2_n_103, add_23_2_n_104, add_23_2_n_106;
  wire add_23_2_n_107, add_23_2_n_110, add_23_2_n_112, add_23_2_n_116,
       add_23_2_n_119, add_23_2_n_121;
  XNOR2X1 add_23_2_g939(.A (in2[31]), .B (add_23_2_n_121), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g940(.A (in2[29]), .B (add_23_2_n_116), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g941(.A (in2[30]), .B (add_23_2_n_119), .Y
       (out1[30]));
  XNOR2X1 add_23_2_g942(.A (in2[27]), .B (add_23_2_n_112), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g943(.AN (add_23_2_n_119), .B (in2[30]), .Y
       (add_23_2_n_121));
  XNOR2X1 add_23_2_g944(.A (in2[25]), .B (add_23_2_n_106), .Y
       (out1[25]));
  NAND3BXL add_23_2_g945(.AN (add_23_2_n_110), .B (in2[28]), .C
       (in2[29]), .Y (add_23_2_n_119));
  XNOR2X1 add_23_2_g946(.A (in2[28]), .B (add_23_2_n_110), .Y
       (out1[28]));
  XNOR2X1 add_23_2_g947(.A (in2[23]), .B (add_23_2_n_104), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g948(.AN (add_23_2_n_110), .B (in2[28]), .Y
       (add_23_2_n_116));
  XNOR2X1 add_23_2_g949(.A (in2[21]), .B (add_23_2_n_98), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g950(.A (in2[19]), .B (add_23_2_n_97), .Y
       (out1[19]));
  XOR2XL add_23_2_g951(.A (in2[26]), .B (add_23_2_n_107), .Y
       (out1[26]));
  NAND2X1 add_23_2_g952(.A (in2[26]), .B (add_23_2_n_107), .Y
       (add_23_2_n_112));
  XNOR2X1 add_23_2_g953(.A (in2[24]), .B (add_23_2_n_103), .Y
       (out1[24]));
  NAND4XL add_23_2_g954(.A (in2[27]), .B (in2[26]), .C (add_23_2_n_29),
       .D (add_23_2_n_102), .Y (add_23_2_n_110));
  XNOR2X1 add_23_2_g955(.A (in2[17]), .B (add_23_2_n_0), .Y (out1[17]));
  XNOR2X1 add_23_2_g956(.A (in2[15]), .B (add_23_2_n_91), .Y
       (out1[15]));
  NOR2BX1 add_23_2_g957(.AN (add_23_2_n_29), .B (add_23_2_n_103), .Y
       (add_23_2_n_107));
  NAND2X1 add_23_2_g958(.A (in2[24]), .B (add_23_2_n_102), .Y
       (add_23_2_n_106));
  XNOR2X1 add_23_2_g959(.A (in2[22]), .B (add_23_2_n_99), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g960(.AN (add_23_2_n_99), .B (in2[22]), .Y
       (add_23_2_n_104));
  INVX1 add_23_2_g961(.A (add_23_2_n_103), .Y (add_23_2_n_102));
  NAND4X1 add_23_2_g962(.A (in2[23]), .B (add_23_2_n_28), .C (in2[22]),
       .D (add_23_2_n_1), .Y (add_23_2_n_103));
  XOR2XL add_23_2_g963(.A (in2[20]), .B (add_23_2_n_1), .Y (out1[20]));
  XOR2XL add_23_2_g964(.A (in2[18]), .B (add_23_2_n_92), .Y (out1[18]));
  NAND2X1 add_23_2_g965(.A (add_23_2_n_28), .B (add_23_2_n_1), .Y
       (add_23_2_n_99));
  NAND2X1 add_23_2_g966(.A (in2[20]), .B (add_23_2_n_1), .Y
       (add_23_2_n_98));
  NAND2X1 add_23_2_g967(.A (in2[18]), .B (add_23_2_n_92), .Y
       (add_23_2_n_97));
  XNOR2X1 add_23_2_g968(.A (in2[14]), .B (add_23_2_n_90), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g969(.A (in2[16]), .B (add_23_2_n_87), .Y
       (out1[16]));
  XNOR2X1 add_23_2_g970(.A (add_23_2_n_35), .B (add_23_2_n_89), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g971(.A (add_23_2_n_42), .B (add_23_2_n_88), .Y
       (out1[11]));
  NOR2X1 add_23_2_g973(.A (add_23_2_n_16), .B (add_23_2_n_87), .Y
       (add_23_2_n_92));
  NAND2BX1 add_23_2_g975(.AN (add_23_2_n_90), .B (in2[14]), .Y
       (add_23_2_n_91));
  AOI21X1 add_23_2_g977(.A0 (add_23_2_n_48), .A1 (add_23_2_n_83), .B0
       (add_23_2_n_53), .Y (add_23_2_n_90));
  OAI2BB1X1 add_23_2_g978(.A0N (add_23_2_n_3), .A1N (add_23_2_n_83),
       .B0 (add_23_2_n_27), .Y (add_23_2_n_89));
  OAI21X1 add_23_2_g979(.A0 (add_23_2_n_6), .A1 (add_23_2_n_82), .B0
       (add_23_2_n_7), .Y (add_23_2_n_88));
  AOI221X1 add_23_2_g981(.A0 (add_23_2_n_55), .A1 (add_23_2_n_60), .B0
       (add_23_2_n_30), .B1 (add_23_2_n_53), .C0 (add_23_2_n_80), .Y
       (add_23_2_n_87));
  XNOR2X1 add_23_2_g982(.A (add_23_2_n_36), .B (add_23_2_n_83), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g983(.A (add_23_2_n_33), .B (add_23_2_n_82), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g984(.A (add_23_2_n_34), .B (add_23_2_n_81), .Y
       (out1[9]));
  OAI211X1 add_23_2_g985(.A0 (add_23_2_n_54), .A1 (add_23_2_n_76), .B0
       (add_23_2_n_51), .C0 (add_23_2_n_58), .Y (add_23_2_n_83));
  AOI21X1 add_23_2_g986(.A0 (add_23_2_n_47), .A1 (add_23_2_n_75), .B0
       (add_23_2_n_49), .Y (add_23_2_n_82));
  OAI21X1 add_23_2_g987(.A0 (add_23_2_n_8), .A1 (add_23_2_n_76), .B0
       (add_23_2_n_18), .Y (add_23_2_n_81));
  NOR3BX1 add_23_2_g988(.AN (add_23_2_n_55), .B (add_23_2_n_54), .C
       (add_23_2_n_76), .Y (add_23_2_n_80));
  XNOR2X1 add_23_2_g989(.A (add_23_2_n_45), .B (add_23_2_n_76), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g990(.A (add_23_2_n_32), .B (add_23_2_n_77), .Y
       (out1[7]));
  OAI21X1 add_23_2_g991(.A0 (add_23_2_n_5), .A1 (add_23_2_n_71), .B0
       (add_23_2_n_21), .Y (add_23_2_n_77));
  INVX1 add_23_2_g992(.A (add_23_2_n_75), .Y (add_23_2_n_76));
  OAI211X1 add_23_2_g993(.A0 (add_23_2_n_21), .A1 (add_23_2_n_20), .B0
       (add_23_2_n_72), .C0 (add_23_2_n_59), .Y (add_23_2_n_75));
  XNOR2X1 add_23_2_g994(.A (add_23_2_n_41), .B (add_23_2_n_71), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g995(.A (add_23_2_n_43), .B (add_23_2_n_70), .Y
       (out1[5]));
  AOI31X1 add_23_2_g996(.A0 (add_23_2_n_39), .A1 (add_23_2_n_38), .A2
       (add_23_2_n_67), .B0 (add_23_2_n_10), .Y (add_23_2_n_72));
  AOI21X1 add_23_2_g997(.A0 (add_23_2_n_39), .A1 (add_23_2_n_67), .B0
       (add_23_2_n_52), .Y (add_23_2_n_71));
  OAI21X1 add_23_2_g998(.A0 (add_23_2_n_19), .A1 (add_23_2_n_68), .B0
       (add_23_2_n_9), .Y (add_23_2_n_70));
  XNOR2X1 add_23_2_g999(.A (add_23_2_n_44), .B (add_23_2_n_68), .Y
       (out1[4]));
  INVX1 add_23_2_g1000(.A (add_23_2_n_67), .Y (add_23_2_n_68));
  OAI21X1 add_23_2_g1001(.A0 (add_23_2_n_11), .A1 (add_23_2_n_65), .B0
       (add_23_2_n_31), .Y (add_23_2_n_67));
  XNOR2X1 add_23_2_g1002(.A (add_23_2_n_37), .B (add_23_2_n_64), .Y
       (out1[3]));
  AOI21X1 add_23_2_g1003(.A0 (add_23_2_n_22), .A1 (add_23_2_n_62), .B0
       (add_23_2_n_24), .Y (add_23_2_n_65));
  OAI2BB1X1 add_23_2_g1004(.A0N (add_23_2_n_22), .A1N (add_23_2_n_62),
       .B0 (add_23_2_n_25), .Y (add_23_2_n_64));
  XNOR2X1 add_23_2_g1005(.A (add_23_2_n_46), .B (add_23_2_n_62), .Y
       (out1[2]));
  ADDFX1 add_23_2_g1006(.A (add_23_2_n_56), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_62), .S (out1[1]));
  NAND2X1 add_23_2_g1007(.A (add_23_2_n_51), .B (add_23_2_n_58), .Y
       (add_23_2_n_60));
  NAND2X1 add_23_2_g1008(.A (add_23_2_n_38), .B (add_23_2_n_52), .Y
       (add_23_2_n_59));
  NAND2X1 add_23_2_g1009(.A (add_23_2_n_40), .B (add_23_2_n_49), .Y
       (add_23_2_n_58));
  ADDHX1 add_23_2_g1010(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_56),
       .S (out1[0]));
  AND2XL add_23_2_g1011(.A (add_23_2_n_30), .B (add_23_2_n_48), .Y
       (add_23_2_n_55));
  NAND2X1 add_23_2_g1012(.A (add_23_2_n_40), .B (add_23_2_n_47), .Y
       (add_23_2_n_54));
  OAI21X1 add_23_2_g1013(.A0 (add_23_2_n_27), .A1 (add_23_2_n_23), .B0
       (add_23_2_n_14), .Y (add_23_2_n_53));
  OAI21X1 add_23_2_g1014(.A0 (add_23_2_n_9), .A1 (add_23_2_n_4), .B0
       (add_23_2_n_13), .Y (add_23_2_n_52));
  OA21X1 add_23_2_g1015(.A0 (add_23_2_n_7), .A1 (add_23_2_n_26), .B0
       (add_23_2_n_12), .Y (add_23_2_n_51));
  NAND3BXL add_23_2_g1016(.AN (add_23_2_n_16), .B (in2[18]), .C
       (in2[19]), .Y (add_23_2_n_50));
  OAI21X1 add_23_2_g1017(.A0 (add_23_2_n_18), .A1 (add_23_2_n_17), .B0
       (add_23_2_n_15), .Y (add_23_2_n_49));
  NOR2X1 add_23_2_g1018(.A (add_23_2_n_23), .B (add_23_2_n_2), .Y
       (add_23_2_n_48));
  NAND2X1 add_23_2_g1019(.A (add_23_2_n_25), .B (add_23_2_n_22), .Y
       (add_23_2_n_46));
  NOR2BX1 add_23_2_g1020(.AN (add_23_2_n_18), .B (add_23_2_n_8), .Y
       (add_23_2_n_45));
  NOR2X1 add_23_2_g1021(.A (add_23_2_n_17), .B (add_23_2_n_8), .Y
       (add_23_2_n_47));
  NOR2BX1 add_23_2_g1022(.AN (add_23_2_n_9), .B (add_23_2_n_19), .Y
       (add_23_2_n_44));
  NAND2BX1 add_23_2_g1023(.AN (add_23_2_n_4), .B (add_23_2_n_13), .Y
       (add_23_2_n_43));
  NAND2BX1 add_23_2_g1024(.AN (add_23_2_n_26), .B (add_23_2_n_12), .Y
       (add_23_2_n_42));
  NOR2BX1 add_23_2_g1025(.AN (add_23_2_n_21), .B (add_23_2_n_5), .Y
       (add_23_2_n_41));
  NAND2BX1 add_23_2_g1026(.AN (add_23_2_n_11), .B (add_23_2_n_31), .Y
       (add_23_2_n_37));
  NOR2X1 add_23_2_g1027(.A (add_23_2_n_26), .B (add_23_2_n_6), .Y
       (add_23_2_n_40));
  NAND2X1 add_23_2_g1028(.A (add_23_2_n_27), .B (add_23_2_n_3), .Y
       (add_23_2_n_36));
  NAND2BX1 add_23_2_g1029(.AN (add_23_2_n_23), .B (add_23_2_n_14), .Y
       (add_23_2_n_35));
  NAND2BX1 add_23_2_g1030(.AN (add_23_2_n_17), .B (add_23_2_n_15), .Y
       (add_23_2_n_34));
  NOR2X1 add_23_2_g1031(.A (add_23_2_n_4), .B (add_23_2_n_19), .Y
       (add_23_2_n_39));
  NOR2BX1 add_23_2_g1032(.AN (add_23_2_n_7), .B (add_23_2_n_6), .Y
       (add_23_2_n_33));
  OR2XL add_23_2_g1033(.A (add_23_2_n_10), .B (add_23_2_n_20), .Y
       (add_23_2_n_32));
  NOR2X1 add_23_2_g1034(.A (add_23_2_n_20), .B (add_23_2_n_5), .Y
       (add_23_2_n_38));
  INVX1 add_23_2_g1035(.A (add_23_2_n_25), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g1036(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_31));
  AND2XL add_23_2_g1037(.A (in2[15]), .B (in2[14]), .Y (add_23_2_n_30));
  AND2XL add_23_2_g1038(.A (in2[25]), .B (in2[24]), .Y (add_23_2_n_29));
  AND2XL add_23_2_g1039(.A (in2[21]), .B (in2[20]), .Y (add_23_2_n_28));
  NAND2X1 add_23_2_g1040(.A (in2[12]), .B (in1[12]), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g1041(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_26));
  NAND2X1 add_23_2_g1042(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_25));
  NOR2X1 add_23_2_g1043(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_23));
  OR2X1 add_23_2_g1044(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_22));
  NAND2X1 add_23_2_g1045(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_21));
  NOR2X1 add_23_2_g1046(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_20));
  NOR2X1 add_23_2_g1047(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_19));
  NAND2X1 add_23_2_g1048(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_18));
  NOR2X1 add_23_2_g1049(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_17));
  INVX1 add_23_2_g1050(.A (add_23_2_n_2), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g1051(.A (in2[17]), .B (in2[16]), .Y
       (add_23_2_n_16));
  NAND2X1 add_23_2_g1052(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g1053(.A (in2[13]), .B (in1[13]), .Y
       (add_23_2_n_14));
  NAND2X1 add_23_2_g1054(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_13));
  NAND2X1 add_23_2_g1055(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_12));
  NOR2X1 add_23_2_g1056(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_11));
  AND2XL add_23_2_g1057(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_10));
  NAND2X1 add_23_2_g1058(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g1059(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g1060(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g1061(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g1062(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1063(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g1064(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g1065(.A (add_23_2_n_50), .B (add_23_2_n_87), .Y
       (add_23_2_n_1));
  NAND2BX1 add_23_2_g2(.AN (add_23_2_n_87), .B (in2[16]), .Y
       (add_23_2_n_0));
endmodule


