`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 21 2021 19:50:43 KST (Jan 21 2021 10:50:43 UTC)

module pw_feature_addr_gen_Add_16Ux6U_16U_4(in2, in1, out1);
  input [15:0] in2;
  input [5:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [5:0] in1;
  wire [15:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_19, add_23_2_n_22, add_23_2_n_23,
       add_23_2_n_24, add_23_2_n_26, add_23_2_n_27, add_23_2_n_28;
  wire add_23_2_n_29, add_23_2_n_30, add_23_2_n_33, add_23_2_n_34,
       add_23_2_n_35, add_23_2_n_37, add_23_2_n_39, add_23_2_n_42;
  wire add_23_2_n_44;
  XNOR2X1 add_23_2_g444(.A (in2[15]), .B (add_23_2_n_44), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g445(.A (in2[13]), .B (add_23_2_n_39), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g446(.A (in2[14]), .B (add_23_2_n_42), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g447(.A (in2[11]), .B (add_23_2_n_37), .Y
       (out1[11]));
  NAND2BX1 add_23_2_g448(.AN (add_23_2_n_42), .B (in2[14]), .Y
       (add_23_2_n_44));
  XNOR2X1 add_23_2_g449(.A (in2[9]), .B (add_23_2_n_33), .Y (out1[9]));
  NAND3BXL add_23_2_g450(.AN (add_23_2_n_35), .B (in2[12]), .C
       (in2[13]), .Y (add_23_2_n_42));
  XNOR2X1 add_23_2_g451(.A (in2[12]), .B (add_23_2_n_35), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g452(.A (in2[7]), .B (add_23_2_n_30), .Y (out1[7]));
  NAND2BX1 add_23_2_g453(.AN (add_23_2_n_35), .B (in2[12]), .Y
       (add_23_2_n_39));
  XOR2XL add_23_2_g454(.A (in2[10]), .B (add_23_2_n_34), .Y (out1[10]));
  NAND2X1 add_23_2_g455(.A (in2[10]), .B (add_23_2_n_34), .Y
       (add_23_2_n_37));
  XNOR2X1 add_23_2_g456(.A (in2[8]), .B (add_23_2_n_29), .Y (out1[8]));
  NAND4XL add_23_2_g457(.A (in2[11]), .B (in2[10]), .C (add_23_2_n_1),
       .D (add_23_2_n_28), .Y (add_23_2_n_35));
  NOR2BX1 add_23_2_g458(.AN (add_23_2_n_1), .B (add_23_2_n_29), .Y
       (add_23_2_n_34));
  NAND2X1 add_23_2_g459(.A (in2[8]), .B (add_23_2_n_28), .Y
       (add_23_2_n_33));
  XNOR2X1 add_23_2_g460(.A (in2[6]), .B (add_23_2_n_27), .Y (out1[6]));
  XNOR2X1 add_23_2_g461(.A (add_23_2_n_13), .B (add_23_2_n_26), .Y
       (out1[5]));
  NAND2BX1 add_23_2_g462(.AN (add_23_2_n_27), .B (in2[6]), .Y
       (add_23_2_n_30));
  INVX1 add_23_2_g463(.A (add_23_2_n_29), .Y (add_23_2_n_28));
  OAI211X1 add_23_2_g464(.A0 (add_23_2_n_15), .A1 (add_23_2_n_24), .B0
       (in2[7]), .C0 (in2[6]), .Y (add_23_2_n_29));
  AOI21X1 add_23_2_g465(.A0 (add_23_2_n_14), .A1 (add_23_2_n_23), .B0
       (add_23_2_n_15), .Y (add_23_2_n_27));
  OAI21X1 add_23_2_g466(.A0 (add_23_2_n_9), .A1 (add_23_2_n_22), .B0
       (add_23_2_n_3), .Y (add_23_2_n_26));
  XNOR2X1 add_23_2_g467(.A (add_23_2_n_12), .B (add_23_2_n_23), .Y
       (out1[4]));
  NOR2BX1 add_23_2_g468(.AN (add_23_2_n_14), .B (add_23_2_n_22), .Y
       (add_23_2_n_24));
  INVX1 add_23_2_g469(.A (add_23_2_n_23), .Y (add_23_2_n_22));
  OAI2BB1X1 add_23_2_g470(.A0N (add_23_2_n_4), .A1N (add_23_2_n_0), .B0
       (add_23_2_n_8), .Y (add_23_2_n_23));
  XNOR2X1 add_23_2_g471(.A (add_23_2_n_11), .B (add_23_2_n_0), .Y
       (out1[3]));
  XNOR2X1 add_23_2_g474(.A (add_23_2_n_10), .B (add_23_2_n_19), .Y
       (out1[2]));
  ADDFX1 add_23_2_g475(.A (add_23_2_n_16), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_19), .S (out1[1]));
  ADDHX1 add_23_2_g476(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_16),
       .S (out1[0]));
  OAI21X1 add_23_2_g477(.A0 (add_23_2_n_3), .A1 (add_23_2_n_5), .B0
       (add_23_2_n_2), .Y (add_23_2_n_15));
  NOR2X1 add_23_2_g478(.A (add_23_2_n_5), .B (add_23_2_n_9), .Y
       (add_23_2_n_14));
  NAND2BX1 add_23_2_g479(.AN (add_23_2_n_5), .B (add_23_2_n_2), .Y
       (add_23_2_n_13));
  NAND2BX1 add_23_2_g480(.AN (add_23_2_n_9), .B (add_23_2_n_3), .Y
       (add_23_2_n_12));
  NAND2X1 add_23_2_g481(.A (add_23_2_n_8), .B (add_23_2_n_4), .Y
       (add_23_2_n_11));
  NAND2X1 add_23_2_g482(.A (add_23_2_n_6), .B (add_23_2_n_7), .Y
       (add_23_2_n_10));
  NOR2X1 add_23_2_g483(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g484(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_8));
  OR2X1 add_23_2_g485(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g486(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g487(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_5));
  OR2XL add_23_2_g488(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g489(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g490(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  AND2XL add_23_2_g491(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_1));
  OAI2BB1X1 add_23_2_g492(.A0N (add_23_2_n_7), .A1N (add_23_2_n_19),
       .B0 (add_23_2_n_6), .Y (add_23_2_n_0));
endmodule


