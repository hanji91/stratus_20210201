`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 00:07:58 KST (Dec  7 2020 15:07:58 UTC)

module st_weight_addr_gen_Subi32u16_4_8(in1, out1);
  input [15:0] in1;
  output [16:0] out1;
  wire [15:0] in1;
  wire [16:0] out1;
  wire sub_21_2_n_1, sub_21_2_n_3, sub_21_2_n_5, sub_21_2_n_6,
       sub_21_2_n_8, sub_21_2_n_11, sub_21_2_n_13, sub_21_2_n_15;
  wire sub_21_2_n_17;
  assign out1[0] = in1[0];
  assign out1[1] = in1[1];
  assign out1[2] = in1[2];
  assign out1[3] = in1[3];
  assign out1[4] = in1[4];
  INVX1 g7(.A (in1[5]), .Y (out1[5]));
  AO21XL sub_21_2_g311(.A0 (in1[15]), .A1 (sub_21_2_n_17), .B0
       (out1[16]), .Y (out1[15]));
  NOR2X1 sub_21_2_g312(.A (in1[15]), .B (sub_21_2_n_17), .Y (out1[16]));
  OAI2BB1X1 sub_21_2_g313(.A0N (in1[14]), .A1N (sub_21_2_n_15), .B0
       (sub_21_2_n_17), .Y (out1[14]));
  OR2X1 sub_21_2_g314(.A (in1[14]), .B (sub_21_2_n_15), .Y
       (sub_21_2_n_17));
  OAI2BB1X1 sub_21_2_g315(.A0N (in1[13]), .A1N (sub_21_2_n_13), .B0
       (sub_21_2_n_15), .Y (out1[13]));
  OR2XL sub_21_2_g316(.A (in1[13]), .B (sub_21_2_n_13), .Y
       (sub_21_2_n_15));
  OAI2BB1X1 sub_21_2_g317(.A0N (in1[12]), .A1N (sub_21_2_n_11), .B0
       (sub_21_2_n_13), .Y (out1[12]));
  OR2XL sub_21_2_g318(.A (in1[12]), .B (sub_21_2_n_11), .Y
       (sub_21_2_n_13));
  OAI2BB1X1 sub_21_2_g319(.A0N (in1[11]), .A1N (sub_21_2_n_8), .B0
       (sub_21_2_n_11), .Y (out1[11]));
  OR2XL sub_21_2_g320(.A (in1[11]), .B (sub_21_2_n_8), .Y
       (sub_21_2_n_11));
  XOR2XL sub_21_2_g321(.A (in1[9]), .B (sub_21_2_n_6), .Y (out1[9]));
  OAI2BB1X1 sub_21_2_g322(.A0N (in1[10]), .A1N (sub_21_2_n_5), .B0
       (sub_21_2_n_8), .Y (out1[10]));
  OR2XL sub_21_2_g323(.A (in1[10]), .B (sub_21_2_n_5), .Y
       (sub_21_2_n_8));
  AO21XL sub_21_2_g324(.A0 (in1[8]), .A1 (sub_21_2_n_3), .B0
       (sub_21_2_n_6), .Y (out1[8]));
  NOR2X1 sub_21_2_g325(.A (in1[8]), .B (sub_21_2_n_3), .Y
       (sub_21_2_n_6));
  OR3XL sub_21_2_g326(.A (sub_21_2_n_3), .B (in1[9]), .C (in1[8]), .Y
       (sub_21_2_n_5));
  OAI2BB1X1 sub_21_2_g327(.A0N (in1[7]), .A1N (sub_21_2_n_1), .B0
       (sub_21_2_n_3), .Y (out1[7]));
  OR2X1 sub_21_2_g328(.A (in1[7]), .B (sub_21_2_n_1), .Y
       (sub_21_2_n_3));
  OAI2BB1X1 sub_21_2_g329(.A0N (in1[6]), .A1N (in1[5]), .B0
       (sub_21_2_n_1), .Y (out1[6]));
  OR2XL sub_21_2_g330(.A (in1[6]), .B (in1[5]), .Y (sub_21_2_n_1));
endmodule


