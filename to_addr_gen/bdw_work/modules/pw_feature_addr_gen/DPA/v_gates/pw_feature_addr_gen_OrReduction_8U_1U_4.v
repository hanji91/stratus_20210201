`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:05:58 KST (Dec 10 2020 07:05:58 UTC)

module pw_feature_addr_gen_OrReduction_8U_1U_4(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1;
  OR4X1 g17(.A (in1[6]), .B (in1[5]), .C (in1[4]), .D (n_1), .Y (out1));
  NAND2BXL g18(.AN (in1[7]), .B (n_0), .Y (n_1));
  NOR4X1 g19(.A (in1[3]), .B (in1[2]), .C (in1[1]), .D (in1[0]), .Y
       (n_0));
endmodule

