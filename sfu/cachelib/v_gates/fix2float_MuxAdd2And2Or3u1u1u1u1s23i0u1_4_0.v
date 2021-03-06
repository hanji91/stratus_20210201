`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:26:17 KST (Dec 28 2020 04:26:17 UTC)

module fix2float_MuxAdd2And2Or3u1u1u1u1s23i0u1_4_0(in6, in5, in4, in3,
     in2, ctrl1, out1);
  input [22:0] in6;
  input in5, in4, in3, in2, ctrl1;
  output [22:0] out1;
  wire [22:0] in6;
  wire in5, in4, in3, in2, ctrl1;
  wire [22:0] out1;
  wire asc004, inc_add_43_2_n_0, inc_add_43_2_n_1, inc_add_43_2_n_2,
       inc_add_43_2_n_3, inc_add_43_2_n_4, inc_add_43_2_n_5,
       inc_add_43_2_n_6;
  wire inc_add_43_2_n_7, inc_add_43_2_n_8, inc_add_43_2_n_11,
       inc_add_43_2_n_12, inc_add_43_2_n_14, inc_add_43_2_n_16,
       inc_add_43_2_n_18, inc_add_43_2_n_19;
  wire inc_add_43_2_n_21, inc_add_43_2_n_23, inc_add_43_2_n_24,
       inc_add_43_2_n_25, inc_add_43_2_n_29, inc_add_43_2_n_30,
       inc_add_43_2_n_31, inc_add_43_2_n_34;
  wire inc_add_43_2_n_35, inc_add_43_2_n_38, inc_add_43_2_n_39,
       inc_add_43_2_n_43, inc_add_43_2_n_48, n_0, n_1, n_2;
  wire n_3, n_4, n_5, n_6, n_7, n_8, n_9, n_10;
  wire n_11, n_12, n_13, n_14, n_15, n_16, n_17, n_18;
  wire n_19, n_20, n_21, n_22, n_23;
  NOR2BX1 g86(.AN (in5), .B (n_0), .Y (asc004));
  NOR3X1 g87(.A (in3), .B (in4), .C (in2), .Y (n_0));
  AND2XL g206(.A (ctrl1), .B (n_7), .Y (out1[6]));
  AND2XL g207(.A (ctrl1), .B (n_22), .Y (out1[21]));
  AND2XL g208(.A (ctrl1), .B (n_20), .Y (out1[19]));
  AND2XL g209(.A (ctrl1), .B (n_16), .Y (out1[15]));
  AND2XL g210(.A (ctrl1), .B (n_8), .Y (out1[7]));
  AND2XL g211(.A (ctrl1), .B (n_23), .Y (out1[22]));
  AND2XL g212(.A (ctrl1), .B (n_15), .Y (out1[14]));
  AND2XL g213(.A (ctrl1), .B (n_6), .Y (out1[5]));
  AND2XL g214(.A (ctrl1), .B (n_5), .Y (out1[4]));
  AND2XL g215(.A (ctrl1), .B (n_19), .Y (out1[18]));
  AND2XL g216(.A (ctrl1), .B (n_14), .Y (out1[13]));
  AND2XL g217(.A (ctrl1), .B (n_18), .Y (out1[17]));
  AND2XL g218(.A (ctrl1), .B (n_3), .Y (out1[2]));
  AND2XL g219(.A (ctrl1), .B (n_13), .Y (out1[12]));
  AND2XL g220(.A (ctrl1), .B (n_2), .Y (out1[1]));
  AND2XL g221(.A (ctrl1), .B (n_1), .Y (out1[0]));
  AND2XL g222(.A (ctrl1), .B (n_21), .Y (out1[20]));
  AND2XL g223(.A (ctrl1), .B (n_4), .Y (out1[3]));
  AND2XL g224(.A (ctrl1), .B (n_12), .Y (out1[11]));
  AND2XL g225(.A (ctrl1), .B (n_11), .Y (out1[10]));
  AND2XL g226(.A (ctrl1), .B (n_17), .Y (out1[16]));
  AND2XL g227(.A (ctrl1), .B (n_10), .Y (out1[9]));
  AND2XL g228(.A (ctrl1), .B (n_9), .Y (out1[8]));
  XNOR2X1 inc_add_43_2_g215(.A (in6[22]), .B (inc_add_43_2_n_48), .Y
       (n_23));
  XNOR2X1 inc_add_43_2_g216(.A (in6[21]), .B (inc_add_43_2_n_43), .Y
       (n_22));
  NAND3BXL inc_add_43_2_g217(.AN (inc_add_43_2_n_38), .B (in6[21]), .C
       (in6[20]), .Y (inc_add_43_2_n_48));
  XNOR2X1 inc_add_43_2_g218(.A (in6[19]), .B (inc_add_43_2_n_39), .Y
       (n_20));
  XNOR2X1 inc_add_43_2_g219(.A (in6[17]), .B (inc_add_43_2_n_35), .Y
       (n_18));
  XNOR2X1 inc_add_43_2_g220(.A (in6[20]), .B (inc_add_43_2_n_38), .Y
       (n_21));
  XNOR2X1 inc_add_43_2_g221(.A (in6[15]), .B (inc_add_43_2_n_31), .Y
       (n_16));
  NAND2BX1 inc_add_43_2_g222(.AN (inc_add_43_2_n_38), .B (in6[20]), .Y
       (inc_add_43_2_n_43));
  XNOR2X1 inc_add_43_2_g223(.A (in6[13]), .B (inc_add_43_2_n_24), .Y
       (n_14));
  XNOR2X1 inc_add_43_2_g224(.A (in6[11]), .B (inc_add_43_2_n_23), .Y
       (n_12));
  XOR2XL inc_add_43_2_g225(.A (in6[18]), .B (inc_add_43_2_n_34), .Y
       (n_19));
  NAND2X1 inc_add_43_2_g226(.A (in6[18]), .B (inc_add_43_2_n_34), .Y
       (inc_add_43_2_n_39));
  NAND4XL inc_add_43_2_g227(.A (in6[19]), .B (in6[18]), .C
       (inc_add_43_2_n_4), .D (inc_add_43_2_n_29), .Y
       (inc_add_43_2_n_38));
  MXI2XL inc_add_43_2_g228(.A (inc_add_43_2_n_30), .B
       (inc_add_43_2_n_29), .S0 (in6[16]), .Y (n_17));
  XNOR2X1 inc_add_43_2_g229(.A (in6[9]), .B (inc_add_43_2_n_0), .Y
       (n_10));
  NAND2X1 inc_add_43_2_g230(.A (in6[16]), .B (inc_add_43_2_n_29), .Y
       (inc_add_43_2_n_35));
  NOR2BX1 inc_add_43_2_g231(.AN (inc_add_43_2_n_4), .B
       (inc_add_43_2_n_30), .Y (inc_add_43_2_n_34));
  XNOR2X1 inc_add_43_2_g232(.A (in6[14]), .B (inc_add_43_2_n_25), .Y
       (n_15));
  XNOR2X1 inc_add_43_2_g233(.A (in6[7]), .B (inc_add_43_2_n_19), .Y
       (n_8));
  NAND2BX1 inc_add_43_2_g234(.AN (inc_add_43_2_n_25), .B (in6[14]), .Y
       (inc_add_43_2_n_31));
  INVX1 inc_add_43_2_g235(.A (inc_add_43_2_n_30), .Y
       (inc_add_43_2_n_29));
  NAND4XL inc_add_43_2_g236(.A (in6[14]), .B (inc_add_43_2_n_6), .C
       (in6[15]), .D (inc_add_43_2_n_1), .Y (inc_add_43_2_n_30));
  XNOR2X1 inc_add_43_2_g237(.A (in6[5]), .B (inc_add_43_2_n_16), .Y
       (n_6));
  XOR2XL inc_add_43_2_g238(.A (in6[12]), .B (inc_add_43_2_n_1), .Y
       (n_13));
  XOR2XL inc_add_43_2_g239(.A (in6[10]), .B (inc_add_43_2_n_21), .Y
       (n_11));
  NAND2X1 inc_add_43_2_g240(.A (inc_add_43_2_n_6), .B
       (inc_add_43_2_n_1), .Y (inc_add_43_2_n_25));
  NAND2X1 inc_add_43_2_g241(.A (in6[12]), .B (inc_add_43_2_n_1), .Y
       (inc_add_43_2_n_24));
  NAND2X1 inc_add_43_2_g242(.A (in6[10]), .B (inc_add_43_2_n_21), .Y
       (inc_add_43_2_n_23));
  XNOR2X1 inc_add_43_2_g243(.A (in6[8]), .B (inc_add_43_2_n_18), .Y
       (n_9));
  NOR2X1 inc_add_43_2_g245(.A (inc_add_43_2_n_3), .B
       (inc_add_43_2_n_18), .Y (inc_add_43_2_n_21));
  XOR2XL inc_add_43_2_g248(.A (in6[6]), .B (inc_add_43_2_n_2), .Y
       (n_7));
  NAND2X1 inc_add_43_2_g249(.A (in6[6]), .B (inc_add_43_2_n_2), .Y
       (inc_add_43_2_n_19));
  NAND3X1 inc_add_43_2_g251(.A (inc_add_43_2_n_2), .B (in6[7]), .C
       (in6[6]), .Y (inc_add_43_2_n_18));
  XNOR2X1 inc_add_43_2_g252(.A (in6[4]), .B (inc_add_43_2_n_14), .Y
       (n_5));
  NAND2BX1 inc_add_43_2_g255(.AN (inc_add_43_2_n_14), .B (in6[4]), .Y
       (inc_add_43_2_n_16));
  XNOR2X1 inc_add_43_2_g256(.A (in6[3]), .B (inc_add_43_2_n_12), .Y
       (n_4));
  NAND3X1 inc_add_43_2_g257(.A (in6[3]), .B (in6[2]), .C
       (inc_add_43_2_n_11), .Y (inc_add_43_2_n_14));
  XOR2XL inc_add_43_2_g258(.A (in6[2]), .B (inc_add_43_2_n_11), .Y
       (n_3));
  NAND2X1 inc_add_43_2_g259(.A (in6[2]), .B (inc_add_43_2_n_11), .Y
       (inc_add_43_2_n_12));
  ADDHX1 inc_add_43_2_g260(.A (in6[1]), .B (inc_add_43_2_n_8), .CO
       (inc_add_43_2_n_11), .S (n_2));
  ADDHX1 inc_add_43_2_g261(.A (in6[0]), .B (asc004), .CO
       (inc_add_43_2_n_8), .S (n_1));
  NAND3BXL inc_add_43_2_g262(.AN (inc_add_43_2_n_3), .B (in6[11]), .C
       (in6[10]), .Y (inc_add_43_2_n_7));
  AND2XL inc_add_43_2_g263(.A (in6[13]), .B (in6[12]), .Y
       (inc_add_43_2_n_6));
  NAND2X1 inc_add_43_2_g264(.A (in6[5]), .B (in6[4]), .Y
       (inc_add_43_2_n_5));
  AND2XL inc_add_43_2_g265(.A (in6[17]), .B (in6[16]), .Y
       (inc_add_43_2_n_4));
  NAND2X1 inc_add_43_2_g266(.A (in6[9]), .B (in6[8]), .Y
       (inc_add_43_2_n_3));
  NOR2X1 inc_add_43_2_g267(.A (inc_add_43_2_n_5), .B
       (inc_add_43_2_n_14), .Y (inc_add_43_2_n_2));
  NOR2X1 inc_add_43_2_g268(.A (inc_add_43_2_n_7), .B
       (inc_add_43_2_n_18), .Y (inc_add_43_2_n_1));
  NAND2BX1 inc_add_43_2_g2(.AN (inc_add_43_2_n_18), .B (in6[8]), .Y
       (inc_add_43_2_n_0));
endmodule


