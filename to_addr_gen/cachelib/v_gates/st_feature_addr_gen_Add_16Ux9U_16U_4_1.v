`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:40:48 KST (Dec  7 2020 13:40:48 UTC)

module st_feature_addr_gen_Add_16Ux9U_16U_4_1(in2, in1, out1);
  input [15:0] in2;
  input [8:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [8:0] in1;
  wire [15:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27,
       add_23_2_n_29, add_23_2_n_31, add_23_2_n_33, add_23_2_n_34;
  wire add_23_2_n_36, add_23_2_n_37, add_23_2_n_39, add_23_2_n_40,
       add_23_2_n_41, add_23_2_n_44, add_23_2_n_45, add_23_2_n_46;
  wire add_23_2_n_47, add_23_2_n_50, add_23_2_n_51, add_23_2_n_52,
       add_23_2_n_53, add_23_2_n_56, add_23_2_n_58, add_23_2_n_59;
  XNOR2X1 add_23_2_g479(.A (in2[15]), .B (add_23_2_n_59), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g480(.A (in2[13]), .B (add_23_2_n_56), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g481(.A (in2[14]), .B (add_23_2_n_58), .Y
       (out1[14]));
  XNOR2X1 add_23_2_g482(.A (in2[11]), .B (add_23_2_n_53), .Y
       (out1[11]));
  NAND2BX1 add_23_2_g483(.AN (add_23_2_n_58), .B (in2[14]), .Y
       (add_23_2_n_59));
  NAND3BXL add_23_2_g484(.AN (add_23_2_n_52), .B (in2[12]), .C
       (in2[13]), .Y (add_23_2_n_58));
  XNOR2X1 add_23_2_g485(.A (in2[12]), .B (add_23_2_n_52), .Y
       (out1[12]));
  NAND2BX1 add_23_2_g486(.AN (add_23_2_n_52), .B (in2[12]), .Y
       (add_23_2_n_56));
  XNOR2X1 add_23_2_g487(.A (in2[10]), .B (add_23_2_n_50), .Y
       (out1[10]));
  XOR2XL add_23_2_g488(.A (in2[9]), .B (add_23_2_n_51), .Y (out1[9]));
  NAND2BX1 add_23_2_g489(.AN (add_23_2_n_50), .B (in2[10]), .Y
       (add_23_2_n_53));
  OAI211X1 add_23_2_g490(.A0 (add_23_2_n_19), .A1 (add_23_2_n_47), .B0
       (in2[11]), .C0 (in2[10]), .Y (add_23_2_n_52));
  OAI21X1 add_23_2_g491(.A0 (add_23_2_n_3), .A1 (add_23_2_n_45), .B0
       (add_23_2_n_0), .Y (add_23_2_n_51));
  AOI21X1 add_23_2_g492(.A0 (add_23_2_n_24), .A1 (add_23_2_n_44), .B0
       (add_23_2_n_19), .Y (add_23_2_n_50));
  XNOR2X1 add_23_2_g493(.A (add_23_2_n_15), .B (add_23_2_n_45), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g494(.A (add_23_2_n_16), .B (add_23_2_n_46), .Y
       (out1[7]));
  NOR2BX1 add_23_2_g495(.AN (add_23_2_n_24), .B (add_23_2_n_45), .Y
       (add_23_2_n_47));
  OAI21X1 add_23_2_g496(.A0 (add_23_2_n_9), .A1 (add_23_2_n_40), .B0
       (add_23_2_n_1), .Y (add_23_2_n_46));
  INVX1 add_23_2_g497(.A (add_23_2_n_44), .Y (add_23_2_n_45));
  OAI211X1 add_23_2_g498(.A0 (add_23_2_n_1), .A1 (add_23_2_n_12), .B0
       (add_23_2_n_41), .C0 (add_23_2_n_29), .Y (add_23_2_n_44));
  XNOR2X1 add_23_2_g499(.A (add_23_2_n_17), .B (add_23_2_n_40), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g500(.A (add_23_2_n_18), .B (add_23_2_n_39), .Y
       (out1[5]));
  AOI31X1 add_23_2_g501(.A0 (add_23_2_n_20), .A1 (add_23_2_n_25), .A2
       (add_23_2_n_36), .B0 (add_23_2_n_14), .Y (add_23_2_n_41));
  AOI21X1 add_23_2_g502(.A0 (add_23_2_n_20), .A1 (add_23_2_n_36), .B0
       (add_23_2_n_26), .Y (add_23_2_n_40));
  OAI21X1 add_23_2_g503(.A0 (add_23_2_n_2), .A1 (add_23_2_n_37), .B0
       (add_23_2_n_13), .Y (add_23_2_n_39));
  XNOR2X1 add_23_2_g504(.A (add_23_2_n_21), .B (add_23_2_n_37), .Y
       (out1[4]));
  INVX1 add_23_2_g505(.A (add_23_2_n_36), .Y (add_23_2_n_37));
  OAI21X1 add_23_2_g506(.A0 (add_23_2_n_6), .A1 (add_23_2_n_34), .B0
       (add_23_2_n_5), .Y (add_23_2_n_36));
  XNOR2X1 add_23_2_g507(.A (add_23_2_n_22), .B (add_23_2_n_33), .Y
       (out1[3]));
  AOI21X1 add_23_2_g508(.A0 (add_23_2_n_10), .A1 (add_23_2_n_31), .B0
       (add_23_2_n_7), .Y (add_23_2_n_34));
  OAI2BB1X1 add_23_2_g509(.A0N (add_23_2_n_10), .A1N (add_23_2_n_31),
       .B0 (add_23_2_n_8), .Y (add_23_2_n_33));
  XNOR2X1 add_23_2_g510(.A (add_23_2_n_23), .B (add_23_2_n_31), .Y
       (out1[2]));
  ADDFX1 add_23_2_g511(.A (add_23_2_n_27), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_31), .S (out1[1]));
  NAND2X1 add_23_2_g512(.A (add_23_2_n_25), .B (add_23_2_n_26), .Y
       (add_23_2_n_29));
  ADDHX1 add_23_2_g513(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_27),
       .S (out1[0]));
  OAI21X1 add_23_2_g514(.A0 (add_23_2_n_13), .A1 (add_23_2_n_11), .B0
       (add_23_2_n_4), .Y (add_23_2_n_26));
  NOR2X1 add_23_2_g515(.A (add_23_2_n_12), .B (add_23_2_n_9), .Y
       (add_23_2_n_25));
  NAND2X1 add_23_2_g516(.A (add_23_2_n_8), .B (add_23_2_n_10), .Y
       (add_23_2_n_23));
  NAND2BX1 add_23_2_g517(.AN (add_23_2_n_6), .B (add_23_2_n_5), .Y
       (add_23_2_n_22));
  NOR2BX1 add_23_2_g518(.AN (in2[9]), .B (add_23_2_n_3), .Y
       (add_23_2_n_24));
  NOR2BX1 add_23_2_g519(.AN (add_23_2_n_13), .B (add_23_2_n_2), .Y
       (add_23_2_n_21));
  NAND2BX1 add_23_2_g520(.AN (add_23_2_n_11), .B (add_23_2_n_4), .Y
       (add_23_2_n_18));
  NOR2X1 add_23_2_g521(.A (add_23_2_n_11), .B (add_23_2_n_2), .Y
       (add_23_2_n_20));
  NOR2BX1 add_23_2_g522(.AN (add_23_2_n_1), .B (add_23_2_n_9), .Y
       (add_23_2_n_17));
  OR2XL add_23_2_g523(.A (add_23_2_n_14), .B (add_23_2_n_12), .Y
       (add_23_2_n_16));
  NOR2BX1 add_23_2_g524(.AN (add_23_2_n_0), .B (add_23_2_n_3), .Y
       (add_23_2_n_15));
  NOR2BX1 add_23_2_g525(.AN (in2[9]), .B (add_23_2_n_0), .Y
       (add_23_2_n_19));
  INVX1 add_23_2_g526(.A (add_23_2_n_8), .Y (add_23_2_n_7));
  AND2XL add_23_2_g527(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_14));
  NAND2X1 add_23_2_g528(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_13));
  NOR2X1 add_23_2_g529(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_12));
  NOR2X1 add_23_2_g530(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_11));
  OR2X1 add_23_2_g531(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g532(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g533(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g534(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g535(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g536(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g537(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g538(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g539(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g540(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_0));
endmodule


