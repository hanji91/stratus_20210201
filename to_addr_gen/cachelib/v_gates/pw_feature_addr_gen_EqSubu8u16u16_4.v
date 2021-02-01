`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 21 2021 19:48:27 KST (Jan 21 2021 10:48:27 UTC)

module pw_feature_addr_gen_EqSubu8u16u16_4(in3, in2, in1, out1);
  input [15:0] in3, in2;
  input [7:0] in1;
  output out1;
  wire [15:0] in3, in2;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32, n_33, n_34, n_35, n_36, n_37, sub_26_2_n_0, sub_26_2_n_1;
  wire sub_26_2_n_2, sub_26_2_n_3, sub_26_2_n_4, sub_26_2_n_5,
       sub_26_2_n_6, sub_26_2_n_7, sub_26_2_n_8, sub_26_2_n_9;
  wire sub_26_2_n_10, sub_26_2_n_11, sub_26_2_n_12, sub_26_2_n_13,
       sub_26_2_n_14, sub_26_2_n_15, sub_26_2_n_16, sub_26_2_n_18;
  wire sub_26_2_n_19, sub_26_2_n_20, sub_26_2_n_21, sub_26_2_n_22,
       sub_26_2_n_23, sub_26_2_n_24, sub_26_2_n_25, sub_26_2_n_26;
  wire sub_26_2_n_27, sub_26_2_n_28, sub_26_2_n_30, sub_26_2_n_32,
       sub_26_2_n_33, sub_26_2_n_35, sub_26_2_n_36, sub_26_2_n_38;
  wire sub_26_2_n_39, sub_26_2_n_42, sub_26_2_n_43, sub_26_2_n_44,
       sub_26_2_n_45, sub_26_2_n_47, sub_26_2_n_49, sub_26_2_n_51;
  wire sub_26_2_n_52, sub_26_2_n_55;
  NOR4X1 g210(.A (n_18), .B (n_17), .C (n_16), .D (n_20), .Y (out1));
  OR2XL g211(.A (n_37), .B (n_19), .Y (n_20));
  NAND4XL g212(.A (n_15), .B (n_9), .C (n_5), .D (n_4), .Y (n_19));
  NAND4XL g213(.A (n_10), .B (n_8), .C (n_11), .D (n_3), .Y (n_18));
  NAND4XL g214(.A (n_2), .B (n_14), .C (n_12), .D (n_6), .Y (n_17));
  NAND4XL g215(.A (n_7), .B (n_1), .C (n_0), .D (n_13), .Y (n_16));
  XNOR2X1 g216(.A (in3[3]), .B (n_24), .Y (n_15));
  XNOR2X1 g217(.A (in3[6]), .B (n_27), .Y (n_14));
  XNOR2X1 g218(.A (in3[12]), .B (n_33), .Y (n_13));
  XNOR2X1 g219(.A (in3[5]), .B (n_26), .Y (n_12));
  XNOR2X1 g220(.A (in3[9]), .B (n_30), .Y (n_11));
  XNOR2X1 g221(.A (in3[11]), .B (n_32), .Y (n_10));
  XNOR2X1 g222(.A (in3[2]), .B (n_23), .Y (n_9));
  XNOR2X1 g223(.A (in3[10]), .B (n_31), .Y (n_8));
  XNOR2X1 g224(.A (in3[15]), .B (n_36), .Y (n_7));
  XNOR2X1 g225(.A (in3[4]), .B (n_25), .Y (n_6));
  XNOR2X1 g226(.A (in3[1]), .B (n_22), .Y (n_5));
  XNOR2X1 g227(.A (in3[0]), .B (n_21), .Y (n_4));
  XNOR2X1 g228(.A (in3[8]), .B (n_29), .Y (n_3));
  XNOR2X1 g229(.A (in3[7]), .B (n_28), .Y (n_2));
  XNOR2X1 g230(.A (in3[14]), .B (n_35), .Y (n_1));
  XNOR2X1 g231(.A (in3[13]), .B (n_34), .Y (n_0));
  XOR2XL sub_26_2_g483(.A (in2[15]), .B (sub_26_2_n_55), .Y (n_36));
  XNOR2X1 sub_26_2_g484(.A (in2[13]), .B (sub_26_2_n_51), .Y (n_34));
  XOR2XL sub_26_2_g485(.A (in2[11]), .B (sub_26_2_n_49), .Y (n_32));
  AO21XL sub_26_2_g486(.A0 (in2[14]), .A1 (sub_26_2_n_52), .B0
       (sub_26_2_n_55), .Y (n_35));
  XOR2XL sub_26_2_g487(.A (in2[9]), .B (sub_26_2_n_44), .Y (n_30));
  NOR2X1 sub_26_2_g488(.A (in2[14]), .B (sub_26_2_n_52), .Y
       (sub_26_2_n_55));
  OAI2BB1X1 sub_26_2_g489(.A0N (in2[12]), .A1N (sub_26_2_n_47), .B0
       (sub_26_2_n_51), .Y (n_33));
  NOR4X1 sub_26_2_g490(.A (in2[15]), .B (in2[14]), .C (sub_26_2_n_7),
       .D (sub_26_2_n_47), .Y (n_37));
  OR2XL sub_26_2_g491(.A (sub_26_2_n_7), .B (sub_26_2_n_47), .Y
       (sub_26_2_n_52));
  OR2XL sub_26_2_g492(.A (in2[12]), .B (sub_26_2_n_47), .Y
       (sub_26_2_n_51));
  AO21XL sub_26_2_g493(.A0 (in2[10]), .A1 (sub_26_2_n_45), .B0
       (sub_26_2_n_49), .Y (n_31));
  NOR2X1 sub_26_2_g494(.A (in2[10]), .B (sub_26_2_n_45), .Y
       (sub_26_2_n_49));
  AO21XL sub_26_2_g495(.A0 (in2[8]), .A1 (sub_26_2_n_42), .B0
       (sub_26_2_n_44), .Y (n_29));
  OR4X1 sub_26_2_g496(.A (in2[11]), .B (in2[10]), .C (sub_26_2_n_16),
       .D (sub_26_2_n_42), .Y (sub_26_2_n_47));
  XNOR2X1 sub_26_2_g497(.A (sub_26_2_n_21), .B (sub_26_2_n_43), .Y
       (n_28));
  OR2XL sub_26_2_g498(.A (sub_26_2_n_16), .B (sub_26_2_n_42), .Y
       (sub_26_2_n_45));
  NOR2X1 sub_26_2_g499(.A (in2[8]), .B (sub_26_2_n_42), .Y
       (sub_26_2_n_44));
  AOI21X1 sub_26_2_g500(.A0 (sub_26_2_n_11), .A1 (sub_26_2_n_39), .B0
       (sub_26_2_n_12), .Y (sub_26_2_n_43));
  OAI211X1 sub_26_2_g501(.A0 (sub_26_2_n_24), .A1 (sub_26_2_n_36), .B0
       (sub_26_2_n_28), .C0 (sub_26_2_n_8), .Y (sub_26_2_n_42));
  XNOR2X1 sub_26_2_g502(.A (sub_26_2_n_20), .B (sub_26_2_n_39), .Y
       (n_27));
  XNOR2X1 sub_26_2_g503(.A (sub_26_2_n_19), .B (sub_26_2_n_38), .Y
       (n_26));
  OAI21X1 sub_26_2_g504(.A0 (sub_26_2_n_24), .A1 (sub_26_2_n_35), .B0
       (sub_26_2_n_26), .Y (sub_26_2_n_39));
  AOI2BB1X1 sub_26_2_g505(.A0N (sub_26_2_n_2), .A1N (sub_26_2_n_35),
       .B0 (sub_26_2_n_14), .Y (sub_26_2_n_38));
  XNOR2X1 sub_26_2_g506(.A (sub_26_2_n_23), .B (sub_26_2_n_35), .Y
       (n_25));
  OR2XL sub_26_2_g507(.A (sub_26_2_n_22), .B (sub_26_2_n_35), .Y
       (sub_26_2_n_36));
  AOI21X1 sub_26_2_g508(.A0 (sub_26_2_n_9), .A1 (sub_26_2_n_33), .B0
       (sub_26_2_n_6), .Y (sub_26_2_n_35));
  XNOR2X1 sub_26_2_g509(.A (sub_26_2_n_25), .B (sub_26_2_n_32), .Y
       (n_24));
  OAI2BB1X1 sub_26_2_g510(.A0N (sub_26_2_n_1), .A1N (sub_26_2_n_30),
       .B0 (sub_26_2_n_4), .Y (sub_26_2_n_33));
  AOI21X1 sub_26_2_g511(.A0 (sub_26_2_n_1), .A1 (sub_26_2_n_30), .B0
       (sub_26_2_n_5), .Y (sub_26_2_n_32));
  XNOR2X1 sub_26_2_g512(.A (sub_26_2_n_18), .B (sub_26_2_n_30), .Y
       (n_23));
  ADDFX1 sub_26_2_g513(.A (sub_26_2_n_10), .B (in2[1]), .CI
       (sub_26_2_n_0), .CO (sub_26_2_n_30), .S (n_22));
  AOI21X1 sub_26_2_g514(.A0 (sub_26_2_n_3), .A1 (sub_26_2_n_12), .B0
       (sub_26_2_n_27), .Y (sub_26_2_n_28));
  NOR2X1 sub_26_2_g515(.A (sub_26_2_n_22), .B (sub_26_2_n_26), .Y
       (sub_26_2_n_27));
  AOI21X1 sub_26_2_g516(.A0 (sub_26_2_n_13), .A1 (sub_26_2_n_14), .B0
       (sub_26_2_n_15), .Y (sub_26_2_n_26));
  NOR2BX1 sub_26_2_g517(.AN (sub_26_2_n_9), .B (sub_26_2_n_6), .Y
       (sub_26_2_n_25));
  NAND2BX1 sub_26_2_g518(.AN (sub_26_2_n_2), .B (sub_26_2_n_13), .Y
       (sub_26_2_n_24));
  NOR2X1 sub_26_2_g519(.A (sub_26_2_n_2), .B (sub_26_2_n_14), .Y
       (sub_26_2_n_23));
  NAND2X1 sub_26_2_g520(.A (sub_26_2_n_3), .B (sub_26_2_n_11), .Y
       (sub_26_2_n_22));
  AND2XL sub_26_2_g521(.A (sub_26_2_n_3), .B (sub_26_2_n_8), .Y
       (sub_26_2_n_21));
  NAND2BXL sub_26_2_g522(.AN (sub_26_2_n_12), .B (sub_26_2_n_11), .Y
       (sub_26_2_n_20));
  NOR2BX1 sub_26_2_g523(.AN (sub_26_2_n_13), .B (sub_26_2_n_15), .Y
       (sub_26_2_n_19));
  NAND2XL sub_26_2_g524(.A (sub_26_2_n_1), .B (sub_26_2_n_4), .Y
       (sub_26_2_n_18));
  XOR2XL sub_26_2_g525(.A (in2[0]), .B (in1[0]), .Y (n_21));
  OR2XL sub_26_2_g526(.A (in2[9]), .B (in2[8]), .Y (sub_26_2_n_16));
  NOR2BX1 sub_26_2_g527(.AN (in2[5]), .B (in1[5]), .Y (sub_26_2_n_15));
  NOR2BX1 sub_26_2_g528(.AN (in2[4]), .B (in1[4]), .Y (sub_26_2_n_14));
  NAND2BX1 sub_26_2_g529(.AN (in2[5]), .B (in1[5]), .Y (sub_26_2_n_13));
  NOR2BX1 sub_26_2_g530(.AN (in2[6]), .B (in1[6]), .Y (sub_26_2_n_12));
  NAND2BX1 sub_26_2_g531(.AN (in2[6]), .B (in1[6]), .Y (sub_26_2_n_11));
  NAND2BX1 sub_26_2_g532(.AN (in2[0]), .B (in1[0]), .Y (sub_26_2_n_10));
  INVX1 sub_26_2_g533(.A (sub_26_2_n_4), .Y (sub_26_2_n_5));
  NAND2BX1 sub_26_2_g534(.AN (in2[3]), .B (in1[3]), .Y (sub_26_2_n_9));
  NAND2BXL sub_26_2_g535(.AN (in1[7]), .B (in2[7]), .Y (sub_26_2_n_8));
  OR2XL sub_26_2_g536(.A (in2[13]), .B (in2[12]), .Y (sub_26_2_n_7));
  NOR2BX1 sub_26_2_g537(.AN (in2[3]), .B (in1[3]), .Y (sub_26_2_n_6));
  NAND2BX1 sub_26_2_g538(.AN (in1[2]), .B (in2[2]), .Y (sub_26_2_n_4));
  NAND2BX1 sub_26_2_g539(.AN (in2[7]), .B (in1[7]), .Y (sub_26_2_n_3));
  NOR2BX1 sub_26_2_g540(.AN (in1[4]), .B (in2[4]), .Y (sub_26_2_n_2));
  NAND2BX1 sub_26_2_g541(.AN (in2[2]), .B (in1[2]), .Y (sub_26_2_n_1));
  INVX1 sub_26_2_g542(.A (in1[1]), .Y (sub_26_2_n_0));
endmodule


