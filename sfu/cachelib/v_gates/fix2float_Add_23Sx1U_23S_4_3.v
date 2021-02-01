`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 14:47:47 KST (Jan  6 2021 05:47:47 UTC)

module fix2float_Add_23Sx1U_23S_4_3(in2, in1, out1);
  input [22:0] in2;
  input in1;
  output [22:0] out1;
  wire [22:0] in2;
  wire in1;
  wire [22:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_1, inc_add_23_2_n_2,
       inc_add_23_2_n_3, inc_add_23_2_n_4, inc_add_23_2_n_5,
       inc_add_23_2_n_6, inc_add_23_2_n_7;
  wire inc_add_23_2_n_8, inc_add_23_2_n_10, inc_add_23_2_n_11,
       inc_add_23_2_n_13, inc_add_23_2_n_14, inc_add_23_2_n_15,
       inc_add_23_2_n_17, inc_add_23_2_n_18;
  wire inc_add_23_2_n_19, inc_add_23_2_n_20, inc_add_23_2_n_21,
       inc_add_23_2_n_22, inc_add_23_2_n_24, inc_add_23_2_n_25,
       inc_add_23_2_n_26, inc_add_23_2_n_27;
  wire inc_add_23_2_n_28, inc_add_23_2_n_29, inc_add_23_2_n_30,
       inc_add_23_2_n_31, inc_add_23_2_n_35, inc_add_23_2_n_36,
       inc_add_23_2_n_37, inc_add_23_2_n_38;
  wire inc_add_23_2_n_39, inc_add_23_2_n_40;
  XNOR2X1 inc_add_23_2_g242(.A (in2[17]), .B (inc_add_23_2_n_38), .Y
       (out1[17]));
  XNOR2X1 inc_add_23_2_g243(.A (in2[9]), .B (inc_add_23_2_n_30), .Y
       (out1[9]));
  XNOR2X1 inc_add_23_2_g244(.A (in2[22]), .B (inc_add_23_2_n_37), .Y
       (out1[22]));
  XNOR2X1 inc_add_23_2_g245(.A (in2[21]), .B (inc_add_23_2_n_36), .Y
       (out1[21]));
  XNOR2X1 inc_add_23_2_g246(.A (in2[19]), .B (inc_add_23_2_n_35), .Y
       (out1[19]));
  XNOR2X1 inc_add_23_2_g247(.A (in2[5]), .B (inc_add_23_2_n_20), .Y
       (out1[5]));
  XNOR2X1 inc_add_23_2_g248(.A (in2[18]), .B (inc_add_23_2_n_40), .Y
       (out1[18]));
  XNOR2X1 inc_add_23_2_g249(.A (in2[20]), .B (inc_add_23_2_n_39), .Y
       (out1[20]));
  XNOR2X1 inc_add_23_2_g250(.A (in2[13]), .B (inc_add_23_2_n_25), .Y
       (out1[13]));
  XNOR2X1 inc_add_23_2_g251(.A (in2[11]), .B (inc_add_23_2_n_24), .Y
       (out1[11]));
  XNOR2X1 inc_add_23_2_g252(.A (in2[15]), .B (inc_add_23_2_n_22), .Y
       (out1[15]));
  XNOR2X1 inc_add_23_2_g253(.A (in2[3]), .B (inc_add_23_2_n_15), .Y
       (out1[3]));
  XNOR2X1 inc_add_23_2_g254(.A (in2[16]), .B (inc_add_23_2_n_26), .Y
       (out1[16]));
  XNOR2X1 inc_add_23_2_g255(.A (in2[14]), .B (inc_add_23_2_n_28), .Y
       (out1[14]));
  XNOR2X1 inc_add_23_2_g256(.A (in2[12]), .B (inc_add_23_2_n_29), .Y
       (out1[12]));
  XOR2XL inc_add_23_2_g257(.A (in2[10]), .B (inc_add_23_2_n_31), .Y
       (out1[10]));
  OR2XL inc_add_23_2_g258(.A (inc_add_23_2_n_2), .B
       (inc_add_23_2_n_26), .Y (inc_add_23_2_n_40));
  OR2XL inc_add_23_2_g259(.A (inc_add_23_2_n_7), .B
       (inc_add_23_2_n_26), .Y (inc_add_23_2_n_39));
  NAND2X1 inc_add_23_2_g260(.A (in2[16]), .B (inc_add_23_2_n_27), .Y
       (inc_add_23_2_n_38));
  NAND4BX1 inc_add_23_2_g261(.AN (inc_add_23_2_n_7), .B
       (inc_add_23_2_n_27), .C (in2[21]), .D (in2[20]), .Y
       (inc_add_23_2_n_37));
  NAND3BXL inc_add_23_2_g262(.AN (inc_add_23_2_n_7), .B
       (inc_add_23_2_n_27), .C (in2[20]), .Y (inc_add_23_2_n_36));
  NAND3BXL inc_add_23_2_g263(.AN (inc_add_23_2_n_2), .B
       (inc_add_23_2_n_27), .C (in2[18]), .Y (inc_add_23_2_n_35));
  XNOR2X1 inc_add_23_2_g264(.A (in2[8]), .B (inc_add_23_2_n_19), .Y
       (out1[8]));
  XNOR2X1 inc_add_23_2_g265(.A (in2[7]), .B (inc_add_23_2_n_17), .Y
       (out1[7]));
  XOR2XL inc_add_23_2_g266(.A (in2[6]), .B (inc_add_23_2_n_21), .Y
       (out1[6]));
  NOR2X1 inc_add_23_2_g267(.A (inc_add_23_2_n_4), .B
       (inc_add_23_2_n_19), .Y (inc_add_23_2_n_31));
  NAND2X1 inc_add_23_2_g268(.A (in2[8]), .B (inc_add_23_2_n_18), .Y
       (inc_add_23_2_n_30));
  NAND2X1 inc_add_23_2_g269(.A (inc_add_23_2_n_6), .B
       (inc_add_23_2_n_18), .Y (inc_add_23_2_n_29));
  NAND3BXL inc_add_23_2_g270(.AN (inc_add_23_2_n_1), .B
       (inc_add_23_2_n_18), .C (inc_add_23_2_n_6), .Y
       (inc_add_23_2_n_28));
  INVX1 inc_add_23_2_g271(.A (inc_add_23_2_n_27), .Y
       (inc_add_23_2_n_26));
  NOR2X1 inc_add_23_2_g272(.A (inc_add_23_2_n_8), .B
       (inc_add_23_2_n_19), .Y (inc_add_23_2_n_27));
  NAND3X1 inc_add_23_2_g273(.A (inc_add_23_2_n_18), .B (in2[12]), .C
       (inc_add_23_2_n_6), .Y (inc_add_23_2_n_25));
  NAND3BXL inc_add_23_2_g274(.AN (inc_add_23_2_n_4), .B
       (inc_add_23_2_n_18), .C (in2[10]), .Y (inc_add_23_2_n_24));
  XNOR2X1 inc_add_23_2_g275(.A (in2[4]), .B (inc_add_23_2_n_14), .Y
       (out1[4]));
  NAND4BX1 inc_add_23_2_g276(.AN (inc_add_23_2_n_1), .B
       (inc_add_23_2_n_18), .C (inc_add_23_2_n_6), .D (in2[14]), .Y
       (inc_add_23_2_n_22));
  NOR2X1 inc_add_23_2_g277(.A (inc_add_23_2_n_3), .B
       (inc_add_23_2_n_14), .Y (inc_add_23_2_n_21));
  NAND2X1 inc_add_23_2_g278(.A (in2[4]), .B (inc_add_23_2_n_13), .Y
       (inc_add_23_2_n_20));
  INVX1 inc_add_23_2_g279(.A (inc_add_23_2_n_19), .Y
       (inc_add_23_2_n_18));
  OR2X1 inc_add_23_2_g280(.A (inc_add_23_2_n_5), .B
       (inc_add_23_2_n_14), .Y (inc_add_23_2_n_19));
  NAND3BXL inc_add_23_2_g281(.AN (inc_add_23_2_n_3), .B
       (inc_add_23_2_n_13), .C (in2[6]), .Y (inc_add_23_2_n_17));
  XNOR2X1 inc_add_23_2_g282(.A (in2[2]), .B (inc_add_23_2_n_11), .Y
       (out1[2]));
  NAND2BX1 inc_add_23_2_g283(.AN (inc_add_23_2_n_11), .B (in2[2]), .Y
       (inc_add_23_2_n_15));
  INVX1 inc_add_23_2_g284(.A (inc_add_23_2_n_14), .Y
       (inc_add_23_2_n_13));
  NAND4XL inc_add_23_2_g285(.A (in2[3]), .B (in2[2]), .C (in2[1]), .D
       (inc_add_23_2_n_10), .Y (inc_add_23_2_n_14));
  XOR2XL inc_add_23_2_g286(.A (in2[1]), .B (inc_add_23_2_n_10), .Y
       (out1[1]));
  NAND2X1 inc_add_23_2_g287(.A (in2[1]), .B (inc_add_23_2_n_10), .Y
       (inc_add_23_2_n_11));
  ADDHX1 inc_add_23_2_g288(.A (in2[0]), .B (in1), .CO
       (inc_add_23_2_n_10), .S (out1[0]));
  NAND4BX1 inc_add_23_2_g289(.AN (inc_add_23_2_n_1), .B
       (inc_add_23_2_n_6), .C (in2[15]), .D (in2[14]), .Y
       (inc_add_23_2_n_8));
  NAND3BXL inc_add_23_2_g290(.AN (inc_add_23_2_n_2), .B (in2[19]), .C
       (in2[18]), .Y (inc_add_23_2_n_7));
  NOR2X1 inc_add_23_2_g291(.A (inc_add_23_2_n_0), .B
       (inc_add_23_2_n_4), .Y (inc_add_23_2_n_6));
  NAND3BXL inc_add_23_2_g292(.AN (inc_add_23_2_n_3), .B (in2[7]), .C
       (in2[6]), .Y (inc_add_23_2_n_5));
  NAND2X1 inc_add_23_2_g293(.A (in2[9]), .B (in2[8]), .Y
       (inc_add_23_2_n_4));
  NAND2X1 inc_add_23_2_g294(.A (in2[5]), .B (in2[4]), .Y
       (inc_add_23_2_n_3));
  NAND2X1 inc_add_23_2_g295(.A (in2[17]), .B (in2[16]), .Y
       (inc_add_23_2_n_2));
  NAND2X1 inc_add_23_2_g296(.A (in2[13]), .B (in2[12]), .Y
       (inc_add_23_2_n_1));
  NAND2X1 inc_add_23_2_g297(.A (in2[11]), .B (in2[10]), .Y
       (inc_add_23_2_n_0));
endmodule


