`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 24 2021 18:14:00 KST (Jan 24 2021 09:14:00 UTC)

module feature_write_addr_gen_MuxAdd2i1u3u3u1_4_3(in3, in2, ctrl1, out1);
  input [2:0] in3, in2;
  input ctrl1;
  output [2:0] out1;
  wire [2:0] in3, in2;
  wire ctrl1;
  wire [2:0] out1;
  wire inc_add_26_2_n_0, n_0, n_1, n_2;
  MXI2XL g40(.A (n_0), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g41(.A (in3[2]), .B (n_2), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g42(.A (in3[1]), .B (n_1), .S0 (ctrl1), .Y (out1[1]));
  INVXL g43(.A (in3[0]), .Y (n_0));
  XNOR2X1 inc_add_26_2_g19(.A (in2[2]), .B (inc_add_26_2_n_0), .Y
       (n_2));
  XOR2XL inc_add_26_2_g20(.A (in2[1]), .B (in2[0]), .Y (n_1));
  NAND2X1 inc_add_26_2_g21(.A (in2[1]), .B (in2[0]), .Y
       (inc_add_26_2_n_0));
endmodule


