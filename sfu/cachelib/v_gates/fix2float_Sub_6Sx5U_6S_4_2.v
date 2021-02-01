`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:43:07 KST (Dec 28 2020 04:43:07 UTC)

module fix2float_Sub_6Sx5U_6S_4_2(in2, in1, out1);
  input [5:0] in2;
  input [4:0] in1;
  output [5:0] out1;
  wire [5:0] in2;
  wire [4:0] in1;
  wire [5:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_4, sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7;
  wire sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_12, sub_23_2_n_15,
       sub_23_2_n_16;
  XNOR2X1 sub_23_2_g174(.A (in2[5]), .B (sub_23_2_n_16), .Y (out1[5]));
  ADDFX1 sub_23_2_g175(.A (sub_23_2_n_15), .B (in2[4]), .CI
       (sub_23_2_n_1), .CO (sub_23_2_n_16), .S (out1[4]));
  OAI21X1 sub_23_2_g176(.A0 (sub_23_2_n_3), .A1 (sub_23_2_n_0), .B0
       (sub_23_2_n_7), .Y (sub_23_2_n_15));
  XNOR2X1 sub_23_2_g177(.A (sub_23_2_n_9), .B (sub_23_2_n_0), .Y
       (out1[3]));
  XNOR2X1 sub_23_2_g180(.A (sub_23_2_n_10), .B (sub_23_2_n_12), .Y
       (out1[2]));
  ADDFX1 sub_23_2_g181(.A (sub_23_2_n_4), .B (in2[1]), .CI
       (sub_23_2_n_2), .CO (sub_23_2_n_12), .S (out1[1]));
  NAND2BX1 sub_23_2_g182(.AN (sub_23_2_n_6), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_10));
  NOR2BX1 sub_23_2_g183(.AN (sub_23_2_n_7), .B (sub_23_2_n_3), .Y
       (sub_23_2_n_9));
  XOR2XL sub_23_2_g184(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  NAND2BX1 sub_23_2_g185(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_7));
  NOR2BX1 sub_23_2_g186(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g187(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_5));
  NAND2BX1 sub_23_2_g188(.AN (in2[0]), .B (in1[0]), .Y (sub_23_2_n_4));
  NOR2BX1 sub_23_2_g189(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_3));
  INVX1 sub_23_2_g190(.A (in1[1]), .Y (sub_23_2_n_2));
  INVX1 sub_23_2_g191(.A (in1[4]), .Y (sub_23_2_n_1));
  AOI21X1 sub_23_2_g192(.A0 (sub_23_2_n_5), .A1 (sub_23_2_n_12), .B0
       (sub_23_2_n_6), .Y (sub_23_2_n_0));
endmodule


