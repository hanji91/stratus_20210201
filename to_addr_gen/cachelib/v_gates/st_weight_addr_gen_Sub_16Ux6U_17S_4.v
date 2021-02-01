`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:18:21 KST (Dec  7 2020 09:18:21 UTC)

module st_weight_addr_gen_Sub_16Ux6U_17S_4(in2, in1, out1);
  input [15:0] in2;
  input [5:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [5:0] in1;
  wire [16:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_14, sub_23_2_n_15, sub_23_2_n_16;
  wire sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_20, sub_23_2_n_23,
       sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_27, sub_23_2_n_28;
  wire sub_23_2_n_30, sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34,
       sub_23_2_n_36, sub_23_2_n_38, sub_23_2_n_39, sub_23_2_n_43;
  XOR2XL sub_23_2_g456(.A (in2[15]), .B (sub_23_2_n_43), .Y (out1[15]));
  XNOR2X1 sub_23_2_g457(.A (in2[13]), .B (sub_23_2_n_39), .Y
       (out1[13]));
  XOR2XL sub_23_2_g458(.A (in2[11]), .B (sub_23_2_n_36), .Y (out1[11]));
  AO21XL sub_23_2_g459(.A0 (in2[14]), .A1 (sub_23_2_n_38), .B0
       (sub_23_2_n_43), .Y (out1[14]));
  XNOR2X1 sub_23_2_g460(.A (in2[9]), .B (sub_23_2_n_32), .Y (out1[9]));
  NOR2X1 sub_23_2_g461(.A (in2[14]), .B (sub_23_2_n_38), .Y
       (sub_23_2_n_43));
  OAI2BB1X1 sub_23_2_g462(.A0N (in2[12]), .A1N (sub_23_2_n_34), .B0
       (sub_23_2_n_39), .Y (out1[12]));
  NOR4X1 sub_23_2_g463(.A (in2[15]), .B (in2[14]), .C (sub_23_2_n_6),
       .D (sub_23_2_n_34), .Y (out1[16]));
  XOR2XL sub_23_2_g464(.A (in2[7]), .B (sub_23_2_n_30), .Y (out1[7]));
  OR2XL sub_23_2_g465(.A (in2[12]), .B (sub_23_2_n_34), .Y
       (sub_23_2_n_39));
  OR2XL sub_23_2_g466(.A (sub_23_2_n_6), .B (sub_23_2_n_34), .Y
       (sub_23_2_n_38));
  AO21XL sub_23_2_g467(.A0 (in2[10]), .A1 (sub_23_2_n_33), .B0
       (sub_23_2_n_36), .Y (out1[10]));
  NOR2X1 sub_23_2_g468(.A (in2[10]), .B (sub_23_2_n_33), .Y
       (sub_23_2_n_36));
  OAI2BB1X1 sub_23_2_g469(.A0N (in2[8]), .A1N (sub_23_2_n_28), .B0
       (sub_23_2_n_32), .Y (out1[8]));
  OR4X1 sub_23_2_g470(.A (in2[11]), .B (in2[10]), .C (sub_23_2_n_5), .D
       (sub_23_2_n_28), .Y (sub_23_2_n_34));
  OR2XL sub_23_2_g471(.A (sub_23_2_n_5), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_33));
  OR2XL sub_23_2_g472(.A (in2[8]), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_32));
  AO21XL sub_23_2_g473(.A0 (in2[6]), .A1 (sub_23_2_n_27), .B0
       (sub_23_2_n_30), .Y (out1[6]));
  NOR2X1 sub_23_2_g474(.A (in2[6]), .B (sub_23_2_n_27), .Y
       (sub_23_2_n_30));
  XNOR2X1 sub_23_2_g475(.A (sub_23_2_n_17), .B (sub_23_2_n_26), .Y
       (out1[5]));
  OR4X1 sub_23_2_g476(.A (in2[7]), .B (in2[6]), .C (sub_23_2_n_18), .D
       (sub_23_2_n_25), .Y (sub_23_2_n_28));
  OR2XL sub_23_2_g477(.A (sub_23_2_n_18), .B (sub_23_2_n_25), .Y
       (sub_23_2_n_27));
  AOI21X1 sub_23_2_g478(.A0 (sub_23_2_n_9), .A1 (sub_23_2_n_23), .B0
       (sub_23_2_n_2), .Y (sub_23_2_n_26));
  AND3XL sub_23_2_g479(.A (sub_23_2_n_4), .B (sub_23_2_n_9), .C
       (sub_23_2_n_23), .Y (sub_23_2_n_25));
  XNOR2X1 sub_23_2_g480(.A (sub_23_2_n_16), .B (sub_23_2_n_23), .Y
       (out1[4]));
  OAI21X1 sub_23_2_g481(.A0 (sub_23_2_n_12), .A1 (sub_23_2_n_0), .B0
       (sub_23_2_n_11), .Y (sub_23_2_n_23));
  XNOR2X1 sub_23_2_g482(.A (sub_23_2_n_15), .B (sub_23_2_n_0), .Y
       (out1[3]));
  XNOR2X1 sub_23_2_g485(.A (sub_23_2_n_14), .B (sub_23_2_n_20), .Y
       (out1[2]));
  ADDFX1 sub_23_2_g486(.A (sub_23_2_n_8), .B (in2[1]), .CI
       (sub_23_2_n_1), .CO (sub_23_2_n_20), .S (out1[1]));
  OAI2BB1X1 sub_23_2_g487(.A0N (sub_23_2_n_4), .A1N (sub_23_2_n_2), .B0
       (sub_23_2_n_7), .Y (sub_23_2_n_18));
  AND2XL sub_23_2_g488(.A (sub_23_2_n_4), .B (sub_23_2_n_7), .Y
       (sub_23_2_n_17));
  NAND2BX1 sub_23_2_g489(.AN (sub_23_2_n_2), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_16));
  NOR2BX1 sub_23_2_g490(.AN (sub_23_2_n_11), .B (sub_23_2_n_12), .Y
       (sub_23_2_n_15));
  NAND2BX1 sub_23_2_g491(.AN (sub_23_2_n_3), .B (sub_23_2_n_10), .Y
       (sub_23_2_n_14));
  XOR2XL sub_23_2_g492(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NOR2BX1 sub_23_2_g493(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_12));
  NAND2BX1 sub_23_2_g494(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_11));
  NAND2BX1 sub_23_2_g495(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_8));
  NAND2BX1 sub_23_2_g496(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_10));
  NAND2BX1 sub_23_2_g497(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_9));
  NAND2BXL sub_23_2_g498(.AN (in1[5]), .B (in2[5]), .Y (sub_23_2_n_7));
  OR2XL sub_23_2_g499(.A (in2[13]), .B (in2[12]), .Y (sub_23_2_n_6));
  OR2XL sub_23_2_g500(.A (in2[9]), .B (in2[8]), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g501(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_4));
  NOR2BX1 sub_23_2_g502(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_3));
  NOR2BX1 sub_23_2_g503(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g504(.A (in1[1]), .Y (sub_23_2_n_1));
  AOI21X1 sub_23_2_g505(.A0 (sub_23_2_n_10), .A1 (sub_23_2_n_20), .B0
       (sub_23_2_n_3), .Y (sub_23_2_n_0));
endmodule


