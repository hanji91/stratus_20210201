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

#include "relu_offset_float_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vrelu_offset_float_rtl.h"


class Vrelu_offset_float_rtl;

class relu_offset_float_cycsimV : public relu_offset_float_cycsim
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
    sc_signal< uint32_t > offset_man_I;
    sc_signal< uint32_t > offset_exp_I;
    sc_signal< bool > offset_sign_I;
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
    inline void thread_offset_man_I() {
        offset_man_I = (sc_uint<23>)offset_man.read();
    };
    inline void thread_offset_exp_I() {
        offset_exp_I = (sc_uint<8>)offset_exp.read();
    };
    inline void thread_offset_sign_I() {
        offset_sign_I = (sc_uint<1>)offset_sign.read();
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


    SC_HAS_PROCESS(relu_offset_float_cycsimV);

public:

    relu_offset_float_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" relu_offset_float") ) )
        : relu_offset_float_cycsim(in_name)
    {
        // instantiate the verilated module
        relu_offset_float_cyc0 = new Vrelu_offset_float_rtl( "Vrelu_offset_float" );
        // generate port connections
        relu_offset_float_cyc0->clk(clk);
        relu_offset_float_cyc0->rstn(rstn);
        relu_offset_float_cyc0->enable(enable);
        relu_offset_float_cyc0->src_valid(src_valid);
        relu_offset_float_cyc0->src_man_0(src_man_0_I);
        relu_offset_float_cyc0->src_exp_0(src_exp_0_I);
        relu_offset_float_cyc0->src_sign_0(src_sign_0_I);
        relu_offset_float_cyc0->src_man_1(src_man_1_I);
        relu_offset_float_cyc0->src_exp_1(src_exp_1_I);
        relu_offset_float_cyc0->src_sign_1(src_sign_1_I);
        relu_offset_float_cyc0->src_man_2(src_man_2_I);
        relu_offset_float_cyc0->src_exp_2(src_exp_2_I);
        relu_offset_float_cyc0->src_sign_2(src_sign_2_I);
        relu_offset_float_cyc0->src_man_3(src_man_3_I);
        relu_offset_float_cyc0->src_exp_3(src_exp_3_I);
        relu_offset_float_cyc0->src_sign_3(src_sign_3_I);
        relu_offset_float_cyc0->src_man_4(src_man_4_I);
        relu_offset_float_cyc0->src_exp_4(src_exp_4_I);
        relu_offset_float_cyc0->src_sign_4(src_sign_4_I);
        relu_offset_float_cyc0->src_man_5(src_man_5_I);
        relu_offset_float_cyc0->src_exp_5(src_exp_5_I);
        relu_offset_float_cyc0->src_sign_5(src_sign_5_I);
        relu_offset_float_cyc0->src_man_6(src_man_6_I);
        relu_offset_float_cyc0->src_exp_6(src_exp_6_I);
        relu_offset_float_cyc0->src_sign_6(src_sign_6_I);
        relu_offset_float_cyc0->src_man_7(src_man_7_I);
        relu_offset_float_cyc0->src_exp_7(src_exp_7_I);
        relu_offset_float_cyc0->src_sign_7(src_sign_7_I);
        relu_offset_float_cyc0->offset_man(offset_man_I);
        relu_offset_float_cyc0->offset_exp(offset_exp_I);
        relu_offset_float_cyc0->offset_sign(offset_sign_I);
        relu_offset_float_cyc0->dst_valid(dst_valid);
        relu_offset_float_cyc0->dst_man_0(dst_man_0_O);
        relu_offset_float_cyc0->dst_exp_0(dst_exp_0_O);
        relu_offset_float_cyc0->dst_sign_0(dst_sign_0_O);
        relu_offset_float_cyc0->dst_man_1(dst_man_1_O);
        relu_offset_float_cyc0->dst_exp_1(dst_exp_1_O);
        relu_offset_float_cyc0->dst_sign_1(dst_sign_1_O);
        relu_offset_float_cyc0->dst_man_2(dst_man_2_O);
        relu_offset_float_cyc0->dst_exp_2(dst_exp_2_O);
        relu_offset_float_cyc0->dst_sign_2(dst_sign_2_O);
        relu_offset_float_cyc0->dst_man_3(dst_man_3_O);
        relu_offset_float_cyc0->dst_exp_3(dst_exp_3_O);
        relu_offset_float_cyc0->dst_sign_3(dst_sign_3_O);
        relu_offset_float_cyc0->dst_man_4(dst_man_4_O);
        relu_offset_float_cyc0->dst_exp_4(dst_exp_4_O);
        relu_offset_float_cyc0->dst_sign_4(dst_sign_4_O);
        relu_offset_float_cyc0->dst_man_5(dst_man_5_O);
        relu_offset_float_cyc0->dst_exp_5(dst_exp_5_O);
        relu_offset_float_cyc0->dst_sign_5(dst_sign_5_O);
        relu_offset_float_cyc0->dst_man_6(dst_man_6_O);
        relu_offset_float_cyc0->dst_exp_6(dst_exp_6_O);
        relu_offset_float_cyc0->dst_sign_6(dst_sign_6_O);
        relu_offset_float_cyc0->dst_man_7(dst_man_7_O);
        relu_offset_float_cyc0->dst_exp_7(dst_exp_7_O);
        relu_offset_float_cyc0->dst_sign_7(dst_sign_7_O);


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
        SC_METHOD( thread_offset_man_I);
            sensitive << offset_man;
        SC_METHOD( thread_offset_exp_I);
            sensitive << offset_exp;
        SC_METHOD( thread_offset_sign_I);
            sensitive << offset_sign;
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
            relu_offset_float_cyc0->trace(tfp,99);
        }
    };

    ~relu_offset_float_cycsimV()
    {
        delete relu_offset_float_cyc0;
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
    Vrelu_offset_float_rtl* relu_offset_float_cyc0;
};

relu_offset_float_cycsim* relu_offset_float_cycsim_factory()
{
    return new relu_offset_float_cycsimV("relu_offset_float");
}

class relu_offset_float_linkup
{
public:
    relu_offset_float_linkup() {
        extern relu_offset_float_cycsim* (*relu_offset_float_cycsim_factory_p)();
        relu_offset_float_cycsim_factory_p = &relu_offset_float_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
relu_offset_float_linkup relu_offset_float_cycsimV_link;


