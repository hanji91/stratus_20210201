`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:52:17 KST (Dec  7 2020 09:52:17 UTC)

module st_weight_addr_gen_N_Mux_16_2_17_4_0(in3, in2, ctrl1, out1);
  input [15:0] in3, in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in3, in2;
  wire ctrl1;
  wire [15:0] out1;
  MX2XL g168(.A (in3[11]), .B (in2[11]), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g171(.A (in3[14]), .B (in2[14]), .S0 (ctrl1), .Y (out1[14]));
  MX2XL g172(.A (in3[13]), .B (in2[13]), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g162(.A (in3[12]), .B (in2[12]), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g165(.A (in3[15]), .B (in2[15]), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g169(.A (in3[10]), .B (in2[10]), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g163(.A (in3[9]), .B (in2[9]), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g161(.A (in3[8]), .B (in2[8]), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g176(.A (in3[3]), .B (in2[3]), .S0 (ctrl1), .Y (out1[3]));
  MX2XL g170(.A (in3[6]), .B (in2[6]), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g174(.A (in3[5]), .B (in2[5]), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g175(.A (in3[4]), .B (in2[4]), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g173(.A (in3[7]), .B (in2[7]), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g164(.A (in3[2]), .B (in2[2]), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g166(.A (in3[1]), .B (in2[1]), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g167(.A (in3[0]), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
endmodule


