`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 16:57:11 KST (Dec  8 2020 07:57:11 UTC)

module st_weight_addr_gen_Muxu6i32u1_1(in2, ctrl1, out1);
  input [5:0] in2;
  input ctrl1;
  output [5:0] out1;
  wire [5:0] in2;
  wire ctrl1;
  wire [5:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_9;
  NAND2X2 g44(.A (ctrl1), .B (n_4), .Y (out1[5]));
  NOR2X2 g49(.A (n_2), .B (n_9), .Y (out1[0]));
  NOR2X4 g45(.A (n_9), .B (n_1), .Y (out1[4]));
  NOR2X2 g48(.A (n_3), .B (n_9), .Y (out1[3]));
  NOR2X2 g46(.A (n_5), .B (n_9), .Y (out1[2]));
  NOR2X2 g47(.A (n_0), .B (n_9), .Y (out1[1]));
  CLKINVX12 g50(.A (in2[2]), .Y (n_5));
  CLKINVX3 g56(.A (in2[5]), .Y (n_4));
  CLKINVX16 g52(.A (ctrl1), .Y (n_9));
  CLKINVX12 g51(.A (in2[3]), .Y (n_3));
  CLKINVX12 g54(.A (in2[0]), .Y (n_2));
  CLKINVX3 g53(.A (in2[4]), .Y (n_1));
  CLKINVX12 g55(.A (in2[1]), .Y (n_0));
endmodule


