`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 22 2021 11:03:03 KST (Jan 22 2021 02:03:03 UTC)

module pw_feature_addr_gen_Add_32Ux8U_32U_4_0(in2, in1, out1);
  input [31:0] in2;
  input [7:0] in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire [7:0] in1;
  wire [31:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27,
       add_23_2_n_28, add_23_2_n_29, add_23_2_n_30, add_23_2_n_31;
  wire add_23_2_n_32, add_23_2_n_34, add_23_2_n_36, add_23_2_n_38,
       add_23_2_n_39, add_23_2_n_41, add_23_2_n_42, add_23_2_n_44;
  wire add_23_2_n_45, add_23_2_n_46, add_23_2_n_49, add_23_2_n_50,
       add_23_2_n_51, add_23_2_n_52, add_23_2_n_53, add_23_2_n_54;
  wire add_23_2_n_57, add_23_2_n_58, add_23_2_n_59, add_23_2_n_62,
       add_23_2_n_63, add_23_2_n_65, add_23_2_n_66, add_23_2_n_67;
  wire add_23_2_n_70, add_23_2_n_71, add_23_2_n_72, add_23_2_n_75,
       add_23_2_n_76, add_23_2_n_79, add_23_2_n_82, add_23_2_n_83;
  wire add_23_2_n_86, add_23_2_n_87, add_23_2_n_91, add_23_2_n_94,
       add_23_2_n_96;
  XNOR2X1 add_23_2_g859(.A (in2[31]), .B (add_23_2_n_96), .Y
       (out1[31]));
  XNOR2X1 add_23_2_g860(.A (in2[29]), .B (add_23_2_n_91), .Y
       (out1[29]));
  XNOR2X1 add_23_2_g861(.A (in2[30]), .B (add_23_2_n_94), .Y
       (out1[30]));
  XNOR2X1 add_23_2_g862(.A (in2[27]), .B (add_23_2_n_87), .Y
       (out1[27]));
  NAND2BX1 add_23_2_g863(.AN (add_23_2_n_94), .B (in2[30]), .Y
       (add_23_2_n_96));
  XNOR2X1 add_23_2_g864(.A (in2[25]), .B (add_23_2_n_82), .Y
       (out1[25]));
  NAND3BXL add_23_2_g865(.AN (add_23_2_n_86), .B (in2[28]), .C
       (in2[29]), .Y (add_23_2_n_94));
  XNOR2X1 add_23_2_g866(.A (in2[28]), .B (add_23_2_n_86), .Y
       (out1[28]));
  XNOR2X1 add_23_2_g867(.A (in2[23]), .B (add_23_2_n_79), .Y
       (out1[23]));
  NAND2BX1 add_23_2_g868(.AN (add_23_2_n_86), .B (in2[28]), .Y
       (add_23_2_n_91));
  XNOR2X1 add_23_2_g869(.A (in2[21]), .B (add_23_2_n_71), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g870(.A (in2[19]), .B (add_23_2_n_70), .Y
       (out1[19]));
  XOR2XL add_23_2_g871(.A (in2[26]), .B (add_23_2_n_83), .Y (out1[26]));
  NAND2X1 add_23_2_g872(.A (in2[26]), .B (add_23_2_n_83), .Y
       (add_23_2_n_87));
  NAND4XL add_23_2_g873(.A (in2[27]), .B (in2[26]), .C (add_23_2_n_8),
       .D (add_23_2_n_75), .Y (add_23_2_n_86));
  XNOR2X1 add_23_2_g874(.A (in2[24]), .B (add_23_2_n_76), .Y
       (out1[24]));
  XNOR2X1 add_23_2_g875(.A (in2[17]), .B (add_23_2_n_0), .Y (out1[17]));
  NOR2BX1 add_23_2_g876(.AN (add_23_2_n_8), .B (add_23_2_n_76), .Y
       (add_23_2_n_83));
  NAND2X1 add_23_2_g877(.A (in2[24]), .B (add_23_2_n_75), .Y
       (add_23_2_n_82));
  XNOR2X1 add_23_2_g878(.A (in2[15]), .B (add_23_2_n_63), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g879(.A (in2[22]), .B (add_23_2_n_72), .Y
       (out1[22]));
  NAND2BX1 add_23_2_g880(.AN (add_23_2_n_72), .B (in2[22]), .Y
       (add_23_2_n_79));
  XNOR2X1 add_23_2_g881(.A (in2[13]), .B (add_23_2_n_58), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g882(.A (in2[11]), .B (add_23_2_n_57), .Y
       (out1[11]));
  INVX1 add_23_2_g883(.A (add_23_2_n_76), .Y (add_23_2_n_75));
  NAND4X1 add_23_2_g884(.A (in2[23]), .B (add_23_2_n_10), .C (in2[22]),
       .D (add_23_2_n_65), .Y (add_23_2_n_76));
  XOR2XL add_23_2_g885(.A (in2[20]), .B (add_23_2_n_67), .Y (out1[20]));
  XOR2XL add_23_2_g886(.A (in2[18]), .B (add_23_2_n_66), .Y (out1[18]));
  NAND2X1 add_23_2_g887(.A (add_23_2_n_10), .B (add_23_2_n_67), .Y
       (add_23_2_n_72));
  NAND2X1 add_23_2_g888(.A (in2[20]), .B (add_23_2_n_67), .Y
       (add_23_2_n_71));
  NAND2X1 add_23_2_g889(.A (in2[18]), .B (add_23_2_n_66), .Y
       (add_23_2_n_70));
  XNOR2X1 add_23_2_g890(.A (in2[16]), .B (add_23_2_n_62), .Y
       (out1[16]));
  XNOR2X1 add_23_2_g891(.A (in2[9]), .B (add_23_2_n_52), .Y (out1[9]));
  NOR2X1 add_23_2_g892(.A (add_23_2_n_31), .B (add_23_2_n_62), .Y
       (add_23_2_n_67));
  NOR2X1 add_23_2_g893(.A (add_23_2_n_7), .B (add_23_2_n_62), .Y
       (add_23_2_n_66));
  NOR2X1 add_23_2_g895(.A (add_23_2_n_31), .B (add_23_2_n_62), .Y
       (add_23_2_n_65));
  XNOR2X1 add_23_2_g896(.A (in2[14]), .B (add_23_2_n_59), .Y
       (out1[14]));
  NAND2BX1 add_23_2_g897(.AN (add_23_2_n_59), .B (in2[14]), .Y
       (add_23_2_n_63));
  OR4X1 add_23_2_g899(.A (add_23_2_n_27), .B (add_23_2_n_1), .C
       (add_23_2_n_30), .D (add_23_2_n_49), .Y (add_23_2_n_62));
  XNOR2X1 add_23_2_g900(.A (in2[12]), .B (add_23_2_n_54), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g901(.A (in2[10]), .B (add_23_2_n_53), .Y
       (out1[10]));
  OR2XL add_23_2_g902(.A (add_23_2_n_16), .B (add_23_2_n_54), .Y
       (add_23_2_n_59));
  NAND2BX1 add_23_2_g903(.AN (add_23_2_n_54), .B (in2[12]), .Y
       (add_23_2_n_58));
  NAND2BX1 add_23_2_g904(.AN (add_23_2_n_53), .B (in2[10]), .Y
       (add_23_2_n_57));
  XNOR2X1 add_23_2_g905(.A (add_23_2_n_23), .B (add_23_2_n_51), .Y
       (out1[7]));
  XNOR2X1 add_23_2_g906(.A (in2[8]), .B (add_23_2_n_49), .Y (out1[8]));
  NAND2BX1 add_23_2_g907(.AN (add_23_2_n_30), .B (add_23_2_n_50), .Y
       (add_23_2_n_54));
  NAND2BX1 add_23_2_g908(.AN (add_23_2_n_11), .B (add_23_2_n_50), .Y
       (add_23_2_n_53));
  NAND2X1 add_23_2_g909(.A (in2[8]), .B (add_23_2_n_50), .Y
       (add_23_2_n_52));
  OAI21X1 add_23_2_g910(.A0 (add_23_2_n_6), .A1 (add_23_2_n_45), .B0
       (add_23_2_n_3), .Y (add_23_2_n_51));
  INVX1 add_23_2_g911(.A (add_23_2_n_50), .Y (add_23_2_n_49));
  OAI211X1 add_23_2_g912(.A0 (add_23_2_n_3), .A1 (add_23_2_n_13), .B0
       (add_23_2_n_46), .C0 (add_23_2_n_34), .Y (add_23_2_n_50));
  XNOR2X1 add_23_2_g913(.A (add_23_2_n_25), .B (add_23_2_n_45), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g914(.A (add_23_2_n_24), .B (add_23_2_n_44), .Y
       (out1[5]));
  AOI31X1 add_23_2_g915(.A0 (add_23_2_n_26), .A1 (add_23_2_n_20), .A2
       (add_23_2_n_41), .B0 (add_23_2_n_19), .Y (add_23_2_n_46));
  AOI21X1 add_23_2_g916(.A0 (add_23_2_n_26), .A1 (add_23_2_n_41), .B0
       (add_23_2_n_29), .Y (add_23_2_n_45));
  OAI21X1 add_23_2_g917(.A0 (add_23_2_n_15), .A1 (add_23_2_n_42), .B0
       (add_23_2_n_14), .Y (add_23_2_n_44));
  XNOR2X1 add_23_2_g918(.A (add_23_2_n_28), .B (add_23_2_n_42), .Y
       (out1[4]));
  INVX1 add_23_2_g919(.A (add_23_2_n_41), .Y (add_23_2_n_42));
  OAI21X1 add_23_2_g920(.A0 (add_23_2_n_9), .A1 (add_23_2_n_39), .B0
       (add_23_2_n_17), .Y (add_23_2_n_41));
  XNOR2X1 add_23_2_g921(.A (add_23_2_n_21), .B (add_23_2_n_38), .Y
       (out1[3]));
  AOI21X1 add_23_2_g922(.A0 (add_23_2_n_2), .A1 (add_23_2_n_36), .B0
       (add_23_2_n_4), .Y (add_23_2_n_39));
  OAI2BB1X1 add_23_2_g923(.A0N (add_23_2_n_2), .A1N (add_23_2_n_36),
       .B0 (add_23_2_n_5), .Y (add_23_2_n_38));
  XNOR2X1 add_23_2_g924(.A (add_23_2_n_22), .B (add_23_2_n_36), .Y
       (out1[2]));
  ADDFX1 add_23_2_g925(.A (add_23_2_n_32), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_36), .S (out1[1]));
  NAND2X1 add_23_2_g926(.A (add_23_2_n_20), .B (add_23_2_n_29), .Y
       (add_23_2_n_34));
  ADDHX1 add_23_2_g927(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_32),
       .S (out1[0]));
  NAND3BXL add_23_2_g928(.AN (add_23_2_n_7), .B (in2[18]), .C
       (in2[19]), .Y (add_23_2_n_31));
  NAND3BXL add_23_2_g929(.AN (add_23_2_n_11), .B (in2[10]), .C
       (in2[11]), .Y (add_23_2_n_30));
  OAI21X1 add_23_2_g930(.A0 (add_23_2_n_14), .A1 (add_23_2_n_12), .B0
       (add_23_2_n_18), .Y (add_23_2_n_29));
  NOR2BX1 add_23_2_g931(.AN (add_23_2_n_14), .B (add_23_2_n_15), .Y
       (add_23_2_n_28));
  NAND2BXL add_23_2_g932(.AN (add_23_2_n_16), .B (in2[15]), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g933(.A (add_23_2_n_12), .B (add_23_2_n_15), .Y
       (add_23_2_n_26));
  NOR2BX1 add_23_2_g934(.AN (add_23_2_n_3), .B (add_23_2_n_6), .Y
       (add_23_2_n_25));
  NAND2BX1 add_23_2_g935(.AN (add_23_2_n_12), .B (add_23_2_n_18), .Y
       (add_23_2_n_24));
  OR2XL add_23_2_g936(.A (add_23_2_n_19), .B (add_23_2_n_13), .Y
       (add_23_2_n_23));
  NAND2X1 add_23_2_g937(.A (add_23_2_n_5), .B (add_23_2_n_2), .Y
       (add_23_2_n_22));
  NAND2BX1 add_23_2_g938(.AN (add_23_2_n_9), .B (add_23_2_n_17), .Y
       (add_23_2_n_21));
  NOR2X1 add_23_2_g939(.A (add_23_2_n_13), .B (add_23_2_n_6), .Y
       (add_23_2_n_20));
  AND2XL add_23_2_g940(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_19));
  NAND2X1 add_23_2_g941(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_18));
  NAND2X1 add_23_2_g942(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_17));
  NAND2X1 add_23_2_g943(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_16));
  NOR2X1 add_23_2_g944(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g945(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g946(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_13));
  NOR2X1 add_23_2_g947(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_12));
  INVX1 add_23_2_g948(.A (add_23_2_n_5), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g949(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_11));
  AND2XL add_23_2_g950(.A (in2[21]), .B (in2[20]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g951(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_9));
  AND2XL add_23_2_g952(.A (in2[25]), .B (in2[24]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g953(.A (in2[17]), .B (in2[16]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g954(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g955(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g956(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_3));
  OR2X1 add_23_2_g957(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_2));
  INVX1 add_23_2_g958(.A (in2[14]), .Y (add_23_2_n_1));
  NAND2BX1 add_23_2_g2(.AN (add_23_2_n_62), .B (in2[16]), .Y
       (add_23_2_n_0));
endmodule


