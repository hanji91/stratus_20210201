`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 17:54:59 KST (Jan 27 2021 08:54:59 UTC)

module mac_N_Mux_18_2_2_4(in3, in2, ctrl1, out1);
  input [17:0] in3, in2;
  input ctrl1;
  output [17:0] out1;
  wire [17:0] in3, in2;
  wire ctrl1;
  wire [17:0] out1;
  MX2XL g194(.A (in3[15]), .B (in2[15]), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g193(.A (in3[16]), .B (in2[16]), .S0 (ctrl1), .Y (out1[16]));
  MX2XL g190(.A (in3[5]), .B (in2[5]), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g184(.A (in3[4]), .B (in2[4]), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g186(.A (in3[3]), .B (in2[3]), .S0 (ctrl1), .Y (out1[3]));
  MX2XL g187(.A (in3[2]), .B (in2[2]), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g198(.A (in3[1]), .B (in2[1]), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g191(.A (in3[0]), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g189(.A (in3[17]), .B (in2[17]), .S0 (ctrl1), .Y (out1[17]));
  MX2XL g197(.A (in3[6]), .B (in2[6]), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g188(.A (in3[13]), .B (in2[13]), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g195(.A (in3[12]), .B (in2[12]), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g183(.A (in3[11]), .B (in2[11]), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g185(.A (in3[10]), .B (in2[10]), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g181(.A (in3[9]), .B (in2[9]), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g192(.A (in3[8]), .B (in2[8]), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g196(.A (in3[7]), .B (in2[7]), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g182(.A (in3[14]), .B (in2[14]), .S0 (ctrl1), .Y (out1[14]));
endmodule

