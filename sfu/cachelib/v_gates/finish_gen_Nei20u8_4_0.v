`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 12 2021 16:27:20 KST (Jan 12 2021 07:27:20 UTC)

module finish_gen_Nei20u8_4_0(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1;
  NAND4BBXL g39(.AN (in1[1]), .BN (in1[0]), .C (in1[2]), .D (n_1), .Y
       (out1));
  NOR4X1 g40(.A (in1[3]), .B (n_0), .C (in1[7]), .D (in1[6]), .Y (n_1));
  NAND2BX1 g41(.AN (in1[5]), .B (in1[4]), .Y (n_0));
endmodule


