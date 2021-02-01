`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 21 2020 13:30:43 KST (Dec 21 2020 04:30:43 UTC)

module avg_pool_LtnLLs33_4(in1, out1);
  input [32:0] in1;
  output out1;
  wire [32:0] in1;
  wire out1;
  wire gt_19_107_n_0, gt_19_107_n_1, gt_19_107_n_2, gt_19_107_n_3;
  NOR2X1 gt_19_107_g554(.A (in1[31]), .B (gt_19_107_n_3), .Y (out1));
  OAI211X1 gt_19_107_g555(.A0 (gt_19_107_n_0), .A1 (gt_19_107_n_1), .B0
       (in1[32]), .C0 (gt_19_107_n_2), .Y (gt_19_107_n_3));
  OAI31X1 gt_19_107_g556(.A0 (in1[30]), .A1 (in1[29]), .A2 (in1[28]),
       .B0 (in1[31]), .Y (gt_19_107_n_2));
  NOR4X1 gt_19_107_g557(.A (in1[27]), .B (in1[26]), .C (in1[25]), .D
       (in1[24]), .Y (gt_19_107_n_1));
  INVX1 gt_19_107_g558(.A (in1[31]), .Y (gt_19_107_n_0));
endmodule

