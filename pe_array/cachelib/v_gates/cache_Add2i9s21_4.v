`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 17 2020 14:24:44 KST (Dec 17 2020 05:24:44 UTC)

module cache_Add2i9s21_4(in1, out1);
  input [20:0] in1;
  output [21:0] out1;
  wire [20:0] in1;
  wire [21:0] out1;
  wire add_21_2_n_0, add_21_2_n_1, add_21_2_n_2, add_21_2_n_3,
       add_21_2_n_4, add_21_2_n_5, add_21_2_n_6, add_21_2_n_7;
  wire add_21_2_n_8, add_21_2_n_9, add_21_2_n_12, add_21_2_n_13,
       add_21_2_n_15, add_21_2_n_17, add_21_2_n_18, add_21_2_n_20;
  wire add_21_2_n_22, add_21_2_n_23, add_21_2_n_24, add_21_2_n_27,
       add_21_2_n_28, add_21_2_n_30, add_21_2_n_33, add_21_2_n_34;
  wire add_21_2_n_37, add_21_2_n_38;
  INVX1 g7(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 add_21_2_g498(.A (in1[19]), .B (add_21_2_n_38), .Y
       (out1[19]));
  XNOR2X1 add_21_2_g499(.A (in1[17]), .B (add_21_2_n_33), .Y
       (out1[17]));
  XNOR2X1 add_21_2_g500(.A (in1[15]), .B (add_21_2_n_30), .Y
       (out1[15]));
  XNOR2X1 add_21_2_g501(.A (in1[20]), .B (add_21_2_n_37), .Y
       (out1[20]));
  AND2XL add_21_2_g502(.A (in1[20]), .B (add_21_2_n_37), .Y (out1[21]));
  XNOR2X1 add_21_2_g503(.A (in1[13]), .B (add_21_2_n_23), .Y
       (out1[13]));
  XNOR2X1 add_21_2_g504(.A (in1[11]), .B (add_21_2_n_22), .Y
       (out1[11]));
  XOR2XL add_21_2_g505(.A (in1[18]), .B (add_21_2_n_34), .Y (out1[18]));
  NAND2X1 add_21_2_g506(.A (in1[18]), .B (add_21_2_n_34), .Y
       (add_21_2_n_38));
  NAND4XL add_21_2_g507(.A (in1[19]), .B (in1[18]), .C (add_21_2_n_6),
       .D (add_21_2_n_27), .Y (add_21_2_n_37));
  MXI2XL add_21_2_g508(.A (add_21_2_n_28), .B (add_21_2_n_27), .S0
       (in1[16]), .Y (out1[16]));
  XNOR2X1 add_21_2_g509(.A (in1[9]), .B (add_21_2_n_0), .Y (out1[9]));
  NOR2BX1 add_21_2_g510(.AN (add_21_2_n_6), .B (add_21_2_n_28), .Y
       (add_21_2_n_34));
  NAND2X1 add_21_2_g511(.A (in1[16]), .B (add_21_2_n_27), .Y
       (add_21_2_n_33));
  XNOR2X1 add_21_2_g512(.A (in1[14]), .B (add_21_2_n_24), .Y
       (out1[14]));
  XNOR2X1 add_21_2_g513(.A (in1[7]), .B (add_21_2_n_18), .Y (out1[7]));
  NAND2BX1 add_21_2_g514(.AN (add_21_2_n_24), .B (in1[14]), .Y
       (add_21_2_n_30));
  XNOR2X1 add_21_2_g515(.A (in1[5]), .B (add_21_2_n_15), .Y (out1[5]));
  INVX1 add_21_2_g516(.A (add_21_2_n_28), .Y (add_21_2_n_27));
  NAND4XL add_21_2_g517(.A (in1[15]), .B (add_21_2_n_5), .C (in1[14]),
       .D (add_21_2_n_1), .Y (add_21_2_n_28));
  XOR2XL add_21_2_g518(.A (in1[12]), .B (add_21_2_n_1), .Y (out1[12]));
  XOR2XL add_21_2_g519(.A (in1[10]), .B (add_21_2_n_20), .Y (out1[10]));
  NAND2X1 add_21_2_g520(.A (add_21_2_n_5), .B (add_21_2_n_1), .Y
       (add_21_2_n_24));
  NAND2X1 add_21_2_g521(.A (in1[12]), .B (add_21_2_n_1), .Y
       (add_21_2_n_23));
  NAND2X1 add_21_2_g522(.A (in1[10]), .B (add_21_2_n_20), .Y
       (add_21_2_n_22));
  XNOR2X1 add_21_2_g523(.A (in1[8]), .B (add_21_2_n_17), .Y (out1[8]));
  NOR2X1 add_21_2_g526(.A (add_21_2_n_7), .B (add_21_2_n_17), .Y
       (add_21_2_n_20));
  XOR2XL add_21_2_g528(.A (in1[6]), .B (add_21_2_n_2), .Y (out1[6]));
  NAND2X1 add_21_2_g529(.A (in1[6]), .B (add_21_2_n_2), .Y
       (add_21_2_n_18));
  NAND3X1 add_21_2_g531(.A (add_21_2_n_2), .B (in1[7]), .C (in1[6]), .Y
       (add_21_2_n_17));
  XNOR2X1 add_21_2_g532(.A (in1[4]), .B (add_21_2_n_13), .Y (out1[4]));
  NAND2X1 add_21_2_g535(.A (in1[4]), .B (add_21_2_n_3), .Y
       (add_21_2_n_15));
  OAI2BB1X1 add_21_2_g537(.A0N (in1[3]), .A1N (add_21_2_n_12), .B0
       (add_21_2_n_3), .Y (out1[3]));
  INVX1 add_21_2_g538(.A (add_21_2_n_13), .Y (add_21_2_n_3));
  NOR2X1 add_21_2_g539(.A (in1[3]), .B (add_21_2_n_12), .Y
       (add_21_2_n_13));
  ADDHX1 add_21_2_g540(.A (in1[2]), .B (add_21_2_n_9), .CO
       (add_21_2_n_12), .S (out1[2]));
  ADDHX1 add_21_2_g541(.A (in1[1]), .B (in1[0]), .CO (add_21_2_n_9), .S
       (out1[1]));
  NAND3BXL add_21_2_g542(.AN (add_21_2_n_7), .B (in1[10]), .C
       (in1[11]), .Y (add_21_2_n_8));
  NAND2X1 add_21_2_g543(.A (in1[9]), .B (in1[8]), .Y (add_21_2_n_7));
  AND2XL add_21_2_g544(.A (in1[17]), .B (in1[16]), .Y (add_21_2_n_6));
  AND2XL add_21_2_g545(.A (in1[13]), .B (in1[12]), .Y (add_21_2_n_5));
  NAND2X1 add_21_2_g546(.A (in1[5]), .B (in1[4]), .Y (add_21_2_n_4));
  NOR2X1 add_21_2_g547(.A (add_21_2_n_4), .B (add_21_2_n_13), .Y
       (add_21_2_n_2));
  NOR2X1 add_21_2_g548(.A (add_21_2_n_8), .B (add_21_2_n_17), .Y
       (add_21_2_n_1));
  NAND2BX1 add_21_2_g2(.AN (add_21_2_n_17), .B (in1[8]), .Y
       (add_21_2_n_0));
endmodule


