`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 17 2020 14:24:46 KST (Dec 17 2020 05:24:46 UTC)

module cache_Eqi1u8_4(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1;
  NOR4X1 g33(.A (n_0), .B (n_1), .C (in1[6]), .D (in1[5]), .Y (out1));
  OR4X1 g34(.A (in1[7]), .B (in1[1]), .C (in1[3]), .D (in1[2]), .Y
       (n_1));
  NAND2BX1 g35(.AN (in1[4]), .B (in1[0]), .Y (n_0));
endmodule


