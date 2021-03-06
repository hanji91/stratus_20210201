`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 00:11:44 KST (Dec  7 2020 15:11:44 UTC)

module st_weight_addr_gen_Add3u8u8Subu16u16_4_9(in4, in3, in2, in1, out1);
  input [15:0] in4, in3;
  input [7:0] in2, in1;
  output [17:0] out1;
  wire [15:0] in4, in3;
  wire [7:0] in2, in1;
  wire [17:0] out1;
  wire csa_tree_add_33_2_groupi_n_0, csa_tree_add_33_2_groupi_n_2,
       csa_tree_add_33_2_groupi_n_3, csa_tree_add_33_2_groupi_n_4,
       csa_tree_add_33_2_groupi_n_5, csa_tree_add_33_2_groupi_n_6,
       csa_tree_add_33_2_groupi_n_7, csa_tree_add_33_2_groupi_n_8;
  wire csa_tree_add_33_2_groupi_n_9, csa_tree_add_33_2_groupi_n_10,
       csa_tree_add_33_2_groupi_n_11, csa_tree_add_33_2_groupi_n_12,
       csa_tree_add_33_2_groupi_n_13, csa_tree_add_33_2_groupi_n_14,
       csa_tree_add_33_2_groupi_n_15, csa_tree_add_33_2_groupi_n_16;
  wire csa_tree_add_33_2_groupi_n_17, csa_tree_add_33_2_groupi_n_18,
       csa_tree_add_33_2_groupi_n_19, csa_tree_add_33_2_groupi_n_20,
       csa_tree_add_33_2_groupi_n_21, csa_tree_add_33_2_groupi_n_22,
       csa_tree_add_33_2_groupi_n_23, csa_tree_add_33_2_groupi_n_24;
  wire csa_tree_add_33_2_groupi_n_25, csa_tree_add_33_2_groupi_n_26,
       csa_tree_add_33_2_groupi_n_27, csa_tree_add_33_2_groupi_n_28,
       csa_tree_add_33_2_groupi_n_29, csa_tree_add_33_2_groupi_n_30,
       csa_tree_add_33_2_groupi_n_31, csa_tree_add_33_2_groupi_n_32;
  wire csa_tree_add_33_2_groupi_n_33, csa_tree_add_33_2_groupi_n_34,
       csa_tree_add_33_2_groupi_n_101, csa_tree_add_33_2_groupi_n_102,
       csa_tree_add_33_2_groupi_n_103, csa_tree_add_33_2_groupi_n_104,
       csa_tree_add_33_2_groupi_n_105, csa_tree_add_33_2_groupi_n_106;
  wire csa_tree_add_33_2_groupi_n_107, csa_tree_add_33_2_groupi_n_108,
       csa_tree_add_33_2_groupi_n_109, csa_tree_add_33_2_groupi_n_110,
       csa_tree_add_33_2_groupi_n_111, csa_tree_add_33_2_groupi_n_112,
       csa_tree_add_33_2_groupi_n_113, csa_tree_add_33_2_groupi_n_114;
  wire csa_tree_add_33_2_groupi_n_115, csa_tree_add_33_2_groupi_n_116,
       csa_tree_add_33_2_groupi_n_117, csa_tree_add_33_2_groupi_n_118,
       csa_tree_add_33_2_groupi_n_119, csa_tree_add_33_2_groupi_n_120,
       csa_tree_add_33_2_groupi_n_121, csa_tree_add_33_2_groupi_n_122;
  wire csa_tree_add_33_2_groupi_n_123, csa_tree_add_33_2_groupi_n_124,
       csa_tree_add_33_2_groupi_n_125, csa_tree_add_33_2_groupi_n_126,
       csa_tree_add_33_2_groupi_n_127, csa_tree_add_33_2_groupi_n_128,
       csa_tree_add_33_2_groupi_n_129, csa_tree_add_33_2_groupi_n_130;
  wire csa_tree_add_33_2_groupi_n_131, csa_tree_add_33_2_groupi_n_132,
       csa_tree_add_33_2_groupi_n_133, csa_tree_add_33_2_groupi_n_134,
       csa_tree_add_33_2_groupi_n_135, csa_tree_add_33_2_groupi_n_136,
       csa_tree_add_33_2_groupi_n_137, csa_tree_add_33_2_groupi_n_138;
  wire csa_tree_add_33_2_groupi_n_139, csa_tree_add_33_2_groupi_n_140,
       csa_tree_add_33_2_groupi_n_141, csa_tree_add_33_2_groupi_n_142,
       csa_tree_add_33_2_groupi_n_143, csa_tree_add_33_2_groupi_n_144;
  INVX1 csa_tree_add_33_2_groupi_g3(.A (in3[0]), .Y
       (csa_tree_add_33_2_groupi_n_0));
  ADDFX1 csa_tree_add_33_2_groupi_g803(.A
       (csa_tree_add_33_2_groupi_n_125), .B
       (csa_tree_add_33_2_groupi_n_126), .CI
       (csa_tree_add_33_2_groupi_n_104), .CO
       (csa_tree_add_33_2_groupi_n_11), .S
       (csa_tree_add_33_2_groupi_n_10));
  ADDFX1 csa_tree_add_33_2_groupi_g804(.A
       (csa_tree_add_33_2_groupi_n_119), .B
       (csa_tree_add_33_2_groupi_n_120), .CI
       (csa_tree_add_33_2_groupi_n_103), .CO
       (csa_tree_add_33_2_groupi_n_25), .S
       (csa_tree_add_33_2_groupi_n_8));
  ADDFX1 csa_tree_add_33_2_groupi_g805(.A
       (csa_tree_add_33_2_groupi_n_127), .B
       (csa_tree_add_33_2_groupi_n_118), .CI
       (csa_tree_add_33_2_groupi_n_113), .CO
       (csa_tree_add_33_2_groupi_n_26), .S
       (csa_tree_add_33_2_groupi_n_9));
  ADDFX1 csa_tree_add_33_2_groupi_g806(.A
       (csa_tree_add_33_2_groupi_n_128), .B
       (csa_tree_add_33_2_groupi_n_112), .CI
       (csa_tree_add_33_2_groupi_n_121), .CO
       (csa_tree_add_33_2_groupi_n_24), .S
       (csa_tree_add_33_2_groupi_n_7));
  ADDFX1 csa_tree_add_33_2_groupi_g807(.A
       (csa_tree_add_33_2_groupi_n_122), .B
       (csa_tree_add_33_2_groupi_n_101), .CI
       (csa_tree_add_33_2_groupi_n_129), .CO
       (csa_tree_add_33_2_groupi_n_23), .S
       (csa_tree_add_33_2_groupi_n_6));
  ADDFX1 csa_tree_add_33_2_groupi_g808(.A
       (csa_tree_add_33_2_groupi_n_123), .B
       (csa_tree_add_33_2_groupi_n_116), .CI
       (csa_tree_add_33_2_groupi_n_102), .CO
       (csa_tree_add_33_2_groupi_n_22), .S
       (csa_tree_add_33_2_groupi_n_5));
  ADDFX1 csa_tree_add_33_2_groupi_g809(.A
       (csa_tree_add_33_2_groupi_n_124), .B (in4[8]), .CI
       (csa_tree_add_33_2_groupi_n_111), .CO
       (csa_tree_add_33_2_groupi_n_12), .S
       (csa_tree_add_33_2_groupi_n_27));
  ADDFX1 csa_tree_add_33_2_groupi_g810(.A
       (csa_tree_add_33_2_groupi_n_117), .B (in4[1]), .CI
       (csa_tree_add_33_2_groupi_n_110), .CO
       (csa_tree_add_33_2_groupi_n_21), .S
       (csa_tree_add_33_2_groupi_n_4));
  ADDFX1 csa_tree_add_33_2_groupi_g811(.A (in4[3]), .B (in2[3]), .CI
       (in1[3]), .CO (csa_tree_add_33_2_groupi_n_128), .S
       (csa_tree_add_33_2_groupi_n_129));
  ADDFX1 csa_tree_add_33_2_groupi_g812(.A (in4[6]), .B (in2[6]), .CI
       (in1[6]), .CO (csa_tree_add_33_2_groupi_n_126), .S
       (csa_tree_add_33_2_groupi_n_127));
  ADDFX1 csa_tree_add_33_2_groupi_g813(.A (in4[7]), .B (in2[7]), .CI
       (in1[7]), .CO (csa_tree_add_33_2_groupi_n_124), .S
       (csa_tree_add_33_2_groupi_n_125));
  ADDFX1 csa_tree_add_33_2_groupi_g814(.A (in2[2]), .B (in4[2]), .CI
       (in1[2]), .CO (csa_tree_add_33_2_groupi_n_122), .S
       (csa_tree_add_33_2_groupi_n_123));
  ADDFX1 csa_tree_add_33_2_groupi_g815(.A (in2[4]), .B (in4[4]), .CI
       (in1[4]), .CO (csa_tree_add_33_2_groupi_n_120), .S
       (csa_tree_add_33_2_groupi_n_121));
  ADDFX1 csa_tree_add_33_2_groupi_g816(.A (in2[5]), .B (in4[5]), .CI
       (in1[5]), .CO (csa_tree_add_33_2_groupi_n_118), .S
       (csa_tree_add_33_2_groupi_n_119));
  ADDHX1 csa_tree_add_33_2_groupi_g817(.A (in4[14]), .B
       (csa_tree_add_33_2_groupi_n_105), .CO
       (csa_tree_add_33_2_groupi_n_34), .S
       (csa_tree_add_33_2_groupi_n_17));
  ADDHX1 csa_tree_add_33_2_groupi_g818(.A (in1[1]), .B (in2[1]), .CO
       (csa_tree_add_33_2_groupi_n_116), .S
       (csa_tree_add_33_2_groupi_n_117));
  ADDHX1 csa_tree_add_33_2_groupi_g819(.A (in4[15]), .B
       (csa_tree_add_33_2_groupi_n_107), .CO
       (csa_tree_add_33_2_groupi_n_19), .S
       (csa_tree_add_33_2_groupi_n_18));
  ADDHX1 csa_tree_add_33_2_groupi_g820(.A (in4[9]), .B
       (csa_tree_add_33_2_groupi_n_109), .CO
       (csa_tree_add_33_2_groupi_n_29), .S
       (csa_tree_add_33_2_groupi_n_28));
  ADDHX1 csa_tree_add_33_2_groupi_g821(.A (in4[12]), .B
       (csa_tree_add_33_2_groupi_n_106), .CO
       (csa_tree_add_33_2_groupi_n_32), .S
       (csa_tree_add_33_2_groupi_n_15));
  ADDHX1 csa_tree_add_33_2_groupi_g822(.A (in4[11]), .B
       (csa_tree_add_33_2_groupi_n_114), .CO
       (csa_tree_add_33_2_groupi_n_31), .S
       (csa_tree_add_33_2_groupi_n_14));
  ADDHX1 csa_tree_add_33_2_groupi_g823(.A (in4[10]), .B
       (csa_tree_add_33_2_groupi_n_108), .CO
       (csa_tree_add_33_2_groupi_n_30), .S
       (csa_tree_add_33_2_groupi_n_13));
  ADDHX1 csa_tree_add_33_2_groupi_g824(.A (in4[13]), .B
       (csa_tree_add_33_2_groupi_n_115), .CO
       (csa_tree_add_33_2_groupi_n_33), .S
       (csa_tree_add_33_2_groupi_n_16));
  OAI2BB1X1 csa_tree_add_33_2_groupi_g825(.A0N (in1[0]), .A1N (in2[0]),
       .B0 (csa_tree_add_33_2_groupi_n_20), .Y
       (csa_tree_add_33_2_groupi_n_3));
  OR2X1 csa_tree_add_33_2_groupi_g826(.A (in1[0]), .B (in2[0]), .Y
       (csa_tree_add_33_2_groupi_n_20));
  INVX1 csa_tree_add_33_2_groupi_g827(.A (in3[13]), .Y
       (csa_tree_add_33_2_groupi_n_115));
  INVX1 csa_tree_add_33_2_groupi_g828(.A (in3[11]), .Y
       (csa_tree_add_33_2_groupi_n_114));
  INVX1 csa_tree_add_33_2_groupi_g829(.A (in3[6]), .Y
       (csa_tree_add_33_2_groupi_n_113));
  INVX1 csa_tree_add_33_2_groupi_g830(.A (in3[4]), .Y
       (csa_tree_add_33_2_groupi_n_112));
  INVX1 csa_tree_add_33_2_groupi_g831(.A (in3[8]), .Y
       (csa_tree_add_33_2_groupi_n_111));
  INVX1 csa_tree_add_33_2_groupi_g832(.A (in3[1]), .Y
       (csa_tree_add_33_2_groupi_n_110));
  INVX1 csa_tree_add_33_2_groupi_g833(.A (in3[9]), .Y
       (csa_tree_add_33_2_groupi_n_109));
  INVX1 csa_tree_add_33_2_groupi_g834(.A (in3[10]), .Y
       (csa_tree_add_33_2_groupi_n_108));
  INVX1 csa_tree_add_33_2_groupi_g835(.A (in3[15]), .Y
       (csa_tree_add_33_2_groupi_n_107));
  INVX1 csa_tree_add_33_2_groupi_g836(.A (in3[12]), .Y
       (csa_tree_add_33_2_groupi_n_106));
  INVX1 csa_tree_add_33_2_groupi_g837(.A (in3[14]), .Y
       (csa_tree_add_33_2_groupi_n_105));
  INVX1 csa_tree_add_33_2_groupi_g838(.A (in3[7]), .Y
       (csa_tree_add_33_2_groupi_n_104));
  INVX1 csa_tree_add_33_2_groupi_g839(.A (in3[5]), .Y
       (csa_tree_add_33_2_groupi_n_103));
  INVX1 csa_tree_add_33_2_groupi_g840(.A (in3[2]), .Y
       (csa_tree_add_33_2_groupi_n_102));
  INVX1 csa_tree_add_33_2_groupi_g841(.A (in3[3]), .Y
       (csa_tree_add_33_2_groupi_n_101));
  AO21XL csa_tree_add_33_2_groupi_g351(.A0
       (csa_tree_add_33_2_groupi_n_19), .A1
       (csa_tree_add_33_2_groupi_n_144), .B0 (out1[17]), .Y (out1[16]));
  NOR2X1 csa_tree_add_33_2_groupi_g352(.A
       (csa_tree_add_33_2_groupi_n_19), .B
       (csa_tree_add_33_2_groupi_n_144), .Y (out1[17]));
  ADDFX1 csa_tree_add_33_2_groupi_g353(.A
       (csa_tree_add_33_2_groupi_n_143), .B
       (csa_tree_add_33_2_groupi_n_18), .CI
       (csa_tree_add_33_2_groupi_n_34), .CO
       (csa_tree_add_33_2_groupi_n_144), .S (out1[15]));
  ADDFX1 csa_tree_add_33_2_groupi_g354(.A
       (csa_tree_add_33_2_groupi_n_142), .B
       (csa_tree_add_33_2_groupi_n_33), .CI
       (csa_tree_add_33_2_groupi_n_17), .CO
       (csa_tree_add_33_2_groupi_n_143), .S (out1[14]));
  ADDFX1 csa_tree_add_33_2_groupi_g355(.A
       (csa_tree_add_33_2_groupi_n_141), .B
       (csa_tree_add_33_2_groupi_n_16), .CI
       (csa_tree_add_33_2_groupi_n_32), .CO
       (csa_tree_add_33_2_groupi_n_142), .S (out1[13]));
  ADDFX1 csa_tree_add_33_2_groupi_g356(.A
       (csa_tree_add_33_2_groupi_n_140), .B
       (csa_tree_add_33_2_groupi_n_15), .CI
       (csa_tree_add_33_2_groupi_n_31), .CO
       (csa_tree_add_33_2_groupi_n_141), .S (out1[12]));
  ADDFX1 csa_tree_add_33_2_groupi_g357(.A
       (csa_tree_add_33_2_groupi_n_139), .B
       (csa_tree_add_33_2_groupi_n_14), .CI
       (csa_tree_add_33_2_groupi_n_30), .CO
       (csa_tree_add_33_2_groupi_n_140), .S (out1[11]));
  ADDFX1 csa_tree_add_33_2_groupi_g358(.A
       (csa_tree_add_33_2_groupi_n_138), .B
       (csa_tree_add_33_2_groupi_n_13), .CI
       (csa_tree_add_33_2_groupi_n_29), .CO
       (csa_tree_add_33_2_groupi_n_139), .S (out1[10]));
  ADDFX1 csa_tree_add_33_2_groupi_g359(.A
       (csa_tree_add_33_2_groupi_n_137), .B
       (csa_tree_add_33_2_groupi_n_28), .CI
       (csa_tree_add_33_2_groupi_n_12), .CO
       (csa_tree_add_33_2_groupi_n_138), .S (out1[9]));
  ADDFX1 csa_tree_add_33_2_groupi_g360(.A
       (csa_tree_add_33_2_groupi_n_136), .B
       (csa_tree_add_33_2_groupi_n_11), .CI
       (csa_tree_add_33_2_groupi_n_27), .CO
       (csa_tree_add_33_2_groupi_n_137), .S (out1[8]));
  ADDFX1 csa_tree_add_33_2_groupi_g361(.A
       (csa_tree_add_33_2_groupi_n_135), .B
       (csa_tree_add_33_2_groupi_n_10), .CI
       (csa_tree_add_33_2_groupi_n_26), .CO
       (csa_tree_add_33_2_groupi_n_136), .S (out1[7]));
  ADDFX1 csa_tree_add_33_2_groupi_g362(.A
       (csa_tree_add_33_2_groupi_n_134), .B
       (csa_tree_add_33_2_groupi_n_9), .CI
       (csa_tree_add_33_2_groupi_n_25), .CO
       (csa_tree_add_33_2_groupi_n_135), .S (out1[6]));
  ADDFX1 csa_tree_add_33_2_groupi_g363(.A
       (csa_tree_add_33_2_groupi_n_133), .B
       (csa_tree_add_33_2_groupi_n_8), .CI
       (csa_tree_add_33_2_groupi_n_24), .CO
       (csa_tree_add_33_2_groupi_n_134), .S (out1[5]));
  ADDFX1 csa_tree_add_33_2_groupi_g364(.A
       (csa_tree_add_33_2_groupi_n_132), .B
       (csa_tree_add_33_2_groupi_n_7), .CI
       (csa_tree_add_33_2_groupi_n_23), .CO
       (csa_tree_add_33_2_groupi_n_133), .S (out1[4]));
  ADDFX1 csa_tree_add_33_2_groupi_g365(.A
       (csa_tree_add_33_2_groupi_n_131), .B
       (csa_tree_add_33_2_groupi_n_6), .CI
       (csa_tree_add_33_2_groupi_n_22), .CO
       (csa_tree_add_33_2_groupi_n_132), .S (out1[3]));
  ADDFX1 csa_tree_add_33_2_groupi_g366(.A
       (csa_tree_add_33_2_groupi_n_2), .B
       (csa_tree_add_33_2_groupi_n_5), .CI
       (csa_tree_add_33_2_groupi_n_21), .CO
       (csa_tree_add_33_2_groupi_n_131), .S (out1[2]));
  ADDFX1 csa_tree_add_33_2_groupi_g367(.A
       (csa_tree_add_33_2_groupi_n_130), .B
       (csa_tree_add_33_2_groupi_n_4), .CI
       (csa_tree_add_33_2_groupi_n_20), .CO
       (csa_tree_add_33_2_groupi_n_2), .S (out1[1]));
  ADDFX1 csa_tree_add_33_2_groupi_g368(.A
       (csa_tree_add_33_2_groupi_n_0), .B (in4[0]), .CI
       (csa_tree_add_33_2_groupi_n_3), .CO
       (csa_tree_add_33_2_groupi_n_130), .S (out1[0]));
endmodule


