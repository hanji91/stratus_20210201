`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 23:50:10 KST (Dec  7 2020 14:50:10 UTC)

module st_weight_addr_gen_Sub_16Ux16U_17S_4_7(in2, in1, out1);
  input [15:0] in2, in1;
  output [16:0] out1;
  wire [15:0] in2, in1;
  wire [16:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_14, sub_23_2_n_15;
  wire sub_23_2_n_16, sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_19,
       sub_23_2_n_20, sub_23_2_n_21, sub_23_2_n_22, sub_23_2_n_23;
  wire sub_23_2_n_24, sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_27,
       sub_23_2_n_28, sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_31;
  wire sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34, sub_23_2_n_36,
       sub_23_2_n_37, sub_23_2_n_38, sub_23_2_n_39, sub_23_2_n_40;
  wire sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_43, sub_23_2_n_44,
       sub_23_2_n_45, sub_23_2_n_46, sub_23_2_n_47, sub_23_2_n_48;
  wire sub_23_2_n_49, sub_23_2_n_50, sub_23_2_n_51, sub_23_2_n_52,
       sub_23_2_n_53, sub_23_2_n_55, sub_23_2_n_56, sub_23_2_n_57;
  wire sub_23_2_n_60, sub_23_2_n_61, sub_23_2_n_63, sub_23_2_n_64,
       sub_23_2_n_65, sub_23_2_n_67, sub_23_2_n_69, sub_23_2_n_70;
  wire sub_23_2_n_71, sub_23_2_n_74, sub_23_2_n_75, sub_23_2_n_76,
       sub_23_2_n_77, sub_23_2_n_81, sub_23_2_n_83, sub_23_2_n_84;
  wire sub_23_2_n_88;
  XNOR2X1 sub_23_2_g597(.A (sub_23_2_n_32), .B (sub_23_2_n_88), .Y
       (out1[15]));
  AOI21X1 sub_23_2_g598(.A0 (sub_23_2_n_22), .A1 (sub_23_2_n_84), .B0
       (sub_23_2_n_20), .Y (sub_23_2_n_88));
  XNOR2X1 sub_23_2_g599(.A (sub_23_2_n_31), .B (sub_23_2_n_84), .Y
       (out1[14]));
  XNOR2X1 sub_23_2_g600(.A (sub_23_2_n_29), .B (sub_23_2_n_83), .Y
       (out1[13]));
  XNOR2X1 sub_23_2_g601(.A (sub_23_2_n_40), .B (sub_23_2_n_81), .Y
       (out1[11]));
  OAI21X1 sub_23_2_g602(.A0 (sub_23_2_n_37), .A1 (sub_23_2_n_77), .B0
       (sub_23_2_n_48), .Y (sub_23_2_n_84));
  AOI2BB1XL sub_23_2_g603(.A0N (sub_23_2_n_17), .A1N (sub_23_2_n_77),
       .B0 (sub_23_2_n_27), .Y (sub_23_2_n_83));
  XNOR2X1 sub_23_2_g604(.A (sub_23_2_n_30), .B (sub_23_2_n_77), .Y
       (out1[12]));
  OAI2BB1X1 sub_23_2_g605(.A0N (sub_23_2_n_6), .A1N (sub_23_2_n_76),
       .B0 (sub_23_2_n_19), .Y (sub_23_2_n_81));
  AOI21X1 sub_23_2_g606(.A0 (sub_23_2_n_51), .A1 (sub_23_2_n_75), .B0
       (sub_23_2_n_56), .Y (out1[16]));
  XNOR2X1 sub_23_2_g607(.A (sub_23_2_n_41), .B (sub_23_2_n_76), .Y
       (out1[10]));
  XNOR2X1 sub_23_2_g608(.A (sub_23_2_n_39), .B (sub_23_2_n_74), .Y
       (out1[9]));
  NOR2X1 sub_23_2_g609(.A (sub_23_2_n_52), .B (sub_23_2_n_75), .Y
       (sub_23_2_n_77));
  NAND2X1 sub_23_2_g610(.A (sub_23_2_n_49), .B (sub_23_2_n_71), .Y
       (sub_23_2_n_76));
  NOR2X1 sub_23_2_g611(.A (sub_23_2_n_36), .B (sub_23_2_n_71), .Y
       (sub_23_2_n_75));
  OAI2BB1X1 sub_23_2_g612(.A0N (sub_23_2_n_10), .A1N (sub_23_2_n_69),
       .B0 (sub_23_2_n_5), .Y (sub_23_2_n_74));
  XNOR2X1 sub_23_2_g613(.A (sub_23_2_n_43), .B (sub_23_2_n_69), .Y
       (out1[8]));
  XNOR2X1 sub_23_2_g614(.A (sub_23_2_n_42), .B (sub_23_2_n_70), .Y
       (out1[7]));
  NAND3X1 sub_23_2_g615(.A (sub_23_2_n_69), .B (sub_23_2_n_21), .C
       (sub_23_2_n_10), .Y (sub_23_2_n_71));
  OAI21X1 sub_23_2_g616(.A0 (sub_23_2_n_23), .A1 (sub_23_2_n_65), .B0
       (sub_23_2_n_25), .Y (sub_23_2_n_70));
  OAI221X1 sub_23_2_g617(.A0 (sub_23_2_n_47), .A1 (sub_23_2_n_50), .B0
       (sub_23_2_n_24), .B1 (sub_23_2_n_25), .C0 (sub_23_2_n_67), .Y
       (sub_23_2_n_69));
  XNOR2X1 sub_23_2_g618(.A (sub_23_2_n_44), .B (sub_23_2_n_65), .Y
       (out1[6]));
  AOI2BB1XL sub_23_2_g619(.A0N (sub_23_2_n_47), .A1N (sub_23_2_n_64),
       .B0 (sub_23_2_n_28), .Y (sub_23_2_n_67));
  XNOR2X1 sub_23_2_g620(.A (sub_23_2_n_33), .B (sub_23_2_n_63), .Y
       (out1[5]));
  AND2XL sub_23_2_g621(.A (sub_23_2_n_50), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_65));
  OR2XL sub_23_2_g622(.A (sub_23_2_n_26), .B (sub_23_2_n_61), .Y
       (sub_23_2_n_64));
  NAND2X1 sub_23_2_g623(.A (sub_23_2_n_9), .B (sub_23_2_n_61), .Y
       (sub_23_2_n_63));
  XNOR2X1 sub_23_2_g624(.A (sub_23_2_n_34), .B (sub_23_2_n_60), .Y
       (out1[4]));
  NAND2X1 sub_23_2_g625(.A (sub_23_2_n_12), .B (sub_23_2_n_60), .Y
       (sub_23_2_n_61));
  ADDFX1 sub_23_2_g626(.A (sub_23_2_n_57), .B (in2[3]), .CI
       (sub_23_2_n_3), .CO (sub_23_2_n_60), .S (out1[3]));
  ADDFX1 sub_23_2_g627(.A (sub_23_2_n_53), .B (in2[2]), .CI
       (sub_23_2_n_0), .CO (sub_23_2_n_57), .S (out1[2]));
  OAI211X1 sub_23_2_g628(.A0 (sub_23_2_n_38), .A1 (sub_23_2_n_48), .B0
       (sub_23_2_n_55), .C0 (sub_23_2_n_45), .Y (sub_23_2_n_56));
  AOI21X1 sub_23_2_g629(.A0 (sub_23_2_n_51), .A1 (sub_23_2_n_52), .B0
       (sub_23_2_n_13), .Y (sub_23_2_n_55));
  ADDFX1 sub_23_2_g630(.A (sub_23_2_n_4), .B (in2[1]), .CI
       (sub_23_2_n_1), .CO (sub_23_2_n_53), .S (out1[1]));
  OAI221X1 sub_23_2_g631(.A0 (sub_23_2_n_36), .A1 (sub_23_2_n_49), .B0
       (sub_23_2_n_7), .B1 (sub_23_2_n_19), .C0 (sub_23_2_n_15), .Y
       (sub_23_2_n_52));
  NOR2X1 sub_23_2_g632(.A (sub_23_2_n_38), .B (sub_23_2_n_37), .Y
       (sub_23_2_n_51));
  AOI2BB1XL sub_23_2_g633(.A0N (sub_23_2_n_26), .A1N (sub_23_2_n_9),
       .B0 (sub_23_2_n_11), .Y (sub_23_2_n_50));
  NOR2X1 sub_23_2_g634(.A (sub_23_2_n_16), .B (sub_23_2_n_46), .Y
       (sub_23_2_n_49));
  AOI21X1 sub_23_2_g635(.A0 (sub_23_2_n_18), .A1 (sub_23_2_n_27), .B0
       (sub_23_2_n_14), .Y (sub_23_2_n_48));
  NOR2BX1 sub_23_2_g636(.AN (sub_23_2_n_21), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_46));
  NAND2X1 sub_23_2_g637(.A (sub_23_2_n_8), .B (sub_23_2_n_20), .Y
       (sub_23_2_n_45));
  OR2XL sub_23_2_g638(.A (sub_23_2_n_24), .B (sub_23_2_n_23), .Y
       (sub_23_2_n_47));
  NOR2BX1 sub_23_2_g639(.AN (sub_23_2_n_25), .B (sub_23_2_n_23), .Y
       (sub_23_2_n_44));
  NAND2X1 sub_23_2_g640(.A (sub_23_2_n_10), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_43));
  OR2XL sub_23_2_g641(.A (sub_23_2_n_24), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_42));
  NAND2X1 sub_23_2_g642(.A (sub_23_2_n_6), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_41));
  NAND2BX1 sub_23_2_g643(.AN (sub_23_2_n_7), .B (sub_23_2_n_15), .Y
       (sub_23_2_n_40));
  NAND2BX1 sub_23_2_g644(.AN (sub_23_2_n_16), .B (sub_23_2_n_21), .Y
       (sub_23_2_n_39));
  OAI2BB1X1 sub_23_2_g645(.A0N (in2[0]), .A1N (sub_23_2_n_2), .B0
       (sub_23_2_n_4), .Y (out1[0]));
  NAND2X1 sub_23_2_g646(.A (sub_23_2_n_8), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_38));
  NAND2X1 sub_23_2_g647(.A (sub_23_2_n_12), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_34));
  OR2XL sub_23_2_g648(.A (sub_23_2_n_26), .B (sub_23_2_n_11), .Y
       (sub_23_2_n_33));
  NOR2BX1 sub_23_2_g649(.AN (sub_23_2_n_8), .B (sub_23_2_n_13), .Y
       (sub_23_2_n_32));
  NAND2BX1 sub_23_2_g650(.AN (sub_23_2_n_17), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_37));
  NAND2BX1 sub_23_2_g651(.AN (sub_23_2_n_20), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_31));
  NAND2BX1 sub_23_2_g652(.AN (sub_23_2_n_7), .B (sub_23_2_n_6), .Y
       (sub_23_2_n_36));
  NOR2X1 sub_23_2_g653(.A (sub_23_2_n_17), .B (sub_23_2_n_27), .Y
       (sub_23_2_n_30));
  NOR2BX1 sub_23_2_g654(.AN (sub_23_2_n_18), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_29));
  NOR2BX1 sub_23_2_g655(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_28));
  NOR2BX1 sub_23_2_g656(.AN (in2[12]), .B (in1[12]), .Y
       (sub_23_2_n_27));
  NOR2BX1 sub_23_2_g657(.AN (in1[5]), .B (in2[5]), .Y (sub_23_2_n_26));
  NAND2BX1 sub_23_2_g658(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_25));
  NOR2BX1 sub_23_2_g659(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_24));
  NOR2BX1 sub_23_2_g660(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_23));
  NAND2BX1 sub_23_2_g661(.AN (in2[14]), .B (in1[14]), .Y
       (sub_23_2_n_22));
  NAND2BX1 sub_23_2_g662(.AN (in2[9]), .B (in1[9]), .Y (sub_23_2_n_21));
  NOR2BX1 sub_23_2_g663(.AN (in2[14]), .B (in1[14]), .Y
       (sub_23_2_n_20));
  NAND2BX1 sub_23_2_g664(.AN (in1[10]), .B (in2[10]), .Y
       (sub_23_2_n_19));
  NAND2BX1 sub_23_2_g665(.AN (in2[13]), .B (in1[13]), .Y
       (sub_23_2_n_18));
  NOR2BX1 sub_23_2_g666(.AN (in1[12]), .B (in2[12]), .Y
       (sub_23_2_n_17));
  NOR2BX1 sub_23_2_g667(.AN (in2[9]), .B (in1[9]), .Y (sub_23_2_n_16));
  NAND2BX1 sub_23_2_g668(.AN (in1[11]), .B (in2[11]), .Y
       (sub_23_2_n_15));
  NOR2BX1 sub_23_2_g669(.AN (in2[13]), .B (in1[13]), .Y
       (sub_23_2_n_14));
  NOR2BX1 sub_23_2_g670(.AN (in2[15]), .B (in1[15]), .Y
       (sub_23_2_n_13));
  NAND2BX1 sub_23_2_g671(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_12));
  NOR2BX1 sub_23_2_g672(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_11));
  NAND2BX1 sub_23_2_g673(.AN (in2[8]), .B (in1[8]), .Y (sub_23_2_n_10));
  NAND2BX1 sub_23_2_g674(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_9));
  NAND2BX1 sub_23_2_g675(.AN (in2[15]), .B (in1[15]), .Y
       (sub_23_2_n_8));
  NOR2BX1 sub_23_2_g676(.AN (in1[11]), .B (in2[11]), .Y (sub_23_2_n_7));
  NAND2BX1 sub_23_2_g677(.AN (in2[10]), .B (in1[10]), .Y
       (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g678(.AN (in1[8]), .B (in2[8]), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g679(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_4));
  INVX1 sub_23_2_g680(.A (in1[3]), .Y (sub_23_2_n_3));
  INVXL sub_23_2_g681(.A (in1[0]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g682(.A (in1[1]), .Y (sub_23_2_n_1));
  INVX1 sub_23_2_g683(.A (in1[2]), .Y (sub_23_2_n_0));
endmodule


