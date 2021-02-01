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

#include "sfu_out_buff_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vsfu_out_buff_rtl.h"


class Vsfu_out_buff_rtl;

class sfu_out_buff_cycsimV : public sfu_out_buff_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > in0_data_0_I;
    sc_signal< uint32_t > in0_data_1_I;
    sc_signal< uint32_t > in0_data_2_I;
    sc_signal< uint32_t > in0_data_3_I;
    sc_signal< uint32_t > in0_data_4_I;
    sc_signal< uint32_t > in0_data_5_I;
    sc_signal< uint32_t > in0_data_6_I;
    sc_signal< uint32_t > in0_data_7_I;
    sc_signal< uint32_t > in1_data_0_I;
    sc_signal< uint32_t > in1_data_1_I;
    sc_signal< uint32_t > in1_data_2_I;
    sc_signal< uint32_t > in1_data_3_I;
    sc_signal< uint32_t > in1_data_4_I;
    sc_signal< uint32_t > in1_data_5_I;
    sc_signal< uint32_t > in1_data_6_I;
    sc_signal< uint32_t > in1_data_7_I;
    sc_signal< sc_bv< 320 >  > out_data_O;


    // The following threads are used to do the type conversion.
    inline void thread_in0_data_0_I() {
        in0_data_0_I = (sc_uint<32>)in0_data_0.read();
    };
    inline void thread_in0_data_1_I() {
        in0_data_1_I = (sc_uint<32>)in0_data_1.read();
    };
    inline void thread_in0_data_2_I() {
        in0_data_2_I = (sc_uint<32>)in0_data_2.read();
    };
    inline void thread_in0_data_3_I() {
        in0_data_3_I = (sc_uint<32>)in0_data_3.read();
    };
    inline void thread_in0_data_4_I() {
        in0_data_4_I = (sc_uint<32>)in0_data_4.read();
    };
    inline void thread_in0_data_5_I() {
        in0_data_5_I = (sc_uint<32>)in0_data_5.read();
    };
    inline void thread_in0_data_6_I() {
        in0_data_6_I = (sc_uint<32>)in0_data_6.read();
    };
    inline void thread_in0_data_7_I() {
        in0_data_7_I = (sc_uint<32>)in0_data_7.read();
    };
    inline void thread_in1_data_0_I() {
        in1_data_0_I = (sc_uint<32>)in1_data_0.read();
    };
    inline void thread_in1_data_1_I() {
        in1_data_1_I = (sc_uint<32>)in1_data_1.read();
    };
    inline void thread_in1_data_2_I() {
        in1_data_2_I = (sc_uint<32>)in1_data_2.read();
    };
    inline void thread_in1_data_3_I() {
        in1_data_3_I = (sc_uint<32>)in1_data_3.read();
    };
    inline void thread_in1_data_4_I() {
        in1_data_4_I = (sc_uint<32>)in1_data_4.read();
    };
    inline void thread_in1_data_5_I() {
        in1_data_5_I = (sc_uint<32>)in1_data_5.read();
    };
    inline void thread_in1_data_6_I() {
        in1_data_6_I = (sc_uint<32>)in1_data_6.read();
    };
    inline void thread_in1_data_7_I() {
        in1_data_7_I = (sc_uint<32>)in1_data_7.read();
    };
    inline void thread_out_data_O() {
        out_data = out_data_O.read();
    };


    SC_HAS_PROCESS(sfu_out_buff_cycsimV);

