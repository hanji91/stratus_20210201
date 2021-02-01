`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 17 2020 14:25:45 KST (Dec 17 2020 05:25:45 UTC)

module cache_Eqi3u8_1(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5;
  NOR4BBX4 g30(.AN (in1[0]), .BN (n_0), .C (n_4), .D (n_5), .Y (out1));
  NAND2X2 g31(.A (n_3), .B (n_2), .Y (n_5));
  NAND2X4 g32(.A (in1[1]), .B (n_1), .Y (n_4));
  NOR2X4 g33(.A (in1[7]), .B (in1[6]), .Y (n_3));
  NOR2X4 g34(.A (in1[5]), .B (in1[4]), .Y (n_2));
  INVX2 g36(.A (in1[2]), .Y (n_1));
  CLKINVX3 g35(.A (in1[3]), .Y (n_0));
endmodule


