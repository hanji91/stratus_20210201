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

#include "float2fix_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vfloat2fix_rtl.h"


class Vfloat2fix_rtl;

class float2fix_cycsimV : public float2fix_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > src_I;
    sc_signal< uint32_t > dst_O;


    // The following threads are used to do the type conversion.
    inline void thread_src_I() {
        src_I = (sc_uint<32>)src.read();
    };
    inline void thread_dst_O() {
        dst = dst_O.read();
    };


    SC_HAS_PROCESS(float2fix_cycsimV);

public:

    float2fix_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" float2fix") ) )
        : float2fix_cycsim(in_name)
    {
        // instantiate the verilated module
        float2fix_cyc0 = new Vfloat2fix_rtl( "Vfloat2fix" );
        // generate port connections
        float2fix_cyc0->clk(clk);
        float2fix_cyc0->rstn(rstn);
        float2fix_cyc0->src_valid(src_valid);
        float2fix_cyc0->src(src_I);
        float2fix_cyc0->dst_valid(dst_valid);
        float2fix_cyc0->dst(dst_O);


        // setup the type conversion threads
        SC_METHOD( thread_src_I);
            sensitive << src;
        SC_METHOD( thread_dst_O);
            sensitive << dst_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            float2fix_cyc0->trace(tfp,99);
        }
    };

    ~float2fix_cycsimV()
    {
        delete float2fix_cyc0;
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
    Vfloat2fix_rtl* float2fix_cyc0;
};

float2fix_cycsim* float2fix_cycsim_factory()
{
    return new float2fix_cycsimV("float2fix");
}

class float2fix_linkup
{
public:
    float2fix_linkup() {
        extern float2fix_cycsim* (*float2fix_cycsim_factory_p)();
        float2fix_cycsim_factory_p = &float2fix_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
float2fix_linkup float2fix_cycsimV_link;


