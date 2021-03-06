`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 14:53:46 KST (Jan 27 2021 05:53:46 UTC)

module cache_Mul_5Ux4U_9U_4(in2, in1, out1);
  input [4:0] in2;
  input [3:0] in1;
  output [8:0] out1;
  wire [4:0] in2;
  wire [3:0] in1;
  wire [8:0] out1;
  wire mul_22_8_n_0, mul_22_8_n_1, mul_22_8_n_2, mul_22_8_n_3,
       mul_22_8_n_4, mul_22_8_n_5, mul_22_8_n_7, mul_22_8_n_8;
  wire mul_22_8_n_9, mul_22_8_n_10, mul_22_8_n_11, mul_22_8_n_12,
       mul_22_8_n_13, mul_22_8_n_14, mul_22_8_n_15, mul_22_8_n_16;
  wire mul_22_8_n_17, mul_22_8_n_18, mul_22_8_n_19, mul_22_8_n_20,
       mul_22_8_n_21, mul_22_8_n_22, mul_22_8_n_24, mul_22_8_n_25;
  wire mul_22_8_n_26, mul_22_8_n_27, mul_22_8_n_28, mul_22_8_n_29,
       mul_22_8_n_30, mul_22_8_n_31, mul_22_8_n_32, mul_22_8_n_33;
  wire mul_22_8_n_34, mul_22_8_n_35, mul_22_8_n_36, mul_22_8_n_37,
       mul_22_8_n_38, mul_22_8_n_39, mul_22_8_n_41, mul_22_8_n_42;
  wire mul_22_8_n_43, mul_22_8_n_44, mul_22_8_n_45, mul_22_8_n_46,
       mul_22_8_n_47, mul_22_8_n_48, mul_22_8_n_49, mul_22_8_n_50;
  wire mul_22_8_n_51, mul_22_8_n_52, mul_22_8_n_53, mul_22_8_n_54,
       mul_22_8_n_56, mul_22_8_n_57, mul_22_8_n_58, mul_22_8_n_60;
  wire mul_22_8_n_61, mul_22_8_n_62, mul_22_8_n_63, mul_22_8_n_67;
  XNOR2X1 mul_22_8_g549(.A (mul_22_8_n_38), .B (mul_22_8_n_67), .Y
       (out1[7]));
  OAI21X1 mul_22_8_g550(.A0 (mul_22_8_n_49), .A1 (mul_22_8_n_63), .B0
       (mul_22_8_n_47), .Y (mul_22_8_n_67));
  OAI211X1 mul_22_8_g551(.A0 (mul_22_8_n_52), .A1 (mul_22_8_n_60), .B0
       (mul_22_8_n_62), .C0 (mul_22_8_n_36), .Y (out1[8]));
  XNOR2X1 mul_22_8_g552(.A (mul_22_8_n_54), .B (mul_22_8_n_63), .Y
       (out1[6]));
  XNOR2X1 mul_22_8_g553(.A (mul_22_8_n_53), .B (mul_22_8_n_61), .Y
       (out1[5]));
  NOR2BX1 mul_22_8_g554(.AN (mul_22_8_n_60), .B (mul_22_8_n_57), .Y
       (mul_22_8_n_63));
  OA22X1 mul_22_8_g555(.A0 (mul_22_8_n_52), .A1 (mul_22_8_n_58), .B0
       (mul_22_8_n_37), .B1 (mul_22_8_n_47), .Y (mul_22_8_n_62));
  OAI2BB1X1 mul_22_8_g556(.A0N (mul_22_8_n_50), .A1N (mul_22_8_n_56),
       .B0 (mul_22_8_n_45), .Y (mul_22_8_n_61));
  NAND3BXL mul_22_8_g557(.AN (mul_22_8_n_48), .B (mul_22_8_n_50), .C
       (mul_22_8_n_56), .Y (mul_22_8_n_60));
  XNOR2X1 mul_22_8_g558(.A (mul_22_8_n_56), .B (mul_22_8_n_51), .Y
       (out1[4]));
  INVXL mul_22_8_g559(.A (mul_22_8_n_57), .Y (mul_22_8_n_58));
  OAI21X1 mul_22_8_g560(.A0 (mul_22_8_n_45), .A1 (mul_22_8_n_48), .B0
       (mul_22_8_n_46), .Y (mul_22_8_n_57));
  ADDFX1 mul_22_8_g561(.A (mul_22_8_n_39), .B (mul_22_8_n_28), .CI
       (mul_22_8_n_31), .CO (mul_22_8_n_56), .S (out1[3]));
  NOR2BX1 mul_22_8_g562(.AN (mul_22_8_n_47), .B (mul_22_8_n_49), .Y
       (mul_22_8_n_54));
  NAND2BXL mul_22_8_g563(.AN (mul_22_8_n_48), .B (mul_22_8_n_46), .Y
       (mul_22_8_n_53));
  OR2XL mul_22_8_g564(.A (mul_22_8_n_37), .B (mul_22_8_n_49), .Y
       (mul_22_8_n_52));
  NAND2XL mul_22_8_g565(.A (mul_22_8_n_45), .B (mul_22_8_n_50), .Y
       (mul_22_8_n_51));
  NAND2BX1 mul_22_8_g566(.AN (mul_22_8_n_44), .B (mul_22_8_n_30), .Y
       (mul_22_8_n_50));
  NOR2X1 mul_22_8_g567(.A (mul_22_8_n_33), .B (mul_22_8_n_41), .Y
       (mul_22_8_n_49));
  NOR2X1 mul_22_8_g568(.A (mul_22_8_n_43), .B (mul_22_8_n_42), .Y
       (mul_22_8_n_48));
  NAND2X1 mul_22_8_g569(.A (mul_22_8_n_33), .B (mul_22_8_n_41), .Y
       (mul_22_8_n_47));
  NAND2XL mul_22_8_g570(.A (mul_22_8_n_43), .B (mul_22_8_n_42), .Y
       (mul_22_8_n_46));
  NAND2BXL mul_22_8_g571(.AN (mul_22_8_n_30), .B (mul_22_8_n_44), .Y
       (mul_22_8_n_45));
  ADDFX1 mul_22_8_g572(.A (mul_22_8_n_35), .B (mul_22_8_n_21), .CI
       (mul_22_8_n_10), .CO (mul_22_8_n_43), .S (mul_22_8_n_44));
  ADDFX1 mul_22_8_g573(.A (mul_22_8_n_34), .B (mul_22_8_n_25), .CI
       (mul_22_8_n_11), .CO (mul_22_8_n_41), .S (mul_22_8_n_42));
  ADDFX1 mul_22_8_g574(.A (mul_22_8_n_20), .B (mul_22_8_n_15), .CI
       (mul_22_8_n_29), .CO (mul_22_8_n_39), .S (out1[2]));
  NAND2BX1 mul_22_8_g575(.AN (mul_22_8_n_37), .B (mul_22_8_n_36), .Y
       (mul_22_8_n_38));
  NOR2BX1 mul_22_8_g576(.AN (mul_22_8_n_19), .B (mul_22_8_n_32), .Y
       (mul_22_8_n_37));
  NAND2BX1 mul_22_8_g577(.AN (mul_22_8_n_19), .B (mul_22_8_n_32), .Y
       (mul_22_8_n_36));
  ADDFX1 mul_22_8_g578(.A (mul_22_8_n_14), .B (mul_22_8_n_0), .CI
       (mul_22_8_n_2), .CO (mul_22_8_n_34), .S (mul_22_8_n_35));
  ADDFX1 mul_22_8_g579(.A (mul_22_8_n_24), .B (mul_22_8_n_12), .CI
       (mul_22_8_n_1), .CO (mul_22_8_n_32), .S (mul_22_8_n_33));
  XNOR2X1 mul_22_8_g580(.A (mul_22_8_n_27), .B (mul_22_8_n_22), .Y
       (mul_22_8_n_31));
  OA22X1 mul_22_8_g581(.A0 (mul_22_8_n_26), .A1 (mul_22_8_n_22), .B0
       (mul_22_8_n_7), .B1 (mul_22_8_n_16), .Y (mul_22_8_n_30));
  ADDHX1 mul_22_8_g582(.A (mul_22_8_n_5), .B (mul_22_8_n_3), .CO
       (mul_22_8_n_28), .S (mul_22_8_n_29));
  ADDHX1 mul_22_8_g583(.A (mul_22_8_n_7), .B (mul_22_8_n_16), .CO
       (mul_22_8_n_26), .S (mul_22_8_n_27));
  ADDHX1 mul_22_8_g584(.A (mul_22_8_n_13), .B (mul_22_8_n_4), .CO
       (mul_22_8_n_24), .S (mul_22_8_n_25));
  AOI21X1 mul_22_8_g585(.A0 (mul_22_8_n_18), .A1 (mul_22_8_n_9), .B0
       (mul_22_8_n_20), .Y (out1[1]));
  XNOR2X1 mul_22_8_g586(.A (mul_22_8_n_17), .B (mul_22_8_n_8), .Y
       (mul_22_8_n_22));
  NOR2X1 mul_22_8_g587(.A (mul_22_8_n_17), .B (mul_22_8_n_8), .Y
       (mul_22_8_n_21));
  NOR2X1 mul_22_8_g588(.A (mul_22_8_n_18), .B (mul_22_8_n_9), .Y
       (mul_22_8_n_20));
  AND2XL mul_22_8_g589(.A (in2[0]), .B (in1[2]), .Y (mul_22_8_n_15));
  NAND2X1 mul_22_8_g590(.A (in2[4]), .B (in1[3]), .Y (mul_22_8_n_19));
  NAND2X1 mul_22_8_g591(.A (in2[0]), .B (in1[1]), .Y (mul_22_8_n_18));
  AND2XL mul_22_8_g592(.A (in2[2]), .B (in1[2]), .Y (mul_22_8_n_14));
  AND2XL mul_22_8_g593(.A (in2[3]), .B (in1[2]), .Y (mul_22_8_n_13));
  NAND2X1 mul_22_8_g594(.A (in2[2]), .B (in1[1]), .Y (mul_22_8_n_17));
  AND2XL mul_22_8_g595(.A (in2[4]), .B (in1[2]), .Y (mul_22_8_n_12));
  AND2XL mul_22_8_g596(.A (in2[2]), .B (in1[3]), .Y (mul_22_8_n_11));
  NAND2X1 mul_22_8_g597(.A (in2[1]), .B (in1[2]), .Y (mul_22_8_n_16));
  AND2XL mul_22_8_g598(.A (in2[1]), .B (in1[3]), .Y (mul_22_8_n_10));
  AND2XL mul_22_8_g599(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NAND2X1 mul_22_8_g600(.A (in2[1]), .B (in1[0]), .Y (mul_22_8_n_9));
  AND2XL mul_22_8_g601(.A (in2[1]), .B (in1[1]), .Y (mul_22_8_n_5));
  NAND2X1 mul_22_8_g602(.A (in2[3]), .B (in1[0]), .Y (mul_22_8_n_8));
  AND2XL mul_22_8_g603(.A (in2[4]), .B (in1[1]), .Y (mul_22_8_n_4));
  AND2XL mul_22_8_g604(.A (in2[2]), .B (in1[0]), .Y (mul_22_8_n_3));
  NAND2X1 mul_22_8_g605(.A (in2[0]), .B (in1[3]), .Y (mul_22_8_n_7));
  AND2XL mul_22_8_g606(.A (in2[3]), .B (in1[1]), .Y (mul_22_8_n_2));
  AND2XL mul_22_8_g607(.A (in2[3]), .B (in1[3]), .Y (mul_22_8_n_1));
  AND2XL mul_22_8_g608(.A (in2[4]), .B (in1[0]), .Y (mul_22_8_n_0));
endmodule


