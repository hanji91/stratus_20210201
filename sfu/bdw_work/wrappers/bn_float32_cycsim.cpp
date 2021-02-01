/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/

#ifdef NCSC
#include <string>
typedef std::string sc_string;
#define SYSTEMC_VERSION 20070314
#endif

#include "bn_float32_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vbn_float32_rtl.h"


class Vbn_float32_rtl;

class bn_float32_cycsimV : public bn_float32_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > src_man_0_I;
    sc_signal< uint32_t > src_exp_0_I;
    sc_signal< bool > src_sign_0_I;
    sc_signal< uint32_t > src_man_1_I;
    sc_signal< uint32_t > src_exp_1_I;
    sc_signal< bool > src_sign_1_I;
    sc_signal< uint32_t > src_man_2_I;
    sc_signal< uint32_t > src_exp_2_I;
    sc_signal< bool > src_sign_2_I;
    sc_signal< uint32_t > src_man_3_I;
    sc_signal< uint32_t > src_exp_3_I;
    sc_signal< bool > src_sign_3_I;
    sc_signal< uint32_t > src_man_4_I;
    sc_signal< uint32_t > src_exp_4_I;
    sc_signal< bool > src_sign_4_I;
    sc_signal< uint32_t > src_man_5_I;
    sc_signal< uint32_t > src_exp_5_I;
    sc_signal< bool > src_sign_5_I;
    sc_signal< uint32_t > src_man_6_I;
    sc_signal< uint32_t > src_exp_6_I;
    sc_signal< bool > src_sign_6_I;
    sc_signal< uint32_t > src_man_7_I;
    sc_signal< uint32_t > src_exp_7_I;
    sc_signal< bool > src_sign_7_I;
    sc_signal< uint32_t > mul_coeff_man_0_I;
    sc_signal< uint32_t > mul_coeff_exp_0_I;
    sc_signal< bool > mul_coeff_sign_0_I;
    sc_signal< uint32_t > mul_coeff_man_1_I;
    sc_signal< uint32_t > mul_coeff_exp_1_I;
    sc_signal< bool > mul_coeff_sign_1_I;
    sc_signal< uint32_t > mul_coeff_man_2_I;
    sc_signal< uint32_t > mul_coeff_exp_2_I;
    sc_signal< bool > mul_coeff_sign_2_I;
    sc_signal< uint32_t > mul_coeff_man_3_I;
    sc_signal< uint32_t > mul_coeff_exp_3_I;
    sc_signal< bool > mul_coeff_sign_3_I;
    sc_signal< uint32_t > mul_coeff_man_4_I;
    sc_signal< uint32_t > mul_coeff_exp_4_I;
    sc_signal< bool > mul_coeff_sign_4_I;
    sc_signal< uint32_t > mul_coeff_man_5_I;
    sc_signal< uint32_t > mul_coeff_exp_5_I;
    sc_signal< bool > mul_coeff_sign_5_I;
    sc_signal< uint32_t > mul_coeff_man_6_I;
    sc_signal< uint32_t > mul_coeff_exp_6_I;
    sc_signal< bool > mul_coeff_sign_6_I;
    sc_signal< uint32_t > mul_coeff_man_7_I;
    sc_signal< uint32_t > mul_coeff_exp_7_I;
    sc_signal< bool > mul_coeff_sign_7_I;
    sc_signal< uint32_t > add_coeff_man_0_I;
    sc_signal< uint32_t > add_coeff_exp_0_I;
    sc_signal< bool > add_coeff_sign_0_I;
    sc_signal< uint32_t > add_coeff_man_1_I;
    sc_signal< uint32_t > add_coeff_exp_1_I;
    sc_signal< bool > add_coeff_sign_1_I;
    sc_signal< uint32_t > add_coeff_man_2_I;
    sc_signal< uint32_t > add_coeff_exp_2_I;
    sc_signal< bool > add_coeff_sign_2_I;
    sc_signal< uint32_t > add_coeff_man_3_I;
    sc_signal< uint32_t > add_coeff_exp_3_I;
    sc_signal< bool > add_coeff_sign_3_I;
    sc_signal< uint32_t > add_coeff_man_4_I;
    sc_signal< uint32_t > add_coeff_exp_4_I;
    sc_signal< bool > add_coeff_sign_4_I;
    sc_signal< uint32_t > add_coeff_man_5_I;
    sc_signal< uint32_t > add_coeff_exp_5_I;
    sc_signal< bool > add_coeff_sign_5_I;
    sc_signal< uint32_t > add_coeff_man_6_I;
    sc_signal< uint32_t > add_coeff_exp_6_I;
    sc_signal< bool > add_coeff_sign_6_I;
    sc_signal< uint32_t > add_coeff_man_7_I;
    sc_signal< uint32_t > add_coeff_exp_7_I;
    sc_signal< bool > add_coeff_sign_7_I;
    sc_signal< uint32_t > dst_man_0_O;
    sc_signal< uint32_t > dst_exp_0_O;
    sc_signal< bool > dst_sign_0_O;
    sc_signal< uint32_t > dst_man_1_O;
    sc_signal< uint32_t > dst_exp_1_O;
    sc_signal< bool > dst_sign_1_O;
    sc_signal< uint32_t > dst_man_2_O;
    sc_signal< uint32_t > dst_exp_2_O;
    sc_signal< bool > dst_sign_2_O;
    sc_signal< uint32_t > dst_man_3_O;
    sc_signal< uint32_t > dst_exp_3_O;
    sc_signal< bool > dst_sign_3_O;
    sc_signal< uint32_t > dst_man_4_O;
    sc_signal< uint32_t > dst_exp_4_O;
    sc_signal< bool > dst_sign_4_O;
    sc_signal< uint32_t > dst_man_5_O;
    sc_signal< uint32_t > dst_exp_5_O;
    sc_signal< bool > dst_sign_5_O;
    sc_signal< uint32_t > dst_man_6_O;
    sc_signal< uint32_t > dst_exp_6_O;
    sc_signal< bool > dst_sign_6_O;
    sc_signal< uint32_t > dst_man_7_O;
    sc_signal< uint32_t > dst_exp_7_O;
    sc_signal< bool > dst_sign_7_O;


    // The following threads are used to do the type conversion.
    inline void thread_src_man_0_I() {
        src_man_0_I = (sc_uint<23>)src_man_0.read();
    };
    inline void thread_src_exp_0_I() {
        src_exp_0_I = (sc_uint<8>)src_exp_0.read();
    };
    inline void thread_src_sign_0_I() {
        src_sign_0_I = (sc_uint<1>)src_sign_0.read();
    };
    inline void thread_src_man_1_I() {
        src_man_1_I = (sc_uint<23>)src_man_1.read();
    };
    inline void thread_src_exp_1_I() {
        src_exp_1_I = (sc_uint<8>)src_exp_1.read();
    };
    inline void thread_src_sign_1_I() {
        src_sign_1_I = (sc_uint<1>)src_sign_1.read();
    };
    inline void thread_src_man_2_I() {
        src_man_2_I = (sc_uint<23>)src_man_2.read();
    };
    inline void thread_src_exp_2_I() {
        src_exp_2_I = (sc_uint<8>)src_exp_2.read();
    };
    inline void thread_src_sign_2_I() {
        src_sign_2_I = (sc_uint<1>)src_sign_2.read();
    };
    inline void thread_src_man_3_I() {
        src_man_3_I = (sc_uint<23>)src_man_3.read();
    };
    inline void thread_src_exp_3_I() {
        src_exp_3_I = (sc_uint<8>)src_exp_3.read();
    };
    inline void thread_src_sign_3_I() {
        src_sign_3_I = (sc_uint<1>)src_sign_3.read();
    };
    inline void thread_src_man_4_I() {
        src_man_4_I = (sc_uint<23>)src_man_4.read();
    };
    inline void thread_src_exp_4_I() {
        src_exp_4_I = (sc_uint<8>)src_exp_4.read();
    };
    inline void thread_src_sign_4_I() {
        src_sign_4_I = (sc_uint<1>)src_sign_4.read();
    };
    inline void thread_src_man_5_I() {
        src_man_5_I = (sc_uint<23>)src_man_5.read();
    };
    inline void thread_src_exp_5_I() {
        src_exp_5_I = (sc_uint<8>)src_exp_5.read();
    };
    inline void thread_src_sign_5_I() {
        src_sign_5_I = (sc_uint<1>)src_sign_5.read();
    };
    inline void thread_src_man_6_I() {
        src_man_6_I = (sc_uint<23>)src_man_6.read();
    };
    inline void thread_src_exp_6_I() {
        src_exp_6_I = (sc_uint<8>)src_exp_6.read();
    };
    inline void thread_src_sign_6_I() {
        src_sign_6_I = (sc_uint<1>)src_sign_6.read();
    };
    inline void thread_src_man_7_I() {
        src_man_7_I = (sc_uint<23>)src_man_7.read();
    };
    inline void thread_src_exp_7_I() {
        src_exp_7_I = (sc_uint<8>)src_exp_7.read();
    };
    inline void thread_src_sign_7_I() {
        src_sign_7_I = (sc_uint<1>)src_sign_7.read();
    };
    inline void thread_mul_coeff_man_0_I() {
        mul_coeff_man_0_I = (sc_uint<23>)mul_coeff_man_0.read();
    };
    inline void thread_mul_coeff_exp_0_I() {
        mul_coeff_exp_0_I = (sc_uint<8>)mul_coeff_exp_0.read();
    };
    inline void thread_mul_coeff_sign_0_I() {
        mul_coeff_sign_0_I = (sc_uint<1>)mul_coeff_sign_0.read();
    };
    inline void thread_mul_coeff_man_1_I() {
        mul_coeff_man_1_I = (sc_uint<23>)mul_coeff_man_1.read();
    };
    inline void thread_mul_coeff_exp_1_I() {
        mul_coeff_exp_1_I = (sc_uint<8>)mul_coeff_exp_1.read();
    };
    inline void thread_mul_coeff_sign_1_I() {
        mul_coeff_sign_1_I = (sc_uint<1>)mul_coeff_sign_1.read();
    };
    inline void thread_mul_coeff_man_2_I() {
        mul_coeff_man_2_I = (sc_uint<23>)mul_coeff_man_2.read();
    };
    inline void thread_mul_coeff_exp_2_I() {
        mul_coeff_exp_2_I = (sc_uint<8>)mul_coeff_exp_2.read();
    };
    inline void thread_mul_coeff_sign_2_I() {
        mul_coeff_sign_2_I = (sc_uint<1>)mul_coeff_sign_2.read();
    };
    inline void thread_mul_coeff_man_3_I() {
        mul_coeff_man_3_I = (sc_uint<23>)mul_coeff_man_3.read();
    };
    inline void thread_mul_coeff_exp_3_I() {
        mul_coeff_exp_3_I = (sc_uint<8>)mul_coeff_exp_3.read();
    };
    inline void thread_mul_coeff_sign_3_I() {
        mul_coeff_sign_3_I = (sc_uint<1>)mul_coeff_sign_3.read();
    };
    inline void thread_mul_coeff_man_4_I() {
        mul_coeff_man_4_I = (sc_uint<23>)mul_coeff_man_4.read();
    };
    inline void thread_mul_coeff_exp_4_I() {
        mul_coeff_exp_4_I = (sc_uint<8>)mul_coeff_exp_4.read();
    };
    inline void thread_mul_coeff_sign_4_I() {
        mul_coeff_sign_4_I = (sc_uint<1>)mul_coeff_sign_4.read();
    };
    inline void thread_mul_coeff_man_5_I() {
        mul_coeff_man_5_I = (sc_uint<23>)mul_coeff_man_5.read();
    };
    inline void thread_mul_coeff_exp_5_I() {
        mul_coeff_exp_5_I = (sc_uint<8>)mul_coeff_exp_5.read();
    };
    inline void thread_mul_coeff_sign_5_I() {
        mul_coeff_sign_5_I = (sc_uint<1>)mul_coeff_sign_5.read();
    };
    inline void thread_mul_coeff_man_6_I() {
        mul_coeff_man_6_I = (sc_uint<23>)mul_coeff_man_6.read();
    };
    inline void thread_mul_coeff_exp_6_I() {
        mul_coeff_exp_6_I = (sc_uint<8>)mul_coeff_exp_6.read();
    };
    inline void thread_mul_coeff_sign_6_I() {
        mul_coeff_sign_6_I = (sc_uint<1>)mul_coeff_sign_6.read();
    };
    inline void thread_mul_coeff_man_7_I() {
        mul_coeff_man_7_I = (sc_uint<23>)mul_coeff_man_7.read();
    };
    inline void thread_mul_coeff_exp_7_I() {
        mul_coeff_exp_7_I = (sc_uint<8>)mul_coeff_exp_7.read();
    };
    inline void thread_mul_coeff_sign_7_I() {
        mul_coeff_sign_7_I = (sc_uint<1>)mul_coeff_sign_7.read();
    };
    inline void thread_add_coeff_man_0_I() {
        add_coeff_man_0_I = (sc_uint<23>)add_coeff_man_0.read();
    };
    inline void thread_add_coeff_exp_0_I() {
        add_coeff_exp_0_I = (sc_uint<8>)add_coeff_exp_0.read();
    };
    inline void thread_add_coeff_sign_0_I() {
        add_coeff_sign_0_I = (sc_uint<1>)add_coeff_sign_0.read();
    };
    inline void thread_add_coeff_man_1_I() {
        add_coeff_man_1_I = (sc_uint<23>)add_coeff_man_1.read();
    };
    inline void thread_add_coeff_exp_1_I() {
        add_coeff_exp_1_I = (sc_uint<8>)add_coeff_exp_1.read();
    };
    inline void thread_add_coeff_sign_1_I() {
        add_coeff_sign_1_I = (sc_uint<1>)add_coeff_sign_1.read();
    };
    inline void thread_add_coeff_man_2_I() {
        add_coeff_man_2_I = (sc_uint<23>)add_coeff_man_2.read();
    };
    inline void thread_add_coeff_exp_2_I() {
        add_coeff_exp_2_I = (sc_uint<8>)add_coeff_exp_2.read();
    };
    inline void thread_add_coeff_sign_2_I() {
        add_coeff_sign_2_I = (sc_uint<1>)add_coeff_sign_2.read();
    };
    inline void thread_add_coeff_man_3_I() {
        add_coeff_man_3_I = (sc_uint<23>)add_coeff_man_3.read();
    };
    inline void thread_add_coeff_exp_3_I() {
        add_coeff_exp_3_I = (sc_uint<8>)add_coeff_exp_3.read();
    };
    inline void thread_add_coeff_sign_3_I() {
        add_coeff_sign_3_I = (sc_uint<1>)add_coeff_sign_3.read();
    };
    inline void thread_add_coeff_man_4_I() {
        add_coeff_man_4_I = (sc_uint<23>)add_coeff_man_4.read();
    };
    inline void thread_add_coeff_exp_4_I() {
        add_coeff_exp_4_I = (sc_uint<8>)add_coeff_exp_4.read();
    };
    inline void thread_add_coeff_sign_4_I() {
        add_coeff_sign_4_I = (sc_uint<1>)add_coeff_sign_4.read();
    };
    inline void thread_add_coeff_man_5_I() {
        add_coeff_man_5_I = (sc_uint<23>)add_coeff_man_5.read();
    };
    inline void thread_add_coeff_exp_5_I() {
        add_coeff_exp_5_I = (sc_uint<8>)add_coeff_exp_5.read();
    };
    inline void thread_add_coeff_sign_5_I() {
        add_coeff_sign_5_I = (sc_uint<1>)add_coeff_sign_5.read();
    };
    inline void thread_add_coeff_man_6_I() {
        add_coeff_man_6_I = (sc_uint<23>)add_coeff_man_6.read();
    };
    inline void thread_add_coeff_exp_6_I() {
        add_coeff_exp_6_I = (sc_uint<8>)add_coeff_exp_6.read();
    };
    inline void thread_add_coeff_sign_6_I() {
        add_coeff_sign_6_I = (sc_uint<1>)add_coeff_sign_6.read();
    };
    inline void thread_add_coeff_man_7_I() {
        add_coeff_man_7_I = (sc_uint<23>)add_coeff_man_7.read();
    };
    inline void thread_add_coeff_exp_7_I() {
        add_coeff_exp_7_I = (sc_uint<8>)add_coeff_exp_7.read();
    };
    inline void thread_add_coeff_sign_7_I() {
        add_coeff_sign_7_I = (sc_uint<1>)add_coeff_sign_7.read();
    };
    inline void thread_dst_man_0_O() {
        dst_man_0 = dst_man_0_O.read();
    };
    inline void thread_dst_exp_0_O() {
        dst_exp_0 = dst_exp_0_O.read();
    };
    inline void thread_dst_sign_0_O() {
        dst_sign_0 = dst_sign_0_O.read();
    };
    inline void thread_dst_man_1_O() {
        dst_man_1 = dst_man_1_O.read();
    };
    inline void thread_dst_exp_1_O() {
        dst_exp_1 = dst_exp_1_O.read();
    };
    inline void thread_dst_sign_1_O() {
        dst_sign_1 = dst_sign_1_O.read();
    };
    inline void thread_dst_man_2_O() {
        dst_man_2 = dst_man_2_O.read();
    };
    inline void thread_dst_exp_2_O() {
        dst_exp_2 = dst_exp_2_O.read();
    };
    inline void thread_dst_sign_2_O() {
        dst_sign_2 = dst_sign_2_O.read();
    };
    inline void thread_dst_man_3_O() {
        dst_man_3 = dst_man_3_O.read();
    };
    inline void thread_dst_exp_3_O() {
        dst_exp_3 = dst_exp_3_O.read();
    };
    inline void thread_dst_sign_3_O() {
        dst_sign_3 = dst_sign_3_O.read();
    };
    inline void thread_dst_man_4_O() {
        dst_man_4 = dst_man_4_O.read();
    };
    inline void thread_dst_exp_4_O() {
        dst_exp_4 = dst_exp_4_O.read();
    };
    inline void thread_dst_sign_4_O() {
        dst_sign_4 = dst_sign_4_O.read();
    };
    inline void thread_dst_man_5_O() {
        dst_man_5 = dst_man_5_O.read();
    };
    inline void thread_dst_exp_5_O() {
        dst_exp_5 = dst_exp_5_O.read();
    };
    inline void thread_dst_sign_5_O() {
        dst_sign_5 = dst_sign_5_O.read();
    };
    inline void thread_dst_man_6_O() {
        dst_man_6 = dst_man_6_O.read();
    };
    inline void thread_dst_exp_6_O() {
        dst_exp_6 = dst_exp_6_O.read();
    };
    inline void thread_dst_sign_6_O() {
        dst_sign_6 = dst_sign_6_O.read();
    };
    inline void thread_dst_man_7_O() {
        dst_man_7 = dst_man_7_O.read();
    };
    inline void thread_dst_exp_7_O() {
        dst_exp_7 = dst_exp_7_O.read();
    };
    inline void thread_dst_sign_7_O() {
        dst_sign_7 = dst_sign_7_O.read();
    };


    SC_HAS_PROCESS(bn_float32_cycsimV);

