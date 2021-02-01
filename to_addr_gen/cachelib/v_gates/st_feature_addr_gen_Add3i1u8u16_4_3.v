`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 18 2021 16:23:44 KST (Jan 18 2021 07:23:44 UTC)

module st_feature_addr_gen_Add3i1u8u16_4_3(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [15:0] out1;
  wire addinc_add_26_2_n_0, addinc_add_26_2_n_2, addinc_add_26_2_n_4,
       addinc_add_26_2_n_6, addinc_add_26_2_n_8, addinc_add_26_2_n_10,
       addinc_add_26_2_n_12, addinc_add_26_2_n_15;
  wire addinc_add_26_2_n_16, addinc_add_26_2_n_18,
       addinc_add_26_2_n_20, addinc_add_26_2_n_22,
       addinc_add_26_2_n_24, addinc_add_26_2_n_26, addinc_add_26_2_n_28;
  XNOR2X1 addinc_add_26_2_g205(.A (in2[15]), .B (addinc_add_26_2_n_28),
       .Y (out1[15]));
  XNOR2X1 addinc_add_26_2_g206(.A (in2[14]), .B (addinc_add_26_2_n_26),
       .Y (out1[14]));
  NAND2BX1 addinc_add_26_2_g207(.AN (addinc_add_26_2_n_26), .B
       (in2[14]), .Y (addinc_add_26_2_n_28));
  XNOR2X1 addinc_add_26_2_g208(.A (in2[13]), .B (addinc_add_26_2_n_24),
       .Y (out1[13]));
  NAND2BX1 addinc_add_26_2_g209(.AN (addinc_add_26_2_n_24), .B
       (in2[13]), .Y (addinc_add_26_2_n_26));
  XNOR2X1 addinc_add_26_2_g210(.A (in2[12]), .B (addinc_add_26_2_n_22),
       .Y (out1[12]));
  NAND2BX1 addinc_add_26_2_g211(.AN (addinc_add_26_2_n_22), .B
       (in2[12]), .Y (addinc_add_26_2_n_24));
  XNOR2X1 addinc_add_26_2_g212(.A (in2[11]), .B (addinc_add_26_2_n_20),
       .Y (out1[11]));
  NAND2BX1 addinc_add_26_2_g213(.AN (addinc_add_26_2_n_20), .B
       (in2[11]), .Y (addinc_add_26_2_n_22));
  XNOR2X1 addinc_add_26_2_g214(.A (in2[10]), .B (addinc_add_26_2_n_18),
       .Y (out1[10]));
  NAND2BX1 addinc_add_26_2_g215(.AN (addinc_add_26_2_n_18), .B
       (in2[10]), .Y (addinc_add_26_2_n_20));
  XNOR2X1 addinc_add_26_2_g216(.A (in2[9]), .B (addinc_add_26_2_n_16),
       .Y (out1[9]));
  NAND2BX1 addinc_add_26_2_g217(.AN (addinc_add_26_2_n_16), .B
       (in2[9]), .Y (addinc_add_26_2_n_18));
  XOR2XL addinc_add_26_2_g218(.A (in2[8]), .B (addinc_add_26_2_n_15),
       .Y (out1[8]));
  NAND2X1 addinc_add_26_2_g219(.A (in2[8]), .B (addinc_add_26_2_n_15),
       .Y (addinc_add_26_2_n_16));
  ADDFX1 addinc_add_26_2_g220(.A (addinc_add_26_2_n_12), .B (in1[7]),
       .CI (in2[7]), .CO (addinc_add_26_2_n_15), .S (out1[7]));
  ADDFX1 addinc_add_26_2_g221(.A (addinc_add_26_2_n_10), .B (in1[6]),
       .CI (in2[6]), .CO (addinc_add_26_2_n_12), .S (out1[6]));
  ADDFX1 addinc_add_26_2_g222(.A (addinc_add_26_2_n_8), .B (in1[5]),
       .CI (in2[5]), .CO (addinc_add_26_2_n_10), .S (out1[5]));
  ADDFX1 addinc_add_26_2_g223(.A (addinc_add_26_2_n_6), .B (in1[4]),
       .CI (in2[4]), .CO (addinc_add_26_2_n_8), .S (out1[4]));
  ADDFX1 addinc_add_26_2_g224(.A (addinc_add_26_2_n_4), .B (in1[3]),
       .CI (in2[3]), .CO (addinc_add_26_2_n_6), .S (out1[3]));
  ADDFX1 addinc_add_26_2_g225(.A (addinc_add_26_2_n_2), .B (in1[2]),
       .CI (in2[2]), .CO (addinc_add_26_2_n_4), .S (out1[2]));
  ADDFX1 addinc_add_26_2_g226(.A (addinc_add_26_2_n_0), .B (in1[1]),
       .CI (in2[1]), .CO (addinc_add_26_2_n_2), .S (out1[1]));
  XNOR2X1 addinc_add_26_2_g227(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  OR2X1 addinc_add_26_2_g228(.A (in2[0]), .B (in1[0]), .Y
       (addinc_add_26_2_n_0));
endmodule


