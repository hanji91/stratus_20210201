`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  2 2020 17:49:40 KST (Dec  2 2020 08:49:40 UTC)

module pe_array_OrReduction_7U_1U_4_3(in1, out1);
  input [6:0] in1;
  output out1;
  wire [6:0] in1;
  wire out1;
  wire n_0;
  OR4X1 g17(.A (in1[5]), .B (in1[4]), .C (in1[3]), .D (n_0), .Y (out1));
  OR4X1 g18(.A (in1[6]), .B (in1[0]), .C (in1[2]), .D (in1[1]), .Y
       (n_0));
endmodule


