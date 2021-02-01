`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:27:17 KST (Dec 28 2020 04:27:17 UTC)

module fix2float_Muxi1u5u1_0(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_2, n_4, n_5, n_18;
  NOR2X2 g39(.A (ctrl1), .B (n_5), .Y (out1[4]));
  NOR2X2 g40(.A (ctrl1), .B (n_2), .Y (out1[3]));
  NOR2X2 g43(.A (ctrl1), .B (n_1), .Y (out1[2]));
  NOR2X2 g41(.A (ctrl1), .B (n_4), .Y (out1[1]));
  NAND2X4 g42(.A (n_0), .B (n_18), .Y (out1[0]));
  CLKINVX4 g44(.A (in2[4]), .Y (n_5));
  CLKINVX4 g48(.A (in2[1]), .Y (n_4));
  CLKINVX4 g49(.A (in2[3]), .Y (n_2));
  CLKINVX4 g45(.A (in2[2]), .Y (n_1));
  INVX8 g47(.A (in2[0]), .Y (n_0));
  CLKINVX4 fopt(.A (ctrl1), .Y (n_18));
endmodule


