`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:17 KST (Dec  8 2020 00:47:17 UTC)

module st_feature_addr_gen_Sub_17Ux8U_18S_4_2(in2, in1, out1);
  input [16:0] in2;
  input [7:0] in1;
  output [17:0] out1;
  wire [16:0] in2;
  wire [7:0] in1;
  wire [17:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_15, sub_23_2_n_16;
  wire sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_19, sub_23_2_n_20,
       sub_23_2_n_21, sub_23_2_n_23, sub_23_2_n_26, sub_23_2_n_27;
  wire sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_31, sub_23_2_n_33,
       sub_23_2_n_35, sub_23_2_n_36, sub_23_2_n_37, sub_23_2_n_38;
  wire sub_23_2_n_41, sub_23_2_n_44, sub_23_2_n_46, sub_23_2_n_48,
       sub_23_2_n_50, sub_23_2_n_52, sub_23_2_n_55;
  INVX1 sub_23_2_g476(.A (sub_23_2_n_55), .Y (out1[16]));
  ADDHX1 sub_23_2_g477(.A (sub_23_2_n_1), .B (sub_23_2_n_52), .CO
       (out1[17]), .S (sub_23_2_n_55));
  AO21XL sub_23_2_g478(.A0 (in2[15]), .A1 (sub_23_2_n_50), .B0
       (sub_23_2_n_52), .Y (out1[15]));
  NOR2X1 sub_23_2_g479(.A (in2[15]), .B (sub_23_2_n_50), .Y
       (sub_23_2_n_52));
  OAI2BB1X1 sub_23_2_g480(.A0N (in2[14]), .A1N (sub_23_2_n_48), .B0
       (sub_23_2_n_50), .Y (out1[14]));
  OR2X1 sub_23_2_g481(.A (in2[14]), .B (sub_23_2_n_48), .Y
       (sub_23_2_n_50));
  OAI2BB1X1 sub_23_2_g482(.A0N (in2[13]), .A1N (sub_23_2_n_46), .B0
       (sub_23_2_n_48), .Y (out1[13]));
  OR2XL sub_23_2_g483(.A (in2[13]), .B (sub_23_2_n_46), .Y
       (sub_23_2_n_48));
  OAI2BB1X1 sub_23_2_g484(.A0N (in2[12]), .A1N (sub_23_2_n_44), .B0
       (sub_23_2_n_46), .Y (out1[12]));
  OR2XL sub_23_2_g485(.A (in2[12]), .B (sub_23_2_n_44), .Y
       (sub_23_2_n_46));
  OAI2BB1X1 sub_23_2_g486(.A0N (in2[11]), .A1N (sub_23_2_n_41), .B0
       (sub_23_2_n_44), .Y (out1[11]));
  OR2XL sub_23_2_g487(.A (in2[11]), .B (sub_23_2_n_41), .Y
       (sub_23_2_n_44));
  XOR2XL sub_23_2_g488(.A (in2[9]), .B (sub_23_2_n_38), .Y (out1[9]));
  OAI2BB1X1 sub_23_2_g489(.A0N (in2[10]), .A1N (sub_23_2_n_37), .B0
       (sub_23_2_n_41), .Y (out1[10]));
  OR2XL sub_23_2_g490(.A (in2[10]), .B (sub_23_2_n_37), .Y
       (sub_23_2_n_41));
  AO21XL sub_23_2_g491(.A0 (in2[8]), .A1 (sub_23_2_n_35), .B0
       (sub_23_2_n_38), .Y (out1[8]));
  XNOR2X1 sub_23_2_g492(.A (sub_23_2_n_18), .B (sub_23_2_n_36), .Y
       (out1[7]));
  NOR2X1 sub_23_2_g493(.A (in2[8]), .B (sub_23_2_n_35), .Y
       (sub_23_2_n_38));
  OR3XL sub_23_2_g494(.A (sub_23_2_n_35), .B (in2[9]), .C (in2[8]), .Y
       (sub_23_2_n_37));
  OAI21X1 sub_23_2_g495(.A0 (sub_23_2_n_5), .A1 (sub_23_2_n_31), .B0
       (sub_23_2_n_8), .Y (sub_23_2_n_36));
  OAI221X1 sub_23_2_g496(.A0 (sub_23_2_n_19), .A1 (sub_23_2_n_20), .B0
       (sub_23_2_n_7), .B1 (sub_23_2_n_8), .C0 (sub_23_2_n_33), .Y
       (sub_23_2_n_35));
  XNOR2X1 sub_23_2_g497(.A (sub_23_2_n_17), .B (sub_23_2_n_31), .Y
       (out1[6]));
  AOI2BB1X1 sub_23_2_g498(.A0N (sub_23_2_n_19), .A1N (sub_23_2_n_30),
       .B0 (sub_23_2_n_9), .Y (sub_23_2_n_33));
  XNOR2X1 sub_23_2_g499(.A (sub_23_2_n_16), .B (sub_23_2_n_29), .Y
       (out1[5]));
  AND2XL sub_23_2_g500(.A (sub_23_2_n_20), .B (sub_23_2_n_30), .Y
       (sub_23_2_n_31));
  OR2XL sub_23_2_g501(.A (sub_23_2_n_11), .B (sub_23_2_n_27), .Y
       (sub_23_2_n_30));
  NAND2X1 sub_23_2_g502(.A (sub_23_2_n_10), .B (sub_23_2_n_27), .Y
       (sub_23_2_n_29));
  XNOR2X1 sub_23_2_g503(.A (sub_23_2_n_15), .B (sub_23_2_n_26), .Y
       (out1[4]));
  NAND2X1 sub_23_2_g504(.A (sub_23_2_n_6), .B (sub_23_2_n_26), .Y
       (sub_23_2_n_27));
  ADDFX1 sub_23_2_g505(.A (sub_23_2_n_23), .B (in2[3]), .CI
       (sub_23_2_n_4), .CO (sub_23_2_n_26), .S (out1[3]));
  ADDFX1 sub_23_2_g506(.A (sub_23_2_n_21), .B (in2[2]), .CI
       (sub_23_2_n_2), .CO (sub_23_2_n_23), .S (out1[2]));
  ADDFX1 sub_23_2_g507(.A (sub_23_2_n_13), .B (in2[1]), .CI
       (sub_23_2_n_3), .CO (sub_23_2_n_21), .S (out1[1]));
  AOI2BB1X1 sub_23_2_g508(.A0N (sub_23_2_n_11), .A1N (sub_23_2_n_10),
       .B0 (sub_23_2_n_12), .Y (sub_23_2_n_20));
  OR2XL sub_23_2_g509(.A (sub_23_2_n_7), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_19));
  OR2XL sub_23_2_g510(.A (sub_23_2_n_7), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_18));
  NOR2BX1 sub_23_2_g511(.AN (sub_23_2_n_8), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_17));
  OR2XL sub_23_2_g512(.A (sub_23_2_n_11), .B (sub_23_2_n_12), .Y
       (sub_23_2_n_16));
  NAND2X1 sub_23_2_g513(.A (sub_23_2_n_6), .B (sub_23_2_n_10), .Y
       (sub_23_2_n_15));
  OAI2BB1X1 sub_23_2_g514(.A0N (in2[0]), .A1N (sub_23_2_n_0), .B0
       (sub_23_2_n_13), .Y (out1[0]));
  NAND2BX1 sub_23_2_g515(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_13));
  NOR2BX1 sub_23_2_g516(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_12));
  NOR2BX1 sub_23_2_g517(.AN (in1[5]), .B (in2[5]), .Y (sub_23_2_n_11));
  NAND2BX1 sub_23_2_g518(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_10));
  NOR2BX1 sub_23_2_g519(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_9));
  NAND2BX1 sub_23_2_g520(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_8));
  NOR2BX1 sub_23_2_g521(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_7));
  NAND2BX1 sub_23_2_g522(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_6));
  NOR2BX1 sub_23_2_g523(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_5));
  INVX1 sub_23_2_g524(.A (in1[3]), .Y (sub_23_2_n_4));
  INVX1 sub_23_2_g525(.A (in1[1]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g526(.A (in1[2]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g527(.A (in2[16]), .Y (sub_23_2_n_1));
  INVXL sub_23_2_g528(.A (in1[0]), .Y (sub_23_2_n_0));
endmodule


