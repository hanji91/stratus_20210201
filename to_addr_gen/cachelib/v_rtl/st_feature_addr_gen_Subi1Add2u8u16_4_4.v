`timescale 1ps / 1ps
module st_feature_addr_gen_Subi1Add2u8u16_4_4(
          in2,
          in1,
          out1,
          clk
);
   input [15:0] in2;
   input [7:0] in1;
   output [17:0] out1;
   input clk;
wire csa_tree_sub_26_2_groupi_n_0, csa_tree_sub_26_2_groupi_n_1,
     csa_tree_sub_26_2_groupi_n_2, csa_tree_sub_26_2_groupi_n_5,
     csa_tree_sub_26_2_groupi_n_6, csa_tree_sub_26_2_groupi_n_7,
     csa_tree_sub_26_2_groupi_n_8, csa_tree_sub_26_2_groupi_n_9,
     csa_tree_sub_26_2_groupi_n_10, csa_tree_sub_26_2_groupi_n_11,
     csa_tree_sub_26_2_groupi_n_12, csa_tree_sub_26_2_groupi_n_13,
     csa_tree_sub_26_2_groupi_n_14, csa_tree_sub_26_2_groupi_n_15,
     csa_tree_sub_26_2_groupi_n_17, csa_tree_sub_26_2_groupi_n_18,
     csa_tree_sub_26_2_groupi_n_19, csa_tree_sub_26_2_groupi_n_22,
     csa_tree_sub_26_2_groupi_n_23, csa_tree_sub_26_2_groupi_n_24,
     csa_tree_sub_26_2_groupi_n_25, csa_tree_sub_26_2_groupi_n_26,
     csa_tree_sub_26_2_groupi_n_29, csa_tree_sub_26_2_groupi_n_31,
     csa_tree_sub_26_2_groupi_n_32, csa_tree_sub_26_2_groupi_n_33,
     csa_tree_sub_26_2_groupi_n_34, csa_tree_sub_26_2_groupi_n_35,
     csa_tree_sub_26_2_groupi_n_37, csa_tree_sub_26_2_groupi_n_38,
     csa_tree_sub_26_2_groupi_n_44, csa_tree_sub_26_2_groupi_n_45,
     csa_tree_sub_26_2_groupi_n_46, csa_tree_sub_26_2_groupi_n_47,
     csa_tree_sub_26_2_groupi_n_49, csa_tree_sub_26_2_groupi_n_53,
     csa_tree_sub_26_2_groupi_n_54, csa_tree_sub_26_2_groupi_n_56,
     csa_tree_sub_26_2_groupi_n_58, csa_tree_sub_26_2_groupi_n_60,
     csa_tree_sub_26_2_groupi_n_62, csa_tree_sub_26_2_groupi_n_64,
     csa_tree_sub_26_2_groupi_n_66, csa_tree_sub_26_2_groupi_n_68,
     csa_tree_sub_26_2_groupi_n_70, csa_tree_sub_26_2_groupi_n_72,
     csa_tree_sub_26_2_groupi_n_75, n_5, n_11, n_12, n_18, n_22, clk, n_48, n_49,
     n_50, n_51, n_52, n_53, asc001_0_, asc001_1_, asc001_2_, asc001_3_,
     asc001_4_, asc001_5_, asc001_6_, asc001_7_, asc001_8_, asc001_9_,
     asc001_10_, asc001_11_, asc001_12_, asc001_13_, asc001_14_, asc001_15_,
     asc001_16_, asc001_17_;
assign {out1[17]} = asc001_17_;
assign {out1[16]} = asc001_16_;
assign {out1[15]} = asc001_15_;
assign {out1[14]} = asc001_14_;
assign {out1[13]} = n_11;
 reg out1_12_L0_reg_N30;
 always @(posedge clk)
         out1_12_L0_reg_N30 <= asc001_5_;
 assign {out1[5]} = out1_12_L0_reg_N30;
 reg out1_6_L0_reg_N30;
 always @(posedge clk)
         out1_6_L0_reg_N30 <= asc001_11_;
 assign {out1[11]} = out1_6_L0_reg_N30;
 reg retime_s1_4_reg_reg_N30;
 always @(posedge clk)
         retime_s1_4_reg_reg_N30 <= asc001_13_;
 assign n_11 = retime_s1_4_reg_reg_N30;
 reg out1_7_L0_reg_N30;
 always @(posedge clk)
         out1_7_L0_reg_N30 <= asc001_10_;
 assign {out1[10]} = out1_7_L0_reg_N30;
 reg out1_8_L0_reg_N30;
 always @(posedge clk)
         out1_8_L0_reg_N30 <= asc001_9_;
 assign {out1[9]} = out1_8_L0_reg_N30;
 reg out1_9_L0_reg_N30;
 always @(posedge clk)
         out1_9_L0_reg_N30 <= asc001_8_;
 assign {out1[8]} = out1_9_L0_reg_N30;
 reg out1_10_L0_reg_N30;
 always @(posedge clk)
         out1_10_L0_reg_N30 <= asc001_7_;
 assign {out1[7]} = out1_10_L0_reg_N30;
 reg out1_11_L0_reg_N30;
 always @(posedge clk)
         out1_11_L0_reg_N30 <= asc001_6_;
 assign {out1[6]} = out1_11_L0_reg_N30;
 reg out1_5_L0_reg_N30;
 always @(posedge clk)
         out1_5_L0_reg_N30 <= asc001_12_;
 assign {out1[12]} = out1_5_L0_reg_N30;
 reg retime_s1_5_reg_reg_N30;
 always @(posedge clk)
         retime_s1_5_reg_reg_N30 <= {in2[13]};
 assign n_5 = retime_s1_5_reg_reg_N30;
 reg out1_14_L0_reg_N30;
 always @(posedge clk)
         out1_14_L0_reg_N30 <= asc001_3_;
 assign {out1[3]} = out1_14_L0_reg_N30;
 reg out1_15_L0_reg_N30;
 always @(posedge clk)
         out1_15_L0_reg_N30 <= asc001_2_;
 assign {out1[2]} = out1_15_L0_reg_N30;
 reg out1_16_L0_reg_N30;
 always @(posedge clk)
         out1_16_L0_reg_N30 <= asc001_1_;
 assign {out1[1]} = out1_16_L0_reg_N30;
 reg out1_17_L0_reg_N30;
 always @(posedge clk)
         out1_17_L0_reg_N30 <= asc001_0_;
 assign {out1[0]} = out1_17_L0_reg_N30;
 reg retime_s1_1_reg_reg_N30;
 always @(posedge clk)
         retime_s1_1_reg_reg_N30 <= {in2[14]};
 assign n_22 = retime_s1_1_reg_reg_N30;
 reg retime_s1_2_reg_reg_N30;
 always @(posedge clk)
         retime_s1_2_reg_reg_N30 <= {in2[15]};
 assign n_18 = retime_s1_2_reg_reg_N30;
 reg retime_s1_3_reg_reg_N30;
 always @(posedge clk)
         retime_s1_3_reg_reg_N30 <= csa_tree_sub_26_2_groupi_n_70;
 assign n_12 = retime_s1_3_reg_reg_N30;
 reg out1_13_L0_reg_N30;
 always @(posedge clk)
         out1_13_L0_reg_N30 <= asc001_4_;
 assign {out1[4]} = out1_13_L0_reg_N30;
 assign asc001_3_ = (csa_tree_sub_26_2_groupi_n_49 ^ csa_tree_sub_26_2_groupi_n_44);
 assign asc001_16_ = ~(csa_tree_sub_26_2_groupi_n_75 ^ n_18);
 assign asc001_17_ = ~(csa_tree_sub_26_2_groupi_n_75 | n_18);
 assign csa_tree_sub_26_2_groupi_n_75 = ((csa_tree_sub_26_2_groupi_n_72 & csa_tree_sub_26_2_groupi_n_12)
    | ((csa_tree_sub_26_2_groupi_n_12 & n_22) | (n_22 & csa_tree_sub_26_2_groupi_n_72)));
 assign asc001_15_ = (csa_tree_sub_26_2_groupi_n_12 ^ (n_22 ^ csa_tree_sub_26_2_groupi_n_72));
 assign csa_tree_sub_26_2_groupi_n_72 = ((n_12 & csa_tree_sub_26_2_groupi_n_11) | ((csa_tree_sub_26_2_groupi_n_11
    & n_5) | (n_5 & n_12)));
 assign asc001_14_ = (csa_tree_sub_26_2_groupi_n_11 ^ (n_5 ^ n_12));
 assign csa_tree_sub_26_2_groupi_n_70 = ((csa_tree_sub_26_2_groupi_n_68 & csa_tree_sub_26_2_groupi_n_8)
    | ((csa_tree_sub_26_2_groupi_n_8 & {in2[12]}) | ({in2[12]} & csa_tree_sub_26_2_groupi_n_68)));
 assign asc001_13_ = (csa_tree_sub_26_2_groupi_n_8 ^ ({in2[12]} ^ csa_tree_sub_26_2_groupi_n_68));
 assign csa_tree_sub_26_2_groupi_n_68 = ((csa_tree_sub_26_2_groupi_n_66 & csa_tree_sub_26_2_groupi_n_10)
    | ((csa_tree_sub_26_2_groupi_n_10 & {in2[11]}) | ({in2[11]} & csa_tree_sub_26_2_groupi_n_66)));
 assign asc001_12_ = (csa_tree_sub_26_2_groupi_n_10 ^ ({in2[11]} ^ csa_tree_sub_26_2_groupi_n_66));
 assign csa_tree_sub_26_2_groupi_n_66 = ((csa_tree_sub_26_2_groupi_n_64 & csa_tree_sub_26_2_groupi_n_7)
    | ((csa_tree_sub_26_2_groupi_n_7 & {in2[10]}) | ({in2[10]} & csa_tree_sub_26_2_groupi_n_64)));
 assign asc001_11_ = (csa_tree_sub_26_2_groupi_n_7 ^ ({in2[10]} ^ csa_tree_sub_26_2_groupi_n_64));
 assign csa_tree_sub_26_2_groupi_n_64 = ((csa_tree_sub_26_2_groupi_n_62 & csa_tree_sub_26_2_groupi_n_14)
    | ((csa_tree_sub_26_2_groupi_n_14 & {in2[9]}) | ({in2[9]} & csa_tree_sub_26_2_groupi_n_62)));
 assign asc001_10_ = (csa_tree_sub_26_2_groupi_n_14 ^ ({in2[9]} ^ csa_tree_sub_26_2_groupi_n_62));
 assign csa_tree_sub_26_2_groupi_n_62 = ((csa_tree_sub_26_2_groupi_n_60 & csa_tree_sub_26_2_groupi_n_9)
    | ((csa_tree_sub_26_2_groupi_n_9 & {in2[8]}) | ({in2[8]} & csa_tree_sub_26_2_groupi_n_60)));
 assign asc001_9_ = (csa_tree_sub_26_2_groupi_n_9 ^ ({in2[8]} ^ csa_tree_sub_26_2_groupi_n_60));
 assign csa_tree_sub_26_2_groupi_n_60 = ((csa_tree_sub_26_2_groupi_n_58 & csa_tree_sub_26_2_groupi_n_13)
    | ((csa_tree_sub_26_2_groupi_n_13 & csa_tree_sub_26_2_groupi_n_18) | (csa_tree_sub_26_2_groupi_n_18 &
    csa_tree_sub_26_2_groupi_n_58)));
 assign asc001_8_ = (csa_tree_sub_26_2_groupi_n_13 ^ (csa_tree_sub_26_2_groupi_n_18 ^ csa_tree_sub_26_2_groupi_n_58));
 assign csa_tree_sub_26_2_groupi_n_58 = ((csa_tree_sub_26_2_groupi_n_56 & csa_tree_sub_26_2_groupi_n_17)
    | ((csa_tree_sub_26_2_groupi_n_17 & csa_tree_sub_26_2_groupi_n_32) | (csa_tree_sub_26_2_groupi_n_32 &
    csa_tree_sub_26_2_groupi_n_56)));
 assign asc001_7_ = (csa_tree_sub_26_2_groupi_n_17 ^ (csa_tree_sub_26_2_groupi_n_32 ^ csa_tree_sub_26_2_groupi_n_56));
 assign csa_tree_sub_26_2_groupi_n_56 = ((csa_tree_sub_26_2_groupi_n_54 & csa_tree_sub_26_2_groupi_n_0)
    | ((csa_tree_sub_26_2_groupi_n_0 & csa_tree_sub_26_2_groupi_n_31) | (csa_tree_sub_26_2_groupi_n_31 &
    csa_tree_sub_26_2_groupi_n_54)));
 assign asc001_6_ = (csa_tree_sub_26_2_groupi_n_0 ^ (csa_tree_sub_26_2_groupi_n_31 ^ csa_tree_sub_26_2_groupi_n_54));
 assign csa_tree_sub_26_2_groupi_n_54 = ((csa_tree_sub_26_2_groupi_n_53 & csa_tree_sub_26_2_groupi_n_24)
    | ((csa_tree_sub_26_2_groupi_n_24 & csa_tree_sub_26_2_groupi_n_33) | (csa_tree_sub_26_2_groupi_n_33 &
    csa_tree_sub_26_2_groupi_n_53)));
 assign asc001_5_ = (csa_tree_sub_26_2_groupi_n_24 ^ (csa_tree_sub_26_2_groupi_n_33 ^ csa_tree_sub_26_2_groupi_n_53));
 assign csa_tree_sub_26_2_groupi_n_53 = ~(csa_tree_sub_26_2_groupi_n_2 & (n_49 | csa_tree_sub_26_2_groupi_n_46));
 assign asc001_4_ = ~(n_49 ^ csa_tree_sub_26_2_groupi_n_47);
 assign csa_tree_sub_26_2_groupi_n_49 = ~(n_50 | n_48);
 assign csa_tree_sub_26_2_groupi_n_46 = (csa_tree_sub_26_2_groupi_n_29 & csa_tree_sub_26_2_groupi_n_25);
 assign csa_tree_sub_26_2_groupi_n_47 = (csa_tree_sub_26_2_groupi_n_29 ^ csa_tree_sub_26_2_groupi_n_25);
 assign csa_tree_sub_26_2_groupi_n_45 = ~(n_52 ^ {in2[1]});
 assign csa_tree_sub_26_2_groupi_n_44 = ~(csa_tree_sub_26_2_groupi_n_35 ^ csa_tree_sub_26_2_groupi_n_5);
 assign asc001_1_ = ~(csa_tree_sub_26_2_groupi_n_26 ^ csa_tree_sub_26_2_groupi_n_19);
 assign csa_tree_sub_26_2_groupi_n_38 = ~(n_53 | csa_tree_sub_26_2_groupi_n_22);
 assign csa_tree_sub_26_2_groupi_n_37 = ~(csa_tree_sub_26_2_groupi_n_19 | (csa_tree_sub_26_2_groupi_n_15
    & {in2[1]}));
 assign csa_tree_sub_26_2_groupi_n_35 = ~n_53;
 assign csa_tree_sub_26_2_groupi_n_34 = ~csa_tree_sub_26_2_groupi_n_25;
 assign csa_tree_sub_26_2_groupi_n_33 = ~(csa_tree_sub_26_2_groupi_n_0 & ~({in1[5]} & {in2[5]}));
 assign csa_tree_sub_26_2_groupi_n_32 = ~(csa_tree_sub_26_2_groupi_n_18 & ~({in1[7]} & {in2[7]}));
 assign csa_tree_sub_26_2_groupi_n_31 = ~(csa_tree_sub_26_2_groupi_n_17 & ~({in1[6]} & {in2[6]}));
 assign csa_tree_sub_26_2_groupi_n_29 = ~(csa_tree_sub_26_2_groupi_n_23 | csa_tree_sub_26_2_groupi_n_1);
 assign asc001_0_ = ~({in1[0]} ^ {in2[0]});
 assign csa_tree_sub_26_2_groupi_n_26 = ~(({in1[1]} | {in2[1]}) & (csa_tree_sub_26_2_groupi_n_15 | csa_tree_sub_26_2_groupi_n_6));
 assign csa_tree_sub_26_2_groupi_n_24 = ~csa_tree_sub_26_2_groupi_n_23;
 assign csa_tree_sub_26_2_groupi_n_22 = ~csa_tree_sub_26_2_groupi_n_5;
 assign csa_tree_sub_26_2_groupi_n_25 = ~({in1[3]} | {in2[3]});
 assign csa_tree_sub_26_2_groupi_n_23 = ~({in1[4]} | {in2[4]});
 assign csa_tree_sub_26_2_groupi_n_5 = ~({in1[2]} | {in2[2]});
 assign csa_tree_sub_26_2_groupi_n_19 = ~({in1[0]} | {in2[0]});
 assign csa_tree_sub_26_2_groupi_n_18 = ({in1[7]} | {in2[7]});
 assign csa_tree_sub_26_2_groupi_n_17 = ({in1[6]} | {in2[6]});
 assign csa_tree_sub_26_2_groupi_n_15 = ~{in1[1]};
 assign csa_tree_sub_26_2_groupi_n_14 = ~{in2[10]};
 assign csa_tree_sub_26_2_groupi_n_13 = ~{in2[8]};
 assign csa_tree_sub_26_2_groupi_n_12 = ~n_18;
 assign csa_tree_sub_26_2_groupi_n_11 = ~n_22;
 assign csa_tree_sub_26_2_groupi_n_10 = ~{in2[12]};
 assign csa_tree_sub_26_2_groupi_n_9 = ~{in2[9]};
 assign csa_tree_sub_26_2_groupi_n_8 = ~{in2[13]};
 assign csa_tree_sub_26_2_groupi_n_7 = ~{in2[11]};
 assign csa_tree_sub_26_2_groupi_n_6 = ~{in2[1]};
 assign asc001_2_ = (csa_tree_sub_26_2_groupi_n_45 ^ n_51);
 assign csa_tree_sub_26_2_groupi_n_2 = ~(csa_tree_sub_26_2_groupi_n_34 & ~csa_tree_sub_26_2_groupi_n_29);
 assign csa_tree_sub_26_2_groupi_n_1 = ({in1[4]} & {in2[4]});
 assign csa_tree_sub_26_2_groupi_n_0 = ({in1[5]} | {in2[5]});
 assign n_48 = ~(csa_tree_sub_26_2_groupi_n_6 | ~n_52);
 assign n_49 = ((csa_tree_sub_26_2_groupi_n_49 | csa_tree_sub_26_2_groupi_n_38) & (csa_tree_sub_26_2_groupi_n_35
    | csa_tree_sub_26_2_groupi_n_5));
 assign n_50 = ~(n_51 | ~(n_52 | {in2[1]}));
 assign n_51 = ~(csa_tree_sub_26_2_groupi_n_37 | ~({in2[1]} | csa_tree_sub_26_2_groupi_n_15));
 assign n_52 = ~(csa_tree_sub_26_2_groupi_n_22 & ~({in1[2]} & {in2[2]}));
 assign n_53 = ~(csa_tree_sub_26_2_groupi_n_34 & ~({in1[3]} & {in2[3]}));
endmodule

