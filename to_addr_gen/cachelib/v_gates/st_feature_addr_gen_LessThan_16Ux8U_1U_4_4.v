`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:18 KST (Jan 20 2021 09:19:18 UTC)

module st_feature_addr_gen_LessThan_16Ux8U_1U_4_4(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire out1;
  wire gt_21_21_n_0, gt_21_21_n_1, gt_21_21_n_2, gt_21_21_n_3,
       gt_21_21_n_4, gt_21_21_n_5, gt_21_21_n_6, gt_21_21_n_7;
  wire gt_21_21_n_8, gt_21_21_n_9, gt_21_21_n_10, gt_21_21_n_11,
       gt_21_21_n_12, gt_21_21_n_13, gt_21_21_n_14, gt_21_21_n_15;
  wire gt_21_21_n_16, gt_21_21_n_17, gt_21_21_n_18, gt_21_21_n_19,
       gt_21_21_n_20, gt_21_21_n_21, gt_21_21_n_22, gt_21_21_n_23;
  wire gt_21_21_n_24;
  NOR4X1 gt_21_21_g351(.A (in2[13]), .B (in2[12]), .C (gt_21_21_n_5),
       .D (gt_21_21_n_24), .Y (out1));
  NAND4XL gt_21_21_g352(.A (gt_21_21_n_12), .B (gt_21_21_n_23), .C
       (gt_21_21_n_15), .D (gt_21_21_n_21), .Y (gt_21_21_n_24));
  NAND4XL gt_21_21_g353(.A (gt_21_21_n_10), .B (gt_21_21_n_13), .C
       (gt_21_21_n_9), .D (gt_21_21_n_22), .Y (gt_21_21_n_23));
  OAI211X1 gt_21_21_g354(.A0 (gt_21_21_n_4), .A1 (in1[3]), .B0
       (gt_21_21_n_14), .C0 (gt_21_21_n_20), .Y (gt_21_21_n_22));
  AOI22X1 gt_21_21_g355(.A0 (gt_21_21_n_13), .A1 (gt_21_21_n_18), .B0
       (in2[7]), .B1 (gt_21_21_n_1), .Y (gt_21_21_n_21));
  OAI211X1 gt_21_21_g356(.A0 (gt_21_21_n_3), .A1 (in2[2]), .B0
       (gt_21_21_n_7), .C0 (gt_21_21_n_19), .Y (gt_21_21_n_20));
  OAI21X1 gt_21_21_g357(.A0 (in1[1]), .A1 (gt_21_21_n_6), .B0
       (gt_21_21_n_17), .Y (gt_21_21_n_19));
  OAI2BB1X1 gt_21_21_g358(.A0N (in2[5]), .A1N (gt_21_21_n_0), .B0
       (gt_21_21_n_16), .Y (gt_21_21_n_18));
  OAI21X1 gt_21_21_g359(.A0 (in2[0]), .A1 (gt_21_21_n_11), .B0
       (in2[1]), .Y (gt_21_21_n_17));
  NAND3BXL gt_21_21_g360(.AN (in1[4]), .B (in2[4]), .C (gt_21_21_n_10),
       .Y (gt_21_21_n_16));
  NAND3BXL gt_21_21_g361(.AN (in1[6]), .B (in2[6]), .C (gt_21_21_n_8),
       .Y (gt_21_21_n_15));
  NAND3X1 gt_21_21_g362(.A (in2[2]), .B (gt_21_21_n_3), .C
       (gt_21_21_n_7), .Y (gt_21_21_n_14));
  OA21X1 gt_21_21_g363(.A0 (gt_21_21_n_2), .A1 (in2[6]), .B0
       (gt_21_21_n_8), .Y (gt_21_21_n_13));
  NOR4X1 gt_21_21_g364(.A (in2[11]), .B (in2[10]), .C (in2[9]), .D
       (in2[8]), .Y (gt_21_21_n_12));
  NAND2X1 gt_21_21_g365(.A (in1[1]), .B (in1[0]), .Y (gt_21_21_n_11));
  NAND2BX1 gt_21_21_g366(.AN (in2[5]), .B (in1[5]), .Y (gt_21_21_n_10));
  NAND2BX1 gt_21_21_g367(.AN (in2[4]), .B (in1[4]), .Y (gt_21_21_n_9));
  NAND2BX1 gt_21_21_g368(.AN (in2[7]), .B (in1[7]), .Y (gt_21_21_n_8));
  NAND2X1 gt_21_21_g369(.A (in1[3]), .B (gt_21_21_n_4), .Y
       (gt_21_21_n_7));
  NOR2BX1 gt_21_21_g370(.AN (in1[0]), .B (in2[0]), .Y (gt_21_21_n_6));
  OR2XL gt_21_21_g371(.A (in2[15]), .B (in2[14]), .Y (gt_21_21_n_5));
  INVX1 gt_21_21_g372(.A (in2[3]), .Y (gt_21_21_n_4));
  INVX1 gt_21_21_g373(.A (in1[2]), .Y (gt_21_21_n_3));
  INVX1 gt_21_21_g374(.A (in1[6]), .Y (gt_21_21_n_2));
  INVX1 gt_21_21_g375(.A (in1[7]), .Y (gt_21_21_n_1));
  INVX1 gt_21_21_g376(.A (in1[5]), .Y (gt_21_21_n_0));
endmodule

