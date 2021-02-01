`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:41:28 KST (Jan 19 2021 07:41:28 UTC)

module st_weight_addr_gen_Add_17Sx9U_17S_4(in2, in1, out1);
  input [16:0] in2;
  input [8:0] in1;
  output [16:0] out1;
  wire [16:0] in2;
  wire [8:0] in1;
  wire [16:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27,
       add_23_2_n_28, add_23_2_n_29, add_23_2_n_30, add_23_2_n_31;
  wire add_23_2_n_33, add_23_2_n_35, add_23_2_n_37, add_23_2_n_38,
       add_23_2_n_40, add_23_2_n_41, add_23_2_n_43, add_23_2_n_44;
  wire add_23_2_n_45, add_23_2_n_48, add_23_2_n_49, add_23_2_n_50,
       add_23_2_n_53, add_23_2_n_54, add_23_2_n_55, add_23_2_n_56;
  wire add_23_2_n_57, add_23_2_n_58, add_23_2_n_59, add_23_2_n_61,
       add_23_2_n_64;
  XNOR2X1 add_23_2_g509(.A (in2[15]), .B (add_23_2_n_64), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g510(.A (in2[11]), .B (add_23_2_n_57), .Y
       (out1[11]));
  XNOR2X1 add_23_2_g511(.A (in2[13]), .B (add_23_2_n_58), .Y
       (out1[13]));
  XNOR2X1 add_23_2_g512(.A (in2[16]), .B (add_23_2_n_61), .Y
       (out1[16]));
  XOR2XL add_23_2_g513(.A (in2[14]), .B (add_23_2_n_59), .Y (out1[14]));
  NAND2X1 add_23_2_g514(.A (in2[14]), .B (add_23_2_n_59), .Y
       (add_23_2_n_64));
  XNOR2X1 add_23_2_g515(.A (in2[12]), .B (add_23_2_n_56), .Y
       (out1[12]));
  XNOR2X1 add_23_2_g516(.A (in2[10]), .B (add_23_2_n_53), .Y
       (out1[10]));
  NAND4XL add_23_2_g517(.A (in2[15]), .B (add_23_2_n_7), .C (in2[14]),
       .D (add_23_2_n_55), .Y (add_23_2_n_61));
  XOR2XL add_23_2_g518(.A (in2[9]), .B (add_23_2_n_54), .Y (out1[9]));
  NOR2BX1 add_23_2_g519(.AN (add_23_2_n_7), .B (add_23_2_n_56), .Y
       (add_23_2_n_59));
  NAND2BX1 add_23_2_g520(.AN (add_23_2_n_56), .B (in2[12]), .Y
       (add_23_2_n_58));
  NAND2BX1 add_23_2_g521(.AN (add_23_2_n_53), .B (in2[10]), .Y
       (add_23_2_n_57));
  AOI21X1 add_23_2_g522(.A0 (add_23_2_n_30), .A1 (add_23_2_n_49), .B0
       (add_23_2_n_29), .Y (add_23_2_n_56));
  AO21XL add_23_2_g523(.A0 (add_23_2_n_30), .A1 (add_23_2_n_49), .B0
       (add_23_2_n_29), .Y (add_23_2_n_55));
  OAI21X1 add_23_2_g524(.A0 (add_23_2_n_13), .A1 (add_23_2_n_48), .B0
       (add_23_2_n_3), .Y (add_23_2_n_54));
  AOI21X1 add_23_2_g525(.A0 (add_23_2_n_25), .A1 (add_23_2_n_49), .B0
       (add_23_2_n_26), .Y (add_23_2_n_53));
  XNOR2X1 add_23_2_g526(.A (add_23_2_n_20), .B (add_23_2_n_48), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g527(.A (add_23_2_n_19), .B (add_23_2_n_50), .Y
       (out1[7]));
  OAI21X1 add_23_2_g528(.A0 (add_23_2_n_12), .A1 (add_23_2_n_44), .B0
       (add_23_2_n_0), .Y (add_23_2_n_50));
  INVX1 add_23_2_g529(.A (add_23_2_n_49), .Y (add_23_2_n_48));
  OAI211X1 add_23_2_g530(.A0 (add_23_2_n_0), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_45), .C0 (add_23_2_n_33), .Y (add_23_2_n_49));
  XNOR2X1 add_23_2_g531(.A (add_23_2_n_18), .B (add_23_2_n_44), .Y
       (out1[6]));
  XNOR2X1 add_23_2_g532(.A (add_23_2_n_17), .B (add_23_2_n_43), .Y
       (out1[5]));
  AOI31X1 add_23_2_g533(.A0 (add_23_2_n_22), .A1 (add_23_2_n_27), .A2
       (add_23_2_n_40), .B0 (add_23_2_n_8), .Y (add_23_2_n_45));
  AOI21X1 add_23_2_g534(.A0 (add_23_2_n_22), .A1 (add_23_2_n_40), .B0
       (add_23_2_n_28), .Y (add_23_2_n_44));
  OAI21X1 add_23_2_g535(.A0 (add_23_2_n_1), .A1 (add_23_2_n_41), .B0
       (add_23_2_n_11), .Y (add_23_2_n_43));
  XNOR2X1 add_23_2_g536(.A (add_23_2_n_21), .B (add_23_2_n_41), .Y
       (out1[4]));
  INVX1 add_23_2_g537(.A (add_23_2_n_40), .Y (add_23_2_n_41));
  OAI21X1 add_23_2_g538(.A0 (add_23_2_n_15), .A1 (add_23_2_n_37), .B0
       (add_23_2_n_6), .Y (add_23_2_n_40));
  XNOR2X1 add_23_2_g539(.A (add_23_2_n_24), .B (add_23_2_n_38), .Y
       (out1[3]));
  OAI2BB1X1 add_23_2_g540(.A0N (add_23_2_n_10), .A1N (add_23_2_n_35),
       .B0 (add_23_2_n_5), .Y (add_23_2_n_38));
  AOI21X1 add_23_2_g541(.A0 (add_23_2_n_10), .A1 (add_23_2_n_35), .B0
       (add_23_2_n_4), .Y (add_23_2_n_37));
  XNOR2X1 add_23_2_g542(.A (add_23_2_n_23), .B (add_23_2_n_35), .Y
       (out1[2]));
  ADDFX1 add_23_2_g543(.A (add_23_2_n_31), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_35), .S (out1[1]));
  NAND2X1 add_23_2_g544(.A (add_23_2_n_27), .B (add_23_2_n_28), .Y
       (add_23_2_n_33));
  ADDHX1 add_23_2_g545(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_31),
       .S (out1[0]));
  NOR2BX1 add_23_2_g546(.AN (add_23_2_n_25), .B (add_23_2_n_14), .Y
       (add_23_2_n_30));
  NOR2BX1 add_23_2_g547(.AN (add_23_2_n_26), .B (add_23_2_n_14), .Y
       (add_23_2_n_29));
  OAI21X1 add_23_2_g548(.A0 (add_23_2_n_11), .A1 (add_23_2_n_9), .B0
       (add_23_2_n_16), .Y (add_23_2_n_28));
  NAND2BX1 add_23_2_g549(.AN (add_23_2_n_15), .B (add_23_2_n_6), .Y
       (add_23_2_n_24));
  NOR2X1 add_23_2_g550(.A (add_23_2_n_2), .B (add_23_2_n_12), .Y
       (add_23_2_n_27));
  NAND2X1 add_23_2_g551(.A (add_23_2_n_5), .B (add_23_2_n_10), .Y
       (add_23_2_n_23));
  NOR2BX1 add_23_2_g552(.AN (in2[9]), .B (add_23_2_n_3), .Y
       (add_23_2_n_26));
  NOR2BX1 add_23_2_g553(.AN (in2[9]), .B (add_23_2_n_13), .Y
       (add_23_2_n_25));
  NOR2X1 add_23_2_g554(.A (add_23_2_n_9), .B (add_23_2_n_1), .Y
       (add_23_2_n_22));
  NOR2BX1 add_23_2_g555(.AN (add_23_2_n_11), .B (add_23_2_n_1), .Y
       (add_23_2_n_21));
  NOR2BX1 add_23_2_g556(.AN (add_23_2_n_3), .B (add_23_2_n_13), .Y
       (add_23_2_n_20));
  OR2XL add_23_2_g557(.A (add_23_2_n_8), .B (add_23_2_n_2), .Y
       (add_23_2_n_19));
  NOR2BX1 add_23_2_g558(.AN (add_23_2_n_0), .B (add_23_2_n_12), .Y
       (add_23_2_n_18));
  NAND2BX1 add_23_2_g559(.AN (add_23_2_n_9), .B (add_23_2_n_16), .Y
       (add_23_2_n_17));
  NAND2X1 add_23_2_g560(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_16));
  NOR2X1 add_23_2_g561(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_15));
  NAND2X1 add_23_2_g562(.A (in2[11]), .B (in2[10]), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g563(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_13));
  NOR2X1 add_23_2_g564(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g565(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_11));
  OR2X1 add_23_2_g566(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_10));
  NOR2X1 add_23_2_g567(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_9));
  INVX1 add_23_2_g568(.A (add_23_2_n_5), .Y (add_23_2_n_4));
  AND2XL add_23_2_g569(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_8));
  AND2XL add_23_2_g570(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g571(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g572(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_5));
  NAND2X1 add_23_2_g573(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g574(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g575(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g576(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_0));
endmodule


