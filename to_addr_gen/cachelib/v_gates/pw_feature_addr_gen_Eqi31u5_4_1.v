`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 21 2021 19:50:52 KST (Jan 21 2021 10:50:52 UTC)

module pw_feature_addr_gen_Eqi31u5_4_1(in1, out1);
  input [4:0] in1;
  output out1;
  wire [4:0] in1;
  wire out1;
  wire n_0;
  AND4XL g12(.A (in1[3]), .B (in1[2]), .C (in1[1]), .D (n_0), .Y
       (out1));
  AND2XL g13(.A (in1[4]), .B (in1[0]), .Y (n_0));
endmodule

