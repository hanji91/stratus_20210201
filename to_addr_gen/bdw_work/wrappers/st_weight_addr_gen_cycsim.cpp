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

#include "st_weight_addr_gen_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vst_weight_addr_gen_rtl.h"


class Vst_weight_addr_gen_rtl;

class st_weight_addr_gen_cycsimV : public st_weight_addr_gen_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > start_I;
    sc_signal< bool > start_rising_I;
    sc_signal< uint32_t > feature_width_I;
    sc_signal< uint32_t > feature_height_I;
    sc_signal< uint32_t > feature_channel_I;
    sc_signal< uint32_t > out_feature_width_I;
    sc_signal< uint32_t > out_feature_height_I;
    sc_signal< uint32_t > out_feature_channel_I;
    sc_signal< uint32_t > filter_width_I;
    sc_signal< uint32_t > filter_height_I;
    sc_signal< uint32_t > filter_channel_I;
    sc_signal< uint32_t > stride_x_I;
    sc_signal< uint32_t > stride_y_I;
    sc_signal< uint32_t > pad_top_size_I;
    sc_signal< uint32_t > pad_bottom_size_I;
    sc_signal< uint32_t > pad_left_size_I;
    sc_signal< uint32_t > pad_right_size_I;
    sc_signal< uint32_t > read_weight_base_addr_I;
    sc_signal< uint32_t > st_weight_addr_O;


    // The following threads are used to do the type conversion.
    inline void thread_start_I() {
        start_I = (sc_uint<8>)start.read();
    };
    inline void thread_start_rising_I() {
        start_rising_I = (sc_uint<1>)start_rising.read();
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
    inline void thread_stride_x_I() {
        stride_x_I = (sc_uint<8>)stride_x.read();
    };
    inline void thread_stride_y_I() {
        stride_y_I = (sc_uint<8>)stride_y.read();
    };
    inline void thread_pad_top_size_I() {
        pad_top_size_I = (sc_uint<8>)pad_top_size.read();
    };
    inline void thread_pad_bottom_size_I() {
        pad_bottom_size_I = (sc_uint<8>)pad_bottom_size.read();
    };
    inline void thread_pad_left_size_I() {
        pad_left_size_I = (sc_uint<8>)pad_left_size.read();
    };
    inline void thread_pad_right_size_I() {
        pad_right_size_I = (sc_uint<8>)pad_right_size.read();
    };
    inline void thread_read_weight_base_addr_I() {
        read_weight_base_addr_I = (sc_uint<32>)read_weight_base_addr.read();
    };
    inline void thread_st_weight_addr_O() {
        st_weight_addr = st_weight_addr_O.read();
    };


    SC_HAS_PROCESS(st_weight_addr_gen_cycsimV);

public:

    st_weight_addr_gen_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" st_weight_addr_gen") ) )
        : st_weight_addr_gen_cycsim(in_name)
    {
        // instantiate the verilated module
        st_weight_addr_gen_cyc0 = new Vst_weight_addr_gen_rtl( "Vst_weight_addr_gen" );
        // generate port connections
        st_weight_addr_gen_cyc0->clk(clk);
        st_weight_addr_gen_cyc0->rstn(rstn);
        st_weight_addr_gen_cyc0->stop(stop);
        st_weight_addr_gen_cyc0->start(start_I);
        st_weight_addr_gen_cyc0->start_rising(start_rising_I);
        st_weight_addr_gen_cyc0->feature_width(feature_width_I);
        st_weight_addr_gen_cyc0->feature_height(feature_height_I);
        st_weight_addr_gen_cyc0->feature_channel(feature_channel_I);
        st_weight_addr_gen_cyc0->out_feature_width(out_feature_width_I);
        st_weight_addr_gen_cyc0->out_feature_height(out_feature_height_I);
        st_weight_addr_gen_cyc0->out_feature_channel(out_feature_channel_I);
        st_weight_addr_gen_cyc0->filter_width(filter_width_I);
        st_weight_addr_gen_cyc0->filter_height(filter_height_I);
        st_weight_addr_gen_cyc0->filter_channel(filter_channel_I);
        st_weight_addr_gen_cyc0->stride_x(stride_x_I);
        st_weight_addr_gen_cyc0->stride_y(stride_y_I);
        st_weight_addr_gen_cyc0->pad_top_size(pad_top_size_I);
        st_weight_addr_gen_cyc0->pad_bottom_size(pad_bottom_size_I);
        st_weight_addr_gen_cyc0->pad_left_size(pad_left_size_I);
        st_weight_addr_gen_cyc0->pad_right_size(pad_right_size_I);
        st_weight_addr_gen_cyc0->read_weight_base_addr(read_weight_base_addr_I);
        st_weight_addr_gen_cyc0->st_weight_addr(st_weight_addr_O);
        st_weight_addr_gen_cyc0->st_weight_addr_valid(st_weight_addr_valid);
        st_weight_addr_gen_cyc0->st_weight_data_valid(st_weight_data_valid);
        st_weight_addr_gen_cyc0->cache_en(cache_en);


        // setup the type conversion threads
        SC_METHOD( thread_start_I);
            sensitive << start;
        SC_METHOD( thread_start_rising_I);
            sensitive << start_rising;
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
        SC_METHOD( thread_stride_x_I);
            sensitive << stride_x;
        SC_METHOD( thread_stride_y_I);
            sensitive << stride_y;
        SC_METHOD( thread_pad_top_size_I);
            sensitive << pad_top_size;
        SC_METHOD( thread_pad_bottom_size_I);
            sensitive << pad_bottom_size;
        SC_METHOD( thread_pad_left_size_I);
            sensitive << pad_left_size;
        SC_METHOD( thread_pad_right_size_I);
            sensitive << pad_right_size;
        SC_METHOD( thread_read_weight_base_addr_I);
            sensitive << read_weight_base_addr;
        SC_METHOD( thread_st_weight_addr_O);
            sensitive << st_weight_addr_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            st_weight_addr_gen_cyc0->trace(tfp,99);
        }
    };

    ~st_weight_addr_gen_cycsimV()
    {
        delete st_weight_addr_gen_cyc0;
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
    Vst_weight_addr_gen_rtl* st_weight_addr_gen_cyc0;
};

st_weight_addr_gen_cycsim* st_weight_addr_gen_cycsim_factory()
{
    return new st_weight_addr_gen_cycsimV("st_weight_addr_gen");
}

class st_weight_addr_gen_linkup
{
public:
    st_weight_addr_gen_linkup() {
        extern st_weight_addr_gen_cycsim* (*st_weight_addr_gen_cycsim_factory_p)();
        st_weight_addr_gen_cycsim_factory_p = &st_weight_addr_gen_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
st_weight_addr_gen_linkup st_weight_addr_gen_cycsimV_link;


