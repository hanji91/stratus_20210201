`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:29:23 KST (Dec 28 2020 04:29:23 UTC)

module fix2float_Or_1Ux1U_1U_0(in2, in1, out1);
  input in2, in1;
  output out1;
  wire in2, in1;
  wire out1;
  wire n_1, n_6;
  NAND2X4 g2(.A (n_1), .B (n_6), .Y (out1));
  INVX8 g3(.A (in1), .Y (n_1));
  CLKINVX4 fopt(.A (in2), .Y (n_6));
endmodule

