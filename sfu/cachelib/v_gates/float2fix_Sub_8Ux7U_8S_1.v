`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 15:40:52 KST (Jan  7 2021 06:40:52 UTC)

module float2fix_Sub_8Ux7U_8S_1(in2, in1, out1);
  input [7:0] in2;
  input [6:0] in1;
  output [7:0] out1;
  wire [7:0] in2;
  wire [6:0] in1;
  wire [7:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3,
       sub_23_2_n_6, sub_23_2_n_8, sub_23_2_n_9, sub_23_2_n_10;
  wire sub_23_2_n_11, sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_14,
       sub_23_2_n_15, sub_23_2_n_16, sub_23_2_n_17, sub_23_2_n_18;
  wire sub_23_2_n_19, sub_23_2_n_20, sub_23_2_n_21, sub_23_2_n_22,
       sub_23_2_n_23, sub_23_2_n_24, sub_23_2_n_26, sub_23_2_n_27;
  wire sub_23_2_n_28, sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_31,
       sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34, sub_23_2_n_35;
  wire sub_23_2_n_36, sub_23_2_n_37, sub_23_2_n_38, sub_23_2_n_39,
       sub_23_2_n_40, sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_43;
  wire sub_23_2_n_44, sub_23_2_n_45, sub_23_2_n_46, sub_23_2_n_47,
       sub_23_2_n_48, sub_23_2_n_50, sub_23_2_n_69;
  MXI2XL sub_23_2_g171(.A (sub_23_2_n_11), .B (in2[7]), .S0
       (sub_23_2_n_48), .Y (out1[7]));
  MXI2XL sub_23_2_g172(.A (sub_23_2_n_31), .B (sub_23_2_n_32), .S0
       (sub_23_2_n_6), .Y (out1[6]));
  MXI2XL sub_23_2_g173(.A (sub_23_2_n_29), .B (sub_23_2_n_28), .S0
       (sub_23_2_n_50), .Y (out1[5]));
  NOR2X1 sub_23_2_g175(.A (sub_23_2_n_18), .B (sub_23_2_n_46), .Y
       (sub_23_2_n_50));
  MXI2XL sub_23_2_g176(.A (sub_23_2_n_26), .B (sub_23_2_n_27), .S0
       (sub_23_2_n_69), .Y (out1[4]));
  NOR2X1 sub_23_2_g178(.A (sub_23_2_n_40), .B (sub_23_2_n_45), .Y
       (sub_23_2_n_48));
  NOR2X1 sub_23_2_g179(.A (sub_23_2_n_33), .B (sub_23_2_n_43), .Y
       (sub_23_2_n_47));
  NOR2X1 sub_23_2_g180(.A (sub_23_2_n_15), .B (sub_23_2_n_43), .Y
       (sub_23_2_n_46));
  NOR2X1 sub_23_2_g181(.A (sub_23_2_n_38), .B (sub_23_2_n_43), .Y
       (sub_23_2_n_45));
  AOI21X1 sub_23_2_g182(.A0 (sub_23_2_n_19), .A1 (sub_23_2_n_41), .B0
       (sub_23_2_n_13), .Y (sub_23_2_n_44));
  NOR2X2 sub_23_2_g184(.A (sub_23_2_n_36), .B (sub_23_2_n_42), .Y
       (sub_23_2_n_43));
  NOR2X1 sub_23_2_g185(.A (sub_23_2_n_34), .B (sub_23_2_n_39), .Y
       (sub_23_2_n_42));
  INVX1 sub_23_2_g186(.A (sub_23_2_n_39), .Y (sub_23_2_n_41));
  OAI21X1 sub_23_2_g187(.A0 (sub_23_2_n_21), .A1 (sub_23_2_n_37), .B0
       (sub_23_2_n_17), .Y (sub_23_2_n_40));
  AOI21X4 sub_23_2_g188(.A0 (sub_23_2_n_16), .A1 (sub_23_2_n_20), .B0
       (sub_23_2_n_22), .Y (sub_23_2_n_39));
  OR2XL sub_23_2_g191(.A (sub_23_2_n_21), .B (sub_23_2_n_33), .Y
       (sub_23_2_n_38));
  AOI21X1 sub_23_2_g193(.A0 (sub_23_2_n_0), .A1 (sub_23_2_n_18), .B0
       (sub_23_2_n_24), .Y (sub_23_2_n_37));
  OAI2BB1X1 sub_23_2_g194(.A0N (sub_23_2_n_13), .A1N (sub_23_2_n_1),
       .B0 (sub_23_2_n_2), .Y (sub_23_2_n_36));
  NAND2X1 sub_23_2_g196(.A (sub_23_2_n_1), .B (sub_23_2_n_2), .Y
       (sub_23_2_n_35));
  NAND2X1 sub_23_2_g197(.A (sub_23_2_n_1), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_34));
  NAND2X1 sub_23_2_g198(.A (sub_23_2_n_0), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_33));
  INVXL sub_23_2_g199(.A (sub_23_2_n_31), .Y (sub_23_2_n_32));
  NOR2BX1 sub_23_2_g200(.AN (sub_23_2_n_17), .B (sub_23_2_n_21), .Y
       (sub_23_2_n_31));
  NAND2X1 sub_23_2_g201(.A (sub_23_2_n_16), .B (sub_23_2_n_23), .Y
       (sub_23_2_n_30));
  INVXL sub_23_2_g202(.A (sub_23_2_n_28), .Y (sub_23_2_n_29));
  NAND2BX1 sub_23_2_g203(.AN (sub_23_2_n_24), .B (sub_23_2_n_0), .Y
       (sub_23_2_n_28));
  INVX1 sub_23_2_g204(.A (sub_23_2_n_26), .Y (sub_23_2_n_27));
  NOR2X1 sub_23_2_g205(.A (sub_23_2_n_15), .B (sub_23_2_n_18), .Y
       (sub_23_2_n_26));
  MXI2XL sub_23_2_g208(.A (sub_23_2_n_8), .B (in2[0]), .S0 (in1[0]), .Y
       (out1[0]));
  INVX1 sub_23_2_g209(.A (sub_23_2_n_22), .Y (sub_23_2_n_23));
  NOR2BX1 sub_23_2_g210(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_24));
  NOR2X2 sub_23_2_g211(.A (sub_23_2_n_12), .B (in1[1]), .Y
       (sub_23_2_n_22));
  NOR2BX1 sub_23_2_g212(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_21));
  NAND2X2 sub_23_2_g213(.A (in1[0]), .B (sub_23_2_n_8), .Y
       (sub_23_2_n_20));
  NAND2X1 sub_23_2_g214(.A (in1[2]), .B (sub_23_2_n_10), .Y
       (sub_23_2_n_19));
  NOR2X1 sub_23_2_g215(.A (sub_23_2_n_9), .B (in1[4]), .Y
       (sub_23_2_n_18));
  INVX1 sub_23_2_g216(.A (sub_23_2_n_14), .Y (sub_23_2_n_15));
  NAND2BX1 sub_23_2_g219(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_17));
  NAND2X2 sub_23_2_g220(.A (in1[1]), .B (sub_23_2_n_12), .Y
       (sub_23_2_n_16));
  NAND2X1 sub_23_2_g223(.A (in1[4]), .B (sub_23_2_n_9), .Y
       (sub_23_2_n_14));
  NOR2X2 sub_23_2_g224(.A (sub_23_2_n_10), .B (in1[2]), .Y
       (sub_23_2_n_13));
  CLKINVX4 sub_23_2_g227(.A (in2[1]), .Y (sub_23_2_n_12));
  INVXL sub_23_2_g229(.A (in2[7]), .Y (sub_23_2_n_11));
  INVX3 sub_23_2_g230(.A (in2[2]), .Y (sub_23_2_n_10));
  INVX1 sub_23_2_g231(.A (in2[4]), .Y (sub_23_2_n_9));
  INVX1 sub_23_2_g232(.A (in2[0]), .Y (sub_23_2_n_8));
  XNOR2X1 sub_23_2_g2(.A (sub_23_2_n_20), .B (sub_23_2_n_30), .Y
       (out1[1]));
  NOR2BX1 sub_23_2_g233(.AN (sub_23_2_n_37), .B (sub_23_2_n_47), .Y
       (sub_23_2_n_6));
  XOR2XL sub_23_2_g234(.A (sub_23_2_n_35), .B (sub_23_2_n_44), .Y
       (out1[3]));
  CLKXOR2X1 sub_23_2_g235(.A (sub_23_2_n_3), .B (sub_23_2_n_39), .Y
       (out1[2]));
  NAND2BX1 sub_23_2_g236(.AN (sub_23_2_n_13), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_3));
  NAND2BX1 sub_23_2_g237(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_2));
  NAND2BX4 sub_23_2_g238(.AN (in2[3]), .B (in1[3]), .Y (sub_23_2_n_1));
  NAND2BX1 sub_23_2_g239(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_0));
  BUFX2 sub_23_2_fopt(.A (sub_23_2_n_43), .Y (sub_23_2_n_69));
endmodule


