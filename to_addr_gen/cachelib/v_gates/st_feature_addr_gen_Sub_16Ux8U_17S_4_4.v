`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:05 KST (Jan 20 2021 09:19:05 UTC)

module st_feature_addr_gen_Sub_16Ux8U_17S_4_4(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [16:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_14, sub_23_2_n_15;
  wire sub_23_2_n_16, sub_23_2_n_18, sub_23_2_n_19, sub_23_2_n_20,
       sub_23_2_n_21, sub_23_2_n_22, sub_23_2_n_23, sub_23_2_n_24;
  wire sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_27, sub_23_2_n_28,
       sub_23_2_n_30, sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_35;
  wire sub_23_2_n_36, sub_23_2_n_38, sub_23_2_n_39, sub_23_2_n_42,
       sub_23_2_n_43, sub_23_2_n_44, sub_23_2_n_45, sub_23_2_n_47;
  wire sub_23_2_n_49, sub_23_2_n_51, sub_23_2_n_52, sub_23_2_n_55;
  XOR2XL sub_23_2_g483(.A (in2[15]), .B (sub_23_2_n_55), .Y (out1[15]));
  XNOR2X1 sub_23_2_g484(.A (in2[13]), .B (sub_23_2_n_51), .Y
       (out1[13]));
  XOR2XL sub_23_2_g485(.A (in2[11]), .B (sub_23_2_n_49), .Y (out1[11]));
  AO21XL sub_23_2_g486(.A0 (in2[14]), .A1 (sub_23_2_n_52), .B0
       (sub_23_2_n_55), .Y (out1[14]));
  XOR2XL sub_23_2_g487(.A (in2[9]), .B (sub_23_2_n_44), .Y (out1[9]));
  NOR2X1 sub_23_2_g488(.A (in2[14]), .B (sub_23_2_n_52), .Y
       (sub_23_2_n_55));
  OAI2BB1X1 sub_23_2_g489(.A0N (in2[12]), .A1N (sub_23_2_n_47), .B0
       (sub_23_2_n_51), .Y (out1[12]));
  NOR4X1 sub_23_2_g490(.A (in2[15]), .B (in2[14]), .C (sub_23_2_n_7),
       .D (sub_23_2_n_47), .Y (out1[16]));
  OR2XL sub_23_2_g491(.A (sub_23_2_n_7), .B (sub_23_2_n_47), .Y
       (sub_23_2_n_52));
  OR2XL sub_23_2_g492(.A (in2[12]), .B (sub_23_2_n_47), .Y
       (sub_23_2_n_51));
  AO21XL sub_23_2_g493(.A0 (in2[10]), .A1 (sub_23_2_n_45), .B0
       (sub_23_2_n_49), .Y (out1[10]));
  NOR2X1 sub_23_2_g494(.A (in2[10]), .B (sub_23_2_n_45), .Y
       (sub_23_2_n_49));
  AO21XL sub_23_2_g495(.A0 (in2[8]), .A1 (sub_23_2_n_42), .B0
       (sub_23_2_n_44), .Y (out1[8]));
  OR4X1 sub_23_2_g496(.A (in2[11]), .B (in2[10]), .C (sub_23_2_n_16),
       .D (sub_23_2_n_42), .Y (sub_23_2_n_47));
  XNOR2X1 sub_23_2_g497(.A (sub_23_2_n_21), .B (sub_23_2_n_43), .Y
       (out1[7]));
  OR2XL sub_23_2_g498(.A (sub_23_2_n_16), .B (sub_23_2_n_42), .Y
       (sub_23_2_n_45));
  NOR2X1 sub_23_2_g499(.A (in2[8]), .B (sub_23_2_n_42), .Y
       (sub_23_2_n_44));
  AOI21X1 sub_23_2_g500(.A0 (sub_23_2_n_11), .A1 (sub_23_2_n_39), .B0
       (sub_23_2_n_12), .Y (sub_23_2_n_43));
  OAI211X1 sub_23_2_g501(.A0 (sub_23_2_n_24), .A1 (sub_23_2_n_36), .B0
       (sub_23_2_n_28), .C0 (sub_23_2_n_8), .Y (sub_23_2_n_42));
  XNOR2X1 sub_23_2_g502(.A (sub_23_2_n_20), .B (sub_23_2_n_39), .Y
       (out1[6]));
  XNOR2X1 sub_23_2_g503(.A (sub_23_2_n_19), .B (sub_23_2_n_38), .Y
       (out1[5]));
  OAI21X1 sub_23_2_g504(.A0 (sub_23_2_n_24), .A1 (sub_23_2_n_35), .B0
       (sub_23_2_n_26), .Y (sub_23_2_n_39));
  AOI2BB1XL sub_23_2_g505(.A0N (sub_23_2_n_2), .A1N (sub_23_2_n_35),
       .B0 (sub_23_2_n_14), .Y (sub_23_2_n_38));
  XNOR2X1 sub_23_2_g506(.A (sub_23_2_n_23), .B (sub_23_2_n_35), .Y
       (out1[4]));
  OR2XL sub_23_2_g507(.A (sub_23_2_n_22), .B (sub_23_2_n_35), .Y
       (sub_23_2_n_36));
  AOI21X1 sub_23_2_g508(.A0 (sub_23_2_n_9), .A1 (sub_23_2_n_33), .B0
       (sub_23_2_n_6), .Y (sub_23_2_n_35));
  XNOR2X1 sub_23_2_g509(.A (sub_23_2_n_25), .B (sub_23_2_n_32), .Y
       (out1[3]));
  OAI2BB1X1 sub_23_2_g510(.A0N (sub_23_2_n_1), .A1N (sub_23_2_n_30),
       .B0 (sub_23_2_n_4), .Y (sub_23_2_n_33));
  AOI21X1 sub_23_2_g511(.A0 (sub_23_2_n_1), .A1 (sub_23_2_n_30), .B0
       (sub_23_2_n_5), .Y (sub_23_2_n_32));
  XNOR2X1 sub_23_2_g512(.A (sub_23_2_n_18), .B (sub_23_2_n_30), .Y
       (out1[2]));
  ADDFX1 sub_23_2_g513(.A (sub_23_2_n_10), .B (in2[1]), .CI
       (sub_23_2_n_0), .CO (sub_23_2_n_30), .S (out1[1]));
  AOI21X1 sub_23_2_g514(.A0 (sub_23_2_n_3), .A1 (sub_23_2_n_12), .B0
       (sub_23_2_n_27), .Y (sub_23_2_n_28));
  NOR2X1 sub_23_2_g515(.A (sub_23_2_n_22), .B (sub_23_2_n_26), .Y
       (sub_23_2_n_27));
  AOI21X1 sub_23_2_g516(.A0 (sub_23_2_n_13), .A1 (sub_23_2_n_14), .B0
       (sub_23_2_n_15), .Y (sub_23_2_n_26));
  NOR2BX1 sub_23_2_g517(.AN (sub_23_2_n_9), .B (sub_23_2_n_6), .Y
       (sub_23_2_n_25));
  NAND2BX1 sub_23_2_g518(.AN (sub_23_2_n_2), .B (sub_23_2_n_13), .Y
       (sub_23_2_n_24));
  NOR2X1 sub_23_2_g519(.A (sub_23_2_n_2), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_23));
  NAND2X1 sub_23_2_g520(.A (sub_23_2_n_3), .B (sub_23_2_n_11), .Y
       (sub_23_2_n_22));
  AND2XL sub_23_2_g521(.A (sub_23_2_n_3), .B (sub_23_2_n_8), .Y
       (sub_23_2_n_21));
  NAND2BX1 sub_23_2_g522(.AN (sub_23_2_n_12), .B (sub_23_2_n_11), .Y
       (sub_23_2_n_20));
  NOR2BX1 sub_23_2_g523(.AN (sub_23_2_n_13), .B (sub_23_2_n_15), .Y
       (sub_23_2_n_19));
  NAND2X1 sub_23_2_g524(.A (sub_23_2_n_1), .B (sub_23_2_n_4), .Y
       (sub_23_2_n_18));
  XOR2XL sub_23_2_g525(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  OR2XL sub_23_2_g526(.A (in2[9]), .B (in2[8]), .Y (sub_23_2_n_16));
  NOR2BX1 sub_23_2_g527(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_15));
  NOR2BX1 sub_23_2_g528(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_14));
  NAND2BX1 sub_23_2_g529(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_13));
  NOR2BX1 sub_23_2_g530(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_12));
  NAND2BX1 sub_23_2_g531(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_11));
  NAND2BX1 sub_23_2_g532(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_10));
  INVX1 sub_23_2_g533(.A (sub_23_2_n_4), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g534(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_9));
  NAND2BXL sub_23_2_g535(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_8));
  OR2XL sub_23_2_g536(.A (in2[13]), .B (in2[12]), .Y (sub_23_2_n_7));
  NOR2BX1 sub_23_2_g537(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g538(.AN (in1[2]), .B (in2[2]), .Y (sub_23_2_n_4));
  NAND2BX1 sub_23_2_g539(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_3));
  NOR2BX1 sub_23_2_g540(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_2));
  NAND2BX1 sub_23_2_g541(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_1));
  INVX1 sub_23_2_g542(.A (in1[1]), .Y (sub_23_2_n_0));
endmodule


