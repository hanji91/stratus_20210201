`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:06 KST (Dec  7 2020 13:18:06 UTC)

module st_feature_addr_gen_Add_16Ux16U_16U_4(in2, in1, out1);
  input [15:0] in2, in1;
  output [15:0] out1;
  wire [15:0] in2, in1;
  wire [15:0] out1;
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
       add_23_2_n_44, add_23_2_n_45, add_23_2_n_47, add_23_2_n_48;
  wire add_23_2_n_50, add_23_2_n_52, add_23_2_n_53, add_23_2_n_55,
       add_23_2_n_56, add_23_2_n_58, add_23_2_n_59, add_23_2_n_60;
  wire add_23_2_n_63, add_23_2_n_64, add_23_2_n_65, add_23_2_n_68,
       add_23_2_n_69, add_23_2_n_70, add_23_2_n_73, add_23_2_n_74;
  wire add_23_2_n_77, add_23_2_n_78, add_23_2_n_80, add_23_2_n_81;
  XNOR2X1 add_23_2_g530(.A (add_23_2_n_32), .B (add_23_2_n_81), .Y
       (out1[15]));
  ADDFX1 add_23_2_g531(.A (add_23_2_n_80), .B (in1[14]), .CI (in2[14]),
       .CO (add_23_2_n_81), .S (out1[14]));
  OAI21X1 add_23_2_g532(.A0 (add_23_2_n_10), .A1 (add_23_2_n_78), .B0
       (add_23_2_n_21), .Y (add_23_2_n_80));
  XNOR2X1 add_23_2_g533(.A (add_23_2_n_26), .B (add_23_2_n_77), .Y
       (out1[13]));
  AOI21X1 add_23_2_g534(.A0 (add_23_2_n_0), .A1 (add_23_2_n_73), .B0
       (add_23_2_n_14), .Y (add_23_2_n_78));
  OAI2BB1X1 add_23_2_g535(.A0N (add_23_2_n_0), .A1N (add_23_2_n_73),
       .B0 (add_23_2_n_15), .Y (add_23_2_n_77));
  XNOR2X1 add_23_2_g536(.A (add_23_2_n_30), .B (add_23_2_n_73), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g537(.A (add_23_2_n_28), .B (add_23_2_n_74), .Y
       (out1[11]));
  OAI21X1 add_23_2_g538(.A0 (add_23_2_n_1), .A1 (add_23_2_n_68), .B0
       (add_23_2_n_2), .Y (add_23_2_n_74));
  OAI211X1 add_23_2_g539(.A0 (add_23_2_n_2), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_70), .C0 (add_23_2_n_48), .Y (add_23_2_n_73));
  XNOR2X1 add_23_2_g540(.A (add_23_2_n_36), .B (add_23_2_n_69), .Y
       (out1[9]));
  XNOR2X1 add_23_2_g541(.A (add_23_2_n_40), .B (add_23_2_n_68), .Y
       (out1[10]));
  AOI31X1 add_23_2_g542(.A0 (add_23_2_n_41), .A1 (add_23_2_n_42), .A2
       (add_23_2_n_63), .B0 (add_23_2_n_11), .Y (add_23_2_n_70));
  OAI21X1 add_23_2_g543(.A0 (add_23_2_n_3), .A1 (add_23_2_n_64), .B0
       (add_23_2_n_8), .Y (add_23_2_n_69));
  AOI21X1 add_23_2_g544(.A0 (add_23_2_n_41), .A1 (add_23_2_n_63), .B0
       (add_23_2_n_43), .Y (add_23_2_n_68));
  XNOR2X1 add_23_2_g545(.A (add_23_2_n_38), .B (add_23_2_n_64), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g546(.A (add_23_2_n_37), .B (add_23_2_n_65), .Y
       (out1[7]));
  OAI21X1 add_23_2_g547(.A0 (add_23_2_n_20), .A1 (add_23_2_n_58), .B0
       (add_23_2_n_6), .Y (add_23_2_n_65));
  INVX1 add_23_2_g548(.A (add_23_2_n_63), .Y (add_23_2_n_64));
  OAI211X1 add_23_2_g549(.A0 (add_23_2_n_6), .A1 (add_23_2_n_13), .B0
       (add_23_2_n_60), .C0 (add_23_2_n_47), .Y (add_23_2_n_63));
  XNOR2X1 add_23_2_g550(.A (add_23_2_n_27), .B (add_23_2_n_58), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g551(.A (add_23_2_n_39), .B (add_23_2_n_59), .Y
       (out1[5]));
  AOI31X1 add_23_2_g552(.A0 (add_23_2_n_33), .A1 (add_23_2_n_34), .A2
       (add_23_2_n_55), .B0 (add_23_2_n_24), .Y (add_23_2_n_60));
  OAI21X1 add_23_2_g553(.A0 (add_23_2_n_16), .A1 (add_23_2_n_56), .B0
       (add_23_2_n_17), .Y (add_23_2_n_59));
  AOI21X1 add_23_2_g554(.A0 (add_23_2_n_33), .A1 (add_23_2_n_55), .B0
       (add_23_2_n_44), .Y (add_23_2_n_58));
  XNOR2X1 add_23_2_g555(.A (add_23_2_n_29), .B (add_23_2_n_56), .Y
       (out1[4]));
  INVX1 add_23_2_g556(.A (add_23_2_n_55), .Y (add_23_2_n_56));
  OAI21X1 add_23_2_g557(.A0 (add_23_2_n_12), .A1 (add_23_2_n_52), .B0
       (add_23_2_n_25), .Y (add_23_2_n_55));
  XNOR2X1 add_23_2_g558(.A (add_23_2_n_31), .B (add_23_2_n_53), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g559(.A0N (add_23_2_n_9), .A1N (add_23_2_n_50),
       .B0 (add_23_2_n_5), .Y (add_23_2_n_53));
  AOI21X1 add_23_2_g560(.A0 (add_23_2_n_9), .A1 (add_23_2_n_50), .B0
       (add_23_2_n_4), .Y (add_23_2_n_52));
  XNOR2X1 add_23_2_g561(.A (add_23_2_n_35), .B (add_23_2_n_50), .Y
       (out1[2]));
  ADDFX1 add_23_2_g562(.A (add_23_2_n_45), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_50), .S (out1[1]));
  NAND2XL add_23_2_g563(.A (add_23_2_n_42), .B (add_23_2_n_43), .Y
       (add_23_2_n_48));
  NAND2XL add_23_2_g564(.A (add_23_2_n_34), .B (add_23_2_n_44), .Y
       (add_23_2_n_47));
  ADDHX1 add_23_2_g565(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_45),
       .S (out1[0]));
  OAI21X1 add_23_2_g566(.A0 (add_23_2_n_17), .A1 (add_23_2_n_18), .B0
       (add_23_2_n_23), .Y (add_23_2_n_44));
  OAI21X1 add_23_2_g567(.A0 (add_23_2_n_8), .A1 (add_23_2_n_7), .B0
       (add_23_2_n_22), .Y (add_23_2_n_43));
  NOR2BX1 add_23_2_g568(.AN (add_23_2_n_2), .B (add_23_2_n_1), .Y
       (add_23_2_n_40));
  NAND2BX1 add_23_2_g569(.AN (add_23_2_n_18), .B (add_23_2_n_23), .Y
       (add_23_2_n_39));
  NOR2BX1 add_23_2_g570(.AN (add_23_2_n_8), .B (add_23_2_n_3), .Y
       (add_23_2_n_38));
  OR2XL add_23_2_g571(.A (add_23_2_n_24), .B (add_23_2_n_13), .Y
       (add_23_2_n_37));
  NAND2BX1 add_23_2_g572(.AN (add_23_2_n_7), .B (add_23_2_n_22), .Y
       (add_23_2_n_36));
  NOR2X1 add_23_2_g573(.A (add_23_2_n_19), .B (add_23_2_n_1), .Y
       (add_23_2_n_42));
  NAND2X1 add_23_2_g574(.A (add_23_2_n_5), .B (add_23_2_n_9), .Y
       (add_23_2_n_35));
  NOR2X1 add_23_2_g575(.A (add_23_2_n_7), .B (add_23_2_n_3), .Y
       (add_23_2_n_41));
  XNOR2X1 add_23_2_g576(.A (in2[15]), .B (in1[15]), .Y (add_23_2_n_32));
  NAND2BX1 add_23_2_g577(.AN (add_23_2_n_12), .B (add_23_2_n_25), .Y
       (add_23_2_n_31));
  NAND2X1 add_23_2_g578(.A (add_23_2_n_15), .B (add_23_2_n_0), .Y
       (add_23_2_n_30));
  NOR2BX1 add_23_2_g579(.AN (add_23_2_n_17), .B (add_23_2_n_16), .Y
       (add_23_2_n_29));
  OR2XL add_23_2_g580(.A (add_23_2_n_11), .B (add_23_2_n_19), .Y
       (add_23_2_n_28));
  NOR2BX1 add_23_2_g581(.AN (add_23_2_n_6), .B (add_23_2_n_20), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g582(.A (add_23_2_n_13), .B (add_23_2_n_20), .Y
       (add_23_2_n_34));
  NOR2X1 add_23_2_g583(.A (add_23_2_n_18), .B (add_23_2_n_16), .Y
       (add_23_2_n_33));
  NAND2BX1 add_23_2_g584(.AN (add_23_2_n_10), .B (add_23_2_n_21), .Y
       (add_23_2_n_26));
  INVX1 add_23_2_g585(.A (add_23_2_n_15), .Y (add_23_2_n_14));
  NAND2X1 add_23_2_g586(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_25));
  AND2X1 add_23_2_g587(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g588(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_23));
  NAND2X1 add_23_2_g589(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_22));
  NAND2X1 add_23_2_g590(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_21));
  NOR2X1 add_23_2_g591(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_20));
  NOR2X1 add_23_2_g592(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_19));
  NOR2X1 add_23_2_g593(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_18));
  NAND2X1 add_23_2_g594(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_17));
  NOR2X1 add_23_2_g595(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_16));
  NAND2X1 add_23_2_g596(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_15));
  NOR2X1 add_23_2_g597(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_13));
  INVX1 add_23_2_g598(.A (add_23_2_n_5), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g599(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_12));
  AND2X1 add_23_2_g600(.A (in2[11]), .B (in1[11]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g601(.A (in2[13]), .B (in1[13]), .Y (add_23_2_n_10));
  OR2X1 add_23_2_g602(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g603(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g604(.A (in2[9]), .B (in1[9]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g605(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g606(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g607(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g608(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g609(.A (in2[10]), .B (in1[10]), .Y (add_23_2_n_1));
  OR2X1 add_23_2_g610(.A (in2[12]), .B (in1[12]), .Y (add_23_2_n_0));
endmodule


