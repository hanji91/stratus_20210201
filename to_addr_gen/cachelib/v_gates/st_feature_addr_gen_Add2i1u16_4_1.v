`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 18 2021 16:23:37 KST (Jan 18 2021 07:23:37 UTC)

module st_feature_addr_gen_Add2i1u16_4_1(in1, out1);
  input [15:0] in1;
  output [15:0] out1;
  wire [15:0] in1;
  wire [15:0] out1;
  wire inc_add_21_2_n_0, inc_add_21_2_n_1, inc_add_21_2_n_2,
       inc_add_21_2_n_4, inc_add_21_2_n_5, inc_add_21_2_n_7,
       inc_add_21_2_n_9, inc_add_21_2_n_11;
  wire inc_add_21_2_n_12, inc_add_21_2_n_13, inc_add_21_2_n_15,
       inc_add_21_2_n_16, inc_add_21_2_n_18, inc_add_21_2_n_19,
       inc_add_21_2_n_22, inc_add_21_2_n_27;
  wire inc_add_21_2_n_29;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 inc_add_21_2_g145(.A (in1[15]), .B (inc_add_21_2_n_29), .Y
       (out1[15]));
  XNOR2X1 inc_add_21_2_g146(.A (in1[14]), .B (inc_add_21_2_n_27), .Y
       (out1[14]));
  NAND2BX1 inc_add_21_2_g147(.AN (inc_add_21_2_n_27), .B (in1[14]), .Y
       (inc_add_21_2_n_29));
  XNOR2X1 inc_add_21_2_g148(.A (in1[13]), .B (inc_add_21_2_n_22), .Y
       (out1[13]));
  NAND3BXL inc_add_21_2_g149(.AN (inc_add_21_2_n_18), .B (in1[13]), .C
       (in1[12]), .Y (inc_add_21_2_n_27));
  XNOR2X1 inc_add_21_2_g150(.A (in1[11]), .B (inc_add_21_2_n_19), .Y
       (out1[11]));
  XNOR2X1 inc_add_21_2_g151(.A (in1[9]), .B (inc_add_21_2_n_15), .Y
       (out1[9]));
  XNOR2X1 inc_add_21_2_g152(.A (in1[12]), .B (inc_add_21_2_n_18), .Y
       (out1[12]));
  XNOR2X1 inc_add_21_2_g153(.A (in1[7]), .B (inc_add_21_2_n_13), .Y
       (out1[7]));
  NAND2BX1 inc_add_21_2_g154(.AN (inc_add_21_2_n_18), .B (in1[12]), .Y
       (inc_add_21_2_n_22));
  XNOR2X1 inc_add_21_2_g155(.A (in1[5]), .B (inc_add_21_2_n_9), .Y
       (out1[5]));
  XOR2XL inc_add_21_2_g156(.A (in1[10]), .B (inc_add_21_2_n_16), .Y
       (out1[10]));
  NAND2X1 inc_add_21_2_g157(.A (in1[10]), .B (inc_add_21_2_n_16), .Y
       (inc_add_21_2_n_19));
  NAND4XL inc_add_21_2_g158(.A (in1[11]), .B (in1[10]), .C
       (inc_add_21_2_n_1), .D (inc_add_21_2_n_11), .Y
       (inc_add_21_2_n_18));
  XNOR2X1 inc_add_21_2_g159(.A (in1[8]), .B (inc_add_21_2_n_12), .Y
       (out1[8]));
  NOR2BX1 inc_add_21_2_g160(.AN (inc_add_21_2_n_1), .B
       (inc_add_21_2_n_12), .Y (inc_add_21_2_n_16));
  NAND2X1 inc_add_21_2_g161(.A (in1[8]), .B (inc_add_21_2_n_11), .Y
       (inc_add_21_2_n_15));
  XOR2XL inc_add_21_2_g162(.A (in1[6]), .B (inc_add_21_2_n_0), .Y
       (out1[6]));
  NAND2X1 inc_add_21_2_g163(.A (in1[6]), .B (inc_add_21_2_n_0), .Y
       (inc_add_21_2_n_13));
  INVX1 inc_add_21_2_g164(.A (inc_add_21_2_n_12), .Y
       (inc_add_21_2_n_11));
  NAND4BX1 inc_add_21_2_g165(.AN (inc_add_21_2_n_2), .B (in1[7]), .C
       (in1[6]), .D (inc_add_21_2_n_7), .Y (inc_add_21_2_n_12));
  XOR2XL inc_add_21_2_g166(.A (in1[4]), .B (inc_add_21_2_n_7), .Y
       (out1[4]));
  NAND2X1 inc_add_21_2_g167(.A (in1[4]), .B (inc_add_21_2_n_7), .Y
       (inc_add_21_2_n_9));
  XNOR2X1 inc_add_21_2_g169(.A (in1[3]), .B (inc_add_21_2_n_5), .Y
       (out1[3]));
  AND3XL inc_add_21_2_g171(.A (in1[3]), .B (in1[2]), .C
       (inc_add_21_2_n_4), .Y (inc_add_21_2_n_7));
  XOR2XL inc_add_21_2_g172(.A (in1[2]), .B (inc_add_21_2_n_4), .Y
       (out1[2]));
  NAND2X1 inc_add_21_2_g173(.A (in1[2]), .B (inc_add_21_2_n_4), .Y
       (inc_add_21_2_n_5));
  ADDHX1 inc_add_21_2_g174(.A (in1[1]), .B (in1[0]), .CO
       (inc_add_21_2_n_4), .S (out1[1]));
  NAND2X1 inc_add_21_2_g175(.A (in1[5]), .B (in1[4]), .Y
       (inc_add_21_2_n_2));
  AND2XL inc_add_21_2_g176(.A (in1[9]), .B (in1[8]), .Y
       (inc_add_21_2_n_1));
  NOR2BX1 inc_add_21_2_g2(.AN (inc_add_21_2_n_7), .B
       (inc_add_21_2_n_2), .Y (inc_add_21_2_n_0));
endmodule


