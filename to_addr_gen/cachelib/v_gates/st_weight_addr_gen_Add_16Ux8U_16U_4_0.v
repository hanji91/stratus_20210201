`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:51:49 KST (Dec  7 2020 09:51:49 UTC)

module st_weight_addr_gen_Add_16Ux8U_16U_4_0(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [15:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_25, add_23_2_n_27, add_23_2_n_29, add_23_2_n_30,
       add_23_2_n_32, add_23_2_n_33, add_23_2_n_35, add_23_2_n_36;
  wire add_23_2_n_37, add_23_2_n_40, add_23_2_n_41, add_23_2_n_42,
       add_23_2_n_43, add_23_2_n_46, add_23_2_n_47, add_23_2_n_49;
  wire add_23_2_n_51, add_23_2_n_53;
  XNOR2X1 add_23_2_g451(.A (in2[15]), .B (add_23_2_n_53), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g452(.A (in2[13]), .B (add_23_2_n_49), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g453(.A (in2[14]), .B (add_23_2_n_51), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g454(.A (in2[11]), .B (add_23_2_n_47), .Y
       (out1[11]));
  NAND2BX1 add_23_2_g455(.AN (add_23_2_n_51), .B (in2[14]), .Y
       (add_23_2_n_53));
  XNOR2X1 add_23_2_g456(.A (in2[9]), .B (add_23_2_n_42), .Y (out1[9]));
  NAND3BXL add_23_2_g457(.AN (add_23_2_n_46), .B (in2[12]), .C
       (in2[13]), .Y (add_23_2_n_51));
  XNOR2X1 add_23_2_g458(.A (in2[12]), .B (add_23_2_n_46), .Y
       (out1[12]));
  NAND2BX1 add_23_2_g459(.AN (add_23_2_n_46), .B (in2[12]), .Y
       (add_23_2_n_49));
  XNOR2X1 add_23_2_g460(.A (in2[10]), .B (add_23_2_n_43), .Y
       (out1[10]));
  NAND2BX1 add_23_2_g461(.AN (add_23_2_n_43), .B (in2[10]), .Y
       (add_23_2_n_47));
  NAND4XL add_23_2_g462(.A (in2[11]), .B (in2[10]), .C (add_23_2_n_7),
       .D (add_23_2_n_40), .Y (add_23_2_n_46));
  XNOR2X1 add_23_2_g463(.A (add_23_2_n_21), .B (add_23_2_n_41), .Y
       (out1[7]));
  XOR2XL add_23_2_g464(.A (in2[8]), .B (add_23_2_n_40), .Y (out1[8]));
  NAND2X1 add_23_2_g465(.A (add_23_2_n_7), .B (add_23_2_n_40), .Y
       (add_23_2_n_43));
  NAND2X1 add_23_2_g466(.A (in2[8]), .B (add_23_2_n_40), .Y
       (add_23_2_n_42));
  OAI21X1 add_23_2_g467(.A0 (add_23_2_n_8), .A1 (add_23_2_n_36), .B0
       (add_23_2_n_4), .Y (add_23_2_n_41));
  OAI211X1 add_23_2_g468(.A0 (add_23_2_n_4), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_37), .C0 (add_23_2_n_25), .Y (add_23_2_n_40));
  XNOR2X1 add_23_2_g469(.A (add_23_2_n_16), .B (add_23_2_n_36), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g470(.A (add_23_2_n_17), .B (add_23_2_n_35), .Y
       (out1[5]));
  AOI31X1 add_23_2_g471(.A0 (add_23_2_n_18), .A1 (add_23_2_n_15), .A2
       (add_23_2_n_32), .B0 (add_23_2_n_12), .Y (add_23_2_n_37));
  AOI21X1 add_23_2_g472(.A0 (add_23_2_n_18), .A1 (add_23_2_n_32), .B0
       (add_23_2_n_22), .Y (add_23_2_n_36));
  OAI21X1 add_23_2_g473(.A0 (add_23_2_n_11), .A1 (add_23_2_n_33), .B0
       (add_23_2_n_10), .Y (add_23_2_n_35));
  XNOR2X1 add_23_2_g474(.A (add_23_2_n_19), .B (add_23_2_n_33), .Y
       (out1[4]));
  INVX1 add_23_2_g475(.A (add_23_2_n_32), .Y (add_23_2_n_33));
  OAI21X1 add_23_2_g476(.A0 (add_23_2_n_5), .A1 (add_23_2_n_30), .B0
       (add_23_2_n_6), .Y (add_23_2_n_32));
  XNOR2X1 add_23_2_g477(.A (add_23_2_n_14), .B (add_23_2_n_29), .Y
       (out1[3]));
  AOI21X1 add_23_2_g478(.A0 (add_23_2_n_9), .A1 (add_23_2_n_27), .B0
       (add_23_2_n_0), .Y (add_23_2_n_30));
  OAI2BB1X1 add_23_2_g479(.A0N (add_23_2_n_9), .A1N (add_23_2_n_27),
       .B0 (add_23_2_n_1), .Y (add_23_2_n_29));
  XNOR2X1 add_23_2_g480(.A (add_23_2_n_20), .B (add_23_2_n_27), .Y
       (out1[2]));
  ADDFX1 add_23_2_g481(.A (add_23_2_n_23), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_27), .S (out1[1]));
  NAND2X1 add_23_2_g482(.A (add_23_2_n_15), .B (add_23_2_n_22), .Y
       (add_23_2_n_25));
  ADDHX1 add_23_2_g483(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_23),
       .S (out1[0]));
  OAI21X1 add_23_2_g484(.A0 (add_23_2_n_10), .A1 (add_23_2_n_3), .B0
       (add_23_2_n_13), .Y (add_23_2_n_22));
  OR2XL add_23_2_g485(.A (add_23_2_n_12), .B (add_23_2_n_2), .Y
       (add_23_2_n_21));
  NAND2X1 add_23_2_g486(.A (add_23_2_n_1), .B (add_23_2_n_9), .Y
       (add_23_2_n_20));
  NOR2BX1 add_23_2_g487(.AN (add_23_2_n_10), .B (add_23_2_n_11), .Y
       (add_23_2_n_19));
  NOR2X1 add_23_2_g488(.A (add_23_2_n_3), .B (add_23_2_n_11), .Y
       (add_23_2_n_18));
  NAND2BX1 add_23_2_g489(.AN (add_23_2_n_3), .B (add_23_2_n_13), .Y
       (add_23_2_n_17));
  NOR2BX1 add_23_2_g490(.AN (add_23_2_n_4), .B (add_23_2_n_8), .Y
       (add_23_2_n_16));
  NOR2X1 add_23_2_g491(.A (add_23_2_n_2), .B (add_23_2_n_8), .Y
       (add_23_2_n_15));
  NAND2BX1 add_23_2_g492(.AN (add_23_2_n_5), .B (add_23_2_n_6), .Y
       (add_23_2_n_14));
  NAND2X1 add_23_2_g493(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_13));
  AND2XL add_23_2_g494(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_12));
  NOR2X1 add_23_2_g495(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_11));
  NAND2X1 add_23_2_g496(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_10));
  OR2X1 add_23_2_g497(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g498(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_8));
  INVX1 add_23_2_g499(.A (add_23_2_n_1), .Y (add_23_2_n_0));
  AND2XL add_23_2_g500(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g501(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g502(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g503(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g504(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g505(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g506(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_1));
endmodule


