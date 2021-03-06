`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:35:45 KST (Jan 20 2021 09:35:45 UTC)

module st_weight_addr_gen_Subi32u16_4_14(in1, out1);
  input [15:0] in1;
  output [16:0] out1;
  wire [15:0] in1;
  wire [16:0] out1;
  wire sub_21_2_n_1, sub_21_2_n_2, sub_21_2_n_3, sub_21_2_n_4,
       sub_21_2_n_5, sub_21_2_n_6, sub_21_2_n_8, sub_21_2_n_9;
  wire sub_21_2_n_10, sub_21_2_n_12, sub_21_2_n_14, sub_21_2_n_15,
       sub_21_2_n_19;
  assign out1[0] = in1[0];
  assign out1[1] = in1[1];
  assign out1[2] = in1[2];
  assign out1[3] = in1[3];
  assign out1[4] = in1[4];
  INVX1 g7(.A (in1[5]), .Y (out1[5]));
  XOR2XL sub_21_2_g312(.A (in1[15]), .B (sub_21_2_n_19), .Y (out1[15]));
  XNOR2X1 sub_21_2_g313(.A (in1[13]), .B (sub_21_2_n_15), .Y
       (out1[13]));
  XOR2XL sub_21_2_g314(.A (in1[11]), .B (sub_21_2_n_12), .Y (out1[11]));
  AO21XL sub_21_2_g315(.A0 (in1[14]), .A1 (sub_21_2_n_14), .B0
       (sub_21_2_n_19), .Y (out1[14]));
  XNOR2X1 sub_21_2_g316(.A (in1[9]), .B (sub_21_2_n_8), .Y (out1[9]));
  NOR2X1 sub_21_2_g317(.A (in1[14]), .B (sub_21_2_n_14), .Y
       (sub_21_2_n_19));
  OAI2BB1X1 sub_21_2_g318(.A0N (in1[12]), .A1N (sub_21_2_n_10), .B0
       (sub_21_2_n_15), .Y (out1[12]));
  NOR4X1 sub_21_2_g319(.A (in1[15]), .B (in1[14]), .C (sub_21_2_n_3),
       .D (sub_21_2_n_10), .Y (out1[16]));
  XOR2XL sub_21_2_g320(.A (in1[7]), .B (sub_21_2_n_6), .Y (out1[7]));
  OR2XL sub_21_2_g321(.A (in1[12]), .B (sub_21_2_n_10), .Y
       (sub_21_2_n_15));
  OR2XL sub_21_2_g322(.A (sub_21_2_n_3), .B (sub_21_2_n_10), .Y
       (sub_21_2_n_14));
  AO21XL sub_21_2_g323(.A0 (in1[10]), .A1 (sub_21_2_n_9), .B0
       (sub_21_2_n_12), .Y (out1[10]));
  NOR2X1 sub_21_2_g324(.A (in1[10]), .B (sub_21_2_n_9), .Y
       (sub_21_2_n_12));
  OAI2BB1X1 sub_21_2_g325(.A0N (in1[8]), .A1N (sub_21_2_n_5), .B0
       (sub_21_2_n_8), .Y (out1[8]));
  OR4X1 sub_21_2_g326(.A (in1[11]), .B (in1[10]), .C (sub_21_2_n_2), .D
       (sub_21_2_n_5), .Y (sub_21_2_n_10));
  OR2XL sub_21_2_g327(.A (sub_21_2_n_2), .B (sub_21_2_n_5), .Y
       (sub_21_2_n_9));
  OR2XL sub_21_2_g328(.A (in1[8]), .B (sub_21_2_n_5), .Y
       (sub_21_2_n_8));
  AO21XL sub_21_2_g329(.A0 (in1[6]), .A1 (sub_21_2_n_4), .B0
       (sub_21_2_n_6), .Y (out1[6]));
  NOR2X1 sub_21_2_g330(.A (in1[6]), .B (sub_21_2_n_4), .Y
       (sub_21_2_n_6));
  OR4X1 sub_21_2_g331(.A (in1[6]), .B (in1[5]), .C (in1[7]), .D
       (sub_21_2_n_1), .Y (sub_21_2_n_5));
  OR2XL sub_21_2_g332(.A (in1[5]), .B (sub_21_2_n_1), .Y
       (sub_21_2_n_4));
  OR2XL sub_21_2_g333(.A (in1[13]), .B (in1[12]), .Y (sub_21_2_n_3));
  OR2XL sub_21_2_g334(.A (in1[9]), .B (in1[8]), .Y (sub_21_2_n_2));
  AND2XL sub_21_2_g335(.A (in1[5]), .B (in1[4]), .Y (sub_21_2_n_1));
endmodule


