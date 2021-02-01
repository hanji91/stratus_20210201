`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:23:11 KST (Dec 28 2020 04:23:11 UTC)

module fix2float_Add_23Sx8U_23S_4(in2, in1, out1);
  input [22:0] in2;
  input [7:0] in1;
  output [22:0] out1;
  wire [22:0] in2;
  wire [7:0] in1;
  wire [22:0] out1;
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
  wire add_23_2_n_47, add_23_2_n_48, add_23_2_n_51, add_23_2_n_52,
       add_23_2_n_53, add_23_2_n_56, add_23_2_n_57, add_23_2_n_58;
  wire add_23_2_n_60, add_23_2_n_61, add_23_2_n_64, add_23_2_n_65,
       add_23_2_n_69, add_23_2_n_72;
  XNOR2X1 add_23_2_g621(.A (in2[21]), .B (add_23_2_n_69), .Y
       (out1[21]));
  XNOR2X1 add_23_2_g622(.A (in2[22]), .B (add_23_2_n_72), .Y
       (out1[22]));
  XNOR2X1 add_23_2_g623(.A (in2[19]), .B (add_23_2_n_65), .Y
       (out1[19]));
  XNOR2X1 add_23_2_g624(.A (in2[17]), .B (add_23_2_n_60), .Y
       (out1[17]));
  NAND3BXL add_23_2_g625(.AN (add_23_2_n_64), .B (in2[20]), .C
       (in2[21]), .Y (add_23_2_n_72));
  XNOR2X1 add_23_2_g626(.A (in2[20]), .B (add_23_2_n_64), .Y
       (out1[20]));
  XNOR2X1 add_23_2_g627(.A (in2[15]), .B (add_23_2_n_58), .Y
       (out1[15]));
  NAND2BX1 add_23_2_g628(.AN (add_23_2_n_64), .B (in2[20]), .Y
       (add_23_2_n_69));
  XNOR2X1 add_23_2_g629(.A (in2[13]), .B (add_23_2_n_52), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g630(.A (in2[11]), .B (add_23_2_n_51), .Y
       (out1[11]));
  XOR2XL add_23_2_g631(.A (in2[18]), .B (add_23_2_n_61), .Y (out1[18]));
  NAND2X1 add_23_2_g632(.A (in2[18]), .B (add_23_2_n_61), .Y
       (add_23_2_n_65));
  NAND4XL add_23_2_g633(.A (in2[19]), .B (in2[18]), .C (add_23_2_n_5),
       .D (add_23_2_n_56), .Y (add_23_2_n_64));
  MXI2XL add_23_2_g634(.A (add_23_2_n_57), .B (add_23_2_n_56), .S0
       (in2[16]), .Y (out1[16]));
  XNOR2X1 add_23_2_g635(.A (in2[9]), .B (add_23_2_n_46), .Y (out1[9]));
  NOR2BX1 add_23_2_g636(.AN (add_23_2_n_5), .B (add_23_2_n_57), .Y
       (add_23_2_n_61));
  NAND2X1 add_23_2_g637(.A (in2[16]), .B (add_23_2_n_56), .Y
       (add_23_2_n_60));
  XNOR2X1 add_23_2_g638(.A (in2[14]), .B (add_23_2_n_53), .Y
       (out1[14]));
  NAND2BX1 add_23_2_g639(.AN (add_23_2_n_53), .B (in2[14]), .Y
       (add_23_2_n_58));
  INVX1 add_23_2_g640(.A (add_23_2_n_57), .Y (add_23_2_n_56));
  NAND4XL add_23_2_g641(.A (in2[15]), .B (add_23_2_n_16), .C (in2[14]),
       .D (add_23_2_n_0), .Y (add_23_2_n_57));
  XNOR2X1 add_23_2_g642(.A (in2[12]), .B (add_23_2_n_48), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g643(.A (in2[10]), .B (add_23_2_n_47), .Y
       (out1[10]));
  NAND2BX1 add_23_2_g644(.AN (add_23_2_n_48), .B (add_23_2_n_16), .Y
       (add_23_2_n_53));
  NAND2BX1 add_23_2_g645(.AN (add_23_2_n_48), .B (in2[12]), .Y
       (add_23_2_n_52));
  NAND2BX1 add_23_2_g646(.AN (add_23_2_n_47), .B (in2[10]), .Y
       (add_23_2_n_51));
  XNOR2X1 add_23_2_g647(.A (add_23_2_n_24), .B (add_23_2_n_45), .Y
       (out1[7]));
  XOR2XL add_23_2_g648(.A (in2[8]), .B (add_23_2_n_44), .Y (out1[8]));
  NAND2BX1 add_23_2_g650(.AN (add_23_2_n_25), .B (add_23_2_n_44), .Y
       (add_23_2_n_48));
  NAND2BX1 add_23_2_g651(.AN (add_23_2_n_15), .B (add_23_2_n_44), .Y
       (add_23_2_n_47));
  NAND2X1 add_23_2_g652(.A (in2[8]), .B (add_23_2_n_44), .Y
       (add_23_2_n_46));
  OAI21X1 add_23_2_g653(.A0 (add_23_2_n_14), .A1 (add_23_2_n_40), .B0
       (add_23_2_n_2), .Y (add_23_2_n_45));
  OAI211X1 add_23_2_g655(.A0 (add_23_2_n_2), .A1 (add_23_2_n_9), .B0
       (add_23_2_n_41), .C0 (add_23_2_n_29), .Y (add_23_2_n_44));
  XNOR2X1 add_23_2_g656(.A (add_23_2_n_17), .B (add_23_2_n_40), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g657(.A (add_23_2_n_23), .B (add_23_2_n_39), .Y
       (out1[5]));
  AOI31X1 add_23_2_g658(.A0 (add_23_2_n_18), .A1 (add_23_2_n_19), .A2
       (add_23_2_n_36), .B0 (add_23_2_n_6), .Y (add_23_2_n_41));
  AOI21X1 add_23_2_g659(.A0 (add_23_2_n_18), .A1 (add_23_2_n_36), .B0
       (add_23_2_n_26), .Y (add_23_2_n_40));
  OAI21X1 add_23_2_g660(.A0 (add_23_2_n_3), .A1 (add_23_2_n_37), .B0
       (add_23_2_n_13), .Y (add_23_2_n_39));
  XNOR2X1 add_23_2_g661(.A (add_23_2_n_21), .B (add_23_2_n_37), .Y
       (out1[4]));
  INVX1 add_23_2_g662(.A (add_23_2_n_36), .Y (add_23_2_n_37));
  OAI21X1 add_23_2_g663(.A0 (add_23_2_n_4), .A1 (add_23_2_n_34), .B0
       (add_23_2_n_7), .Y (add_23_2_n_36));
  XNOR2X1 add_23_2_g664(.A (add_23_2_n_22), .B (add_23_2_n_33), .Y
       (out1[3]));
  AOI21X1 add_23_2_g665(.A0 (add_23_2_n_12), .A1 (add_23_2_n_31), .B0
       (add_23_2_n_10), .Y (add_23_2_n_34));
  OAI2BB1X1 add_23_2_g666(.A0N (add_23_2_n_12), .A1N (add_23_2_n_31),
       .B0 (add_23_2_n_11), .Y (add_23_2_n_33));
  XNOR2X1 add_23_2_g667(.A (add_23_2_n_20), .B (add_23_2_n_31), .Y
       (out1[2]));
  ADDFX1 add_23_2_g668(.A (add_23_2_n_27), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_31), .S (out1[1]));
  NAND2X1 add_23_2_g669(.A (add_23_2_n_19), .B (add_23_2_n_26), .Y
       (add_23_2_n_29));
  ADDHX1 add_23_2_g670(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_27),
       .S (out1[0]));
  OAI21X1 add_23_2_g671(.A0 (add_23_2_n_13), .A1 (add_23_2_n_1), .B0
       (add_23_2_n_8), .Y (add_23_2_n_26));
  NAND3BXL add_23_2_g672(.AN (add_23_2_n_15), .B (in2[10]), .C
       (in2[11]), .Y (add_23_2_n_25));
  OR2XL add_23_2_g673(.A (add_23_2_n_6), .B (add_23_2_n_9), .Y
       (add_23_2_n_24));
  NAND2BX1 add_23_2_g674(.AN (add_23_2_n_1), .B (add_23_2_n_8), .Y
       (add_23_2_n_23));
  NAND2BX1 add_23_2_g675(.AN (add_23_2_n_4), .B (add_23_2_n_7), .Y
       (add_23_2_n_22));
  NOR2BX1 add_23_2_g676(.AN (add_23_2_n_13), .B (add_23_2_n_3), .Y
       (add_23_2_n_21));
  NAND2X1 add_23_2_g677(.A (add_23_2_n_11), .B (add_23_2_n_12), .Y
       (add_23_2_n_20));
  NOR2X1 add_23_2_g678(.A (add_23_2_n_9), .B (add_23_2_n_14), .Y
       (add_23_2_n_19));
  NOR2X1 add_23_2_g679(.A (add_23_2_n_1), .B (add_23_2_n_3), .Y
       (add_23_2_n_18));
  NOR2BX1 add_23_2_g680(.AN (add_23_2_n_2), .B (add_23_2_n_14), .Y
       (add_23_2_n_17));
  INVX1 add_23_2_g681(.A (add_23_2_n_11), .Y (add_23_2_n_10));
  AND2XL add_23_2_g682(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_16));
  NAND2X1 add_23_2_g683(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_15));
  NOR2X1 add_23_2_g684(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_14));
  NAND2X1 add_23_2_g685(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_13));
  OR2X1 add_23_2_g686(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g687(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g688(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g689(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_8));
  NAND2X1 add_23_2_g690(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_7));
  AND2XL add_23_2_g691(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_6));
  AND2XL add_23_2_g692(.A (in2[17]), .B (in2[16]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g693(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g694(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_3));
  NAND2X1 add_23_2_g695(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g696(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_1));
  NOR2BX1 add_23_2_g2(.AN (add_23_2_n_44), .B (add_23_2_n_25), .Y
       (add_23_2_n_0));
endmodule


