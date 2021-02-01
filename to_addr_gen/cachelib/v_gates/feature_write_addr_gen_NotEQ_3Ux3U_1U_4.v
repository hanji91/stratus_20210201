`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 16 2020 12:39:12 KST (Dec 16 2020 03:39:12 UTC)

module feature_write_addr_gen_NotEQ_3Ux3U_1U_4(in2, in1, out1);
  input [2:0] in2, in1;
  output out1;
  wire [2:0] in2, in1;
  wire out1;
  wire n_0, n_1, n_2;
  NAND3X1 g34(.A (n_1), .B (n_2), .C (n_0), .Y (out1));
  XNOR2X1 g35(.A (in2[1]), .B (in1[1]), .Y (n_2));
  XNOR2X1 g37(.A (in2[2]), .B (in1[2]), .Y (n_1));
  XNOR2X1 g36(.A (in2[0]), .B (in1[0]), .Y (n_0));
endmodule


