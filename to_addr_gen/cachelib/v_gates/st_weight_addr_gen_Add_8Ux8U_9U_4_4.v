`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 23:13:59 KST (Dec  7 2020 14:13:59 UTC)

module st_weight_addr_gen_Add_8Ux8U_9U_4_4(in2, in1, out1);
  input [7:0] in2, in1;
  output [8:0] out1;
  wire [7:0] in2, in1;
  wire [8:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_16;
  wire add_23_2_n_17, add_23_2_n_19, add_23_2_n_22, add_23_2_n_23,
       add_23_2_n_25, add_23_2_n_26, add_23_2_n_27, add_23_2_n_29;
  wire add_23_2_n_32;
  XNOR2X1 add_23_2_g243(.A (add_23_2_n_10), .B (add_23_2_n_32), .Y
       (out1[7]));
  OAI21X1 add_23_2_g244(.A0 (add_23_2_n_3), .A1 (add_23_2_n_27), .B0
       (add_23_2_n_7), .Y (add_23_2_n_32));
  OAI211X1 add_23_2_g245(.A0 (add_23_2_n_7), .A1 (add_23_2_n_0), .B0
       (add_23_2_n_29), .C0 (add_23_2_n_16), .Y (out1[8]));
  XNOR2X1 add_23_2_g246(.A (add_23_2_n_9), .B (add_23_2_n_27), .Y
       (out1[6]));
  AOI21X1 add_23_2_g247(.A0 (add_23_2_n_11), .A1 (add_23_2_n_26), .B0
       (add_23_2_n_1), .Y (add_23_2_n_29));
  XNOR2X1 add_23_2_g248(.A (add_23_2_n_8), .B (add_23_2_n_25), .Y
       (out1[5]));
  NOR2X1 add_23_2_g249(.A (add_23_2_n_13), .B (add_23_2_n_26), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g250(.A (add_23_2_n_6), .B (add_23_2_n_23), .Y
       (add_23_2_n_26));
  NAND2X1 add_23_2_g251(.A (add_23_2_n_5), .B (add_23_2_n_23), .Y
       (add_23_2_n_25));
  XNOR2X1 add_23_2_g252(.A (add_23_2_n_12), .B (add_23_2_n_22), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g253(.AN (add_23_2_n_2), .B (add_23_2_n_22), .Y
       (add_23_2_n_23));
  ADDFX1 add_23_2_g254(.A (add_23_2_n_19), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_22), .S (out1[3]));
  ADDFX1 add_23_2_g255(.A (add_23_2_n_17), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_19), .S (out1[2]));
  ADDFX1 add_23_2_g256(.A (add_23_2_n_14), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_17), .S (out1[1]));
  NAND2XL add_23_2_g257(.A (add_23_2_n_11), .B (add_23_2_n_13), .Y
       (add_23_2_n_16));
  ADDHX1 add_23_2_g258(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_14),
       .S (out1[0]));
  OAI21X1 add_23_2_g259(.A0 (add_23_2_n_5), .A1 (add_23_2_n_6), .B0
       (add_23_2_n_4), .Y (add_23_2_n_13));
  NAND2BX1 add_23_2_g260(.AN (add_23_2_n_2), .B (add_23_2_n_5), .Y
       (add_23_2_n_12));
  NOR2X1 add_23_2_g261(.A (add_23_2_n_0), .B (add_23_2_n_3), .Y
       (add_23_2_n_11));
  OR2XL add_23_2_g262(.A (add_23_2_n_1), .B (add_23_2_n_0), .Y
       (add_23_2_n_10));
  NOR2BX1 add_23_2_g263(.AN (add_23_2_n_7), .B (add_23_2_n_3), .Y
       (add_23_2_n_9));
  NAND2BX1 add_23_2_g264(.AN (add_23_2_n_6), .B (add_23_2_n_4), .Y
       (add_23_2_n_8));
  NAND2X1 add_23_2_g265(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_7));
  NOR2X1 add_23_2_g266(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g267(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g268(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g269(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g270(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_2));
  AND2XL add_23_2_g271(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_1));
  NOR2X1 add_23_2_g272(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_0));
endmodule


