`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:27:12 KST (Dec 28 2020 04:27:12 UTC)

module fix2float_Muxi5u5u1_0(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  wire n_0, n_1, n_3, n_4, n_23, n_24;
  NOR2X2 g32(.A (ctrl1), .B (n_3), .Y (out1[4]));
  NOR2X2 g33(.A (ctrl1), .B (n_0), .Y (out1[3]));
  NOR2X2 g34(.A (ctrl1), .B (n_1), .Y (out1[1]));
  NAND2X4 g35(.A (n_4), .B (n_24), .Y (out1[0]));
  INVX8 g40(.A (in2[0]), .Y (n_4));
  CLKINVX4 g37(.A (in2[4]), .Y (n_3));
  CLKINVX4 g41(.A (in2[1]), .Y (n_1));
  CLKINVX4 g42(.A (in2[3]), .Y (n_0));
  NAND2X4 g9(.A (n_23), .B (n_24), .Y (out1[2]));
  INVX8 g12(.A (in2[2]), .Y (n_23));
  CLKINVX6 fopt13(.A (ctrl1), .Y (n_24));
endmodule


