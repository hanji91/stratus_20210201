`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:10 KST (Dec  7 2020 13:18:10 UTC)

module st_feature_addr_gen_Add_16Ux8U_17U_4(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [16:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_21, add_23_2_n_23, add_23_2_n_26, add_23_2_n_27;
  wire add_23_2_n_29, add_23_2_n_30, add_23_2_n_31, add_23_2_n_34,
       add_23_2_n_35, add_23_2_n_36, add_23_2_n_37, add_23_2_n_40;
  wire add_23_2_n_41, add_23_2_n_42, add_23_2_n_46;
  ADDHX1 add_23_2_g462(.A (in2[15]), .B (add_23_2_n_46), .CO
       (out1[16]), .S (out1[15]));
  XNOR2X1 add_23_2_g463(.A (in2[13]), .B (add_23_2_n_42), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g464(.A (in2[11]), .B (add_23_2_n_40), .Y
       (out1[11]));
  ADDHX1 add_23_2_g465(.A (in2[14]), .B (add_23_2_n_41), .CO
       (add_23_2_n_46), .S (out1[14]));
  XNOR2X1 add_23_2_g466(.A (in2[9]), .B (add_23_2_n_36), .Y (out1[9]));
  XNOR2X1 add_23_2_g467(.A (in2[12]), .B (add_23_2_n_0), .Y (out1[12]));
  XOR2XL add_23_2_g468(.A (in2[10]), .B (add_23_2_n_37), .Y (out1[10]));
  NAND2BX1 add_23_2_g469(.AN (add_23_2_n_0), .B (in2[12]), .Y
       (add_23_2_n_42));
  NOR2X1 add_23_2_g470(.A (add_23_2_n_11), .B (add_23_2_n_0), .Y
       (add_23_2_n_41));
  NAND2X1 add_23_2_g471(.A (in2[10]), .B (add_23_2_n_37), .Y
       (add_23_2_n_40));
  XNOR2X1 add_23_2_g472(.A (in2[8]), .B (add_23_2_n_34), .Y (out1[8]));
  XNOR2X1 add_23_2_g473(.A (add_23_2_n_13), .B (add_23_2_n_35), .Y
       (out1[7]));
  NOR2X1 add_23_2_g474(.A (add_23_2_n_3), .B (add_23_2_n_34), .Y
       (add_23_2_n_37));
  NAND2BX1 add_23_2_g475(.AN (add_23_2_n_34), .B (in2[8]), .Y
       (add_23_2_n_36));
  OAI21X1 add_23_2_g477(.A0 (add_23_2_n_8), .A1 (add_23_2_n_30), .B0
       (add_23_2_n_1), .Y (add_23_2_n_35));
  AOI211XL add_23_2_g479(.A0 (add_23_2_n_15), .A1 (add_23_2_n_18), .B0
       (add_23_2_n_31), .C0 (add_23_2_n_16), .Y (add_23_2_n_34));
  XNOR2X1 add_23_2_g480(.A (add_23_2_n_14), .B (add_23_2_n_30), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g481(.A (add_23_2_n_17), .B (add_23_2_n_29), .Y
       (out1[5]));
  OAI2BB1X1 add_23_2_g482(.A0N (add_23_2_n_15), .A1N (add_23_2_n_27),
       .B0 (add_23_2_n_6), .Y (add_23_2_n_31));
  NOR2X1 add_23_2_g483(.A (add_23_2_n_18), .B (add_23_2_n_27), .Y
       (add_23_2_n_30));
  OAI2BB1X1 add_23_2_g484(.A0N (add_23_2_n_5), .A1N (add_23_2_n_26),
       .B0 (add_23_2_n_10), .Y (add_23_2_n_29));
  XNOR2X1 add_23_2_g485(.A (add_23_2_n_12), .B (add_23_2_n_26), .Y
       (out1[4]));
  NOR3BX1 add_23_2_g486(.AN (add_23_2_n_26), .B (add_23_2_n_9), .C
       (add_23_2_n_4), .Y (add_23_2_n_27));
  ADDFX1 add_23_2_g487(.A (add_23_2_n_23), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_26), .S (out1[3]));
  ADDFX1 add_23_2_g488(.A (add_23_2_n_21), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_23), .S (out1[2]));
  ADDFX1 add_23_2_g489(.A (add_23_2_n_19), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_21), .S (out1[1]));
  ADDHX1 add_23_2_g490(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_19),
       .S (out1[0]));
  OAI21X1 add_23_2_g491(.A0 (add_23_2_n_10), .A1 (add_23_2_n_9), .B0
       (add_23_2_n_7), .Y (add_23_2_n_18));
  NAND2BX1 add_23_2_g492(.AN (add_23_2_n_9), .B (add_23_2_n_7), .Y
       (add_23_2_n_17));
  NOR2X1 add_23_2_g493(.A (add_23_2_n_1), .B (add_23_2_n_2), .Y
       (add_23_2_n_16));
  NOR2X1 add_23_2_g494(.A (add_23_2_n_2), .B (add_23_2_n_8), .Y
       (add_23_2_n_15));
  NOR2BX1 add_23_2_g495(.AN (add_23_2_n_1), .B (add_23_2_n_8), .Y
       (add_23_2_n_14));
  NAND2BX1 add_23_2_g496(.AN (add_23_2_n_2), .B (add_23_2_n_6), .Y
       (add_23_2_n_13));
  NAND2X1 add_23_2_g497(.A (add_23_2_n_10), .B (add_23_2_n_5), .Y
       (add_23_2_n_12));
  NAND2X1 add_23_2_g498(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_11));
  NAND2X1 add_23_2_g499(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g500(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g501(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g502(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g503(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_6));
  INVX1 add_23_2_g504(.A (add_23_2_n_4), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g505(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g506(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g507(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g508(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_1));
  NAND4BBXL add_23_2_g2(.AN (add_23_2_n_3), .BN (add_23_2_n_34), .C
       (in2[10]), .D (in2[11]), .Y (add_23_2_n_0));
endmodule


