`timescale 1ps / 1ps
module cache_Mul2i10u16_4_1(
          in1,
          out1,
          clk
);
   input [15:0] in1;
   output [19:0] out1;
   input clk;
wire const_mul_20_8_n_0, const_mul_20_8_n_2, const_mul_20_8_n_3,
     const_mul_20_8_n_4, const_mul_20_8_n_5, const_mul_20_8_n_6,
     const_mul_20_8_n_8, const_mul_20_8_n_9, const_mul_20_8_n_14,
     const_mul_20_8_n_15, const_mul_20_8_n_17, const_mul_20_8_n_19,
     const_mul_20_8_n_21, const_mul_20_8_n_23, const_mul_20_8_n_25,
     const_mul_20_8_n_27, const_mul_20_8_n_29, const_mul_20_8_n_31,
     const_mul_20_8_n_33, const_mul_20_8_n_35, const_mul_20_8_n_37, n_11, n_12,
     n_18, n_22, n_23, clk, n_39, asc001_3_, asc001_4_, asc001_5_, asc001_6_,
     asc001_7_, asc001_8_, asc001_9_, asc001_10_, asc001_11_, asc001_12_,
     asc001_13_, asc001_14_, asc001_15_, asc001_16_, asc001_17_, asc001_18_,
     asc001_19_;
assign {out1[19]} = asc001_19_;
assign {out1[18]} = asc001_18_;
assign {out1[17]} = asc001_17_;
assign {out1[16]} = asc001_16_;
assign {out1[15]} = n_11;
 reg out1_11_L0_reg_N30;
 always @(posedge clk)
         out1_11_L0_reg_N30 <= asc001_8_;
 assign {out1[8]} = out1_11_L0_reg_N30;
 reg retime_s1_5_reg_reg_N30;
 always @(posedge clk)
         retime_s1_5_reg_reg_N30 <= asc001_15_;
 assign n_11 = retime_s1_5_reg_reg_N30;
 reg out1_6_L0_reg_N30;
 always @(posedge clk)
         out1_6_L0_reg_N30 <= asc001_13_;
 assign {out1[13]} = out1_6_L0_reg_N30;
 reg out1_7_L0_reg_N30;
 always @(posedge clk)
         out1_7_L0_reg_N30 <= asc001_12_;
 assign {out1[12]} = out1_7_L0_reg_N30;
 reg out1_8_L0_reg_N30;
 always @(posedge clk)
         out1_8_L0_reg_N30 <= asc001_11_;
 assign {out1[11]} = out1_8_L0_reg_N30;
 reg retime_s1_1_reg_reg_N30;
 always @(posedge clk)
         retime_s1_1_reg_reg_N30 <= {in1[15]};
 assign n_23 = retime_s1_1_reg_reg_N30;
 reg out1_9_L0_reg_N30;
 always @(posedge clk)
         out1_9_L0_reg_N30 <= asc001_10_;
 assign {out1[10]} = out1_9_L0_reg_N30;
 reg out1_10_L0_reg_N30;
 always @(posedge clk)
         out1_10_L0_reg_N30 <= asc001_9_;
 assign {out1[9]} = out1_10_L0_reg_N30;
 reg out1_5_L0_reg_N30;
 always @(posedge clk)
         out1_5_L0_reg_N30 <= asc001_14_;
 assign {out1[14]} = out1_5_L0_reg_N30;
 reg out1_12_L0_reg_N30;
 always @(posedge clk)
         out1_12_L0_reg_N30 <= asc001_7_;
 assign {out1[7]} = out1_12_L0_reg_N30;
 reg out1_13_L0_reg_N30;
 always @(posedge clk)
         out1_13_L0_reg_N30 <= asc001_6_;
 assign {out1[6]} = out1_13_L0_reg_N30;
 reg out1_14_L0_reg_N30;
 always @(posedge clk)
         out1_14_L0_reg_N30 <= asc001_5_;
 assign {out1[5]} = out1_14_L0_reg_N30;
 reg out1_15_L0_reg_N30;
 always @(posedge clk)
         out1_15_L0_reg_N30 <= asc001_4_;
 assign {out1[4]} = out1_15_L0_reg_N30;
 reg out1_16_L0_reg_N30;
 always @(posedge clk)
         out1_16_L0_reg_N30 <= asc001_3_;
 assign {out1[3]} = out1_16_L0_reg_N30;
 reg out1_17_L0_reg_N30;
 always @(posedge clk)
         out1_17_L0_reg_N30 <= {in1[1]};
 assign {out1[2]} = out1_17_L0_reg_N30;
 reg out1_18_L0_reg_N30;
 always @(posedge clk)
         out1_18_L0_reg_N30 <= {in1[0]};
 assign {out1[1]} = out1_18_L0_reg_N30;
 reg retime_s1_2_reg_reg_N30;
 always @(posedge clk)
         retime_s1_2_reg_reg_N30 <= {in1[14]};
 assign n_22 = retime_s1_2_reg_reg_N30;
 reg retime_s1_3_reg_reg_N30;
 always @(posedge clk)
         retime_s1_3_reg_reg_N30 <= {in1[13]};
 assign n_18 = retime_s1_3_reg_reg_N30;
 reg retime_s1_4_reg_reg_N30;
 always @(posedge clk)
         retime_s1_4_reg_reg_N30 <= const_mul_20_8_n_33;
 assign n_12 = retime_s1_4_reg_reg_N30;
 assign const_mul_20_8_n_0 = ~((const_mul_20_8_n_2 & ~{in1[4]}) | ({in1[2]} & {in1[4]}));
 assign asc001_19_ = (const_mul_20_8_n_37 & n_23);
 assign asc001_18_ = (const_mul_20_8_n_37 ^ n_23);
 assign const_mul_20_8_n_37 = (const_mul_20_8_n_35 & n_22);
 assign asc001_17_ = (const_mul_20_8_n_35 ^ n_22);
 assign const_mul_20_8_n_35 = ((n_12 & n_23) | ((n_23 & n_18) | (n_18 & n_12)));
 assign asc001_16_ = (n_23 ^ (n_18 ^ n_12));
 assign const_mul_20_8_n_33 = ((const_mul_20_8_n_31 & {in1[14]}) | (({in1[14]} & {in1[12]}) | ({in1[12]}
    & const_mul_20_8_n_31)));
 assign asc001_15_ = ({in1[14]} ^ ({in1[12]} ^ const_mul_20_8_n_31));
 assign const_mul_20_8_n_31 = ((const_mul_20_8_n_29 & {in1[13]}) | (({in1[13]} & {in1[11]}) | ({in1[11]}
    & const_mul_20_8_n_29)));
 assign asc001_14_ = ({in1[13]} ^ ({in1[11]} ^ const_mul_20_8_n_29));
 assign const_mul_20_8_n_29 = ((const_mul_20_8_n_27 & {in1[12]}) | (({in1[12]} & {in1[10]}) | ({in1[10]}
    & const_mul_20_8_n_27)));
 assign asc001_13_ = ({in1[12]} ^ ({in1[10]} ^ const_mul_20_8_n_27));
 assign const_mul_20_8_n_27 = ((const_mul_20_8_n_25 & {in1[11]}) | (({in1[11]} & {in1[9]}) | ({in1[9]}
    & const_mul_20_8_n_25)));
 assign asc001_12_ = ({in1[11]} ^ ({in1[9]} ^ const_mul_20_8_n_25));
 assign const_mul_20_8_n_25 = ((const_mul_20_8_n_23 & {in1[10]}) | (({in1[10]} & {in1[8]}) | ({in1[8]}
    & const_mul_20_8_n_23)));
 assign asc001_11_ = ({in1[10]} ^ ({in1[8]} ^ const_mul_20_8_n_23));
 assign const_mul_20_8_n_23 = ((const_mul_20_8_n_21 & {in1[9]}) | (({in1[9]} & {in1[7]}) | ({in1[7]}
    & const_mul_20_8_n_21)));
 assign asc001_10_ = ({in1[9]} ^ ({in1[7]} ^ const_mul_20_8_n_21));
 assign const_mul_20_8_n_21 = ((const_mul_20_8_n_19 & {in1[8]}) | (({in1[8]} & {in1[6]}) | ({in1[6]}
    & const_mul_20_8_n_19)));
 assign asc001_9_ = ({in1[8]} ^ ({in1[6]} ^ const_mul_20_8_n_19));
 assign const_mul_20_8_n_19 = ((const_mul_20_8_n_17 & {in1[7]}) | (({in1[7]} & {in1[5]}) | ({in1[5]}
    & const_mul_20_8_n_17)));
 assign asc001_8_ = ({in1[7]} ^ ({in1[5]} ^ const_mul_20_8_n_17));
 assign const_mul_20_8_n_17 = ((const_mul_20_8_n_15 & {in1[6]}) | (({in1[6]} & {in1[4]}) | ({in1[4]}
    & const_mul_20_8_n_15)));
 assign asc001_7_ = ({in1[6]} ^ ({in1[4]} ^ const_mul_20_8_n_15));
 assign const_mul_20_8_n_15 = ((const_mul_20_8_n_14 & {in1[5]}) | (({in1[5]} & {in1[3]}) | ({in1[3]}
    & const_mul_20_8_n_14)));
 assign asc001_6_ = ({in1[5]} ^ ({in1[3]} ^ const_mul_20_8_n_14));
 assign const_mul_20_8_n_14 = ~(const_mul_20_8_n_4 & (n_39 | const_mul_20_8_n_6));
 assign asc001_5_ = ~(n_39 ^ const_mul_20_8_n_0);
 assign asc001_4_ = ~(const_mul_20_8_n_9 ^ const_mul_20_8_n_3);
 assign const_mul_20_8_n_8 = ({in1[1]} & {in1[3]});
 assign const_mul_20_8_n_9 = ({in1[1]} ^ {in1[3]});
 assign asc001_3_ = ~((const_mul_20_8_n_2 & ~{in1[0]}) | ({in1[2]} & {in1[0]}));
 assign const_mul_20_8_n_6 = ~({in1[2]} | {in1[4]});
 assign const_mul_20_8_n_5 = ~({in1[1]} | {in1[3]});
 assign const_mul_20_8_n_4 = ~({in1[2]} & {in1[4]});
 assign const_mul_20_8_n_3 = ~({in1[0]} & {in1[2]});
 assign const_mul_20_8_n_2 = ~{in1[2]};
 assign n_39 = ~(const_mul_20_8_n_8 | ~(const_mul_20_8_n_5 | const_mul_20_8_n_3));
assign out1[0] = 1'B0;
endmodule

