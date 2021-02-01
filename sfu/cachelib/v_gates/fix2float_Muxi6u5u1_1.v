`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:24:22 KST (Dec 28 2020 04:24:22 UTC)

module fix2float_Muxi6u5u1_1(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_6;
  NOR2X1 g32(.A (ctrl1), .B (n_3), .Y (out1[4]));
  NOR2X1 g33(.A (ctrl1), .B (n_0), .Y (out1[3]));
  NAND2X1 g36(.A (n_2), .B (n_6), .Y (out1[2]));
  NAND2X1 g34(.A (n_1), .B (n_6), .Y (out1[1]));
  NOR2X1 g35(.A (ctrl1), .B (n_4), .Y (out1[0]));
  INVX2 g40(.A (in2[0]), .Y (n_4));
  INVX2 g37(.A (in2[4]), .Y (n_3));
  CLKINVX4 g38(.A (in2[2]), .Y (n_2));
  CLKINVX4 g41(.A (in2[1]), .Y (n_1));
  INVX2 g42(.A (in2[3]), .Y (n_0));
  CLKINVX3 g39(.A (ctrl1), .Y (n_6));
endmodule


