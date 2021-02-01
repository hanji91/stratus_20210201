`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 14:53:51 KST (Jan 27 2021 05:53:51 UTC)

module cache_Mul2i10u5_4(in1, out1);
  input [4:0] in1;
  output [8:0] out1;
  wire [4:0] in1;
  wire [8:0] out1;
  wire const_mul_20_8_n_1, const_mul_20_8_n_3, const_mul_20_8_n_5,
       const_mul_20_8_n_7;
  assign out1[0] = 1'b0;
  assign out1[1] = in1[0];
  assign out1[2] = in1[1];
  ADDHX1 const_mul_20_8_g93(.A (in1[4]), .B (const_mul_20_8_n_7), .CO
       (out1[8]), .S (out1[7]));
  ADDHX1 const_mul_20_8_g94(.A (in1[3]), .B (const_mul_20_8_n_5), .CO
       (const_mul_20_8_n_7), .S (out1[6]));
  ADDFX1 const_mul_20_8_g95(.A (const_mul_20_8_n_3), .B (in1[2]), .CI
       (in1[4]), .CO (const_mul_20_8_n_5), .S (out1[5]));
  ADDFX1 const_mul_20_8_g96(.A (const_mul_20_8_n_1), .B (in1[1]), .CI
       (in1[3]), .CO (const_mul_20_8_n_3), .S (out1[4]));
  ADDHX1 const_mul_20_8_g97(.A (in1[2]), .B (in1[0]), .CO
       (const_mul_20_8_n_1), .S (out1[3]));
endmodule


