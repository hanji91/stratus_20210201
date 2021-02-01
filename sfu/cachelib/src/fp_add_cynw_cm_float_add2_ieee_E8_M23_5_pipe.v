module fp_add_cynw_cm_float_add2_ieee_E8_M23_5_0( a_sign, a_exp, a_man, b_sign, b_exp, b_man, rm, x, aclk, astall );
input aclk;
input astall;
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input b_sign;
input [7:0] b_exp;
input [22:0] b_man;
input [2:0] rm;
output [31:0] x;
wire[31:0] x_wire;
fp_add_cynw_cm_float_add2_ieee_E8_M23_3 fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .rm(rm), .x(x_wire));
wire bdw_enable;
assign bdw_enable = ~astall;
rreg #( 32, 5, 32, 2) x_reg( x_wire, {1'B1, 1'B1, 1'B1, bdw_enable,aclk}, x );
endmodule


