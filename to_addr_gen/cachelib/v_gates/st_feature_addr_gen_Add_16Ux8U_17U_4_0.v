`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:20:58 KST (Dec  7 2020 13:20:58 UTC)

module st_feature_addr_gen_Add_16Ux8U_17U_4_0(in2, in1, out1);
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
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_27, add_23_2_n_29,
       add_23_2_n_31, add_23_2_n_32, add_23_2_n_34, add_23_2_n_35;
  wire add_23_2_n_37, add_23_2_n_38, add_23_2_n_39, add_23_2_n_42,
       add_23_2_n_43, add_23_2_n_44, add_23_2_n_45, add_23_2_n_46;
  wire add_23_2_n_49, add_23_2_n_50, add_23_2_n_51, add_23_2_n_52,
       add_23_2_n_56;
  XNOR2X1 add_23_2_g459(.A (in2[15]), .B (add_23_2_n_56), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g460(.A (in2[13]), .B (add_23_2_n_51), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g461(.A (in2[11]), .B (add_23_2_n_50), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g462(.A (in2[9]), .B (add_23_2_n_44), .Y (out1[9]));
  XNOR2X1 add_23_2_g463(.A (in2[14]), .B (add_23_2_n_52), .Y
       (out1[14]));
  NAND2BX1 add_23_2_g464(.AN (add_23_2_n_52), .B (in2[14]), .Y
       (add_23_2_n_56));
  NOR3BX1 add_23_2_g465(.AN (in2[15]), .B (add_23_2_n_49), .C
       (add_23_2_n_11), .Y (out1[16]));
  XNOR2X1 add_23_2_g466(.A (in2[12]), .B (add_23_2_n_46), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g467(.A (in2[10]), .B (add_23_2_n_45), .Y
       (out1[10]));
  OR2XL add_23_2_g468(.A (add_23_2_n_11), .B (add_23_2_n_46), .Y
       (add_23_2_n_52));
  NAND2BX1 add_23_2_g469(.AN (add_23_2_n_46), .B (in2[12]), .Y
       (add_23_2_n_51));
  NAND2BX1 add_23_2_g470(.AN (add_23_2_n_45), .B (in2[10]), .Y
       (add_23_2_n_50));
  NAND3BXL add_23_2_g471(.AN (add_23_2_n_24), .B (in2[14]), .C
       (add_23_2_n_42), .Y (add_23_2_n_49));
  XNOR2X1 add_23_2_g472(.A (add_23_2_n_17), .B (add_23_2_n_43), .Y
       (out1[7]));
  XOR2XL add_23_2_g473(.A (in2[8]), .B (add_23_2_n_42), .Y (out1[8]));
  NAND2BX1 add_23_2_g474(.AN (add_23_2_n_24), .B (add_23_2_n_42), .Y
       (add_23_2_n_46));
  NAND2BX1 add_23_2_g475(.AN (add_23_2_n_12), .B (add_23_2_n_42), .Y
       (add_23_2_n_45));
  NAND2X1 add_23_2_g476(.A (in2[8]), .B (add_23_2_n_42), .Y
       (add_23_2_n_44));
  OAI21X1 add_23_2_g477(.A0 (add_23_2_n_9), .A1 (add_23_2_n_38), .B0
       (add_23_2_n_0), .Y (add_23_2_n_43));
  OAI211X1 add_23_2_g478(.A0 (add_23_2_n_0), .A1 (add_23_2_n_4), .B0
       (add_23_2_n_39), .C0 (add_23_2_n_27), .Y (add_23_2_n_42));
  XNOR2X1 add_23_2_g479(.A (add_23_2_n_21), .B (add_23_2_n_38), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g480(.A (add_23_2_n_20), .B (add_23_2_n_37), .Y
       (out1[5]));
  AOI31X1 add_23_2_g481(.A0 (add_23_2_n_19), .A1 (add_23_2_n_22), .A2
       (add_23_2_n_34), .B0 (add_23_2_n_6), .Y (add_23_2_n_39));
  AOI21X1 add_23_2_g482(.A0 (add_23_2_n_19), .A1 (add_23_2_n_34), .B0
       (add_23_2_n_23), .Y (add_23_2_n_38));
  OAI21X1 add_23_2_g483(.A0 (add_23_2_n_3), .A1 (add_23_2_n_35), .B0
       (add_23_2_n_8), .Y (add_23_2_n_37));
  XNOR2X1 add_23_2_g484(.A (add_23_2_n_16), .B (add_23_2_n_35), .Y
       (out1[4]));
  INVX1 add_23_2_g485(.A (add_23_2_n_34), .Y (add_23_2_n_35));
  OAI21X1 add_23_2_g486(.A0 (add_23_2_n_13), .A1 (add_23_2_n_32), .B0
       (add_23_2_n_7), .Y (add_23_2_n_34));
  XNOR2X1 add_23_2_g487(.A (add_23_2_n_15), .B (add_23_2_n_31), .Y
       (out1[3]));
  AOI21X1 add_23_2_g488(.A0 (add_23_2_n_5), .A1 (add_23_2_n_29), .B0
       (add_23_2_n_1), .Y (add_23_2_n_32));
  OAI2BB1X1 add_23_2_g489(.A0N (add_23_2_n_5), .A1N (add_23_2_n_29),
       .B0 (add_23_2_n_2), .Y (add_23_2_n_31));
  XNOR2X1 add_23_2_g490(.A (add_23_2_n_18), .B (add_23_2_n_29), .Y
       (out1[2]));
  ADDFX1 add_23_2_g491(.A (add_23_2_n_25), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_29), .S (out1[1]));
  NAND2XL add_23_2_g492(.A (add_23_2_n_22), .B (add_23_2_n_23), .Y
       (add_23_2_n_27));
  ADDHX1 add_23_2_g493(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_25),
       .S (out1[0]));
  NAND3BXL add_23_2_g494(.AN (add_23_2_n_12), .B (in2[10]), .C
       (in2[11]), .Y (add_23_2_n_24));
  OAI21X1 add_23_2_g495(.A0 (add_23_2_n_8), .A1 (add_23_2_n_10), .B0
       (add_23_2_n_14), .Y (add_23_2_n_23));
  NOR2X1 add_23_2_g496(.A (add_23_2_n_4), .B (add_23_2_n_9), .Y
       (add_23_2_n_22));
  NOR2BX1 add_23_2_g497(.AN (add_23_2_n_0), .B (add_23_2_n_9), .Y
       (add_23_2_n_21));
  NAND2BX1 add_23_2_g498(.AN (add_23_2_n_10), .B (add_23_2_n_14), .Y
       (add_23_2_n_20));
  NOR2X1 add_23_2_g499(.A (add_23_2_n_10), .B (add_23_2_n_3), .Y
       (add_23_2_n_19));
  NAND2X1 add_23_2_g500(.A (add_23_2_n_2), .B (add_23_2_n_5), .Y
       (add_23_2_n_18));
  OR2XL add_23_2_g501(.A (add_23_2_n_6), .B (add_23_2_n_4), .Y
       (add_23_2_n_17));
  NOR2BX1 add_23_2_g502(.AN (add_23_2_n_8), .B (add_23_2_n_3), .Y
       (add_23_2_n_16));
  NAND2BX1 add_23_2_g503(.AN (add_23_2_n_13), .B (add_23_2_n_7), .Y
       (add_23_2_n_15));
  NAND2X1 add_23_2_g504(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g505(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_13));
  NAND2X1 add_23_2_g506(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g507(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g508(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g509(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g510(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_8));
  INVX1 add_23_2_g511(.A (add_23_2_n_2), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g512(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_7));
  AND2X1 add_23_2_g513(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_6));
  OR2X1 add_23_2_g514(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g515(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g516(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g517(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g518(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_0));
endmodule


