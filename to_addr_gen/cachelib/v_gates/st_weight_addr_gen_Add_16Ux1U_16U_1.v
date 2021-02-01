`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:43 KST (Dec  7 2020 09:42:43 UTC)

module st_weight_addr_gen_Add_16Ux1U_16U_1(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire in1;
  wire [15:0] out1;
  wire inc_add_23_2_n_1, inc_add_23_2_n_2, inc_add_23_2_n_4,
       inc_add_23_2_n_5, inc_add_23_2_n_6, inc_add_23_2_n_7,
       inc_add_23_2_n_8, inc_add_23_2_n_9;
  wire inc_add_23_2_n_10, inc_add_23_2_n_14, inc_add_23_2_n_15,
       inc_add_23_2_n_16, inc_add_23_2_n_17, inc_add_23_2_n_18,
       inc_add_23_2_n_19, inc_add_23_2_n_20;
  wire inc_add_23_2_n_21, inc_add_23_2_n_22, inc_add_23_2_n_23,
       inc_add_23_2_n_24, inc_add_23_2_n_25, inc_add_23_2_n_26,
       inc_add_23_2_n_27, inc_add_23_2_n_28;
  wire inc_add_23_2_n_29, inc_add_23_2_n_30, inc_add_23_2_n_31,
       inc_add_23_2_n_32, inc_add_23_2_n_33, inc_add_23_2_n_34,
       inc_add_23_2_n_36, inc_add_23_2_n_38;
  wire inc_add_23_2_n_39, inc_add_23_2_n_41, inc_add_23_2_n_42,
       inc_add_23_2_n_43, inc_add_23_2_n_44, inc_add_23_2_n_45,
       inc_add_23_2_n_46, inc_add_23_2_n_47;
  wire inc_add_23_2_n_48, inc_add_23_2_n_49, inc_add_23_2_n_79,
       inc_add_23_2_n_80, inc_add_23_2_n_84, inc_add_23_2_n_86,
       inc_add_23_2_n_89, inc_add_23_2_n_90;
  wire inc_add_23_2_n_91, inc_add_23_2_n_93, inc_add_23_2_n_94,
       inc_add_23_2_n_95, inc_add_23_2_n_102, inc_add_23_2_n_103,
       inc_add_23_2_n_104, inc_add_23_2_n_106;
  wire inc_add_23_2_n_107, inc_add_23_2_n_108, inc_add_23_2_n_109;
  MXI2XL inc_add_23_2_g171(.A (inc_add_23_2_n_10), .B (in2[9]), .S0
       (inc_add_23_2_n_47), .Y (out1[9]));
  MXI2XL inc_add_23_2_g172(.A (inc_add_23_2_n_9), .B (in2[5]), .S0
       (inc_add_23_2_n_41), .Y (out1[5]));
  MXI2XL inc_add_23_2_g173(.A (inc_add_23_2_n_16), .B (in2[13]), .S0
       (inc_add_23_2_n_45), .Y (out1[13]));
  MXI2XL inc_add_23_2_g174(.A (inc_add_23_2_n_94), .B
       (inc_add_23_2_n_93), .S0 (inc_add_23_2_n_44), .Y (out1[11]));
  MXI2XL inc_add_23_2_g175(.A (inc_add_23_2_n_17), .B (in2[3]), .S0
       (inc_add_23_2_n_2), .Y (out1[3]));
  MXI2XL inc_add_23_2_g176(.A (inc_add_23_2_n_18), .B (in2[15]), .S0
       (inc_add_23_2_n_43), .Y (out1[15]));
  MXI2XL inc_add_23_2_g177(.A (inc_add_23_2_n_15), .B (in2[14]), .S0
       (inc_add_23_2_n_46), .Y (out1[14]));
  MXI2XL inc_add_23_2_g178(.A (inc_add_23_2_n_4), .B (in2[12]), .S0
       (inc_add_23_2_n_49), .Y (out1[12]));
  MXI2XL inc_add_23_2_g179(.A (inc_add_23_2_n_5), .B (in2[10]), .S0
       (inc_add_23_2_n_48), .Y (out1[10]));
  MXI2XL inc_add_23_2_g180(.A (inc_add_23_2_n_7), .B (in2[8]), .S0
       (inc_add_23_2_n_80), .Y (out1[8]));
  MXI2XL inc_add_23_2_g181(.A (inc_add_23_2_n_90), .B
       (inc_add_23_2_n_89), .S0 (inc_add_23_2_n_38), .Y (out1[7]));
  MXI2XL inc_add_23_2_g182(.A (inc_add_23_2_n_106), .B
       (inc_add_23_2_n_107), .S0 (inc_add_23_2_n_42), .Y (out1[6]));
  NOR2X1 inc_add_23_2_g183(.A (inc_add_23_2_n_84), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_49));
  NOR2X1 inc_add_23_2_g184(.A (inc_add_23_2_n_25), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_48));
  NOR2X1 inc_add_23_2_g185(.A (inc_add_23_2_n_7), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_47));
  NOR2BX1 inc_add_23_2_g186(.AN (inc_add_23_2_n_33), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_46));
  NOR2X1 inc_add_23_2_g187(.A (inc_add_23_2_n_32), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_45));
  NOR2X1 inc_add_23_2_g188(.A (inc_add_23_2_n_28), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_44));
  NOR2X1 inc_add_23_2_g190(.A (inc_add_23_2_n_31), .B
       (inc_add_23_2_n_79), .Y (inc_add_23_2_n_43));
  NOR2X1 inc_add_23_2_g191(.A (inc_add_23_2_n_102), .B
       (inc_add_23_2_n_86), .Y (inc_add_23_2_n_42));
  NOR2X1 inc_add_23_2_g192(.A (inc_add_23_2_n_8), .B
       (inc_add_23_2_n_86), .Y (inc_add_23_2_n_41));
  NOR2X2 inc_add_23_2_g194(.A (inc_add_23_2_n_1), .B
       (inc_add_23_2_n_36), .Y (inc_add_23_2_n_39));
  NOR2X1 inc_add_23_2_g195(.A (inc_add_23_2_n_30), .B
       (inc_add_23_2_n_86), .Y (inc_add_23_2_n_38));
  MXI2XL inc_add_23_2_g196(.A (inc_add_23_2_n_6), .B (in2[2]), .S0
       (inc_add_23_2_n_34), .Y (out1[2]));
  NAND2X4 inc_add_23_2_g199(.A (inc_add_23_2_n_23), .B
       (inc_add_23_2_n_34), .Y (inc_add_23_2_n_36));
  MXI2XL inc_add_23_2_g201(.A (in2[1]), .B (inc_add_23_2_n_14), .S0
       (inc_add_23_2_n_19), .Y (out1[1]));
  NOR2X6 inc_add_23_2_g202(.A (inc_add_23_2_n_14), .B
       (inc_add_23_2_n_19), .Y (inc_add_23_2_n_34));
  NOR2X1 inc_add_23_2_g203(.A (inc_add_23_2_n_21), .B
       (inc_add_23_2_n_27), .Y (inc_add_23_2_n_33));
  OR2XL inc_add_23_2_g204(.A (inc_add_23_2_n_4), .B
       (inc_add_23_2_n_27), .Y (inc_add_23_2_n_32));
  OR2XL inc_add_23_2_g205(.A (inc_add_23_2_n_29), .B
       (inc_add_23_2_n_27), .Y (inc_add_23_2_n_31));
  OR2XL inc_add_23_2_g206(.A (inc_add_23_2_n_108), .B
       (inc_add_23_2_n_103), .Y (inc_add_23_2_n_30));
  OR2XL inc_add_23_2_g207(.A (inc_add_23_2_n_15), .B
       (inc_add_23_2_n_21), .Y (inc_add_23_2_n_29));
  OR2XL inc_add_23_2_g208(.A (inc_add_23_2_n_5), .B
       (inc_add_23_2_n_25), .Y (inc_add_23_2_n_28));
  NAND2X2 inc_add_23_2_g210(.A (inc_add_23_2_n_22), .B
       (inc_add_23_2_n_24), .Y (inc_add_23_2_n_27));
  NAND2X6 inc_add_23_2_g213(.A (in2[5]), .B (in2[4]), .Y
       (inc_add_23_2_n_26));
  INVX1 inc_add_23_2_g214(.A (inc_add_23_2_n_24), .Y
       (inc_add_23_2_n_25));
  NOR2X2 inc_add_23_2_g215(.A (inc_add_23_2_n_10), .B
       (inc_add_23_2_n_7), .Y (inc_add_23_2_n_24));
  NOR2X4 inc_add_23_2_g216(.A (inc_add_23_2_n_17), .B
       (inc_add_23_2_n_6), .Y (inc_add_23_2_n_23));
  NOR2X2 inc_add_23_2_g217(.A (inc_add_23_2_n_95), .B
       (inc_add_23_2_n_5), .Y (inc_add_23_2_n_22));
  NAND2X1 inc_add_23_2_g218(.A (in2[13]), .B (in2[12]), .Y
       (inc_add_23_2_n_21));
  NOR2X2 inc_add_23_2_g219(.A (inc_add_23_2_n_91), .B
       (inc_add_23_2_n_109), .Y (inc_add_23_2_n_20));
  NAND2X8 inc_add_23_2_g220(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_19));
  INVXL inc_add_23_2_g221(.A (in2[15]), .Y (inc_add_23_2_n_18));
  CLKINVX2 inc_add_23_2_g222(.A (in2[3]), .Y (inc_add_23_2_n_17));
  INVXL inc_add_23_2_g224(.A (in2[13]), .Y (inc_add_23_2_n_16));
  INVX1 inc_add_23_2_g225(.A (in2[14]), .Y (inc_add_23_2_n_15));
  CLKINVX2 inc_add_23_2_g226(.A (in2[1]), .Y (inc_add_23_2_n_14));
  INVX1 inc_add_23_2_g230(.A (in2[9]), .Y (inc_add_23_2_n_10));
  INVXL inc_add_23_2_g231(.A (in2[5]), .Y (inc_add_23_2_n_9));
  INVX1 inc_add_23_2_g232(.A (in2[4]), .Y (inc_add_23_2_n_8));
  INVX1 inc_add_23_2_g233(.A (in2[8]), .Y (inc_add_23_2_n_7));
  CLKINVX2 inc_add_23_2_g234(.A (in2[2]), .Y (inc_add_23_2_n_6));
  INVX1 inc_add_23_2_g235(.A (in2[10]), .Y (inc_add_23_2_n_5));
  INVX1 inc_add_23_2_g236(.A (in2[12]), .Y (inc_add_23_2_n_4));
  MXI2XL inc_add_23_2_g2(.A (in2[4]), .B (inc_add_23_2_n_8), .S0
       (inc_add_23_2_n_86), .Y (out1[4]));
  NOR2BX1 inc_add_23_2_g237(.AN (inc_add_23_2_n_34), .B
       (inc_add_23_2_n_6), .Y (inc_add_23_2_n_2));
  NAND2BX1 inc_add_23_2_g238(.AN (inc_add_23_2_n_26), .B
       (inc_add_23_2_n_20), .Y (inc_add_23_2_n_1));
  XOR2XL inc_add_23_2_g239(.A (in2[0]), .B (in1), .Y (out1[0]));
  INVXL inc_add_23_2_fopt(.A (inc_add_23_2_n_79), .Y
       (inc_add_23_2_n_80));
  CLKINVX3 inc_add_23_2_fopt240(.A (inc_add_23_2_n_39), .Y
       (inc_add_23_2_n_79));
  BUFX2 inc_add_23_2_fopt241(.A (inc_add_23_2_n_27), .Y
       (inc_add_23_2_n_84));
  BUFX3 inc_add_23_2_fopt242(.A (inc_add_23_2_n_36), .Y
       (inc_add_23_2_n_86));
  INVXL inc_add_23_2_fopt243(.A (inc_add_23_2_n_90), .Y
       (inc_add_23_2_n_89));
  INVXL inc_add_23_2_fopt244(.A (in2[7]), .Y (inc_add_23_2_n_90));
  CLKINVX3 inc_add_23_2_fopt245(.A (in2[7]), .Y (inc_add_23_2_n_91));
  INVXL inc_add_23_2_fopt246(.A (inc_add_23_2_n_94), .Y
       (inc_add_23_2_n_93));
  INVXL inc_add_23_2_fopt247(.A (in2[11]), .Y (inc_add_23_2_n_94));
  CLKINVX2 inc_add_23_2_fopt248(.A (in2[11]), .Y (inc_add_23_2_n_95));
  INVXL inc_add_23_2_fopt252(.A (inc_add_23_2_n_104), .Y
       (inc_add_23_2_n_102));
  INVXL inc_add_23_2_fopt253(.A (inc_add_23_2_n_104), .Y
       (inc_add_23_2_n_103));
  INVXL inc_add_23_2_fopt254(.A (inc_add_23_2_n_26), .Y
       (inc_add_23_2_n_104));
  INVXL inc_add_23_2_fopt255(.A (inc_add_23_2_n_107), .Y
       (inc_add_23_2_n_106));
  INVXL inc_add_23_2_fopt256(.A (inc_add_23_2_n_108), .Y
       (inc_add_23_2_n_107));
  INVXL inc_add_23_2_fopt257(.A (in2[6]), .Y (inc_add_23_2_n_108));
  CLKINVX3 inc_add_23_2_fopt258(.A (in2[6]), .Y (inc_add_23_2_n_109));
endmodule