public:

    bn_float32_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" bn_float32") ) )
        : bn_float32_cycsim(in_name)
    {
        // instantiate the verilated module
        bn_float32_cyc0 = new Vbn_float32_rtl( "Vbn_float32" );
        // generate port connections
        bn_float32_cyc0->clk(clk);
        bn_float32_cyc0->rstn(rstn);
        bn_float32_cyc0->enable(enable);
        bn_float32_cyc0->src_valid(src_valid);
        bn_float32_cyc0->src_man_0(src_man_0_I);
        bn_float32_cyc0->src_exp_0(src_exp_0_I);
        bn_float32_cyc0->src_sign_0(src_sign_0_I);
        bn_float32_cyc0->src_man_1(src_man_1_I);
        bn_float32_cyc0->src_exp_1(src_exp_1_I);
        bn_float32_cyc0->src_sign_1(src_sign_1_I);
        bn_float32_cyc0->src_man_2(src_man_2_I);
        bn_float32_cyc0->src_exp_2(src_exp_2_I);
        bn_float32_cyc0->src_sign_2(src_sign_2_I);
        bn_float32_cyc0->src_man_3(src_man_3_I);
        bn_float32_cyc0->src_exp_3(src_exp_3_I);
        bn_float32_cyc0->src_sign_3(src_sign_3_I);
        bn_float32_cyc0->src_man_4(src_man_4_I);
        bn_float32_cyc0->src_exp_4(src_exp_4_I);
        bn_float32_cyc0->src_sign_4(src_sign_4_I);
        bn_float32_cyc0->src_man_5(src_man_5_I);
        bn_float32_cyc0->src_exp_5(src_exp_5_I);
        bn_float32_cyc0->src_sign_5(src_sign_5_I);
        bn_float32_cyc0->src_man_6(src_man_6_I);
        bn_float32_cyc0->src_exp_6(src_exp_6_I);
        bn_float32_cyc0->src_sign_6(src_sign_6_I);
        bn_float32_cyc0->src_man_7(src_man_7_I);
        bn_float32_cyc0->src_exp_7(src_exp_7_I);
        bn_float32_cyc0->src_sign_7(src_sign_7_I);
        bn_float32_cyc0->mul_coeff_man_0(mul_coeff_man_0_I);
        bn_float32_cyc0->mul_coeff_exp_0(mul_coeff_exp_0_I);
        bn_float32_cyc0->mul_coeff_sign_0(mul_coeff_sign_0_I);
        bn_float32_cyc0->mul_coeff_man_1(mul_coeff_man_1_I);
        bn_float32_cyc0->mul_coeff_exp_1(mul_coeff_exp_1_I);
        bn_float32_cyc0->mul_coeff_sign_1(mul_coeff_sign_1_I);
        bn_float32_cyc0->mul_coeff_man_2(mul_coeff_man_2_I);
        bn_float32_cyc0->mul_coeff_exp_2(mul_coeff_exp_2_I);
        bn_float32_cyc0->mul_coeff_sign_2(mul_coeff_sign_2_I);
        bn_float32_cyc0->mul_coeff_man_3(mul_coeff_man_3_I);
        bn_float32_cyc0->mul_coeff_exp_3(mul_coeff_exp_3_I);
        bn_float32_cyc0->mul_coeff_sign_3(mul_coeff_sign_3_I);
        bn_float32_cyc0->mul_coeff_man_4(mul_coeff_man_4_I);
        bn_float32_cyc0->mul_coeff_exp_4(mul_coeff_exp_4_I);
        bn_float32_cyc0->mul_coeff_sign_4(mul_coeff_sign_4_I);
        bn_float32_cyc0->mul_coeff_man_5(mul_coeff_man_5_I);
        bn_float32_cyc0->mul_coeff_exp_5(mul_coeff_exp_5_I);
        bn_float32_cyc0->mul_coeff_sign_5(mul_coeff_sign_5_I);
        bn_float32_cyc0->mul_coeff_man_6(mul_coeff_man_6_I);
        bn_float32_cyc0->mul_coeff_exp_6(mul_coeff_exp_6_I);
        bn_float32_cyc0->mul_coeff_sign_6(mul_coeff_sign_6_I);
        bn_float32_cyc0->mul_coeff_man_7(mul_coeff_man_7_I);
        bn_float32_cyc0->mul_coeff_exp_7(mul_coeff_exp_7_I);
        bn_float32_cyc0->mul_coeff_sign_7(mul_coeff_sign_7_I);
        bn_float32_cyc0->add_coeff_man_0(add_coeff_man_0_I);
        bn_float32_cyc0->add_coeff_exp_0(add_coeff_exp_0_I);
        bn_float32_cyc0->add_coeff_sign_0(add_coeff_sign_0_I);
        bn_float32_cyc0->add_coeff_man_1(add_coeff_man_1_I);
        bn_float32_cyc0->add_coeff_exp_1(add_coeff_exp_1_I);
        bn_float32_cyc0->add_coeff_sign_1(add_coeff_sign_1_I);
        bn_float32_cyc0->add_coeff_man_2(add_coeff_man_2_I);
        bn_float32_cyc0->add_coeff_exp_2(add_coeff_exp_2_I);
        bn_float32_cyc0->add_coeff_sign_2(add_coeff_sign_2_I);
        bn_float32_cyc0->add_coeff_man_3(add_coeff_man_3_I);
        bn_float32_cyc0->add_coeff_exp_3(add_coeff_exp_3_I);
        bn_float32_cyc0->add_coeff_sign_3(add_coeff_sign_3_I);
        bn_float32_cyc0->add_coeff_man_4(add_coeff_man_4_I);
        bn_float32_cyc0->add_coeff_exp_4(add_coeff_exp_4_I);
        bn_float32_cyc0->add_coeff_sign_4(add_coeff_sign_4_I);
        bn_float32_cyc0->add_coeff_man_5(add_coeff_man_5_I);
        bn_float32_cyc0->add_coeff_exp_5(add_coeff_exp_5_I);
        bn_float32_cyc0->add_coeff_sign_5(add_coeff_sign_5_I);
        bn_float32_cyc0->add_coeff_man_6(add_coeff_man_6_I);
        bn_float32_cyc0->add_coeff_exp_6(add_coeff_exp_6_I);
        bn_float32_cyc0->add_coeff_sign_6(add_coeff_sign_6_I);
        bn_float32_cyc0->add_coeff_man_7(add_coeff_man_7_I);
        bn_float32_cyc0->add_coeff_exp_7(add_coeff_exp_7_I);
        bn_float32_cyc0->add_coeff_sign_7(add_coeff_sign_7_I);
        bn_float32_cyc0->dst_valid(dst_valid);
        bn_float32_cyc0->dst_man_0(dst_man_0_O);
        bn_float32_cyc0->dst_exp_0(dst_exp_0_O);
        bn_float32_cyc0->dst_sign_0(dst_sign_0_O);
        bn_float32_cyc0->dst_man_1(dst_man_1_O);
        bn_float32_cyc0->dst_exp_1(dst_exp_1_O);
        bn_float32_cyc0->dst_sign_1(dst_sign_1_O);
        bn_float32_cyc0->dst_man_2(dst_man_2_O);
        bn_float32_cyc0->dst_exp_2(dst_exp_2_O);
        bn_float32_cyc0->dst_sign_2(dst_sign_2_O);
        bn_float32_cyc0->dst_man_3(dst_man_3_O);
        bn_float32_cyc0->dst_exp_3(dst_exp_3_O);
        bn_float32_cyc0->dst_sign_3(dst_sign_3_O);
        bn_float32_cyc0->dst_man_4(dst_man_4_O);
        bn_float32_cyc0->dst_exp_4(dst_exp_4_O);
        bn_float32_cyc0->dst_sign_4(dst_sign_4_O);
        bn_float32_cyc0->dst_man_5(dst_man_5_O);
        bn_float32_cyc0->dst_exp_5(dst_exp_5_O);
        bn_float32_cyc0->dst_sign_5(dst_sign_5_O);
        bn_float32_cyc0->dst_man_6(dst_man_6_O);
        bn_float32_cyc0->dst_exp_6(dst_exp_6_O);
        bn_float32_cyc0->dst_sign_6(dst_sign_6_O);
        bn_float32_cyc0->dst_man_7(dst_man_7_O);
        bn_float32_cyc0->dst_exp_7(dst_exp_7_O);
        bn_float32_cyc0->dst_sign_7(dst_sign_7_O);


        // setup the type conversion threads
        SC_METHOD( thread_src_man_0_I);
            sensitive << src_man_0;
        SC_METHOD( thread_src_exp_0_I);
            sensitive << src_exp_0;
        SC_METHOD( thread_src_sign_0_I);
            sensitive << src_sign_0;
        SC_METHOD( thread_src_man_1_I);
            sensitive << src_man_1;
        SC_METHOD( thread_src_exp_1_I);
            sensitive << src_exp_1;
        SC_METHOD( thread_src_sign_1_I);
            sensitive << src_sign_1;
        SC_METHOD( thread_src_man_2_I);
            sensitive << src_man_2;
        SC_METHOD( thread_src_exp_2_I);
            sensitive << src_exp_2;
        SC_METHOD( thread_src_sign_2_I);
            sensitive << src_sign_2;
        SC_METHOD( thread_src_man_3_I);
            sensitive << src_man_3;
        SC_METHOD( thread_src_exp_3_I);
            sensitive << src_exp_3;
        SC_METHOD( thread_src_sign_3_I);
            sensitive << src_sign_3;
        SC_METHOD( thread_src_man_4_I);
            sensitive << src_man_4;
        SC_METHOD( thread_src_exp_4_I);
            sensitive << src_exp_4;
        SC_METHOD( thread_src_sign_4_I);
            sensitive << src_sign_4;
        SC_METHOD( thread_src_man_5_I);
            sensitive << src_man_5;
        SC_METHOD( thread_src_exp_5_I);
            sensitive << src_exp_5;
        SC_METHOD( thread_src_sign_5_I);
            sensitive << src_sign_5;
        SC_METHOD( thread_src_man_6_I);
            sensitive << src_man_6;
        SC_METHOD( thread_src_exp_6_I);
            sensitive << src_exp_6;
        SC_METHOD( thread_src_sign_6_I);
            sensitive << src_sign_6;
        SC_METHOD( thread_src_man_7_I);
            sensitive << src_man_7;
        SC_METHOD( thread_src_exp_7_I);
            sensitive << src_exp_7;
        SC_METHOD( thread_src_sign_7_I);
            sensitive << src_sign_7;
        SC_METHOD( thread_mul_coeff_man_0_I);
            sensitive << mul_coeff_man_0;
        SC_METHOD( thread_mul_coeff_exp_0_I);
            sensitive << mul_coeff_exp_0;
        SC_METHOD( thread_mul_coeff_sign_0_I);
            sensitive << mul_coeff_sign_0;
        SC_METHOD( thread_mul_coeff_man_1_I);
            sensitive << mul_coeff_man_1;
        SC_METHOD( thread_mul_coeff_exp_1_I);
            sensitive << mul_coeff_exp_1;
        SC_METHOD( thread_mul_coeff_sign_1_I);
            sensitive << mul_coeff_sign_1;
        SC_METHOD( thread_mul_coeff_man_2_I);
            sensitive << mul_coeff_man_2;
        SC_METHOD( thread_mul_coeff_exp_2_I);
            sensitive << mul_coeff_exp_2;
        SC_METHOD( thread_mul_coeff_sign_2_I);
            sensitive << mul_coeff_sign_2;
        SC_METHOD( thread_mul_coeff_man_3_I);
            sensitive << mul_coeff_man_3;
        SC_METHOD( thread_mul_coeff_exp_3_I);
            sensitive << mul_coeff_exp_3;
        SC_METHOD( thread_mul_coeff_sign_3_I);
            sensitive << mul_coeff_sign_3;
        SC_METHOD( thread_mul_coeff_man_4_I);
            sensitive << mul_coeff_man_4;
        SC_METHOD( thread_mul_coeff_exp_4_I);
            sensitive << mul_coeff_exp_4;
        SC_METHOD( thread_mul_coeff_sign_4_I);
            sensitive << mul_coeff_sign_4;
        SC_METHOD( thread_mul_coeff_man_5_I);
            sensitive << mul_coeff_man_5;
        SC_METHOD( thread_mul_coeff_exp_5_I);
            sensitive << mul_coeff_exp_5;
        SC_METHOD( thread_mul_coeff_sign_5_I);
            sensitive << mul_coeff_sign_5;
        SC_METHOD( thread_mul_coeff_man_6_I);
            sensitive << mul_coeff_man_6;
        SC_METHOD( thread_mul_coeff_exp_6_I);
            sensitive << mul_coeff_exp_6;
        SC_METHOD( thread_mul_coeff_sign_6_I);
            sensitive << mul_coeff_sign_6;
        SC_METHOD( thread_mul_coeff_man_7_I);
            sensitive << mul_coeff_man_7;
        SC_METHOD( thread_mul_coeff_exp_7_I);
            sensitive << mul_coeff_exp_7;
        SC_METHOD( thread_mul_coeff_sign_7_I);
            sensitive << mul_coeff_sign_7;
        SC_METHOD( thread_add_coeff_man_0_I);
            sensitive << add_coeff_man_0;
        SC_METHOD( thread_add_coeff_exp_0_I);
            sensitive << add_coeff_exp_0;
        SC_METHOD( thread_add_coeff_sign_0_I);
            sensitive << add_coeff_sign_0;
        SC_METHOD( thread_add_coeff_man_1_I);
            sensitive << add_coeff_man_1;
        SC_METHOD( thread_add_coeff_exp_1_I);
            sensitive << add_coeff_exp_1;
        SC_METHOD( thread_add_coeff_sign_1_I);
            sensitive << add_coeff_sign_1;
        SC_METHOD( thread_add_coeff_man_2_I);
            sensitive << add_coeff_man_2;
        SC_METHOD( thread_add_coeff_exp_2_I);
            sensitive << add_coeff_exp_2;
        SC_METHOD( thread_add_coeff_sign_2_I);
            sensitive << add_coeff_sign_2;
        SC_METHOD( thread_add_coeff_man_3_I);
            sensitive << add_coeff_man_3;
        SC_METHOD( thread_add_coeff_exp_3_I);
            sensitive << add_coeff_exp_3;
        SC_METHOD( thread_add_coeff_sign_3_I);
            sensitive << add_coeff_sign_3;
        SC_METHOD( thread_add_coeff_man_4_I);
            sensitive << add_coeff_man_4;
        SC_METHOD( thread_add_coeff_exp_4_I);
            sensitive << add_coeff_exp_4;
        SC_METHOD( thread_add_coeff_sign_4_I);
            sensitive << add_coeff_sign_4;
        SC_METHOD( thread_add_coeff_man_5_I);
            sensitive << add_coeff_man_5;
        SC_METHOD( thread_add_coeff_exp_5_I);
            sensitive << add_coeff_exp_5;
        SC_METHOD( thread_add_coeff_sign_5_I);
            sensitive << add_coeff_sign_5;
        SC_METHOD( thread_add_coeff_man_6_I);
            sensitive << add_coeff_man_6;
        SC_METHOD( thread_add_coeff_exp_6_I);
            sensitive << add_coeff_exp_6;
        SC_METHOD( thread_add_coeff_sign_6_I);
            sensitive << add_coeff_sign_6;
        SC_METHOD( thread_add_coeff_man_7_I);
            sensitive << add_coeff_man_7;
        SC_METHOD( thread_add_coeff_exp_7_I);
            sensitive << add_coeff_exp_7;
        SC_METHOD( thread_add_coeff_sign_7_I);
            sensitive << add_coeff_sign_7;
        SC_METHOD( thread_dst_man_0_O);
            sensitive << dst_man_0_O;
        SC_METHOD( thread_dst_exp_0_O);
            sensitive << dst_exp_0_O;
        SC_METHOD( thread_dst_sign_0_O);
            sensitive << dst_sign_0_O;
        SC_METHOD( thread_dst_man_1_O);
            sensitive << dst_man_1_O;
        SC_METHOD( thread_dst_exp_1_O);
            sensitive << dst_exp_1_O;
        SC_METHOD( thread_dst_sign_1_O);
            sensitive << dst_sign_1_O;
        SC_METHOD( thread_dst_man_2_O);
            sensitive << dst_man_2_O;
        SC_METHOD( thread_dst_exp_2_O);
            sensitive << dst_exp_2_O;
        SC_METHOD( thread_dst_sign_2_O);
            sensitive << dst_sign_2_O;
        SC_METHOD( thread_dst_man_3_O);
            sensitive << dst_man_3_O;
        SC_METHOD( thread_dst_exp_3_O);
            sensitive << dst_exp_3_O;
        SC_METHOD( thread_dst_sign_3_O);
            sensitive << dst_sign_3_O;
        SC_METHOD( thread_dst_man_4_O);
            sensitive << dst_man_4_O;
        SC_METHOD( thread_dst_exp_4_O);
            sensitive << dst_exp_4_O;
        SC_METHOD( thread_dst_sign_4_O);
            sensitive << dst_sign_4_O;
        SC_METHOD( thread_dst_man_5_O);
            sensitive << dst_man_5_O;
        SC_METHOD( thread_dst_exp_5_O);
            sensitive << dst_exp_5_O;
        SC_METHOD( thread_dst_sign_5_O);
            sensitive << dst_sign_5_O;
        SC_METHOD( thread_dst_man_6_O);
            sensitive << dst_man_6_O;
        SC_METHOD( thread_dst_exp_6_O);
            sensitive << dst_exp_6_O;
        SC_METHOD( thread_dst_sign_6_O);
            sensitive << dst_sign_6_O;
        SC_METHOD( thread_dst_man_7_O);
            sensitive << dst_man_7_O;
        SC_METHOD( thread_dst_exp_7_O);
            sensitive << dst_exp_7_O;
        SC_METHOD( thread_dst_sign_7_O);
            sensitive << dst_sign_7_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            bn_float32_cyc0->trace(tfp,99);
        }
    };

    ~bn_float32_cycsimV()
    {
        delete bn_float32_cyc0;
    }

    void end_of_elaboration()
    {
        esc_open_ca_trace_file();
    }

    void end_of_simulation()
    {
        esc_close_ca_trace_file();
    }

protected:
    Vbn_float32_rtl* bn_float32_cyc0;
};

bn_float32_cycsim* bn_float32_cycsim_factory()
{
    return new bn_float32_cycsimV("bn_float32");
}

class bn_float32_linkup
{
public:
    bn_float32_linkup() {
        extern bn_float32_cycsim* (*bn_float32_cycsim_factory_p)();
        bn_float32_cycsim_factory_p = &bn_float32_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
bn_float32_linkup bn_float32_cycsimV_link;


