`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 14:47:49 KST (Jan  6 2021 05:47:49 UTC)

module fix2float_N_Mux_32_2_51_4(in3, in2, ctrl1, out1);
  input [31:0] in3, in2;
  input ctrl1;
  output [31:0] out1;
  wire [31:0] in3, in2;
  wire ctrl1;
  wire [31:0] out1;
  MX2XL g331(.A (in3[16]), .B (in2[16]), .S0 (ctrl1), .Y (out1[16]));
  MX2XL g340(.A (in3[30]), .B (in2[30]), .S0 (ctrl1), .Y (out1[30]));
  MX2XL g341(.A (in3[29]), .B (in2[29]), .S0 (ctrl1), .Y (out1[29]));
  MX2XL g322(.A (in3[28]), .B (in2[28]), .S0 (ctrl1), .Y (out1[28]));
  MX2XL g334(.A (in3[27]), .B (in2[27]), .S0 (ctrl1), .Y (out1[27]));
  MX2XL g344(.A (in3[26]), .B (in2[26]), .S0 (ctrl1), .Y (out1[26]));
  MX2XL g323(.A (in3[25]), .B (in2[25]), .S0 (ctrl1), .Y (out1[25]));
  MX2XL g328(.A (in3[24]), .B (in2[24]), .S0 (ctrl1), .Y (out1[24]));
  MX2XL g335(.A (in3[23]), .B (in2[23]), .S0 (ctrl1), .Y (out1[23]));
  MX2XL g338(.A (in3[22]), .B (in2[22]), .S0 (ctrl1), .Y (out1[22]));
  MX2XL g345(.A (in3[21]), .B (in2[21]), .S0 (ctrl1), .Y (out1[21]));
  MX2XL g347(.A (in3[20]), .B (in2[20]), .S0 (ctrl1), .Y (out1[20]));
  MX2XL g350(.A (in3[19]), .B (in2[19]), .S0 (ctrl1), .Y (out1[19]));
  MX2XL g324(.A (in3[18]), .B (in2[18]), .S0 (ctrl1), .Y (out1[18]));
  MX2XL g329(.A (in3[17]), .B (in2[17]), .S0 (ctrl1), .Y (out1[17]));
  MX2XL g336(.A (in3[31]), .B (in2[31]), .S0 (ctrl1), .Y (out1[31]));
  MX2XL g333(.A (in3[0]), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g352(.A (in3[14]), .B (in2[14]), .S0 (ctrl1), .Y (out1[14]));
  MX2XL g339(.A (in3[13]), .B (in2[13]), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g342(.A (in3[12]), .B (in2[12]), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g343(.A (in3[11]), .B (in2[11]), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g346(.A (in3[10]), .B (in2[10]), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g348(.A (in3[9]), .B (in2[9]), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g349(.A (in3[8]), .B (in2[8]), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g351(.A (in3[7]), .B (in2[7]), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g337(.A (in3[6]), .B (in2[6]), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g325(.A (in3[5]), .B (in2[5]), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g326(.A (in3[4]), .B (in2[4]), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g327(.A (in3[3]), .B (in2[3]), .S0 (ctrl1), .Y (out1[3]));
  MX2XL g330(.A (in3[2]), .B (in2[2]), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g332(.A (in3[1]), .B (in2[1]), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g321(.A (in3[15]), .B (in2[15]), .S0 (ctrl1), .Y (out1[15]));
endmodule


