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

#include "bias_add_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vbias_add_rtl.h"


class Vbias_add_rtl;

class bias_add_cycsimV : public bias_add_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > src_0_I;
    sc_signal< uint32_t > src_1_I;
    sc_signal< uint32_t > src_2_I;
    sc_signal< uint32_t > src_3_I;
    sc_signal< uint32_t > src_4_I;
    sc_signal< uint32_t > src_5_I;
    sc_signal< uint32_t > src_6_I;
    sc_signal< uint32_t > src_7_I;
    sc_signal< sc_bv< 512 >  > bias_data_I;
    sc_signal< uint32_t > dst_0_O;
    sc_signal< uint32_t > dst_1_O;
    sc_signal< uint32_t > dst_2_O;
    sc_signal< uint32_t > dst_3_O;
    sc_signal< uint32_t > dst_4_O;
    sc_signal< uint32_t > dst_5_O;
    sc_signal< uint32_t > dst_6_O;
    sc_signal< uint32_t > dst_7_O;


    // The following threads are used to do the type conversion.
    inline void thread_src_0_I() {
        src_0_I = (sc_uint<32>)src_0.read();
    };
    inline void thread_src_1_I() {
        src_1_I = (sc_uint<32>)src_1.read();
    };
    inline void thread_src_2_I() {
        src_2_I = (sc_uint<32>)src_2.read();
    };
    inline void thread_src_3_I() {
        src_3_I = (sc_uint<32>)src_3.read();
    };
    inline void thread_src_4_I() {
        src_4_I = (sc_uint<32>)src_4.read();
    };
    inline void thread_src_5_I() {
        src_5_I = (sc_uint<32>)src_5.read();
    };
    inline void thread_src_6_I() {
        src_6_I = (sc_uint<32>)src_6.read();
    };
    inline void thread_src_7_I() {
        src_7_I = (sc_uint<32>)src_7.read();
    };
    inline void thread_bias_data_I() {
        bias_data_I = bias_data.read();
    };
    inline void thread_dst_0_O() {
        dst_0 = dst_0_O.read();
    };
    inline void thread_dst_1_O() {
        dst_1 = dst_1_O.read();
    };
    inline void thread_dst_2_O() {
        dst_2 = dst_2_O.read();
    };
    inline void thread_dst_3_O() {
        dst_3 = dst_3_O.read();
    };
    inline void thread_dst_4_O() {
        dst_4 = dst_4_O.read();
    };
    inline void thread_dst_5_O() {
        dst_5 = dst_5_O.read();
    };
    inline void thread_dst_6_O() {
        dst_6 = dst_6_O.read();
    };
    inline void thread_dst_7_O() {
        dst_7 = dst_7_O.read();
    };


    SC_HAS_PROCESS(bias_add_cycsimV);

public:

    bias_add_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" bias_add") ) )
        : bias_add_cycsim(in_name)
    {
        // instantiate the verilated module
        bias_add_cyc0 = new Vbias_add_rtl( "Vbias_add" );
        // generate port connections
        bias_add_cyc0->clk(clk);
        bias_add_cyc0->rstn(rstn);
        bias_add_cyc0->enable(enable);
        bias_add_cyc0->src_valid(src_valid);
        bias_add_cyc0->src_0(src_0_I);
        bias_add_cyc0->src_1(src_1_I);
        bias_add_cyc0->src_2(src_2_I);
        bias_add_cyc0->src_3(src_3_I);
        bias_add_cyc0->src_4(src_4_I);
        bias_add_cyc0->src_5(src_5_I);
        bias_add_cyc0->src_6(src_6_I);
        bias_add_cyc0->src_7(src_7_I);
        bias_add_cyc0->bias_data(bias_data_I);
        bias_add_cyc0->dst_valid(dst_valid);
        bias_add_cyc0->dst_0(dst_0_O);
        bias_add_cyc0->dst_1(dst_1_O);
        bias_add_cyc0->dst_2(dst_2_O);
        bias_add_cyc0->dst_3(dst_3_O);
        bias_add_cyc0->dst_4(dst_4_O);
        bias_add_cyc0->dst_5(dst_5_O);
        bias_add_cyc0->dst_6(dst_6_O);
        bias_add_cyc0->dst_7(dst_7_O);


        // setup the type conversion threads
        SC_METHOD( thread_src_0_I);
            sensitive << src_0;
        SC_METHOD( thread_src_1_I);
            sensitive << src_1;
        SC_METHOD( thread_src_2_I);
            sensitive << src_2;
        SC_METHOD( thread_src_3_I);
            sensitive << src_3;
        SC_METHOD( thread_src_4_I);
            sensitive << src_4;
        SC_METHOD( thread_src_5_I);
            sensitive << src_5;
        SC_METHOD( thread_src_6_I);
            sensitive << src_6;
        SC_METHOD( thread_src_7_I);
            sensitive << src_7;
        SC_METHOD( thread_bias_data_I);
            sensitive << bias_data;
        SC_METHOD( thread_dst_0_O);
            sensitive << dst_0_O;
        SC_METHOD( thread_dst_1_O);
            sensitive << dst_1_O;
        SC_METHOD( thread_dst_2_O);
            sensitive << dst_2_O;
        SC_METHOD( thread_dst_3_O);
            sensitive << dst_3_O;
        SC_METHOD( thread_dst_4_O);
            sensitive << dst_4_O;
        SC_METHOD( thread_dst_5_O);
            sensitive << dst_5_O;
        SC_METHOD( thread_dst_6_O);
            sensitive << dst_6_O;
        SC_METHOD( thread_dst_7_O);
            sensitive << dst_7_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            bias_add_cyc0->trace(tfp,99);
        }
    };

    ~bias_add_cycsimV()
    {
        delete bias_add_cyc0;
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
    Vbias_add_rtl* bias_add_cyc0;
};

bias_add_cycsim* bias_add_cycsim_factory()
{
    return new bias_add_cycsimV("bias_add");
}

class bias_add_linkup
{
public:
    bias_add_linkup() {
        extern bias_add_cycsim* (*bias_add_cycsim_factory_p)();
        bias_add_cycsim_factory_p = &bias_add_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
bias_add_linkup bias_add_cycsimV_link;


