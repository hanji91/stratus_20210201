`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:48 KST (Dec  7 2020 09:42:48 UTC)

module st_weight_addr_gen_MuxAdd2i1u16u16u1_1(in3, in2, ctrl1, out1);
  input [15:0] in3, in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in3, in2;
  wire ctrl1;
  wire [15:0] out1;
  wire inc_add_26_2_n_0, inc_add_26_2_n_1, inc_add_26_2_n_2,
       inc_add_26_2_n_3, inc_add_26_2_n_4, inc_add_26_2_n_5,
       inc_add_26_2_n_6, inc_add_26_2_n_7;
  wire inc_add_26_2_n_8, inc_add_26_2_n_9, inc_add_26_2_n_10,
       inc_add_26_2_n_11, inc_add_26_2_n_12, inc_add_26_2_n_13,
       inc_add_26_2_n_14, inc_add_26_2_n_15;
  wire inc_add_26_2_n_16, inc_add_26_2_n_17, inc_add_26_2_n_18,
       inc_add_26_2_n_19, inc_add_26_2_n_20, inc_add_26_2_n_21,
       inc_add_26_2_n_22, inc_add_26_2_n_25;
  wire inc_add_26_2_n_26, inc_add_26_2_n_27, inc_add_26_2_n_28,
       inc_add_26_2_n_29, inc_add_26_2_n_30, inc_add_26_2_n_31,
       inc_add_26_2_n_32, inc_add_26_2_n_33;
  wire inc_add_26_2_n_34, inc_add_26_2_n_36, inc_add_26_2_n_37,
       inc_add_26_2_n_38, inc_add_26_2_n_39, inc_add_26_2_n_41,
       inc_add_26_2_n_42, inc_add_26_2_n_43;
  wire inc_add_26_2_n_44, inc_add_26_2_n_45, inc_add_26_2_n_46,
       inc_add_26_2_n_80, inc_add_26_2_n_81, inc_add_26_2_n_82,
       inc_add_26_2_n_87, inc_add_26_2_n_89;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32;
  CLKINVX6 g18(.A (ctrl1), .Y (n_17));
  OAI2BB1XL g164(.A0N (n_0), .A1N (n_26), .B0 (n_15), .Y (out1[9]));
  OAI2BB1XL g165(.A0N (n_0), .A1N (n_32), .B0 (n_6), .Y (out1[15]));
  OAI2BB1XL g166(.A0N (n_0), .A1N (n_29), .B0 (n_10), .Y (out1[12]));
  OAI2BB1X1 g167(.A0N (n_0), .A1N (n_19), .B0 (n_14), .Y (out1[2]));
  OAI21X1 g168(.A0 (n_17), .A1 (in2[0]), .B0 (n_16), .Y (out1[0]));
  OAI2BB1X1 g169(.A0N (n_0), .A1N (n_18), .B0 (n_13), .Y (out1[1]));
  OAI2BB1X1 g170(.A0N (n_0), .A1N (n_25), .B0 (n_9), .Y (out1[8]));
  OAI2BB1XL g171(.A0N (n_0), .A1N (n_28), .B0 (n_5), .Y (out1[11]));
  OAI2BB1XL g172(.A0N (n_0), .A1N (n_27), .B0 (n_1), .Y (out1[10]));
  OAI2BB1X1 g173(.A0N (n_0), .A1N (n_23), .B0 (n_8), .Y (out1[6]));
  OAI2BB1XL g174(.A0N (n_0), .A1N (n_31), .B0 (n_4), .Y (out1[14]));
  OAI2BB1XL g175(.A0N (n_0), .A1N (n_30), .B0 (n_3), .Y (out1[13]));
  OAI2BB1X1 g176(.A0N (n_0), .A1N (n_24), .B0 (n_7), .Y (out1[7]));
  OAI2BB1X1 g177(.A0N (n_0), .A1N (n_22), .B0 (n_11), .Y (out1[5]));
  OAI2BB1XL g178(.A0N (n_0), .A1N (n_21), .B0 (n_2), .Y (out1[4]));
  OAI2BB1XL g179(.A0N (n_0), .A1N (n_20), .B0 (n_12), .Y (out1[3]));
  NAND2X1 g180(.A (in3[0]), .B (n_17), .Y (n_16));
  NAND2XL g181(.A (in3[9]), .B (n_17), .Y (n_15));
  NAND2X1 g182(.A (in3[2]), .B (n_17), .Y (n_14));
  NAND2X1 g183(.A (in3[1]), .B (n_17), .Y (n_13));
  NAND2X1 g184(.A (in3[3]), .B (n_17), .Y (n_12));
  NAND2X1 g185(.A (in3[5]), .B (n_17), .Y (n_11));
  NAND2XL g186(.A (in3[12]), .B (n_17), .Y (n_10));
  NAND2X1 g187(.A (in3[8]), .B (n_17), .Y (n_9));
  NAND2X1 g188(.A (in3[6]), .B (n_17), .Y (n_8));
  NAND2X1 g189(.A (in3[7]), .B (n_17), .Y (n_7));
  NAND2XL g190(.A (in3[15]), .B (n_17), .Y (n_6));
  NAND2XL g191(.A (in3[11]), .B (n_17), .Y (n_5));
  NAND2XL g192(.A (in3[14]), .B (n_17), .Y (n_4));
  NAND2XL g193(.A (in3[13]), .B (n_17), .Y (n_3));
  NAND2X1 g194(.A (in3[4]), .B (n_17), .Y (n_2));
  NAND2XL g195(.A (in3[10]), .B (n_17), .Y (n_1));
  INVX1 g196(.A (n_17), .Y (n_0));
  MXI2XL inc_add_26_2_g171(.A (inc_add_26_2_n_12), .B (in2[9]), .S0
       (inc_add_26_2_n_44), .Y (n_26));
  MXI2XL inc_add_26_2_g172(.A (in2[5]), .B (inc_add_26_2_n_5), .S0
       (inc_add_26_2_n_38), .Y (n_22));
  MXI2XL inc_add_26_2_g173(.A (inc_add_26_2_n_7), .B (in2[3]), .S0
       (inc_add_26_2_n_34), .Y (n_20));
  MXI2XL inc_add_26_2_g174(.A (inc_add_26_2_n_6), .B (in2[11]), .S0
       (inc_add_26_2_n_41), .Y (n_28));
  MXI2XL inc_add_26_2_g175(.A (inc_add_26_2_n_11), .B (in2[13]), .S0
       (inc_add_26_2_n_42), .Y (n_30));
  MXI2XL inc_add_26_2_g176(.A (inc_add_26_2_n_15), .B (in2[15]), .S0
       (inc_add_26_2_n_39), .Y (n_32));
  MXI2XL inc_add_26_2_g177(.A (inc_add_26_2_n_10), .B (in2[14]), .S0
       (inc_add_26_2_n_43), .Y (n_31));
  MXI2XL inc_add_26_2_g178(.A (inc_add_26_2_n_1), .B (in2[12]), .S0
       (inc_add_26_2_n_46), .Y (n_29));
  MXI2XL inc_add_26_2_g179(.A (inc_add_26_2_n_3), .B (in2[10]), .S0
       (inc_add_26_2_n_45), .Y (n_27));
  MXI2XL inc_add_26_2_g180(.A (in2[8]), .B (inc_add_26_2_n_9), .S0
       (inc_add_26_2_n_37), .Y (n_25));
  MXI2XL inc_add_26_2_g181(.A (in2[7]), .B (inc_add_26_2_n_13), .S0
       (inc_add_26_2_n_36), .Y (n_24));
  MXI2XL inc_add_26_2_g182(.A (in2[6]), .B (inc_add_26_2_n_8), .S0
       (inc_add_26_2_n_0), .Y (n_23));
  NOR2X1 inc_add_26_2_g183(.A (inc_add_26_2_n_89), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_46));
  NOR2X1 inc_add_26_2_g184(.A (inc_add_26_2_n_80), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_45));
  NOR2X1 inc_add_26_2_g185(.A (inc_add_26_2_n_9), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_44));
  NOR2BX1 inc_add_26_2_g186(.AN (inc_add_26_2_n_32), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_43));
  NOR2X1 inc_add_26_2_g187(.A (inc_add_26_2_n_31), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_42));
  NOR2X1 inc_add_26_2_g188(.A (inc_add_26_2_n_27), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_41));
  MXI2XL inc_add_26_2_g189(.A (inc_add_26_2_n_2), .B (in2[4]), .S0
       (inc_add_26_2_n_33), .Y (n_21));
  NOR2X1 inc_add_26_2_g190(.A (inc_add_26_2_n_30), .B
       (inc_add_26_2_n_37), .Y (inc_add_26_2_n_39));
  NAND2X1 inc_add_26_2_g191(.A (in2[4]), .B (inc_add_26_2_n_33), .Y
       (inc_add_26_2_n_38));
  NAND2X4 inc_add_26_2_g193(.A (inc_add_26_2_n_26), .B
       (inc_add_26_2_n_33), .Y (inc_add_26_2_n_37));
  NAND2X1 inc_add_26_2_g194(.A (inc_add_26_2_n_29), .B
       (inc_add_26_2_n_33), .Y (inc_add_26_2_n_36));
  MXI2XL inc_add_26_2_g195(.A (in2[2]), .B (inc_add_26_2_n_4), .S0
       (inc_add_26_2_n_16), .Y (n_19));
  NOR2X1 inc_add_26_2_g196(.A (inc_add_26_2_n_4), .B
       (inc_add_26_2_n_16), .Y (inc_add_26_2_n_34));
  NOR2X4 inc_add_26_2_g197(.A (inc_add_26_2_n_18), .B
       (inc_add_26_2_n_16), .Y (inc_add_26_2_n_33));
  NOR2X1 inc_add_26_2_g198(.A (inc_add_26_2_n_22), .B
       (inc_add_26_2_n_87), .Y (inc_add_26_2_n_32));
  NAND2X1 inc_add_26_2_g199(.A (in2[12]), .B (inc_add_26_2_n_25), .Y
       (inc_add_26_2_n_31));
  NAND2X1 inc_add_26_2_g200(.A (inc_add_26_2_n_28), .B
       (inc_add_26_2_n_25), .Y (inc_add_26_2_n_30));
  NOR2X1 inc_add_26_2_g201(.A (inc_add_26_2_n_8), .B
       (inc_add_26_2_n_21), .Y (inc_add_26_2_n_29));
  NOR2X1 inc_add_26_2_g202(.A (inc_add_26_2_n_10), .B
       (inc_add_26_2_n_22), .Y (inc_add_26_2_n_28));
  OR2XL inc_add_26_2_g203(.A (inc_add_26_2_n_3), .B
       (inc_add_26_2_n_81), .Y (inc_add_26_2_n_27));
  NOR2X4 inc_add_26_2_g204(.A (inc_add_26_2_n_19), .B
       (inc_add_26_2_n_21), .Y (inc_add_26_2_n_26));
  NOR2X6 inc_add_26_2_g206(.A (inc_add_26_2_n_17), .B
       (inc_add_26_2_n_20), .Y (inc_add_26_2_n_25));
  MXI2XL inc_add_26_2_g207(.A (inc_add_26_2_n_14), .B (in2[1]), .S0
       (in2[0]), .Y (n_18));
  NAND2X1 inc_add_26_2_g208(.A (in2[13]), .B (in2[12]), .Y
       (inc_add_26_2_n_22));
  NAND2X4 inc_add_26_2_g210(.A (in2[5]), .B (in2[4]), .Y
       (inc_add_26_2_n_21));
  NAND2X4 inc_add_26_2_g211(.A (in2[11]), .B (in2[10]), .Y
       (inc_add_26_2_n_20));
  NAND2X4 inc_add_26_2_g212(.A (in2[7]), .B (in2[6]), .Y
       (inc_add_26_2_n_19));
  NAND2X4 inc_add_26_2_g213(.A (in2[3]), .B (in2[2]), .Y
       (inc_add_26_2_n_18));
  NAND2X8 inc_add_26_2_g214(.A (in2[9]), .B (in2[8]), .Y
       (inc_add_26_2_n_17));
  NAND2X4 inc_add_26_2_g215(.A (in2[1]), .B (in2[0]), .Y
       (inc_add_26_2_n_16));
  INVXL inc_add_26_2_g216(.A (in2[15]), .Y (inc_add_26_2_n_15));
  INVX1 inc_add_26_2_g217(.A (in2[1]), .Y (inc_add_26_2_n_14));
  INVX1 inc_add_26_2_g218(.A (in2[7]), .Y (inc_add_26_2_n_13));
  INVXL inc_add_26_2_g219(.A (in2[9]), .Y (inc_add_26_2_n_12));
  INVXL inc_add_26_2_g220(.A (in2[13]), .Y (inc_add_26_2_n_11));
  INVX1 inc_add_26_2_g221(.A (in2[14]), .Y (inc_add_26_2_n_10));
  INVX1 inc_add_26_2_g222(.A (in2[8]), .Y (inc_add_26_2_n_9));
  INVX1 inc_add_26_2_g223(.A (in2[6]), .Y (inc_add_26_2_n_8));
  INVXL inc_add_26_2_g224(.A (in2[3]), .Y (inc_add_26_2_n_7));
  INVXL inc_add_26_2_g225(.A (in2[11]), .Y (inc_add_26_2_n_6));
  INVX1 inc_add_26_2_g226(.A (in2[5]), .Y (inc_add_26_2_n_5));
  INVX1 inc_add_26_2_g227(.A (in2[2]), .Y (inc_add_26_2_n_4));
  INVX1 inc_add_26_2_g228(.A (in2[10]), .Y (inc_add_26_2_n_3));
  INVXL inc_add_26_2_g229(.A (in2[4]), .Y (inc_add_26_2_n_2));
  INVXL inc_add_26_2_g230(.A (in2[12]), .Y (inc_add_26_2_n_1));
  NAND2BX1 inc_add_26_2_g2(.AN (inc_add_26_2_n_21), .B
       (inc_add_26_2_n_33), .Y (inc_add_26_2_n_0));
  INVXL inc_add_26_2_fopt232(.A (inc_add_26_2_n_82), .Y
       (inc_add_26_2_n_80));
  INVXL inc_add_26_2_fopt233(.A (inc_add_26_2_n_82), .Y
       (inc_add_26_2_n_81));
  INVXL inc_add_26_2_fopt234(.A (inc_add_26_2_n_17), .Y
       (inc_add_26_2_n_82));
  CLKINVX2 inc_add_26_2_fopt236(.A (inc_add_26_2_n_25), .Y
       (inc_add_26_2_n_87));
  INVXL inc_add_26_2_fopt237(.A (inc_add_26_2_n_25), .Y
       (inc_add_26_2_n_89));
endmodule


