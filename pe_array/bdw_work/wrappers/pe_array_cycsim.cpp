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

#include "pe_array_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vpe_array_rtl.h"


class Vpe_array_rtl;

class pe_array_cycsimV : public pe_array_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > systolic_en_I;
    sc_signal< uint32_t > systolic_depth_I;
    sc_signal< uint32_t > mac_shift_len_I;
    sc_signal< uint32_t > src_0_s0_0_I;
    sc_signal< uint32_t > src_0_s0_1_I;
    sc_signal< uint32_t > src_0_s0_2_I;
    sc_signal< uint32_t > src_0_s0_3_I;
    sc_signal< uint32_t > src_0_s0_4_I;
    sc_signal< uint32_t > src_0_s0_5_I;
    sc_signal< uint32_t > src_0_s0_6_I;
    sc_signal< uint32_t > src_0_s0_7_I;
    sc_signal< uint32_t > src_0_s0_8_I;
    sc_signal< uint32_t > src_0_s0_9_I;
    sc_signal< uint32_t > src_0_s0_10_I;
    sc_signal< uint32_t > src_0_s0_11_I;
    sc_signal< uint32_t > src_0_s0_12_I;
    sc_signal< uint32_t > src_0_s0_13_I;
    sc_signal< uint32_t > src_0_s0_14_I;
    sc_signal< uint32_t > src_0_s0_15_I;
    sc_signal< uint32_t > src_0_s0_16_I;
    sc_signal< uint32_t > src_0_s0_17_I;
    sc_signal< uint32_t > src_0_s0_18_I;
    sc_signal< uint32_t > src_0_s0_19_I;
    sc_signal< uint32_t > src_0_s0_20_I;
    sc_signal< uint32_t > src_0_s0_21_I;
    sc_signal< uint32_t > src_0_s0_22_I;
    sc_signal< uint32_t > src_0_s0_23_I;
    sc_signal< uint32_t > src_0_s0_24_I;
    sc_signal< uint32_t > src_0_s0_25_I;
    sc_signal< uint32_t > src_0_s0_26_I;
    sc_signal< uint32_t > src_0_s0_27_I;
    sc_signal< uint32_t > src_0_s0_28_I;
    sc_signal< uint32_t > src_0_s0_29_I;
    sc_signal< uint32_t > src_0_s0_30_I;
    sc_signal< uint32_t > src_0_s0_31_I;
    sc_signal< uint32_t > src_0_s1_0_I;
    sc_signal< uint32_t > src_0_s1_1_I;
    sc_signal< uint32_t > src_0_s1_2_I;
    sc_signal< uint32_t > src_0_s1_3_I;
    sc_signal< uint32_t > src_0_s1_4_I;
    sc_signal< uint32_t > src_0_s1_5_I;
    sc_signal< uint32_t > src_0_s1_6_I;
    sc_signal< uint32_t > src_0_s1_7_I;
    sc_signal< uint32_t > src_0_s1_8_I;
    sc_signal< uint32_t > src_0_s1_9_I;
    sc_signal< uint32_t > src_0_s1_10_I;
    sc_signal< uint32_t > src_0_s1_11_I;
    sc_signal< uint32_t > src_0_s1_12_I;
    sc_signal< uint32_t > src_0_s1_13_I;
    sc_signal< uint32_t > src_0_s1_14_I;
    sc_signal< uint32_t > src_0_s1_15_I;
    sc_signal< uint32_t > src_0_s1_16_I;
    sc_signal< uint32_t > src_0_s1_17_I;
    sc_signal< uint32_t > src_0_s1_18_I;
    sc_signal< uint32_t > src_0_s1_19_I;
    sc_signal< uint32_t > src_0_s1_20_I;
    sc_signal< uint32_t > src_0_s1_21_I;
    sc_signal< uint32_t > src_0_s1_22_I;
    sc_signal< uint32_t > src_0_s1_23_I;
    sc_signal< uint32_t > src_0_s1_24_I;
    sc_signal< uint32_t > src_0_s1_25_I;
    sc_signal< uint32_t > src_0_s1_26_I;
    sc_signal< uint32_t > src_0_s1_27_I;
    sc_signal< uint32_t > src_0_s1_28_I;
    sc_signal< uint32_t > src_0_s1_29_I;
    sc_signal< uint32_t > src_0_s1_30_I;
    sc_signal< uint32_t > src_0_s1_31_I;
    sc_signal< uint32_t > src_0_s2_0_I;
    sc_signal< uint32_t > src_0_s2_1_I;
    sc_signal< uint32_t > src_0_s2_2_I;
    sc_signal< uint32_t > src_0_s2_3_I;
    sc_signal< uint32_t > src_0_s2_4_I;
    sc_signal< uint32_t > src_0_s2_5_I;
    sc_signal< uint32_t > src_0_s2_6_I;
    sc_signal< uint32_t > src_0_s2_7_I;
    sc_signal< uint32_t > src_0_s2_8_I;
    sc_signal< uint32_t > src_0_s2_9_I;
    sc_signal< uint32_t > src_0_s2_10_I;
    sc_signal< uint32_t > src_0_s2_11_I;
    sc_signal< uint32_t > src_0_s2_12_I;
    sc_signal< uint32_t > src_0_s2_13_I;
    sc_signal< uint32_t > src_0_s2_14_I;
    sc_signal< uint32_t > src_0_s2_15_I;
    sc_signal< uint32_t > src_0_s2_16_I;
    sc_signal< uint32_t > src_0_s2_17_I;
    sc_signal< uint32_t > src_0_s2_18_I;
    sc_signal< uint32_t > src_0_s2_19_I;
    sc_signal< uint32_t > src_0_s2_20_I;
    sc_signal< uint32_t > src_0_s2_21_I;
    sc_signal< uint32_t > src_0_s2_22_I;
    sc_signal< uint32_t > src_0_s2_23_I;
    sc_signal< uint32_t > src_0_s2_24_I;
    sc_signal< uint32_t > src_0_s2_25_I;
    sc_signal< uint32_t > src_0_s2_26_I;
    sc_signal< uint32_t > src_0_s2_27_I;
    sc_signal< uint32_t > src_0_s2_28_I;
    sc_signal< uint32_t > src_0_s2_29_I;
    sc_signal< uint32_t > src_0_s2_30_I;
    sc_signal< uint32_t > src_0_s2_31_I;
    sc_signal< uint32_t > src_0_s3_0_I;
    sc_signal< uint32_t > src_0_s3_1_I;
    sc_signal< uint32_t > src_0_s3_2_I;
    sc_signal< uint32_t > src_0_s3_3_I;
    sc_signal< uint32_t > src_0_s3_4_I;
    sc_signal< uint32_t > src_0_s3_5_I;
    sc_signal< uint32_t > src_0_s3_6_I;
    sc_signal< uint32_t > src_0_s3_7_I;
    sc_signal< uint32_t > src_0_s3_8_I;
    sc_signal< uint32_t > src_0_s3_9_I;
    sc_signal< uint32_t > src_0_s3_10_I;
    sc_signal< uint32_t > src_0_s3_11_I;
    sc_signal< uint32_t > src_0_s3_12_I;
    sc_signal< uint32_t > src_0_s3_13_I;
    sc_signal< uint32_t > src_0_s3_14_I;
    sc_signal< uint32_t > src_0_s3_15_I;
    sc_signal< uint32_t > src_0_s3_16_I;
    sc_signal< uint32_t > src_0_s3_17_I;
    sc_signal< uint32_t > src_0_s3_18_I;
    sc_signal< uint32_t > src_0_s3_19_I;
    sc_signal< uint32_t > src_0_s3_20_I;
    sc_signal< uint32_t > src_0_s3_21_I;
    sc_signal< uint32_t > src_0_s3_22_I;
    sc_signal< uint32_t > src_0_s3_23_I;
    sc_signal< uint32_t > src_0_s3_24_I;
    sc_signal< uint32_t > src_0_s3_25_I;
    sc_signal< uint32_t > src_0_s3_26_I;
    sc_signal< uint32_t > src_0_s3_27_I;
    sc_signal< uint32_t > src_0_s3_28_I;
    sc_signal< uint32_t > src_0_s3_29_I;
    sc_signal< uint32_t > src_0_s3_30_I;
    sc_signal< uint32_t > src_0_s3_31_I;
    sc_signal< uint32_t > src_0_s4_0_I;
    sc_signal< uint32_t > src_0_s4_1_I;
    sc_signal< uint32_t > src_0_s4_2_I;
    sc_signal< uint32_t > src_0_s4_3_I;
    sc_signal< uint32_t > src_0_s4_4_I;
    sc_signal< uint32_t > src_0_s4_5_I;
    sc_signal< uint32_t > src_0_s4_6_I;
    sc_signal< uint32_t > src_0_s4_7_I;
    sc_signal< uint32_t > src_0_s4_8_I;
    sc_signal< uint32_t > src_0_s4_9_I;
    sc_signal< uint32_t > src_0_s4_10_I;
    sc_signal< uint32_t > src_0_s4_11_I;
    sc_signal< uint32_t > src_0_s4_12_I;
    sc_signal< uint32_t > src_0_s4_13_I;
    sc_signal< uint32_t > src_0_s4_14_I;
    sc_signal< uint32_t > src_0_s4_15_I;
    sc_signal< uint32_t > src_0_s4_16_I;
    sc_signal< uint32_t > src_0_s4_17_I;
    sc_signal< uint32_t > src_0_s4_18_I;
    sc_signal< uint32_t > src_0_s4_19_I;
    sc_signal< uint32_t > src_0_s4_20_I;
    sc_signal< uint32_t > src_0_s4_21_I;
    sc_signal< uint32_t > src_0_s4_22_I;
    sc_signal< uint32_t > src_0_s4_23_I;
    sc_signal< uint32_t > src_0_s4_24_I;
    sc_signal< uint32_t > src_0_s4_25_I;
    sc_signal< uint32_t > src_0_s4_26_I;
    sc_signal< uint32_t > src_0_s4_27_I;
    sc_signal< uint32_t > src_0_s4_28_I;
    sc_signal< uint32_t > src_0_s4_29_I;
    sc_signal< uint32_t > src_0_s4_30_I;
    sc_signal< uint32_t > src_0_s4_31_I;
    sc_signal< uint32_t > src_0_s5_0_I;
    sc_signal< uint32_t > src_0_s5_1_I;
    sc_signal< uint32_t > src_0_s5_2_I;
    sc_signal< uint32_t > src_0_s5_3_I;
    sc_signal< uint32_t > src_0_s5_4_I;
    sc_signal< uint32_t > src_0_s5_5_I;
    sc_signal< uint32_t > src_0_s5_6_I;
    sc_signal< uint32_t > src_0_s5_7_I;
    sc_signal< uint32_t > src_0_s5_8_I;
    sc_signal< uint32_t > src_0_s5_9_I;
    sc_signal< uint32_t > src_0_s5_10_I;
    sc_signal< uint32_t > src_0_s5_11_I;
    sc_signal< uint32_t > src_0_s5_12_I;
    sc_signal< uint32_t > src_0_s5_13_I;
    sc_signal< uint32_t > src_0_s5_14_I;
    sc_signal< uint32_t > src_0_s5_15_I;
    sc_signal< uint32_t > src_0_s5_16_I;
    sc_signal< uint32_t > src_0_s5_17_I;
    sc_signal< uint32_t > src_0_s5_18_I;
    sc_signal< uint32_t > src_0_s5_19_I;
    sc_signal< uint32_t > src_0_s5_20_I;
    sc_signal< uint32_t > src_0_s5_21_I;
    sc_signal< uint32_t > src_0_s5_22_I;
    sc_signal< uint32_t > src_0_s5_23_I;
    sc_signal< uint32_t > src_0_s5_24_I;
    sc_signal< uint32_t > src_0_s5_25_I;
    sc_signal< uint32_t > src_0_s5_26_I;
    sc_signal< uint32_t > src_0_s5_27_I;
    sc_signal< uint32_t > src_0_s5_28_I;
    sc_signal< uint32_t > src_0_s5_29_I;
    sc_signal< uint32_t > src_0_s5_30_I;
    sc_signal< uint32_t > src_0_s5_31_I;
    sc_signal< uint32_t > src_0_s6_0_I;
    sc_signal< uint32_t > src_0_s6_1_I;
    sc_signal< uint32_t > src_0_s6_2_I;
    sc_signal< uint32_t > src_0_s6_3_I;
    sc_signal< uint32_t > src_0_s6_4_I;
    sc_signal< uint32_t > src_0_s6_5_I;
    sc_signal< uint32_t > src_0_s6_6_I;
    sc_signal< uint32_t > src_0_s6_7_I;
    sc_signal< uint32_t > src_0_s6_8_I;
    sc_signal< uint32_t > src_0_s6_9_I;
    sc_signal< uint32_t > src_0_s6_10_I;
    sc_signal< uint32_t > src_0_s6_11_I;
    sc_signal< uint32_t > src_0_s6_12_I;
    sc_signal< uint32_t > src_0_s6_13_I;
    sc_signal< uint32_t > src_0_s6_14_I;
    sc_signal< uint32_t > src_0_s6_15_I;
    sc_signal< uint32_t > src_0_s6_16_I;
    sc_signal< uint32_t > src_0_s6_17_I;
    sc_signal< uint32_t > src_0_s6_18_I;
    sc_signal< uint32_t > src_0_s6_19_I;
    sc_signal< uint32_t > src_0_s6_20_I;
    sc_signal< uint32_t > src_0_s6_21_I;
    sc_signal< uint32_t > src_0_s6_22_I;
    sc_signal< uint32_t > src_0_s6_23_I;
    sc_signal< uint32_t > src_0_s6_24_I;
    sc_signal< uint32_t > src_0_s6_25_I;
    sc_signal< uint32_t > src_0_s6_26_I;
    sc_signal< uint32_t > src_0_s6_27_I;
    sc_signal< uint32_t > src_0_s6_28_I;
    sc_signal< uint32_t > src_0_s6_29_I;
    sc_signal< uint32_t > src_0_s6_30_I;
    sc_signal< uint32_t > src_0_s6_31_I;
    sc_signal< uint32_t > src_1_0_I;
    sc_signal< uint32_t > src_1_1_I;
    sc_signal< uint32_t > src_1_2_I;
    sc_signal< uint32_t > src_1_3_I;
    sc_signal< uint32_t > src_1_4_I;
    sc_signal< uint32_t > src_1_5_I;
    sc_signal< uint32_t > src_1_6_I;
    sc_signal< uint32_t > src_1_7_I;
    sc_signal< uint32_t > src_1_8_I;
    sc_signal< uint32_t > src_1_9_I;
    sc_signal< uint32_t > src_1_10_I;
    sc_signal< uint32_t > src_1_11_I;
    sc_signal< uint32_t > src_1_12_I;
    sc_signal< uint32_t > src_1_13_I;
    sc_signal< uint32_t > src_1_14_I;
    sc_signal< uint32_t > src_1_15_I;
    sc_signal< uint32_t > src_1_16_I;
    sc_signal< uint32_t > src_1_17_I;
    sc_signal< uint32_t > src_1_18_I;
    sc_signal< uint32_t > src_1_19_I;
    sc_signal< uint32_t > src_1_20_I;
    sc_signal< uint32_t > src_1_21_I;
    sc_signal< uint32_t > src_1_22_I;
    sc_signal< uint32_t > src_1_23_I;
    sc_signal< uint32_t > src_1_24_I;
    sc_signal< uint32_t > src_1_25_I;
    sc_signal< uint32_t > src_1_26_I;
    sc_signal< uint32_t > src_1_27_I;
    sc_signal< uint32_t > src_1_28_I;
    sc_signal< uint32_t > src_1_29_I;
    sc_signal< uint32_t > src_1_30_I;
    sc_signal< uint32_t > src_1_31_I;
    sc_signal< uint32_t > pe_data_0_O;
    sc_signal< uint32_t > pe_data_1_O;
    sc_signal< uint32_t > pe_data_2_O;
    sc_signal< uint32_t > pe_data_3_O;
    sc_signal< uint32_t > pe_data_4_O;
    sc_signal< uint32_t > pe_data_5_O;
    sc_signal< uint32_t > pe_data_6_O;
    sc_signal< uint32_t > pe_data_7_O;
    sc_signal< uint32_t > pe_data_8_O;
    sc_signal< uint32_t > pe_data_9_O;
    sc_signal< uint32_t > pe_data_10_O;
    sc_signal< uint32_t > pe_data_11_O;
    sc_signal< uint32_t > pe_data_12_O;
    sc_signal< uint32_t > pe_data_13_O;
    sc_signal< uint32_t > pe_data_14_O;
    sc_signal< uint32_t > pe_data_15_O;
    sc_signal< uint32_t > pe_data_16_O;
    sc_signal< uint32_t > pe_data_17_O;
    sc_signal< uint32_t > pe_data_18_O;
    sc_signal< uint32_t > pe_data_19_O;
    sc_signal< uint32_t > pe_data_20_O;
    sc_signal< uint32_t > pe_data_21_O;
    sc_signal< uint32_t > pe_data_22_O;
    sc_signal< uint32_t > pe_data_23_O;
    sc_signal< uint32_t > pe_data_24_O;
    sc_signal< uint32_t > pe_data_25_O;
    sc_signal< uint32_t > pe_data_26_O;
    sc_signal< uint32_t > pe_data_27_O;
    sc_signal< uint32_t > pe_data_28_O;
    sc_signal< uint32_t > pe_data_29_O;
    sc_signal< uint32_t > pe_data_30_O;
    sc_signal< uint32_t > pe_data_31_O;


    // The following threads are used to do the type conversion.
    inline void thread_systolic_en_I() {
        systolic_en_I = (sc_uint<8>)systolic_en.read();
    };
    inline void thread_systolic_depth_I() {
        systolic_depth_I = (sc_uint<8>)systolic_depth.read();
    };
    inline void thread_mac_shift_len_I() {
        mac_shift_len_I = (sc_uint<8>)mac_shift_len.read();
    };
    inline void thread_src_0_s0_0_I() {
        src_0_s0_0_I = (sc_uint<10>)src_0_s0_0.read();
    };
    inline void thread_src_0_s0_1_I() {
        src_0_s0_1_I = (sc_uint<10>)src_0_s0_1.read();
    };
    inline void thread_src_0_s0_2_I() {
        src_0_s0_2_I = (sc_uint<10>)src_0_s0_2.read();
    };
    inline void thread_src_0_s0_3_I() {
        src_0_s0_3_I = (sc_uint<10>)src_0_s0_3.read();
    };
    inline void thread_src_0_s0_4_I() {
        src_0_s0_4_I = (sc_uint<10>)src_0_s0_4.read();
    };
    inline void thread_src_0_s0_5_I() {
        src_0_s0_5_I = (sc_uint<10>)src_0_s0_5.read();
    };
    inline void thread_src_0_s0_6_I() {
        src_0_s0_6_I = (sc_uint<10>)src_0_s0_6.read();
    };
    inline void thread_src_0_s0_7_I() {
        src_0_s0_7_I = (sc_uint<10>)src_0_s0_7.read();
    };
    inline void thread_src_0_s0_8_I() {
        src_0_s0_8_I = (sc_uint<10>)src_0_s0_8.read();
    };
    inline void thread_src_0_s0_9_I() {
        src_0_s0_9_I = (sc_uint<10>)src_0_s0_9.read();
    };
    inline void thread_src_0_s0_10_I() {
        src_0_s0_10_I = (sc_uint<10>)src_0_s0_10.read();
    };
    inline void thread_src_0_s0_11_I() {
        src_0_s0_11_I = (sc_uint<10>)src_0_s0_11.read();
    };
    inline void thread_src_0_s0_12_I() {
        src_0_s0_12_I = (sc_uint<10>)src_0_s0_12.read();
    };
    inline void thread_src_0_s0_13_I() {
        src_0_s0_13_I = (sc_uint<10>)src_0_s0_13.read();
    };
    inline void thread_src_0_s0_14_I() {
        src_0_s0_14_I = (sc_uint<10>)src_0_s0_14.read();
    };
    inline void thread_src_0_s0_15_I() {
        src_0_s0_15_I = (sc_uint<10>)src_0_s0_15.read();
    };
    inline void thread_src_0_s0_16_I() {
        src_0_s0_16_I = (sc_uint<10>)src_0_s0_16.read();
    };
    inline void thread_src_0_s0_17_I() {
        src_0_s0_17_I = (sc_uint<10>)src_0_s0_17.read();
    };
    inline void thread_src_0_s0_18_I() {
        src_0_s0_18_I = (sc_uint<10>)src_0_s0_18.read();
    };
    inline void thread_src_0_s0_19_I() {
        src_0_s0_19_I = (sc_uint<10>)src_0_s0_19.read();
    };
    inline void thread_src_0_s0_20_I() {
        src_0_s0_20_I = (sc_uint<10>)src_0_s0_20.read();
    };
    inline void thread_src_0_s0_21_I() {
        src_0_s0_21_I = (sc_uint<10>)src_0_s0_21.read();
    };
    inline void thread_src_0_s0_22_I() {
        src_0_s0_22_I = (sc_uint<10>)src_0_s0_22.read();
    };
    inline void thread_src_0_s0_23_I() {
        src_0_s0_23_I = (sc_uint<10>)src_0_s0_23.read();
    };
    inline void thread_src_0_s0_24_I() {
        src_0_s0_24_I = (sc_uint<10>)src_0_s0_24.read();
    };
    inline void thread_src_0_s0_25_I() {
        src_0_s0_25_I = (sc_uint<10>)src_0_s0_25.read();
    };
    inline void thread_src_0_s0_26_I() {
        src_0_s0_26_I = (sc_uint<10>)src_0_s0_26.read();
    };
    inline void thread_src_0_s0_27_I() {
        src_0_s0_27_I = (sc_uint<10>)src_0_s0_27.read();
    };
    inline void thread_src_0_s0_28_I() {
        src_0_s0_28_I = (sc_uint<10>)src_0_s0_28.read();
    };
    inline void thread_src_0_s0_29_I() {
        src_0_s0_29_I = (sc_uint<10>)src_0_s0_29.read();
    };
    inline void thread_src_0_s0_30_I() {
        src_0_s0_30_I = (sc_uint<10>)src_0_s0_30.read();
    };
    inline void thread_src_0_s0_31_I() {
        src_0_s0_31_I = (sc_uint<10>)src_0_s0_31.read();
    };
    inline void thread_src_0_s1_0_I() {
        src_0_s1_0_I = (sc_uint<10>)src_0_s1_0.read();
    };
    inline void thread_src_0_s1_1_I() {
        src_0_s1_1_I = (sc_uint<10>)src_0_s1_1.read();
    };
    inline void thread_src_0_s1_2_I() {
        src_0_s1_2_I = (sc_uint<10>)src_0_s1_2.read();
    };
    inline void thread_src_0_s1_3_I() {
        src_0_s1_3_I = (sc_uint<10>)src_0_s1_3.read();
    };
    inline void thread_src_0_s1_4_I() {
        src_0_s1_4_I = (sc_uint<10>)src_0_s1_4.read();
    };
    inline void thread_src_0_s1_5_I() {
        src_0_s1_5_I = (sc_uint<10>)src_0_s1_5.read();
    };
    inline void thread_src_0_s1_6_I() {
        src_0_s1_6_I = (sc_uint<10>)src_0_s1_6.read();
    };
    inline void thread_src_0_s1_7_I() {
        src_0_s1_7_I = (sc_uint<10>)src_0_s1_7.read();
    };
    inline void thread_src_0_s1_8_I() {
        src_0_s1_8_I = (sc_uint<10>)src_0_s1_8.read();
    };
    inline void thread_src_0_s1_9_I() {
        src_0_s1_9_I = (sc_uint<10>)src_0_s1_9.read();
    };
    inline void thread_src_0_s1_10_I() {
        src_0_s1_10_I = (sc_uint<10>)src_0_s1_10.read();
    };
    inline void thread_src_0_s1_11_I() {
        src_0_s1_11_I = (sc_uint<10>)src_0_s1_11.read();
    };
    inline void thread_src_0_s1_12_I() {
        src_0_s1_12_I = (sc_uint<10>)src_0_s1_12.read();
    };
    inline void thread_src_0_s1_13_I() {
        src_0_s1_13_I = (sc_uint<10>)src_0_s1_13.read();
    };
    inline void thread_src_0_s1_14_I() {
        src_0_s1_14_I = (sc_uint<10>)src_0_s1_14.read();
    };
    inline void thread_src_0_s1_15_I() {
        src_0_s1_15_I = (sc_uint<10>)src_0_s1_15.read();
    };
    inline void thread_src_0_s1_16_I() {
        src_0_s1_16_I = (sc_uint<10>)src_0_s1_16.read();
    };
    inline void thread_src_0_s1_17_I() {
        src_0_s1_17_I = (sc_uint<10>)src_0_s1_17.read();
    };
    inline void thread_src_0_s1_18_I() {
        src_0_s1_18_I = (sc_uint<10>)src_0_s1_18.read();
    };
    inline void thread_src_0_s1_19_I() {
        src_0_s1_19_I = (sc_uint<10>)src_0_s1_19.read();
    };
    inline void thread_src_0_s1_20_I() {
        src_0_s1_20_I = (sc_uint<10>)src_0_s1_20.read();
    };
    inline void thread_src_0_s1_21_I() {
        src_0_s1_21_I = (sc_uint<10>)src_0_s1_21.read();
    };
    inline void thread_src_0_s1_22_I() {
        src_0_s1_22_I = (sc_uint<10>)src_0_s1_22.read();
    };
    inline void thread_src_0_s1_23_I() {
        src_0_s1_23_I = (sc_uint<10>)src_0_s1_23.read();
    };
    inline void thread_src_0_s1_24_I() {
        src_0_s1_24_I = (sc_uint<10>)src_0_s1_24.read();
    };
    inline void thread_src_0_s1_25_I() {
        src_0_s1_25_I = (sc_uint<10>)src_0_s1_25.read();
    };
    inline void thread_src_0_s1_26_I() {
        src_0_s1_26_I = (sc_uint<10>)src_0_s1_26.read();
    };
    inline void thread_src_0_s1_27_I() {
        src_0_s1_27_I = (sc_uint<10>)src_0_s1_27.read();
    };
    inline void thread_src_0_s1_28_I() {
        src_0_s1_28_I = (sc_uint<10>)src_0_s1_28.read();
    };
    inline void thread_src_0_s1_29_I() {
        src_0_s1_29_I = (sc_uint<10>)src_0_s1_29.read();
    };
    inline void thread_src_0_s1_30_I() {
        src_0_s1_30_I = (sc_uint<10>)src_0_s1_30.read();
    };
    inline void thread_src_0_s1_31_I() {
        src_0_s1_31_I = (sc_uint<10>)src_0_s1_31.read();
    };
    inline void thread_src_0_s2_0_I() {
        src_0_s2_0_I = (sc_uint<10>)src_0_s2_0.read();
    };
    inline void thread_src_0_s2_1_I() {
        src_0_s2_1_I = (sc_uint<10>)src_0_s2_1.read();
    };
    inline void thread_src_0_s2_2_I() {
        src_0_s2_2_I = (sc_uint<10>)src_0_s2_2.read();
    };
    inline void thread_src_0_s2_3_I() {
        src_0_s2_3_I = (sc_uint<10>)src_0_s2_3.read();
    };
    inline void thread_src_0_s2_4_I() {
        src_0_s2_4_I = (sc_uint<10>)src_0_s2_4.read();
    };
    inline void thread_src_0_s2_5_I() {
        src_0_s2_5_I = (sc_uint<10>)src_0_s2_5.read();
    };
    inline void thread_src_0_s2_6_I() {
        src_0_s2_6_I = (sc_uint<10>)src_0_s2_6.read();
    };
    inline void thread_src_0_s2_7_I() {
        src_0_s2_7_I = (sc_uint<10>)src_0_s2_7.read();
    };
    inline void thread_src_0_s2_8_I() {
        src_0_s2_8_I = (sc_uint<10>)src_0_s2_8.read();
    };
    inline void thread_src_0_s2_9_I() {
        src_0_s2_9_I = (sc_uint<10>)src_0_s2_9.read();
    };
    inline void thread_src_0_s2_10_I() {
        src_0_s2_10_I = (sc_uint<10>)src_0_s2_10.read();
    };
    inline void thread_src_0_s2_11_I() {
        src_0_s2_11_I = (sc_uint<10>)src_0_s2_11.read();
    };
    inline void thread_src_0_s2_12_I() {
        src_0_s2_12_I = (sc_uint<10>)src_0_s2_12.read();
    };
    inline void thread_src_0_s2_13_I() {
        src_0_s2_13_I = (sc_uint<10>)src_0_s2_13.read();
    };
    inline void thread_src_0_s2_14_I() {
        src_0_s2_14_I = (sc_uint<10>)src_0_s2_14.read();
    };
    inline void thread_src_0_s2_15_I() {
        src_0_s2_15_I = (sc_uint<10>)src_0_s2_15.read();
    };
    inline void thread_src_0_s2_16_I() {
        src_0_s2_16_I = (sc_uint<10>)src_0_s2_16.read();
    };
    inline void thread_src_0_s2_17_I() {
        src_0_s2_17_I = (sc_uint<10>)src_0_s2_17.read();
    };
    inline void thread_src_0_s2_18_I() {
        src_0_s2_18_I = (sc_uint<10>)src_0_s2_18.read();
    };
    inline void thread_src_0_s2_19_I() {
        src_0_s2_19_I = (sc_uint<10>)src_0_s2_19.read();
    };
    inline void thread_src_0_s2_20_I() {
        src_0_s2_20_I = (sc_uint<10>)src_0_s2_20.read();
    };
    inline void thread_src_0_s2_21_I() {
        src_0_s2_21_I = (sc_uint<10>)src_0_s2_21.read();
    };
    inline void thread_src_0_s2_22_I() {
        src_0_s2_22_I = (sc_uint<10>)src_0_s2_22.read();
    };
    inline void thread_src_0_s2_23_I() {
        src_0_s2_23_I = (sc_uint<10>)src_0_s2_23.read();
    };
    inline void thread_src_0_s2_24_I() {
        src_0_s2_24_I = (sc_uint<10>)src_0_s2_24.read();
    };
    inline void thread_src_0_s2_25_I() {
        src_0_s2_25_I = (sc_uint<10>)src_0_s2_25.read();
    };
    inline void thread_src_0_s2_26_I() {
        src_0_s2_26_I = (sc_uint<10>)src_0_s2_26.read();
    };
    inline void thread_src_0_s2_27_I() {
        src_0_s2_27_I = (sc_uint<10>)src_0_s2_27.read();
    };
    inline void thread_src_0_s2_28_I() {
        src_0_s2_28_I = (sc_uint<10>)src_0_s2_28.read();
    };
    inline void thread_src_0_s2_29_I() {
        src_0_s2_29_I = (sc_uint<10>)src_0_s2_29.read();
    };
    inline void thread_src_0_s2_30_I() {
        src_0_s2_30_I = (sc_uint<10>)src_0_s2_30.read();
    };
    inline void thread_src_0_s2_31_I() {
        src_0_s2_31_I = (sc_uint<10>)src_0_s2_31.read();
    };
    inline void thread_src_0_s3_0_I() {
        src_0_s3_0_I = (sc_uint<10>)src_0_s3_0.read();
    };
    inline void thread_src_0_s3_1_I() {
        src_0_s3_1_I = (sc_uint<10>)src_0_s3_1.read();
    };
    inline void thread_src_0_s3_2_I() {
        src_0_s3_2_I = (sc_uint<10>)src_0_s3_2.read();
    };
    inline void thread_src_0_s3_3_I() {
        src_0_s3_3_I = (sc_uint<10>)src_0_s3_3.read();
    };
    inline void thread_src_0_s3_4_I() {
        src_0_s3_4_I = (sc_uint<10>)src_0_s3_4.read();
    };
    inline void thread_src_0_s3_5_I() {
        src_0_s3_5_I = (sc_uint<10>)src_0_s3_5.read();
    };
    inline void thread_src_0_s3_6_I() {
        src_0_s3_6_I = (sc_uint<10>)src_0_s3_6.read();
    };
    inline void thread_src_0_s3_7_I() {
        src_0_s3_7_I = (sc_uint<10>)src_0_s3_7.read();
    };
    inline void thread_src_0_s3_8_I() {
        src_0_s3_8_I = (sc_uint<10>)src_0_s3_8.read();
    };
    inline void thread_src_0_s3_9_I() {
        src_0_s3_9_I = (sc_uint<10>)src_0_s3_9.read();
    };
    inline void thread_src_0_s3_10_I() {
        src_0_s3_10_I = (sc_uint<10>)src_0_s3_10.read();
    };
    inline void thread_src_0_s3_11_I() {
        src_0_s3_11_I = (sc_uint<10>)src_0_s3_11.read();
    };
    inline void thread_src_0_s3_12_I() {
        src_0_s3_12_I = (sc_uint<10>)src_0_s3_12.read();
    };
    inline void thread_src_0_s3_13_I() {
        src_0_s3_13_I = (sc_uint<10>)src_0_s3_13.read();
    };
    inline void thread_src_0_s3_14_I() {
        src_0_s3_14_I = (sc_uint<10>)src_0_s3_14.read();
    };
    inline void thread_src_0_s3_15_I() {
        src_0_s3_15_I = (sc_uint<10>)src_0_s3_15.read();
    };
    inline void thread_src_0_s3_16_I() {
        src_0_s3_16_I = (sc_uint<10>)src_0_s3_16.read();
    };
    inline void thread_src_0_s3_17_I() {
        src_0_s3_17_I = (sc_uint<10>)src_0_s3_17.read();
    };
    inline void thread_src_0_s3_18_I() {
        src_0_s3_18_I = (sc_uint<10>)src_0_s3_18.read();
    };
    inline void thread_src_0_s3_19_I() {
        src_0_s3_19_I = (sc_uint<10>)src_0_s3_19.read();
    };
    inline void thread_src_0_s3_20_I() {
        src_0_s3_20_I = (sc_uint<10>)src_0_s3_20.read();
    };
    inline void thread_src_0_s3_21_I() {
        src_0_s3_21_I = (sc_uint<10>)src_0_s3_21.read();
    };
    inline void thread_src_0_s3_22_I() {
        src_0_s3_22_I = (sc_uint<10>)src_0_s3_22.read();
    };
    inline void thread_src_0_s3_23_I() {
        src_0_s3_23_I = (sc_uint<10>)src_0_s3_23.read();
    };
    inline void thread_src_0_s3_24_I() {
        src_0_s3_24_I = (sc_uint<10>)src_0_s3_24.read();
    };
    inline void thread_src_0_s3_25_I() {
        src_0_s3_25_I = (sc_uint<10>)src_0_s3_25.read();
    };
    inline void thread_src_0_s3_26_I() {
        src_0_s3_26_I = (sc_uint<10>)src_0_s3_26.read();
    };
    inline void thread_src_0_s3_27_I() {
        src_0_s3_27_I = (sc_uint<10>)src_0_s3_27.read();
    };
    inline void thread_src_0_s3_28_I() {
        src_0_s3_28_I = (sc_uint<10>)src_0_s3_28.read();
    };
    inline void thread_src_0_s3_29_I() {
        src_0_s3_29_I = (sc_uint<10>)src_0_s3_29.read();
    };
    inline void thread_src_0_s3_30_I() {
        src_0_s3_30_I = (sc_uint<10>)src_0_s3_30.read();
    };
    inline void thread_src_0_s3_31_I() {
        src_0_s3_31_I = (sc_uint<10>)src_0_s3_31.read();
    };
    inline void thread_src_0_s4_0_I() {
        src_0_s4_0_I = (sc_uint<10>)src_0_s4_0.read();
    };
    inline void thread_src_0_s4_1_I() {
        src_0_s4_1_I = (sc_uint<10>)src_0_s4_1.read();
    };
    inline void thread_src_0_s4_2_I() {
        src_0_s4_2_I = (sc_uint<10>)src_0_s4_2.read();
    };
    inline void thread_src_0_s4_3_I() {
        src_0_s4_3_I = (sc_uint<10>)src_0_s4_3.read();
    };
    inline void thread_src_0_s4_4_I() {
        src_0_s4_4_I = (sc_uint<10>)src_0_s4_4.read();
    };
    inline void thread_src_0_s4_5_I() {
        src_0_s4_5_I = (sc_uint<10>)src_0_s4_5.read();
    };
    inline void thread_src_0_s4_6_I() {
        src_0_s4_6_I = (sc_uint<10>)src_0_s4_6.read();
    };
    inline void thread_src_0_s4_7_I() {
        src_0_s4_7_I = (sc_uint<10>)src_0_s4_7.read();
    };
    inline void thread_src_0_s4_8_I() {
        src_0_s4_8_I = (sc_uint<10>)src_0_s4_8.read();
    };
    inline void thread_src_0_s4_9_I() {
        src_0_s4_9_I = (sc_uint<10>)src_0_s4_9.read();
    };
    inline void thread_src_0_s4_10_I() {
        src_0_s4_10_I = (sc_uint<10>)src_0_s4_10.read();
    };
    inline void thread_src_0_s4_11_I() {
        src_0_s4_11_I = (sc_uint<10>)src_0_s4_11.read();
    };
    inline void thread_src_0_s4_12_I() {
        src_0_s4_12_I = (sc_uint<10>)src_0_s4_12.read();
    };
    inline void thread_src_0_s4_13_I() {
        src_0_s4_13_I = (sc_uint<10>)src_0_s4_13.read();
    };
    inline void thread_src_0_s4_14_I() {
        src_0_s4_14_I = (sc_uint<10>)src_0_s4_14.read();
    };
    inline void thread_src_0_s4_15_I() {
        src_0_s4_15_I = (sc_uint<10>)src_0_s4_15.read();
    };
    inline void thread_src_0_s4_16_I() {
        src_0_s4_16_I = (sc_uint<10>)src_0_s4_16.read();
    };
    inline void thread_src_0_s4_17_I() {
        src_0_s4_17_I = (sc_uint<10>)src_0_s4_17.read();
    };
    inline void thread_src_0_s4_18_I() {
        src_0_s4_18_I = (sc_uint<10>)src_0_s4_18.read();
    };
    inline void thread_src_0_s4_19_I() {
        src_0_s4_19_I = (sc_uint<10>)src_0_s4_19.read();
    };
    inline void thread_src_0_s4_20_I() {
        src_0_s4_20_I = (sc_uint<10>)src_0_s4_20.read();
    };
    inline void thread_src_0_s4_21_I() {
        src_0_s4_21_I = (sc_uint<10>)src_0_s4_21.read();
    };
    inline void thread_src_0_s4_22_I() {
        src_0_s4_22_I = (sc_uint<10>)src_0_s4_22.read();
    };
    inline void thread_src_0_s4_23_I() {
        src_0_s4_23_I = (sc_uint<10>)src_0_s4_23.read();
    };
    inline void thread_src_0_s4_24_I() {
        src_0_s4_24_I = (sc_uint<10>)src_0_s4_24.read();
    };
    inline void thread_src_0_s4_25_I() {
        src_0_s4_25_I = (sc_uint<10>)src_0_s4_25.read();
    };
    inline void thread_src_0_s4_26_I() {
        src_0_s4_26_I = (sc_uint<10>)src_0_s4_26.read();
    };
    inline void thread_src_0_s4_27_I() {
        src_0_s4_27_I = (sc_uint<10>)src_0_s4_27.read();
    };
    inline void thread_src_0_s4_28_I() {
        src_0_s4_28_I = (sc_uint<10>)src_0_s4_28.read();
    };
    inline void thread_src_0_s4_29_I() {
        src_0_s4_29_I = (sc_uint<10>)src_0_s4_29.read();
    };
    inline void thread_src_0_s4_30_I() {
        src_0_s4_30_I = (sc_uint<10>)src_0_s4_30.read();
    };
    inline void thread_src_0_s4_31_I() {
        src_0_s4_31_I = (sc_uint<10>)src_0_s4_31.read();
    };
    inline void thread_src_0_s5_0_I() {
        src_0_s5_0_I = (sc_uint<10>)src_0_s5_0.read();
    };
    inline void thread_src_0_s5_1_I() {
        src_0_s5_1_I = (sc_uint<10>)src_0_s5_1.read();
    };
    inline void thread_src_0_s5_2_I() {
        src_0_s5_2_I = (sc_uint<10>)src_0_s5_2.read();
    };
    inline void thread_src_0_s5_3_I() {
        src_0_s5_3_I = (sc_uint<10>)src_0_s5_3.read();
    };
    inline void thread_src_0_s5_4_I() {
        src_0_s5_4_I = (sc_uint<10>)src_0_s5_4.read();
    };
    inline void thread_src_0_s5_5_I() {
        src_0_s5_5_I = (sc_uint<10>)src_0_s5_5.read();
    };
    inline void thread_src_0_s5_6_I() {
        src_0_s5_6_I = (sc_uint<10>)src_0_s5_6.read();
    };
    inline void thread_src_0_s5_7_I() {
        src_0_s5_7_I = (sc_uint<10>)src_0_s5_7.read();
    };
    inline void thread_src_0_s5_8_I() {
        src_0_s5_8_I = (sc_uint<10>)src_0_s5_8.read();
    };
    inline void thread_src_0_s5_9_I() {
        src_0_s5_9_I = (sc_uint<10>)src_0_s5_9.read();
    };
    inline void thread_src_0_s5_10_I() {
        src_0_s5_10_I = (sc_uint<10>)src_0_s5_10.read();
    };
    inline void thread_src_0_s5_11_I() {
        src_0_s5_11_I = (sc_uint<10>)src_0_s5_11.read();
    };
    inline void thread_src_0_s5_12_I() {
        src_0_s5_12_I = (sc_uint<10>)src_0_s5_12.read();
    };
    inline void thread_src_0_s5_13_I() {
        src_0_s5_13_I = (sc_uint<10>)src_0_s5_13.read();
    };
    inline void thread_src_0_s5_14_I() {
        src_0_s5_14_I = (sc_uint<10>)src_0_s5_14.read();
    };
    inline void thread_src_0_s5_15_I() {
        src_0_s5_15_I = (sc_uint<10>)src_0_s5_15.read();
    };
    inline void thread_src_0_s5_16_I() {
        src_0_s5_16_I = (sc_uint<10>)src_0_s5_16.read();
    };
    inline void thread_src_0_s5_17_I() {
        src_0_s5_17_I = (sc_uint<10>)src_0_s5_17.read();
    };
    inline void thread_src_0_s5_18_I() {
        src_0_s5_18_I = (sc_uint<10>)src_0_s5_18.read();
    };
    inline void thread_src_0_s5_19_I() {
        src_0_s5_19_I = (sc_uint<10>)src_0_s5_19.read();
    };
    inline void thread_src_0_s5_20_I() {
        src_0_s5_20_I = (sc_uint<10>)src_0_s5_20.read();
    };
    inline void thread_src_0_s5_21_I() {
        src_0_s5_21_I = (sc_uint<10>)src_0_s5_21.read();
    };
    inline void thread_src_0_s5_22_I() {
        src_0_s5_22_I = (sc_uint<10>)src_0_s5_22.read();
    };
    inline void thread_src_0_s5_23_I() {
        src_0_s5_23_I = (sc_uint<10>)src_0_s5_23.read();
    };
    inline void thread_src_0_s5_24_I() {
        src_0_s5_24_I = (sc_uint<10>)src_0_s5_24.read();
    };
    inline void thread_src_0_s5_25_I() {
        src_0_s5_25_I = (sc_uint<10>)src_0_s5_25.read();
    };
    inline void thread_src_0_s5_26_I() {
        src_0_s5_26_I = (sc_uint<10>)src_0_s5_26.read();
    };
    inline void thread_src_0_s5_27_I() {
        src_0_s5_27_I = (sc_uint<10>)src_0_s5_27.read();
    };
    inline void thread_src_0_s5_28_I() {
        src_0_s5_28_I = (sc_uint<10>)src_0_s5_28.read();
    };
    inline void thread_src_0_s5_29_I() {
        src_0_s5_29_I = (sc_uint<10>)src_0_s5_29.read();
    };
    inline void thread_src_0_s5_30_I() {
        src_0_s5_30_I = (sc_uint<10>)src_0_s5_30.read();
    };
    inline void thread_src_0_s5_31_I() {
        src_0_s5_31_I = (sc_uint<10>)src_0_s5_31.read();
    };
    inline void thread_src_0_s6_0_I() {
        src_0_s6_0_I = (sc_uint<10>)src_0_s6_0.read();
    };
    inline void thread_src_0_s6_1_I() {
        src_0_s6_1_I = (sc_uint<10>)src_0_s6_1.read();
    };
    inline void thread_src_0_s6_2_I() {
        src_0_s6_2_I = (sc_uint<10>)src_0_s6_2.read();
    };
    inline void thread_src_0_s6_3_I() {
        src_0_s6_3_I = (sc_uint<10>)src_0_s6_3.read();
    };
    inline void thread_src_0_s6_4_I() {
        src_0_s6_4_I = (sc_uint<10>)src_0_s6_4.read();
    };
    inline void thread_src_0_s6_5_I() {
        src_0_s6_5_I = (sc_uint<10>)src_0_s6_5.read();
    };
    inline void thread_src_0_s6_6_I() {
        src_0_s6_6_I = (sc_uint<10>)src_0_s6_6.read();
    };
    inline void thread_src_0_s6_7_I() {
        src_0_s6_7_I = (sc_uint<10>)src_0_s6_7.read();
    };
    inline void thread_src_0_s6_8_I() {
        src_0_s6_8_I = (sc_uint<10>)src_0_s6_8.read();
    };
    inline void thread_src_0_s6_9_I() {
        src_0_s6_9_I = (sc_uint<10>)src_0_s6_9.read();
    };
    inline void thread_src_0_s6_10_I() {
        src_0_s6_10_I = (sc_uint<10>)src_0_s6_10.read();
    };
    inline void thread_src_0_s6_11_I() {
        src_0_s6_11_I = (sc_uint<10>)src_0_s6_11.read();
    };
    inline void thread_src_0_s6_12_I() {
        src_0_s6_12_I = (sc_uint<10>)src_0_s6_12.read();
    };
    inline void thread_src_0_s6_13_I() {
        src_0_s6_13_I = (sc_uint<10>)src_0_s6_13.read();
    };
    inline void thread_src_0_s6_14_I() {
        src_0_s6_14_I = (sc_uint<10>)src_0_s6_14.read();
    };
    inline void thread_src_0_s6_15_I() {
        src_0_s6_15_I = (sc_uint<10>)src_0_s6_15.read();
    };
    inline void thread_src_0_s6_16_I() {
        src_0_s6_16_I = (sc_uint<10>)src_0_s6_16.read();
    };
    inline void thread_src_0_s6_17_I() {
        src_0_s6_17_I = (sc_uint<10>)src_0_s6_17.read();
    };
    inline void thread_src_0_s6_18_I() {
        src_0_s6_18_I = (sc_uint<10>)src_0_s6_18.read();
    };
    inline void thread_src_0_s6_19_I() {
        src_0_s6_19_I = (sc_uint<10>)src_0_s6_19.read();
    };
    inline void thread_src_0_s6_20_I() {
        src_0_s6_20_I = (sc_uint<10>)src_0_s6_20.read();
    };
    inline void thread_src_0_s6_21_I() {
        src_0_s6_21_I = (sc_uint<10>)src_0_s6_21.read();
    };
    inline void thread_src_0_s6_22_I() {
        src_0_s6_22_I = (sc_uint<10>)src_0_s6_22.read();
    };
    inline void thread_src_0_s6_23_I() {
        src_0_s6_23_I = (sc_uint<10>)src_0_s6_23.read();
    };
    inline void thread_src_0_s6_24_I() {
        src_0_s6_24_I = (sc_uint<10>)src_0_s6_24.read();
    };
    inline void thread_src_0_s6_25_I() {
        src_0_s6_25_I = (sc_uint<10>)src_0_s6_25.read();
    };
    inline void thread_src_0_s6_26_I() {
        src_0_s6_26_I = (sc_uint<10>)src_0_s6_26.read();
    };
    inline void thread_src_0_s6_27_I() {
        src_0_s6_27_I = (sc_uint<10>)src_0_s6_27.read();
    };
    inline void thread_src_0_s6_28_I() {
        src_0_s6_28_I = (sc_uint<10>)src_0_s6_28.read();
    };
    inline void thread_src_0_s6_29_I() {
        src_0_s6_29_I = (sc_uint<10>)src_0_s6_29.read();
    };
    inline void thread_src_0_s6_30_I() {
        src_0_s6_30_I = (sc_uint<10>)src_0_s6_30.read();
    };
    inline void thread_src_0_s6_31_I() {
        src_0_s6_31_I = (sc_uint<10>)src_0_s6_31.read();
    };
    inline void thread_src_1_0_I() {
        src_1_0_I = (sc_uint<8>)src_1_0.read();
    };
    inline void thread_src_1_1_I() {
        src_1_1_I = (sc_uint<8>)src_1_1.read();
    };
    inline void thread_src_1_2_I() {
        src_1_2_I = (sc_uint<8>)src_1_2.read();
    };
    inline void thread_src_1_3_I() {
        src_1_3_I = (sc_uint<8>)src_1_3.read();
    };
    inline void thread_src_1_4_I() {
        src_1_4_I = (sc_uint<8>)src_1_4.read();
    };
    inline void thread_src_1_5_I() {
        src_1_5_I = (sc_uint<8>)src_1_5.read();
    };
    inline void thread_src_1_6_I() {
        src_1_6_I = (sc_uint<8>)src_1_6.read();
    };
    inline void thread_src_1_7_I() {
        src_1_7_I = (sc_uint<8>)src_1_7.read();
    };
    inline void thread_src_1_8_I() {
        src_1_8_I = (sc_uint<8>)src_1_8.read();
    };
    inline void thread_src_1_9_I() {
        src_1_9_I = (sc_uint<8>)src_1_9.read();
    };
    inline void thread_src_1_10_I() {
        src_1_10_I = (sc_uint<8>)src_1_10.read();
    };
    inline void thread_src_1_11_I() {
        src_1_11_I = (sc_uint<8>)src_1_11.read();
    };
    inline void thread_src_1_12_I() {
        src_1_12_I = (sc_uint<8>)src_1_12.read();
    };
    inline void thread_src_1_13_I() {
        src_1_13_I = (sc_uint<8>)src_1_13.read();
    };
    inline void thread_src_1_14_I() {
        src_1_14_I = (sc_uint<8>)src_1_14.read();
    };
    inline void thread_src_1_15_I() {
        src_1_15_I = (sc_uint<8>)src_1_15.read();
    };
    inline void thread_src_1_16_I() {
        src_1_16_I = (sc_uint<8>)src_1_16.read();
    };
    inline void thread_src_1_17_I() {
        src_1_17_I = (sc_uint<8>)src_1_17.read();
    };
    inline void thread_src_1_18_I() {
        src_1_18_I = (sc_uint<8>)src_1_18.read();
    };
    inline void thread_src_1_19_I() {
        src_1_19_I = (sc_uint<8>)src_1_19.read();
    };
    inline void thread_src_1_20_I() {
        src_1_20_I = (sc_uint<8>)src_1_20.read();
    };
    inline void thread_src_1_21_I() {
        src_1_21_I = (sc_uint<8>)src_1_21.read();
    };
    inline void thread_src_1_22_I() {
        src_1_22_I = (sc_uint<8>)src_1_22.read();
    };
    inline void thread_src_1_23_I() {
        src_1_23_I = (sc_uint<8>)src_1_23.read();
    };
    inline void thread_src_1_24_I() {
        src_1_24_I = (sc_uint<8>)src_1_24.read();
    };
    inline void thread_src_1_25_I() {
        src_1_25_I = (sc_uint<8>)src_1_25.read();
    };
    inline void thread_src_1_26_I() {
        src_1_26_I = (sc_uint<8>)src_1_26.read();
    };
    inline void thread_src_1_27_I() {
        src_1_27_I = (sc_uint<8>)src_1_27.read();
    };
    inline void thread_src_1_28_I() {
        src_1_28_I = (sc_uint<8>)src_1_28.read();
    };
    inline void thread_src_1_29_I() {
        src_1_29_I = (sc_uint<8>)src_1_29.read();
    };
    inline void thread_src_1_30_I() {
        src_1_30_I = (sc_uint<8>)src_1_30.read();
    };
    inline void thread_src_1_31_I() {
        src_1_31_I = (sc_uint<8>)src_1_31.read();
    };
    inline void thread_pe_data_0_O() {
        pe_data_0 = pe_data_0_O.read();
    };
    inline void thread_pe_data_1_O() {
        pe_data_1 = pe_data_1_O.read();
    };
    inline void thread_pe_data_2_O() {
        pe_data_2 = pe_data_2_O.read();
    };
    inline void thread_pe_data_3_O() {
        pe_data_3 = pe_data_3_O.read();
    };
    inline void thread_pe_data_4_O() {
        pe_data_4 = pe_data_4_O.read();
    };
    inline void thread_pe_data_5_O() {
        pe_data_5 = pe_data_5_O.read();
    };
    inline void thread_pe_data_6_O() {
        pe_data_6 = pe_data_6_O.read();
    };
    inline void thread_pe_data_7_O() {
        pe_data_7 = pe_data_7_O.read();
    };
    inline void thread_pe_data_8_O() {
        pe_data_8 = pe_data_8_O.read();
    };
    inline void thread_pe_data_9_O() {
        pe_data_9 = pe_data_9_O.read();
    };
    inline void thread_pe_data_10_O() {
        pe_data_10 = pe_data_10_O.read();
    };
    inline void thread_pe_data_11_O() {
        pe_data_11 = pe_data_11_O.read();
    };
    inline void thread_pe_data_12_O() {
        pe_data_12 = pe_data_12_O.read();
    };
    inline void thread_pe_data_13_O() {
        pe_data_13 = pe_data_13_O.read();
    };
    inline void thread_pe_data_14_O() {
        pe_data_14 = pe_data_14_O.read();
    };
    inline void thread_pe_data_15_O() {
        pe_data_15 = pe_data_15_O.read();
    };
    inline void thread_pe_data_16_O() {
        pe_data_16 = pe_data_16_O.read();
    };
    inline void thread_pe_data_17_O() {
        pe_data_17 = pe_data_17_O.read();
    };
    inline void thread_pe_data_18_O() {
        pe_data_18 = pe_data_18_O.read();
    };
    inline void thread_pe_data_19_O() {
        pe_data_19 = pe_data_19_O.read();
    };
    inline void thread_pe_data_20_O() {
        pe_data_20 = pe_data_20_O.read();
    };
    inline void thread_pe_data_21_O() {
        pe_data_21 = pe_data_21_O.read();
    };
    inline void thread_pe_data_22_O() {
        pe_data_22 = pe_data_22_O.read();
    };
    inline void thread_pe_data_23_O() {
        pe_data_23 = pe_data_23_O.read();
    };
    inline void thread_pe_data_24_O() {
        pe_data_24 = pe_data_24_O.read();
    };
    inline void thread_pe_data_25_O() {
        pe_data_25 = pe_data_25_O.read();
    };
    inline void thread_pe_data_26_O() {
        pe_data_26 = pe_data_26_O.read();
    };
    inline void thread_pe_data_27_O() {
        pe_data_27 = pe_data_27_O.read();
    };
    inline void thread_pe_data_28_O() {
        pe_data_28 = pe_data_28_O.read();
    };
    inline void thread_pe_data_29_O() {
        pe_data_29 = pe_data_29_O.read();
    };
    inline void thread_pe_data_30_O() {
        pe_data_30 = pe_data_30_O.read();
    };
    inline void thread_pe_data_31_O() {
        pe_data_31 = pe_data_31_O.read();
    };


    SC_HAS_PROCESS(pe_array_cycsimV);

