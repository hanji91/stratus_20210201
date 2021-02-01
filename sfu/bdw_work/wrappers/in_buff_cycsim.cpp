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

#include "in_buff_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vin_buff_rtl.h"


class Vin_buff_rtl;

class in_buff_cycsimV : public in_buff_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > in_data_0_I;
    sc_signal< uint32_t > in_data_1_I;
    sc_signal< uint32_t > in_data_2_I;
    sc_signal< uint32_t > in_data_3_I;
    sc_signal< uint32_t > in_data_4_I;
    sc_signal< uint32_t > in_data_5_I;
    sc_signal< uint32_t > in_data_6_I;
    sc_signal< uint32_t > in_data_7_I;
    sc_signal< uint32_t > in_data_8_I;
    sc_signal< uint32_t > in_data_9_I;
    sc_signal< uint32_t > in_data_10_I;
    sc_signal< uint32_t > in_data_11_I;
    sc_signal< uint32_t > in_data_12_I;
    sc_signal< uint32_t > in_data_13_I;
    sc_signal< uint32_t > in_data_14_I;
    sc_signal< uint32_t > in_data_15_I;
    sc_signal< uint32_t > in_data_16_I;
    sc_signal< uint32_t > in_data_17_I;
    sc_signal< uint32_t > in_data_18_I;
    sc_signal< uint32_t > in_data_19_I;
    sc_signal< uint32_t > in_data_20_I;
    sc_signal< uint32_t > in_data_21_I;
    sc_signal< uint32_t > in_data_22_I;
    sc_signal< uint32_t > in_data_23_I;
    sc_signal< uint32_t > in_data_24_I;
    sc_signal< uint32_t > in_data_25_I;
    sc_signal< uint32_t > in_data_26_I;
    sc_signal< uint32_t > in_data_27_I;
    sc_signal< uint32_t > in_data_28_I;
    sc_signal< uint32_t > in_data_29_I;
    sc_signal< uint32_t > in_data_30_I;
    sc_signal< uint32_t > in_data_31_I;
    sc_signal< uint32_t > out_data_0_O;
    sc_signal< uint32_t > out_data_1_O;
    sc_signal< uint32_t > out_data_2_O;
    sc_signal< uint32_t > out_data_3_O;
    sc_signal< uint32_t > out_data_4_O;
    sc_signal< uint32_t > out_data_5_O;
    sc_signal< uint32_t > out_data_6_O;
    sc_signal< uint32_t > out_data_7_O;


    // The following threads are used to do the type conversion.
    inline void thread_in_data_0_I() {
        in_data_0_I = (sc_uint<32>)in_data_0.read();
    };
    inline void thread_in_data_1_I() {
        in_data_1_I = (sc_uint<32>)in_data_1.read();
    };
    inline void thread_in_data_2_I() {
        in_data_2_I = (sc_uint<32>)in_data_2.read();
    };
    inline void thread_in_data_3_I() {
        in_data_3_I = (sc_uint<32>)in_data_3.read();
    };
    inline void thread_in_data_4_I() {
        in_data_4_I = (sc_uint<32>)in_data_4.read();
    };
    inline void thread_in_data_5_I() {
        in_data_5_I = (sc_uint<32>)in_data_5.read();
    };
    inline void thread_in_data_6_I() {
        in_data_6_I = (sc_uint<32>)in_data_6.read();
    };
    inline void thread_in_data_7_I() {
        in_data_7_I = (sc_uint<32>)in_data_7.read();
    };
    inline void thread_in_data_8_I() {
        in_data_8_I = (sc_uint<32>)in_data_8.read();
    };
    inline void thread_in_data_9_I() {
        in_data_9_I = (sc_uint<32>)in_data_9.read();
    };
    inline void thread_in_data_10_I() {
        in_data_10_I = (sc_uint<32>)in_data_10.read();
    };
    inline void thread_in_data_11_I() {
        in_data_11_I = (sc_uint<32>)in_data_11.read();
    };
    inline void thread_in_data_12_I() {
        in_data_12_I = (sc_uint<32>)in_data_12.read();
    };
    inline void thread_in_data_13_I() {
        in_data_13_I = (sc_uint<32>)in_data_13.read();
    };
    inline void thread_in_data_14_I() {
        in_data_14_I = (sc_uint<32>)in_data_14.read();
    };
    inline void thread_in_data_15_I() {
        in_data_15_I = (sc_uint<32>)in_data_15.read();
    };
    inline void thread_in_data_16_I() {
        in_data_16_I = (sc_uint<32>)in_data_16.read();
    };
    inline void thread_in_data_17_I() {
        in_data_17_I = (sc_uint<32>)in_data_17.read();
    };
    inline void thread_in_data_18_I() {
        in_data_18_I = (sc_uint<32>)in_data_18.read();
    };
    inline void thread_in_data_19_I() {
        in_data_19_I = (sc_uint<32>)in_data_19.read();
    };
    inline void thread_in_data_20_I() {
        in_data_20_I = (sc_uint<32>)in_data_20.read();
    };
    inline void thread_in_data_21_I() {
        in_data_21_I = (sc_uint<32>)in_data_21.read();
    };
    inline void thread_in_data_22_I() {
        in_data_22_I = (sc_uint<32>)in_data_22.read();
    };
    inline void thread_in_data_23_I() {
        in_data_23_I = (sc_uint<32>)in_data_23.read();
    };
    inline void thread_in_data_24_I() {
        in_data_24_I = (sc_uint<32>)in_data_24.read();
    };
    inline void thread_in_data_25_I() {
        in_data_25_I = (sc_uint<32>)in_data_25.read();
    };
    inline void thread_in_data_26_I() {
        in_data_26_I = (sc_uint<32>)in_data_26.read();
    };
    inline void thread_in_data_27_I() {
        in_data_27_I = (sc_uint<32>)in_data_27.read();
    };
    inline void thread_in_data_28_I() {
        in_data_28_I = (sc_uint<32>)in_data_28.read();
    };
    inline void thread_in_data_29_I() {
        in_data_29_I = (sc_uint<32>)in_data_29.read();
    };
    inline void thread_in_data_30_I() {
        in_data_30_I = (sc_uint<32>)in_data_30.read();
    };
    inline void thread_in_data_31_I() {
        in_data_31_I = (sc_uint<32>)in_data_31.read();
    };
    inline void thread_out_data_0_O() {
        out_data_0 = out_data_0_O.read();
    };
    inline void thread_out_data_1_O() {
        out_data_1 = out_data_1_O.read();
    };
    inline void thread_out_data_2_O() {
        out_data_2 = out_data_2_O.read();
    };
    inline void thread_out_data_3_O() {
        out_data_3 = out_data_3_O.read();
    };
    inline void thread_out_data_4_O() {
        out_data_4 = out_data_4_O.read();
    };
    inline void thread_out_data_5_O() {
        out_data_5 = out_data_5_O.read();
    };
    inline void thread_out_data_6_O() {
        out_data_6 = out_data_6_O.read();
    };
    inline void thread_out_data_7_O() {
        out_data_7 = out_data_7_O.read();
    };


    SC_HAS_PROCESS(in_buff_cycsimV);

