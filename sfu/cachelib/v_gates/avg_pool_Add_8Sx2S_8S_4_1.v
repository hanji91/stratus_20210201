`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 19:58:33 KST (Jan 27 2021 10:58:33 UTC)

module avg_pool_Add_8Sx2S_8S_4_1(in2, in1, out1);
  input [7:0] in2;
  input [1:0] in1;
  output [7:0] out1;
  wire [7:0] in2;
  wire [1:0] in1;
  wire [7:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_17;
  wire add_23_2_n_19, add_23_2_n_20, add_23_2_n_22, add_23_2_n_24,
       add_23_2_n_25, add_23_2_n_27, add_23_2_n_28;
  XNOR2X1 add_23_2_g248(.A (add_23_2_n_9), .B (add_23_2_n_28), .Y
       (out1[7]));
  ADDFX1 add_23_2_g249(.A (add_23_2_n_27), .B (in1[1]), .CI (in2[6]),
       .CO (add_23_2_n_28), .S (out1[6]));
  OAI21X1 add_23_2_g250(.A0 (add_23_2_n_0), .A1 (add_23_2_n_25), .B0
       (add_23_2_n_2), .Y (add_23_2_n_27));
  XNOR2X1 add_23_2_g251(.A (add_23_2_n_12), .B (add_23_2_n_24), .Y
       (out1[5]));
  OA21X1 add_23_2_g252(.A0 (add_23_2_n_8), .A1 (add_23_2_n_22), .B0
       (add_23_2_n_6), .Y (add_23_2_n_25));
  OAI21X1 add_23_2_g253(.A0 (add_23_2_n_8), .A1 (add_23_2_n_22), .B0
       (add_23_2_n_6), .Y (add_23_2_n_24));
  XNOR2X1 add_23_2_g254(.A (add_23_2_n_10), .B (add_23_2_n_22), .Y
       (out1[4]));
  OA21X1 add_23_2_g255(.A0 (add_23_2_n_7), .A1 (add_23_2_n_20), .B0
       (add_23_2_n_1), .Y (add_23_2_n_22));
  XNOR2X1 add_23_2_g256(.A (add_23_2_n_11), .B (add_23_2_n_19), .Y
       (out1[3]));
  AOI21X1 add_23_2_g257(.A0 (add_23_2_n_5), .A1 (add_23_2_n_17), .B0
       (add_23_2_n_3), .Y (add_23_2_n_20));
  OAI2BB1X1 add_23_2_g258(.A0N (add_23_2_n_5), .A1N (add_23_2_n_17),
       .B0 (add_23_2_n_4), .Y (add_23_2_n_19));
  XNOR2X1 add_23_2_g259(.A (add_23_2_n_13), .B (add_23_2_n_17), .Y
       (out1[2]));
  ADDFX1 add_23_2_g260(.A (add_23_2_n_14), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_17), .S (out1[1]));
  ADDHX1 add_23_2_g261(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_14),
       .S (out1[0]));
  NAND2X1 add_23_2_g262(.A (add_23_2_n_4), .B (add_23_2_n_5), .Y
       (add_23_2_n_13));
  NAND2BX1 add_23_2_g263(.AN (add_23_2_n_0), .B (add_23_2_n_2), .Y
       (add_23_2_n_12));
  NAND2BX1 add_23_2_g264(.AN (add_23_2_n_7), .B (add_23_2_n_1), .Y
       (add_23_2_n_11));
  NOR2BX1 add_23_2_g265(.AN (add_23_2_n_6), .B (add_23_2_n_8), .Y
       (add_23_2_n_10));
  XNOR2X1 add_23_2_g266(.A (in2[7]), .B (in1[1]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g267(.A (in2[4]), .B (in1[1]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g268(.A (in2[3]), .B (in1[1]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g269(.A (in2[4]), .B (in1[1]), .Y (add_23_2_n_6));
  OR2X1 add_23_2_g270(.A (in2[2]), .B (in1[1]), .Y (add_23_2_n_5));
  INVX1 add_23_2_g271(.A (add_23_2_n_4), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g272(.A (in2[2]), .B (in1[1]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g273(.A (in2[5]), .B (in1[1]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g274(.A (in2[3]), .B (in1[1]), .Y (add_23_2_n_1));
  NOR2X1 add_23_2_g275(.A (in2[5]), .B (in1[1]), .Y (add_23_2_n_0));
endmodule


