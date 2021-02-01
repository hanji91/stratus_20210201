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

#include "finish_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vfinish_gen_rtl.h"


class Vfinish_gen_rtl;

class finish_gen_cycsimV : public finish_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< bool > enable_I;
    sc_signal< bool > clear_I;
    sc_signal< uint32_t > total_num_I;


    // The following threads are used to do the type conversion.
    inline void thread_enable_I() {
        enable_I = (sc_uint<1>)enable.read();
    };
    inline void thread_clear_I() {
        clear_I = (sc_uint<1>)clear.read();
    };
    inline void thread_total_num_I() {
        total_num_I = (sc_uint<32>)total_num.read();
    };


    SC_HAS_PROCESS(finish_gen_cycsimV);

public:

    finish_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" finish_gen") ) )
        : finish_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        finish_gen_cyc0 = new Vfinish_gen_rtl( "Vfinish_gen" );
        // generate port connections
        finish_gen_cyc0->clk(clk);
        finish_gen_cyc0->rstn(rstn);
        finish_gen_cyc0->enable(enable_I);
        finish_gen_cyc0->clear(clear_I);
        finish_gen_cyc0->cnt_enable(cnt_enable);
        finish_gen_cyc0->total_num(total_num_I);
        finish_gen_cyc0->finish(finish);


        // setup the type conversion threads
        SC_METHOD( thread_enable_I);
            sensitive << enable;
        SC_METHOD( thread_clear_I);
            sensitive << clear;
        SC_METHOD( thread_total_num_I);
            sensitive << total_num;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            finish_gen_cyc0->trace(tfp,99);
        }
    };

    ~finish_gen_cycsimV()
    {
        delete finish_gen_cyc0;
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
    Vfinish_gen_rtl* finish_gen_cyc0;
};

finish_gen_cycsim* finish_gen_cycsim_factory()
{
    return new finish_gen_cycsimV("finish_gen");
}

class finish_gen_linkup
{
public:
    finish_gen_linkup() {
        extern finish_gen_cycsim* (*finish_gen_cycsim_factory_p)();
        finish_gen_cycsim_factory_p = &finish_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
finish_gen_linkup finish_gen_cycsimV_link;


