`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:26:58 KST (Dec 28 2020 04:26:58 UTC)

module fix2float_Muxi15u5u1_0(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_20, n_21;
  NOR2X2 g18(.A (ctrl1), .B (n_4), .Y (out1[4]));
  NAND2X4 g19(.A (n_0), .B (n_21), .Y (out1[3]));
  NAND2X4 g22(.A (n_1), .B (n_20), .Y (out1[2]));
  NAND2X4 g20(.A (n_2), .B (n_21), .Y (out1[1]));
  NAND2X4 g21(.A (n_3), .B (n_20), .Y (out1[0]));
  CLKINVX4 g23(.A (in2[4]), .Y (n_4));
  INVX8 g26(.A (in2[0]), .Y (n_3));
  INVX8 g27(.A (in2[1]), .Y (n_2));
  INVX8 g24(.A (in2[2]), .Y (n_1));
  INVX8 g28(.A (in2[3]), .Y (n_0));
  CLKINVX6 fopt29(.A (ctrl1), .Y (n_21));
  CLKINVX6 fopt30(.A (ctrl1), .Y (n_20));
endmodule


