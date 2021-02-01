`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:24:12 KST (Dec 28 2020 04:24:12 UTC)

module fix2float_Muxi27u5u1_1(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_8;
  NAND2X4 g18(.A (n_4), .B (n_8), .Y (out1[4]));
  NAND2X2 g19(.A (n_0), .B (n_8), .Y (out1[3]));
  NOR2X2 g22(.A (ctrl1), .B (n_1), .Y (out1[2]));
  NAND2X2 g20(.A (n_2), .B (n_8), .Y (out1[1]));
  NAND2X2 g21(.A (n_3), .B (n_8), .Y (out1[0]));
  CLKINVX4 g23(.A (in2[4]), .Y (n_4));
  CLKINVX4 g26(.A (in2[0]), .Y (n_3));
  CLKINVX12 g25(.A (ctrl1), .Y (n_8));
  CLKINVX4 g27(.A (in2[1]), .Y (n_2));
  INVX2 g24(.A (in2[2]), .Y (n_1));
  CLKINVX4 g28(.A (in2[3]), .Y (n_0));
endmodule


