`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:06 KST (Jan 20 2021 09:19:06 UTC)

module st_feature_addr_gen_Add_16Ux1U_16U_4_2(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire in1;
  wire [15:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_1, inc_add_23_2_n_2,
       inc_add_23_2_n_4, inc_add_23_2_n_6, inc_add_23_2_n_8,
       inc_add_23_2_n_9, inc_add_23_2_n_11;
  wire inc_add_23_2_n_12, inc_add_23_2_n_13, inc_add_23_2_n_14,
       inc_add_23_2_n_16, inc_add_23_2_n_18, inc_add_23_2_n_19,
       inc_add_23_2_n_21, inc_add_23_2_n_22;
  wire inc_add_23_2_n_25, inc_add_23_2_n_30, inc_add_23_2_n_32;
  XNOR2X1 inc_add_23_2_g148(.A (in2[15]), .B (inc_add_23_2_n_32), .Y
       (out1[15]));
  XNOR2X1 inc_add_23_2_g149(.A (in2[14]), .B (inc_add_23_2_n_30), .Y
       (out1[14]));
  NAND2BX1 inc_add_23_2_g150(.AN (inc_add_23_2_n_30), .B (in2[14]), .Y
       (inc_add_23_2_n_32));
  XNOR2X1 inc_add_23_2_g151(.A (in2[13]), .B (inc_add_23_2_n_25), .Y
       (out1[13]));
  NAND3BXL inc_add_23_2_g152(.AN (inc_add_23_2_n_21), .B (in2[13]), .C
       (in2[12]), .Y (inc_add_23_2_n_30));
  XNOR2X1 inc_add_23_2_g153(.A (in2[11]), .B (inc_add_23_2_n_22), .Y
       (out1[11]));
  XNOR2X1 inc_add_23_2_g154(.A (in2[9]), .B (inc_add_23_2_n_18), .Y
       (out1[9]));
  XNOR2X1 inc_add_23_2_g155(.A (in2[12]), .B (inc_add_23_2_n_21), .Y
       (out1[12]));
  XNOR2X1 inc_add_23_2_g156(.A (in2[7]), .B (inc_add_23_2_n_16), .Y
       (out1[7]));
  NAND2BX1 inc_add_23_2_g157(.AN (inc_add_23_2_n_21), .B (in2[12]), .Y
       (inc_add_23_2_n_25));
  XNOR2X1 inc_add_23_2_g158(.A (in2[5]), .B (inc_add_23_2_n_11), .Y
       (out1[5]));
  XOR2XL inc_add_23_2_g159(.A (in2[10]), .B (inc_add_23_2_n_19), .Y
       (out1[10]));
  NAND2X1 inc_add_23_2_g160(.A (in2[10]), .B (inc_add_23_2_n_19), .Y
       (inc_add_23_2_n_22));
  NAND4XL inc_add_23_2_g161(.A (in2[11]), .B (in2[10]), .C
       (inc_add_23_2_n_1), .D (inc_add_23_2_n_13), .Y
       (inc_add_23_2_n_21));
  XNOR2X1 inc_add_23_2_g162(.A (in2[8]), .B (inc_add_23_2_n_14), .Y
       (out1[8]));
  NOR2BX1 inc_add_23_2_g163(.AN (inc_add_23_2_n_1), .B
       (inc_add_23_2_n_14), .Y (inc_add_23_2_n_19));
  NAND2X1 inc_add_23_2_g164(.A (in2[8]), .B (inc_add_23_2_n_13), .Y
       (inc_add_23_2_n_18));
  XOR2XL inc_add_23_2_g165(.A (in2[6]), .B (inc_add_23_2_n_12), .Y
       (out1[6]));
  NAND2X1 inc_add_23_2_g166(.A (in2[6]), .B (inc_add_23_2_n_12), .Y
       (inc_add_23_2_n_16));
  XNOR2X1 inc_add_23_2_g167(.A (in2[4]), .B (inc_add_23_2_n_9), .Y
       (out1[4]));
  INVX1 inc_add_23_2_g168(.A (inc_add_23_2_n_14), .Y
       (inc_add_23_2_n_13));
  NAND4BX1 inc_add_23_2_g169(.AN (inc_add_23_2_n_2), .B (in2[7]), .C
       (in2[6]), .D (inc_add_23_2_n_8), .Y (inc_add_23_2_n_14));
  NOR2X1 inc_add_23_2_g170(.A (inc_add_23_2_n_2), .B
       (inc_add_23_2_n_9), .Y (inc_add_23_2_n_12));
  NAND2X1 inc_add_23_2_g171(.A (in2[4]), .B (inc_add_23_2_n_8), .Y
       (inc_add_23_2_n_11));
  XNOR2X1 inc_add_23_2_g172(.A (in2[3]), .B (inc_add_23_2_n_6), .Y
       (out1[3]));
  INVX1 inc_add_23_2_g173(.A (inc_add_23_2_n_9), .Y (inc_add_23_2_n_8));
  NAND3BXL inc_add_23_2_g174(.AN (inc_add_23_2_n_4), .B (in2[3]), .C
       (in2[2]), .Y (inc_add_23_2_n_9));
  XNOR2X1 inc_add_23_2_g175(.A (in2[2]), .B (inc_add_23_2_n_4), .Y
       (out1[2]));
  NAND2BX1 inc_add_23_2_g176(.AN (inc_add_23_2_n_4), .B (in2[2]), .Y
       (inc_add_23_2_n_6));
  XNOR2X1 inc_add_23_2_g177(.A (in2[1]), .B (inc_add_23_2_n_0), .Y
       (out1[1]));
  NAND2BX1 inc_add_23_2_g178(.AN (inc_add_23_2_n_0), .B (in2[1]), .Y
       (inc_add_23_2_n_4));
  XOR2XL inc_add_23_2_g179(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2X1 inc_add_23_2_g180(.A (in2[5]), .B (in2[4]), .Y
       (inc_add_23_2_n_2));
  AND2XL inc_add_23_2_g181(.A (in2[9]), .B (in2[8]), .Y
       (inc_add_23_2_n_1));
  NAND2X1 inc_add_23_2_g182(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_0));
endmodule


