`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 16:01:02 KST (Jan  7 2021 07:01:02 UTC)

module float2fix_MuxSubi127u8i0u1_4(in2, ctrl1, out1);
  input [7:0] in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in2;
  wire ctrl1;
  wire [7:0] out1;
  wire n_0, n_2, n_3, n_4, n_5, n_6, n_7, n_8;
  wire sub_24_2_n_1, sub_24_2_n_2, sub_24_2_n_4, sub_24_2_n_5,
       sub_24_2_n_7, sub_24_2_n_10;
  AND2XL g69(.A (ctrl1), .B (n_5), .Y (out1[4]));
  AND2XL g70(.A (ctrl1), .B (n_7), .Y (out1[6]));
  AND2XL g71(.A (ctrl1), .B (n_8), .Y (out1[7]));
  NOR2X1 g72(.A (n_0), .B (in2[0]), .Y (out1[0]));
  NOR2BX1 g73(.AN (n_3), .B (n_0), .Y (out1[2]));
  NOR2BX1 g74(.AN (n_6), .B (n_0), .Y (out1[5]));
  NOR2BX1 g75(.AN (n_4), .B (n_0), .Y (out1[3]));
  NOR2BX1 g76(.AN (n_2), .B (n_0), .Y (out1[1]));
  INVX1 g77(.A (ctrl1), .Y (n_0));
  XNOR2X1 sub_24_2_g170(.A (in2[7]), .B (sub_24_2_n_10), .Y (n_8));
  ADDHX1 sub_24_2_g171(.A (in2[6]), .B (sub_24_2_n_7), .CO
       (sub_24_2_n_10), .S (n_7));
  XNOR2X1 sub_24_2_g172(.A (in2[5]), .B (sub_24_2_n_5), .Y (n_6));
  XNOR2X1 sub_24_2_g173(.A (in2[3]), .B (sub_24_2_n_2), .Y (n_4));
  AND3XL sub_24_2_g174(.A (in2[4]), .B (in2[5]), .C (sub_24_2_n_4), .Y
       (sub_24_2_n_7));
  XOR2XL sub_24_2_g175(.A (in2[4]), .B (sub_24_2_n_4), .Y (n_5));
  NAND2X1 sub_24_2_g176(.A (in2[4]), .B (sub_24_2_n_4), .Y
       (sub_24_2_n_5));
  AND3XL sub_24_2_g177(.A (in2[2]), .B (in2[3]), .C (sub_24_2_n_1), .Y
       (sub_24_2_n_4));
  XOR2XL sub_24_2_g178(.A (in2[2]), .B (sub_24_2_n_1), .Y (n_3));
  NAND2X1 sub_24_2_g179(.A (in2[2]), .B (sub_24_2_n_1), .Y
       (sub_24_2_n_2));
  ADDHX1 sub_24_2_g180(.A (in2[1]), .B (in2[0]), .CO (sub_24_2_n_1), .S
       (n_2));
endmodule

