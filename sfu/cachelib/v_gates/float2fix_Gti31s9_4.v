`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 15:40:49 KST (Jan  7 2021 06:40:49 UTC)

module float2fix_Gti31s9_4(in1, out1);
  input [8:0] in1;
  output out1;
  wire [8:0] in1;
  wire out1;
  wire gt_19_59_n_0;
  NOR2X1 gt_19_59_g190(.A (in1[8]), .B (gt_19_59_n_0), .Y (out1));
  NOR3X1 gt_19_59_g191(.A (in1[7]), .B (in1[6]), .C (in1[5]), .Y
       (gt_19_59_n_0));
endmodule

