`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:11:45 KST (Dec 10 2020 07:11:45 UTC)

module pw_feature_addr_gen_Eqi31u5_1(in1, out1);
  input [4:0] in1;
  output out1;
  wire [4:0] in1;
  wire out1;
  wire n_0, n_1;
  NOR3BX4 g12(.AN (in1[1]), .B (n_1), .C (n_0), .Y (out1));
  NAND2X4 g13(.A (in1[3]), .B (in1[2]), .Y (n_1));
  NAND2X2 g14(.A (in1[4]), .B (in1[0]), .Y (n_0));
endmodule


