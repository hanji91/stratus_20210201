`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:10 KST (Jan 20 2021 09:19:10 UTC)

module st_feature_addr_gen_Sub_17Ux8U_18S_4_4(in2, in1, out1);
  input [16:0] in2;
  input [7:0] in1;
  output [17:0] out1;
  wire [16:0] in2;
  wire [7:0] in1;
  wire [17:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_11,
       sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_14, sub_23_2_n_15;
  wire sub_23_2_n_16, sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_20,
       sub_23_2_n_21, sub_23_2_n_22, sub_23_2_n_23, sub_23_2_n_24;
  wire sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_27, sub_23_2_n_28,
       sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_31, sub_23_2_n_33;
  wire sub_23_2_n_35, sub_23_2_n_36, sub_23_2_n_38, sub_23_2_n_39,
       sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_45, sub_23_2_n_46;
  wire sub_23_2_n_47, sub_23_2_n_48, sub_23_2_n_51, sub_23_2_n_52,
       sub_23_2_n_53, sub_23_2_n_54, sub_23_2_n_57, sub_23_2_n_63;
  XOR2XL sub_23_2_g489(.A (in2[15]), .B (sub_23_2_n_57), .Y (out1[15]));
  INVX1 sub_23_2_g490(.A (sub_23_2_n_63), .Y (out1[16]));
  ADDHX1 sub_23_2_g491(.A (sub_23_2_n_1), .B (sub_23_2_n_54), .CO
       (out1[17]), .S (sub_23_2_n_63));
  XOR2XL sub_23_2_g492(.A (in2[13]), .B (sub_23_2_n_52), .Y (out1[13]));
  XOR2XL sub_23_2_g493(.A (in2[11]), .B (sub_23_2_n_51), .Y (out1[11]));
  XOR2XL sub_23_2_g494(.A (in2[9]), .B (sub_23_2_n_47), .Y (out1[9]));
  AO21XL sub_23_2_g495(.A0 (in2[14]), .A1 (sub_23_2_n_53), .B0
       (sub_23_2_n_57), .Y (out1[14]));
  NOR2X1 sub_23_2_g496(.A (in2[14]), .B (sub_23_2_n_53), .Y
       (sub_23_2_n_57));
  AO21XL sub_23_2_g497(.A0 (in2[12]), .A1 (sub_23_2_n_0), .B0
       (sub_23_2_n_52), .Y (out1[12]));
  AO21XL sub_23_2_g498(.A0 (in2[10]), .A1 (sub_23_2_n_48), .B0
       (sub_23_2_n_51), .Y (out1[10]));
  NOR4X1 sub_23_2_g499(.A (in2[14]), .B (sub_23_2_n_10), .C (in2[15]),
       .D (sub_23_2_n_0), .Y (sub_23_2_n_54));
  OR2XL sub_23_2_g500(.A (sub_23_2_n_10), .B (sub_23_2_n_0), .Y
       (sub_23_2_n_53));
  NOR2X1 sub_23_2_g501(.A (in2[12]), .B (sub_23_2_n_0), .Y
       (sub_23_2_n_52));
  NOR2X1 sub_23_2_g502(.A (in2[10]), .B (sub_23_2_n_48), .Y
       (sub_23_2_n_51));
  AO21XL sub_23_2_g503(.A0 (in2[8]), .A1 (sub_23_2_n_45), .B0
       (sub_23_2_n_47), .Y (out1[8]));
  XNOR2X1 sub_23_2_g504(.A (sub_23_2_n_21), .B (sub_23_2_n_46), .Y
       (out1[7]));
  NAND2BX1 sub_23_2_g507(.AN (sub_23_2_n_45), .B (sub_23_2_n_13), .Y
       (sub_23_2_n_48));
  NOR2X1 sub_23_2_g508(.A (in2[8]), .B (sub_23_2_n_45), .Y
       (sub_23_2_n_47));
  AOI21X1 sub_23_2_g509(.A0 (sub_23_2_n_14), .A1 (sub_23_2_n_42), .B0
       (sub_23_2_n_3), .Y (sub_23_2_n_46));
  OAI211X1 sub_23_2_g510(.A0 (sub_23_2_n_26), .A1 (sub_23_2_n_39), .B0
       (sub_23_2_n_31), .C0 (sub_23_2_n_8), .Y (sub_23_2_n_45));
  XNOR2X1 sub_23_2_g511(.A (sub_23_2_n_25), .B (sub_23_2_n_42), .Y
       (out1[6]));
  XNOR2X1 sub_23_2_g512(.A (sub_23_2_n_24), .B (sub_23_2_n_41), .Y
       (out1[5]));
  OAI21X1 sub_23_2_g513(.A0 (sub_23_2_n_23), .A1 (sub_23_2_n_38), .B0
       (sub_23_2_n_29), .Y (sub_23_2_n_42));
  AOI2BB1XL sub_23_2_g514(.A0N (sub_23_2_n_7), .A1N (sub_23_2_n_38),
       .B0 (sub_23_2_n_17), .Y (sub_23_2_n_41));
  XNOR2X1 sub_23_2_g515(.A (sub_23_2_n_27), .B (sub_23_2_n_38), .Y
       (out1[4]));
  OR2XL sub_23_2_g516(.A (sub_23_2_n_23), .B (sub_23_2_n_38), .Y
       (sub_23_2_n_39));
  AOI21X1 sub_23_2_g517(.A0 (sub_23_2_n_11), .A1 (sub_23_2_n_36), .B0
       (sub_23_2_n_9), .Y (sub_23_2_n_38));
  XNOR2X1 sub_23_2_g518(.A (sub_23_2_n_20), .B (sub_23_2_n_35), .Y
       (out1[3]));
  OAI2BB1X1 sub_23_2_g519(.A0N (sub_23_2_n_15), .A1N (sub_23_2_n_33),
       .B0 (sub_23_2_n_5), .Y (sub_23_2_n_36));
  AOI21X1 sub_23_2_g520(.A0 (sub_23_2_n_15), .A1 (sub_23_2_n_33), .B0
       (sub_23_2_n_6), .Y (sub_23_2_n_35));
  XNOR2X1 sub_23_2_g521(.A (sub_23_2_n_22), .B (sub_23_2_n_33), .Y
       (out1[2]));
  ADDFX1 sub_23_2_g522(.A (sub_23_2_n_12), .B (in2[1]), .CI
       (sub_23_2_n_2), .CO (sub_23_2_n_33), .S (out1[1]));
  AOI21X1 sub_23_2_g523(.A0 (sub_23_2_n_4), .A1 (sub_23_2_n_3), .B0
       (sub_23_2_n_30), .Y (sub_23_2_n_31));
  NOR2X1 sub_23_2_g524(.A (sub_23_2_n_26), .B (sub_23_2_n_29), .Y
       (sub_23_2_n_30));
  AOI21X1 sub_23_2_g525(.A0 (sub_23_2_n_16), .A1 (sub_23_2_n_17), .B0
       (sub_23_2_n_18), .Y (sub_23_2_n_29));
  NOR4X1 sub_23_2_g526(.A (in2[11]), .B (in2[10]), .C (in2[9]), .D
       (in2[8]), .Y (sub_23_2_n_28));
  NOR2X1 sub_23_2_g527(.A (sub_23_2_n_7), .B (sub_23_2_n_17), .Y
       (sub_23_2_n_27));
  NAND2X1 sub_23_2_g528(.A (sub_23_2_n_4), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_26));
  NAND2BX1 sub_23_2_g529(.AN (sub_23_2_n_3), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_25));
  NOR2BX1 sub_23_2_g530(.AN (sub_23_2_n_16), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_24));
  NAND2BXL sub_23_2_g531(.AN (sub_23_2_n_7), .B (sub_23_2_n_16), .Y
       (sub_23_2_n_23));
  NAND2X1 sub_23_2_g532(.A (sub_23_2_n_15), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_22));
  AND2XL sub_23_2_g533(.A (sub_23_2_n_4), .B (sub_23_2_n_8), .Y
       (sub_23_2_n_21));
  NOR2BX1 sub_23_2_g534(.AN (sub_23_2_n_11), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_20));
  XOR2XL sub_23_2_g535(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NOR2X1 sub_23_2_g536(.A (in2[9]), .B (in2[8]), .Y (sub_23_2_n_13));
  NOR2BX1 sub_23_2_g537(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_18));
  NAND2BX1 sub_23_2_g538(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_12));
  NOR2BX1 sub_23_2_g539(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_17));
  NAND2BX1 sub_23_2_g540(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_16));
  NAND2BX1 sub_23_2_g541(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_15));
  NAND2BX1 sub_23_2_g542(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_14));
  INVX1 sub_23_2_g543(.A (sub_23_2_n_5), .Y (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g544(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_11));
  OR2XL sub_23_2_g545(.A (in2[13]), .B (in2[12]), .Y (sub_23_2_n_10));
  NOR2BX1 sub_23_2_g546(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_9));
  NAND2BXL sub_23_2_g547(.AN (in1[7]), .B (in2[7]), .Y (sub_23_2_n_8));
  NOR2BX1 sub_23_2_g548(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_7));
  NAND2BX1 sub_23_2_g549(.AN (in1[2]), .B (in2[2]), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g550(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_4));
  NOR2BX1 sub_23_2_g551(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g552(.A (in1[1]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g553(.A (in2[16]), .Y (sub_23_2_n_1));
  NAND2BX1 sub_23_2_g554(.AN (sub_23_2_n_45), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_0));
endmodule


