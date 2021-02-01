`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:44:06 KST (Dec 23 2020 05:44:06 UTC)

module in_buff_N_Mux_5_2_21_1(in3, in2, ctrl1, out1);
  input [4:0] in3, in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in3, in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9;
  OAI21X4 g51(.A0 (ctrl1), .A1 (n_2), .B0 (n_6), .Y (out1[4]));
  OAI21X4 g54(.A0 (ctrl1), .A1 (n_0), .B0 (n_7), .Y (out1[3]));
  OAI21X4 g55(.A0 (ctrl1), .A1 (n_1), .B0 (n_8), .Y (out1[2]));
  OAI21X4 g52(.A0 (ctrl1), .A1 (n_3), .B0 (n_5), .Y (out1[1]));
  OAI21X4 g53(.A0 (ctrl1), .A1 (n_4), .B0 (n_9), .Y (out1[0]));
  NAND2X8 g56(.A (in2[0]), .B (ctrl1), .Y (n_9));
  NAND2X8 g60(.A (in2[2]), .B (ctrl1), .Y (n_8));
  NAND2X8 g58(.A (in2[3]), .B (ctrl1), .Y (n_7));
  NAND2X8 g57(.A (in2[4]), .B (ctrl1), .Y (n_6));
  NAND2X8 g59(.A (in2[1]), .B (ctrl1), .Y (n_5));
  CLKINVX4 g63(.A (in3[0]), .Y (n_4));
  CLKINVX4 g65(.A (in3[1]), .Y (n_3));
  CLKINVX4 g61(.A (in3[4]), .Y (n_2));
  CLKINVX4 g64(.A (in3[2]), .Y (n_1));
  CLKINVX4 g62(.A (in3[3]), .Y (n_0));
endmodule


