`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 17:36:55 KST (Jan  6 2021 08:36:55 UTC)

module fp_cmp_cynw_cm_float_ltle_4_2(in1, in2, in3, in4, in5, in6, out1,
     clk);
  input in1, in6, clk;
  input [7:0] in2, in4;
  input [22:0] in3, in5;
  output [1:0] out1;
  wire in1, in6, clk;
  wire [7:0] in2, in4;
  wire [22:0] in3, in5;
  wire [1:0] out1;
  wire gt_90_21_n_0, gt_90_21_n_1, gt_90_21_n_2, gt_90_21_n_3,
       gt_90_21_n_4, gt_90_21_n_5, gt_90_21_n_6, gt_90_21_n_7;
  wire gt_90_21_n_8, gt_90_21_n_9, gt_90_21_n_10, gt_90_21_n_11,
       gt_90_21_n_12, gt_90_21_n_13, gt_90_21_n_14, gt_90_21_n_15;
  wire gt_90_21_n_16, gt_90_21_n_17, gt_90_21_n_18, gt_90_21_n_19,
       gt_90_21_n_20, gt_90_21_n_21, gt_92_21_n_0, gt_92_21_n_1;
  wire gt_92_21_n_2, gt_92_21_n_3, gt_92_21_n_4, gt_92_21_n_5,
       gt_92_21_n_6, gt_92_21_n_7, gt_92_21_n_8, gt_92_21_n_9;
  wire gt_92_21_n_10, gt_92_21_n_11, gt_92_21_n_12, gt_92_21_n_13,
       gt_92_21_n_14, gt_92_21_n_15, gt_92_21_n_16, gt_92_21_n_17;
  wire gt_92_21_n_18, gt_92_21_n_19, gt_92_21_n_20, gt_92_21_n_21,
       gt_94_21_n_0, gt_94_21_n_1, gt_94_21_n_2, gt_94_21_n_3;
  wire gt_94_21_n_4, gt_94_21_n_5, gt_94_21_n_6, gt_94_21_n_7,
       gt_94_21_n_8, gt_94_21_n_9, gt_94_21_n_10, gt_94_21_n_11;
  wire gt_94_21_n_12, gt_94_21_n_13, gt_94_21_n_14, gt_94_21_n_15,
       gt_94_21_n_16, gt_94_21_n_17, gt_94_21_n_18, gt_94_21_n_19;
  wire gt_94_21_n_20, gt_94_21_n_21, gt_94_21_n_22, gt_94_21_n_23,
       gt_94_21_n_24, gt_94_21_n_25, gt_94_21_n_26, gt_94_21_n_27;
  wire gt_94_21_n_28, gt_94_21_n_29, gt_94_21_n_31, gt_94_21_n_32,
       gt_94_21_n_33, gt_94_21_n_34, gt_94_21_n_35, gt_94_21_n_36;
  wire gt_94_21_n_37, gt_94_21_n_38, gt_94_21_n_39, gt_94_21_n_40,
       gt_94_21_n_41, gt_94_21_n_42, gt_94_21_n_43, gt_94_21_n_44;
  wire gt_94_21_n_45, gt_94_21_n_46, gt_94_21_n_47, gt_94_21_n_48,
       gt_94_21_n_49, gt_94_21_n_50, gt_94_21_n_51, gt_94_21_n_52;
  wire gt_94_21_n_53, gt_94_21_n_54, gt_94_21_n_55, gt_94_21_n_56,
       gt_94_21_n_57, gt_94_21_n_58, gt_94_21_n_59, gt_94_21_n_60;
  wire gt_94_21_n_61, gt_94_21_n_62, gt_94_21_n_63, gt_94_21_n_64,
       gt_94_21_n_65, gt_94_21_n_66, gt_94_21_n_67, gt_94_21_n_68;
  wire gt_96_21_n_5, gt_96_21_n_6, gt_96_21_n_7, gt_96_21_n_8,
       gt_96_21_n_9, gt_96_21_n_11, gt_96_21_n_14, gt_96_21_n_15;
  wire gt_96_21_n_17, gt_96_21_n_19, gt_96_21_n_22, gt_96_21_n_26,
       gt_96_21_n_27, gt_96_21_n_28, gt_96_21_n_29, gt_96_21_n_33;
  wire gt_96_21_n_34, gt_96_21_n_35, gt_96_21_n_36, gt_96_21_n_37,
       gt_96_21_n_38, gt_96_21_n_39, gt_96_21_n_48, gt_96_21_n_49;
  wire gt_96_21_n_50, gt_96_21_n_56, gt_96_21_n_57, gt_96_21_n_66,
       gt_96_21_n_68, n_1, n_2, n_3;
  wire n_4, n_5, n_6, n_7, n_8, n_9, n_10, n_11;
  wire n_15, n_16, n_17, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32, n_33, n_34, n_35, n_36, n_37, n_38, n_39;
  wire n_40, n_41, n_42, n_43, n_44, n_45, n_46, n_47;
  wire n_48, n_49, n_50, n_51, n_52, n_53, n_54, n_55;
  wire n_56, n_57, n_59, n_60, n_61, n_62, n_63, n_64;
  wire n_65, n_66, n_67;
  assign out1[1] = 1'b0;
  AOI31X1 g417(.A0 (n_9), .A1 (n_6), .A2 (n_5), .B0 (n_19), .Y
       (out1[0]));
  OAI22X1 g418(.A0 (n_21), .A1 (n_20), .B0 (n_2), .B1 (n_4), .Y (n_19));
  AOI22X1 g419(.A0 (n_41), .A1 (n_3), .B0 (n_1), .B1 (n_7), .Y (n_20));
  NOR4X1 g420(.A (n_10), .B (n_3), .C (n_8), .D (n_11), .Y (n_21));
  OAI31X1 g421(.A0 (n_26), .A1 (in4[5]), .A2 (in4[4]), .B0 (in6), .Y
       (n_22));
  NAND4XL g422(.A (n_53), .B (n_50), .C (n_39), .D (n_27), .Y (n_23));
  NAND4BXL g423(.AN (n_38), .B (in4[3]), .C (in4[2]), .D (n_28), .Y
       (n_24));
  NOR4BBX1 g424(.AN (in2[3]), .BN (in2[2]), .C (n_37), .D (n_27), .Y
       (n_25));
  OR4X1 g425(.A (in4[7]), .B (in4[6]), .C (n_40), .D (n_28), .Y (n_26));
  NOR3BX1 g426(.AN (n_29), .B (in3[20]), .C (in3[19]), .Y (n_27));
  NAND4XL g427(.A (n_51), .B (n_54), .C (n_43), .D (n_31), .Y (n_28));
  NOR4X1 g428(.A (in3[22]), .B (in3[21]), .C (n_45), .D (n_30), .Y
       (n_29));
  NAND4XL g429(.A (n_48), .B (n_52), .C (n_44), .D (n_33), .Y (n_30));
  NOR4X1 g430(.A (in5[12]), .B (in5[11]), .C (n_55), .D (n_32), .Y
       (n_31));
  NAND2X1 g431(.A (n_42), .B (n_34), .Y (n_32));
  NOR4X1 g432(.A (in3[5]), .B (in3[4]), .C (in3[3]), .D (n_36), .Y
       (n_33));
  NOR4X1 g433(.A (in5[5]), .B (in5[4]), .C (in5[3]), .D (n_35), .Y
       (n_34));
  OR4X1 g434(.A (in5[6]), .B (in5[0]), .C (in5[2]), .D (in5[1]), .Y
       (n_35));
  OR4X1 g435(.A (in3[6]), .B (in3[0]), .C (in3[2]), .D (in3[1]), .Y
       (n_36));
  NAND4XL g436(.A (in2[7]), .B (in2[6]), .C (in2[5]), .D (in2[4]), .Y
       (n_37));
  NAND4XL g437(.A (in4[7]), .B (in4[6]), .C (in4[5]), .D (in4[4]), .Y
       (n_38));
  NOR4X1 g438(.A (in2[7]), .B (in2[6]), .C (in2[5]), .D (in2[4]), .Y
       (n_39));
  OR4X1 g439(.A (in4[3]), .B (in4[2]), .C (in4[1]), .D (in4[0]), .Y
       (n_40));
  NOR2X1 g440(.A (n_8), .B (n_11), .Y (n_41));
  NOR4X1 g441(.A (in5[10]), .B (in5[9]), .C (in5[8]), .D (in5[7]), .Y
       (n_42));
  NOR4X1 g442(.A (in5[22]), .B (in5[21]), .C (in5[20]), .D (in5[19]),
       .Y (n_43));
  NOR4X1 g443(.A (in3[10]), .B (in3[9]), .C (in3[8]), .D (in3[7]), .Y
       (n_44));
  OR4X1 g444(.A (in3[18]), .B (in3[17]), .C (in3[16]), .D (in3[15]), .Y
       (n_45));
  NOR4X1 g445(.A (n_56), .B (n_15), .C (n_17), .D (n_16), .Y (n_46));
  NOR2BX1 g446(.AN (n_17), .B (n_16), .Y (n_47));
  NOR2X1 g447(.A (in3[12]), .B (in3[11]), .Y (n_48));
  NAND2X1 g448(.A (in4[1]), .B (in4[0]), .Y (n_49));
  NOR2X1 g449(.A (in2[3]), .B (in2[2]), .Y (n_50));
  NOR2X1 g450(.A (in5[16]), .B (in5[15]), .Y (n_51));
  NOR2X1 g451(.A (in3[14]), .B (in3[13]), .Y (n_52));
  NOR2X1 g452(.A (in2[1]), .B (in2[0]), .Y (n_53));
  NOR2X1 g453(.A (in5[18]), .B (in5[17]), .Y (n_54));
  OR2XL g454(.A (in5[14]), .B (in5[13]), .Y (n_55));
  NOR2X1 gt_90_21_g217(.A (gt_90_21_n_19), .B (gt_90_21_n_21), .Y
       (n_15));
  NOR4X1 gt_90_21_g218(.A (gt_90_21_n_9), .B (gt_90_21_n_7), .C
       (gt_90_21_n_11), .D (gt_90_21_n_20), .Y (gt_90_21_n_21));
  AOI221X1 gt_90_21_g219(.A0 (in4[3]), .A1 (gt_90_21_n_5), .B0
       (in4[2]), .B1 (gt_90_21_n_13), .C0 (gt_90_21_n_18), .Y
       (gt_90_21_n_20));
  OAI221X1 gt_90_21_g220(.A0 (gt_90_21_n_11), .A1 (gt_90_21_n_16), .B0
       (gt_90_21_n_4), .B1 (in2[7]), .C0 (gt_90_21_n_15), .Y
       (gt_90_21_n_19));
  AOI211XL gt_90_21_g221(.A0 (in2[2]), .A1 (gt_90_21_n_3), .B0
       (gt_90_21_n_10), .C0 (gt_90_21_n_17), .Y (gt_90_21_n_18));
  AOI22X1 gt_90_21_g222(.A0 (in4[1]), .A1 (gt_90_21_n_12), .B0
       (gt_90_21_n_2), .B1 (gt_90_21_n_8), .Y (gt_90_21_n_17));
  AOI22X1 gt_90_21_g223(.A0 (in4[4]), .A1 (gt_90_21_n_14), .B0
       (in4[5]), .B1 (gt_90_21_n_1), .Y (gt_90_21_n_16));
  NAND3BXL gt_90_21_g224(.AN (in2[6]), .B (in4[6]), .C (gt_90_21_n_6),
       .Y (gt_90_21_n_15));
  NOR2X1 gt_90_21_g225(.A (in2[4]), .B (gt_90_21_n_9), .Y
       (gt_90_21_n_14));
  NOR2X1 gt_90_21_g226(.A (in2[2]), .B (gt_90_21_n_10), .Y
       (gt_90_21_n_13));
  NAND3BXL gt_90_21_g227(.AN (in4[0]), .B (in2[1]), .C (in2[0]), .Y
       (gt_90_21_n_12));
  OAI21X1 gt_90_21_g228(.A0 (gt_90_21_n_0), .A1 (in4[6]), .B0
       (gt_90_21_n_6), .Y (gt_90_21_n_11));
  NOR2X1 gt_90_21_g229(.A (gt_90_21_n_5), .B (in4[3]), .Y
       (gt_90_21_n_10));
  NOR2X1 gt_90_21_g230(.A (gt_90_21_n_1), .B (in4[5]), .Y
       (gt_90_21_n_9));
  NAND2BX1 gt_90_21_g231(.AN (in4[0]), .B (in2[0]), .Y (gt_90_21_n_8));
  NOR2BX1 gt_90_21_g232(.AN (in2[4]), .B (in4[4]), .Y (gt_90_21_n_7));
  NAND2X1 gt_90_21_g233(.A (in2[7]), .B (gt_90_21_n_4), .Y
       (gt_90_21_n_6));
  INVX1 gt_90_21_g234(.A (in2[3]), .Y (gt_90_21_n_5));
  INVX1 gt_90_21_g235(.A (in4[7]), .Y (gt_90_21_n_4));
  INVXL gt_90_21_g236(.A (in4[2]), .Y (gt_90_21_n_3));
  INVX1 gt_90_21_g237(.A (in2[1]), .Y (gt_90_21_n_2));
  INVX1 gt_90_21_g238(.A (in2[5]), .Y (gt_90_21_n_1));
  INVX1 gt_90_21_g239(.A (in2[6]), .Y (gt_90_21_n_0));
  NOR2X1 gt_92_21_g217(.A (gt_92_21_n_19), .B (gt_92_21_n_21), .Y
       (n_16));
  NOR4X1 gt_92_21_g218(.A (gt_92_21_n_9), .B (gt_92_21_n_7), .C
       (gt_92_21_n_11), .D (gt_92_21_n_20), .Y (gt_92_21_n_21));
  AOI221X1 gt_92_21_g219(.A0 (in2[3]), .A1 (gt_92_21_n_5), .B0
       (in2[2]), .B1 (gt_92_21_n_13), .C0 (gt_92_21_n_18), .Y
       (gt_92_21_n_20));
  OAI221X1 gt_92_21_g220(.A0 (gt_92_21_n_11), .A1 (gt_92_21_n_16), .B0
       (gt_92_21_n_4), .B1 (in4[7]), .C0 (gt_92_21_n_15), .Y
       (gt_92_21_n_19));
  AOI211XL gt_92_21_g221(.A0 (in4[2]), .A1 (gt_92_21_n_3), .B0
       (gt_92_21_n_10), .C0 (gt_92_21_n_17), .Y (gt_92_21_n_18));
  AOI22X1 gt_92_21_g222(.A0 (in2[1]), .A1 (gt_92_21_n_12), .B0
       (gt_92_21_n_2), .B1 (gt_92_21_n_8), .Y (gt_92_21_n_17));
  AOI22X1 gt_92_21_g223(.A0 (in2[4]), .A1 (gt_92_21_n_14), .B0
       (in2[5]), .B1 (gt_92_21_n_1), .Y (gt_92_21_n_16));
  NAND3BXL gt_92_21_g224(.AN (in4[6]), .B (in2[6]), .C (gt_92_21_n_6),
       .Y (gt_92_21_n_15));
  NOR2X1 gt_92_21_g225(.A (in4[4]), .B (gt_92_21_n_9), .Y
       (gt_92_21_n_14));
  NOR2X1 gt_92_21_g226(.A (in4[2]), .B (gt_92_21_n_10), .Y
       (gt_92_21_n_13));
  NAND3BXL gt_92_21_g227(.AN (in2[0]), .B (in4[1]), .C (in4[0]), .Y
       (gt_92_21_n_12));
  OAI21X1 gt_92_21_g228(.A0 (gt_92_21_n_0), .A1 (in2[6]), .B0
       (gt_92_21_n_6), .Y (gt_92_21_n_11));
  NOR2X1 gt_92_21_g229(.A (gt_92_21_n_5), .B (in2[3]), .Y
       (gt_92_21_n_10));
  NOR2X1 gt_92_21_g230(.A (gt_92_21_n_1), .B (in2[5]), .Y
       (gt_92_21_n_9));
  NAND2BX1 gt_92_21_g231(.AN (in2[0]), .B (in4[0]), .Y (gt_92_21_n_8));
  NOR2BX1 gt_92_21_g232(.AN (in4[4]), .B (in2[4]), .Y (gt_92_21_n_7));
  NAND2X1 gt_92_21_g233(.A (in4[7]), .B (gt_92_21_n_4), .Y
       (gt_92_21_n_6));
  INVX1 gt_92_21_g234(.A (in4[3]), .Y (gt_92_21_n_5));
  INVX1 gt_92_21_g235(.A (in2[7]), .Y (gt_92_21_n_4));
  INVXL gt_92_21_g236(.A (in2[2]), .Y (gt_92_21_n_3));
  INVX1 gt_92_21_g237(.A (in4[1]), .Y (gt_92_21_n_2));
  INVX1 gt_92_21_g238(.A (in4[5]), .Y (gt_92_21_n_1));
  INVX1 gt_92_21_g239(.A (in4[6]), .Y (gt_92_21_n_0));
  OAI22X1 gt_94_21_g635(.A0 (gt_94_21_n_18), .A1 (gt_94_21_n_68), .B0
       (gt_94_21_n_7), .B1 (in5[22]), .Y (n_17));
  OAI211X1 gt_94_21_g636(.A0 (gt_94_21_n_2), .A1 (in3[21]), .B0
       (gt_94_21_n_45), .C0 (gt_94_21_n_67), .Y (gt_94_21_n_68));
  OAI221X1 gt_94_21_g637(.A0 (gt_94_21_n_6), .A1 (in5[20]), .B0
       (gt_94_21_n_60), .B1 (gt_94_21_n_66), .C0 (gt_94_21_n_25), .Y
       (gt_94_21_n_67));
  NOR4X1 gt_94_21_g638(.A (gt_94_21_n_27), .B (gt_94_21_n_39), .C
       (gt_94_21_n_31), .D (gt_94_21_n_65), .Y (gt_94_21_n_66));
  AOI211XL gt_94_21_g639(.A0 (gt_94_21_n_51), .A1 (gt_94_21_n_61), .B0
       (gt_94_21_n_59), .C0 (gt_94_21_n_64), .Y (gt_94_21_n_65));
  AOI211XL gt_94_21_g640(.A0 (gt_94_21_n_58), .A1 (gt_94_21_n_63), .B0
       (gt_94_21_n_49), .C0 (gt_94_21_n_50), .Y (gt_94_21_n_64));
  NAND4XL gt_94_21_g641(.A (gt_94_21_n_22), .B (gt_94_21_n_34), .C
       (gt_94_21_n_28), .D (gt_94_21_n_62), .Y (gt_94_21_n_63));
  OAI211X1 gt_94_21_g642(.A0 (gt_94_21_n_16), .A1 (in3[3]), .B0
       (gt_94_21_n_46), .C0 (gt_94_21_n_57), .Y (gt_94_21_n_62));
  OAI221X1 gt_94_21_g643(.A0 (gt_94_21_n_37), .A1 (gt_94_21_n_54), .B0
       (gt_94_21_n_10), .B1 (in3[11]), .C0 (gt_94_21_n_47), .Y
       (gt_94_21_n_61));
  OAI221X1 gt_94_21_g644(.A0 (gt_94_21_n_39), .A1 (gt_94_21_n_55), .B0
       (gt_94_21_n_1), .B1 (in3[19]), .C0 (gt_94_21_n_43), .Y
       (gt_94_21_n_60));
  OAI221X1 gt_94_21_g645(.A0 (gt_94_21_n_35), .A1 (gt_94_21_n_53), .B0
       (gt_94_21_n_13), .B1 (in3[15]), .C0 (gt_94_21_n_44), .Y
       (gt_94_21_n_59));
  AOI221X1 gt_94_21_g646(.A0 (in5[6]), .A1 (gt_94_21_n_40), .B0
       (gt_94_21_n_34), .B1 (gt_94_21_n_52), .C0 (n_59), .Y
       (gt_94_21_n_58));
  OAI211X1 gt_94_21_g647(.A0 (gt_94_21_n_17), .A1 (in5[2]), .B0
       (gt_94_21_n_32), .C0 (gt_94_21_n_56), .Y (gt_94_21_n_57));
  OAI21X1 gt_94_21_g648(.A0 (in3[1]), .A1 (gt_94_21_n_29), .B0
       (gt_94_21_n_48), .Y (gt_94_21_n_56));
  AOI22X1 gt_94_21_g649(.A0 (in5[16]), .A1 (gt_94_21_n_41), .B0
       (in5[17]), .B1 (gt_94_21_n_4), .Y (gt_94_21_n_55));
  AOI32X1 gt_94_21_g650(.A0 (in5[8]), .A1 (gt_94_21_n_8), .A2
       (gt_94_21_n_33), .B0 (in5[9]), .B1 (gt_94_21_n_12), .Y
       (gt_94_21_n_54));
  AOI32X1 gt_94_21_g651(.A0 (in5[12]), .A1 (gt_94_21_n_11), .A2
       (gt_94_21_n_19), .B0 (in5[13]), .B1 (gt_94_21_n_0), .Y
       (gt_94_21_n_53));
  OAI2BB1X1 gt_94_21_g652(.A0N (in5[5]), .A1N (gt_94_21_n_3), .B0
       (gt_94_21_n_42), .Y (gt_94_21_n_52));
  INVXL gt_94_21_g653(.A (gt_94_21_n_50), .Y (gt_94_21_n_51));
  OAI211X1 gt_94_21_g654(.A0 (gt_94_21_n_11), .A1 (in5[12]), .B0
       (gt_94_21_n_19), .C0 (gt_94_21_n_36), .Y (gt_94_21_n_50));
  OAI211X1 gt_94_21_g655(.A0 (gt_94_21_n_8), .A1 (in5[8]), .B0
       (gt_94_21_n_33), .C0 (gt_94_21_n_38), .Y (gt_94_21_n_49));
  OAI21X1 gt_94_21_g656(.A0 (in5[0]), .A1 (gt_94_21_n_26), .B0
       (in5[1]), .Y (gt_94_21_n_48));
  NAND3BXL gt_94_21_g657(.AN (in3[10]), .B (in5[10]), .C
       (gt_94_21_n_21), .Y (gt_94_21_n_47));
  NAND3X1 gt_94_21_g658(.A (in5[2]), .B (gt_94_21_n_17), .C
       (gt_94_21_n_32), .Y (gt_94_21_n_46));
  NAND3BXL gt_94_21_g659(.AN (in3[20]), .B (in5[20]), .C
       (gt_94_21_n_25), .Y (gt_94_21_n_45));
  NAND3BXL gt_94_21_g660(.AN (in3[14]), .B (in5[14]), .C
       (gt_94_21_n_20), .Y (gt_94_21_n_44));
  NAND3BXL gt_94_21_g661(.AN (in3[18]), .B (in5[18]), .C
       (gt_94_21_n_24), .Y (gt_94_21_n_43));
  NAND3BXL gt_94_21_g662(.AN (in3[4]), .B (in5[4]), .C (gt_94_21_n_22),
       .Y (gt_94_21_n_42));
  NOR2X1 gt_94_21_g663(.A (in3[16]), .B (gt_94_21_n_31), .Y
       (gt_94_21_n_41));
  NOR2X1 gt_94_21_g664(.A (in3[6]), .B (gt_94_21_n_23), .Y
       (gt_94_21_n_40));
  OAI21X1 gt_94_21_g665(.A0 (gt_94_21_n_9), .A1 (in5[18]), .B0
       (gt_94_21_n_24), .Y (gt_94_21_n_39));
  INVX1 gt_94_21_g666(.A (gt_94_21_n_37), .Y (gt_94_21_n_38));
  OAI2BB1X1 gt_94_21_g667(.A0N (in3[10]), .A1N (gt_94_21_n_5), .B0
       (gt_94_21_n_21), .Y (gt_94_21_n_37));
  INVX1 gt_94_21_g668(.A (gt_94_21_n_35), .Y (gt_94_21_n_36));
  OAI2BB1X1 gt_94_21_g669(.A0N (in3[14]), .A1N (gt_94_21_n_14), .B0
       (gt_94_21_n_20), .Y (gt_94_21_n_35));
  AOI21X1 gt_94_21_g670(.A0 (in3[6]), .A1 (gt_94_21_n_15), .B0
       (gt_94_21_n_23), .Y (gt_94_21_n_34));
  NOR2BX1 gt_94_21_g672(.AN (in3[0]), .B (in5[0]), .Y (gt_94_21_n_29));
  NAND2BXL gt_94_21_g673(.AN (in5[4]), .B (in3[4]), .Y (gt_94_21_n_28));
  NOR2BX1 gt_94_21_g674(.AN (in3[16]), .B (in5[16]), .Y
       (gt_94_21_n_27));
  NAND2X1 gt_94_21_g675(.A (in3[1]), .B (in3[0]), .Y (gt_94_21_n_26));
  NAND2BX1 gt_94_21_g676(.AN (in5[9]), .B (in3[9]), .Y (gt_94_21_n_33));
  NAND2X1 gt_94_21_g677(.A (in3[3]), .B (gt_94_21_n_16), .Y
       (gt_94_21_n_32));
  NOR2X1 gt_94_21_g678(.A (gt_94_21_n_4), .B (in5[17]), .Y
       (gt_94_21_n_31));
  NOR2BX1 gt_94_21_g679(.AN (in5[22]), .B (in3[22]), .Y
       (gt_94_21_n_18));
  NAND2X1 gt_94_21_g680(.A (in3[21]), .B (gt_94_21_n_2), .Y
       (gt_94_21_n_25));
  NAND2X1 gt_94_21_g681(.A (in3[19]), .B (gt_94_21_n_1), .Y
       (gt_94_21_n_24));
  NOR2BX1 gt_94_21_g682(.AN (in3[7]), .B (in5[7]), .Y (gt_94_21_n_23));
  NAND2BX1 gt_94_21_g683(.AN (in5[5]), .B (in3[5]), .Y (gt_94_21_n_22));
  NAND2X1 gt_94_21_g684(.A (in3[11]), .B (gt_94_21_n_10), .Y
       (gt_94_21_n_21));
  NAND2X1 gt_94_21_g685(.A (in3[15]), .B (gt_94_21_n_13), .Y
       (gt_94_21_n_20));
  NAND2BX1 gt_94_21_g686(.AN (in5[13]), .B (in3[13]), .Y
       (gt_94_21_n_19));
  INVX1 gt_94_21_g687(.A (in3[2]), .Y (gt_94_21_n_17));
  INVX1 gt_94_21_g688(.A (in5[3]), .Y (gt_94_21_n_16));
  INVX1 gt_94_21_g689(.A (in5[6]), .Y (gt_94_21_n_15));
  INVX1 gt_94_21_g690(.A (in5[14]), .Y (gt_94_21_n_14));
  INVX1 gt_94_21_g691(.A (in5[15]), .Y (gt_94_21_n_13));
  INVX1 gt_94_21_g692(.A (in3[9]), .Y (gt_94_21_n_12));
  INVX1 gt_94_21_g693(.A (in3[12]), .Y (gt_94_21_n_11));
  INVX1 gt_94_21_g694(.A (in5[11]), .Y (gt_94_21_n_10));
  INVX1 gt_94_21_g695(.A (in3[18]), .Y (gt_94_21_n_9));
  INVX1 gt_94_21_g696(.A (in3[8]), .Y (gt_94_21_n_8));
  INVX1 gt_94_21_g697(.A (in3[22]), .Y (gt_94_21_n_7));
  INVX1 gt_94_21_g698(.A (in3[20]), .Y (gt_94_21_n_6));
  INVX1 gt_94_21_g699(.A (in5[10]), .Y (gt_94_21_n_5));
  INVX1 gt_94_21_g700(.A (in3[17]), .Y (gt_94_21_n_4));
  INVX1 gt_94_21_g701(.A (in3[5]), .Y (gt_94_21_n_3));
  INVX1 gt_94_21_g702(.A (in5[21]), .Y (gt_94_21_n_2));
  INVX1 gt_94_21_g703(.A (in5[19]), .Y (gt_94_21_n_1));
  INVX1 gt_94_21_g704(.A (in3[13]), .Y (gt_94_21_n_0));
  NOR4X1 gt_96_21_g638(.A (gt_96_21_n_27), .B (gt_96_21_n_39), .C
       (n_64), .D (n_60), .Y (gt_96_21_n_66));
  OAI211X1 gt_96_21_g647(.A0 (gt_96_21_n_17), .A1 (in3[2]), .B0 (n_61),
       .C0 (gt_96_21_n_56), .Y (gt_96_21_n_57));
  OAI21X1 gt_96_21_g648(.A0 (in5[1]), .A1 (gt_96_21_n_29), .B0
       (gt_96_21_n_48), .Y (gt_96_21_n_56));
  OAI211X1 gt_96_21_g654(.A0 (gt_96_21_n_11), .A1 (in3[12]), .B0
       (gt_96_21_n_19), .C0 (gt_96_21_n_36), .Y (gt_96_21_n_50));
  OAI211X1 gt_96_21_g655(.A0 (gt_96_21_n_8), .A1 (in3[8]), .B0
       (gt_96_21_n_33), .C0 (gt_96_21_n_38), .Y (gt_96_21_n_49));
  OAI21X1 gt_96_21_g656(.A0 (in3[0]), .A1 (gt_96_21_n_26), .B0
       (in3[1]), .Y (gt_96_21_n_48));
  OAI21X1 gt_96_21_g665(.A0 (gt_96_21_n_9), .A1 (in3[18]), .B0 (n_66),
       .Y (gt_96_21_n_39));
  INVX1 gt_96_21_g666(.A (gt_96_21_n_37), .Y (gt_96_21_n_38));
  OAI2BB1X1 gt_96_21_g667(.A0N (in5[10]), .A1N (gt_96_21_n_5), .B0
       (n_63), .Y (gt_96_21_n_37));
  INVX1 gt_96_21_g668(.A (gt_96_21_n_35), .Y (gt_96_21_n_36));
  OAI2BB1X1 gt_96_21_g669(.A0N (in5[14]), .A1N (gt_96_21_n_14), .B0
       (n_62), .Y (gt_96_21_n_35));
  AOI21X1 gt_96_21_g670(.A0 (in5[6]), .A1 (gt_96_21_n_15), .B0 (n_59),
       .Y (gt_96_21_n_34));
  NOR2BX1 gt_96_21_g672(.AN (in5[0]), .B (in3[0]), .Y (gt_96_21_n_29));
  NAND2BXL gt_96_21_g673(.AN (in3[4]), .B (in5[4]), .Y (gt_96_21_n_28));
  NOR2BX1 gt_96_21_g674(.AN (in5[16]), .B (in3[16]), .Y
       (gt_96_21_n_27));
  NAND2BX1 gt_96_21_g676(.AN (in3[9]), .B (in5[9]), .Y (gt_96_21_n_33));
  NAND2BX1 gt_96_21_g683(.AN (in3[5]), .B (in5[5]), .Y (gt_96_21_n_22));
  NAND2BX1 gt_96_21_g686(.AN (in3[13]), .B (in5[13]), .Y
       (gt_96_21_n_19));
  INVX1 gt_96_21_g687(.A (in5[2]), .Y (gt_96_21_n_17));
  INVX1 gt_96_21_g689(.A (in3[6]), .Y (gt_96_21_n_15));
  INVX1 gt_96_21_g690(.A (in3[14]), .Y (gt_96_21_n_14));
  INVX1 gt_96_21_g693(.A (in5[12]), .Y (gt_96_21_n_11));
  INVX1 gt_96_21_g695(.A (in5[18]), .Y (gt_96_21_n_9));
  INVX1 gt_96_21_g696(.A (in5[8]), .Y (gt_96_21_n_8));
  INVX1 gt_96_21_g697(.A (in5[22]), .Y (gt_96_21_n_7));
  INVX1 gt_96_21_g698(.A (in5[20]), .Y (gt_96_21_n_6));
  INVX1 gt_96_21_g699(.A (in3[10]), .Y (gt_96_21_n_5));
  DFFHQX1 retime_s1_9_reg(.CK (clk), .D (n_22), .Q (n_3));
  DFFHQX1 retime_s1_8_reg(.CK (clk), .D (n_24), .Q (n_4));
  DFFHQX1 retime_s1_1_reg(.CK (clk), .D (n_47), .Q (n_11));
  DFFHQX1 retime_s1_10_reg(.CK (clk), .D (n_49), .Q (n_2));
  DFFHQX1 retime_s1_11_reg(.CK (clk), .D (in1), .Q (n_1));
  DFFHQX1 retime_s1_7_reg(.CK (clk), .D (in2[0]), .Q (n_5));
  DFFQXL retime_s1_2_reg(.CK (clk), .D (n_46), .Q (n_10));
  DFFHQX1 retime_s1_3_reg(.CK (clk), .D (n_25), .Q (n_9));
  DFFHQX1 retime_s1_4_reg(.CK (clk), .D (n_15), .Q (n_8));
  DFFHQX1 retime_s1_5_reg(.CK (clk), .D (n_23), .Q (n_7));
  DFFHQX1 retime_s1_6_reg(.CK (clk), .D (in2[1]), .Q (n_6));
  INVXL g716(.A (in5[0]), .Y (gt_96_21_n_26));
  INVXL g719(.A (n_57), .Y (gt_96_21_n_68));
  OAI21X1 g2(.A0 (gt_96_21_n_7), .A1 (in3[22]), .B0 (gt_96_21_n_68), .Y
       (n_56));
  OAI211X1 g720(.A0 (gt_96_21_n_6), .A1 (in3[20]), .B0 (gt_96_21_n_66),
       .C0 (n_65), .Y (n_57));
  NOR2BX1 gt_94_21_g722(.AN (in5[7]), .B (in3[7]), .Y (n_59));
  OR3XL g723(.A (n_67), .B (gt_96_21_n_49), .C (gt_96_21_n_50), .Y
       (n_60));
  NAND2BX1 g724(.AN (in3[3]), .B (in5[3]), .Y (n_61));
  NAND2BX1 g725(.AN (in3[15]), .B (in5[15]), .Y (n_62));
  NAND2BX1 g726(.AN (in3[11]), .B (in5[11]), .Y (n_63));
  NOR2BX1 g727(.AN (in5[17]), .B (in3[17]), .Y (n_64));
  NAND2BX1 g728(.AN (in3[21]), .B (in5[21]), .Y (n_65));
  NAND2BX1 g729(.AN (in3[19]), .B (in5[19]), .Y (n_66));
  NAND4BX1 g730(.AN (gt_96_21_n_57), .B (gt_96_21_n_22), .C
       (gt_96_21_n_34), .D (gt_96_21_n_28), .Y (n_67));
endmodule


