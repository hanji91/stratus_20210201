`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:33:18 KST (Dec 23 2020 07:33:18 UTC)

module in_buff_Equal_5Ux2U_1U_4_0(in2, in1, out1);
  input [4:0] in2;
  input [1:0] in1;
  output out1;
  wire [4:0] in2;
  wire [1:0] in1;
  wire out1;
  wire n_0, n_1, n_2;
  NOR4X1 g31(.A (in2[4]), .B (in2[3]), .C (in2[2]), .D (n_2), .Y
       (out1));
  NAND2X1 g32(.A (n_1), .B (n_0), .Y (n_2));
  XNOR2X1 g33(.A (in2[1]), .B (in1[1]), .Y (n_1));
  XNOR2X1 g34(.A (in2[0]), .B (in1[0]), .Y (n_0));
endmodule

