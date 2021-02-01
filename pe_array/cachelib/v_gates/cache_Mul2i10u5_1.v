`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 14:54:27 KST (Jan 27 2021 05:54:27 UTC)

module cache_Mul2i10u5_1(in1, out1);
  input [4:0] in1;
  output [8:0] out1;
  wire [4:0] in1;
  wire [8:0] out1;
  wire const_mul_20_8_n_2, const_mul_20_8_n_3, const_mul_20_8_n_4,
       const_mul_20_8_n_5, const_mul_20_8_n_6, const_mul_20_8_n_7,
       const_mul_20_8_n_8, const_mul_20_8_n_9;
  wire const_mul_20_8_n_11, const_mul_20_8_n_12, const_mul_20_8_n_13,
       const_mul_20_8_n_16, const_mul_20_8_n_17, const_mul_20_8_n_18,
       const_mul_20_8_n_19, const_mul_20_8_n_30;
  wire const_mul_20_8_n_31, const_mul_20_8_n_32, const_mul_20_8_n_33,
       const_mul_20_8_n_34;
  assign out1[0] = 1'b0;
  assign out1[1] = in1[0];
  assign out1[2] = in1[1];
  MXI2XL const_mul_20_8_g183(.A (const_mul_20_8_n_4), .B (in1[4]), .S0
       (const_mul_20_8_n_18), .Y (out1[7]));
  MXI2X1 const_mul_20_8_g184(.A (const_mul_20_8_n_3), .B (in1[3]), .S0
       (const_mul_20_8_n_19), .Y (out1[6]));
  AOI21X1 const_mul_20_8_g185(.A0 (const_mul_20_8_n_11), .A1
       (const_mul_20_8_n_17), .B0 (const_mul_20_8_n_4), .Y (out1[8]));
  OAI21X1 const_mul_20_8_g186(.A0 (const_mul_20_8_n_8), .A1
       (const_mul_20_8_n_33), .B0 (const_mul_20_8_n_9), .Y
       (const_mul_20_8_n_19));
  OAI21X1 const_mul_20_8_g187(.A0 (const_mul_20_8_n_12), .A1
       (const_mul_20_8_n_34), .B0 (const_mul_20_8_n_11), .Y
       (const_mul_20_8_n_18));
  NAND2BX1 const_mul_20_8_g189(.AN (const_mul_20_8_n_12), .B
       (const_mul_20_8_n_30), .Y (const_mul_20_8_n_17));
  ADDFHX1 const_mul_20_8_g191(.A (in1[3]), .B (in1[1]), .CI
       (const_mul_20_8_n_6), .CO (const_mul_20_8_n_16), .S (out1[4]));
  NAND2X1 const_mul_20_8_g193(.A (const_mul_20_8_n_9), .B
       (const_mul_20_8_n_7), .Y (const_mul_20_8_n_13));
  NAND2X1 const_mul_20_8_g194(.A (in1[3]), .B (const_mul_20_8_n_7), .Y
       (const_mul_20_8_n_12));
  OR2XL const_mul_20_8_g195(.A (const_mul_20_8_n_3), .B
       (const_mul_20_8_n_9), .Y (const_mul_20_8_n_11));
  AOI2BB1X1 const_mul_20_8_g196(.A0N (in1[2]), .A1N (in1[0]), .B0
       (const_mul_20_8_n_6), .Y (out1[3]));
  NAND2X1 const_mul_20_8_g197(.A (in1[4]), .B (in1[2]), .Y
       (const_mul_20_8_n_9));
  INVX1 const_mul_20_8_g198(.A (const_mul_20_8_n_7), .Y
       (const_mul_20_8_n_8));
  NAND2X1 const_mul_20_8_g199(.A (const_mul_20_8_n_4), .B
       (const_mul_20_8_n_5), .Y (const_mul_20_8_n_7));
  NOR2X6 const_mul_20_8_g200(.A (const_mul_20_8_n_2), .B
       (const_mul_20_8_n_5), .Y (const_mul_20_8_n_6));
  CLKINVX4 const_mul_20_8_g201(.A (in1[2]), .Y (const_mul_20_8_n_5));
  INVX1 const_mul_20_8_g202(.A (in1[4]), .Y (const_mul_20_8_n_4));
  INVX1 const_mul_20_8_g203(.A (in1[3]), .Y (const_mul_20_8_n_3));
  CLKINVX12 const_mul_20_8_g204(.A (in1[0]), .Y (const_mul_20_8_n_2));
  XNOR2X1 const_mul_20_8_g2(.A (const_mul_20_8_n_13), .B
       (const_mul_20_8_n_31), .Y (out1[5]));
  INVXL const_mul_20_8_fopt(.A (const_mul_20_8_n_32), .Y
       (const_mul_20_8_n_30));
  INVXL const_mul_20_8_fopt205(.A (const_mul_20_8_n_32), .Y
       (const_mul_20_8_n_31));
  INVXL const_mul_20_8_fopt206(.A (const_mul_20_8_n_16), .Y
       (const_mul_20_8_n_32));
  INVXL const_mul_20_8_fopt207(.A (const_mul_20_8_n_16), .Y
       (const_mul_20_8_n_33));
  INVXL const_mul_20_8_fopt208(.A (const_mul_20_8_n_16), .Y
       (const_mul_20_8_n_34));
endmodule