public:

    in_buff_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" in_buff") ) )
        : in_buff_cycsim(in_name)
    {
        // instantiate the verilated module
        in_buff_cyc0 = new Vin_buff_rtl( "Vin_buff" );
        // generate port connections
        in_buff_cyc0->clk(clk);
        in_buff_cyc0->rstn(rstn);
        in_buff_cyc0->enable(enable);
        in_buff_cyc0->in_data_0(in_data_0_I);
        in_buff_cyc0->in_data_1(in_data_1_I);
        in_buff_cyc0->in_data_2(in_data_2_I);
        in_buff_cyc0->in_data_3(in_data_3_I);
        in_buff_cyc0->in_data_4(in_data_4_I);
        in_buff_cyc0->in_data_5(in_data_5_I);
        in_buff_cyc0->in_data_6(in_data_6_I);
        in_buff_cyc0->in_data_7(in_data_7_I);
        in_buff_cyc0->in_data_8(in_data_8_I);
        in_buff_cyc0->in_data_9(in_data_9_I);
        in_buff_cyc0->in_data_10(in_data_10_I);
        in_buff_cyc0->in_data_11(in_data_11_I);
        in_buff_cyc0->in_data_12(in_data_12_I);
        in_buff_cyc0->in_data_13(in_data_13_I);
        in_buff_cyc0->in_data_14(in_data_14_I);
        in_buff_cyc0->in_data_15(in_data_15_I);
        in_buff_cyc0->in_data_16(in_data_16_I);
        in_buff_cyc0->in_data_17(in_data_17_I);
        in_buff_cyc0->in_data_18(in_data_18_I);
        in_buff_cyc0->in_data_19(in_data_19_I);
        in_buff_cyc0->in_data_20(in_data_20_I);
        in_buff_cyc0->in_data_21(in_data_21_I);
        in_buff_cyc0->in_data_22(in_data_22_I);
        in_buff_cyc0->in_data_23(in_data_23_I);
        in_buff_cyc0->in_data_24(in_data_24_I);
        in_buff_cyc0->in_data_25(in_data_25_I);
        in_buff_cyc0->in_data_26(in_data_26_I);
        in_buff_cyc0->in_data_27(in_data_27_I);
        in_buff_cyc0->in_data_28(in_data_28_I);
        in_buff_cyc0->in_data_29(in_data_29_I);
        in_buff_cyc0->in_data_30(in_data_30_I);
        in_buff_cyc0->in_data_31(in_data_31_I);
        in_buff_cyc0->in_data_valid(in_data_valid);
        in_buff_cyc0->out_data_0(out_data_0_O);
        in_buff_cyc0->out_data_1(out_data_1_O);
        in_buff_cyc0->out_data_2(out_data_2_O);
        in_buff_cyc0->out_data_3(out_data_3_O);
        in_buff_cyc0->out_data_4(out_data_4_O);
        in_buff_cyc0->out_data_5(out_data_5_O);
        in_buff_cyc0->out_data_6(out_data_6_O);
        in_buff_cyc0->out_data_7(out_data_7_O);
        in_buff_cyc0->out_data_valid(out_data_valid);


        // setup the type conversion threads
        SC_METHOD( thread_in_data_0_I);
            sensitive << in_data_0;
        SC_METHOD( thread_in_data_1_I);
            sensitive << in_data_1;
        SC_METHOD( thread_in_data_2_I);
            sensitive << in_data_2;
        SC_METHOD( thread_in_data_3_I);
            sensitive << in_data_3;
        SC_METHOD( thread_in_data_4_I);
            sensitive << in_data_4;
        SC_METHOD( thread_in_data_5_I);
            sensitive << in_data_5;
        SC_METHOD( thread_in_data_6_I);
            sensitive << in_data_6;
        SC_METHOD( thread_in_data_7_I);
            sensitive << in_data_7;
        SC_METHOD( thread_in_data_8_I);
            sensitive << in_data_8;
        SC_METHOD( thread_in_data_9_I);
            sensitive << in_data_9;
        SC_METHOD( thread_in_data_10_I);
            sensitive << in_data_10;
        SC_METHOD( thread_in_data_11_I);
            sensitive << in_data_11;
        SC_METHOD( thread_in_data_12_I);
            sensitive << in_data_12;
        SC_METHOD( thread_in_data_13_I);
            sensitive << in_data_13;
        SC_METHOD( thread_in_data_14_I);
            sensitive << in_data_14;
        SC_METHOD( thread_in_data_15_I);
            sensitive << in_data_15;
        SC_METHOD( thread_in_data_16_I);
            sensitive << in_data_16;
        SC_METHOD( thread_in_data_17_I);
            sensitive << in_data_17;
        SC_METHOD( thread_in_data_18_I);
            sensitive << in_data_18;
        SC_METHOD( thread_in_data_19_I);
            sensitive << in_data_19;
        SC_METHOD( thread_in_data_20_I);
            sensitive << in_data_20;
        SC_METHOD( thread_in_data_21_I);
            sensitive << in_data_21;
        SC_METHOD( thread_in_data_22_I);
            sensitive << in_data_22;
        SC_METHOD( thread_in_data_23_I);
            sensitive << in_data_23;
        SC_METHOD( thread_in_data_24_I);
            sensitive << in_data_24;
        SC_METHOD( thread_in_data_25_I);
            sensitive << in_data_25;
        SC_METHOD( thread_in_data_26_I);
            sensitive << in_data_26;
        SC_METHOD( thread_in_data_27_I);
            sensitive << in_data_27;
        SC_METHOD( thread_in_data_28_I);
            sensitive << in_data_28;
        SC_METHOD( thread_in_data_29_I);
            sensitive << in_data_29;
        SC_METHOD( thread_in_data_30_I);
            sensitive << in_data_30;
        SC_METHOD( thread_in_data_31_I);
            sensitive << in_data_31;
        SC_METHOD( thread_out_data_0_O);
            sensitive << out_data_0_O;
        SC_METHOD( thread_out_data_1_O);
            sensitive << out_data_1_O;
        SC_METHOD( thread_out_data_2_O);
            sensitive << out_data_2_O;
        SC_METHOD( thread_out_data_3_O);
            sensitive << out_data_3_O;
        SC_METHOD( thread_out_data_4_O);
            sensitive << out_data_4_O;
        SC_METHOD( thread_out_data_5_O);
            sensitive << out_data_5_O;
        SC_METHOD( thread_out_data_6_O);
            sensitive << out_data_6_O;
        SC_METHOD( thread_out_data_7_O);
            sensitive << out_data_7_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            in_buff_cyc0->trace(tfp,99);
        }
    };

    ~in_buff_cycsimV()
    {
        delete in_buff_cyc0;
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
    Vin_buff_rtl* in_buff_cyc0;
};

in_buff_cycsim* in_buff_cycsim_factory()
{
    return new in_buff_cycsimV("in_buff");
}

class in_buff_linkup
{
public:
    in_buff_linkup() {
        extern in_buff_cycsim* (*in_buff_cycsim_factory_p)();
        in_buff_cycsim_factory_p = &in_buff_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
in_buff_linkup in_buff_cycsimV_link;


