`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:45:23 KST (Dec  7 2020 13:45:23 UTC)

module st_weight_addr_gen_Sub_16Ux6U_17S_4_1(in2, in1, out1);
  input [15:0] in2;
  input [5:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [5:0] in1;
  wire [16:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_8;
  wire sub_23_2_n_10, sub_23_2_n_12, sub_23_2_n_14, sub_23_2_n_17,
       sub_23_2_n_18, sub_23_2_n_20, sub_23_2_n_22, sub_23_2_n_23;
  wire sub_23_2_n_25, sub_23_2_n_28, sub_23_2_n_30, sub_23_2_n_32,
       sub_23_2_n_34;
  AO21XL sub_23_2_g428(.A0 (in2[15]), .A1 (sub_23_2_n_34), .B0
       (out1[16]), .Y (out1[15]));
  NOR2X1 sub_23_2_g429(.A (in2[15]), .B (sub_23_2_n_34), .Y (out1[16]));
  OAI2BB1X1 sub_23_2_g430(.A0N (in2[14]), .A1N (sub_23_2_n_32), .B0
       (sub_23_2_n_34), .Y (out1[14]));
  OR2X1 sub_23_2_g431(.A (in2[14]), .B (sub_23_2_n_32), .Y
       (sub_23_2_n_34));
  OAI2BB1X1 sub_23_2_g432(.A0N (in2[13]), .A1N (sub_23_2_n_30), .B0
       (sub_23_2_n_32), .Y (out1[13]));
  OR2XL sub_23_2_g433(.A (in2[13]), .B (sub_23_2_n_30), .Y
       (sub_23_2_n_32));
  OAI2BB1X1 sub_23_2_g434(.A0N (in2[12]), .A1N (sub_23_2_n_28), .B0
       (sub_23_2_n_30), .Y (out1[12]));
  OR2XL sub_23_2_g435(.A (in2[12]), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_30));
  OAI2BB1X1 sub_23_2_g436(.A0N (in2[11]), .A1N (sub_23_2_n_25), .B0
       (sub_23_2_n_28), .Y (out1[11]));
  OR2XL sub_23_2_g437(.A (in2[11]), .B (sub_23_2_n_25), .Y
       (sub_23_2_n_28));
  XOR2XL sub_23_2_g438(.A (in2[9]), .B (sub_23_2_n_23), .Y (out1[9]));
  OAI2BB1X1 sub_23_2_g439(.A0N (in2[10]), .A1N (sub_23_2_n_22), .B0
       (sub_23_2_n_25), .Y (out1[10]));
  OR2XL sub_23_2_g440(.A (in2[10]), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_25));
  AO21XL sub_23_2_g441(.A0 (in2[8]), .A1 (sub_23_2_n_20), .B0
       (sub_23_2_n_23), .Y (out1[8]));
  NOR2X1 sub_23_2_g442(.A (in2[8]), .B (sub_23_2_n_20), .Y
       (sub_23_2_n_23));
  OR3XL sub_23_2_g443(.A (sub_23_2_n_20), .B (in2[9]), .C (in2[8]), .Y
       (sub_23_2_n_22));
  OAI2BB1X1 sub_23_2_g444(.A0N (in2[7]), .A1N (sub_23_2_n_18), .B0
       (sub_23_2_n_20), .Y (out1[7]));
  OR2X1 sub_23_2_g445(.A (in2[7]), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_20));
  OAI2BB1X1 sub_23_2_g446(.A0N (in2[6]), .A1N (sub_23_2_n_17), .B0
       (sub_23_2_n_18), .Y (out1[6]));
  OR2XL sub_23_2_g447(.A (in2[6]), .B (sub_23_2_n_17), .Y
       (sub_23_2_n_18));
  ADDFX1 sub_23_2_g448(.A (sub_23_2_n_14), .B (in2[5]), .CI
       (sub_23_2_n_4), .CO (sub_23_2_n_17), .S (out1[5]));
  ADDFX1 sub_23_2_g449(.A (sub_23_2_n_12), .B (in2[4]), .CI
       (sub_23_2_n_1), .CO (sub_23_2_n_14), .S (out1[4]));
  ADDFX1 sub_23_2_g450(.A (sub_23_2_n_10), .B (in2[3]), .CI
       (sub_23_2_n_3), .CO (sub_23_2_n_12), .S (out1[3]));
  ADDFX1 sub_23_2_g451(.A (sub_23_2_n_8), .B (in2[2]), .CI
       (sub_23_2_n_0), .CO (sub_23_2_n_10), .S (out1[2]));
  ADDFX1 sub_23_2_g452(.A (sub_23_2_n_6), .B (in2[1]), .CI
       (sub_23_2_n_2), .CO (sub_23_2_n_8), .S (out1[1]));
  OAI2BB1X1 sub_23_2_g453(.A0N (in2[0]), .A1N (sub_23_2_n_5), .B0
       (sub_23_2_n_6), .Y (out1[0]));
  NAND2BX1 sub_23_2_g454(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_6));
  INVXL sub_23_2_g455(.A (in1[0]), .Y (sub_23_2_n_5));
  INVX1 sub_23_2_g456(.A (in1[5]), .Y (sub_23_2_n_4));
  INVX1 sub_23_2_g457(.A (in1[3]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g458(.A (in1[1]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g459(.A (in1[4]), .Y (sub_23_2_n_1));
  INVX1 sub_23_2_g460(.A (in1[2]), .Y (sub_23_2_n_0));
endmodule


