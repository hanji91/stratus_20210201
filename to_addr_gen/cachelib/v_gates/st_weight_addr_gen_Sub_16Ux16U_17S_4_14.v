`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:50:42 KST (Jan 19 2021 07:50:42 UTC)

module st_weight_addr_gen_Sub_16Ux16U_17S_4_14(in2, in1, out1);
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
  wire sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34, sub_23_2_n_35,
       sub_23_2_n_36, sub_23_2_n_37, sub_23_2_n_38, sub_23_2_n_40;
  wire sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_43, sub_23_2_n_44,
       sub_23_2_n_45, sub_23_2_n_46, sub_23_2_n_47, sub_23_2_n_48;
  wire sub_23_2_n_49, sub_23_2_n_50, sub_23_2_n_51, sub_23_2_n_52,
       sub_23_2_n_53, sub_23_2_n_54, sub_23_2_n_55, sub_23_2_n_56;
  wire sub_23_2_n_57, sub_23_2_n_58, sub_23_2_n_59, sub_23_2_n_60,
       sub_23_2_n_62, sub_23_2_n_63, sub_23_2_n_64, sub_23_2_n_66;
  wire sub_23_2_n_67, sub_23_2_n_69, sub_23_2_n_70, sub_23_2_n_72,
       sub_23_2_n_73, sub_23_2_n_76, sub_23_2_n_77, sub_23_2_n_80;
  wire sub_23_2_n_81, sub_23_2_n_82, sub_23_2_n_87, sub_23_2_n_88,
       sub_23_2_n_89, sub_23_2_n_93;
  XNOR2X1 sub_23_2_g616(.A (sub_23_2_n_47), .B (sub_23_2_n_93), .Y
       (out1[15]));
  AOI21X1 sub_23_2_g617(.A0 (sub_23_2_n_19), .A1 (sub_23_2_n_88), .B0
       (sub_23_2_n_21), .Y (sub_23_2_n_93));
  XNOR2X1 sub_23_2_g618(.A (sub_23_2_n_0), .B (sub_23_2_n_89), .Y
       (out1[11]));
  XNOR2X1 sub_23_2_g619(.A (sub_23_2_n_38), .B (sub_23_2_n_88), .Y
       (out1[14]));
  XNOR2X1 sub_23_2_g620(.A (sub_23_2_n_35), .B (sub_23_2_n_87), .Y
       (out1[13]));
  AOI21X1 sub_23_2_g621(.A0 (sub_23_2_n_22), .A1 (sub_23_2_n_82), .B0
       (sub_23_2_n_5), .Y (sub_23_2_n_89));
  OAI21X1 sub_23_2_g622(.A0 (sub_23_2_n_41), .A1 (sub_23_2_n_80), .B0
       (sub_23_2_n_53), .Y (sub_23_2_n_88));
  AOI2BB1XL sub_23_2_g623(.A0N (sub_23_2_n_12), .A1N (sub_23_2_n_80),
       .B0 (sub_23_2_n_9), .Y (sub_23_2_n_87));
  XNOR2X1 sub_23_2_g624(.A (sub_23_2_n_46), .B (sub_23_2_n_82), .Y
       (out1[10]));
  XNOR2X1 sub_23_2_g625(.A (sub_23_2_n_45), .B (sub_23_2_n_81), .Y
       (out1[9]));
  XNOR2X1 sub_23_2_g626(.A (sub_23_2_n_32), .B (sub_23_2_n_80), .Y
       (out1[12]));
  AOI31X1 sub_23_2_g627(.A0 (sub_23_2_n_57), .A1 (sub_23_2_n_56), .A2
       (sub_23_2_n_76), .B0 (sub_23_2_n_64), .Y (out1[16]));
  OAI2BB1X1 sub_23_2_g628(.A0N (sub_23_2_n_49), .A1N (sub_23_2_n_76),
       .B0 (sub_23_2_n_54), .Y (sub_23_2_n_82));
  AOI21X1 sub_23_2_g629(.A0 (sub_23_2_n_17), .A1 (sub_23_2_n_76), .B0
       (sub_23_2_n_10), .Y (sub_23_2_n_81));
  AOI21X1 sub_23_2_g630(.A0 (sub_23_2_n_57), .A1 (sub_23_2_n_76), .B0
       (sub_23_2_n_59), .Y (sub_23_2_n_80));
  XNOR2X1 sub_23_2_g631(.A (sub_23_2_n_43), .B (sub_23_2_n_76), .Y
       (out1[8]));
  XNOR2X1 sub_23_2_g632(.A (sub_23_2_n_44), .B (sub_23_2_n_77), .Y
       (out1[7]));
  AOI21X1 sub_23_2_g633(.A0 (sub_23_2_n_18), .A1 (sub_23_2_n_73), .B0
       (sub_23_2_n_3), .Y (sub_23_2_n_77));
  OAI211X1 sub_23_2_g634(.A0 (sub_23_2_n_51), .A1 (sub_23_2_n_70), .B0
       (sub_23_2_n_60), .C0 (sub_23_2_n_27), .Y (sub_23_2_n_76));
  XNOR2X1 sub_23_2_g635(.A (sub_23_2_n_36), .B (sub_23_2_n_73), .Y
       (out1[6]));
  XNOR2X1 sub_23_2_g636(.A (sub_23_2_n_33), .B (sub_23_2_n_72), .Y
       (out1[5]));
  OAI21X1 sub_23_2_g637(.A0 (sub_23_2_n_51), .A1 (sub_23_2_n_69), .B0
       (sub_23_2_n_55), .Y (sub_23_2_n_73));
  AOI2BB1XL sub_23_2_g638(.A0N (sub_23_2_n_7), .A1N (sub_23_2_n_69),
       .B0 (sub_23_2_n_24), .Y (sub_23_2_n_72));
  XNOR2X1 sub_23_2_g639(.A (sub_23_2_n_37), .B (sub_23_2_n_69), .Y
       (out1[4]));
  OR2XL sub_23_2_g640(.A (sub_23_2_n_50), .B (sub_23_2_n_69), .Y
       (sub_23_2_n_70));
  AOI21X1 sub_23_2_g641(.A0 (sub_23_2_n_30), .A1 (sub_23_2_n_66), .B0
       (sub_23_2_n_13), .Y (sub_23_2_n_69));
  XNOR2X1 sub_23_2_g642(.A (sub_23_2_n_34), .B (sub_23_2_n_67), .Y
       (out1[3]));
  AOI21X1 sub_23_2_g643(.A0 (sub_23_2_n_11), .A1 (sub_23_2_n_62), .B0
       (sub_23_2_n_4), .Y (sub_23_2_n_67));
  AO21XL sub_23_2_g644(.A0 (sub_23_2_n_11), .A1 (sub_23_2_n_62), .B0
       (sub_23_2_n_4), .Y (sub_23_2_n_66));
  XNOR2X1 sub_23_2_g645(.A (sub_23_2_n_31), .B (sub_23_2_n_62), .Y
       (out1[2]));
  OAI211X1 sub_23_2_g646(.A0 (sub_23_2_n_42), .A1 (sub_23_2_n_53), .B0
       (sub_23_2_n_63), .C0 (sub_23_2_n_40), .Y (sub_23_2_n_64));
  AOI21X1 sub_23_2_g647(.A0 (sub_23_2_n_56), .A1 (sub_23_2_n_59), .B0
       (sub_23_2_n_14), .Y (sub_23_2_n_63));
  ADDFX1 sub_23_2_g648(.A (sub_23_2_n_2), .B (in2[1]), .CI
       (sub_23_2_n_1), .CO (sub_23_2_n_62), .S (out1[1]));
  AOI21X1 sub_23_2_g649(.A0 (sub_23_2_n_26), .A1 (sub_23_2_n_3), .B0
       (sub_23_2_n_58), .Y (sub_23_2_n_60));
  OAI211X1 sub_23_2_g650(.A0 (sub_23_2_n_52), .A1 (sub_23_2_n_54), .B0
       (sub_23_2_n_28), .C0 (sub_23_2_n_48), .Y (sub_23_2_n_59));
  NOR2X1 sub_23_2_g651(.A (sub_23_2_n_50), .B (sub_23_2_n_55), .Y
       (sub_23_2_n_58));
  NOR2BX1 sub_23_2_g652(.AN (sub_23_2_n_49), .B (sub_23_2_n_52), .Y
       (sub_23_2_n_57));
  NOR2X1 sub_23_2_g653(.A (sub_23_2_n_42), .B (sub_23_2_n_41), .Y
       (sub_23_2_n_56));
  AOI21X1 sub_23_2_g654(.A0 (sub_23_2_n_20), .A1 (sub_23_2_n_24), .B0
       (sub_23_2_n_16), .Y (sub_23_2_n_55));
  AOI21X1 sub_23_2_g655(.A0 (sub_23_2_n_23), .A1 (sub_23_2_n_10), .B0
       (sub_23_2_n_15), .Y (sub_23_2_n_54));
  AOI21X1 sub_23_2_g656(.A0 (sub_23_2_n_8), .A1 (sub_23_2_n_9), .B0
       (sub_23_2_n_29), .Y (sub_23_2_n_53));
  NAND2X1 sub_23_2_g657(.A (sub_23_2_n_6), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_48));
  NAND2X1 sub_23_2_g658(.A (sub_23_2_n_6), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_52));
  NAND2BX1 sub_23_2_g660(.AN (sub_23_2_n_7), .B (sub_23_2_n_20), .Y
       (sub_23_2_n_51));
  NAND2X1 sub_23_2_g661(.A (sub_23_2_n_26), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_50));
  NOR2X1 sub_23_2_g662(.A (sub_23_2_n_25), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_47));
  NAND2BX1 sub_23_2_g663(.AN (sub_23_2_n_5), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_46));
  NOR2BX1 sub_23_2_g664(.AN (sub_23_2_n_23), .B (sub_23_2_n_15), .Y
       (sub_23_2_n_45));
  AND2XL sub_23_2_g665(.A (sub_23_2_n_23), .B (sub_23_2_n_17), .Y
       (sub_23_2_n_49));
  AND2XL sub_23_2_g666(.A (sub_23_2_n_26), .B (sub_23_2_n_27), .Y
       (sub_23_2_n_44));
  NAND2BX1 sub_23_2_g667(.AN (sub_23_2_n_10), .B (sub_23_2_n_17), .Y
       (sub_23_2_n_43));
  NAND2BXL sub_23_2_g668(.AN (sub_23_2_n_25), .B (sub_23_2_n_21), .Y
       (sub_23_2_n_40));
  XOR2XL sub_23_2_g669(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NAND2BX1 sub_23_2_g670(.AN (sub_23_2_n_25), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_42));
  NAND2BX1 sub_23_2_g671(.AN (sub_23_2_n_21), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_38));
  NOR2X1 sub_23_2_g672(.A (sub_23_2_n_7), .B (sub_23_2_n_24), .Y
       (sub_23_2_n_37));
  NAND2BX1 sub_23_2_g673(.AN (sub_23_2_n_12), .B (sub_23_2_n_8), .Y
       (sub_23_2_n_41));
  NAND2BX1 sub_23_2_g674(.AN (sub_23_2_n_3), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_36));
  NOR2BX1 sub_23_2_g675(.AN (sub_23_2_n_8), .B (sub_23_2_n_29), .Y
       (sub_23_2_n_35));
  NOR2BX1 sub_23_2_g676(.AN (sub_23_2_n_30), .B (sub_23_2_n_13), .Y
       (sub_23_2_n_34));
  NOR2BX1 sub_23_2_g677(.AN (sub_23_2_n_20), .B (sub_23_2_n_16), .Y
       (sub_23_2_n_33));
  NOR2X1 sub_23_2_g678(.A (sub_23_2_n_12), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_32));
  NAND2BX1 sub_23_2_g679(.AN (sub_23_2_n_4), .B (sub_23_2_n_11), .Y
       (sub_23_2_n_31));
  NAND2BX1 sub_23_2_g680(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_30));
  NOR2BX1 sub_23_2_g681(.AN (in2[13]), .B (in1[13]), .Y
       (sub_23_2_n_29));
  NAND2BXL sub_23_2_g682(.AN (in1[11]), .B (in2[11]), .Y
       (sub_23_2_n_28));
  NAND2BXL sub_23_2_g683(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_27));
  NAND2BX1 sub_23_2_g684(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_26));
  NOR2BX1 sub_23_2_g685(.AN (in1[15]), .B (in2[15]), .Y
       (sub_23_2_n_25));
  NOR2BX1 sub_23_2_g686(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_24));
  NAND2BX1 sub_23_2_g687(.AN (in2[9]), .B (in1[9]), .Y (sub_23_2_n_23));
  NAND2BX1 sub_23_2_g688(.AN (in2[10]), .B (in1[10]), .Y
       (sub_23_2_n_22));
  NOR2BX1 sub_23_2_g689(.AN (in2[14]), .B (in1[14]), .Y
       (sub_23_2_n_21));
  NAND2BX1 sub_23_2_g690(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_20));
  NAND2BX1 sub_23_2_g691(.AN (in2[14]), .B (in1[14]), .Y
       (sub_23_2_n_19));
  NAND2BX1 sub_23_2_g692(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_18));
  NAND2BX1 sub_23_2_g693(.AN (in2[8]), .B (in1[8]), .Y (sub_23_2_n_17));
  NOR2BX1 sub_23_2_g695(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_16));
  NOR2BX1 sub_23_2_g696(.AN (in2[9]), .B (in1[9]), .Y (sub_23_2_n_15));
  NOR2BX1 sub_23_2_g697(.AN (in2[15]), .B (in1[15]), .Y
       (sub_23_2_n_14));
  NOR2BX1 sub_23_2_g698(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_13));
  NOR2BX1 sub_23_2_g699(.AN (in1[12]), .B (in2[12]), .Y
       (sub_23_2_n_12));
  NAND2BX1 sub_23_2_g700(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_11));
  NOR2BX1 sub_23_2_g701(.AN (in2[8]), .B (in1[8]), .Y (sub_23_2_n_10));
  NOR2BX1 sub_23_2_g702(.AN (in2[12]), .B (in1[12]), .Y (sub_23_2_n_9));
  NAND2BX1 sub_23_2_g703(.AN (in2[13]), .B (in1[13]), .Y
       (sub_23_2_n_8));
  NOR2BX1 sub_23_2_g704(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_7));
  NAND2BX1 sub_23_2_g705(.AN (in2[11]), .B (in1[11]), .Y
       (sub_23_2_n_6));
  NOR2BX1 sub_23_2_g706(.AN (in2[10]), .B (in1[10]), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g707(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_2));
  NOR2BX1 sub_23_2_g708(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_4));
  NOR2BX1 sub_23_2_g709(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g710(.A (in1[1]), .Y (sub_23_2_n_1));
  AND2XL sub_23_2_g2(.A (sub_23_2_n_28), .B (sub_23_2_n_6), .Y
       (sub_23_2_n_0));
endmodule


