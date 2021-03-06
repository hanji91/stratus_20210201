`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 15:40:53 KST (Jan  7 2021 06:40:53 UTC)

module float2fix_GreaterThan_9Sx6S_1U_1(in2, in1, out1);
  input [8:0] in2;
  input [5:0] in1;
  output out1;
  wire [8:0] in2;
  wire [5:0] in1;
  wire out1;
  wire gt_21_59_n_0, gt_21_59_n_1, gt_21_59_n_2, gt_21_59_n_3,
       gt_21_59_n_4, gt_21_59_n_5, gt_21_59_n_6, gt_21_59_n_7;
  wire gt_21_59_n_8, gt_21_59_n_9, gt_21_59_n_10, gt_21_59_n_11,
       gt_21_59_n_12, gt_21_59_n_13, gt_21_59_n_14, gt_21_59_n_15;
  wire gt_21_59_n_16, gt_21_59_n_17, gt_21_59_n_18, gt_21_59_n_19,
       gt_21_59_n_20, gt_21_59_n_21, gt_21_59_n_22, gt_21_59_n_23;
  wire gt_21_59_n_24, gt_21_59_n_25, gt_21_59_n_26, gt_21_59_n_27,
       gt_21_59_n_28, gt_21_59_n_29, gt_21_59_n_30, gt_21_59_n_32;
  wire gt_21_59_n_33, gt_21_59_n_34, gt_21_59_n_35, gt_21_59_n_36,
       gt_21_59_n_37, gt_21_59_n_38;
  NOR2X1 gt_21_59_g257(.A (gt_21_59_n_36), .B (gt_21_59_n_38), .Y
       (out1));
  NOR2X1 gt_21_59_g258(.A (gt_21_59_n_32), .B (gt_21_59_n_37), .Y
       (gt_21_59_n_38));
  AOI21X1 gt_21_59_g259(.A0 (gt_21_59_n_26), .A1 (gt_21_59_n_33), .B0
       (gt_21_59_n_34), .Y (gt_21_59_n_37));
  OAI21X1 gt_21_59_g260(.A0 (gt_21_59_n_25), .A1 (gt_21_59_n_35), .B0
       (gt_21_59_n_13), .Y (gt_21_59_n_36));
  OAI21X1 gt_21_59_g262(.A0 (gt_21_59_n_22), .A1 (gt_21_59_n_30), .B0
       (gt_21_59_n_27), .Y (gt_21_59_n_34));
  OAI21X1 gt_21_59_g263(.A0 (gt_21_59_n_23), .A1 (gt_21_59_n_29), .B0
       (gt_21_59_n_28), .Y (gt_21_59_n_33));
  NAND2BX1 gt_21_59_g264(.AN (gt_21_59_n_25), .B (gt_21_59_n_13), .Y
       (gt_21_59_n_32));
  AOI21X1 gt_21_59_g266(.A0 (gt_21_59_n_15), .A1 (gt_21_59_n_16), .B0
       (gt_21_59_n_20), .Y (gt_21_59_n_30));
  AOI21X1 gt_21_59_g267(.A0 (gt_21_59_n_19), .A1 (gt_21_59_n_1), .B0
       (gt_21_59_n_8), .Y (gt_21_59_n_29));
  AOI21X1 gt_21_59_g268(.A0 (gt_21_59_n_10), .A1 (gt_21_59_n_0), .B0
       (gt_21_59_n_18), .Y (gt_21_59_n_28));
  AOI21X1 gt_21_59_g269(.A0 (gt_21_59_n_7), .A1 (gt_21_59_n_21), .B0
       (gt_21_59_n_17), .Y (gt_21_59_n_27));
  NOR2X1 gt_21_59_g270(.A (gt_21_59_n_22), .B (gt_21_59_n_24), .Y
       (gt_21_59_n_26));
  NAND2X1 gt_21_59_g271(.A (gt_21_59_n_14), .B (gt_21_59_n_13), .Y
       (gt_21_59_n_25));
  OAI2BB1X1 gt_21_59_g272(.A0N (in2[4]), .A1N (gt_21_59_n_5), .B0
       (gt_21_59_n_15), .Y (gt_21_59_n_24));
  NAND2X1 gt_21_59_g273(.A (gt_21_59_n_0), .B (gt_21_59_n_9), .Y
       (gt_21_59_n_23));
  NAND2X1 gt_21_59_g274(.A (gt_21_59_n_21), .B (gt_21_59_n_11), .Y
       (gt_21_59_n_22));
  NOR2X1 gt_21_59_g275(.A (gt_21_59_n_6), .B (in2[5]), .Y
       (gt_21_59_n_20));
  NAND2X1 gt_21_59_g276(.A (in2[1]), .B (gt_21_59_n_4), .Y
       (gt_21_59_n_19));
  NOR2BX1 gt_21_59_g277(.AN (in1[3]), .B (in2[3]), .Y (gt_21_59_n_18));
  NOR2X1 gt_21_59_g278(.A (gt_21_59_n_6), .B (in2[7]), .Y
       (gt_21_59_n_17));
  NOR2X1 gt_21_59_g279(.A (gt_21_59_n_5), .B (in2[4]), .Y
       (gt_21_59_n_16));
  NAND2X2 gt_21_59_g281(.A (in2[7]), .B (gt_21_59_n_6), .Y
       (gt_21_59_n_21));
  INVX2 gt_21_59_g283(.A (gt_21_59_n_12), .Y (gt_21_59_n_13));
  NAND2X1 gt_21_59_g284(.A (in2[6]), .B (gt_21_59_n_6), .Y
       (gt_21_59_n_11));
  NOR2X1 gt_21_59_g285(.A (gt_21_59_n_2), .B (in2[2]), .Y
       (gt_21_59_n_10));
  NAND2X1 gt_21_59_g286(.A (in2[2]), .B (gt_21_59_n_2), .Y
       (gt_21_59_n_9));
  NOR2X1 gt_21_59_g287(.A (gt_21_59_n_4), .B (in2[1]), .Y
       (gt_21_59_n_8));
  NOR2X1 gt_21_59_g288(.A (gt_21_59_n_6), .B (in2[6]), .Y
       (gt_21_59_n_7));
  NAND2X2 gt_21_59_g289(.A (in2[5]), .B (gt_21_59_n_6), .Y
       (gt_21_59_n_15));
  NAND2X1 gt_21_59_g290(.A (in1[5]), .B (gt_21_59_n_3), .Y
       (gt_21_59_n_14));
  NOR2X1 gt_21_59_g291(.A (gt_21_59_n_3), .B (in1[5]), .Y
       (gt_21_59_n_12));
  INVX2 gt_21_59_g293(.A (in1[5]), .Y (gt_21_59_n_6));
  INVX1 gt_21_59_g294(.A (in1[4]), .Y (gt_21_59_n_5));
  INVX1 gt_21_59_g295(.A (in1[1]), .Y (gt_21_59_n_4));
  INVX3 gt_21_59_g296(.A (in2[8]), .Y (gt_21_59_n_3));
  INVX1 gt_21_59_g297(.A (in1[2]), .Y (gt_21_59_n_2));
  NAND2BX1 gt_21_59_g2(.AN (in1[0]), .B (in2[0]), .Y (gt_21_59_n_1));
  NAND2BX4 gt_21_59_g299(.AN (in1[3]), .B (in2[3]), .Y (gt_21_59_n_0));
  CLKBUFX2 gt_21_59_g301(.A (gt_21_59_n_14), .Y (gt_21_59_n_35));
endmodule


