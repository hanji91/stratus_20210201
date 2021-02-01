`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 14:49:30 KST (Jan  6 2021 05:49:30 UTC)

module fix2float_MuxCats23CatAdd2u8s8s1i0u1_4_1(in5, in4, in3, in2,
     ctrl1, out1);
  input in5, ctrl1;
  input [7:0] in4, in3;
  input [22:0] in2;
  output [31:0] out1;
  wire in5, ctrl1;
  wire [7:0] in4, in3;
  wire [22:0] in2;
  wire [31:0] out1;
  wire add_31_2_n_0, add_31_2_n_1, add_31_2_n_2, add_31_2_n_3,
       add_31_2_n_4, add_31_2_n_5, add_31_2_n_6, add_31_2_n_7;
  wire add_31_2_n_8, add_31_2_n_9, add_31_2_n_10, add_31_2_n_11,
       add_31_2_n_12, add_31_2_n_13, add_31_2_n_14, add_31_2_n_17;
  wire add_31_2_n_19, add_31_2_n_20, add_31_2_n_22, add_31_2_n_24,
       add_31_2_n_25, add_31_2_n_27, add_31_2_n_28, n_0;
  wire n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  AND2XL g257(.A (in2[10]), .B (ctrl1), .Y (out1[10]));
  AND2XL g258(.A (ctrl1), .B (n_7), .Y (out1[30]));
  AND2XL g259(.A (ctrl1), .B (n_5), .Y (out1[28]));
  AND2XL g260(.A (ctrl1), .B (n_1), .Y (out1[24]));
  AND2XL g261(.A (in2[16]), .B (ctrl1), .Y (out1[16]));
  AND2XL g262(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
  AND2XL g263(.A (in2[15]), .B (ctrl1), .Y (out1[15]));
  AND2XL g264(.A (ctrl1), .B (n_0), .Y (out1[23]));
  AND2XL g265(.A (in2[14]), .B (ctrl1), .Y (out1[14]));
  AND2XL g266(.A (in2[13]), .B (ctrl1), .Y (out1[13]));
  AND2XL g267(.A (ctrl1), .B (n_4), .Y (out1[27]));
  AND2XL g268(.A (in2[22]), .B (ctrl1), .Y (out1[22]));
  AND2XL g269(.A (in2[12]), .B (ctrl1), .Y (out1[12]));
  AND2XL g270(.A (in2[11]), .B (ctrl1), .Y (out1[11]));
  AND2XL g271(.A (in2[21]), .B (ctrl1), .Y (out1[21]));
  AND2XL g272(.A (in5), .B (ctrl1), .Y (out1[31]));
  AND2XL g273(.A (in2[1]), .B (ctrl1), .Y (out1[1]));
  AND2XL g274(.A (ctrl1), .B (n_6), .Y (out1[29]));
  AND2XL g275(.A (ctrl1), .B (n_3), .Y (out1[26]));
  AND2XL g276(.A (in2[20]), .B (ctrl1), .Y (out1[20]));
  AND2XL g277(.A (in2[8]), .B (ctrl1), .Y (out1[8]));
  AND2XL g278(.A (in2[7]), .B (ctrl1), .Y (out1[7]));
  AND2XL g279(.A (in2[19]), .B (ctrl1), .Y (out1[19]));
  AND2XL g280(.A (in2[6]), .B (ctrl1), .Y (out1[6]));
  AND2XL g281(.A (in2[5]), .B (ctrl1), .Y (out1[5]));
  AND2XL g282(.A (ctrl1), .B (n_2), .Y (out1[25]));
  AND2XL g283(.A (in2[18]), .B (ctrl1), .Y (out1[18]));
  AND2XL g284(.A (in2[4]), .B (ctrl1), .Y (out1[4]));
  AND2XL g285(.A (in2[3]), .B (ctrl1), .Y (out1[3]));
  AND2XL g286(.A (in2[17]), .B (ctrl1), .Y (out1[17]));
  AND2XL g287(.A (in2[2]), .B (ctrl1), .Y (out1[2]));
  AND2XL g288(.A (in2[9]), .B (ctrl1), .Y (out1[9]));
  XNOR2X1 add_31_2_g245(.A (add_31_2_n_9), .B (add_31_2_n_28), .Y
       (n_7));
  ADDFX1 add_31_2_g246(.A (add_31_2_n_27), .B (in3[6]), .CI (in4[6]),
       .CO (add_31_2_n_28), .S (n_6));
  OAI21X1 add_31_2_g247(.A0 (add_31_2_n_2), .A1 (add_31_2_n_25), .B0
       (add_31_2_n_7), .Y (add_31_2_n_27));
  XNOR2X1 add_31_2_g248(.A (add_31_2_n_11), .B (add_31_2_n_24), .Y
       (n_5));
  OA21X1 add_31_2_g249(.A0 (add_31_2_n_3), .A1 (add_31_2_n_22), .B0
       (add_31_2_n_1), .Y (add_31_2_n_25));
  OAI21X1 add_31_2_g250(.A0 (add_31_2_n_3), .A1 (add_31_2_n_22), .B0
       (add_31_2_n_1), .Y (add_31_2_n_24));
  XNOR2X1 add_31_2_g251(.A (add_31_2_n_10), .B (add_31_2_n_22), .Y
       (n_4));
  OA21X1 add_31_2_g252(.A0 (add_31_2_n_0), .A1 (add_31_2_n_20), .B0
       (add_31_2_n_8), .Y (add_31_2_n_22));
  XNOR2X1 add_31_2_g253(.A (add_31_2_n_13), .B (add_31_2_n_19), .Y
       (n_3));
  AOI21XL add_31_2_g254(.A0 (add_31_2_n_6), .A1 (add_31_2_n_17), .B0
       (add_31_2_n_4), .Y (add_31_2_n_20));
  OAI2BB1X1 add_31_2_g255(.A0N (add_31_2_n_6), .A1N (add_31_2_n_17),
       .B0 (add_31_2_n_5), .Y (add_31_2_n_19));
  XNOR2X1 add_31_2_g256(.A (add_31_2_n_12), .B (add_31_2_n_17), .Y
       (n_2));
  ADDFX1 add_31_2_g257(.A (add_31_2_n_14), .B (in3[1]), .CI (in4[1]),
       .CO (add_31_2_n_17), .S (n_1));
  ADDHX1 add_31_2_g258(.A (in4[0]), .B (in3[0]), .CO (add_31_2_n_14),
       .S (n_0));
  NAND2BX1 add_31_2_g259(.AN (add_31_2_n_0), .B (add_31_2_n_8), .Y
       (add_31_2_n_13));
  NAND2X1 add_31_2_g260(.A (add_31_2_n_5), .B (add_31_2_n_6), .Y
       (add_31_2_n_12));
  NAND2BX1 add_31_2_g261(.AN (add_31_2_n_2), .B (add_31_2_n_7), .Y
       (add_31_2_n_11));
  NOR2BX1 add_31_2_g262(.AN (add_31_2_n_1), .B (add_31_2_n_3), .Y
       (add_31_2_n_10));
  XNOR2X1 add_31_2_g263(.A (in4[7]), .B (in3[7]), .Y (add_31_2_n_9));
  NAND2X1 add_31_2_g264(.A (in4[3]), .B (in3[3]), .Y (add_31_2_n_8));
  NAND2X1 add_31_2_g265(.A (in4[5]), .B (in3[5]), .Y (add_31_2_n_7));
  OR2XL add_31_2_g266(.A (in4[2]), .B (in3[2]), .Y (add_31_2_n_6));
  INVX1 add_31_2_g267(.A (add_31_2_n_5), .Y (add_31_2_n_4));
  NAND2X1 add_31_2_g268(.A (in4[2]), .B (in3[2]), .Y (add_31_2_n_5));
  NOR2X1 add_31_2_g269(.A (in4[4]), .B (in3[4]), .Y (add_31_2_n_3));
  NOR2X1 add_31_2_g270(.A (in4[5]), .B (in3[5]), .Y (add_31_2_n_2));
  NAND2X1 add_31_2_g271(.A (in4[4]), .B (in3[4]), .Y (add_31_2_n_1));
  NOR2X1 add_31_2_g272(.A (in4[3]), .B (in3[3]), .Y (add_31_2_n_0));
endmodule


