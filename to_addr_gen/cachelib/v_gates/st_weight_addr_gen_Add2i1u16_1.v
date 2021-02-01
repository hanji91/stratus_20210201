`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:46 KST (Dec  7 2020 09:42:46 UTC)

module st_weight_addr_gen_Add2i1u16_1(in1, out1);
  input [15:0] in1;
  output [15:0] out1;
  wire [15:0] in1;
  wire [15:0] out1;
  wire inc_add_21_2_n_5, inc_add_21_2_n_6, inc_add_21_2_n_7,
       inc_add_21_2_n_8, inc_add_21_2_n_9, inc_add_21_2_n_10,
       inc_add_21_2_n_11, inc_add_21_2_n_12;
  wire inc_add_21_2_n_13, inc_add_21_2_n_14, inc_add_21_2_n_15,
       inc_add_21_2_n_16, inc_add_21_2_n_17, inc_add_21_2_n_18,
       inc_add_21_2_n_19, inc_add_21_2_n_20;
  wire inc_add_21_2_n_21, inc_add_21_2_n_22, inc_add_21_2_n_23,
       inc_add_21_2_n_24, inc_add_21_2_n_25, inc_add_21_2_n_26,
       inc_add_21_2_n_27, inc_add_21_2_n_28;
  wire inc_add_21_2_n_29, inc_add_21_2_n_30, inc_add_21_2_n_31,
       inc_add_21_2_n_32, inc_add_21_2_n_33, inc_add_21_2_n_35,
       inc_add_21_2_n_36, inc_add_21_2_n_38;
  wire inc_add_21_2_n_39, inc_add_21_2_n_40, inc_add_21_2_n_41,
       inc_add_21_2_n_42, inc_add_21_2_n_43, inc_add_21_2_n_44,
       inc_add_21_2_n_72, inc_add_21_2_n_75;
  wire inc_add_21_2_n_76;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  MXI2XL inc_add_21_2_g171(.A (inc_add_21_2_n_16), .B (in1[9]), .S0
       (inc_add_21_2_n_43), .Y (out1[9]));
  MXI2XL inc_add_21_2_g174(.A (inc_add_21_2_n_11), .B (in1[11]), .S0
       (inc_add_21_2_n_40), .Y (out1[11]));
  MXI2XL inc_add_21_2_g175(.A (inc_add_21_2_n_15), .B (in1[13]), .S0
       (inc_add_21_2_n_41), .Y (out1[13]));
  MXI2XL inc_add_21_2_g176(.A (inc_add_21_2_n_17), .B (in1[15]), .S0
       (inc_add_21_2_n_39), .Y (out1[15]));
  MXI2XL inc_add_21_2_g177(.A (inc_add_21_2_n_14), .B (in1[14]), .S0
       (inc_add_21_2_n_42), .Y (out1[14]));
  MXI2XL inc_add_21_2_g178(.A (inc_add_21_2_n_8), .B (in1[12]), .S0
       (inc_add_21_2_n_6), .Y (out1[12]));
  MXI2XL inc_add_21_2_g179(.A (inc_add_21_2_n_9), .B (in1[10]), .S0
       (inc_add_21_2_n_44), .Y (out1[10]));
  MXI2XL inc_add_21_2_g180(.A (inc_add_21_2_n_13), .B (in1[8]), .S0
       (inc_add_21_2_n_76), .Y (out1[8]));
  MXI2XL inc_add_21_2_g182(.A (inc_add_21_2_n_12), .B (in1[6]), .S0
       (inc_add_21_2_n_7), .Y (out1[6]));
  NOR2X1 inc_add_21_2_g184(.A (inc_add_21_2_n_19), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_44));
  NOR2X1 inc_add_21_2_g185(.A (inc_add_21_2_n_13), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_43));
  NOR2X1 inc_add_21_2_g186(.A (inc_add_21_2_n_5), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_42));
  NOR2X1 inc_add_21_2_g187(.A (inc_add_21_2_n_31), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_41));
  NOR2X1 inc_add_21_2_g188(.A (inc_add_21_2_n_27), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_40));
  NOR2X1 inc_add_21_2_g190(.A (inc_add_21_2_n_30), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_39));
  NAND2X1 inc_add_21_2_g191(.A (in1[4]), .B (inc_add_21_2_n_32), .Y
       (inc_add_21_2_n_38));
  CLKAND2X3 inc_add_21_2_g194(.A (inc_add_21_2_n_26), .B
       (inc_add_21_2_n_32), .Y (inc_add_21_2_n_36));
  NAND2X1 inc_add_21_2_g195(.A (inc_add_21_2_n_29), .B
       (inc_add_21_2_n_32), .Y (inc_add_21_2_n_35));
  MXI2XL inc_add_21_2_g196(.A (in1[2]), .B (inc_add_21_2_n_10), .S0
       (inc_add_21_2_n_18), .Y (out1[2]));
  NOR2X1 inc_add_21_2_g197(.A (inc_add_21_2_n_10), .B
       (inc_add_21_2_n_18), .Y (inc_add_21_2_n_33));
  NOR2X6 inc_add_21_2_g199(.A (inc_add_21_2_n_20), .B
       (inc_add_21_2_n_18), .Y (inc_add_21_2_n_32));
  NAND2X1 inc_add_21_2_g201(.A (in1[12]), .B (inc_add_21_2_n_25), .Y
       (inc_add_21_2_n_31));
  NAND2X1 inc_add_21_2_g202(.A (inc_add_21_2_n_28), .B
       (inc_add_21_2_n_25), .Y (inc_add_21_2_n_30));
  NOR2X1 inc_add_21_2_g203(.A (inc_add_21_2_n_12), .B
       (inc_add_21_2_n_23), .Y (inc_add_21_2_n_29));
  NOR2X1 inc_add_21_2_g204(.A (inc_add_21_2_n_14), .B
       (inc_add_21_2_n_24), .Y (inc_add_21_2_n_28));
  OR2XL inc_add_21_2_g205(.A (inc_add_21_2_n_9), .B
       (inc_add_21_2_n_19), .Y (inc_add_21_2_n_27));
  NOR2X2 inc_add_21_2_g206(.A (inc_add_21_2_n_21), .B
       (inc_add_21_2_n_23), .Y (inc_add_21_2_n_26));
  NOR2X2 inc_add_21_2_g208(.A (inc_add_21_2_n_22), .B
       (inc_add_21_2_n_19), .Y (inc_add_21_2_n_25));
  NAND2X1 inc_add_21_2_g211(.A (in1[13]), .B (in1[12]), .Y
       (inc_add_21_2_n_24));
  NAND2X6 inc_add_21_2_g212(.A (in1[5]), .B (in1[4]), .Y
       (inc_add_21_2_n_23));
  NAND2X1 inc_add_21_2_g213(.A (in1[11]), .B (in1[10]), .Y
       (inc_add_21_2_n_22));
  NAND2X6 inc_add_21_2_g214(.A (in1[7]), .B (in1[6]), .Y
       (inc_add_21_2_n_21));
  NAND2X8 inc_add_21_2_g215(.A (in1[3]), .B (in1[2]), .Y
       (inc_add_21_2_n_20));
  NAND2X2 inc_add_21_2_g216(.A (in1[9]), .B (in1[8]), .Y
       (inc_add_21_2_n_19));
  NAND2X6 inc_add_21_2_g217(.A (in1[1]), .B (in1[0]), .Y
       (inc_add_21_2_n_18));
  INVXL inc_add_21_2_g218(.A (in1[15]), .Y (inc_add_21_2_n_17));
  INVXL inc_add_21_2_g221(.A (in1[9]), .Y (inc_add_21_2_n_16));
  INVXL inc_add_21_2_g222(.A (in1[13]), .Y (inc_add_21_2_n_15));
  INVX1 inc_add_21_2_g223(.A (in1[14]), .Y (inc_add_21_2_n_14));
  INVX1 inc_add_21_2_g224(.A (in1[8]), .Y (inc_add_21_2_n_13));
  INVX1 inc_add_21_2_g225(.A (in1[6]), .Y (inc_add_21_2_n_12));
  INVXL inc_add_21_2_g227(.A (in1[11]), .Y (inc_add_21_2_n_11));
  INVX1 inc_add_21_2_g229(.A (in1[2]), .Y (inc_add_21_2_n_10));
  INVX1 inc_add_21_2_g230(.A (in1[10]), .Y (inc_add_21_2_n_9));
  INVXL inc_add_21_2_g232(.A (in1[12]), .Y (inc_add_21_2_n_8));
  NOR2BX1 inc_add_21_2_g2(.AN (inc_add_21_2_n_32), .B
       (inc_add_21_2_n_23), .Y (inc_add_21_2_n_7));
  NOR2BX1 inc_add_21_2_g233(.AN (inc_add_21_2_n_25), .B
       (inc_add_21_2_n_75), .Y (inc_add_21_2_n_6));
  NAND2BX1 inc_add_21_2_g234(.AN (inc_add_21_2_n_24), .B
       (inc_add_21_2_n_25), .Y (inc_add_21_2_n_5));
  XOR2XL inc_add_21_2_g235(.A (in1[1]), .B (in1[0]), .Y (out1[1]));
  XNOR2X1 inc_add_21_2_g236(.A (in1[7]), .B (inc_add_21_2_n_35), .Y
       (out1[7]));
  XOR2XL inc_add_21_2_g237(.A (in1[3]), .B (inc_add_21_2_n_33), .Y
       (out1[3]));
  XNOR2X1 inc_add_21_2_g238(.A (in1[5]), .B (inc_add_21_2_n_38), .Y
       (out1[5]));
  CLKXOR2X1 inc_add_21_2_g239(.A (in1[4]), .B (inc_add_21_2_n_72), .Y
       (out1[4]));
  BUFX2 inc_add_21_2_fopt(.A (inc_add_21_2_n_32), .Y
       (inc_add_21_2_n_72));
  CLKINVX1 inc_add_21_2_fopt240(.A (inc_add_21_2_n_75), .Y
       (inc_add_21_2_n_76));
  CLKINVX6 inc_add_21_2_fopt241(.A (inc_add_21_2_n_36), .Y
       (inc_add_21_2_n_75));
endmodule

