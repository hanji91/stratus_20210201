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

#include "mac_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vmac_rtl.h"


class Vmac_rtl;

class mac_cycsimV : public mac_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > src_0_I;
    sc_signal< uint32_t > src_1_I;
    sc_signal< uint32_t > acc_O;
    sc_signal< uint32_t > src_1_1d_O;


    // The following threads are used to do the type conversion.
    inline void thread_src_0_I() {
        src_0_I = (sc_uint<10>)src_0.read();
    };
    inline void thread_src_1_I() {
        src_1_I = (sc_uint<8>)src_1.read();
    };
    inline void thread_acc_O() {
        acc = acc_O.read();
    };
    inline void thread_src_1_1d_O() {
        src_1_1d = src_1_1d_O.read();
    };


    SC_HAS_PROCESS(mac_cycsimV);

public:

    mac_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" mac") ) )
        : mac_cycsim(in_name)
    {
        // instantiate the verilated module
        mac_cyc0 = new Vmac_rtl( "Vmac" );
        // generate port connections
        mac_cyc0->clk(clk);
        mac_cyc0->rstn(rstn);
        mac_cyc0->init(init);
        mac_cyc0->clear(clear);
        mac_cyc0->src_vld(src_vld);
        mac_cyc0->src_0(src_0_I);
        mac_cyc0->src_1(src_1_I);
        mac_cyc0->acc(acc_O);
        mac_cyc0->src_1_1d(src_1_1d_O);


        // setup the type conversion threads
        SC_METHOD( thread_src_0_I);
            sensitive << src_0;
        SC_METHOD( thread_src_1_I);
            sensitive << src_1;
        SC_METHOD( thread_acc_O);
            sensitive << acc_O;
        SC_METHOD( thread_src_1_1d_O);
            sensitive << src_1_1d_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            mac_cyc0->trace(tfp,99);
        }
    };

    ~mac_cycsimV()
    {
        delete mac_cyc0;
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
    Vmac_rtl* mac_cyc0;
};

mac_cycsim* mac_cycsim_factory()
{
    return new mac_cycsimV("mac");
}

class mac_linkup
{
public:
    mac_linkup() {
        extern mac_cycsim* (*mac_cycsim_factory_p)();
        mac_cycsim_factory_p = &mac_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
mac_linkup mac_cycsimV_link;


