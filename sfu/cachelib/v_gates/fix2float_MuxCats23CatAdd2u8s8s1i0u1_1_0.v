`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 14:48:07 KST (Jan  6 2021 05:48:07 UTC)

module fix2float_MuxCats23CatAdd2u8s8s1i0u1_1_0(in5, in4, in3, in2,
     ctrl1, out1);
  input in5, ctrl1;
  input [7:0] in4, in3;
  input [22:0] in2;
  output [31:0] out1;
  wire in5, ctrl1;
  wire [7:0] in4, in3;
  wire [22:0] in2;
  wire [31:0] out1;
  wire add_31_2_n_0, add_31_2_n_1, add_31_2_n_2, add_31_2_n_5,
       add_31_2_n_6, add_31_2_n_7, add_31_2_n_8, add_31_2_n_9;
  wire add_31_2_n_10, add_31_2_n_11, add_31_2_n_12, add_31_2_n_13,
       add_31_2_n_14, add_31_2_n_15, add_31_2_n_16, add_31_2_n_17;
  wire add_31_2_n_18, add_31_2_n_19, add_31_2_n_21, add_31_2_n_22,
       add_31_2_n_23, add_31_2_n_24, add_31_2_n_25, add_31_2_n_26;
  wire add_31_2_n_27, add_31_2_n_28, add_31_2_n_29, add_31_2_n_30,
       add_31_2_n_31, add_31_2_n_32, add_31_2_n_33, add_31_2_n_36;
  wire add_31_2_n_37, add_31_2_n_39, add_31_2_n_40, add_31_2_n_41,
       add_31_2_n_42, add_31_2_n_44, add_31_2_n_45, add_31_2_n_66;
  wire add_31_2_n_67, add_31_2_n_68, n_0, n_1, n_2, n_3, n_4, n_5;
  wire n_6, n_7, n_8, n_9;
  AND2XL g257(.A (in2[10]), .B (ctrl1), .Y (out1[10]));
  AND2XL g261(.A (in2[16]), .B (ctrl1), .Y (out1[16]));
  AND2XL g262(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
  AND2XL g263(.A (in2[15]), .B (ctrl1), .Y (out1[15]));
  NOR2BX1 g264(.AN (n_2), .B (n_0), .Y (out1[23]));
  AND2XL g265(.A (in2[14]), .B (ctrl1), .Y (out1[14]));
  AND2XL g266(.A (in2[13]), .B (ctrl1), .Y (out1[13]));
  NOR2BX1 g267(.AN (n_6), .B (n_0), .Y (out1[27]));
  AND2XL g268(.A (in2[22]), .B (ctrl1), .Y (out1[22]));
  AND2XL g269(.A (in2[12]), .B (ctrl1), .Y (out1[12]));
  AND2XL g270(.A (in2[11]), .B (ctrl1), .Y (out1[11]));
  AND2XL g271(.A (in2[21]), .B (ctrl1), .Y (out1[21]));
  AND2XL g272(.A (in5), .B (ctrl1), .Y (out1[31]));
  NOR2BX1 g273(.AN (in2[1]), .B (n_0), .Y (out1[1]));
  NOR2X1 g274(.A (n_0), .B (n_1), .Y (out1[29]));
  NOR2BX1 g276(.AN (in2[20]), .B (n_0), .Y (out1[20]));
  NOR2BX1 g277(.AN (in2[8]), .B (n_0), .Y (out1[8]));
  NOR2BX1 g278(.AN (in2[7]), .B (n_0), .Y (out1[7]));
  NOR2BX1 g279(.AN (in2[19]), .B (n_0), .Y (out1[19]));
  NOR2BX1 g280(.AN (in2[6]), .B (n_0), .Y (out1[6]));
  NOR2BX1 g281(.AN (in2[5]), .B (n_0), .Y (out1[5]));
  NOR2BX1 g283(.AN (in2[18]), .B (n_0), .Y (out1[18]));
  NOR2BX1 g284(.AN (in2[4]), .B (n_0), .Y (out1[4]));
  NOR2BX1 g285(.AN (in2[3]), .B (n_0), .Y (out1[3]));
  NOR2BX1 g286(.AN (in2[17]), .B (n_0), .Y (out1[17]));
  NOR2BX1 g287(.AN (in2[2]), .B (n_0), .Y (out1[2]));
  NOR2BX1 g288(.AN (in2[9]), .B (n_0), .Y (out1[9]));
  INVX1 g291(.A (n_8), .Y (n_1));
  CLKINVX4 g295(.A (ctrl1), .Y (n_0));
  NOR2BX1 g2(.AN (n_3), .B (n_0), .Y (out1[24]));
  NOR2BX1 g296(.AN (n_9), .B (n_0), .Y (out1[30]));
  NOR2BX1 g297(.AN (n_4), .B (n_0), .Y (out1[25]));
  NOR2BX1 g298(.AN (n_5), .B (n_0), .Y (out1[26]));
  NOR2BX1 g299(.AN (n_7), .B (n_0), .Y (out1[28]));
  MXI2XL add_31_2_g155(.A (add_31_2_n_21), .B (add_31_2_n_22), .S0
       (add_31_2_n_42), .Y (n_9));
  XOR2XL add_31_2_g156(.A (add_31_2_n_26), .B (add_31_2_n_45), .Y
       (n_8));
  MXI2XL add_31_2_g157(.A (add_31_2_n_25), .B (add_31_2_n_24), .S0
       (add_31_2_n_44), .Y (n_7));
  AOI21X1 add_31_2_g158(.A0 (add_31_2_n_27), .A1 (add_31_2_n_39), .B0
       (add_31_2_n_32), .Y (add_31_2_n_45));
  OAI21X1 add_31_2_g159(.A0 (add_31_2_n_16), .A1 (add_31_2_n_40), .B0
       (add_31_2_n_6), .Y (add_31_2_n_44));
  MXI2XL add_31_2_g161(.A (add_31_2_n_30), .B (add_31_2_n_29), .S0
       (add_31_2_n_40), .Y (n_6));
  OAI21X1 add_31_2_g162(.A0 (add_31_2_n_33), .A1 (add_31_2_n_40), .B0
       (add_31_2_n_37), .Y (add_31_2_n_42));
  OAI21X1 add_31_2_g163(.A0 (add_31_2_n_8), .A1 (add_31_2_n_67), .B0
       (add_31_2_n_17), .Y (add_31_2_n_41));
  CLKINVX2 add_31_2_g165(.A (add_31_2_n_39), .Y (add_31_2_n_40));
  OAI21X2 add_31_2_g166(.A0 (add_31_2_n_2), .A1 (add_31_2_n_68), .B0
       (add_31_2_n_31), .Y (add_31_2_n_39));
  AOI21X1 add_31_2_g168(.A0 (add_31_2_n_15), .A1 (add_31_2_n_32), .B0
       (add_31_2_n_19), .Y (add_31_2_n_37));
  OAI21X4 add_31_2_g169(.A0 (add_31_2_n_7), .A1 (add_31_2_n_12), .B0
       (add_31_2_n_13), .Y (add_31_2_n_36));
  NAND2X1 add_31_2_g172(.A (add_31_2_n_15), .B (add_31_2_n_27), .Y
       (add_31_2_n_33));
  OAI21X1 add_31_2_g173(.A0 (add_31_2_n_6), .A1 (add_31_2_n_10), .B0
       (add_31_2_n_11), .Y (add_31_2_n_32));
  AOI2BB1X1 add_31_2_g174(.A0N (add_31_2_n_17), .A1N (add_31_2_n_14),
       .B0 (add_31_2_n_0), .Y (add_31_2_n_31));
  INVX1 add_31_2_g175(.A (add_31_2_n_29), .Y (add_31_2_n_30));
  NAND2BX1 add_31_2_g176(.AN (add_31_2_n_16), .B (add_31_2_n_6), .Y
       (add_31_2_n_29));
  NOR2X1 add_31_2_g178(.A (add_31_2_n_0), .B (add_31_2_n_14), .Y
       (add_31_2_n_28));
  NOR2X1 add_31_2_g180(.A (add_31_2_n_10), .B (add_31_2_n_16), .Y
       (add_31_2_n_27));
  NAND2X1 add_31_2_g181(.A (add_31_2_n_18), .B (add_31_2_n_15), .Y
       (add_31_2_n_26));
  INVX1 add_31_2_g182(.A (add_31_2_n_24), .Y (add_31_2_n_25));
  NOR2BX1 add_31_2_g183(.AN (add_31_2_n_11), .B (add_31_2_n_10), .Y
       (add_31_2_n_24));
  NAND2X1 add_31_2_g185(.A (add_31_2_n_17), .B (add_31_2_n_9), .Y
       (add_31_2_n_23));
  INVX1 add_31_2_g187(.A (add_31_2_n_21), .Y (add_31_2_n_22));
  XNOR2X1 add_31_2_g188(.A (in4[7]), .B (in3[7]), .Y (add_31_2_n_21));
  MXI2XL add_31_2_g189(.A (add_31_2_n_5), .B (in4[0]), .S0 (in3[0]), .Y
       (n_2));
  INVX1 add_31_2_g190(.A (add_31_2_n_18), .Y (add_31_2_n_19));
  NAND2X1 add_31_2_g193(.A (in4[6]), .B (in3[6]), .Y (add_31_2_n_18));
  NAND2X4 add_31_2_g194(.A (in4[2]), .B (in3[2]), .Y (add_31_2_n_17));
  NOR2X1 add_31_2_g195(.A (in4[4]), .B (in3[4]), .Y (add_31_2_n_16));
  OR2X1 add_31_2_g196(.A (in4[6]), .B (in3[6]), .Y (add_31_2_n_15));
  NOR2X4 add_31_2_g197(.A (in4[3]), .B (in3[3]), .Y (add_31_2_n_14));
  INVX1 add_31_2_g199(.A (add_31_2_n_8), .Y (add_31_2_n_9));
  NAND2X2 add_31_2_g200(.A (in4[1]), .B (in3[1]), .Y (add_31_2_n_13));
  NOR2X4 add_31_2_g201(.A (in4[1]), .B (in3[1]), .Y (add_31_2_n_12));
  NAND2X1 add_31_2_g202(.A (in4[5]), .B (in3[5]), .Y (add_31_2_n_11));
  NOR2X1 add_31_2_g203(.A (in4[5]), .B (in3[5]), .Y (add_31_2_n_10));
  NOR2X4 add_31_2_g204(.A (in4[2]), .B (in3[2]), .Y (add_31_2_n_8));
  NAND2X8 add_31_2_g205(.A (in4[0]), .B (in3[0]), .Y (add_31_2_n_7));
  NAND2X1 add_31_2_g206(.A (in4[4]), .B (in3[4]), .Y (add_31_2_n_6));
  INVX1 add_31_2_g209(.A (in4[0]), .Y (add_31_2_n_5));
  XOR2XL add_31_2_g2(.A (add_31_2_n_28), .B (add_31_2_n_41), .Y (n_5));
  XNOR2XL add_31_2_g210(.A (add_31_2_n_23), .B (add_31_2_n_66), .Y
       (n_4));
  NAND2BX1 add_31_2_g211(.AN (add_31_2_n_14), .B (add_31_2_n_9), .Y
       (add_31_2_n_2));
  NOR2BX1 add_31_2_g212(.AN (add_31_2_n_13), .B (add_31_2_n_12), .Y
       (add_31_2_n_1));
  AND2X6 add_31_2_g213(.A (in4[3]), .B (in3[3]), .Y (add_31_2_n_0));
  XNOR2XL add_31_2_g214(.A (add_31_2_n_7), .B (add_31_2_n_1), .Y (n_3));
  INVXL add_31_2_fopt(.A (add_31_2_n_67), .Y (add_31_2_n_66));
  BUFX3 add_31_2_fopt215(.A (add_31_2_n_68), .Y (add_31_2_n_67));
  CLKINVX2 add_31_2_fopt216(.A (add_31_2_n_36), .Y (add_31_2_n_68));
endmodule


