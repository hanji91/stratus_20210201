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

#include "feature_write_addr_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vfeature_write_addr_gen_rtl.h"


class Vfeature_write_addr_gen_rtl;

class feature_write_addr_gen_cycsimV : public feature_write_addr_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > start_I;
    sc_signal< uint32_t > conv_type_I;
    sc_signal< uint32_t > base_addr_I;
    sc_signal< sc_bv< 320 >  > src_I;
    sc_signal< uint32_t > read_address_I;
    sc_signal< sc_bv< 320 >  > read_data_O;
    sc_signal< uint32_t > address_0_O;
    sc_signal< sc_bv< 320 >  > data_in_I;
    sc_signal< sc_bv< 320 >  > data_out_O;


    // The following threads are used to do the type conversion.
    inline void thread_start_I() {
        start_I = (sc_uint<8>)start.read();
    };
    inline void thread_conv_type_I() {
        conv_type_I = (sc_uint<8>)conv_type.read();
    };
    inline void thread_base_addr_I() {
        base_addr_I = (sc_uint<32>)base_addr.read();
    };
    inline void thread_src_I() {
        src_I = src.read();
    };
    inline void thread_read_address_I() {
        read_address_I = (sc_uint<32>)read_address.read();
    };
    inline void thread_read_data_O() {
        read_data = read_data_O.read();
    };
    inline void thread_address_0_O() {
        address_0 = address_0_O.read();
    };
    inline void thread_data_in_I() {
        data_in_I = data_in.read();
    };
    inline void thread_data_out_O() {
        data_out = data_out_O.read();
    };


    SC_HAS_PROCESS(feature_write_addr_gen_cycsimV);

public:

    feature_write_addr_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" feature_write_addr_gen") ) )
        : feature_write_addr_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        feature_write_addr_gen_cyc0 = new Vfeature_write_addr_gen_rtl( "Vfeature_write_addr_gen" );
        // generate port connections
        feature_write_addr_gen_cyc0->clk(clk);
        feature_write_addr_gen_cyc0->rstn(rstn);
        feature_write_addr_gen_cyc0->init(init);
        feature_write_addr_gen_cyc0->start(start_I);
        feature_write_addr_gen_cyc0->conv_type(conv_type_I);
        feature_write_addr_gen_cyc0->stop(stop);
        feature_write_addr_gen_cyc0->base_addr(base_addr_I);
        feature_write_addr_gen_cyc0->src(src_I);
        feature_write_addr_gen_cyc0->src_vld(src_vld);
        feature_write_addr_gen_cyc0->read_address(read_address_I);
        feature_write_addr_gen_cyc0->read_address_valid(read_address_valid);
        feature_write_addr_gen_cyc0->data_in_en(data_in_en);
        feature_write_addr_gen_cyc0->read_data(read_data_O);
        feature_write_addr_gen_cyc0->address_0(address_0_O);
        feature_write_addr_gen_cyc0->cs_0(cs_0);
        feature_write_addr_gen_cyc0->we_0(we_0);
        feature_write_addr_gen_cyc0->oe_0(oe_0);
        feature_write_addr_gen_cyc0->data_in(data_in_I);
        feature_write_addr_gen_cyc0->data_out(data_out_O);


        // setup the type conversion threads
        SC_METHOD( thread_start_I);
            sensitive << start;
        SC_METHOD( thread_conv_type_I);
            sensitive << conv_type;
        SC_METHOD( thread_base_addr_I);
            sensitive << base_addr;
        SC_METHOD( thread_src_I);
            sensitive << src;
        SC_METHOD( thread_read_address_I);
            sensitive << read_address;
        SC_METHOD( thread_read_data_O);
            sensitive << read_data_O;
        SC_METHOD( thread_address_0_O);
            sensitive << address_0_O;
        SC_METHOD( thread_data_in_I);
            sensitive << data_in;
        SC_METHOD( thread_data_out_O);
            sensitive << data_out_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            feature_write_addr_gen_cyc0->trace(tfp,99);
        }
    };

    ~feature_write_addr_gen_cycsimV()
    {
        delete feature_write_addr_gen_cyc0;
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
    Vfeature_write_addr_gen_rtl* feature_write_addr_gen_cyc0;
};

feature_write_addr_gen_cycsim* feature_write_addr_gen_cycsim_factory()
{
    return new feature_write_addr_gen_cycsimV("feature_write_addr_gen");
}

class feature_write_addr_gen_linkup
{
public:
    feature_write_addr_gen_linkup() {
        extern feature_write_addr_gen_cycsim* (*feature_write_addr_gen_cycsim_factory_p)();
        feature_write_addr_gen_cycsim_factory_p = &feature_write_addr_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
feature_write_addr_gen_linkup feature_write_addr_gen_cycsimV_link;


