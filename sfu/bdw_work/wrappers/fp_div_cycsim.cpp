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

#include "fp_div_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vfp_div_rtl.h"


class Vfp_div_rtl;

class fp_div_cycsimV : public fp_div_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > a_man_I;
    sc_signal< uint32_t > a_exp_I;
    sc_signal< bool > a_sign_I;
    sc_signal< uint32_t > b_man_I;
    sc_signal< uint32_t > b_exp_I;
    sc_signal< bool > b_sign_I;
    sc_signal< uint32_t > r_man_O;
    sc_signal< uint32_t > r_exp_O;
    sc_signal< bool > r_sign_O;


    // The following threads are used to do the type conversion.
    inline void thread_a_man_I() {
        a_man_I = (sc_uint<23>)a_man.read();
    };
    inline void thread_a_exp_I() {
        a_exp_I = (sc_uint<8>)a_exp.read();
    };
    inline void thread_a_sign_I() {
        a_sign_I = (sc_uint<1>)a_sign.read();
    };
    inline void thread_b_man_I() {
        b_man_I = (sc_uint<23>)b_man.read();
    };
    inline void thread_b_exp_I() {
        b_exp_I = (sc_uint<8>)b_exp.read();
    };
    inline void thread_b_sign_I() {
        b_sign_I = (sc_uint<1>)b_sign.read();
    };
    inline void thread_r_man_O() {
        r_man = r_man_O.read();
    };
    inline void thread_r_exp_O() {
        r_exp = r_exp_O.read();
    };
    inline void thread_r_sign_O() {
        r_sign = r_sign_O.read();
    };


    SC_HAS_PROCESS(fp_div_cycsimV);

public:

    fp_div_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" fp_div") ) )
        : fp_div_cycsim(in_name)
    {
        // instantiate the verilated module
        fp_div_cyc0 = new Vfp_div_rtl( "Vfp_div" );
        // generate port connections
        fp_div_cyc0->clk(clk);
        fp_div_cyc0->rstn(rstn);
        fp_div_cyc0->src_valid(src_valid);
        fp_div_cyc0->a_man(a_man_I);
        fp_div_cyc0->a_exp(a_exp_I);
        fp_div_cyc0->a_sign(a_sign_I);
        fp_div_cyc0->b_man(b_man_I);
        fp_div_cyc0->b_exp(b_exp_I);
        fp_div_cyc0->b_sign(b_sign_I);
        fp_div_cyc0->r_man(r_man_O);
        fp_div_cyc0->r_exp(r_exp_O);
        fp_div_cyc0->r_sign(r_sign_O);
        fp_div_cyc0->dst_valid(dst_valid);


        // setup the type conversion threads
        SC_METHOD( thread_a_man_I);
            sensitive << a_man;
        SC_METHOD( thread_a_exp_I);
            sensitive << a_exp;
        SC_METHOD( thread_a_sign_I);
            sensitive << a_sign;
        SC_METHOD( thread_b_man_I);
            sensitive << b_man;
        SC_METHOD( thread_b_exp_I);
            sensitive << b_exp;
        SC_METHOD( thread_b_sign_I);
            sensitive << b_sign;
        SC_METHOD( thread_r_man_O);
            sensitive << r_man_O;
        SC_METHOD( thread_r_exp_O);
            sensitive << r_exp_O;
        SC_METHOD( thread_r_sign_O);
            sensitive << r_sign_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            fp_div_cyc0->trace(tfp,99);
        }
    };

    ~fp_div_cycsimV()
    {
        delete fp_div_cyc0;
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
    Vfp_div_rtl* fp_div_cyc0;
};

fp_div_cycsim* fp_div_cycsim_factory()
{
    return new fp_div_cycsimV("fp_div");
}

class fp_div_linkup
{
public:
    fp_div_linkup() {
        extern fp_div_cycsim* (*fp_div_cycsim_factory_p)();
        fp_div_cycsim_factory_p = &fp_div_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
fp_div_linkup fp_div_cycsimV_link;


