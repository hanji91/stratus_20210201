`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:18 KST (Dec  8 2020 00:47:18 UTC)

module st_feature_addr_gen_Sub_16Ux8U_16S_4_2(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [15:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_14, sub_23_2_n_15, sub_23_2_n_16;
  wire sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_19, sub_23_2_n_20,
       sub_23_2_n_22, sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_28;
  wire sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_32, sub_23_2_n_34,
       sub_23_2_n_35, sub_23_2_n_36, sub_23_2_n_39, sub_23_2_n_41;
  wire sub_23_2_n_43, sub_23_2_n_45, sub_23_2_n_47, sub_23_2_n_49;
  XOR2XL sub_23_2_g441(.A (in2[15]), .B (sub_23_2_n_49), .Y (out1[15]));
  AO21XL sub_23_2_g442(.A0 (in2[14]), .A1 (sub_23_2_n_47), .B0
       (sub_23_2_n_49), .Y (out1[14]));
  NOR2X1 sub_23_2_g443(.A (in2[14]), .B (sub_23_2_n_47), .Y
       (sub_23_2_n_49));
  OAI2BB1X1 sub_23_2_g444(.A0N (in2[13]), .A1N (sub_23_2_n_45), .B0
       (sub_23_2_n_47), .Y (out1[13]));
  OR2X1 sub_23_2_g445(.A (in2[13]), .B (sub_23_2_n_45), .Y
       (sub_23_2_n_47));
  OAI2BB1X1 sub_23_2_g446(.A0N (in2[12]), .A1N (sub_23_2_n_43), .B0
       (sub_23_2_n_45), .Y (out1[12]));
  OR2XL sub_23_2_g447(.A (in2[12]), .B (sub_23_2_n_43), .Y
       (sub_23_2_n_45));
  OAI2BB1X1 sub_23_2_g448(.A0N (in2[11]), .A1N (sub_23_2_n_41), .B0
       (sub_23_2_n_43), .Y (out1[11]));
  OR2XL sub_23_2_g449(.A (in2[11]), .B (sub_23_2_n_41), .Y
       (sub_23_2_n_43));
  OAI2BB1X1 sub_23_2_g450(.A0N (in2[10]), .A1N (sub_23_2_n_39), .B0
       (sub_23_2_n_41), .Y (out1[10]));
  OR2XL sub_23_2_g451(.A (in2[10]), .B (sub_23_2_n_39), .Y
       (sub_23_2_n_41));
  OAI2BB1X1 sub_23_2_g452(.A0N (in2[9]), .A1N (sub_23_2_n_36), .B0
       (sub_23_2_n_39), .Y (out1[9]));
  OR2XL sub_23_2_g453(.A (in2[9]), .B (sub_23_2_n_36), .Y
       (sub_23_2_n_39));
  OAI2BB1X1 sub_23_2_g454(.A0N (in2[8]), .A1N (sub_23_2_n_34), .B0
       (sub_23_2_n_36), .Y (out1[8]));
  XNOR2X1 sub_23_2_g455(.A (sub_23_2_n_17), .B (sub_23_2_n_35), .Y
       (out1[7]));
  OR2XL sub_23_2_g456(.A (in2[8]), .B (sub_23_2_n_34), .Y
       (sub_23_2_n_36));
  OAI21X1 sub_23_2_g457(.A0 (sub_23_2_n_4), .A1 (sub_23_2_n_30), .B0
       (sub_23_2_n_12), .Y (sub_23_2_n_35));
  OAI221X1 sub_23_2_g458(.A0 (sub_23_2_n_14), .A1 (sub_23_2_n_19), .B0
       (sub_23_2_n_11), .B1 (sub_23_2_n_12), .C0 (sub_23_2_n_32), .Y
       (sub_23_2_n_34));
  XNOR2X1 sub_23_2_g459(.A (sub_23_2_n_16), .B (sub_23_2_n_30), .Y
       (out1[6]));
  AOI2BB1X1 sub_23_2_g460(.A0N (sub_23_2_n_14), .A1N (sub_23_2_n_29),
       .B0 (sub_23_2_n_9), .Y (sub_23_2_n_32));
  XNOR2X1 sub_23_2_g461(.A (sub_23_2_n_18), .B (sub_23_2_n_28), .Y
       (out1[5]));
  AND2XL sub_23_2_g462(.A (sub_23_2_n_19), .B (sub_23_2_n_29), .Y
       (sub_23_2_n_30));
  OR2XL sub_23_2_g463(.A (sub_23_2_n_8), .B (sub_23_2_n_26), .Y
       (sub_23_2_n_29));
  NAND2X1 sub_23_2_g464(.A (sub_23_2_n_7), .B (sub_23_2_n_26), .Y
       (sub_23_2_n_28));
  XNOR2X1 sub_23_2_g465(.A (sub_23_2_n_15), .B (sub_23_2_n_25), .Y
       (out1[4]));
  NAND2X1 sub_23_2_g466(.A (sub_23_2_n_10), .B (sub_23_2_n_25), .Y
       (sub_23_2_n_26));
  ADDFX1 sub_23_2_g467(.A (sub_23_2_n_22), .B (in2[3]), .CI
       (sub_23_2_n_0), .CO (sub_23_2_n_25), .S (out1[3]));
  ADDFX1 sub_23_2_g468(.A (sub_23_2_n_20), .B (in2[2]), .CI
       (sub_23_2_n_2), .CO (sub_23_2_n_22), .S (out1[2]));
  ADDFX1 sub_23_2_g469(.A (sub_23_2_n_5), .B (in2[1]), .CI
       (sub_23_2_n_3), .CO (sub_23_2_n_20), .S (out1[1]));
  AOI2BB1X1 sub_23_2_g470(.A0N (sub_23_2_n_8), .A1N (sub_23_2_n_7), .B0
       (sub_23_2_n_6), .Y (sub_23_2_n_19));
  OR2XL sub_23_2_g471(.A (sub_23_2_n_8), .B (sub_23_2_n_6), .Y
       (sub_23_2_n_18));
  OR2XL sub_23_2_g472(.A (sub_23_2_n_11), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_17));
  NOR2BX1 sub_23_2_g473(.AN (sub_23_2_n_12), .B (sub_23_2_n_4), .Y
       (sub_23_2_n_16));
  NAND2X1 sub_23_2_g474(.A (sub_23_2_n_10), .B (sub_23_2_n_7), .Y
       (sub_23_2_n_15));
  OR2XL sub_23_2_g475(.A (sub_23_2_n_11), .B (sub_23_2_n_4), .Y
       (sub_23_2_n_14));
  OAI2BB1X1 sub_23_2_g476(.A0N (in2[0]), .A1N (sub_23_2_n_1), .B0
       (sub_23_2_n_5), .Y (out1[0]));
  NAND2BX1 sub_23_2_g477(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_12));
  NOR2BX1 sub_23_2_g478(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_11));
  NAND2BX1 sub_23_2_g479(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_10));
  NOR2BX1 sub_23_2_g480(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_9));
  NOR2BX1 sub_23_2_g481(.AN (in1[5]), .B (in2[5]), .Y (sub_23_2_n_8));
  NAND2BX1 sub_23_2_g482(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_7));
  NOR2BX1 sub_23_2_g483(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g484(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_5));
  NOR2BX1 sub_23_2_g485(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_4));
  INVX1 sub_23_2_g486(.A (in1[1]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g487(.A (in1[2]), .Y (sub_23_2_n_2));
  INVXL sub_23_2_g488(.A (in1[0]), .Y (sub_23_2_n_1));
  INVX1 sub_23_2_g489(.A (in1[3]), .Y (sub_23_2_n_0));
endmodule

