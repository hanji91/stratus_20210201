`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:53:57 KST (Dec  7 2020 13:53:57 UTC)

module st_weight_addr_gen_Add_17Sx9U_18S_4_3(in2, in1, out1);
  input [16:0] in2;
  input [8:0] in1;
  output [17:0] out1;
  wire [16:0] in2;
  wire [8:0] in1;
  wire [17:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_22, add_23_2_n_24, add_23_2_n_27;
  wire add_23_2_n_28, add_23_2_n_30, add_23_2_n_31, add_23_2_n_32,
       add_23_2_n_34, add_23_2_n_36, add_23_2_n_37, add_23_2_n_38;
  wire add_23_2_n_39, add_23_2_n_42, add_23_2_n_43, add_23_2_n_46,
       add_23_2_n_48, add_23_2_n_50, add_23_2_n_52, add_23_2_n_54;
  wire add_23_2_n_57;
  INVX1 add_23_2_g508(.A (add_23_2_n_57), .Y (out1[16]));
  ADDHX1 add_23_2_g509(.A (in2[16]), .B (add_23_2_n_54), .CO
       (out1[17]), .S (add_23_2_n_57));
  XNOR2X1 add_23_2_g510(.A (in2[15]), .B (add_23_2_n_52), .Y
       (out1[15]));
  NAND2BX1 add_23_2_g511(.AN (add_23_2_n_52), .B (in2[15]), .Y
       (add_23_2_n_54));
  XNOR2X1 add_23_2_g512(.A (in2[14]), .B (add_23_2_n_50), .Y
       (out1[14]));
  NAND2BX1 add_23_2_g513(.AN (add_23_2_n_50), .B (in2[14]), .Y
       (add_23_2_n_52));
  XNOR2X1 add_23_2_g514(.A (in2[13]), .B (add_23_2_n_48), .Y
       (out1[13]));
  NAND2BX1 add_23_2_g515(.AN (add_23_2_n_48), .B (in2[13]), .Y
       (add_23_2_n_50));
  XNOR2X1 add_23_2_g516(.A (in2[12]), .B (add_23_2_n_46), .Y
       (out1[12]));
  NAND2BX1 add_23_2_g517(.AN (add_23_2_n_46), .B (in2[12]), .Y
       (add_23_2_n_48));
  XNOR2X1 add_23_2_g518(.A (in2[11]), .B (add_23_2_n_43), .Y
       (out1[11]));
  NAND2BX1 add_23_2_g519(.AN (add_23_2_n_43), .B (in2[11]), .Y
       (add_23_2_n_46));
  XNOR2X1 add_23_2_g520(.A (in2[10]), .B (add_23_2_n_39), .Y
       (out1[10]));
  XOR2XL add_23_2_g521(.A (in2[9]), .B (add_23_2_n_42), .Y (out1[9]));
  NAND2BX1 add_23_2_g522(.AN (add_23_2_n_39), .B (in2[10]), .Y
       (add_23_2_n_43));
  OAI21X1 add_23_2_g523(.A0 (add_23_2_n_5), .A1 (add_23_2_n_37), .B0
       (add_23_2_n_10), .Y (add_23_2_n_42));
  XNOR2X1 add_23_2_g524(.A (add_23_2_n_13), .B (add_23_2_n_37), .Y
       (out1[8]));
  XNOR2X1 add_23_2_g525(.A (add_23_2_n_15), .B (add_23_2_n_38), .Y
       (out1[7]));
  AOI32X1 add_23_2_g526(.A0 (add_23_2_n_36), .A1 (in2[9]), .A2
       (add_23_2_n_4), .B0 (in2[9]), .B1 (add_23_2_n_9), .Y
       (add_23_2_n_39));
  OAI21X1 add_23_2_g527(.A0 (add_23_2_n_11), .A1 (add_23_2_n_32), .B0
       (add_23_2_n_6), .Y (add_23_2_n_38));
  INVX1 add_23_2_g528(.A (add_23_2_n_37), .Y (add_23_2_n_36));
  AOI211XL add_23_2_g529(.A0 (add_23_2_n_18), .A1 (add_23_2_n_19), .B0
       (add_23_2_n_34), .C0 (add_23_2_n_12), .Y (add_23_2_n_37));
  XNOR2X1 add_23_2_g530(.A (add_23_2_n_14), .B (add_23_2_n_32), .Y
       (out1[6]));
  OAI2BB1X1 add_23_2_g531(.A0N (add_23_2_n_18), .A1N (add_23_2_n_31),
       .B0 (add_23_2_n_1), .Y (add_23_2_n_34));
  XNOR2X1 add_23_2_g532(.A (add_23_2_n_16), .B (add_23_2_n_30), .Y
       (out1[5]));
  NOR2X1 add_23_2_g533(.A (add_23_2_n_19), .B (add_23_2_n_31), .Y
       (add_23_2_n_32));
  NOR2X1 add_23_2_g534(.A (add_23_2_n_2), .B (add_23_2_n_28), .Y
       (add_23_2_n_31));
  NAND2X1 add_23_2_g535(.A (add_23_2_n_0), .B (add_23_2_n_28), .Y
       (add_23_2_n_30));
  XNOR2X1 add_23_2_g536(.A (add_23_2_n_17), .B (add_23_2_n_27), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g537(.AN (add_23_2_n_3), .B (add_23_2_n_27), .Y
       (add_23_2_n_28));
  ADDFX1 add_23_2_g538(.A (add_23_2_n_24), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_27), .S (out1[3]));
  ADDFX1 add_23_2_g539(.A (add_23_2_n_22), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_24), .S (out1[2]));
  ADDFX1 add_23_2_g540(.A (add_23_2_n_20), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_22), .S (out1[1]));
  ADDHX1 add_23_2_g541(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_20),
       .S (out1[0]));
  OAI21X1 add_23_2_g542(.A0 (add_23_2_n_0), .A1 (add_23_2_n_2), .B0
       (add_23_2_n_8), .Y (add_23_2_n_19));
  NOR2X1 add_23_2_g543(.A (add_23_2_n_7), .B (add_23_2_n_11), .Y
       (add_23_2_n_18));
  NAND2BX1 add_23_2_g544(.AN (add_23_2_n_3), .B (add_23_2_n_0), .Y
       (add_23_2_n_17));
  NAND2BX1 add_23_2_g545(.AN (add_23_2_n_2), .B (add_23_2_n_8), .Y
       (add_23_2_n_16));
  NAND2BX1 add_23_2_g546(.AN (add_23_2_n_7), .B (add_23_2_n_1), .Y
       (add_23_2_n_15));
  NOR2BX1 add_23_2_g547(.AN (add_23_2_n_6), .B (add_23_2_n_11), .Y
       (add_23_2_n_14));
  NOR2X1 add_23_2_g548(.A (add_23_2_n_9), .B (add_23_2_n_5), .Y
       (add_23_2_n_13));
  NOR2X1 add_23_2_g549(.A (add_23_2_n_6), .B (add_23_2_n_7), .Y
       (add_23_2_n_12));
  NOR2X1 add_23_2_g550(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_11));
  INVX1 add_23_2_g551(.A (add_23_2_n_9), .Y (add_23_2_n_10));
  AND2X1 add_23_2_g552(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_9));
  NAND2X1 add_23_2_g553(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_8));
  NOR2X1 add_23_2_g554(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g555(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_6));
  INVX1 add_23_2_g556(.A (add_23_2_n_5), .Y (add_23_2_n_4));
  NOR2X1 add_23_2_g557(.A (in2[8]), .B (in1[8]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g558(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g559(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_2));
  NAND2X1 add_23_2_g560(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g561(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_0));
endmodule


