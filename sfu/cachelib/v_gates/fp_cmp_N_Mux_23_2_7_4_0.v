`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 17:30:35 KST (Jan  6 2021 08:30:35 UTC)

module fp_cmp_N_Mux_23_2_7_4_0(in3, in2, ctrl1, out1);
  input [22:0] in3, in2;
  input ctrl1;
  output [22:0] out1;
  wire [22:0] in3, in2;
  wire ctrl1;
  wire [22:0] out1;
  MX2XL g239(.A (in3[14]), .B (in2[14]), .S0 (ctrl1), .Y (out1[14]));
  MX2XL g238(.A (in3[18]), .B (in2[18]), .S0 (ctrl1), .Y (out1[18]));
  MX2XL g242(.A (in3[17]), .B (in2[17]), .S0 (ctrl1), .Y (out1[17]));
  MX2XL g233(.A (in3[16]), .B (in2[16]), .S0 (ctrl1), .Y (out1[16]));
  MX2XL g235(.A (in3[15]), .B (in2[15]), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g236(.A (in3[22]), .B (in2[22]), .S0 (ctrl1), .Y (out1[22]));
  MX2XL g248(.A (in3[13]), .B (in2[13]), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g249(.A (in3[12]), .B (in2[12]), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g251(.A (in3[11]), .B (in2[11]), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g253(.A (in3[10]), .B (in2[10]), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g234(.A (in3[9]), .B (in2[9]), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g247(.A (in3[2]), .B (in2[2]), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g237(.A (in3[7]), .B (in2[7]), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g240(.A (in3[6]), .B (in2[6]), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g241(.A (in3[5]), .B (in2[5]), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g243(.A (in3[4]), .B (in2[4]), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g246(.A (in3[3]), .B (in2[3]), .S0 (ctrl1), .Y (out1[3]));
  MX2XL g231(.A (in3[8]), .B (in2[8]), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g250(.A (in3[1]), .B (in2[1]), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g252(.A (in3[0]), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g244(.A (in3[21]), .B (in2[21]), .S0 (ctrl1), .Y (out1[21]));
  MX2XL g245(.A (in3[20]), .B (in2[20]), .S0 (ctrl1), .Y (out1[20]));
  MX2XL g232(.A (in3[19]), .B (in2[19]), .S0 (ctrl1), .Y (out1[19]));
endmodule


