`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 19:55:04 KST (Jan 27 2021 10:55:04 UTC)

module avg_pool_Muxi0Add2i1s8u1_4_0(in2, ctrl1, out1);
  input [7:0] in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in2;
  wire ctrl1;
  wire [7:0] out1;
  wire inc_add_24_2_n_1, inc_add_24_2_n_2, inc_add_24_2_n_4,
       inc_add_24_2_n_6, inc_add_24_2_n_8, inc_add_24_2_n_10, n_0, n_1;
  wire n_2, n_3, n_4, n_5, n_6;
  NOR2BX1 g68(.AN (n_3), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g69(.AN (n_5), .B (ctrl1), .Y (out1[6]));
  NOR2BX1 g70(.AN (n_6), .B (ctrl1), .Y (out1[7]));
  NOR2X1 g71(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
  NOR2BX1 g72(.AN (n_1), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g73(.AN (n_4), .B (ctrl1), .Y (out1[5]));
  NOR2BX1 g74(.AN (n_2), .B (ctrl1), .Y (out1[3]));
  NOR2BX1 g75(.AN (n_0), .B (ctrl1), .Y (out1[1]));
  XNOR2X1 inc_add_24_2_g67(.A (in2[7]), .B (inc_add_24_2_n_10), .Y
       (n_6));
  XNOR2X1 inc_add_24_2_g68(.A (in2[6]), .B (inc_add_24_2_n_8), .Y
       (n_5));
  NAND2BX1 inc_add_24_2_g69(.AN (inc_add_24_2_n_8), .B (in2[6]), .Y
       (inc_add_24_2_n_10));
  XNOR2X1 inc_add_24_2_g70(.A (in2[5]), .B (inc_add_24_2_n_6), .Y
       (n_4));
  NAND3BXL inc_add_24_2_g71(.AN (inc_add_24_2_n_4), .B (in2[5]), .C
       (in2[4]), .Y (inc_add_24_2_n_8));
  XNOR2X1 inc_add_24_2_g72(.A (in2[4]), .B (inc_add_24_2_n_4), .Y
       (n_3));
  NAND2BX1 inc_add_24_2_g73(.AN (inc_add_24_2_n_4), .B (in2[4]), .Y
       (inc_add_24_2_n_6));
  XNOR2X1 inc_add_24_2_g74(.A (in2[3]), .B (inc_add_24_2_n_2), .Y
       (n_2));
  NAND3X1 inc_add_24_2_g75(.A (in2[3]), .B (in2[2]), .C
       (inc_add_24_2_n_1), .Y (inc_add_24_2_n_4));
  XOR2XL inc_add_24_2_g76(.A (in2[2]), .B (inc_add_24_2_n_1), .Y (n_1));
  NAND2X1 inc_add_24_2_g77(.A (in2[2]), .B (inc_add_24_2_n_1), .Y
       (inc_add_24_2_n_2));
  ADDHX1 inc_add_24_2_g78(.A (in2[1]), .B (in2[0]), .CO
       (inc_add_24_2_n_1), .S (n_0));
endmodule


