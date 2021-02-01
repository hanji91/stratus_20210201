`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 18:18:52 KST (Jan  6 2021 09:18:52 UTC)

module fp_cmp_cynw_cm_float_ltle_4_4(in1, in2, in3, out1);
  input in1;
  input [7:0] in2;
  input [22:0] in3;
  output [1:0] out1;
  wire in1;
  wire [7:0] in2;
  wire [22:0] in3;
  wire [1:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14;
  assign out1[1] = 1'b0;
  AOI31X1 g156(.A0 (n_13), .A1 (in2[5]), .A2 (in2[4]), .B0 (n_14), .Y
       (out1[0]));
  OAI31X1 g157(.A0 (n_9), .A1 (n_2), .A2 (n_11), .B0 (in1), .Y (n_14));
  AND4XL g158(.A (in2[7]), .B (in2[6]), .C (n_5), .D (n_12), .Y (n_13));
  NAND4XL g159(.A (n_8), .B (n_7), .C (n_3), .D (n_10), .Y (n_12));
  NAND4XL g160(.A (n_4), .B (n_10), .C (n_1), .D (n_7), .Y (n_11));
  NOR4X1 g161(.A (in3[1]), .B (in3[0]), .C (in3[2]), .D (n_0), .Y
       (n_10));
  NAND2X1 g162(.A (n_6), .B (n_3), .Y (n_9));
  NOR2BX1 g163(.AN (n_1), .B (n_2), .Y (n_8));
  NOR4X1 g164(.A (in2[3]), .B (in2[2]), .C (in2[1]), .D (in2[0]), .Y
       (n_6));
  AND4XL g165(.A (in2[3]), .B (in2[2]), .C (in2[1]), .D (in2[0]), .Y
       (n_5));
  NOR4X1 g166(.A (in2[7]), .B (in2[6]), .C (in2[5]), .D (in2[4]), .Y
       (n_4));
  NOR4X1 g167(.A (in3[10]), .B (in3[9]), .C (in3[8]), .D (in3[7]), .Y
       (n_7));
  OR4X1 g168(.A (in3[6]), .B (in3[5]), .C (in3[4]), .D (in3[3]), .Y
       (n_0));
  NOR4X1 g169(.A (in3[22]), .B (in3[21]), .C (in3[20]), .D (in3[19]),
       .Y (n_3));
  OR4X1 g170(.A (in3[18]), .B (in3[17]), .C (in3[16]), .D (in3[15]), .Y
       (n_2));
  NOR4X1 g171(.A (in3[14]), .B (in3[13]), .C (in3[12]), .D (in3[11]),
       .Y (n_1));
endmodule


