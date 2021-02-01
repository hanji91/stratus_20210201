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

#include "pw_feature_addr_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vpw_feature_addr_gen_rtl.h"


class Vpw_feature_addr_gen_rtl;

class pw_feature_addr_gen_cycsimV : public pw_feature_addr_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > start_I;
    sc_signal< bool > start_rising_I;
    sc_signal< uint32_t > systolic_en_I;
    sc_signal< uint32_t > systolic_depth_I;
    sc_signal< uint32_t > feature_width_I;
    sc_signal< uint32_t > feature_height_I;
    sc_signal< uint32_t > feature_channel_I;
    sc_signal< uint32_t > out_feature_width_I;
    sc_signal< uint32_t > out_feature_height_I;
    sc_signal< uint32_t > out_feature_channel_I;
    sc_signal< uint32_t > filter_width_I;
    sc_signal< uint32_t > filter_height_I;
    sc_signal< uint32_t > filter_channel_I;
    sc_signal< uint32_t > filter_number_I;
    sc_signal< uint32_t > read_feature_base_addr_I;
    sc_signal< uint32_t > pw_feature_addr_O;
    sc_signal< uint32_t > pw_feature_data_sel_O;
    sc_signal< uint32_t > systolic_sel_12d_O;


    // The following threads are used to do the type conversion.
    inline void thread_start_I() {
        start_I = (sc_uint<8>)start.read();
    };
    inline void thread_start_rising_I() {
        start_rising_I = (sc_uint<1>)start_rising.read();
    };
    inline void thread_systolic_en_I() {
        systolic_en_I = (sc_uint<8>)systolic_en.read();
    };
    inline void thread_systolic_depth_I() {
        systolic_depth_I = (sc_uint<8>)systolic_depth.read();
    };
    inline void thread_feature_width_I() {
        feature_width_I = (sc_uint<16>)feature_width.read();
    };
    inline void thread_feature_height_I() {
        feature_height_I = (sc_uint<16>)feature_height.read();
    };
    inline void thread_feature_channel_I() {
        feature_channel_I = (sc_uint<16>)feature_channel.read();
    };
    inline void thread_out_feature_width_I() {
        out_feature_width_I = (sc_uint<16>)out_feature_width.read();
    };
    inline void thread_out_feature_height_I() {
        out_feature_height_I = (sc_uint<16>)out_feature_height.read();
    };
    inline void thread_out_feature_channel_I() {
        out_feature_channel_I = (sc_uint<16>)out_feature_channel.read();
    };
    inline void thread_filter_width_I() {
        filter_width_I = (sc_uint<16>)filter_width.read();
    };
    inline void thread_filter_height_I() {
        filter_height_I = (sc_uint<16>)filter_height.read();
    };
    inline void thread_filter_channel_I() {
        filter_channel_I = (sc_uint<16>)filter_channel.read();
    };
    inline void thread_filter_number_I() {
        filter_number_I = (sc_uint<16>)filter_number.read();
    };
    inline void thread_read_feature_base_addr_I() {
        read_feature_base_addr_I = (sc_uint<32>)read_feature_base_addr.read();
    };
    inline void thread_pw_feature_addr_O() {
        pw_feature_addr = pw_feature_addr_O.read();
    };
    inline void thread_pw_feature_data_sel_O() {
        pw_feature_data_sel = pw_feature_data_sel_O.read();
    };
    inline void thread_systolic_sel_12d_O() {
        systolic_sel_12d = systolic_sel_12d_O.read();
    };


    SC_HAS_PROCESS(pw_feature_addr_gen_cycsimV);

