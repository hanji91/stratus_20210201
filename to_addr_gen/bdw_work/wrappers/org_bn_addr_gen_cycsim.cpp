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

#include "org_bn_addr_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vorg_bn_addr_gen_rtl.h"


class Vorg_bn_addr_gen_rtl;

class org_bn_addr_gen_cycsimV : public org_bn_addr_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > out_feature_width_I;
    sc_signal< uint32_t > out_feature_height_I;
    sc_signal< uint32_t > out_feature_channel_I;
    sc_signal< uint32_t > bn_read_base_addr_I;
    sc_signal< uint32_t > bn_en_I;
    sc_signal< bool > start_rising_I;
    sc_signal< uint32_t > bn_addr_O;


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
    inline void thread_bn_read_base_addr_I() {
        bn_read_base_addr_I = (sc_uint<32>)bn_read_base_addr.read();
    };
    inline void thread_bn_en_I() {
        bn_en_I = (sc_uint<8>)bn_en.read();
    };
    inline void thread_start_rising_I() {
        start_rising_I = (sc_uint<1>)start_rising.read();
    };
    inline void thread_bn_addr_O() {
        bn_addr = bn_addr_O.read();
    };


    SC_HAS_PROCESS(org_bn_addr_gen_cycsimV);

public:

    org_bn_addr_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" org_bn_addr_gen") ) )
        : org_bn_addr_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        org_bn_addr_gen_cyc0 = new Vorg_bn_addr_gen_rtl( "Vorg_bn_addr_gen" );
        // generate port connections
        org_bn_addr_gen_cyc0->clk(clk);
        org_bn_addr_gen_cyc0->rstn(rstn);
        org_bn_addr_gen_cyc0->out_feature_width(out_feature_width_I);
        org_bn_addr_gen_cyc0->out_feature_height(out_feature_height_I);
        org_bn_addr_gen_cyc0->out_feature_channel(out_feature_channel_I);
        org_bn_addr_gen_cyc0->bn_read_base_addr(bn_read_base_addr_I);
        org_bn_addr_gen_cyc0->bn_en(bn_en_I);
        org_bn_addr_gen_cyc0->start_rising(start_rising_I);
        org_bn_addr_gen_cyc0->data_en(data_en);
        org_bn_addr_gen_cyc0->bn_addr(bn_addr_O);
        org_bn_addr_gen_cyc0->bn_addr_valid(bn_addr_valid);


        // setup the type conversion threads
        SC_METHOD( thread_out_feature_width_I);
            sensitive << out_feature_width;
        SC_METHOD( thread_out_feature_height_I);
            sensitive << out_feature_height;
        SC_METHOD( thread_out_feature_channel_I);
            sensitive << out_feature_channel;
        SC_METHOD( thread_bn_read_base_addr_I);
            sensitive << bn_read_base_addr;
        SC_METHOD( thread_bn_en_I);
            sensitive << bn_en;
        SC_METHOD( thread_start_rising_I);
            sensitive << start_rising;
        SC_METHOD( thread_bn_addr_O);
            sensitive << bn_addr_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            org_bn_addr_gen_cyc0->trace(tfp,99);
        }
    };

    ~org_bn_addr_gen_cycsimV()
    {
        delete org_bn_addr_gen_cyc0;
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
    Vorg_bn_addr_gen_rtl* org_bn_addr_gen_cyc0;
};

org_bn_addr_gen_cycsim* org_bn_addr_gen_cycsim_factory()
{
    return new org_bn_addr_gen_cycsimV("org_bn_addr_gen");
}

class org_bn_addr_gen_linkup
{
public:
    org_bn_addr_gen_linkup() {
        extern org_bn_addr_gen_cycsim* (*org_bn_addr_gen_cycsim_factory_p)();
        org_bn_addr_gen_cycsim_factory_p = &org_bn_addr_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
org_bn_addr_gen_linkup org_bn_addr_gen_cycsimV_link;