public:

    pe_array_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" pe_array") ) )
        : pe_array_cycsim(in_name)
    {
        // instantiate the verilated module
        pe_array_cyc0 = new Vpe_array_rtl( "Vpe_array" );
        // generate port connections
        pe_array_cyc0->clk(clk);
        pe_array_cyc0->rstn(rstn);
        pe_array_cyc0->enable(enable);
        pe_array_cyc0->src_vld(src_vld);
        pe_array_cyc0->clear(clear);
        pe_array_cyc0->init(init);
        pe_array_cyc0->systolic_en(systolic_en_I);
        pe_array_cyc0->systolic_depth(systolic_depth_I);
        pe_array_cyc0->mac_shift_len(mac_shift_len_I);
        pe_array_cyc0->src_0_s0_0(src_0_s0_0_I);
        pe_array_cyc0->src_0_s0_1(src_0_s0_1_I);
        pe_array_cyc0->src_0_s0_2(src_0_s0_2_I);
        pe_array_cyc0->src_0_s0_3(src_0_s0_3_I);
        pe_array_cyc0->src_0_s0_4(src_0_s0_4_I);
        pe_array_cyc0->src_0_s0_5(src_0_s0_5_I);
        pe_array_cyc0->src_0_s0_6(src_0_s0_6_I);
        pe_array_cyc0->src_0_s0_7(src_0_s0_7_I);
        pe_array_cyc0->src_0_s0_8(src_0_s0_8_I);
        pe_array_cyc0->src_0_s0_9(src_0_s0_9_I);
        pe_array_cyc0->src_0_s0_10(src_0_s0_10_I);
        pe_array_cyc0->src_0_s0_11(src_0_s0_11_I);
        pe_array_cyc0->src_0_s0_12(src_0_s0_12_I);
        pe_array_cyc0->src_0_s0_13(src_0_s0_13_I);
        pe_array_cyc0->src_0_s0_14(src_0_s0_14_I);
        pe_array_cyc0->src_0_s0_15(src_0_s0_15_I);
        pe_array_cyc0->src_0_s0_16(src_0_s0_16_I);
        pe_array_cyc0->src_0_s0_17(src_0_s0_17_I);
        pe_array_cyc0->src_0_s0_18(src_0_s0_18_I);
        pe_array_cyc0->src_0_s0_19(src_0_s0_19_I);
        pe_array_cyc0->src_0_s0_20(src_0_s0_20_I);
        pe_array_cyc0->src_0_s0_21(src_0_s0_21_I);
        pe_array_cyc0->src_0_s0_22(src_0_s0_22_I);
        pe_array_cyc0->src_0_s0_23(src_0_s0_23_I);
        pe_array_cyc0->src_0_s0_24(src_0_s0_24_I);
        pe_array_cyc0->src_0_s0_25(src_0_s0_25_I);
        pe_array_cyc0->src_0_s0_26(src_0_s0_26_I);
        pe_array_cyc0->src_0_s0_27(src_0_s0_27_I);
        pe_array_cyc0->src_0_s0_28(src_0_s0_28_I);
        pe_array_cyc0->src_0_s0_29(src_0_s0_29_I);
        pe_array_cyc0->src_0_s0_30(src_0_s0_30_I);
        pe_array_cyc0->src_0_s0_31(src_0_s0_31_I);
        pe_array_cyc0->src_0_s1_0(src_0_s1_0_I);
        pe_array_cyc0->src_0_s1_1(src_0_s1_1_I);
        pe_array_cyc0->src_0_s1_2(src_0_s1_2_I);
        pe_array_cyc0->src_0_s1_3(src_0_s1_3_I);
        pe_array_cyc0->src_0_s1_4(src_0_s1_4_I);
        pe_array_cyc0->src_0_s1_5(src_0_s1_5_I);
        pe_array_cyc0->src_0_s1_6(src_0_s1_6_I);
        pe_array_cyc0->src_0_s1_7(src_0_s1_7_I);
        pe_array_cyc0->src_0_s1_8(src_0_s1_8_I);
        pe_array_cyc0->src_0_s1_9(src_0_s1_9_I);
        pe_array_cyc0->src_0_s1_10(src_0_s1_10_I);
        pe_array_cyc0->src_0_s1_11(src_0_s1_11_I);
        pe_array_cyc0->src_0_s1_12(src_0_s1_12_I);
        pe_array_cyc0->src_0_s1_13(src_0_s1_13_I);
        pe_array_cyc0->src_0_s1_14(src_0_s1_14_I);
        pe_array_cyc0->src_0_s1_15(src_0_s1_15_I);
        pe_array_cyc0->src_0_s1_16(src_0_s1_16_I);
        pe_array_cyc0->src_0_s1_17(src_0_s1_17_I);
        pe_array_cyc0->src_0_s1_18(src_0_s1_18_I);
        pe_array_cyc0->src_0_s1_19(src_0_s1_19_I);
        pe_array_cyc0->src_0_s1_20(src_0_s1_20_I);
        pe_array_cyc0->src_0_s1_21(src_0_s1_21_I);
        pe_array_cyc0->src_0_s1_22(src_0_s1_22_I);
        pe_array_cyc0->src_0_s1_23(src_0_s1_23_I);
        pe_array_cyc0->src_0_s1_24(src_0_s1_24_I);
        pe_array_cyc0->src_0_s1_25(src_0_s1_25_I);
        pe_array_cyc0->src_0_s1_26(src_0_s1_26_I);
        pe_array_cyc0->src_0_s1_27(src_0_s1_27_I);
        pe_array_cyc0->src_0_s1_28(src_0_s1_28_I);
        pe_array_cyc0->src_0_s1_29(src_0_s1_29_I);
        pe_array_cyc0->src_0_s1_30(src_0_s1_30_I);
        pe_array_cyc0->src_0_s1_31(src_0_s1_31_I);
        pe_array_cyc0->src_0_s2_0(src_0_s2_0_I);
        pe_array_cyc0->src_0_s2_1(src_0_s2_1_I);
        pe_array_cyc0->src_0_s2_2(src_0_s2_2_I);
        pe_array_cyc0->src_0_s2_3(src_0_s2_3_I);
        pe_array_cyc0->src_0_s2_4(src_0_s2_4_I);
        pe_array_cyc0->src_0_s2_5(src_0_s2_5_I);
        pe_array_cyc0->src_0_s2_6(src_0_s2_6_I);
        pe_array_cyc0->src_0_s2_7(src_0_s2_7_I);
        pe_array_cyc0->src_0_s2_8(src_0_s2_8_I);
        pe_array_cyc0->src_0_s2_9(src_0_s2_9_I);
        pe_array_cyc0->src_0_s2_10(src_0_s2_10_I);
        pe_array_cyc0->src_0_s2_11(src_0_s2_11_I);
        pe_array_cyc0->src_0_s2_12(src_0_s2_12_I);
        pe_array_cyc0->src_0_s2_13(src_0_s2_13_I);
        pe_array_cyc0->src_0_s2_14(src_0_s2_14_I);
        pe_array_cyc0->src_0_s2_15(src_0_s2_15_I);
        pe_array_cyc0->src_0_s2_16(src_0_s2_16_I);
        pe_array_cyc0->src_0_s2_17(src_0_s2_17_I);
        pe_array_cyc0->src_0_s2_18(src_0_s2_18_I);
        pe_array_cyc0->src_0_s2_19(src_0_s2_19_I);
        pe_array_cyc0->src_0_s2_20(src_0_s2_20_I);
        pe_array_cyc0->src_0_s2_21(src_0_s2_21_I);
        pe_array_cyc0->src_0_s2_22(src_0_s2_22_I);
        pe_array_cyc0->src_0_s2_23(src_0_s2_23_I);
        pe_array_cyc0->src_0_s2_24(src_0_s2_24_I);
        pe_array_cyc0->src_0_s2_25(src_0_s2_25_I);
        pe_array_cyc0->src_0_s2_26(src_0_s2_26_I);
        pe_array_cyc0->src_0_s2_27(src_0_s2_27_I);
        pe_array_cyc0->src_0_s2_28(src_0_s2_28_I);
        pe_array_cyc0->src_0_s2_29(src_0_s2_29_I);
        pe_array_cyc0->src_0_s2_30(src_0_s2_30_I);
        pe_array_cyc0->src_0_s2_31(src_0_s2_31_I);
        pe_array_cyc0->src_0_s3_0(src_0_s3_0_I);
        pe_array_cyc0->src_0_s3_1(src_0_s3_1_I);
        pe_array_cyc0->src_0_s3_2(src_0_s3_2_I);
        pe_array_cyc0->src_0_s3_3(src_0_s3_3_I);
        pe_array_cyc0->src_0_s3_4(src_0_s3_4_I);
        pe_array_cyc0->src_0_s3_5(src_0_s3_5_I);
        pe_array_cyc0->src_0_s3_6(src_0_s3_6_I);
        pe_array_cyc0->src_0_s3_7(src_0_s3_7_I);
        pe_array_cyc0->src_0_s3_8(src_0_s3_8_I);
        pe_array_cyc0->src_0_s3_9(src_0_s3_9_I);
        pe_array_cyc0->src_0_s3_10(src_0_s3_10_I);
        pe_array_cyc0->src_0_s3_11(src_0_s3_11_I);
        pe_array_cyc0->src_0_s3_12(src_0_s3_12_I);
        pe_array_cyc0->src_0_s3_13(src_0_s3_13_I);
        pe_array_cyc0->src_0_s3_14(src_0_s3_14_I);
        pe_array_cyc0->src_0_s3_15(src_0_s3_15_I);
        pe_array_cyc0->src_0_s3_16(src_0_s3_16_I);
        pe_array_cyc0->src_0_s3_17(src_0_s3_17_I);
        pe_array_cyc0->src_0_s3_18(src_0_s3_18_I);
        pe_array_cyc0->src_0_s3_19(src_0_s3_19_I);
        pe_array_cyc0->src_0_s3_20(src_0_s3_20_I);
        pe_array_cyc0->src_0_s3_21(src_0_s3_21_I);
        pe_array_cyc0->src_0_s3_22(src_0_s3_22_I);
        pe_array_cyc0->src_0_s3_23(src_0_s3_23_I);
        pe_array_cyc0->src_0_s3_24(src_0_s3_24_I);
        pe_array_cyc0->src_0_s3_25(src_0_s3_25_I);
        pe_array_cyc0->src_0_s3_26(src_0_s3_26_I);
        pe_array_cyc0->src_0_s3_27(src_0_s3_27_I);
        pe_array_cyc0->src_0_s3_28(src_0_s3_28_I);
        pe_array_cyc0->src_0_s3_29(src_0_s3_29_I);
        pe_array_cyc0->src_0_s3_30(src_0_s3_30_I);
        pe_array_cyc0->src_0_s3_31(src_0_s3_31_I);
        pe_array_cyc0->src_0_s4_0(src_0_s4_0_I);
        pe_array_cyc0->src_0_s4_1(src_0_s4_1_I);
        pe_array_cyc0->src_0_s4_2(src_0_s4_2_I);
        pe_array_cyc0->src_0_s4_3(src_0_s4_3_I);
        pe_array_cyc0->src_0_s4_4(src_0_s4_4_I);
        pe_array_cyc0->src_0_s4_5(src_0_s4_5_I);
        pe_array_cyc0->src_0_s4_6(src_0_s4_6_I);
        pe_array_cyc0->src_0_s4_7(src_0_s4_7_I);
        pe_array_cyc0->src_0_s4_8(src_0_s4_8_I);
        pe_array_cyc0->src_0_s4_9(src_0_s4_9_I);
        pe_array_cyc0->src_0_s4_10(src_0_s4_10_I);
        pe_array_cyc0->src_0_s4_11(src_0_s4_11_I);
        pe_array_cyc0->src_0_s4_12(src_0_s4_12_I);
        pe_array_cyc0->src_0_s4_13(src_0_s4_13_I);
        pe_array_cyc0->src_0_s4_14(src_0_s4_14_I);
        pe_array_cyc0->src_0_s4_15(src_0_s4_15_I);
        pe_array_cyc0->src_0_s4_16(src_0_s4_16_I);
        pe_array_cyc0->src_0_s4_17(src_0_s4_17_I);
        pe_array_cyc0->src_0_s4_18(src_0_s4_18_I);
        pe_array_cyc0->src_0_s4_19(src_0_s4_19_I);
        pe_array_cyc0->src_0_s4_20(src_0_s4_20_I);
        pe_array_cyc0->src_0_s4_21(src_0_s4_21_I);
        pe_array_cyc0->src_0_s4_22(src_0_s4_22_I);
        pe_array_cyc0->src_0_s4_23(src_0_s4_23_I);
        pe_array_cyc0->src_0_s4_24(src_0_s4_24_I);
        pe_array_cyc0->src_0_s4_25(src_0_s4_25_I);
        pe_array_cyc0->src_0_s4_26(src_0_s4_26_I);
        pe_array_cyc0->src_0_s4_27(src_0_s4_27_I);
        pe_array_cyc0->src_0_s4_28(src_0_s4_28_I);
        pe_array_cyc0->src_0_s4_29(src_0_s4_29_I);
        pe_array_cyc0->src_0_s4_30(src_0_s4_30_I);
        pe_array_cyc0->src_0_s4_31(src_0_s4_31_I);
        pe_array_cyc0->src_0_s5_0(src_0_s5_0_I);
        pe_array_cyc0->src_0_s5_1(src_0_s5_1_I);
        pe_array_cyc0->src_0_s5_2(src_0_s5_2_I);
        pe_array_cyc0->src_0_s5_3(src_0_s5_3_I);
        pe_array_cyc0->src_0_s5_4(src_0_s5_4_I);
        pe_array_cyc0->src_0_s5_5(src_0_s5_5_I);
        pe_array_cyc0->src_0_s5_6(src_0_s5_6_I);
        pe_array_cyc0->src_0_s5_7(src_0_s5_7_I);
        pe_array_cyc0->src_0_s5_8(src_0_s5_8_I);
        pe_array_cyc0->src_0_s5_9(src_0_s5_9_I);
        pe_array_cyc0->src_0_s5_10(src_0_s5_10_I);
        pe_array_cyc0->src_0_s5_11(src_0_s5_11_I);
        pe_array_cyc0->src_0_s5_12(src_0_s5_12_I);
        pe_array_cyc0->src_0_s5_13(src_0_s5_13_I);
        pe_array_cyc0->src_0_s5_14(src_0_s5_14_I);
        pe_array_cyc0->src_0_s5_15(src_0_s5_15_I);
        pe_array_cyc0->src_0_s5_16(src_0_s5_16_I);
        pe_array_cyc0->src_0_s5_17(src_0_s5_17_I);
        pe_array_cyc0->src_0_s5_18(src_0_s5_18_I);
        pe_array_cyc0->src_0_s5_19(src_0_s5_19_I);
        pe_array_cyc0->src_0_s5_20(src_0_s5_20_I);
        pe_array_cyc0->src_0_s5_21(src_0_s5_21_I);
        pe_array_cyc0->src_0_s5_22(src_0_s5_22_I);
        pe_array_cyc0->src_0_s5_23(src_0_s5_23_I);
        pe_array_cyc0->src_0_s5_24(src_0_s5_24_I);
        pe_array_cyc0->src_0_s5_25(src_0_s5_25_I);
        pe_array_cyc0->src_0_s5_26(src_0_s5_26_I);
        pe_array_cyc0->src_0_s5_27(src_0_s5_27_I);
        pe_array_cyc0->src_0_s5_28(src_0_s5_28_I);
        pe_array_cyc0->src_0_s5_29(src_0_s5_29_I);
        pe_array_cyc0->src_0_s5_30(src_0_s5_30_I);
        pe_array_cyc0->src_0_s5_31(src_0_s5_31_I);
        pe_array_cyc0->src_0_s6_0(src_0_s6_0_I);
        pe_array_cyc0->src_0_s6_1(src_0_s6_1_I);
        pe_array_cyc0->src_0_s6_2(src_0_s6_2_I);
        pe_array_cyc0->src_0_s6_3(src_0_s6_3_I);
        pe_array_cyc0->src_0_s6_4(src_0_s6_4_I);
        pe_array_cyc0->src_0_s6_5(src_0_s6_5_I);
        pe_array_cyc0->src_0_s6_6(src_0_s6_6_I);
        pe_array_cyc0->src_0_s6_7(src_0_s6_7_I);
        pe_array_cyc0->src_0_s6_8(src_0_s6_8_I);
        pe_array_cyc0->src_0_s6_9(src_0_s6_9_I);
        pe_array_cyc0->src_0_s6_10(src_0_s6_10_I);
        pe_array_cyc0->src_0_s6_11(src_0_s6_11_I);
        pe_array_cyc0->src_0_s6_12(src_0_s6_12_I);
        pe_array_cyc0->src_0_s6_13(src_0_s6_13_I);
        pe_array_cyc0->src_0_s6_14(src_0_s6_14_I);
        pe_array_cyc0->src_0_s6_15(src_0_s6_15_I);
        pe_array_cyc0->src_0_s6_16(src_0_s6_16_I);
        pe_array_cyc0->src_0_s6_17(src_0_s6_17_I);
        pe_array_cyc0->src_0_s6_18(src_0_s6_18_I);
        pe_array_cyc0->src_0_s6_19(src_0_s6_19_I);
        pe_array_cyc0->src_0_s6_20(src_0_s6_20_I);
        pe_array_cyc0->src_0_s6_21(src_0_s6_21_I);
        pe_array_cyc0->src_0_s6_22(src_0_s6_22_I);
        pe_array_cyc0->src_0_s6_23(src_0_s6_23_I);
        pe_array_cyc0->src_0_s6_24(src_0_s6_24_I);
        pe_array_cyc0->src_0_s6_25(src_0_s6_25_I);
        pe_array_cyc0->src_0_s6_26(src_0_s6_26_I);
        pe_array_cyc0->src_0_s6_27(src_0_s6_27_I);
        pe_array_cyc0->src_0_s6_28(src_0_s6_28_I);
        pe_array_cyc0->src_0_s6_29(src_0_s6_29_I);
        pe_array_cyc0->src_0_s6_30(src_0_s6_30_I);
        pe_array_cyc0->src_0_s6_31(src_0_s6_31_I);
        pe_array_cyc0->src_1_0(src_1_0_I);
        pe_array_cyc0->src_1_1(src_1_1_I);
        pe_array_cyc0->src_1_2(src_1_2_I);
        pe_array_cyc0->src_1_3(src_1_3_I);
        pe_array_cyc0->src_1_4(src_1_4_I);
        pe_array_cyc0->src_1_5(src_1_5_I);
        pe_array_cyc0->src_1_6(src_1_6_I);
        pe_array_cyc0->src_1_7(src_1_7_I);
        pe_array_cyc0->src_1_8(src_1_8_I);
        pe_array_cyc0->src_1_9(src_1_9_I);
        pe_array_cyc0->src_1_10(src_1_10_I);
        pe_array_cyc0->src_1_11(src_1_11_I);
        pe_array_cyc0->src_1_12(src_1_12_I);
        pe_array_cyc0->src_1_13(src_1_13_I);
        pe_array_cyc0->src_1_14(src_1_14_I);
        pe_array_cyc0->src_1_15(src_1_15_I);
        pe_array_cyc0->src_1_16(src_1_16_I);
        pe_array_cyc0->src_1_17(src_1_17_I);
        pe_array_cyc0->src_1_18(src_1_18_I);
        pe_array_cyc0->src_1_19(src_1_19_I);
        pe_array_cyc0->src_1_20(src_1_20_I);
        pe_array_cyc0->src_1_21(src_1_21_I);
        pe_array_cyc0->src_1_22(src_1_22_I);
        pe_array_cyc0->src_1_23(src_1_23_I);
        pe_array_cyc0->src_1_24(src_1_24_I);
        pe_array_cyc0->src_1_25(src_1_25_I);
        pe_array_cyc0->src_1_26(src_1_26_I);
        pe_array_cyc0->src_1_27(src_1_27_I);
        pe_array_cyc0->src_1_28(src_1_28_I);
        pe_array_cyc0->src_1_29(src_1_29_I);
        pe_array_cyc0->src_1_30(src_1_30_I);
        pe_array_cyc0->src_1_31(src_1_31_I);
        pe_array_cyc0->pe_data_0(pe_data_0_O);
        pe_array_cyc0->pe_data_1(pe_data_1_O);
        pe_array_cyc0->pe_data_2(pe_data_2_O);
        pe_array_cyc0->pe_data_3(pe_data_3_O);
        pe_array_cyc0->pe_data_4(pe_data_4_O);
        pe_array_cyc0->pe_data_5(pe_data_5_O);
        pe_array_cyc0->pe_data_6(pe_data_6_O);
        pe_array_cyc0->pe_data_7(pe_data_7_O);
        pe_array_cyc0->pe_data_8(pe_data_8_O);
        pe_array_cyc0->pe_data_9(pe_data_9_O);
        pe_array_cyc0->pe_data_10(pe_data_10_O);
        pe_array_cyc0->pe_data_11(pe_data_11_O);
        pe_array_cyc0->pe_data_12(pe_data_12_O);
        pe_array_cyc0->pe_data_13(pe_data_13_O);
        pe_array_cyc0->pe_data_14(pe_data_14_O);
        pe_array_cyc0->pe_data_15(pe_data_15_O);
        pe_array_cyc0->pe_data_16(pe_data_16_O);
        pe_array_cyc0->pe_data_17(pe_data_17_O);
        pe_array_cyc0->pe_data_18(pe_data_18_O);
        pe_array_cyc0->pe_data_19(pe_data_19_O);
        pe_array_cyc0->pe_data_20(pe_data_20_O);
        pe_array_cyc0->pe_data_21(pe_data_21_O);
        pe_array_cyc0->pe_data_22(pe_data_22_O);
        pe_array_cyc0->pe_data_23(pe_data_23_O);
        pe_array_cyc0->pe_data_24(pe_data_24_O);
        pe_array_cyc0->pe_data_25(pe_data_25_O);
        pe_array_cyc0->pe_data_26(pe_data_26_O);
        pe_array_cyc0->pe_data_27(pe_data_27_O);
        pe_array_cyc0->pe_data_28(pe_data_28_O);
        pe_array_cyc0->pe_data_29(pe_data_29_O);
        pe_array_cyc0->pe_data_30(pe_data_30_O);
        pe_array_cyc0->pe_data_31(pe_data_31_O);
        pe_array_cyc0->pe_data_valid(pe_data_valid);


        // setup the type conversion threads
        SC_METHOD( thread_systolic_en_I);
            sensitive << systolic_en;
        SC_METHOD( thread_systolic_depth_I);
            sensitive << systolic_depth;
        SC_METHOD( thread_mac_shift_len_I);
            sensitive << mac_shift_len;
        SC_METHOD( thread_src_0_s0_0_I);
            sensitive << src_0_s0_0;
        SC_METHOD( thread_src_0_s0_1_I);
            sensitive << src_0_s0_1;
        SC_METHOD( thread_src_0_s0_2_I);
            sensitive << src_0_s0_2;
        SC_METHOD( thread_src_0_s0_3_I);
            sensitive << src_0_s0_3;
        SC_METHOD( thread_src_0_s0_4_I);
            sensitive << src_0_s0_4;
        SC_METHOD( thread_src_0_s0_5_I);
            sensitive << src_0_s0_5;
        SC_METHOD( thread_src_0_s0_6_I);
            sensitive << src_0_s0_6;
        SC_METHOD( thread_src_0_s0_7_I);
            sensitive << src_0_s0_7;
        SC_METHOD( thread_src_0_s0_8_I);
            sensitive << src_0_s0_8;
        SC_METHOD( thread_src_0_s0_9_I);
            sensitive << src_0_s0_9;
        SC_METHOD( thread_src_0_s0_10_I);
            sensitive << src_0_s0_10;
        SC_METHOD( thread_src_0_s0_11_I);
            sensitive << src_0_s0_11;
        SC_METHOD( thread_src_0_s0_12_I);
            sensitive << src_0_s0_12;
        SC_METHOD( thread_src_0_s0_13_I);
            sensitive << src_0_s0_13;
        SC_METHOD( thread_src_0_s0_14_I);
            sensitive << src_0_s0_14;
        SC_METHOD( thread_src_0_s0_15_I);
            sensitive << src_0_s0_15;
        SC_METHOD( thread_src_0_s0_16_I);
            sensitive << src_0_s0_16;
        SC_METHOD( thread_src_0_s0_17_I);
            sensitive << src_0_s0_17;
        SC_METHOD( thread_src_0_s0_18_I);
            sensitive << src_0_s0_18;
        SC_METHOD( thread_src_0_s0_19_I);
            sensitive << src_0_s0_19;
        SC_METHOD( thread_src_0_s0_20_I);
            sensitive << src_0_s0_20;
        SC_METHOD( thread_src_0_s0_21_I);
            sensitive << src_0_s0_21;
        SC_METHOD( thread_src_0_s0_22_I);
            sensitive << src_0_s0_22;
        SC_METHOD( thread_src_0_s0_23_I);
            sensitive << src_0_s0_23;
        SC_METHOD( thread_src_0_s0_24_I);
            sensitive << src_0_s0_24;
        SC_METHOD( thread_src_0_s0_25_I);
            sensitive << src_0_s0_25;
        SC_METHOD( thread_src_0_s0_26_I);
            sensitive << src_0_s0_26;
        SC_METHOD( thread_src_0_s0_27_I);
            sensitive << src_0_s0_27;
        SC_METHOD( thread_src_0_s0_28_I);
            sensitive << src_0_s0_28;
        SC_METHOD( thread_src_0_s0_29_I);
            sensitive << src_0_s0_29;
        SC_METHOD( thread_src_0_s0_30_I);
            sensitive << src_0_s0_30;
        SC_METHOD( thread_src_0_s0_31_I);
            sensitive << src_0_s0_31;
        SC_METHOD( thread_src_0_s1_0_I);
            sensitive << src_0_s1_0;
        SC_METHOD( thread_src_0_s1_1_I);
            sensitive << src_0_s1_1;
        SC_METHOD( thread_src_0_s1_2_I);
            sensitive << src_0_s1_2;
        SC_METHOD( thread_src_0_s1_3_I);
            sensitive << src_0_s1_3;
        SC_METHOD( thread_src_0_s1_4_I);
            sensitive << src_0_s1_4;
        SC_METHOD( thread_src_0_s1_5_I);
            sensitive << src_0_s1_5;
        SC_METHOD( thread_src_0_s1_6_I);
            sensitive << src_0_s1_6;
        SC_METHOD( thread_src_0_s1_7_I);
            sensitive << src_0_s1_7;
        SC_METHOD( thread_src_0_s1_8_I);
            sensitive << src_0_s1_8;
        SC_METHOD( thread_src_0_s1_9_I);
            sensitive << src_0_s1_9;
        SC_METHOD( thread_src_0_s1_10_I);
            sensitive << src_0_s1_10;
        SC_METHOD( thread_src_0_s1_11_I);
            sensitive << src_0_s1_11;
        SC_METHOD( thread_src_0_s1_12_I);
            sensitive << src_0_s1_12;
        SC_METHOD( thread_src_0_s1_13_I);
            sensitive << src_0_s1_13;
        SC_METHOD( thread_src_0_s1_14_I);
            sensitive << src_0_s1_14;
        SC_METHOD( thread_src_0_s1_15_I);
            sensitive << src_0_s1_15;
        SC_METHOD( thread_src_0_s1_16_I);
            sensitive << src_0_s1_16;
        SC_METHOD( thread_src_0_s1_17_I);
            sensitive << src_0_s1_17;
        SC_METHOD( thread_src_0_s1_18_I);
            sensitive << src_0_s1_18;
        SC_METHOD( thread_src_0_s1_19_I);
            sensitive << src_0_s1_19;
        SC_METHOD( thread_src_0_s1_20_I);
            sensitive << src_0_s1_20;
        SC_METHOD( thread_src_0_s1_21_I);
            sensitive << src_0_s1_21;
        SC_METHOD( thread_src_0_s1_22_I);
            sensitive << src_0_s1_22;
        SC_METHOD( thread_src_0_s1_23_I);
            sensitive << src_0_s1_23;
        SC_METHOD( thread_src_0_s1_24_I);
            sensitive << src_0_s1_24;
        SC_METHOD( thread_src_0_s1_25_I);
            sensitive << src_0_s1_25;
        SC_METHOD( thread_src_0_s1_26_I);
            sensitive << src_0_s1_26;
        SC_METHOD( thread_src_0_s1_27_I);
            sensitive << src_0_s1_27;
        SC_METHOD( thread_src_0_s1_28_I);
            sensitive << src_0_s1_28;
        SC_METHOD( thread_src_0_s1_29_I);
            sensitive << src_0_s1_29;
        SC_METHOD( thread_src_0_s1_30_I);
            sensitive << src_0_s1_30;
        SC_METHOD( thread_src_0_s1_31_I);
            sensitive << src_0_s1_31;
        SC_METHOD( thread_src_0_s2_0_I);
            sensitive << src_0_s2_0;
        SC_METHOD( thread_src_0_s2_1_I);
            sensitive << src_0_s2_1;
        SC_METHOD( thread_src_0_s2_2_I);
            sensitive << src_0_s2_2;
        SC_METHOD( thread_src_0_s2_3_I);
            sensitive << src_0_s2_3;
        SC_METHOD( thread_src_0_s2_4_I);
            sensitive << src_0_s2_4;
        SC_METHOD( thread_src_0_s2_5_I);
            sensitive << src_0_s2_5;
        SC_METHOD( thread_src_0_s2_6_I);
            sensitive << src_0_s2_6;
        SC_METHOD( thread_src_0_s2_7_I);
            sensitive << src_0_s2_7;
        SC_METHOD( thread_src_0_s2_8_I);
            sensitive << src_0_s2_8;
        SC_METHOD( thread_src_0_s2_9_I);
            sensitive << src_0_s2_9;
        SC_METHOD( thread_src_0_s2_10_I);
            sensitive << src_0_s2_10;
        SC_METHOD( thread_src_0_s2_11_I);
            sensitive << src_0_s2_11;
        SC_METHOD( thread_src_0_s2_12_I);
            sensitive << src_0_s2_12;
        SC_METHOD( thread_src_0_s2_13_I);
            sensitive << src_0_s2_13;
        SC_METHOD( thread_src_0_s2_14_I);
            sensitive << src_0_s2_14;
        SC_METHOD( thread_src_0_s2_15_I);
            sensitive << src_0_s2_15;
        SC_METHOD( thread_src_0_s2_16_I);
            sensitive << src_0_s2_16;
        SC_METHOD( thread_src_0_s2_17_I);
            sensitive << src_0_s2_17;
        SC_METHOD( thread_src_0_s2_18_I);
            sensitive << src_0_s2_18;
        SC_METHOD( thread_src_0_s2_19_I);
            sensitive << src_0_s2_19;
        SC_METHOD( thread_src_0_s2_20_I);
            sensitive << src_0_s2_20;
        SC_METHOD( thread_src_0_s2_21_I);
            sensitive << src_0_s2_21;
        SC_METHOD( thread_src_0_s2_22_I);
            sensitive << src_0_s2_22;
        SC_METHOD( thread_src_0_s2_23_I);
            sensitive << src_0_s2_23;
        SC_METHOD( thread_src_0_s2_24_I);
            sensitive << src_0_s2_24;
        SC_METHOD( thread_src_0_s2_25_I);
            sensitive << src_0_s2_25;
        SC_METHOD( thread_src_0_s2_26_I);
            sensitive << src_0_s2_26;
        SC_METHOD( thread_src_0_s2_27_I);
            sensitive << src_0_s2_27;
        SC_METHOD( thread_src_0_s2_28_I);
            sensitive << src_0_s2_28;
        SC_METHOD( thread_src_0_s2_29_I);
            sensitive << src_0_s2_29;
        SC_METHOD( thread_src_0_s2_30_I);
            sensitive << src_0_s2_30;
        SC_METHOD( thread_src_0_s2_31_I);
            sensitive << src_0_s2_31;
        SC_METHOD( thread_src_0_s3_0_I);
            sensitive << src_0_s3_0;
        SC_METHOD( thread_src_0_s3_1_I);
            sensitive << src_0_s3_1;
        SC_METHOD( thread_src_0_s3_2_I);
            sensitive << src_0_s3_2;
        SC_METHOD( thread_src_0_s3_3_I);
            sensitive << src_0_s3_3;
        SC_METHOD( thread_src_0_s3_4_I);
            sensitive << src_0_s3_4;
        SC_METHOD( thread_src_0_s3_5_I);
            sensitive << src_0_s3_5;
        SC_METHOD( thread_src_0_s3_6_I);
            sensitive << src_0_s3_6;
        SC_METHOD( thread_src_0_s3_7_I);
            sensitive << src_0_s3_7;
        SC_METHOD( thread_src_0_s3_8_I);
            sensitive << src_0_s3_8;
        SC_METHOD( thread_src_0_s3_9_I);
            sensitive << src_0_s3_9;
        SC_METHOD( thread_src_0_s3_10_I);
            sensitive << src_0_s3_10;
        SC_METHOD( thread_src_0_s3_11_I);
            sensitive << src_0_s3_11;
        SC_METHOD( thread_src_0_s3_12_I);
            sensitive << src_0_s3_12;
        SC_METHOD( thread_src_0_s3_13_I);
            sensitive << src_0_s3_13;
        SC_METHOD( thread_src_0_s3_14_I);
            sensitive << src_0_s3_14;
        SC_METHOD( thread_src_0_s3_15_I);
            sensitive << src_0_s3_15;
        SC_METHOD( thread_src_0_s3_16_I);
            sensitive << src_0_s3_16;
        SC_METHOD( thread_src_0_s3_17_I);
            sensitive << src_0_s3_17;
        SC_METHOD( thread_src_0_s3_18_I);
            sensitive << src_0_s3_18;
        SC_METHOD( thread_src_0_s3_19_I);
            sensitive << src_0_s3_19;
        SC_METHOD( thread_src_0_s3_20_I);
            sensitive << src_0_s3_20;
        SC_METHOD( thread_src_0_s3_21_I);
            sensitive << src_0_s3_21;
        SC_METHOD( thread_src_0_s3_22_I);
            sensitive << src_0_s3_22;
        SC_METHOD( thread_src_0_s3_23_I);
            sensitive << src_0_s3_23;
        SC_METHOD( thread_src_0_s3_24_I);
            sensitive << src_0_s3_24;
        SC_METHOD( thread_src_0_s3_25_I);
            sensitive << src_0_s3_25;
        SC_METHOD( thread_src_0_s3_26_I);
            sensitive << src_0_s3_26;
        SC_METHOD( thread_src_0_s3_27_I);
            sensitive << src_0_s3_27;
        SC_METHOD( thread_src_0_s3_28_I);
            sensitive << src_0_s3_28;
        SC_METHOD( thread_src_0_s3_29_I);
            sensitive << src_0_s3_29;
        SC_METHOD( thread_src_0_s3_30_I);
            sensitive << src_0_s3_30;
        SC_METHOD( thread_src_0_s3_31_I);
            sensitive << src_0_s3_31;
        SC_METHOD( thread_src_0_s4_0_I);
            sensitive << src_0_s4_0;
        SC_METHOD( thread_src_0_s4_1_I);
            sensitive << src_0_s4_1;
        SC_METHOD( thread_src_0_s4_2_I);
            sensitive << src_0_s4_2;
        SC_METHOD( thread_src_0_s4_3_I);
            sensitive << src_0_s4_3;
        SC_METHOD( thread_src_0_s4_4_I);
            sensitive << src_0_s4_4;
        SC_METHOD( thread_src_0_s4_5_I);
            sensitive << src_0_s4_5;
        SC_METHOD( thread_src_0_s4_6_I);
            sensitive << src_0_s4_6;
        SC_METHOD( thread_src_0_s4_7_I);
            sensitive << src_0_s4_7;
        SC_METHOD( thread_src_0_s4_8_I);
            sensitive << src_0_s4_8;
        SC_METHOD( thread_src_0_s4_9_I);
            sensitive << src_0_s4_9;
        SC_METHOD( thread_src_0_s4_10_I);
            sensitive << src_0_s4_10;
        SC_METHOD( thread_src_0_s4_11_I);
            sensitive << src_0_s4_11;
        SC_METHOD( thread_src_0_s4_12_I);
            sensitive << src_0_s4_12;
        SC_METHOD( thread_src_0_s4_13_I);
            sensitive << src_0_s4_13;
        SC_METHOD( thread_src_0_s4_14_I);
            sensitive << src_0_s4_14;
        SC_METHOD( thread_src_0_s4_15_I);
            sensitive << src_0_s4_15;
        SC_METHOD( thread_src_0_s4_16_I);
            sensitive << src_0_s4_16;
        SC_METHOD( thread_src_0_s4_17_I);
            sensitive << src_0_s4_17;
        SC_METHOD( thread_src_0_s4_18_I);
            sensitive << src_0_s4_18;
        SC_METHOD( thread_src_0_s4_19_I);
            sensitive << src_0_s4_19;
        SC_METHOD( thread_src_0_s4_20_I);
            sensitive << src_0_s4_20;
        SC_METHOD( thread_src_0_s4_21_I);
            sensitive << src_0_s4_21;
        SC_METHOD( thread_src_0_s4_22_I);
            sensitive << src_0_s4_22;
        SC_METHOD( thread_src_0_s4_23_I);
            sensitive << src_0_s4_23;
        SC_METHOD( thread_src_0_s4_24_I);
            sensitive << src_0_s4_24;
        SC_METHOD( thread_src_0_s4_25_I);
            sensitive << src_0_s4_25;
        SC_METHOD( thread_src_0_s4_26_I);
            sensitive << src_0_s4_26;
        SC_METHOD( thread_src_0_s4_27_I);
            sensitive << src_0_s4_27;
        SC_METHOD( thread_src_0_s4_28_I);
            sensitive << src_0_s4_28;
        SC_METHOD( thread_src_0_s4_29_I);
            sensitive << src_0_s4_29;
        SC_METHOD( thread_src_0_s4_30_I);
            sensitive << src_0_s4_30;
        SC_METHOD( thread_src_0_s4_31_I);
            sensitive << src_0_s4_31;
        SC_METHOD( thread_src_0_s5_0_I);
            sensitive << src_0_s5_0;
        SC_METHOD( thread_src_0_s5_1_I);
            sensitive << src_0_s5_1;
        SC_METHOD( thread_src_0_s5_2_I);
            sensitive << src_0_s5_2;
        SC_METHOD( thread_src_0_s5_3_I);
            sensitive << src_0_s5_3;
        SC_METHOD( thread_src_0_s5_4_I);
            sensitive << src_0_s5_4;
        SC_METHOD( thread_src_0_s5_5_I);
            sensitive << src_0_s5_5;
        SC_METHOD( thread_src_0_s5_6_I);
            sensitive << src_0_s5_6;
        SC_METHOD( thread_src_0_s5_7_I);
            sensitive << src_0_s5_7;
        SC_METHOD( thread_src_0_s5_8_I);
            sensitive << src_0_s5_8;
        SC_METHOD( thread_src_0_s5_9_I);
            sensitive << src_0_s5_9;
        SC_METHOD( thread_src_0_s5_10_I);
            sensitive << src_0_s5_10;
        SC_METHOD( thread_src_0_s5_11_I);
            sensitive << src_0_s5_11;
        SC_METHOD( thread_src_0_s5_12_I);
            sensitive << src_0_s5_12;
        SC_METHOD( thread_src_0_s5_13_I);
            sensitive << src_0_s5_13;
        SC_METHOD( thread_src_0_s5_14_I);
            sensitive << src_0_s5_14;
        SC_METHOD( thread_src_0_s5_15_I);
            sensitive << src_0_s5_15;
        SC_METHOD( thread_src_0_s5_16_I);
            sensitive << src_0_s5_16;
        SC_METHOD( thread_src_0_s5_17_I);
            sensitive << src_0_s5_17;
        SC_METHOD( thread_src_0_s5_18_I);
            sensitive << src_0_s5_18;
        SC_METHOD( thread_src_0_s5_19_I);
            sensitive << src_0_s5_19;
        SC_METHOD( thread_src_0_s5_20_I);
            sensitive << src_0_s5_20;
        SC_METHOD( thread_src_0_s5_21_I);
            sensitive << src_0_s5_21;
        SC_METHOD( thread_src_0_s5_22_I);
            sensitive << src_0_s5_22;
        SC_METHOD( thread_src_0_s5_23_I);
            sensitive << src_0_s5_23;
        SC_METHOD( thread_src_0_s5_24_I);
            sensitive << src_0_s5_24;
        SC_METHOD( thread_src_0_s5_25_I);
            sensitive << src_0_s5_25;
        SC_METHOD( thread_src_0_s5_26_I);
            sensitive << src_0_s5_26;
        SC_METHOD( thread_src_0_s5_27_I);
            sensitive << src_0_s5_27;
        SC_METHOD( thread_src_0_s5_28_I);
            sensitive << src_0_s5_28;
        SC_METHOD( thread_src_0_s5_29_I);
            sensitive << src_0_s5_29;
        SC_METHOD( thread_src_0_s5_30_I);
            sensitive << src_0_s5_30;
        SC_METHOD( thread_src_0_s5_31_I);
            sensitive << src_0_s5_31;
        SC_METHOD( thread_src_0_s6_0_I);
            sensitive << src_0_s6_0;
        SC_METHOD( thread_src_0_s6_1_I);
            sensitive << src_0_s6_1;
        SC_METHOD( thread_src_0_s6_2_I);
            sensitive << src_0_s6_2;
        SC_METHOD( thread_src_0_s6_3_I);
            sensitive << src_0_s6_3;
        SC_METHOD( thread_src_0_s6_4_I);
            sensitive << src_0_s6_4;
        SC_METHOD( thread_src_0_s6_5_I);
            sensitive << src_0_s6_5;
        SC_METHOD( thread_src_0_s6_6_I);
            sensitive << src_0_s6_6;
        SC_METHOD( thread_src_0_s6_7_I);
            sensitive << src_0_s6_7;
        SC_METHOD( thread_src_0_s6_8_I);
            sensitive << src_0_s6_8;
        SC_METHOD( thread_src_0_s6_9_I);
            sensitive << src_0_s6_9;
        SC_METHOD( thread_src_0_s6_10_I);
            sensitive << src_0_s6_10;
        SC_METHOD( thread_src_0_s6_11_I);
            sensitive << src_0_s6_11;
        SC_METHOD( thread_src_0_s6_12_I);
            sensitive << src_0_s6_12;
        SC_METHOD( thread_src_0_s6_13_I);
            sensitive << src_0_s6_13;
        SC_METHOD( thread_src_0_s6_14_I);
            sensitive << src_0_s6_14;
        SC_METHOD( thread_src_0_s6_15_I);
            sensitive << src_0_s6_15;
        SC_METHOD( thread_src_0_s6_16_I);
            sensitive << src_0_s6_16;
        SC_METHOD( thread_src_0_s6_17_I);
            sensitive << src_0_s6_17;
        SC_METHOD( thread_src_0_s6_18_I);
            sensitive << src_0_s6_18;
        SC_METHOD( thread_src_0_s6_19_I);
            sensitive << src_0_s6_19;
        SC_METHOD( thread_src_0_s6_20_I);
            sensitive << src_0_s6_20;
        SC_METHOD( thread_src_0_s6_21_I);
            sensitive << src_0_s6_21;
        SC_METHOD( thread_src_0_s6_22_I);
            sensitive << src_0_s6_22;
        SC_METHOD( thread_src_0_s6_23_I);
            sensitive << src_0_s6_23;
        SC_METHOD( thread_src_0_s6_24_I);
            sensitive << src_0_s6_24;
        SC_METHOD( thread_src_0_s6_25_I);
            sensitive << src_0_s6_25;
        SC_METHOD( thread_src_0_s6_26_I);
            sensitive << src_0_s6_26;
        SC_METHOD( thread_src_0_s6_27_I);
            sensitive << src_0_s6_27;
        SC_METHOD( thread_src_0_s6_28_I);
            sensitive << src_0_s6_28;
        SC_METHOD( thread_src_0_s6_29_I);
            sensitive << src_0_s6_29;
        SC_METHOD( thread_src_0_s6_30_I);
            sensitive << src_0_s6_30;
        SC_METHOD( thread_src_0_s6_31_I);
            sensitive << src_0_s6_31;
        SC_METHOD( thread_src_1_0_I);
            sensitive << src_1_0;
        SC_METHOD( thread_src_1_1_I);
            sensitive << src_1_1;
        SC_METHOD( thread_src_1_2_I);
            sensitive << src_1_2;
        SC_METHOD( thread_src_1_3_I);
            sensitive << src_1_3;
        SC_METHOD( thread_src_1_4_I);
            sensitive << src_1_4;
        SC_METHOD( thread_src_1_5_I);
            sensitive << src_1_5;
        SC_METHOD( thread_src_1_6_I);
            sensitive << src_1_6;
        SC_METHOD( thread_src_1_7_I);
            sensitive << src_1_7;
        SC_METHOD( thread_src_1_8_I);
            sensitive << src_1_8;
        SC_METHOD( thread_src_1_9_I);
            sensitive << src_1_9;
        SC_METHOD( thread_src_1_10_I);
            sensitive << src_1_10;
        SC_METHOD( thread_src_1_11_I);
            sensitive << src_1_11;
        SC_METHOD( thread_src_1_12_I);
            sensitive << src_1_12;
        SC_METHOD( thread_src_1_13_I);
            sensitive << src_1_13;
        SC_METHOD( thread_src_1_14_I);
            sensitive << src_1_14;
        SC_METHOD( thread_src_1_15_I);
            sensitive << src_1_15;
        SC_METHOD( thread_src_1_16_I);
            sensitive << src_1_16;
        SC_METHOD( thread_src_1_17_I);
            sensitive << src_1_17;
        SC_METHOD( thread_src_1_18_I);
            sensitive << src_1_18;
        SC_METHOD( thread_src_1_19_I);
            sensitive << src_1_19;
        SC_METHOD( thread_src_1_20_I);
            sensitive << src_1_20;
        SC_METHOD( thread_src_1_21_I);
            sensitive << src_1_21;
        SC_METHOD( thread_src_1_22_I);
            sensitive << src_1_22;
        SC_METHOD( thread_src_1_23_I);
            sensitive << src_1_23;
        SC_METHOD( thread_src_1_24_I);
            sensitive << src_1_24;
        SC_METHOD( thread_src_1_25_I);
            sensitive << src_1_25;
        SC_METHOD( thread_src_1_26_I);
            sensitive << src_1_26;
        SC_METHOD( thread_src_1_27_I);
            sensitive << src_1_27;
        SC_METHOD( thread_src_1_28_I);
            sensitive << src_1_28;
        SC_METHOD( thread_src_1_29_I);
            sensitive << src_1_29;
        SC_METHOD( thread_src_1_30_I);
            sensitive << src_1_30;
        SC_METHOD( thread_src_1_31_I);
            sensitive << src_1_31;
        SC_METHOD( thread_pe_data_0_O);
            sensitive << pe_data_0_O;
        SC_METHOD( thread_pe_data_1_O);
            sensitive << pe_data_1_O;
        SC_METHOD( thread_pe_data_2_O);
            sensitive << pe_data_2_O;
        SC_METHOD( thread_pe_data_3_O);
            sensitive << pe_data_3_O;
        SC_METHOD( thread_pe_data_4_O);
            sensitive << pe_data_4_O;
        SC_METHOD( thread_pe_data_5_O);
            sensitive << pe_data_5_O;
        SC_METHOD( thread_pe_data_6_O);
            sensitive << pe_data_6_O;
        SC_METHOD( thread_pe_data_7_O);
            sensitive << pe_data_7_O;
        SC_METHOD( thread_pe_data_8_O);
            sensitive << pe_data_8_O;
        SC_METHOD( thread_pe_data_9_O);
            sensitive << pe_data_9_O;
        SC_METHOD( thread_pe_data_10_O);
            sensitive << pe_data_10_O;
        SC_METHOD( thread_pe_data_11_O);
            sensitive << pe_data_11_O;
        SC_METHOD( thread_pe_data_12_O);
            sensitive << pe_data_12_O;
        SC_METHOD( thread_pe_data_13_O);
            sensitive << pe_data_13_O;
        SC_METHOD( thread_pe_data_14_O);
            sensitive << pe_data_14_O;
        SC_METHOD( thread_pe_data_15_O);
            sensitive << pe_data_15_O;
        SC_METHOD( thread_pe_data_16_O);
            sensitive << pe_data_16_O;
        SC_METHOD( thread_pe_data_17_O);
            sensitive << pe_data_17_O;
        SC_METHOD( thread_pe_data_18_O);
            sensitive << pe_data_18_O;
        SC_METHOD( thread_pe_data_19_O);
            sensitive << pe_data_19_O;
        SC_METHOD( thread_pe_data_20_O);
            sensitive << pe_data_20_O;
        SC_METHOD( thread_pe_data_21_O);
            sensitive << pe_data_21_O;
        SC_METHOD( thread_pe_data_22_O);
            sensitive << pe_data_22_O;
        SC_METHOD( thread_pe_data_23_O);
            sensitive << pe_data_23_O;
        SC_METHOD( thread_pe_data_24_O);
            sensitive << pe_data_24_O;
        SC_METHOD( thread_pe_data_25_O);
            sensitive << pe_data_25_O;
        SC_METHOD( thread_pe_data_26_O);
            sensitive << pe_data_26_O;
        SC_METHOD( thread_pe_data_27_O);
            sensitive << pe_data_27_O;
        SC_METHOD( thread_pe_data_28_O);
            sensitive << pe_data_28_O;
        SC_METHOD( thread_pe_data_29_O);
            sensitive << pe_data_29_O;
        SC_METHOD( thread_pe_data_30_O);
            sensitive << pe_data_30_O;
        SC_METHOD( thread_pe_data_31_O);
            sensitive << pe_data_31_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            pe_array_cyc0->trace(tfp,99);
        }
    };

    ~pe_array_cycsimV()
    {
        delete pe_array_cyc0;
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
    Vpe_array_rtl* pe_array_cyc0;
};

pe_array_cycsim* pe_array_cycsim_factory()
{
    return new pe_array_cycsimV("pe_array");
}

class pe_array_linkup
{
public:
    pe_array_linkup() {
        extern pe_array_cycsim* (*pe_array_cycsim_factory_p)();
        pe_array_cycsim_factory_p = &pe_array_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
pe_array_linkup pe_array_cycsimV_link;


