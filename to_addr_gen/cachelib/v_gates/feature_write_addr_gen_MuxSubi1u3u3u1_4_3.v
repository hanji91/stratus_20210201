`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 24 2021 18:14:06 KST (Jan 24 2021 09:14:06 UTC)

module feature_write_addr_gen_MuxSubi1u3u3u1_4_3(in3, in2, ctrl1, out1);
  input [2:0] in3, in2;
  input ctrl1;
  output [2:0] out1;
  wire [2:0] in3, in2;
  wire ctrl1;
  wire [2:0] out1;
  wire dec_sub_26_2_n_0, n_0, n_1, n_2;
  MXI2XL g40(.A (n_0), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g41(.A (in3[2]), .B (n_2), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g42(.A (in3[1]), .B (n_1), .S0 (ctrl1), .Y (out1[1]));
  INVXL g43(.A (in3[0]), .Y (n_0));
  XOR2XL dec_sub_26_2_g21(.A (in2[2]), .B (dec_sub_26_2_n_0), .Y (n_2));
  XNOR2X1 dec_sub_26_2_g22(.A (in2[1]), .B (in2[0]), .Y (n_1));
  NOR2X1 dec_sub_26_2_g23(.A (in2[1]), .B (in2[0]), .Y
       (dec_sub_26_2_n_0));
endmodule