public:

    pw_feature_addr_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" pw_feature_addr_gen") ) )
        : pw_feature_addr_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        pw_feature_addr_gen_cyc0 = new Vpw_feature_addr_gen_rtl( "Vpw_feature_addr_gen" );
        // generate port connections
        pw_feature_addr_gen_cyc0->clk(clk);
        pw_feature_addr_gen_cyc0->rstn(rstn);
        pw_feature_addr_gen_cyc0->stop(stop);
        pw_feature_addr_gen_cyc0->start(start_I);
        pw_feature_addr_gen_cyc0->start_rising(start_rising_I);
        pw_feature_addr_gen_cyc0->systolic_en(systolic_en_I);
        pw_feature_addr_gen_cyc0->systolic_depth(systolic_depth_I);
        pw_feature_addr_gen_cyc0->feature_width(feature_width_I);
        pw_feature_addr_gen_cyc0->feature_height(feature_height_I);
        pw_feature_addr_gen_cyc0->feature_channel(feature_channel_I);
        pw_feature_addr_gen_cyc0->out_feature_width(out_feature_width_I);
        pw_feature_addr_gen_cyc0->out_feature_height(out_feature_height_I);
        pw_feature_addr_gen_cyc0->out_feature_channel(out_feature_channel_I);
        pw_feature_addr_gen_cyc0->filter_width(filter_width_I);
        pw_feature_addr_gen_cyc0->filter_height(filter_height_I);
        pw_feature_addr_gen_cyc0->filter_channel(filter_channel_I);
        pw_feature_addr_gen_cyc0->filter_number(filter_number_I);
        pw_feature_addr_gen_cyc0->read_feature_base_addr(read_feature_base_addr_I);
        pw_feature_addr_gen_cyc0->pw_feature_addr(pw_feature_addr_O);
        pw_feature_addr_gen_cyc0->pw_feature_addr_valid(pw_feature_addr_valid);
        pw_feature_addr_gen_cyc0->pw_feature_data_valid(pw_feature_data_valid);
        pw_feature_addr_gen_cyc0->pw_cache_en(pw_cache_en);
        pw_feature_addr_gen_cyc0->pw_feature_data_sel(pw_feature_data_sel_O);
        pw_feature_addr_gen_cyc0->pw_addr_if_start(pw_addr_if_start);
        pw_feature_addr_gen_cyc0->systolic_sel_12d(systolic_sel_12d_O);


        // setup the type conversion threads
        SC_METHOD( thread_start_I);
            sensitive << start;
        SC_METHOD( thread_start_rising_I);
            sensitive << start_rising;
        SC_METHOD( thread_systolic_en_I);
            sensitive << systolic_en;
        SC_METHOD( thread_systolic_depth_I);
            sensitive << systolic_depth;
        SC_METHOD( thread_feature_width_I);
            sensitive << feature_width;
        SC_METHOD( thread_feature_height_I);
            sensitive << feature_height;
        SC_METHOD( thread_feature_channel_I);
            sensitive << feature_channel;
        SC_METHOD( thread_out_feature_width_I);
            sensitive << out_feature_width;
        SC_METHOD( thread_out_feature_height_I);
            sensitive << out_feature_height;
        SC_METHOD( thread_out_feature_channel_I);
            sensitive << out_feature_channel;
        SC_METHOD( thread_filter_width_I);
            sensitive << filter_width;
        SC_METHOD( thread_filter_height_I);
            sensitive << filter_height;
        SC_METHOD( thread_filter_channel_I);
            sensitive << filter_channel;
        SC_METHOD( thread_filter_number_I);
            sensitive << filter_number;
        SC_METHOD( thread_read_feature_base_addr_I);
            sensitive << read_feature_base_addr;
        SC_METHOD( thread_pw_feature_addr_O);
            sensitive << pw_feature_addr_O;
        SC_METHOD( thread_pw_feature_data_sel_O);
            sensitive << pw_feature_data_sel_O;
        SC_METHOD( thread_systolic_sel_12d_O);
            sensitive << systolic_sel_12d_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            pw_feature_addr_gen_cyc0->trace(tfp,99);
        }
    };

    ~pw_feature_addr_gen_cycsimV()
    {
        delete pw_feature_addr_gen_cyc0;
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
    Vpw_feature_addr_gen_rtl* pw_feature_addr_gen_cyc0;
};

pw_feature_addr_gen_cycsim* pw_feature_addr_gen_cycsim_factory()
{
    return new pw_feature_addr_gen_cycsimV("pw_feature_addr_gen");
}

class pw_feature_addr_gen_linkup
{
public:
    pw_feature_addr_gen_linkup() {
        extern pw_feature_addr_gen_cycsim* (*pw_feature_addr_gen_cycsim_factory_p)();
        pw_feature_addr_gen_cycsim_factory_p = &pw_feature_addr_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
pw_feature_addr_gen_linkup pw_feature_addr_gen_cycsimV_link;


