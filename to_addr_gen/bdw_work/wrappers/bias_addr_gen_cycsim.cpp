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

#include "bias_addr_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vbias_addr_gen_rtl.h"


class Vbias_addr_gen_rtl;

class bias_addr_gen_cycsimV : public bias_addr_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > out_feature_width_I;
    sc_signal< uint32_t > out_feature_height_I;
    sc_signal< uint32_t > out_feature_channel_I;
    sc_signal< uint32_t > bias_read_base_addr_I;
    sc_signal< bool > start_rising_I;
    sc_signal< uint32_t > bias_addr_O;


    // The following threads are used to do the type conversion.
    inline void thread_out_feature_width_I() {
        out_feature_width_I = (sc_uint<16>)out_feature_width.read();
    };
    inline void thread_out_feature_height_I() {
        out_feature_height_I = (sc_uint<16>)out_feature_height.read();
    };
    inline void thread_out_feature_channel_I() {
        out_feature_channel_I = (sc_uint<16>)out_feature_channel.read();
    };
    inline void thread_bias_read_base_addr_I() {
        bias_read_base_addr_I = (sc_uint<32>)bias_read_base_addr.read();
    };
    inline void thread_start_rising_I() {
        start_rising_I = (sc_uint<1>)start_rising.read();
    };
    inline void thread_bias_addr_O() {
        bias_addr = bias_addr_O.read();
    };


    SC_HAS_PROCESS(bias_addr_gen_cycsimV);

public:

    bias_addr_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" bias_addr_gen") ) )
        : bias_addr_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        bias_addr_gen_cyc0 = new Vbias_addr_gen_rtl( "Vbias_addr_gen" );
        // generate port connections
        bias_addr_gen_cyc0->clk(clk);
        bias_addr_gen_cyc0->rstn(rstn);
        bias_addr_gen_cyc0->init(init);
        bias_addr_gen_cyc0->out_feature_width(out_feature_width_I);
        bias_addr_gen_cyc0->out_feature_height(out_feature_height_I);
        bias_addr_gen_cyc0->out_feature_channel(out_feature_channel_I);
        bias_addr_gen_cyc0->bias_read_base_addr(bias_read_base_addr_I);
        bias_addr_gen_cyc0->bias_en(bias_en);
        bias_addr_gen_cyc0->start_rising(start_rising_I);
        bias_addr_gen_cyc0->data_en(data_en);
        bias_addr_gen_cyc0->bias_addr(bias_addr_O);
        bias_addr_gen_cyc0->bias_addr_valid(bias_addr_valid);


        // setup the type conversion threads
        SC_METHOD( thread_out_feature_width_I);
            sensitive << out_feature_width;
        SC_METHOD( thread_out_feature_height_I);
            sensitive << out_feature_height;
        SC_METHOD( thread_out_feature_channel_I);
            sensitive << out_feature_channel;
        SC_METHOD( thread_bias_read_base_addr_I);
            sensitive << bias_read_base_addr;
        SC_METHOD( thread_start_rising_I);
            sensitive << start_rising;
        SC_METHOD( thread_bias_addr_O);
            sensitive << bias_addr_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            bias_addr_gen_cyc0->trace(tfp,99);
        }
    };

    ~bias_addr_gen_cycsimV()
    {
        delete bias_addr_gen_cyc0;
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
    Vbias_addr_gen_rtl* bias_addr_gen_cyc0;
};

bias_addr_gen_cycsim* bias_addr_gen_cycsim_factory()
{
    return new bias_addr_gen_cycsimV("bias_addr_gen");
}

class bias_addr_gen_linkup
{
public:
    bias_addr_gen_linkup() {
        extern bias_addr_gen_cycsim* (*bias_addr_gen_cycsim_factory_p)();
        bias_addr_gen_cycsim_factory_p = &bias_addr_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
bias_addr_gen_linkup bias_addr_gen_cycsimV_link;


