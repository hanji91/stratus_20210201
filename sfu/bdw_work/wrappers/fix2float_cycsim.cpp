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

#include "fix2float_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vfix2float_rtl.h"


class Vfix2float_rtl;

class fix2float_cycsimV : public fix2float_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > fraction_len_I;
    sc_signal< uint32_t > src_I;
    sc_signal< uint32_t > dst_O;


    // The following threads are used to do the type conversion.
    inline void thread_fraction_len_I() {
        fraction_len_I = (sc_uint<32>)fraction_len.read();
    };
    inline void thread_src_I() {
        src_I = (sc_uint<32>)src.read();
    };
    inline void thread_dst_O() {
        dst = dst_O.read();
    };


    SC_HAS_PROCESS(fix2float_cycsimV);

public:

    fix2float_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" fix2float") ) )
        : fix2float_cycsim(in_name)
    {
        // instantiate the verilated module
        fix2float_cyc0 = new Vfix2float_rtl( "Vfix2float" );
        // generate port connections
        fix2float_cyc0->clk(clk);
        fix2float_cyc0->rstn(rstn);
        fix2float_cyc0->enable(enable);
        fix2float_cyc0->fraction_len(fraction_len_I);
        fix2float_cyc0->src_valid(src_valid);
        fix2float_cyc0->src(src_I);
        fix2float_cyc0->dst_valid(dst_valid);
        fix2float_cyc0->dst(dst_O);


        // setup the type conversion threads
        SC_METHOD( thread_fraction_len_I);
            sensitive << fraction_len;
        SC_METHOD( thread_src_I);
            sensitive << src;
        SC_METHOD( thread_dst_O);
            sensitive << dst_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            fix2float_cyc0->trace(tfp,99);
        }
    };

    ~fix2float_cycsimV()
    {
        delete fix2float_cyc0;
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
    Vfix2float_rtl* fix2float_cyc0;
};

fix2float_cycsim* fix2float_cycsim_factory()
{
    return new fix2float_cycsimV("fix2float");
}

class fix2float_linkup
{
public:
    fix2float_linkup() {
        extern fix2float_cycsim* (*fix2float_cycsim_factory_p)();
        fix2float_cycsim_factory_p = &fix2float_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
fix2float_linkup fix2float_cycsimV_link;


