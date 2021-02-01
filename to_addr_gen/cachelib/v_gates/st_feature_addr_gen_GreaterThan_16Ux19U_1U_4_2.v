`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:19 KST (Dec  8 2020 00:47:19 UTC)

module st_feature_addr_gen_GreaterThan_16Ux19U_1U_4_2(in2, in1, out1);
  input [15:0] in2;
  input [18:0] in1;
  output out1;
  wire [15:0] in2;
  wire [18:0] in1;
  wire out1;
  wire gt_21_21_n_0, gt_21_21_n_1, gt_21_21_n_2, gt_21_21_n_3,
       gt_21_21_n_4, gt_21_21_n_5, gt_21_21_n_6, gt_21_21_n_7;
  wire gt_21_21_n_8, gt_21_21_n_9, gt_21_21_n_10, gt_21_21_n_11,
       gt_21_21_n_12, gt_21_21_n_13, gt_21_21_n_14, gt_21_21_n_15;
  wire gt_21_21_n_16, gt_21_21_n_17, gt_21_21_n_18, gt_21_21_n_19,
       gt_21_21_n_20, gt_21_21_n_21, gt_21_21_n_22, gt_21_21_n_23;
  wire gt_21_21_n_24, gt_21_21_n_25, gt_21_21_n_26, gt_21_21_n_27,
       gt_21_21_n_28, gt_21_21_n_29, gt_21_21_n_30, gt_21_21_n_31;
  wire gt_21_21_n_32, gt_21_21_n_33, gt_21_21_n_34, gt_21_21_n_35,
       gt_21_21_n_36, gt_21_21_n_37, gt_21_21_n_38, gt_21_21_n_39;
  wire gt_21_21_n_40, gt_21_21_n_41, gt_21_21_n_42, gt_21_21_n_43,
       gt_21_21_n_44, gt_21_21_n_45, gt_21_21_n_46, gt_21_21_n_47;
  NOR4X1 gt_21_21_g492(.A (in1[17]), .B (in1[16]), .C (in1[18]), .D
       (gt_21_21_n_47), .Y (out1));
  OAI211X1 gt_21_21_g493(.A0 (gt_21_21_n_34), .A1 (gt_21_21_n_41), .B0
       (gt_21_21_n_42), .C0 (gt_21_21_n_46), .Y (gt_21_21_n_47));
  NAND4XL gt_21_21_g494(.A (gt_21_21_n_45), .B (gt_21_21_n_11), .C
       (gt_21_21_n_12), .D (gt_21_21_n_24), .Y (gt_21_21_n_46));
  AOI31X1 gt_21_21_g495(.A0 (gt_21_21_n_44), .A1 (gt_21_21_n_32), .A2
       (gt_21_21_n_40), .B0 (gt_21_21_n_34), .Y (gt_21_21_n_45));
  NAND4XL gt_21_21_g496(.A (gt_21_21_n_22), .B (gt_21_21_n_23), .C
       (gt_21_21_n_18), .D (gt_21_21_n_43), .Y (gt_21_21_n_44));
  OAI211X1 gt_21_21_g497(.A0 (gt_21_21_n_4), .A1 (in2[3]), .B0
       (gt_21_21_n_30), .C0 (gt_21_21_n_39), .Y (gt_21_21_n_43));
  AOI221X1 gt_21_21_g498(.A0 (in1[14]), .A1 (gt_21_21_n_28), .B0
       (gt_21_21_n_25), .B1 (gt_21_21_n_35), .C0 (gt_21_21_n_17), .Y
       (gt_21_21_n_42));
  AOI221X1 gt_21_21_g499(.A0 (in1[10]), .A1 (gt_21_21_n_27), .B0
       (gt_21_21_n_24), .B1 (gt_21_21_n_37), .C0 (gt_21_21_n_19), .Y
       (gt_21_21_n_41));
  AOI22X1 gt_21_21_g500(.A0 (gt_21_21_n_23), .A1 (gt_21_21_n_36), .B0
       (in1[7]), .B1 (gt_21_21_n_6), .Y (gt_21_21_n_40));
  OAI211X1 gt_21_21_g501(.A0 (gt_21_21_n_5), .A1 (in1[2]), .B0
       (gt_21_21_n_15), .C0 (gt_21_21_n_38), .Y (gt_21_21_n_39));
  OAI22X1 gt_21_21_g502(.A0 (in2[1]), .A1 (gt_21_21_n_26), .B0
       (gt_21_21_n_1), .B1 (gt_21_21_n_16), .Y (gt_21_21_n_38));
  OAI2BB1X1 gt_21_21_g503(.A0N (in1[9]), .A1N (gt_21_21_n_7), .B0
       (gt_21_21_n_29), .Y (gt_21_21_n_37));
  OAI2BB1X1 gt_21_21_g504(.A0N (in1[5]), .A1N (gt_21_21_n_0), .B0
       (gt_21_21_n_31), .Y (gt_21_21_n_36));
  OAI32X1 gt_21_21_g505(.A0 (gt_21_21_n_3), .A1 (in2[12]), .A2
       (gt_21_21_n_14), .B0 (gt_21_21_n_10), .B1 (in2[13]), .Y
       (gt_21_21_n_35));
  OAI2BB1X1 gt_21_21_g506(.A0N (in2[12]), .A1N (gt_21_21_n_3), .B0
       (gt_21_21_n_33), .Y (gt_21_21_n_34));
  NOR2BX1 gt_21_21_g507(.AN (gt_21_21_n_25), .B (gt_21_21_n_14), .Y
       (gt_21_21_n_33));
  NAND3BXL gt_21_21_g508(.AN (in2[6]), .B (in1[6]), .C (gt_21_21_n_20),
       .Y (gt_21_21_n_32));
  NAND3BXL gt_21_21_g509(.AN (in2[4]), .B (in1[4]), .C (gt_21_21_n_22),
       .Y (gt_21_21_n_31));
  NAND3X1 gt_21_21_g510(.A (in1[2]), .B (gt_21_21_n_5), .C
       (gt_21_21_n_15), .Y (gt_21_21_n_30));
  NAND3BXL gt_21_21_g511(.AN (in2[8]), .B (in1[8]), .C (gt_21_21_n_12),
       .Y (gt_21_21_n_29));
  NOR2X1 gt_21_21_g512(.A (in2[14]), .B (gt_21_21_n_21), .Y
       (gt_21_21_n_28));
  NOR2X1 gt_21_21_g513(.A (in2[10]), .B (gt_21_21_n_13), .Y
       (gt_21_21_n_27));
  AND2XL gt_21_21_g514(.A (gt_21_21_n_1), .B (gt_21_21_n_16), .Y
       (gt_21_21_n_26));
  AOI21X1 gt_21_21_g515(.A0 (in2[14]), .A1 (gt_21_21_n_8), .B0
       (gt_21_21_n_21), .Y (gt_21_21_n_25));
  AOI21X1 gt_21_21_g516(.A0 (in2[10]), .A1 (gt_21_21_n_9), .B0
       (gt_21_21_n_13), .Y (gt_21_21_n_24));
  OA21X1 gt_21_21_g517(.A0 (gt_21_21_n_2), .A1 (in1[6]), .B0
       (gt_21_21_n_20), .Y (gt_21_21_n_23));
  NOR2BX1 gt_21_21_g518(.AN (in1[11]), .B (in2[11]), .Y
       (gt_21_21_n_19));
  NAND2BXL gt_21_21_g519(.AN (in1[4]), .B (in2[4]), .Y (gt_21_21_n_18));
  NOR2BX1 gt_21_21_g520(.AN (in1[15]), .B (in2[15]), .Y
       (gt_21_21_n_17));
  NAND2BXL gt_21_21_g521(.AN (in1[5]), .B (in2[5]), .Y (gt_21_21_n_22));
  NOR2BX1 gt_21_21_g522(.AN (in2[15]), .B (in1[15]), .Y
       (gt_21_21_n_21));
  NAND2BXL gt_21_21_g523(.AN (in1[7]), .B (in2[7]), .Y (gt_21_21_n_20));
  NAND2BXL gt_21_21_g524(.AN (in1[8]), .B (in2[8]), .Y (gt_21_21_n_11));
  NOR2BX1 gt_21_21_g525(.AN (in2[0]), .B (in1[0]), .Y (gt_21_21_n_16));
  NAND2X1 gt_21_21_g526(.A (in2[3]), .B (gt_21_21_n_4), .Y
       (gt_21_21_n_15));
  NOR2BX1 gt_21_21_g527(.AN (in2[13]), .B (in1[13]), .Y
       (gt_21_21_n_14));
  NOR2BX1 gt_21_21_g528(.AN (in2[11]), .B (in1[11]), .Y
       (gt_21_21_n_13));
  NAND2BX1 gt_21_21_g529(.AN (in1[9]), .B (in2[9]), .Y (gt_21_21_n_12));
  INVX1 gt_21_21_g530(.A (in1[13]), .Y (gt_21_21_n_10));
  INVX1 gt_21_21_g531(.A (in1[10]), .Y (gt_21_21_n_9));
  INVX1 gt_21_21_g532(.A (in1[14]), .Y (gt_21_21_n_8));
  INVX1 gt_21_21_g533(.A (in2[9]), .Y (gt_21_21_n_7));
  INVX1 gt_21_21_g534(.A (in2[7]), .Y (gt_21_21_n_6));
  INVX1 gt_21_21_g535(.A (in2[2]), .Y (gt_21_21_n_5));
  INVX1 gt_21_21_g536(.A (in1[3]), .Y (gt_21_21_n_4));
  INVX1 gt_21_21_g537(.A (in1[12]), .Y (gt_21_21_n_3));
  INVXL gt_21_21_g538(.A (in2[6]), .Y (gt_21_21_n_2));
  INVX1 gt_21_21_g539(.A (in1[1]), .Y (gt_21_21_n_1));
  INVXL gt_21_21_g540(.A (in2[5]), .Y (gt_21_21_n_0));
endmodule


