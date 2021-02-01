`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 17 2020 14:24:45 KST (Dec 17 2020 05:24:45 UTC)

module cache_Eqi5u8_4(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1, n_2;
  NOR4X1 g41(.A (in1[6]), .B (in1[5]), .C (in1[4]), .D (n_2), .Y
       (out1));
  OR4X1 g42(.A (in1[7]), .B (n_1), .C (n_0), .D (in1[1]), .Y (n_2));
  NAND2BXL g43(.AN (in1[3]), .B (in1[2]), .Y (n_1));
  INVX1 g44(.A (in1[0]), .Y (n_0));
endmodule


