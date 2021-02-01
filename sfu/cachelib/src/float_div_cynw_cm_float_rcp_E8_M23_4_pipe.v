module float_div_cynw_cm_float_rcp_E8_M23_4_0( a_sign, a_exp, a_man, x, aclk, astall );
input aclk;
input astall;
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire[36:0] x_wire;
float_div_cynw_cm_float_rcp_E8_M23_2 float_div_cynw_cm_float_rcp_E8_M23_2_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .x(x_wire));
wire bdw_enable;
assign bdw_enable = ~astall;
rreg #( 37, 5, 37, 2) x_reg( x_wire, {1'B1, 1'B1, 1'B1, bdw_enable,aclk}, x );
endmodule


