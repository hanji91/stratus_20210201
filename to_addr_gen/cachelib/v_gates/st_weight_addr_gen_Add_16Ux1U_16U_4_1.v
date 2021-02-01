`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:45:37 KST (Dec  7 2020 13:45:37 UTC)

module st_weight_addr_gen_Add_16Ux1U_16U_4_1(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire in1;
  wire [15:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_2, inc_add_23_2_n_4,
       inc_add_23_2_n_6, inc_add_23_2_n_8, inc_add_23_2_n_9,
       inc_add_23_2_n_11, inc_add_23_2_n_14;
  wire inc_add_23_2_n_16, inc_add_23_2_n_17, inc_add_23_2_n_19,
       inc_add_23_2_n_22, inc_add_23_2_n_24, inc_add_23_2_n_26,
       inc_add_23_2_n_28;
  XNOR2X1 inc_add_23_2_g150(.A (in2[15]), .B (inc_add_23_2_n_28), .Y
       (out1[15]));
  XNOR2X1 inc_add_23_2_g151(.A (in2[14]), .B (inc_add_23_2_n_26), .Y
       (out1[14]));
  NAND2BX1 inc_add_23_2_g152(.AN (inc_add_23_2_n_26), .B (in2[14]), .Y
       (inc_add_23_2_n_28));
  XNOR2X1 inc_add_23_2_g153(.A (in2[13]), .B (inc_add_23_2_n_24), .Y
       (out1[13]));
  NAND2BX1 inc_add_23_2_g154(.AN (inc_add_23_2_n_24), .B (in2[13]), .Y
       (inc_add_23_2_n_26));
  XNOR2X1 inc_add_23_2_g155(.A (in2[12]), .B (inc_add_23_2_n_22), .Y
       (out1[12]));
  NAND2BX1 inc_add_23_2_g156(.AN (inc_add_23_2_n_22), .B (in2[12]), .Y
       (inc_add_23_2_n_24));
  XNOR2X1 inc_add_23_2_g157(.A (in2[11]), .B (inc_add_23_2_n_19), .Y
       (out1[11]));
  NAND2BX1 inc_add_23_2_g158(.AN (inc_add_23_2_n_19), .B (in2[11]), .Y
       (inc_add_23_2_n_22));
  XNOR2X1 inc_add_23_2_g159(.A (in2[9]), .B (inc_add_23_2_n_17), .Y
       (out1[9]));
  XNOR2X1 inc_add_23_2_g160(.A (in2[10]), .B (inc_add_23_2_n_16), .Y
       (out1[10]));
  NAND2BX1 inc_add_23_2_g161(.AN (inc_add_23_2_n_16), .B (in2[10]), .Y
       (inc_add_23_2_n_19));
  XNOR2X1 inc_add_23_2_g162(.A (in2[8]), .B (inc_add_23_2_n_14), .Y
       (out1[8]));
  NAND2BX1 inc_add_23_2_g163(.AN (inc_add_23_2_n_14), .B (in2[8]), .Y
       (inc_add_23_2_n_17));
  NAND3BXL inc_add_23_2_g164(.AN (inc_add_23_2_n_14), .B (in2[9]), .C
       (in2[8]), .Y (inc_add_23_2_n_16));
  XNOR2X1 inc_add_23_2_g165(.A (in2[7]), .B (inc_add_23_2_n_11), .Y
       (out1[7]));
  NAND2BX1 inc_add_23_2_g166(.AN (inc_add_23_2_n_11), .B (in2[7]), .Y
       (inc_add_23_2_n_14));
  XNOR2X1 inc_add_23_2_g167(.A (in2[5]), .B (inc_add_23_2_n_9), .Y
       (out1[5]));
  XNOR2X1 inc_add_23_2_g168(.A (in2[6]), .B (inc_add_23_2_n_8), .Y
       (out1[6]));
  NAND2BX1 inc_add_23_2_g169(.AN (inc_add_23_2_n_8), .B (in2[6]), .Y
       (inc_add_23_2_n_11));
  XNOR2X1 inc_add_23_2_g170(.A (in2[4]), .B (inc_add_23_2_n_6), .Y
       (out1[4]));
  NAND2BX1 inc_add_23_2_g171(.AN (inc_add_23_2_n_6), .B (in2[4]), .Y
       (inc_add_23_2_n_9));
  NAND3BXL inc_add_23_2_g172(.AN (inc_add_23_2_n_6), .B (in2[5]), .C
       (in2[4]), .Y (inc_add_23_2_n_8));
  XNOR2X1 inc_add_23_2_g173(.A (in2[3]), .B (inc_add_23_2_n_4), .Y
       (out1[3]));
  NAND2BX1 inc_add_23_2_g174(.AN (inc_add_23_2_n_4), .B (in2[3]), .Y
       (inc_add_23_2_n_6));
  XNOR2X1 inc_add_23_2_g175(.A (in2[2]), .B (inc_add_23_2_n_2), .Y
       (out1[2]));
  NAND2BX1 inc_add_23_2_g176(.AN (inc_add_23_2_n_2), .B (in2[2]), .Y
       (inc_add_23_2_n_4));
  XNOR2X1 inc_add_23_2_g177(.A (in2[1]), .B (inc_add_23_2_n_0), .Y
       (out1[1]));
  NAND2BX1 inc_add_23_2_g178(.AN (inc_add_23_2_n_0), .B (in2[1]), .Y
       (inc_add_23_2_n_2));
  XOR2XL inc_add_23_2_g179(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2X1 inc_add_23_2_g180(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_0));
endmodule


