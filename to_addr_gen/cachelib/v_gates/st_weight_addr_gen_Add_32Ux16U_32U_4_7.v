`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 23:49:39 KST (Dec  7 2020 14:49:39 UTC)

module st_weight_addr_gen_Add_32Ux16U_32U_4_7(in2, in1, out1);
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
       add_23_2_n_44, add_23_2_n_45, add_23_2_n_46, add_23_2_n_48;
  wire add_23_2_n_49, add_23_2_n_50, add_23_2_n_51, add_23_2_n_52,
       add_23_2_n_54, add_23_2_n_55, add_23_2_n_58, add_23_2_n_59;
  wire add_23_2_n_61, add_23_2_n_62, add_23_2_n_63, add_23_2_n_65,
       add_23_2_n_67, add_23_2_n_68, add_23_2_n_69, add_23_2_n_72;
  wire add_23_2_n_73, add_23_2_n_74, add_23_2_n_75, add_23_2_n_78,
       add_23_2_n_79, add_23_2_n_81, add_23_2_n_82, add_23_2_n_83;
  wire add_23_2_n_84, add_23_2_n_87, add_23_2_n_91, add_23_2_n_94,
       add_23_2_n_96, add_23_2_n_98, add_23_2_n_100, add_23_2_n_102;
  wire add_23_2_n_104, add_23_2_n_106, add_23_2_n_108, add_23_2_n_110,
       add_23_2_n_112, add_23_2_n_114, add_23_2_n_116;
  XNOR2X1 add_23_2_g952(.A (in2[31]), .B (add_23_2_n_116), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g953(.A (in2[30]), .B (add_23_2_n_114), .Y
       (out1[30]));
  NAND2BX1 add_23_2_g954(.AN (add_23_2_n_114), .B (in2[30]), .Y
       (add_23_2_n_116));
  XNOR2X1 add_23_2_g955(.A (in2[29]), .B (add_23_2_n_112), .Y
       (out1[29]));
  NAND2BX1 add_23_2_g956(.AN (add_23_2_n_112), .B (in2[29]), .Y
       (add_23_2_n_114));
  XNOR2X1 add_23_2_g957(.A (in2[28]), .B (add_23_2_n_110), .Y
       (out1[28]));
  NAND2BX1 add_23_2_g958(.AN (add_23_2_n_110), .B (in2[28]), .Y
       (add_23_2_n_112));
  XNOR2X1 add_23_2_g959(.A (in2[27]), .B (add_23_2_n_108), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g960(.AN (add_23_2_n_108), .B (in2[27]), .Y
       (add_23_2_n_110));
  XNOR2X1 add_23_2_g961(.A (in2[26]), .B (add_23_2_n_106), .Y
       (out1[26]));
  NAND2BX1 add_23_2_g962(.AN (add_23_2_n_106), .B (in2[26]), .Y
       (add_23_2_n_108));
  XNOR2X1 add_23_2_g963(.A (in2[25]), .B (add_23_2_n_104), .Y
       (out1[25]));
  NAND2BX1 add_23_2_g964(.AN (add_23_2_n_104), .B (in2[25]), .Y
       (add_23_2_n_106));
  XNOR2X1 add_23_2_g965(.A (in2[24]), .B (add_23_2_n_102), .Y
       (out1[24]));
  NAND2BX1 add_23_2_g966(.AN (add_23_2_n_102), .B (in2[24]), .Y
       (add_23_2_n_104));
  XNOR2X1 add_23_2_g967(.A (in2[23]), .B (add_23_2_n_100), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g968(.AN (add_23_2_n_100), .B (in2[23]), .Y
       (add_23_2_n_102));
  XNOR2X1 add_23_2_g969(.A (in2[22]), .B (add_23_2_n_98), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g970(.AN (add_23_2_n_98), .B (in2[22]), .Y
       (add_23_2_n_100));
  XNOR2X1 add_23_2_g971(.A (in2[21]), .B (add_23_2_n_96), .Y
       (out1[21]));
  NAND2BX1 add_23_2_g972(.AN (add_23_2_n_96), .B (in2[21]), .Y
       (add_23_2_n_98));
  XNOR2X1 add_23_2_g973(.A (in2[20]), .B (add_23_2_n_94), .Y
       (out1[20]));
  NAND2BX1 add_23_2_g974(.AN (add_23_2_n_94), .B (in2[20]), .Y
       (add_23_2_n_96));
  XNOR2X1 add_23_2_g975(.A (in2[19]), .B (add_23_2_n_87), .Y
       (out1[19]));
  NAND2BX1 add_23_2_g976(.AN (add_23_2_n_87), .B (in2[19]), .Y
       (add_23_2_n_94));
  XNOR2X1 add_23_2_g977(.A (in2[17]), .B (add_23_2_n_84), .Y
       (out1[17]));
  XNOR2X1 add_23_2_g978(.A (add_23_2_n_24), .B (add_23_2_n_91), .Y
       (out1[15]));
  OAI21XL add_23_2_g979(.A0 (add_23_2_n_3), .A1 (add_23_2_n_83), .B0
       (add_23_2_n_16), .Y (add_23_2_n_91));
  XNOR2X1 add_23_2_g980(.A (in2[18]), .B (add_23_2_n_81), .Y
       (out1[18]));
  XNOR2X1 add_23_2_g981(.A (add_23_2_n_30), .B (add_23_2_n_83), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g982(.A (add_23_2_n_29), .B (add_23_2_n_82), .Y
       (out1[13]));
  NAND2BX1 add_23_2_g983(.AN (add_23_2_n_81), .B (in2[18]), .Y
       (add_23_2_n_87));
  XNOR2X1 add_23_2_g984(.A (add_23_2_n_27), .B (add_23_2_n_78), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g985(.A (in2[16]), .B (add_23_2_n_79), .Y
       (out1[16]));
  NAND2BX1 add_23_2_g986(.AN (add_23_2_n_79), .B (in2[16]), .Y
       (add_23_2_n_84));
  AOI21X1 add_23_2_g987(.A0 (add_23_2_n_32), .A1 (add_23_2_n_75), .B0
       (add_23_2_n_43), .Y (add_23_2_n_83));
  OAI2BB1X1 add_23_2_g988(.A0N (add_23_2_n_17), .A1N (add_23_2_n_75),
       .B0 (add_23_2_n_0), .Y (add_23_2_n_82));
  NAND3BXL add_23_2_g989(.AN (add_23_2_n_79), .B (in2[17]), .C
       (in2[16]), .Y (add_23_2_n_81));
  XNOR2X1 add_23_2_g990(.A (add_23_2_n_28), .B (add_23_2_n_75), .Y
       (out1[12]));
  AOI2BB1XL add_23_2_g991(.A0N (add_23_2_n_45), .A1N (add_23_2_n_74),
       .B0 (add_23_2_n_54), .Y (add_23_2_n_79));
  OAI21X1 add_23_2_g992(.A0 (add_23_2_n_18), .A1 (add_23_2_n_73), .B0
       (add_23_2_n_13), .Y (add_23_2_n_78));
  XNOR2X1 add_23_2_g993(.A (add_23_2_n_26), .B (add_23_2_n_73), .Y
       (out1[10]));
  XNOR2X1 add_23_2_g994(.A (add_23_2_n_25), .B (add_23_2_n_72), .Y
       (out1[9]));
  NAND2BX1 add_23_2_g995(.AN (add_23_2_n_49), .B (add_23_2_n_74), .Y
       (add_23_2_n_75));
  NAND2X1 add_23_2_g996(.A (add_23_2_n_41), .B (add_23_2_n_69), .Y
       (add_23_2_n_74));
  NOR2X1 add_23_2_g997(.A (add_23_2_n_44), .B (add_23_2_n_69), .Y
       (add_23_2_n_73));
  OAI21XL add_23_2_g998(.A0 (add_23_2_n_4), .A1 (add_23_2_n_67), .B0
       (add_23_2_n_2), .Y (add_23_2_n_72));
  XNOR2X1 add_23_2_g999(.A (add_23_2_n_35), .B (add_23_2_n_67), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g1000(.A (add_23_2_n_34), .B (add_23_2_n_68), .Y
       (out1[7]));
  NOR3X1 add_23_2_g1001(.A (add_23_2_n_67), .B (add_23_2_n_7), .C
       (add_23_2_n_4), .Y (add_23_2_n_69));
  OAI21X1 add_23_2_g1002(.A0 (add_23_2_n_12), .A1 (add_23_2_n_63), .B0
       (add_23_2_n_6), .Y (add_23_2_n_68));
  AOI211XL add_23_2_g1003(.A0 (add_23_2_n_31), .A1 (add_23_2_n_42), .B0
       (add_23_2_n_65), .C0 (add_23_2_n_39), .Y (add_23_2_n_67));
  XNOR2X1 add_23_2_g1004(.A (add_23_2_n_33), .B (add_23_2_n_63), .Y
       (out1[6]));
  OAI2BB1X1 add_23_2_g1005(.A0N (add_23_2_n_31), .A1N (add_23_2_n_62),
       .B0 (add_23_2_n_8), .Y (add_23_2_n_65));
  XNOR2X1 add_23_2_g1006(.A (add_23_2_n_37), .B (add_23_2_n_61), .Y
       (out1[5]));
  NOR2X1 add_23_2_g1007(.A (add_23_2_n_42), .B (add_23_2_n_62), .Y
       (add_23_2_n_63));
  NOR2X1 add_23_2_g1008(.A (add_23_2_n_1), .B (add_23_2_n_59), .Y
       (add_23_2_n_62));
  NAND2X1 add_23_2_g1009(.A (add_23_2_n_5), .B (add_23_2_n_59), .Y
       (add_23_2_n_61));
  XNOR2X1 add_23_2_g1010(.A (add_23_2_n_36), .B (add_23_2_n_58), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g1011(.AN (add_23_2_n_22), .B (add_23_2_n_58), .Y
       (add_23_2_n_59));
  ADDFX1 add_23_2_g1012(.A (add_23_2_n_55), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_58), .S (out1[3]));
  ADDFX1 add_23_2_g1013(.A (add_23_2_n_52), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_55), .S (out1[2]));
  OAI211X1 add_23_2_g1014(.A0 (add_23_2_n_45), .A1 (add_23_2_n_50), .B0
       (add_23_2_n_51), .C0 (add_23_2_n_21), .Y (add_23_2_n_54));
  ADDFX1 add_23_2_g1015(.A (add_23_2_n_46), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_52), .S (out1[1]));
  AOI21X1 add_23_2_g1016(.A0 (add_23_2_n_40), .A1 (add_23_2_n_43), .B0
       (add_23_2_n_38), .Y (add_23_2_n_51));
  INVX1 add_23_2_g1017(.A (add_23_2_n_49), .Y (add_23_2_n_50));
  OAI211X1 add_23_2_g1018(.A0 (add_23_2_n_13), .A1 (add_23_2_n_20), .B0
       (add_23_2_n_48), .C0 (add_23_2_n_23), .Y (add_23_2_n_49));
  NAND2X1 add_23_2_g1019(.A (add_23_2_n_41), .B (add_23_2_n_44), .Y
       (add_23_2_n_48));
  ADDHX1 add_23_2_g1020(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_46),
       .S (out1[0]));
  NAND2X1 add_23_2_g1021(.A (add_23_2_n_40), .B (add_23_2_n_32), .Y
       (add_23_2_n_45));
  OAI21X1 add_23_2_g1022(.A0 (add_23_2_n_2), .A1 (add_23_2_n_7), .B0
       (add_23_2_n_10), .Y (add_23_2_n_44));
  OAI21X1 add_23_2_g1023(.A0 (add_23_2_n_0), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_9), .Y (add_23_2_n_43));
  OAI21X1 add_23_2_g1024(.A0 (add_23_2_n_5), .A1 (add_23_2_n_1), .B0
       (add_23_2_n_11), .Y (add_23_2_n_42));
  NOR2X1 add_23_2_g1025(.A (add_23_2_n_6), .B (add_23_2_n_15), .Y
       (add_23_2_n_39));
  NOR2X1 add_23_2_g1026(.A (add_23_2_n_16), .B (add_23_2_n_14), .Y
       (add_23_2_n_38));
  NOR2X1 add_23_2_g1027(.A (add_23_2_n_20), .B (add_23_2_n_18), .Y
       (add_23_2_n_41));
  NAND2BX1 add_23_2_g1028(.AN (add_23_2_n_1), .B (add_23_2_n_11), .Y
       (add_23_2_n_37));
  NAND2BX1 add_23_2_g1029(.AN (add_23_2_n_22), .B (add_23_2_n_5), .Y
       (add_23_2_n_36));
  NOR2BX1 add_23_2_g1030(.AN (add_23_2_n_2), .B (add_23_2_n_4), .Y
       (add_23_2_n_35));
  NOR2X1 add_23_2_g1031(.A (add_23_2_n_14), .B (add_23_2_n_3), .Y
       (add_23_2_n_40));
  NAND2BX1 add_23_2_g1032(.AN (add_23_2_n_15), .B (add_23_2_n_8), .Y
       (add_23_2_n_34));
  NOR2BX1 add_23_2_g1033(.AN (add_23_2_n_6), .B (add_23_2_n_12), .Y
       (add_23_2_n_33));
  NOR2BX1 add_23_2_g1034(.AN (add_23_2_n_17), .B (add_23_2_n_19), .Y
       (add_23_2_n_32));
  NOR2BX1 add_23_2_g1035(.AN (add_23_2_n_16), .B (add_23_2_n_3), .Y
       (add_23_2_n_30));
  NOR2X1 add_23_2_g1036(.A (add_23_2_n_15), .B (add_23_2_n_12), .Y
       (add_23_2_n_31));
  NAND2BX1 add_23_2_g1037(.AN (add_23_2_n_19), .B (add_23_2_n_9), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g1038(.A (add_23_2_n_0), .B (add_23_2_n_17), .Y
       (add_23_2_n_28));
  NAND2BX1 add_23_2_g1039(.AN (add_23_2_n_20), .B (add_23_2_n_23), .Y
       (add_23_2_n_27));
  NOR2BX1 add_23_2_g1040(.AN (add_23_2_n_13), .B (add_23_2_n_18), .Y
       (add_23_2_n_26));
  NAND2BX1 add_23_2_g1041(.AN (add_23_2_n_7), .B (add_23_2_n_10), .Y
       (add_23_2_n_25));
  NAND2BX1 add_23_2_g1042(.AN (add_23_2_n_14), .B (add_23_2_n_21), .Y
       (add_23_2_n_24));
  NAND2X1 add_23_2_g1043(.A (in2[11]), .B (in1[11]), .Y
       (add_23_2_n_23));
  NOR2X1 add_23_2_g1044(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_22));
  NAND2X1 add_23_2_g1045(.A (in2[15]), .B (in1[15]), .Y
       (add_23_2_n_21));
  NOR2X1 add_23_2_g1046(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_20));
  NOR2X1 add_23_2_g1047(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_19));
  NOR2X1 add_23_2_g1048(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_18));
  OR2X1 add_23_2_g1049(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_17));
  NAND2X1 add_23_2_g1050(.A (in2[14]), .B (in1[14]), .Y
       (add_23_2_n_16));
  NOR2X1 add_23_2_g1051(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_15));
  NOR2X1 add_23_2_g1052(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_14));
  NAND2X1 add_23_2_g1053(.A (in2[10]), .B (in1[10]), .Y
       (add_23_2_n_13));
  NOR2X1 add_23_2_g1054(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g1055(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_11));
  NAND2X1 add_23_2_g1056(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_10));
  NAND2X1 add_23_2_g1057(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g1058(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g1059(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g1060(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g1061(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g1062(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g1063(.A (in2[14]), .B (in1[14]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g1064(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g1065(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g1066(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_0));
endmodule


