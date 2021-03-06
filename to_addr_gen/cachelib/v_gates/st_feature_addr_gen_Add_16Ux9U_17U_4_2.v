`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:11 KST (Dec  8 2020 00:47:11 UTC)

module st_feature_addr_gen_Add_16Ux9U_17U_4_2(in2, in1, out1);
  input [15:0] in2;
  input [8:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [8:0] in1;
  wire [16:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_21, add_23_2_n_23, add_23_2_n_26, add_23_2_n_27;
  wire add_23_2_n_29, add_23_2_n_30, add_23_2_n_31, add_23_2_n_33,
       add_23_2_n_35, add_23_2_n_36, add_23_2_n_37, add_23_2_n_40;
  wire add_23_2_n_42, add_23_2_n_44, add_23_2_n_46, add_23_2_n_48,
       add_23_2_n_50;
  ADDHX1 add_23_2_g491(.A (in2[15]), .B (add_23_2_n_50), .CO
       (out1[16]), .S (out1[15]));
  ADDHX1 add_23_2_g492(.A (in2[14]), .B (add_23_2_n_48), .CO
       (add_23_2_n_50), .S (out1[14]));
  ADDHX1 add_23_2_g493(.A (in2[13]), .B (add_23_2_n_46), .CO
       (add_23_2_n_48), .S (out1[13]));
  ADDHX1 add_23_2_g494(.A (in2[12]), .B (add_23_2_n_44), .CO
       (add_23_2_n_46), .S (out1[12]));
  ADDHX1 add_23_2_g495(.A (in2[11]), .B (add_23_2_n_42), .CO
       (add_23_2_n_44), .S (out1[11]));
  ADDHX1 add_23_2_g496(.A (in2[10]), .B (add_23_2_n_37), .CO
       (add_23_2_n_42), .S (out1[10]));
  XOR2XL add_23_2_g497(.A (in2[9]), .B (add_23_2_n_40), .Y (out1[9]));
  OAI21X1 add_23_2_g498(.A0 (add_23_2_n_7), .A1 (add_23_2_n_35), .B0
       (add_23_2_n_9), .Y (add_23_2_n_40));
  XNOR2X1 add_23_2_g499(.A (add_23_2_n_15), .B (add_23_2_n_35), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g500(.A (add_23_2_n_13), .B (add_23_2_n_36), .Y
       (out1[7]));
  OAI32X1 add_23_2_g501(.A0 (add_23_2_n_35), .A1 (add_23_2_n_0), .A2
       (add_23_2_n_7), .B0 (add_23_2_n_0), .B1 (add_23_2_n_9), .Y
       (add_23_2_n_37));
  OAI21X1 add_23_2_g502(.A0 (add_23_2_n_10), .A1 (add_23_2_n_31), .B0
       (add_23_2_n_4), .Y (add_23_2_n_36));
  AOI211XL add_23_2_g503(.A0 (add_23_2_n_17), .A1 (add_23_2_n_18), .B0
       (add_23_2_n_33), .C0 (add_23_2_n_14), .Y (add_23_2_n_35));
  XNOR2X1 add_23_2_g504(.A (add_23_2_n_16), .B (add_23_2_n_31), .Y
       (out1[6]));
  OAI2BB1X1 add_23_2_g505(.A0N (add_23_2_n_17), .A1N (add_23_2_n_30),
       .B0 (add_23_2_n_6), .Y (add_23_2_n_33));
  XNOR2X1 add_23_2_g506(.A (add_23_2_n_12), .B (add_23_2_n_29), .Y
       (out1[5]));
  NOR2X1 add_23_2_g507(.A (add_23_2_n_18), .B (add_23_2_n_30), .Y
       (add_23_2_n_31));
  NOR2X1 add_23_2_g508(.A (add_23_2_n_8), .B (add_23_2_n_27), .Y
       (add_23_2_n_30));
  NAND2X1 add_23_2_g509(.A (add_23_2_n_2), .B (add_23_2_n_27), .Y
       (add_23_2_n_29));
  XNOR2X1 add_23_2_g510(.A (add_23_2_n_11), .B (add_23_2_n_26), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g511(.AN (add_23_2_n_3), .B (add_23_2_n_26), .Y
       (add_23_2_n_27));
  ADDFX1 add_23_2_g512(.A (add_23_2_n_23), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_26), .S (out1[3]));
  ADDFX1 add_23_2_g513(.A (add_23_2_n_21), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_23), .S (out1[2]));
  ADDFX1 add_23_2_g514(.A (add_23_2_n_19), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_21), .S (out1[1]));
  ADDHX1 add_23_2_g515(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_19),
       .S (out1[0]));
  OAI21X1 add_23_2_g516(.A0 (add_23_2_n_2), .A1 (add_23_2_n_8), .B0
       (add_23_2_n_1), .Y (add_23_2_n_18));
  NOR2X1 add_23_2_g517(.A (add_23_2_n_5), .B (add_23_2_n_10), .Y
       (add_23_2_n_17));
  NOR2BX1 add_23_2_g518(.AN (add_23_2_n_4), .B (add_23_2_n_10), .Y
       (add_23_2_n_16));
  NOR2BX1 add_23_2_g519(.AN (add_23_2_n_9), .B (add_23_2_n_7), .Y
       (add_23_2_n_15));
  NOR2X1 add_23_2_g520(.A (add_23_2_n_4), .B (add_23_2_n_5), .Y
       (add_23_2_n_14));
  NAND2BX1 add_23_2_g521(.AN (add_23_2_n_5), .B (add_23_2_n_6), .Y
       (add_23_2_n_13));
  NAND2BX1 add_23_2_g522(.AN (add_23_2_n_8), .B (add_23_2_n_1), .Y
       (add_23_2_n_12));
  NAND2BX1 add_23_2_g523(.AN (add_23_2_n_3), .B (add_23_2_n_2), .Y
       (add_23_2_n_11));
  NOR2X1 add_23_2_g524(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_10));
  NAND2X1 add_23_2_g525(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_9));
  NOR2X1 add_23_2_g526(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g527(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g528(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g529(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g530(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g531(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g532(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g533(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_1));
  INVX1 add_23_2_g534(.A (in2[9]), .Y (add_23_2_n_0));
endmodule