public:

    sfu_out_buff_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" sfu_out_buff") ) )
        : sfu_out_buff_cycsim(in_name)
    {
        // instantiate the verilated module
        sfu_out_buff_cyc0 = new Vsfu_out_buff_rtl( "Vsfu_out_buff" );
        // generate port connections
        sfu_out_buff_cyc0->clk(clk);
        sfu_out_buff_cyc0->rstn(rstn);
        sfu_out_buff_cyc0->enable(enable);
        sfu_out_buff_cyc0->learned_clip_en(learned_clip_en);
        sfu_out_buff_cyc0->in0_data_0(in0_data_0_I);
        sfu_out_buff_cyc0->in0_data_1(in0_data_1_I);
        sfu_out_buff_cyc0->in0_data_2(in0_data_2_I);
        sfu_out_buff_cyc0->in0_data_3(in0_data_3_I);
        sfu_out_buff_cyc0->in0_data_4(in0_data_4_I);
        sfu_out_buff_cyc0->in0_data_5(in0_data_5_I);
        sfu_out_buff_cyc0->in0_data_6(in0_data_6_I);
        sfu_out_buff_cyc0->in0_data_7(in0_data_7_I);
        sfu_out_buff_cyc0->in0_data_valid(in0_data_valid);
        sfu_out_buff_cyc0->in1_data_0(in1_data_0_I);
        sfu_out_buff_cyc0->in1_data_1(in1_data_1_I);
        sfu_out_buff_cyc0->in1_data_2(in1_data_2_I);
        sfu_out_buff_cyc0->in1_data_3(in1_data_3_I);
        sfu_out_buff_cyc0->in1_data_4(in1_data_4_I);
        sfu_out_buff_cyc0->in1_data_5(in1_data_5_I);
        sfu_out_buff_cyc0->in1_data_6(in1_data_6_I);
        sfu_out_buff_cyc0->in1_data_7(in1_data_7_I);
        sfu_out_buff_cyc0->in1_data_valid(in1_data_valid);
        sfu_out_buff_cyc0->out_data(out_data_O);
        sfu_out_buff_cyc0->out_data_valid(out_data_valid);


        // setup the type conversion threads
        SC_METHOD( thread_in0_data_0_I);
            sensitive << in0_data_0;
        SC_METHOD( thread_in0_data_1_I);
            sensitive << in0_data_1;
        SC_METHOD( thread_in0_data_2_I);
            sensitive << in0_data_2;
        SC_METHOD( thread_in0_data_3_I);
            sensitive << in0_data_3;
        SC_METHOD( thread_in0_data_4_I);
            sensitive << in0_data_4;
        SC_METHOD( thread_in0_data_5_I);
            sensitive << in0_data_5;
        SC_METHOD( thread_in0_data_6_I);
            sensitive << in0_data_6;
        SC_METHOD( thread_in0_data_7_I);
            sensitive << in0_data_7;
        SC_METHOD( thread_in1_data_0_I);
            sensitive << in1_data_0;
        SC_METHOD( thread_in1_data_1_I);
            sensitive << in1_data_1;
        SC_METHOD( thread_in1_data_2_I);
            sensitive << in1_data_2;
        SC_METHOD( thread_in1_data_3_I);
            sensitive << in1_data_3;
        SC_METHOD( thread_in1_data_4_I);
            sensitive << in1_data_4;
        SC_METHOD( thread_in1_data_5_I);
            sensitive << in1_data_5;
        SC_METHOD( thread_in1_data_6_I);
            sensitive << in1_data_6;
        SC_METHOD( thread_in1_data_7_I);
            sensitive << in1_data_7;
        SC_METHOD( thread_out_data_O);
            sensitive << out_data_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            sfu_out_buff_cyc0->trace(tfp,99);
        }
    };

    ~sfu_out_buff_cycsimV()
    {
        delete sfu_out_buff_cyc0;
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
    Vsfu_out_buff_rtl* sfu_out_buff_cyc0;
};

sfu_out_buff_cycsim* sfu_out_buff_cycsim_factory()
{
    return new sfu_out_buff_cycsimV("sfu_out_buff");
}

class sfu_out_buff_linkup
{
public:
    sfu_out_buff_linkup() {
        extern sfu_out_buff_cycsim* (*sfu_out_buff_cycsim_factory_p)();
        sfu_out_buff_cycsim_factory_p = &sfu_out_buff_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
sfu_out_buff_linkup sfu_out_buff_cycsimV_link;


