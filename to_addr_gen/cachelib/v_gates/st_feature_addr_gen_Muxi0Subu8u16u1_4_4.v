`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:31 KST (Jan 20 2021 09:19:31 UTC)

module st_feature_addr_gen_Muxi0Subu8u16u1_4_4(in3, in2, ctrl1, out1);
  input [15:0] in3;
  input [7:0] in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in3;
  wire [7:0] in2;
  wire ctrl1;
  wire [15:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire sub_26_2_n_0, sub_26_2_n_1, sub_26_2_n_2, sub_26_2_n_3,
       sub_26_2_n_4, sub_26_2_n_5, sub_26_2_n_6, sub_26_2_n_7;
  wire sub_26_2_n_8, sub_26_2_n_9, sub_26_2_n_10, sub_26_2_n_11,
       sub_26_2_n_12, sub_26_2_n_13, sub_26_2_n_14, sub_26_2_n_15;
  wire sub_26_2_n_17, sub_26_2_n_18, sub_26_2_n_19, sub_26_2_n_20,
       sub_26_2_n_21, sub_26_2_n_22, sub_26_2_n_23, sub_26_2_n_24;
  wire sub_26_2_n_25, sub_26_2_n_26, sub_26_2_n_27, sub_26_2_n_29,
       sub_26_2_n_31, sub_26_2_n_32, sub_26_2_n_34, sub_26_2_n_35;
  wire sub_26_2_n_37, sub_26_2_n_38, sub_26_2_n_41, sub_26_2_n_42,
       sub_26_2_n_43, sub_26_2_n_44, sub_26_2_n_46, sub_26_2_n_48;
  wire sub_26_2_n_50, sub_26_2_n_52, sub_26_2_n_54;
  NOR2BX1 g129(.AN (n_0), .B (ctrl1), .Y (out1[0]));
  NOR2BX1 g130(.AN (n_14), .B (ctrl1), .Y (out1[14]));
  NOR2BX1 g131(.AN (n_12), .B (ctrl1), .Y (out1[12]));
  NOR2BX1 g132(.AN (n_8), .B (ctrl1), .Y (out1[8]));
  NOR2BX1 g133(.AN (n_15), .B (ctrl1), .Y (out1[15]));
  NOR2BX1 g134(.AN (n_7), .B (ctrl1), .Y (out1[7]));
  NOR2BX1 g135(.AN (n_11), .B (ctrl1), .Y (out1[11]));
  NOR2BX1 g136(.AN (n_6), .B (ctrl1), .Y (out1[6]));
  NOR2BX1 g137(.AN (n_3), .B (ctrl1), .Y (out1[3]));
  NOR2BX1 g138(.AN (n_13), .B (ctrl1), .Y (out1[13]));
  NOR2BX1 g139(.AN (n_10), .B (ctrl1), .Y (out1[10]));
  NOR2BX1 g140(.AN (n_4), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g141(.AN (n_5), .B (ctrl1), .Y (out1[5]));
  NOR2BX1 g142(.AN (n_9), .B (ctrl1), .Y (out1[9]));
  NOR2BX1 g143(.AN (n_2), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g144(.AN (n_1), .B (ctrl1), .Y (out1[1]));
  XNOR2X1 sub_26_2_g465(.A (in3[15]), .B (sub_26_2_n_54), .Y (n_15));
  XNOR2X1 sub_26_2_g466(.A (in3[13]), .B (sub_26_2_n_50), .Y (n_13));
  OAI2BB1X1 sub_26_2_g467(.A0N (in3[14]), .A1N (sub_26_2_n_52), .B0
       (sub_26_2_n_54), .Y (n_14));
  XOR2XL sub_26_2_g468(.A (in3[11]), .B (sub_26_2_n_48), .Y (n_11));
  OR2XL sub_26_2_g469(.A (in3[14]), .B (sub_26_2_n_52), .Y
       (sub_26_2_n_54));
  XOR2XL sub_26_2_g470(.A (in3[9]), .B (sub_26_2_n_43), .Y (n_9));
  OR3XL sub_26_2_g471(.A (in3[13]), .B (in3[12]), .C (sub_26_2_n_46),
       .Y (sub_26_2_n_52));
  OAI2BB1X1 sub_26_2_g472(.A0N (in3[12]), .A1N (sub_26_2_n_46), .B0
       (sub_26_2_n_50), .Y (n_12));
  OR2XL sub_26_2_g473(.A (in3[12]), .B (sub_26_2_n_46), .Y
       (sub_26_2_n_50));
  AO21XL sub_26_2_g474(.A0 (in3[10]), .A1 (sub_26_2_n_44), .B0
       (sub_26_2_n_48), .Y (n_10));
  NOR2X1 sub_26_2_g475(.A (in3[10]), .B (sub_26_2_n_44), .Y
       (sub_26_2_n_48));
  AO21XL sub_26_2_g476(.A0 (in3[8]), .A1 (sub_26_2_n_41), .B0
       (sub_26_2_n_43), .Y (n_8));
  OR4X1 sub_26_2_g477(.A (in3[11]), .B (in3[10]), .C (sub_26_2_n_12),
       .D (sub_26_2_n_41), .Y (sub_26_2_n_46));
  XNOR2X1 sub_26_2_g478(.A (sub_26_2_n_21), .B (sub_26_2_n_42), .Y
       (n_7));
  OR2XL sub_26_2_g479(.A (sub_26_2_n_12), .B (sub_26_2_n_41), .Y
       (sub_26_2_n_44));
  NOR2X1 sub_26_2_g480(.A (in3[8]), .B (sub_26_2_n_41), .Y
       (sub_26_2_n_43));
  AOI21X1 sub_26_2_g481(.A0 (sub_26_2_n_7), .A1 (sub_26_2_n_38), .B0
       (sub_26_2_n_3), .Y (sub_26_2_n_42));
  OAI211X1 sub_26_2_g482(.A0 (sub_26_2_n_22), .A1 (sub_26_2_n_35), .B0
       (sub_26_2_n_27), .C0 (sub_26_2_n_15), .Y (sub_26_2_n_41));
  XNOR2X1 sub_26_2_g483(.A (sub_26_2_n_20), .B (sub_26_2_n_38), .Y
       (n_6));
  XNOR2X1 sub_26_2_g484(.A (sub_26_2_n_23), .B (sub_26_2_n_37), .Y
       (n_5));
  OAI21X1 sub_26_2_g485(.A0 (sub_26_2_n_22), .A1 (sub_26_2_n_34), .B0
       (sub_26_2_n_25), .Y (sub_26_2_n_38));
  AOI2BB1XL sub_26_2_g486(.A0N (sub_26_2_n_9), .A1N (sub_26_2_n_34),
       .B0 (sub_26_2_n_11), .Y (sub_26_2_n_37));
  XNOR2X1 sub_26_2_g487(.A (sub_26_2_n_19), .B (sub_26_2_n_34), .Y
       (n_4));
  OR2XL sub_26_2_g488(.A (sub_26_2_n_18), .B (sub_26_2_n_34), .Y
       (sub_26_2_n_35));
  AOI21X1 sub_26_2_g489(.A0 (sub_26_2_n_13), .A1 (sub_26_2_n_32), .B0
       (sub_26_2_n_8), .Y (sub_26_2_n_34));
  XNOR2X1 sub_26_2_g490(.A (sub_26_2_n_17), .B (sub_26_2_n_31), .Y
       (n_3));
  OAI2BB1X1 sub_26_2_g491(.A0N (sub_26_2_n_10), .A1N (sub_26_2_n_29),
       .B0 (sub_26_2_n_4), .Y (sub_26_2_n_32));
  AOI21X1 sub_26_2_g492(.A0 (sub_26_2_n_10), .A1 (sub_26_2_n_29), .B0
       (sub_26_2_n_5), .Y (sub_26_2_n_31));
  XNOR2X1 sub_26_2_g493(.A (sub_26_2_n_24), .B (sub_26_2_n_29), .Y
       (n_2));
  ADDFX1 sub_26_2_g494(.A (sub_26_2_n_1), .B (in3[1]), .CI
       (sub_26_2_n_0), .CO (sub_26_2_n_29), .S (n_1));
  AOI21X1 sub_26_2_g495(.A0 (sub_26_2_n_2), .A1 (sub_26_2_n_3), .B0
       (sub_26_2_n_26), .Y (sub_26_2_n_27));
  NOR2X1 sub_26_2_g496(.A (sub_26_2_n_18), .B (sub_26_2_n_25), .Y
       (sub_26_2_n_26));
  AOI21X1 sub_26_2_g497(.A0 (sub_26_2_n_6), .A1 (sub_26_2_n_11), .B0
       (sub_26_2_n_14), .Y (sub_26_2_n_25));
  NAND2X1 sub_26_2_g498(.A (sub_26_2_n_10), .B (sub_26_2_n_4), .Y
       (sub_26_2_n_24));
  NOR2BX1 sub_26_2_g499(.AN (sub_26_2_n_6), .B (sub_26_2_n_14), .Y
       (sub_26_2_n_23));
  NAND2BX1 sub_26_2_g500(.AN (sub_26_2_n_9), .B (sub_26_2_n_6), .Y
       (sub_26_2_n_22));
  AND2XL sub_26_2_g501(.A (sub_26_2_n_2), .B (sub_26_2_n_15), .Y
       (sub_26_2_n_21));
  NAND2BX1 sub_26_2_g502(.AN (sub_26_2_n_3), .B (sub_26_2_n_7), .Y
       (sub_26_2_n_20));
  NOR2X1 sub_26_2_g503(.A (sub_26_2_n_9), .B (sub_26_2_n_11), .Y
       (sub_26_2_n_19));
  NAND2X1 sub_26_2_g504(.A (sub_26_2_n_2), .B (sub_26_2_n_7), .Y
       (sub_26_2_n_18));
  NOR2BX1 sub_26_2_g505(.AN (sub_26_2_n_13), .B (sub_26_2_n_8), .Y
       (sub_26_2_n_17));
  XOR2XL sub_26_2_g506(.A (in3[0]), .B (in2[0]), .Y (n_0));
  NAND2BXL sub_26_2_g507(.AN (in2[7]), .B (in3[7]), .Y (sub_26_2_n_15));
  NOR2BX1 sub_26_2_g508(.AN (in3[5]), .B (in2[5]), .Y (sub_26_2_n_14));
  NAND2BX1 sub_26_2_g509(.AN (in3[3]), .B (in2[3]), .Y (sub_26_2_n_13));
  OR2XL sub_26_2_g510(.A (in3[9]), .B (in3[8]), .Y (sub_26_2_n_12));
  NOR2BX1 sub_26_2_g511(.AN (in3[4]), .B (in2[4]), .Y (sub_26_2_n_11));
  NAND2BX1 sub_26_2_g512(.AN (in3[2]), .B (in2[2]), .Y (sub_26_2_n_10));
  NOR2BX1 sub_26_2_g513(.AN (in2[4]), .B (in3[4]), .Y (sub_26_2_n_9));
  INVX1 sub_26_2_g514(.A (sub_26_2_n_4), .Y (sub_26_2_n_5));
  NOR2BX1 sub_26_2_g515(.AN (in3[3]), .B (in2[3]), .Y (sub_26_2_n_8));
  NAND2BX1 sub_26_2_g516(.AN (in3[6]), .B (in2[6]), .Y (sub_26_2_n_7));
  NAND2BX1 sub_26_2_g517(.AN (in3[0]), .B (in2[0]), .Y (sub_26_2_n_1));
  NAND2BX1 sub_26_2_g518(.AN (in3[5]), .B (in2[5]), .Y (sub_26_2_n_6));
  NAND2BX1 sub_26_2_g519(.AN (in2[2]), .B (in3[2]), .Y (sub_26_2_n_4));
  NOR2BX1 sub_26_2_g520(.AN (in3[6]), .B (in2[6]), .Y (sub_26_2_n_3));
  NAND2BX1 sub_26_2_g521(.AN (in3[7]), .B (in2[7]), .Y (sub_26_2_n_2));
  INVX1 sub_26_2_g522(.A (in2[1]), .Y (sub_26_2_n_0));
endmodule


