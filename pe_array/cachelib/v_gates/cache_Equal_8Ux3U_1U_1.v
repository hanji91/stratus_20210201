`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 17 2020 14:24:48 KST (Dec 17 2020 05:24:48 UTC)

module cache_Equal_8Ux3U_1U_1(in2, in1, out1);
  input [7:0] in2;
  input [2:0] in1;
  output out1;
  wire [7:0] in2;
  wire [2:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18;
  NOR2X1 g53(.A (n_16), .B (n_18), .Y (out1));
  NAND2BX1 g54(.AN (in2[3]), .B (n_17), .Y (n_18));
  NOR2X1 g56(.A (n_13), .B (n_14), .Y (n_17));
  NAND2X1 g55(.A (n_15), .B (n_12), .Y (n_16));
  NAND2XL g59(.A (n_4), .B (n_11), .Y (n_15));
  NOR2X1 g58(.A (n_9), .B (n_10), .Y (n_14));
  NAND2X1 g60(.A (n_6), .B (n_7), .Y (n_13));
  NAND2XL g57(.A (n_5), .B (n_8), .Y (n_12));
  NAND2X1 g68(.A (n_0), .B (n_1), .Y (n_11));
  NOR2X1 g62(.A (n_2), .B (n_3), .Y (n_10));
  NOR2X1 g64(.A (in2[0]), .B (in1[0]), .Y (n_9));
  OR2XL g65(.A (in2[1]), .B (in1[1]), .Y (n_8));
  NOR2X2 g66(.A (in2[5]), .B (in2[4]), .Y (n_7));
  NOR2X6 g67(.A (in2[7]), .B (in2[6]), .Y (n_6));
  NAND2X1 g61(.A (in2[1]), .B (in1[1]), .Y (n_5));
  NAND2X1 g63(.A (in2[2]), .B (in1[2]), .Y (n_4));
  INVX2 g69(.A (in1[0]), .Y (n_3));
  INVX2 g71(.A (in2[0]), .Y (n_2));
  INVX1 g72(.A (in1[2]), .Y (n_1));
  INVX1 g70(.A (in2[2]), .Y (n_0));
endmodule

