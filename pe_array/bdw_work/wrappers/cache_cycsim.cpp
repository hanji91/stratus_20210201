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

#include "cache_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "Vcache_rtl.h"


class Vcache_rtl;

class cache_cycsimV : public cache_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > systolic_en_I;
    sc_signal< uint32_t > systolic_depth_I;
    sc_signal< uint32_t > systolic_sel_I;
    sc_signal< sc_bv< 320 >  > feature_data_I;
    sc_signal< uint32_t > feature_data_sel_I;
    sc_signal< sc_bv< 256 >  > weight_data_I;
    sc_signal< uint32_t > mac_src_0_s0_0_O;
    sc_signal< uint32_t > mac_src_0_s0_1_O;
    sc_signal< uint32_t > mac_src_0_s0_2_O;
    sc_signal< uint32_t > mac_src_0_s0_3_O;
    sc_signal< uint32_t > mac_src_0_s0_4_O;
    sc_signal< uint32_t > mac_src_0_s0_5_O;
    sc_signal< uint32_t > mac_src_0_s0_6_O;
    sc_signal< uint32_t > mac_src_0_s0_7_O;
    sc_signal< uint32_t > mac_src_0_s0_8_O;
    sc_signal< uint32_t > mac_src_0_s0_9_O;
    sc_signal< uint32_t > mac_src_0_s0_10_O;
    sc_signal< uint32_t > mac_src_0_s0_11_O;
    sc_signal< uint32_t > mac_src_0_s0_12_O;
    sc_signal< uint32_t > mac_src_0_s0_13_O;
    sc_signal< uint32_t > mac_src_0_s0_14_O;
    sc_signal< uint32_t > mac_src_0_s0_15_O;
    sc_signal< uint32_t > mac_src_0_s0_16_O;
    sc_signal< uint32_t > mac_src_0_s0_17_O;
    sc_signal< uint32_t > mac_src_0_s0_18_O;
    sc_signal< uint32_t > mac_src_0_s0_19_O;
    sc_signal< uint32_t > mac_src_0_s0_20_O;
    sc_signal< uint32_t > mac_src_0_s0_21_O;
    sc_signal< uint32_t > mac_src_0_s0_22_O;
    sc_signal< uint32_t > mac_src_0_s0_23_O;
    sc_signal< uint32_t > mac_src_0_s0_24_O;
    sc_signal< uint32_t > mac_src_0_s0_25_O;
    sc_signal< uint32_t > mac_src_0_s0_26_O;
    sc_signal< uint32_t > mac_src_0_s0_27_O;
    sc_signal< uint32_t > mac_src_0_s0_28_O;
    sc_signal< uint32_t > mac_src_0_s0_29_O;
    sc_signal< uint32_t > mac_src_0_s0_30_O;
    sc_signal< uint32_t > mac_src_0_s0_31_O;
    sc_signal< uint32_t > mac_src_0_s1_0_O;
    sc_signal< uint32_t > mac_src_0_s1_1_O;
    sc_signal< uint32_t > mac_src_0_s1_2_O;
    sc_signal< uint32_t > mac_src_0_s1_3_O;
    sc_signal< uint32_t > mac_src_0_s1_4_O;
    sc_signal< uint32_t > mac_src_0_s1_5_O;
    sc_signal< uint32_t > mac_src_0_s1_6_O;
    sc_signal< uint32_t > mac_src_0_s1_7_O;
    sc_signal< uint32_t > mac_src_0_s1_8_O;
    sc_signal< uint32_t > mac_src_0_s1_9_O;
    sc_signal< uint32_t > mac_src_0_s1_10_O;
    sc_signal< uint32_t > mac_src_0_s1_11_O;
    sc_signal< uint32_t > mac_src_0_s1_12_O;
    sc_signal< uint32_t > mac_src_0_s1_13_O;
    sc_signal< uint32_t > mac_src_0_s1_14_O;
    sc_signal< uint32_t > mac_src_0_s1_15_O;
    sc_signal< uint32_t > mac_src_0_s1_16_O;
    sc_signal< uint32_t > mac_src_0_s1_17_O;
    sc_signal< uint32_t > mac_src_0_s1_18_O;
    sc_signal< uint32_t > mac_src_0_s1_19_O;
    sc_signal< uint32_t > mac_src_0_s1_20_O;
    sc_signal< uint32_t > mac_src_0_s1_21_O;
    sc_signal< uint32_t > mac_src_0_s1_22_O;
    sc_signal< uint32_t > mac_src_0_s1_23_O;
    sc_signal< uint32_t > mac_src_0_s1_24_O;
    sc_signal< uint32_t > mac_src_0_s1_25_O;
    sc_signal< uint32_t > mac_src_0_s1_26_O;
    sc_signal< uint32_t > mac_src_0_s1_27_O;
    sc_signal< uint32_t > mac_src_0_s1_28_O;
    sc_signal< uint32_t > mac_src_0_s1_29_O;
    sc_signal< uint32_t > mac_src_0_s1_30_O;
    sc_signal< uint32_t > mac_src_0_s1_31_O;
    sc_signal< uint32_t > mac_src_0_s2_0_O;
    sc_signal< uint32_t > mac_src_0_s2_1_O;
    sc_signal< uint32_t > mac_src_0_s2_2_O;
    sc_signal< uint32_t > mac_src_0_s2_3_O;
    sc_signal< uint32_t > mac_src_0_s2_4_O;
    sc_signal< uint32_t > mac_src_0_s2_5_O;
    sc_signal< uint32_t > mac_src_0_s2_6_O;
    sc_signal< uint32_t > mac_src_0_s2_7_O;
    sc_signal< uint32_t > mac_src_0_s2_8_O;
    sc_signal< uint32_t > mac_src_0_s2_9_O;
    sc_signal< uint32_t > mac_src_0_s2_10_O;
    sc_signal< uint32_t > mac_src_0_s2_11_O;
    sc_signal< uint32_t > mac_src_0_s2_12_O;
    sc_signal< uint32_t > mac_src_0_s2_13_O;
    sc_signal< uint32_t > mac_src_0_s2_14_O;
    sc_signal< uint32_t > mac_src_0_s2_15_O;
    sc_signal< uint32_t > mac_src_0_s2_16_O;
    sc_signal< uint32_t > mac_src_0_s2_17_O;
    sc_signal< uint32_t > mac_src_0_s2_18_O;
    sc_signal< uint32_t > mac_src_0_s2_19_O;
    sc_signal< uint32_t > mac_src_0_s2_20_O;
    sc_signal< uint32_t > mac_src_0_s2_21_O;
    sc_signal< uint32_t > mac_src_0_s2_22_O;
    sc_signal< uint32_t > mac_src_0_s2_23_O;
    sc_signal< uint32_t > mac_src_0_s2_24_O;
    sc_signal< uint32_t > mac_src_0_s2_25_O;
    sc_signal< uint32_t > mac_src_0_s2_26_O;
    sc_signal< uint32_t > mac_src_0_s2_27_O;
    sc_signal< uint32_t > mac_src_0_s2_28_O;
    sc_signal< uint32_t > mac_src_0_s2_29_O;
    sc_signal< uint32_t > mac_src_0_s2_30_O;
    sc_signal< uint32_t > mac_src_0_s2_31_O;
    sc_signal< uint32_t > mac_src_0_s3_0_O;
    sc_signal< uint32_t > mac_src_0_s3_1_O;
    sc_signal< uint32_t > mac_src_0_s3_2_O;
    sc_signal< uint32_t > mac_src_0_s3_3_O;
    sc_signal< uint32_t > mac_src_0_s3_4_O;
    sc_signal< uint32_t > mac_src_0_s3_5_O;
    sc_signal< uint32_t > mac_src_0_s3_6_O;
    sc_signal< uint32_t > mac_src_0_s3_7_O;
    sc_signal< uint32_t > mac_src_0_s3_8_O;
    sc_signal< uint32_t > mac_src_0_s3_9_O;
    sc_signal< uint32_t > mac_src_0_s3_10_O;
    sc_signal< uint32_t > mac_src_0_s3_11_O;
    sc_signal< uint32_t > mac_src_0_s3_12_O;
    sc_signal< uint32_t > mac_src_0_s3_13_O;
    sc_signal< uint32_t > mac_src_0_s3_14_O;
    sc_signal< uint32_t > mac_src_0_s3_15_O;
    sc_signal< uint32_t > mac_src_0_s3_16_O;
    sc_signal< uint32_t > mac_src_0_s3_17_O;
    sc_signal< uint32_t > mac_src_0_s3_18_O;
    sc_signal< uint32_t > mac_src_0_s3_19_O;
    sc_signal< uint32_t > mac_src_0_s3_20_O;
    sc_signal< uint32_t > mac_src_0_s3_21_O;
    sc_signal< uint32_t > mac_src_0_s3_22_O;
    sc_signal< uint32_t > mac_src_0_s3_23_O;
    sc_signal< uint32_t > mac_src_0_s3_24_O;
    sc_signal< uint32_t > mac_src_0_s3_25_O;
    sc_signal< uint32_t > mac_src_0_s3_26_O;
    sc_signal< uint32_t > mac_src_0_s3_27_O;
    sc_signal< uint32_t > mac_src_0_s3_28_O;
    sc_signal< uint32_t > mac_src_0_s3_29_O;
    sc_signal< uint32_t > mac_src_0_s3_30_O;
    sc_signal< uint32_t > mac_src_0_s3_31_O;
    sc_signal< uint32_t > mac_src_0_s4_0_O;
    sc_signal< uint32_t > mac_src_0_s4_1_O;
    sc_signal< uint32_t > mac_src_0_s4_2_O;
    sc_signal< uint32_t > mac_src_0_s4_3_O;
    sc_signal< uint32_t > mac_src_0_s4_4_O;
    sc_signal< uint32_t > mac_src_0_s4_5_O;
    sc_signal< uint32_t > mac_src_0_s4_6_O;
    sc_signal< uint32_t > mac_src_0_s4_7_O;
    sc_signal< uint32_t > mac_src_0_s4_8_O;
    sc_signal< uint32_t > mac_src_0_s4_9_O;
    sc_signal< uint32_t > mac_src_0_s4_10_O;
    sc_signal< uint32_t > mac_src_0_s4_11_O;
    sc_signal< uint32_t > mac_src_0_s4_12_O;
    sc_signal< uint32_t > mac_src_0_s4_13_O;
    sc_signal< uint32_t > mac_src_0_s4_14_O;
    sc_signal< uint32_t > mac_src_0_s4_15_O;
    sc_signal< uint32_t > mac_src_0_s4_16_O;
    sc_signal< uint32_t > mac_src_0_s4_17_O;
    sc_signal< uint32_t > mac_src_0_s4_18_O;
    sc_signal< uint32_t > mac_src_0_s4_19_O;
    sc_signal< uint32_t > mac_src_0_s4_20_O;
    sc_signal< uint32_t > mac_src_0_s4_21_O;
    sc_signal< uint32_t > mac_src_0_s4_22_O;
    sc_signal< uint32_t > mac_src_0_s4_23_O;
    sc_signal< uint32_t > mac_src_0_s4_24_O;
    sc_signal< uint32_t > mac_src_0_s4_25_O;
    sc_signal< uint32_t > mac_src_0_s4_26_O;
    sc_signal< uint32_t > mac_src_0_s4_27_O;
    sc_signal< uint32_t > mac_src_0_s4_28_O;
    sc_signal< uint32_t > mac_src_0_s4_29_O;
    sc_signal< uint32_t > mac_src_0_s4_30_O;
    sc_signal< uint32_t > mac_src_0_s4_31_O;
    sc_signal< uint32_t > mac_src_0_s5_0_O;
    sc_signal< uint32_t > mac_src_0_s5_1_O;
    sc_signal< uint32_t > mac_src_0_s5_2_O;
    sc_signal< uint32_t > mac_src_0_s5_3_O;
    sc_signal< uint32_t > mac_src_0_s5_4_O;
    sc_signal< uint32_t > mac_src_0_s5_5_O;
    sc_signal< uint32_t > mac_src_0_s5_6_O;
    sc_signal< uint32_t > mac_src_0_s5_7_O;
    sc_signal< uint32_t > mac_src_0_s5_8_O;
    sc_signal< uint32_t > mac_src_0_s5_9_O;
    sc_signal< uint32_t > mac_src_0_s5_10_O;
    sc_signal< uint32_t > mac_src_0_s5_11_O;
    sc_signal< uint32_t > mac_src_0_s5_12_O;
    sc_signal< uint32_t > mac_src_0_s5_13_O;
    sc_signal< uint32_t > mac_src_0_s5_14_O;
    sc_signal< uint32_t > mac_src_0_s5_15_O;
    sc_signal< uint32_t > mac_src_0_s5_16_O;
    sc_signal< uint32_t > mac_src_0_s5_17_O;
    sc_signal< uint32_t > mac_src_0_s5_18_O;
    sc_signal< uint32_t > mac_src_0_s5_19_O;
    sc_signal< uint32_t > mac_src_0_s5_20_O;
    sc_signal< uint32_t > mac_src_0_s5_21_O;
    sc_signal< uint32_t > mac_src_0_s5_22_O;
    sc_signal< uint32_t > mac_src_0_s5_23_O;
    sc_signal< uint32_t > mac_src_0_s5_24_O;
    sc_signal< uint32_t > mac_src_0_s5_25_O;
    sc_signal< uint32_t > mac_src_0_s5_26_O;
    sc_signal< uint32_t > mac_src_0_s5_27_O;
    sc_signal< uint32_t > mac_src_0_s5_28_O;
    sc_signal< uint32_t > mac_src_0_s5_29_O;
    sc_signal< uint32_t > mac_src_0_s5_30_O;
    sc_signal< uint32_t > mac_src_0_s5_31_O;
    sc_signal< uint32_t > mac_src_0_s6_0_O;
    sc_signal< uint32_t > mac_src_0_s6_1_O;
    sc_signal< uint32_t > mac_src_0_s6_2_O;
    sc_signal< uint32_t > mac_src_0_s6_3_O;
    sc_signal< uint32_t > mac_src_0_s6_4_O;
    sc_signal< uint32_t > mac_src_0_s6_5_O;
    sc_signal< uint32_t > mac_src_0_s6_6_O;
    sc_signal< uint32_t > mac_src_0_s6_7_O;
    sc_signal< uint32_t > mac_src_0_s6_8_O;
    sc_signal< uint32_t > mac_src_0_s6_9_O;
    sc_signal< uint32_t > mac_src_0_s6_10_O;
    sc_signal< uint32_t > mac_src_0_s6_11_O;
    sc_signal< uint32_t > mac_src_0_s6_12_O;
    sc_signal< uint32_t > mac_src_0_s6_13_O;
    sc_signal< uint32_t > mac_src_0_s6_14_O;
    sc_signal< uint32_t > mac_src_0_s6_15_O;
    sc_signal< uint32_t > mac_src_0_s6_16_O;
    sc_signal< uint32_t > mac_src_0_s6_17_O;
    sc_signal< uint32_t > mac_src_0_s6_18_O;
    sc_signal< uint32_t > mac_src_0_s6_19_O;
    sc_signal< uint32_t > mac_src_0_s6_20_O;
    sc_signal< uint32_t > mac_src_0_s6_21_O;
    sc_signal< uint32_t > mac_src_0_s6_22_O;
    sc_signal< uint32_t > mac_src_0_s6_23_O;
    sc_signal< uint32_t > mac_src_0_s6_24_O;
    sc_signal< uint32_t > mac_src_0_s6_25_O;
    sc_signal< uint32_t > mac_src_0_s6_26_O;
    sc_signal< uint32_t > mac_src_0_s6_27_O;
    sc_signal< uint32_t > mac_src_0_s6_28_O;
    sc_signal< uint32_t > mac_src_0_s6_29_O;
    sc_signal< uint32_t > mac_src_0_s6_30_O;
    sc_signal< uint32_t > mac_src_0_s6_31_O;
    sc_signal< uint32_t > mac_src_1_0_O;
    sc_signal< uint32_t > mac_src_1_1_O;
    sc_signal< uint32_t > mac_src_1_2_O;
    sc_signal< uint32_t > mac_src_1_3_O;
    sc_signal< uint32_t > mac_src_1_4_O;
    sc_signal< uint32_t > mac_src_1_5_O;
    sc_signal< uint32_t > mac_src_1_6_O;
    sc_signal< uint32_t > mac_src_1_7_O;
    sc_signal< uint32_t > mac_src_1_8_O;
    sc_signal< uint32_t > mac_src_1_9_O;
    sc_signal< uint32_t > mac_src_1_10_O;
    sc_signal< uint32_t > mac_src_1_11_O;
    sc_signal< uint32_t > mac_src_1_12_O;
    sc_signal< uint32_t > mac_src_1_13_O;
    sc_signal< uint32_t > mac_src_1_14_O;
    sc_signal< uint32_t > mac_src_1_15_O;
    sc_signal< uint32_t > mac_src_1_16_O;
    sc_signal< uint32_t > mac_src_1_17_O;
    sc_signal< uint32_t > mac_src_1_18_O;
    sc_signal< uint32_t > mac_src_1_19_O;
    sc_signal< uint32_t > mac_src_1_20_O;
    sc_signal< uint32_t > mac_src_1_21_O;
    sc_signal< uint32_t > mac_src_1_22_O;
    sc_signal< uint32_t > mac_src_1_23_O;
    sc_signal< uint32_t > mac_src_1_24_O;
    sc_signal< uint32_t > mac_src_1_25_O;
    sc_signal< uint32_t > mac_src_1_26_O;
    sc_signal< uint32_t > mac_src_1_27_O;
    sc_signal< uint32_t > mac_src_1_28_O;
    sc_signal< uint32_t > mac_src_1_29_O;
    sc_signal< uint32_t > mac_src_1_30_O;
    sc_signal< uint32_t > mac_src_1_31_O;


    // The following threads are used to do the type conversion.
    inline void thread_systolic_en_I() {
        systolic_en_I = (sc_uint<8>)systolic_en.read();
    };
    inline void thread_systolic_depth_I() {
        systolic_depth_I = (sc_uint<8>)systolic_depth.read();
    };
    inline void thread_systolic_sel_I() {
        systolic_sel_I = (sc_uint<8>)systolic_sel.read();
    };
    inline void thread_feature_data_I() {
        feature_data_I = feature_data.read();
    };
    inline void thread_feature_data_sel_I() {
        feature_data_sel_I = (sc_uint<16>)feature_data_sel.read();
    };
    inline void thread_weight_data_I() {
        weight_data_I = weight_data.read();
    };
    inline void thread_mac_src_0_s0_0_O() {
        mac_src_0_s0_0 = mac_src_0_s0_0_O.read();
    };
    inline void thread_mac_src_0_s0_1_O() {
        mac_src_0_s0_1 = mac_src_0_s0_1_O.read();
    };
    inline void thread_mac_src_0_s0_2_O() {
        mac_src_0_s0_2 = mac_src_0_s0_2_O.read();
    };
    inline void thread_mac_src_0_s0_3_O() {
        mac_src_0_s0_3 = mac_src_0_s0_3_O.read();
    };
    inline void thread_mac_src_0_s0_4_O() {
        mac_src_0_s0_4 = mac_src_0_s0_4_O.read();
    };
    inline void thread_mac_src_0_s0_5_O() {
        mac_src_0_s0_5 = mac_src_0_s0_5_O.read();
    };
    inline void thread_mac_src_0_s0_6_O() {
        mac_src_0_s0_6 = mac_src_0_s0_6_O.read();
    };
    inline void thread_mac_src_0_s0_7_O() {
        mac_src_0_s0_7 = mac_src_0_s0_7_O.read();
    };
    inline void thread_mac_src_0_s0_8_O() {
        mac_src_0_s0_8 = mac_src_0_s0_8_O.read();
    };
    inline void thread_mac_src_0_s0_9_O() {
        mac_src_0_s0_9 = mac_src_0_s0_9_O.read();
    };
    inline void thread_mac_src_0_s0_10_O() {
        mac_src_0_s0_10 = mac_src_0_s0_10_O.read();
    };
    inline void thread_mac_src_0_s0_11_O() {
        mac_src_0_s0_11 = mac_src_0_s0_11_O.read();
    };
    inline void thread_mac_src_0_s0_12_O() {
        mac_src_0_s0_12 = mac_src_0_s0_12_O.read();
    };
    inline void thread_mac_src_0_s0_13_O() {
        mac_src_0_s0_13 = mac_src_0_s0_13_O.read();
    };
    inline void thread_mac_src_0_s0_14_O() {
        mac_src_0_s0_14 = mac_src_0_s0_14_O.read();
    };
    inline void thread_mac_src_0_s0_15_O() {
        mac_src_0_s0_15 = mac_src_0_s0_15_O.read();
    };
    inline void thread_mac_src_0_s0_16_O() {
        mac_src_0_s0_16 = mac_src_0_s0_16_O.read();
    };
    inline void thread_mac_src_0_s0_17_O() {
        mac_src_0_s0_17 = mac_src_0_s0_17_O.read();
    };
    inline void thread_mac_src_0_s0_18_O() {
        mac_src_0_s0_18 = mac_src_0_s0_18_O.read();
    };
    inline void thread_mac_src_0_s0_19_O() {
        mac_src_0_s0_19 = mac_src_0_s0_19_O.read();
    };
    inline void thread_mac_src_0_s0_20_O() {
        mac_src_0_s0_20 = mac_src_0_s0_20_O.read();
    };
    inline void thread_mac_src_0_s0_21_O() {
        mac_src_0_s0_21 = mac_src_0_s0_21_O.read();
    };
    inline void thread_mac_src_0_s0_22_O() {
        mac_src_0_s0_22 = mac_src_0_s0_22_O.read();
    };
    inline void thread_mac_src_0_s0_23_O() {
        mac_src_0_s0_23 = mac_src_0_s0_23_O.read();
    };
    inline void thread_mac_src_0_s0_24_O() {
        mac_src_0_s0_24 = mac_src_0_s0_24_O.read();
    };
    inline void thread_mac_src_0_s0_25_O() {
        mac_src_0_s0_25 = mac_src_0_s0_25_O.read();
    };
    inline void thread_mac_src_0_s0_26_O() {
        mac_src_0_s0_26 = mac_src_0_s0_26_O.read();
    };
    inline void thread_mac_src_0_s0_27_O() {
        mac_src_0_s0_27 = mac_src_0_s0_27_O.read();
    };
    inline void thread_mac_src_0_s0_28_O() {
        mac_src_0_s0_28 = mac_src_0_s0_28_O.read();
    };
    inline void thread_mac_src_0_s0_29_O() {
        mac_src_0_s0_29 = mac_src_0_s0_29_O.read();
    };
    inline void thread_mac_src_0_s0_30_O() {
        mac_src_0_s0_30 = mac_src_0_s0_30_O.read();
    };
    inline void thread_mac_src_0_s0_31_O() {
        mac_src_0_s0_31 = mac_src_0_s0_31_O.read();
    };
    inline void thread_mac_src_0_s1_0_O() {
        mac_src_0_s1_0 = mac_src_0_s1_0_O.read();
    };
    inline void thread_mac_src_0_s1_1_O() {
        mac_src_0_s1_1 = mac_src_0_s1_1_O.read();
    };
    inline void thread_mac_src_0_s1_2_O() {
        mac_src_0_s1_2 = mac_src_0_s1_2_O.read();
    };
    inline void thread_mac_src_0_s1_3_O() {
        mac_src_0_s1_3 = mac_src_0_s1_3_O.read();
    };
    inline void thread_mac_src_0_s1_4_O() {
        mac_src_0_s1_4 = mac_src_0_s1_4_O.read();
    };
    inline void thread_mac_src_0_s1_5_O() {
        mac_src_0_s1_5 = mac_src_0_s1_5_O.read();
    };
    inline void thread_mac_src_0_s1_6_O() {
        mac_src_0_s1_6 = mac_src_0_s1_6_O.read();
    };
    inline void thread_mac_src_0_s1_7_O() {
        mac_src_0_s1_7 = mac_src_0_s1_7_O.read();
    };
    inline void thread_mac_src_0_s1_8_O() {
        mac_src_0_s1_8 = mac_src_0_s1_8_O.read();
    };
    inline void thread_mac_src_0_s1_9_O() {
        mac_src_0_s1_9 = mac_src_0_s1_9_O.read();
    };
    inline void thread_mac_src_0_s1_10_O() {
        mac_src_0_s1_10 = mac_src_0_s1_10_O.read();
    };
    inline void thread_mac_src_0_s1_11_O() {
        mac_src_0_s1_11 = mac_src_0_s1_11_O.read();
    };
    inline void thread_mac_src_0_s1_12_O() {
        mac_src_0_s1_12 = mac_src_0_s1_12_O.read();
    };
    inline void thread_mac_src_0_s1_13_O() {
        mac_src_0_s1_13 = mac_src_0_s1_13_O.read();
    };
    inline void thread_mac_src_0_s1_14_O() {
        mac_src_0_s1_14 = mac_src_0_s1_14_O.read();
    };
    inline void thread_mac_src_0_s1_15_O() {
        mac_src_0_s1_15 = mac_src_0_s1_15_O.read();
    };
    inline void thread_mac_src_0_s1_16_O() {
        mac_src_0_s1_16 = mac_src_0_s1_16_O.read();
    };
    inline void thread_mac_src_0_s1_17_O() {
        mac_src_0_s1_17 = mac_src_0_s1_17_O.read();
    };
    inline void thread_mac_src_0_s1_18_O() {
        mac_src_0_s1_18 = mac_src_0_s1_18_O.read();
    };
    inline void thread_mac_src_0_s1_19_O() {
        mac_src_0_s1_19 = mac_src_0_s1_19_O.read();
    };
    inline void thread_mac_src_0_s1_20_O() {
        mac_src_0_s1_20 = mac_src_0_s1_20_O.read();
    };
    inline void thread_mac_src_0_s1_21_O() {
        mac_src_0_s1_21 = mac_src_0_s1_21_O.read();
    };
    inline void thread_mac_src_0_s1_22_O() {
        mac_src_0_s1_22 = mac_src_0_s1_22_O.read();
    };
    inline void thread_mac_src_0_s1_23_O() {
        mac_src_0_s1_23 = mac_src_0_s1_23_O.read();
    };
    inline void thread_mac_src_0_s1_24_O() {
        mac_src_0_s1_24 = mac_src_0_s1_24_O.read();
    };
    inline void thread_mac_src_0_s1_25_O() {
        mac_src_0_s1_25 = mac_src_0_s1_25_O.read();
    };
    inline void thread_mac_src_0_s1_26_O() {
        mac_src_0_s1_26 = mac_src_0_s1_26_O.read();
    };
    inline void thread_mac_src_0_s1_27_O() {
        mac_src_0_s1_27 = mac_src_0_s1_27_O.read();
    };
    inline void thread_mac_src_0_s1_28_O() {
        mac_src_0_s1_28 = mac_src_0_s1_28_O.read();
    };
    inline void thread_mac_src_0_s1_29_O() {
        mac_src_0_s1_29 = mac_src_0_s1_29_O.read();
    };
    inline void thread_mac_src_0_s1_30_O() {
        mac_src_0_s1_30 = mac_src_0_s1_30_O.read();
    };
    inline void thread_mac_src_0_s1_31_O() {
        mac_src_0_s1_31 = mac_src_0_s1_31_O.read();
    };
    inline void thread_mac_src_0_s2_0_O() {
        mac_src_0_s2_0 = mac_src_0_s2_0_O.read();
    };
    inline void thread_mac_src_0_s2_1_O() {
        mac_src_0_s2_1 = mac_src_0_s2_1_O.read();
    };
    inline void thread_mac_src_0_s2_2_O() {
        mac_src_0_s2_2 = mac_src_0_s2_2_O.read();
    };
    inline void thread_mac_src_0_s2_3_O() {
        mac_src_0_s2_3 = mac_src_0_s2_3_O.read();
    };
    inline void thread_mac_src_0_s2_4_O() {
        mac_src_0_s2_4 = mac_src_0_s2_4_O.read();
    };
    inline void thread_mac_src_0_s2_5_O() {
        mac_src_0_s2_5 = mac_src_0_s2_5_O.read();
    };
    inline void thread_mac_src_0_s2_6_O() {
        mac_src_0_s2_6 = mac_src_0_s2_6_O.read();
    };
    inline void thread_mac_src_0_s2_7_O() {
        mac_src_0_s2_7 = mac_src_0_s2_7_O.read();
    };
    inline void thread_mac_src_0_s2_8_O() {
        mac_src_0_s2_8 = mac_src_0_s2_8_O.read();
    };
    inline void thread_mac_src_0_s2_9_O() {
        mac_src_0_s2_9 = mac_src_0_s2_9_O.read();
    };
    inline void thread_mac_src_0_s2_10_O() {
        mac_src_0_s2_10 = mac_src_0_s2_10_O.read();
    };
    inline void thread_mac_src_0_s2_11_O() {
        mac_src_0_s2_11 = mac_src_0_s2_11_O.read();
    };
    inline void thread_mac_src_0_s2_12_O() {
        mac_src_0_s2_12 = mac_src_0_s2_12_O.read();
    };
    inline void thread_mac_src_0_s2_13_O() {
        mac_src_0_s2_13 = mac_src_0_s2_13_O.read();
    };
    inline void thread_mac_src_0_s2_14_O() {
        mac_src_0_s2_14 = mac_src_0_s2_14_O.read();
    };
    inline void thread_mac_src_0_s2_15_O() {
        mac_src_0_s2_15 = mac_src_0_s2_15_O.read();
    };
    inline void thread_mac_src_0_s2_16_O() {
        mac_src_0_s2_16 = mac_src_0_s2_16_O.read();
    };
    inline void thread_mac_src_0_s2_17_O() {
        mac_src_0_s2_17 = mac_src_0_s2_17_O.read();
    };
    inline void thread_mac_src_0_s2_18_O() {
        mac_src_0_s2_18 = mac_src_0_s2_18_O.read();
    };
    inline void thread_mac_src_0_s2_19_O() {
        mac_src_0_s2_19 = mac_src_0_s2_19_O.read();
    };
    inline void thread_mac_src_0_s2_20_O() {
        mac_src_0_s2_20 = mac_src_0_s2_20_O.read();
    };
    inline void thread_mac_src_0_s2_21_O() {
        mac_src_0_s2_21 = mac_src_0_s2_21_O.read();
    };
    inline void thread_mac_src_0_s2_22_O() {
        mac_src_0_s2_22 = mac_src_0_s2_22_O.read();
    };
    inline void thread_mac_src_0_s2_23_O() {
        mac_src_0_s2_23 = mac_src_0_s2_23_O.read();
    };
    inline void thread_mac_src_0_s2_24_O() {
        mac_src_0_s2_24 = mac_src_0_s2_24_O.read();
    };
    inline void thread_mac_src_0_s2_25_O() {
        mac_src_0_s2_25 = mac_src_0_s2_25_O.read();
    };
    inline void thread_mac_src_0_s2_26_O() {
        mac_src_0_s2_26 = mac_src_0_s2_26_O.read();
    };
    inline void thread_mac_src_0_s2_27_O() {
        mac_src_0_s2_27 = mac_src_0_s2_27_O.read();
    };
    inline void thread_mac_src_0_s2_28_O() {
        mac_src_0_s2_28 = mac_src_0_s2_28_O.read();
    };
    inline void thread_mac_src_0_s2_29_O() {
        mac_src_0_s2_29 = mac_src_0_s2_29_O.read();
    };
    inline void thread_mac_src_0_s2_30_O() {
        mac_src_0_s2_30 = mac_src_0_s2_30_O.read();
    };
    inline void thread_mac_src_0_s2_31_O() {
        mac_src_0_s2_31 = mac_src_0_s2_31_O.read();
    };
    inline void thread_mac_src_0_s3_0_O() {
        mac_src_0_s3_0 = mac_src_0_s3_0_O.read();
    };
    inline void thread_mac_src_0_s3_1_O() {
        mac_src_0_s3_1 = mac_src_0_s3_1_O.read();
    };
    inline void thread_mac_src_0_s3_2_O() {
        mac_src_0_s3_2 = mac_src_0_s3_2_O.read();
    };
    inline void thread_mac_src_0_s3_3_O() {
        mac_src_0_s3_3 = mac_src_0_s3_3_O.read();
    };
    inline void thread_mac_src_0_s3_4_O() {
        mac_src_0_s3_4 = mac_src_0_s3_4_O.read();
    };
    inline void thread_mac_src_0_s3_5_O() {
        mac_src_0_s3_5 = mac_src_0_s3_5_O.read();
    };
    inline void thread_mac_src_0_s3_6_O() {
        mac_src_0_s3_6 = mac_src_0_s3_6_O.read();
    };
    inline void thread_mac_src_0_s3_7_O() {
        mac_src_0_s3_7 = mac_src_0_s3_7_O.read();
    };
    inline void thread_mac_src_0_s3_8_O() {
        mac_src_0_s3_8 = mac_src_0_s3_8_O.read();
    };
    inline void thread_mac_src_0_s3_9_O() {
        mac_src_0_s3_9 = mac_src_0_s3_9_O.read();
    };
    inline void thread_mac_src_0_s3_10_O() {
        mac_src_0_s3_10 = mac_src_0_s3_10_O.read();
    };
    inline void thread_mac_src_0_s3_11_O() {
        mac_src_0_s3_11 = mac_src_0_s3_11_O.read();
    };
    inline void thread_mac_src_0_s3_12_O() {
        mac_src_0_s3_12 = mac_src_0_s3_12_O.read();
    };
    inline void thread_mac_src_0_s3_13_O() {
        mac_src_0_s3_13 = mac_src_0_s3_13_O.read();
    };
    inline void thread_mac_src_0_s3_14_O() {
        mac_src_0_s3_14 = mac_src_0_s3_14_O.read();
    };
    inline void thread_mac_src_0_s3_15_O() {
        mac_src_0_s3_15 = mac_src_0_s3_15_O.read();
    };
    inline void thread_mac_src_0_s3_16_O() {
        mac_src_0_s3_16 = mac_src_0_s3_16_O.read();
    };
    inline void thread_mac_src_0_s3_17_O() {
        mac_src_0_s3_17 = mac_src_0_s3_17_O.read();
    };
    inline void thread_mac_src_0_s3_18_O() {
        mac_src_0_s3_18 = mac_src_0_s3_18_O.read();
    };
    inline void thread_mac_src_0_s3_19_O() {
        mac_src_0_s3_19 = mac_src_0_s3_19_O.read();
    };
    inline void thread_mac_src_0_s3_20_O() {
        mac_src_0_s3_20 = mac_src_0_s3_20_O.read();
    };
    inline void thread_mac_src_0_s3_21_O() {
        mac_src_0_s3_21 = mac_src_0_s3_21_O.read();
    };
    inline void thread_mac_src_0_s3_22_O() {
        mac_src_0_s3_22 = mac_src_0_s3_22_O.read();
    };
    inline void thread_mac_src_0_s3_23_O() {
        mac_src_0_s3_23 = mac_src_0_s3_23_O.read();
    };
    inline void thread_mac_src_0_s3_24_O() {
        mac_src_0_s3_24 = mac_src_0_s3_24_O.read();
    };
    inline void thread_mac_src_0_s3_25_O() {
        mac_src_0_s3_25 = mac_src_0_s3_25_O.read();
    };
    inline void thread_mac_src_0_s3_26_O() {
        mac_src_0_s3_26 = mac_src_0_s3_26_O.read();
    };
    inline void thread_mac_src_0_s3_27_O() {
        mac_src_0_s3_27 = mac_src_0_s3_27_O.read();
    };
    inline void thread_mac_src_0_s3_28_O() {
        mac_src_0_s3_28 = mac_src_0_s3_28_O.read();
    };
    inline void thread_mac_src_0_s3_29_O() {
        mac_src_0_s3_29 = mac_src_0_s3_29_O.read();
    };
    inline void thread_mac_src_0_s3_30_O() {
        mac_src_0_s3_30 = mac_src_0_s3_30_O.read();
    };
    inline void thread_mac_src_0_s3_31_O() {
        mac_src_0_s3_31 = mac_src_0_s3_31_O.read();
    };
    inline void thread_mac_src_0_s4_0_O() {
        mac_src_0_s4_0 = mac_src_0_s4_0_O.read();
    };
    inline void thread_mac_src_0_s4_1_O() {
        mac_src_0_s4_1 = mac_src_0_s4_1_O.read();
    };
    inline void thread_mac_src_0_s4_2_O() {
        mac_src_0_s4_2 = mac_src_0_s4_2_O.read();
    };
    inline void thread_mac_src_0_s4_3_O() {
        mac_src_0_s4_3 = mac_src_0_s4_3_O.read();
    };
    inline void thread_mac_src_0_s4_4_O() {
        mac_src_0_s4_4 = mac_src_0_s4_4_O.read();
    };
    inline void thread_mac_src_0_s4_5_O() {
        mac_src_0_s4_5 = mac_src_0_s4_5_O.read();
    };
    inline void thread_mac_src_0_s4_6_O() {
        mac_src_0_s4_6 = mac_src_0_s4_6_O.read();
    };
    inline void thread_mac_src_0_s4_7_O() {
        mac_src_0_s4_7 = mac_src_0_s4_7_O.read();
    };
    inline void thread_mac_src_0_s4_8_O() {
        mac_src_0_s4_8 = mac_src_0_s4_8_O.read();
    };
    inline void thread_mac_src_0_s4_9_O() {
        mac_src_0_s4_9 = mac_src_0_s4_9_O.read();
    };
    inline void thread_mac_src_0_s4_10_O() {
        mac_src_0_s4_10 = mac_src_0_s4_10_O.read();
    };
    inline void thread_mac_src_0_s4_11_O() {
        mac_src_0_s4_11 = mac_src_0_s4_11_O.read();
    };
    inline void thread_mac_src_0_s4_12_O() {
        mac_src_0_s4_12 = mac_src_0_s4_12_O.read();
    };
    inline void thread_mac_src_0_s4_13_O() {
        mac_src_0_s4_13 = mac_src_0_s4_13_O.read();
    };
    inline void thread_mac_src_0_s4_14_O() {
        mac_src_0_s4_14 = mac_src_0_s4_14_O.read();
    };
    inline void thread_mac_src_0_s4_15_O() {
        mac_src_0_s4_15 = mac_src_0_s4_15_O.read();
    };
    inline void thread_mac_src_0_s4_16_O() {
        mac_src_0_s4_16 = mac_src_0_s4_16_O.read();
    };
    inline void thread_mac_src_0_s4_17_O() {
        mac_src_0_s4_17 = mac_src_0_s4_17_O.read();
    };
    inline void thread_mac_src_0_s4_18_O() {
        mac_src_0_s4_18 = mac_src_0_s4_18_O.read();
    };
    inline void thread_mac_src_0_s4_19_O() {
        mac_src_0_s4_19 = mac_src_0_s4_19_O.read();
    };
    inline void thread_mac_src_0_s4_20_O() {
        mac_src_0_s4_20 = mac_src_0_s4_20_O.read();
    };
    inline void thread_mac_src_0_s4_21_O() {
        mac_src_0_s4_21 = mac_src_0_s4_21_O.read();
    };
    inline void thread_mac_src_0_s4_22_O() {
        mac_src_0_s4_22 = mac_src_0_s4_22_O.read();
    };
    inline void thread_mac_src_0_s4_23_O() {
        mac_src_0_s4_23 = mac_src_0_s4_23_O.read();
    };
    inline void thread_mac_src_0_s4_24_O() {
        mac_src_0_s4_24 = mac_src_0_s4_24_O.read();
    };
    inline void thread_mac_src_0_s4_25_O() {
        mac_src_0_s4_25 = mac_src_0_s4_25_O.read();
    };
    inline void thread_mac_src_0_s4_26_O() {
        mac_src_0_s4_26 = mac_src_0_s4_26_O.read();
    };
    inline void thread_mac_src_0_s4_27_O() {
        mac_src_0_s4_27 = mac_src_0_s4_27_O.read();
    };
    inline void thread_mac_src_0_s4_28_O() {
        mac_src_0_s4_28 = mac_src_0_s4_28_O.read();
    };
    inline void thread_mac_src_0_s4_29_O() {
        mac_src_0_s4_29 = mac_src_0_s4_29_O.read();
    };
    inline void thread_mac_src_0_s4_30_O() {
        mac_src_0_s4_30 = mac_src_0_s4_30_O.read();
    };
    inline void thread_mac_src_0_s4_31_O() {
        mac_src_0_s4_31 = mac_src_0_s4_31_O.read();
    };
    inline void thread_mac_src_0_s5_0_O() {
        mac_src_0_s5_0 = mac_src_0_s5_0_O.read();
    };
    inline void thread_mac_src_0_s5_1_O() {
        mac_src_0_s5_1 = mac_src_0_s5_1_O.read();
    };
    inline void thread_mac_src_0_s5_2_O() {
        mac_src_0_s5_2 = mac_src_0_s5_2_O.read();
    };
    inline void thread_mac_src_0_s5_3_O() {
        mac_src_0_s5_3 = mac_src_0_s5_3_O.read();
    };
    inline void thread_mac_src_0_s5_4_O() {
        mac_src_0_s5_4 = mac_src_0_s5_4_O.read();
    };
    inline void thread_mac_src_0_s5_5_O() {
        mac_src_0_s5_5 = mac_src_0_s5_5_O.read();
    };
    inline void thread_mac_src_0_s5_6_O() {
        mac_src_0_s5_6 = mac_src_0_s5_6_O.read();
    };
    inline void thread_mac_src_0_s5_7_O() {
        mac_src_0_s5_7 = mac_src_0_s5_7_O.read();
    };
    inline void thread_mac_src_0_s5_8_O() {
        mac_src_0_s5_8 = mac_src_0_s5_8_O.read();
    };
    inline void thread_mac_src_0_s5_9_O() {
        mac_src_0_s5_9 = mac_src_0_s5_9_O.read();
    };
    inline void thread_mac_src_0_s5_10_O() {
        mac_src_0_s5_10 = mac_src_0_s5_10_O.read();
    };
    inline void thread_mac_src_0_s5_11_O() {
        mac_src_0_s5_11 = mac_src_0_s5_11_O.read();
    };
    inline void thread_mac_src_0_s5_12_O() {
        mac_src_0_s5_12 = mac_src_0_s5_12_O.read();
    };
    inline void thread_mac_src_0_s5_13_O() {
        mac_src_0_s5_13 = mac_src_0_s5_13_O.read();
    };
    inline void thread_mac_src_0_s5_14_O() {
        mac_src_0_s5_14 = mac_src_0_s5_14_O.read();
    };
    inline void thread_mac_src_0_s5_15_O() {
        mac_src_0_s5_15 = mac_src_0_s5_15_O.read();
    };
    inline void thread_mac_src_0_s5_16_O() {
        mac_src_0_s5_16 = mac_src_0_s5_16_O.read();
    };
    inline void thread_mac_src_0_s5_17_O() {
        mac_src_0_s5_17 = mac_src_0_s5_17_O.read();
    };
    inline void thread_mac_src_0_s5_18_O() {
        mac_src_0_s5_18 = mac_src_0_s5_18_O.read();
    };
    inline void thread_mac_src_0_s5_19_O() {
        mac_src_0_s5_19 = mac_src_0_s5_19_O.read();
    };
    inline void thread_mac_src_0_s5_20_O() {
        mac_src_0_s5_20 = mac_src_0_s5_20_O.read();
    };
    inline void thread_mac_src_0_s5_21_O() {
        mac_src_0_s5_21 = mac_src_0_s5_21_O.read();
    };
    inline void thread_mac_src_0_s5_22_O() {
        mac_src_0_s5_22 = mac_src_0_s5_22_O.read();
    };
    inline void thread_mac_src_0_s5_23_O() {
        mac_src_0_s5_23 = mac_src_0_s5_23_O.read();
    };
    inline void thread_mac_src_0_s5_24_O() {
        mac_src_0_s5_24 = mac_src_0_s5_24_O.read();
    };
    inline void thread_mac_src_0_s5_25_O() {
        mac_src_0_s5_25 = mac_src_0_s5_25_O.read();
    };
    inline void thread_mac_src_0_s5_26_O() {
        mac_src_0_s5_26 = mac_src_0_s5_26_O.read();
    };
    inline void thread_mac_src_0_s5_27_O() {
        mac_src_0_s5_27 = mac_src_0_s5_27_O.read();
    };
    inline void thread_mac_src_0_s5_28_O() {
        mac_src_0_s5_28 = mac_src_0_s5_28_O.read();
    };
    inline void thread_mac_src_0_s5_29_O() {
        mac_src_0_s5_29 = mac_src_0_s5_29_O.read();
    };
    inline void thread_mac_src_0_s5_30_O() {
        mac_src_0_s5_30 = mac_src_0_s5_30_O.read();
    };
    inline void thread_mac_src_0_s5_31_O() {
        mac_src_0_s5_31 = mac_src_0_s5_31_O.read();
    };
    inline void thread_mac_src_0_s6_0_O() {
        mac_src_0_s6_0 = mac_src_0_s6_0_O.read();
    };
    inline void thread_mac_src_0_s6_1_O() {
        mac_src_0_s6_1 = mac_src_0_s6_1_O.read();
    };
    inline void thread_mac_src_0_s6_2_O() {
        mac_src_0_s6_2 = mac_src_0_s6_2_O.read();
    };
    inline void thread_mac_src_0_s6_3_O() {
        mac_src_0_s6_3 = mac_src_0_s6_3_O.read();
    };
    inline void thread_mac_src_0_s6_4_O() {
        mac_src_0_s6_4 = mac_src_0_s6_4_O.read();
    };
    inline void thread_mac_src_0_s6_5_O() {
        mac_src_0_s6_5 = mac_src_0_s6_5_O.read();
    };
    inline void thread_mac_src_0_s6_6_O() {
        mac_src_0_s6_6 = mac_src_0_s6_6_O.read();
    };
    inline void thread_mac_src_0_s6_7_O() {
        mac_src_0_s6_7 = mac_src_0_s6_7_O.read();
    };
    inline void thread_mac_src_0_s6_8_O() {
        mac_src_0_s6_8 = mac_src_0_s6_8_O.read();
    };
    inline void thread_mac_src_0_s6_9_O() {
        mac_src_0_s6_9 = mac_src_0_s6_9_O.read();
    };
    inline void thread_mac_src_0_s6_10_O() {
        mac_src_0_s6_10 = mac_src_0_s6_10_O.read();
    };
    inline void thread_mac_src_0_s6_11_O() {
        mac_src_0_s6_11 = mac_src_0_s6_11_O.read();
    };
    inline void thread_mac_src_0_s6_12_O() {
        mac_src_0_s6_12 = mac_src_0_s6_12_O.read();
    };
    inline void thread_mac_src_0_s6_13_O() {
        mac_src_0_s6_13 = mac_src_0_s6_13_O.read();
    };
    inline void thread_mac_src_0_s6_14_O() {
        mac_src_0_s6_14 = mac_src_0_s6_14_O.read();
    };
    inline void thread_mac_src_0_s6_15_O() {
        mac_src_0_s6_15 = mac_src_0_s6_15_O.read();
    };
    inline void thread_mac_src_0_s6_16_O() {
        mac_src_0_s6_16 = mac_src_0_s6_16_O.read();
    };
    inline void thread_mac_src_0_s6_17_O() {
        mac_src_0_s6_17 = mac_src_0_s6_17_O.read();
    };
    inline void thread_mac_src_0_s6_18_O() {
        mac_src_0_s6_18 = mac_src_0_s6_18_O.read();
    };
    inline void thread_mac_src_0_s6_19_O() {
        mac_src_0_s6_19 = mac_src_0_s6_19_O.read();
    };
    inline void thread_mac_src_0_s6_20_O() {
        mac_src_0_s6_20 = mac_src_0_s6_20_O.read();
    };
    inline void thread_mac_src_0_s6_21_O() {
        mac_src_0_s6_21 = mac_src_0_s6_21_O.read();
    };
    inline void thread_mac_src_0_s6_22_O() {
        mac_src_0_s6_22 = mac_src_0_s6_22_O.read();
    };
    inline void thread_mac_src_0_s6_23_O() {
        mac_src_0_s6_23 = mac_src_0_s6_23_O.read();
    };
    inline void thread_mac_src_0_s6_24_O() {
        mac_src_0_s6_24 = mac_src_0_s6_24_O.read();
    };
    inline void thread_mac_src_0_s6_25_O() {
        mac_src_0_s6_25 = mac_src_0_s6_25_O.read();
    };
    inline void thread_mac_src_0_s6_26_O() {
        mac_src_0_s6_26 = mac_src_0_s6_26_O.read();
    };
    inline void thread_mac_src_0_s6_27_O() {
        mac_src_0_s6_27 = mac_src_0_s6_27_O.read();
    };
    inline void thread_mac_src_0_s6_28_O() {
        mac_src_0_s6_28 = mac_src_0_s6_28_O.read();
    };
    inline void thread_mac_src_0_s6_29_O() {
        mac_src_0_s6_29 = mac_src_0_s6_29_O.read();
    };
    inline void thread_mac_src_0_s6_30_O() {
        mac_src_0_s6_30 = mac_src_0_s6_30_O.read();
    };
    inline void thread_mac_src_0_s6_31_O() {
        mac_src_0_s6_31 = mac_src_0_s6_31_O.read();
    };
    inline void thread_mac_src_1_0_O() {
        mac_src_1_0 = mac_src_1_0_O.read();
    };
    inline void thread_mac_src_1_1_O() {
        mac_src_1_1 = mac_src_1_1_O.read();
    };
    inline void thread_mac_src_1_2_O() {
        mac_src_1_2 = mac_src_1_2_O.read();
    };
    inline void thread_mac_src_1_3_O() {
        mac_src_1_3 = mac_src_1_3_O.read();
    };
    inline void thread_mac_src_1_4_O() {
        mac_src_1_4 = mac_src_1_4_O.read();
    };
    inline void thread_mac_src_1_5_O() {
        mac_src_1_5 = mac_src_1_5_O.read();
    };
    inline void thread_mac_src_1_6_O() {
        mac_src_1_6 = mac_src_1_6_O.read();
    };
    inline void thread_mac_src_1_7_O() {
        mac_src_1_7 = mac_src_1_7_O.read();
    };
    inline void thread_mac_src_1_8_O() {
        mac_src_1_8 = mac_src_1_8_O.read();
    };
    inline void thread_mac_src_1_9_O() {
        mac_src_1_9 = mac_src_1_9_O.read();
    };
    inline void thread_mac_src_1_10_O() {
        mac_src_1_10 = mac_src_1_10_O.read();
    };
    inline void thread_mac_src_1_11_O() {
        mac_src_1_11 = mac_src_1_11_O.read();
    };
    inline void thread_mac_src_1_12_O() {
        mac_src_1_12 = mac_src_1_12_O.read();
    };
    inline void thread_mac_src_1_13_O() {
        mac_src_1_13 = mac_src_1_13_O.read();
    };
    inline void thread_mac_src_1_14_O() {
        mac_src_1_14 = mac_src_1_14_O.read();
    };
    inline void thread_mac_src_1_15_O() {
        mac_src_1_15 = mac_src_1_15_O.read();
    };
    inline void thread_mac_src_1_16_O() {
        mac_src_1_16 = mac_src_1_16_O.read();
    };
    inline void thread_mac_src_1_17_O() {
        mac_src_1_17 = mac_src_1_17_O.read();
    };
    inline void thread_mac_src_1_18_O() {
        mac_src_1_18 = mac_src_1_18_O.read();
    };
    inline void thread_mac_src_1_19_O() {
        mac_src_1_19 = mac_src_1_19_O.read();
    };
    inline void thread_mac_src_1_20_O() {
        mac_src_1_20 = mac_src_1_20_O.read();
    };
    inline void thread_mac_src_1_21_O() {
        mac_src_1_21 = mac_src_1_21_O.read();
    };
    inline void thread_mac_src_1_22_O() {
        mac_src_1_22 = mac_src_1_22_O.read();
    };
    inline void thread_mac_src_1_23_O() {
        mac_src_1_23 = mac_src_1_23_O.read();
    };
    inline void thread_mac_src_1_24_O() {
        mac_src_1_24 = mac_src_1_24_O.read();
    };
    inline void thread_mac_src_1_25_O() {
        mac_src_1_25 = mac_src_1_25_O.read();
    };
    inline void thread_mac_src_1_26_O() {
        mac_src_1_26 = mac_src_1_26_O.read();
    };
    inline void thread_mac_src_1_27_O() {
        mac_src_1_27 = mac_src_1_27_O.read();
    };
    inline void thread_mac_src_1_28_O() {
        mac_src_1_28 = mac_src_1_28_O.read();
    };
    inline void thread_mac_src_1_29_O() {
        mac_src_1_29 = mac_src_1_29_O.read();
    };
    inline void thread_mac_src_1_30_O() {
        mac_src_1_30 = mac_src_1_30_O.read();
    };
    inline void thread_mac_src_1_31_O() {
        mac_src_1_31 = mac_src_1_31_O.read();
    };


    SC_HAS_PROCESS(cache_cycsimV);

public:

    cache_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" cache") ) )
        : cache_cycsim(in_name)
    {
        // instantiate the verilated module
        cache_cyc0 = new Vcache_rtl( "Vcache" );
        // generate port connections
        cache_cyc0->clk(clk);
        cache_cyc0->rstn(rstn);
        cache_cyc0->cache_en(cache_en);
        cache_cyc0->systolic_en(systolic_en_I);
        cache_cyc0->systolic_depth(systolic_depth_I);
        cache_cyc0->addr_if_start(addr_if_start);
        cache_cyc0->systolic_sel(systolic_sel_I);
        cache_cyc0->feature_data(feature_data_I);
        cache_cyc0->feature_share_en(feature_share_en);
        cache_cyc0->feature_data_en(feature_data_en);
        cache_cyc0->feature_data_sel(feature_data_sel_I);
        cache_cyc0->weight_data(weight_data_I);
        cache_cyc0->weight_data_en(weight_data_en);
        cache_cyc0->mac_src_0_s0_0(mac_src_0_s0_0_O);
        cache_cyc0->mac_src_0_s0_1(mac_src_0_s0_1_O);
        cache_cyc0->mac_src_0_s0_2(mac_src_0_s0_2_O);
        cache_cyc0->mac_src_0_s0_3(mac_src_0_s0_3_O);
        cache_cyc0->mac_src_0_s0_4(mac_src_0_s0_4_O);
        cache_cyc0->mac_src_0_s0_5(mac_src_0_s0_5_O);
        cache_cyc0->mac_src_0_s0_6(mac_src_0_s0_6_O);
        cache_cyc0->mac_src_0_s0_7(mac_src_0_s0_7_O);
        cache_cyc0->mac_src_0_s0_8(mac_src_0_s0_8_O);
        cache_cyc0->mac_src_0_s0_9(mac_src_0_s0_9_O);
        cache_cyc0->mac_src_0_s0_10(mac_src_0_s0_10_O);
        cache_cyc0->mac_src_0_s0_11(mac_src_0_s0_11_O);
        cache_cyc0->mac_src_0_s0_12(mac_src_0_s0_12_O);
        cache_cyc0->mac_src_0_s0_13(mac_src_0_s0_13_O);
        cache_cyc0->mac_src_0_s0_14(mac_src_0_s0_14_O);
        cache_cyc0->mac_src_0_s0_15(mac_src_0_s0_15_O);
        cache_cyc0->mac_src_0_s0_16(mac_src_0_s0_16_O);
        cache_cyc0->mac_src_0_s0_17(mac_src_0_s0_17_O);
        cache_cyc0->mac_src_0_s0_18(mac_src_0_s0_18_O);
        cache_cyc0->mac_src_0_s0_19(mac_src_0_s0_19_O);
        cache_cyc0->mac_src_0_s0_20(mac_src_0_s0_20_O);
        cache_cyc0->mac_src_0_s0_21(mac_src_0_s0_21_O);
        cache_cyc0->mac_src_0_s0_22(mac_src_0_s0_22_O);
        cache_cyc0->mac_src_0_s0_23(mac_src_0_s0_23_O);
        cache_cyc0->mac_src_0_s0_24(mac_src_0_s0_24_O);
        cache_cyc0->mac_src_0_s0_25(mac_src_0_s0_25_O);
        cache_cyc0->mac_src_0_s0_26(mac_src_0_s0_26_O);
        cache_cyc0->mac_src_0_s0_27(mac_src_0_s0_27_O);
        cache_cyc0->mac_src_0_s0_28(mac_src_0_s0_28_O);
        cache_cyc0->mac_src_0_s0_29(mac_src_0_s0_29_O);
        cache_cyc0->mac_src_0_s0_30(mac_src_0_s0_30_O);
        cache_cyc0->mac_src_0_s0_31(mac_src_0_s0_31_O);
        cache_cyc0->mac_src_0_s1_0(mac_src_0_s1_0_O);
        cache_cyc0->mac_src_0_s1_1(mac_src_0_s1_1_O);
        cache_cyc0->mac_src_0_s1_2(mac_src_0_s1_2_O);
        cache_cyc0->mac_src_0_s1_3(mac_src_0_s1_3_O);
        cache_cyc0->mac_src_0_s1_4(mac_src_0_s1_4_O);
        cache_cyc0->mac_src_0_s1_5(mac_src_0_s1_5_O);
        cache_cyc0->mac_src_0_s1_6(mac_src_0_s1_6_O);
        cache_cyc0->mac_src_0_s1_7(mac_src_0_s1_7_O);
        cache_cyc0->mac_src_0_s1_8(mac_src_0_s1_8_O);
        cache_cyc0->mac_src_0_s1_9(mac_src_0_s1_9_O);
        cache_cyc0->mac_src_0_s1_10(mac_src_0_s1_10_O);
        cache_cyc0->mac_src_0_s1_11(mac_src_0_s1_11_O);
        cache_cyc0->mac_src_0_s1_12(mac_src_0_s1_12_O);
        cache_cyc0->mac_src_0_s1_13(mac_src_0_s1_13_O);
        cache_cyc0->mac_src_0_s1_14(mac_src_0_s1_14_O);
        cache_cyc0->mac_src_0_s1_15(mac_src_0_s1_15_O);
        cache_cyc0->mac_src_0_s1_16(mac_src_0_s1_16_O);
        cache_cyc0->mac_src_0_s1_17(mac_src_0_s1_17_O);
        cache_cyc0->mac_src_0_s1_18(mac_src_0_s1_18_O);
        cache_cyc0->mac_src_0_s1_19(mac_src_0_s1_19_O);
        cache_cyc0->mac_src_0_s1_20(mac_src_0_s1_20_O);
        cache_cyc0->mac_src_0_s1_21(mac_src_0_s1_21_O);
        cache_cyc0->mac_src_0_s1_22(mac_src_0_s1_22_O);
        cache_cyc0->mac_src_0_s1_23(mac_src_0_s1_23_O);
        cache_cyc0->mac_src_0_s1_24(mac_src_0_s1_24_O);
        cache_cyc0->mac_src_0_s1_25(mac_src_0_s1_25_O);
        cache_cyc0->mac_src_0_s1_26(mac_src_0_s1_26_O);
        cache_cyc0->mac_src_0_s1_27(mac_src_0_s1_27_O);
        cache_cyc0->mac_src_0_s1_28(mac_src_0_s1_28_O);
        cache_cyc0->mac_src_0_s1_29(mac_src_0_s1_29_O);
        cache_cyc0->mac_src_0_s1_30(mac_src_0_s1_30_O);
        cache_cyc0->mac_src_0_s1_31(mac_src_0_s1_31_O);
        cache_cyc0->mac_src_0_s2_0(mac_src_0_s2_0_O);
        cache_cyc0->mac_src_0_s2_1(mac_src_0_s2_1_O);
        cache_cyc0->mac_src_0_s2_2(mac_src_0_s2_2_O);
        cache_cyc0->mac_src_0_s2_3(mac_src_0_s2_3_O);
        cache_cyc0->mac_src_0_s2_4(mac_src_0_s2_4_O);
        cache_cyc0->mac_src_0_s2_5(mac_src_0_s2_5_O);
        cache_cyc0->mac_src_0_s2_6(mac_src_0_s2_6_O);
        cache_cyc0->mac_src_0_s2_7(mac_src_0_s2_7_O);
        cache_cyc0->mac_src_0_s2_8(mac_src_0_s2_8_O);
        cache_cyc0->mac_src_0_s2_9(mac_src_0_s2_9_O);
        cache_cyc0->mac_src_0_s2_10(mac_src_0_s2_10_O);
        cache_cyc0->mac_src_0_s2_11(mac_src_0_s2_11_O);
        cache_cyc0->mac_src_0_s2_12(mac_src_0_s2_12_O);
        cache_cyc0->mac_src_0_s2_13(mac_src_0_s2_13_O);
        cache_cyc0->mac_src_0_s2_14(mac_src_0_s2_14_O);
        cache_cyc0->mac_src_0_s2_15(mac_src_0_s2_15_O);
        cache_cyc0->mac_src_0_s2_16(mac_src_0_s2_16_O);
        cache_cyc0->mac_src_0_s2_17(mac_src_0_s2_17_O);
        cache_cyc0->mac_src_0_s2_18(mac_src_0_s2_18_O);
        cache_cyc0->mac_src_0_s2_19(mac_src_0_s2_19_O);
        cache_cyc0->mac_src_0_s2_20(mac_src_0_s2_20_O);
        cache_cyc0->mac_src_0_s2_21(mac_src_0_s2_21_O);
        cache_cyc0->mac_src_0_s2_22(mac_src_0_s2_22_O);
        cache_cyc0->mac_src_0_s2_23(mac_src_0_s2_23_O);
        cache_cyc0->mac_src_0_s2_24(mac_src_0_s2_24_O);
        cache_cyc0->mac_src_0_s2_25(mac_src_0_s2_25_O);
        cache_cyc0->mac_src_0_s2_26(mac_src_0_s2_26_O);
        cache_cyc0->mac_src_0_s2_27(mac_src_0_s2_27_O);
        cache_cyc0->mac_src_0_s2_28(mac_src_0_s2_28_O);
        cache_cyc0->mac_src_0_s2_29(mac_src_0_s2_29_O);
        cache_cyc0->mac_src_0_s2_30(mac_src_0_s2_30_O);
        cache_cyc0->mac_src_0_s2_31(mac_src_0_s2_31_O);
        cache_cyc0->mac_src_0_s3_0(mac_src_0_s3_0_O);
        cache_cyc0->mac_src_0_s3_1(mac_src_0_s3_1_O);
        cache_cyc0->mac_src_0_s3_2(mac_src_0_s3_2_O);
        cache_cyc0->mac_src_0_s3_3(mac_src_0_s3_3_O);
        cache_cyc0->mac_src_0_s3_4(mac_src_0_s3_4_O);
        cache_cyc0->mac_src_0_s3_5(mac_src_0_s3_5_O);
        cache_cyc0->mac_src_0_s3_6(mac_src_0_s3_6_O);
        cache_cyc0->mac_src_0_s3_7(mac_src_0_s3_7_O);
        cache_cyc0->mac_src_0_s3_8(mac_src_0_s3_8_O);
        cache_cyc0->mac_src_0_s3_9(mac_src_0_s3_9_O);
        cache_cyc0->mac_src_0_s3_10(mac_src_0_s3_10_O);
        cache_cyc0->mac_src_0_s3_11(mac_src_0_s3_11_O);
        cache_cyc0->mac_src_0_s3_12(mac_src_0_s3_12_O);
        cache_cyc0->mac_src_0_s3_13(mac_src_0_s3_13_O);
        cache_cyc0->mac_src_0_s3_14(mac_src_0_s3_14_O);
        cache_cyc0->mac_src_0_s3_15(mac_src_0_s3_15_O);
        cache_cyc0->mac_src_0_s3_16(mac_src_0_s3_16_O);
        cache_cyc0->mac_src_0_s3_17(mac_src_0_s3_17_O);
        cache_cyc0->mac_src_0_s3_18(mac_src_0_s3_18_O);
        cache_cyc0->mac_src_0_s3_19(mac_src_0_s3_19_O);
        cache_cyc0->mac_src_0_s3_20(mac_src_0_s3_20_O);
        cache_cyc0->mac_src_0_s3_21(mac_src_0_s3_21_O);
        cache_cyc0->mac_src_0_s3_22(mac_src_0_s3_22_O);
        cache_cyc0->mac_src_0_s3_23(mac_src_0_s3_23_O);
        cache_cyc0->mac_src_0_s3_24(mac_src_0_s3_24_O);
        cache_cyc0->mac_src_0_s3_25(mac_src_0_s3_25_O);
        cache_cyc0->mac_src_0_s3_26(mac_src_0_s3_26_O);
        cache_cyc0->mac_src_0_s3_27(mac_src_0_s3_27_O);
        cache_cyc0->mac_src_0_s3_28(mac_src_0_s3_28_O);
        cache_cyc0->mac_src_0_s3_29(mac_src_0_s3_29_O);
        cache_cyc0->mac_src_0_s3_30(mac_src_0_s3_30_O);
        cache_cyc0->mac_src_0_s3_31(mac_src_0_s3_31_O);
        cache_cyc0->mac_src_0_s4_0(mac_src_0_s4_0_O);
        cache_cyc0->mac_src_0_s4_1(mac_src_0_s4_1_O);
        cache_cyc0->mac_src_0_s4_2(mac_src_0_s4_2_O);
        cache_cyc0->mac_src_0_s4_3(mac_src_0_s4_3_O);
        cache_cyc0->mac_src_0_s4_4(mac_src_0_s4_4_O);
        cache_cyc0->mac_src_0_s4_5(mac_src_0_s4_5_O);
        cache_cyc0->mac_src_0_s4_6(mac_src_0_s4_6_O);
        cache_cyc0->mac_src_0_s4_7(mac_src_0_s4_7_O);
        cache_cyc0->mac_src_0_s4_8(mac_src_0_s4_8_O);
        cache_cyc0->mac_src_0_s4_9(mac_src_0_s4_9_O);
        cache_cyc0->mac_src_0_s4_10(mac_src_0_s4_10_O);
        cache_cyc0->mac_src_0_s4_11(mac_src_0_s4_11_O);
        cache_cyc0->mac_src_0_s4_12(mac_src_0_s4_12_O);
        cache_cyc0->mac_src_0_s4_13(mac_src_0_s4_13_O);
        cache_cyc0->mac_src_0_s4_14(mac_src_0_s4_14_O);
        cache_cyc0->mac_src_0_s4_15(mac_src_0_s4_15_O);
        cache_cyc0->mac_src_0_s4_16(mac_src_0_s4_16_O);
        cache_cyc0->mac_src_0_s4_17(mac_src_0_s4_17_O);
        cache_cyc0->mac_src_0_s4_18(mac_src_0_s4_18_O);
        cache_cyc0->mac_src_0_s4_19(mac_src_0_s4_19_O);
        cache_cyc0->mac_src_0_s4_20(mac_src_0_s4_20_O);
        cache_cyc0->mac_src_0_s4_21(mac_src_0_s4_21_O);
        cache_cyc0->mac_src_0_s4_22(mac_src_0_s4_22_O);
        cache_cyc0->mac_src_0_s4_23(mac_src_0_s4_23_O);
        cache_cyc0->mac_src_0_s4_24(mac_src_0_s4_24_O);
        cache_cyc0->mac_src_0_s4_25(mac_src_0_s4_25_O);
        cache_cyc0->mac_src_0_s4_26(mac_src_0_s4_26_O);
        cache_cyc0->mac_src_0_s4_27(mac_src_0_s4_27_O);
        cache_cyc0->mac_src_0_s4_28(mac_src_0_s4_28_O);
        cache_cyc0->mac_src_0_s4_29(mac_src_0_s4_29_O);
        cache_cyc0->mac_src_0_s4_30(mac_src_0_s4_30_O);
        cache_cyc0->mac_src_0_s4_31(mac_src_0_s4_31_O);
        cache_cyc0->mac_src_0_s5_0(mac_src_0_s5_0_O);
        cache_cyc0->mac_src_0_s5_1(mac_src_0_s5_1_O);
        cache_cyc0->mac_src_0_s5_2(mac_src_0_s5_2_O);
        cache_cyc0->mac_src_0_s5_3(mac_src_0_s5_3_O);
        cache_cyc0->mac_src_0_s5_4(mac_src_0_s5_4_O);
        cache_cyc0->mac_src_0_s5_5(mac_src_0_s5_5_O);
        cache_cyc0->mac_src_0_s5_6(mac_src_0_s5_6_O);
        cache_cyc0->mac_src_0_s5_7(mac_src_0_s5_7_O);
        cache_cyc0->mac_src_0_s5_8(mac_src_0_s5_8_O);
        cache_cyc0->mac_src_0_s5_9(mac_src_0_s5_9_O);
        cache_cyc0->mac_src_0_s5_10(mac_src_0_s5_10_O);
        cache_cyc0->mac_src_0_s5_11(mac_src_0_s5_11_O);
        cache_cyc0->mac_src_0_s5_12(mac_src_0_s5_12_O);
        cache_cyc0->mac_src_0_s5_13(mac_src_0_s5_13_O);
        cache_cyc0->mac_src_0_s5_14(mac_src_0_s5_14_O);
        cache_cyc0->mac_src_0_s5_15(mac_src_0_s5_15_O);
        cache_cyc0->mac_src_0_s5_16(mac_src_0_s5_16_O);
        cache_cyc0->mac_src_0_s5_17(mac_src_0_s5_17_O);
        cache_cyc0->mac_src_0_s5_18(mac_src_0_s5_18_O);
        cache_cyc0->mac_src_0_s5_19(mac_src_0_s5_19_O);
        cache_cyc0->mac_src_0_s5_20(mac_src_0_s5_20_O);
        cache_cyc0->mac_src_0_s5_21(mac_src_0_s5_21_O);
        cache_cyc0->mac_src_0_s5_22(mac_src_0_s5_22_O);
        cache_cyc0->mac_src_0_s5_23(mac_src_0_s5_23_O);
        cache_cyc0->mac_src_0_s5_24(mac_src_0_s5_24_O);
        cache_cyc0->mac_src_0_s5_25(mac_src_0_s5_25_O);
        cache_cyc0->mac_src_0_s5_26(mac_src_0_s5_26_O);
        cache_cyc0->mac_src_0_s5_27(mac_src_0_s5_27_O);
        cache_cyc0->mac_src_0_s5_28(mac_src_0_s5_28_O);
        cache_cyc0->mac_src_0_s5_29(mac_src_0_s5_29_O);
        cache_cyc0->mac_src_0_s5_30(mac_src_0_s5_30_O);
        cache_cyc0->mac_src_0_s5_31(mac_src_0_s5_31_O);
        cache_cyc0->mac_src_0_s6_0(mac_src_0_s6_0_O);
        cache_cyc0->mac_src_0_s6_1(mac_src_0_s6_1_O);
        cache_cyc0->mac_src_0_s6_2(mac_src_0_s6_2_O);
        cache_cyc0->mac_src_0_s6_3(mac_src_0_s6_3_O);
        cache_cyc0->mac_src_0_s6_4(mac_src_0_s6_4_O);
        cache_cyc0->mac_src_0_s6_5(mac_src_0_s6_5_O);
        cache_cyc0->mac_src_0_s6_6(mac_src_0_s6_6_O);
        cache_cyc0->mac_src_0_s6_7(mac_src_0_s6_7_O);
        cache_cyc0->mac_src_0_s6_8(mac_src_0_s6_8_O);
        cache_cyc0->mac_src_0_s6_9(mac_src_0_s6_9_O);
        cache_cyc0->mac_src_0_s6_10(mac_src_0_s6_10_O);
        cache_cyc0->mac_src_0_s6_11(mac_src_0_s6_11_O);
        cache_cyc0->mac_src_0_s6_12(mac_src_0_s6_12_O);
        cache_cyc0->mac_src_0_s6_13(mac_src_0_s6_13_O);
        cache_cyc0->mac_src_0_s6_14(mac_src_0_s6_14_O);
        cache_cyc0->mac_src_0_s6_15(mac_src_0_s6_15_O);
        cache_cyc0->mac_src_0_s6_16(mac_src_0_s6_16_O);
        cache_cyc0->mac_src_0_s6_17(mac_src_0_s6_17_O);
        cache_cyc0->mac_src_0_s6_18(mac_src_0_s6_18_O);
        cache_cyc0->mac_src_0_s6_19(mac_src_0_s6_19_O);
        cache_cyc0->mac_src_0_s6_20(mac_src_0_s6_20_O);
        cache_cyc0->mac_src_0_s6_21(mac_src_0_s6_21_O);
        cache_cyc0->mac_src_0_s6_22(mac_src_0_s6_22_O);
        cache_cyc0->mac_src_0_s6_23(mac_src_0_s6_23_O);
        cache_cyc0->mac_src_0_s6_24(mac_src_0_s6_24_O);
        cache_cyc0->mac_src_0_s6_25(mac_src_0_s6_25_O);
        cache_cyc0->mac_src_0_s6_26(mac_src_0_s6_26_O);
        cache_cyc0->mac_src_0_s6_27(mac_src_0_s6_27_O);
        cache_cyc0->mac_src_0_s6_28(mac_src_0_s6_28_O);
        cache_cyc0->mac_src_0_s6_29(mac_src_0_s6_29_O);
        cache_cyc0->mac_src_0_s6_30(mac_src_0_s6_30_O);
        cache_cyc0->mac_src_0_s6_31(mac_src_0_s6_31_O);
        cache_cyc0->mac_src_1_0(mac_src_1_0_O);
        cache_cyc0->mac_src_1_1(mac_src_1_1_O);
        cache_cyc0->mac_src_1_2(mac_src_1_2_O);
        cache_cyc0->mac_src_1_3(mac_src_1_3_O);
        cache_cyc0->mac_src_1_4(mac_src_1_4_O);
        cache_cyc0->mac_src_1_5(mac_src_1_5_O);
        cache_cyc0->mac_src_1_6(mac_src_1_6_O);
        cache_cyc0->mac_src_1_7(mac_src_1_7_O);
        cache_cyc0->mac_src_1_8(mac_src_1_8_O);
        cache_cyc0->mac_src_1_9(mac_src_1_9_O);
        cache_cyc0->mac_src_1_10(mac_src_1_10_O);
        cache_cyc0->mac_src_1_11(mac_src_1_11_O);
        cache_cyc0->mac_src_1_12(mac_src_1_12_O);
        cache_cyc0->mac_src_1_13(mac_src_1_13_O);
        cache_cyc0->mac_src_1_14(mac_src_1_14_O);
        cache_cyc0->mac_src_1_15(mac_src_1_15_O);
        cache_cyc0->mac_src_1_16(mac_src_1_16_O);
        cache_cyc0->mac_src_1_17(mac_src_1_17_O);
        cache_cyc0->mac_src_1_18(mac_src_1_18_O);
        cache_cyc0->mac_src_1_19(mac_src_1_19_O);
        cache_cyc0->mac_src_1_20(mac_src_1_20_O);
        cache_cyc0->mac_src_1_21(mac_src_1_21_O);
        cache_cyc0->mac_src_1_22(mac_src_1_22_O);
        cache_cyc0->mac_src_1_23(mac_src_1_23_O);
        cache_cyc0->mac_src_1_24(mac_src_1_24_O);
        cache_cyc0->mac_src_1_25(mac_src_1_25_O);
        cache_cyc0->mac_src_1_26(mac_src_1_26_O);
        cache_cyc0->mac_src_1_27(mac_src_1_27_O);
        cache_cyc0->mac_src_1_28(mac_src_1_28_O);
        cache_cyc0->mac_src_1_29(mac_src_1_29_O);
        cache_cyc0->mac_src_1_30(mac_src_1_30_O);
        cache_cyc0->mac_src_1_31(mac_src_1_31_O);
        cache_cyc0->mac_src_valid(mac_src_valid);
        cache_cyc0->mac_clear(mac_clear);


        // setup the type conversion threads
        SC_METHOD( thread_systolic_en_I);
            sensitive << systolic_en;
        SC_METHOD( thread_systolic_depth_I);
            sensitive << systolic_depth;
        SC_METHOD( thread_systolic_sel_I);
            sensitive << systolic_sel;
        SC_METHOD( thread_feature_data_I);
            sensitive << feature_data;
        SC_METHOD( thread_feature_data_sel_I);
            sensitive << feature_data_sel;
        SC_METHOD( thread_weight_data_I);
            sensitive << weight_data;
        SC_METHOD( thread_mac_src_0_s0_0_O);
            sensitive << mac_src_0_s0_0_O;
        SC_METHOD( thread_mac_src_0_s0_1_O);
            sensitive << mac_src_0_s0_1_O;
        SC_METHOD( thread_mac_src_0_s0_2_O);
            sensitive << mac_src_0_s0_2_O;
        SC_METHOD( thread_mac_src_0_s0_3_O);
            sensitive << mac_src_0_s0_3_O;
        SC_METHOD( thread_mac_src_0_s0_4_O);
            sensitive << mac_src_0_s0_4_O;
        SC_METHOD( thread_mac_src_0_s0_5_O);
            sensitive << mac_src_0_s0_5_O;
        SC_METHOD( thread_mac_src_0_s0_6_O);
            sensitive << mac_src_0_s0_6_O;
        SC_METHOD( thread_mac_src_0_s0_7_O);
            sensitive << mac_src_0_s0_7_O;
        SC_METHOD( thread_mac_src_0_s0_8_O);
            sensitive << mac_src_0_s0_8_O;
        SC_METHOD( thread_mac_src_0_s0_9_O);
            sensitive << mac_src_0_s0_9_O;
        SC_METHOD( thread_mac_src_0_s0_10_O);
            sensitive << mac_src_0_s0_10_O;
        SC_METHOD( thread_mac_src_0_s0_11_O);
            sensitive << mac_src_0_s0_11_O;
        SC_METHOD( thread_mac_src_0_s0_12_O);
            sensitive << mac_src_0_s0_12_O;
        SC_METHOD( thread_mac_src_0_s0_13_O);
            sensitive << mac_src_0_s0_13_O;
        SC_METHOD( thread_mac_src_0_s0_14_O);
            sensitive << mac_src_0_s0_14_O;
        SC_METHOD( thread_mac_src_0_s0_15_O);
            sensitive << mac_src_0_s0_15_O;
        SC_METHOD( thread_mac_src_0_s0_16_O);
            sensitive << mac_src_0_s0_16_O;
        SC_METHOD( thread_mac_src_0_s0_17_O);
            sensitive << mac_src_0_s0_17_O;
        SC_METHOD( thread_mac_src_0_s0_18_O);
            sensitive << mac_src_0_s0_18_O;
        SC_METHOD( thread_mac_src_0_s0_19_O);
            sensitive << mac_src_0_s0_19_O;
        SC_METHOD( thread_mac_src_0_s0_20_O);
            sensitive << mac_src_0_s0_20_O;
        SC_METHOD( thread_mac_src_0_s0_21_O);
            sensitive << mac_src_0_s0_21_O;
        SC_METHOD( thread_mac_src_0_s0_22_O);
            sensitive << mac_src_0_s0_22_O;
        SC_METHOD( thread_mac_src_0_s0_23_O);
            sensitive << mac_src_0_s0_23_O;
        SC_METHOD( thread_mac_src_0_s0_24_O);
            sensitive << mac_src_0_s0_24_O;
        SC_METHOD( thread_mac_src_0_s0_25_O);
            sensitive << mac_src_0_s0_25_O;
        SC_METHOD( thread_mac_src_0_s0_26_O);
            sensitive << mac_src_0_s0_26_O;
        SC_METHOD( thread_mac_src_0_s0_27_O);
            sensitive << mac_src_0_s0_27_O;
        SC_METHOD( thread_mac_src_0_s0_28_O);
            sensitive << mac_src_0_s0_28_O;
        SC_METHOD( thread_mac_src_0_s0_29_O);
            sensitive << mac_src_0_s0_29_O;
        SC_METHOD( thread_mac_src_0_s0_30_O);
            sensitive << mac_src_0_s0_30_O;
        SC_METHOD( thread_mac_src_0_s0_31_O);
            sensitive << mac_src_0_s0_31_O;
        SC_METHOD( thread_mac_src_0_s1_0_O);
            sensitive << mac_src_0_s1_0_O;
        SC_METHOD( thread_mac_src_0_s1_1_O);
            sensitive << mac_src_0_s1_1_O;
        SC_METHOD( thread_mac_src_0_s1_2_O);
            sensitive << mac_src_0_s1_2_O;
        SC_METHOD( thread_mac_src_0_s1_3_O);
            sensitive << mac_src_0_s1_3_O;
        SC_METHOD( thread_mac_src_0_s1_4_O);
            sensitive << mac_src_0_s1_4_O;
        SC_METHOD( thread_mac_src_0_s1_5_O);
            sensitive << mac_src_0_s1_5_O;
        SC_METHOD( thread_mac_src_0_s1_6_O);
            sensitive << mac_src_0_s1_6_O;
        SC_METHOD( thread_mac_src_0_s1_7_O);
            sensitive << mac_src_0_s1_7_O;
        SC_METHOD( thread_mac_src_0_s1_8_O);
            sensitive << mac_src_0_s1_8_O;
        SC_METHOD( thread_mac_src_0_s1_9_O);
            sensitive << mac_src_0_s1_9_O;
        SC_METHOD( thread_mac_src_0_s1_10_O);
            sensitive << mac_src_0_s1_10_O;
        SC_METHOD( thread_mac_src_0_s1_11_O);
            sensitive << mac_src_0_s1_11_O;
        SC_METHOD( thread_mac_src_0_s1_12_O);
            sensitive << mac_src_0_s1_12_O;
        SC_METHOD( thread_mac_src_0_s1_13_O);
            sensitive << mac_src_0_s1_13_O;
        SC_METHOD( thread_mac_src_0_s1_14_O);
            sensitive << mac_src_0_s1_14_O;
        SC_METHOD( thread_mac_src_0_s1_15_O);
            sensitive << mac_src_0_s1_15_O;
        SC_METHOD( thread_mac_src_0_s1_16_O);
            sensitive << mac_src_0_s1_16_O;
        SC_METHOD( thread_mac_src_0_s1_17_O);
            sensitive << mac_src_0_s1_17_O;
        SC_METHOD( thread_mac_src_0_s1_18_O);
            sensitive << mac_src_0_s1_18_O;
        SC_METHOD( thread_mac_src_0_s1_19_O);
            sensitive << mac_src_0_s1_19_O;
        SC_METHOD( thread_mac_src_0_s1_20_O);
            sensitive << mac_src_0_s1_20_O;
        SC_METHOD( thread_mac_src_0_s1_21_O);
            sensitive << mac_src_0_s1_21_O;
        SC_METHOD( thread_mac_src_0_s1_22_O);
            sensitive << mac_src_0_s1_22_O;
        SC_METHOD( thread_mac_src_0_s1_23_O);
            sensitive << mac_src_0_s1_23_O;
        SC_METHOD( thread_mac_src_0_s1_24_O);
            sensitive << mac_src_0_s1_24_O;
        SC_METHOD( thread_mac_src_0_s1_25_O);
            sensitive << mac_src_0_s1_25_O;
        SC_METHOD( thread_mac_src_0_s1_26_O);
            sensitive << mac_src_0_s1_26_O;
        SC_METHOD( thread_mac_src_0_s1_27_O);
            sensitive << mac_src_0_s1_27_O;
        SC_METHOD( thread_mac_src_0_s1_28_O);
            sensitive << mac_src_0_s1_28_O;
        SC_METHOD( thread_mac_src_0_s1_29_O);
            sensitive << mac_src_0_s1_29_O;
        SC_METHOD( thread_mac_src_0_s1_30_O);
            sensitive << mac_src_0_s1_30_O;
        SC_METHOD( thread_mac_src_0_s1_31_O);
            sensitive << mac_src_0_s1_31_O;
        SC_METHOD( thread_mac_src_0_s2_0_O);
            sensitive << mac_src_0_s2_0_O;
        SC_METHOD( thread_mac_src_0_s2_1_O);
            sensitive << mac_src_0_s2_1_O;
        SC_METHOD( thread_mac_src_0_s2_2_O);
            sensitive << mac_src_0_s2_2_O;
        SC_METHOD( thread_mac_src_0_s2_3_O);
            sensitive << mac_src_0_s2_3_O;
        SC_METHOD( thread_mac_src_0_s2_4_O);
            sensitive << mac_src_0_s2_4_O;
        SC_METHOD( thread_mac_src_0_s2_5_O);
            sensitive << mac_src_0_s2_5_O;
        SC_METHOD( thread_mac_src_0_s2_6_O);
            sensitive << mac_src_0_s2_6_O;
        SC_METHOD( thread_mac_src_0_s2_7_O);
            sensitive << mac_src_0_s2_7_O;
        SC_METHOD( thread_mac_src_0_s2_8_O);
            sensitive << mac_src_0_s2_8_O;
        SC_METHOD( thread_mac_src_0_s2_9_O);
            sensitive << mac_src_0_s2_9_O;
        SC_METHOD( thread_mac_src_0_s2_10_O);
            sensitive << mac_src_0_s2_10_O;
        SC_METHOD( thread_mac_src_0_s2_11_O);
            sensitive << mac_src_0_s2_11_O;
        SC_METHOD( thread_mac_src_0_s2_12_O);
            sensitive << mac_src_0_s2_12_O;
        SC_METHOD( thread_mac_src_0_s2_13_O);
            sensitive << mac_src_0_s2_13_O;
        SC_METHOD( thread_mac_src_0_s2_14_O);
            sensitive << mac_src_0_s2_14_O;
        SC_METHOD( thread_mac_src_0_s2_15_O);
            sensitive << mac_src_0_s2_15_O;
        SC_METHOD( thread_mac_src_0_s2_16_O);
            sensitive << mac_src_0_s2_16_O;
        SC_METHOD( thread_mac_src_0_s2_17_O);
            sensitive << mac_src_0_s2_17_O;
        SC_METHOD( thread_mac_src_0_s2_18_O);
            sensitive << mac_src_0_s2_18_O;
        SC_METHOD( thread_mac_src_0_s2_19_O);
            sensitive << mac_src_0_s2_19_O;
        SC_METHOD( thread_mac_src_0_s2_20_O);
            sensitive << mac_src_0_s2_20_O;
        SC_METHOD( thread_mac_src_0_s2_21_O);
            sensitive << mac_src_0_s2_21_O;
        SC_METHOD( thread_mac_src_0_s2_22_O);
            sensitive << mac_src_0_s2_22_O;
        SC_METHOD( thread_mac_src_0_s2_23_O);
            sensitive << mac_src_0_s2_23_O;
        SC_METHOD( thread_mac_src_0_s2_24_O);
            sensitive << mac_src_0_s2_24_O;
        SC_METHOD( thread_mac_src_0_s2_25_O);
            sensitive << mac_src_0_s2_25_O;
        SC_METHOD( thread_mac_src_0_s2_26_O);
            sensitive << mac_src_0_s2_26_O;
        SC_METHOD( thread_mac_src_0_s2_27_O);
            sensitive << mac_src_0_s2_27_O;
        SC_METHOD( thread_mac_src_0_s2_28_O);
            sensitive << mac_src_0_s2_28_O;
        SC_METHOD( thread_mac_src_0_s2_29_O);
            sensitive << mac_src_0_s2_29_O;
        SC_METHOD( thread_mac_src_0_s2_30_O);
            sensitive << mac_src_0_s2_30_O;
        SC_METHOD( thread_mac_src_0_s2_31_O);
            sensitive << mac_src_0_s2_31_O;
        SC_METHOD( thread_mac_src_0_s3_0_O);
            sensitive << mac_src_0_s3_0_O;
        SC_METHOD( thread_mac_src_0_s3_1_O);
            sensitive << mac_src_0_s3_1_O;
        SC_METHOD( thread_mac_src_0_s3_2_O);
            sensitive << mac_src_0_s3_2_O;
        SC_METHOD( thread_mac_src_0_s3_3_O);
            sensitive << mac_src_0_s3_3_O;
        SC_METHOD( thread_mac_src_0_s3_4_O);
            sensitive << mac_src_0_s3_4_O;
        SC_METHOD( thread_mac_src_0_s3_5_O);
            sensitive << mac_src_0_s3_5_O;
        SC_METHOD( thread_mac_src_0_s3_6_O);
            sensitive << mac_src_0_s3_6_O;
        SC_METHOD( thread_mac_src_0_s3_7_O);
            sensitive << mac_src_0_s3_7_O;
        SC_METHOD( thread_mac_src_0_s3_8_O);
            sensitive << mac_src_0_s3_8_O;
        SC_METHOD( thread_mac_src_0_s3_9_O);
            sensitive << mac_src_0_s3_9_O;
        SC_METHOD( thread_mac_src_0_s3_10_O);
            sensitive << mac_src_0_s3_10_O;
        SC_METHOD( thread_mac_src_0_s3_11_O);
            sensitive << mac_src_0_s3_11_O;
        SC_METHOD( thread_mac_src_0_s3_12_O);
            sensitive << mac_src_0_s3_12_O;
        SC_METHOD( thread_mac_src_0_s3_13_O);
            sensitive << mac_src_0_s3_13_O;
        SC_METHOD( thread_mac_src_0_s3_14_O);
            sensitive << mac_src_0_s3_14_O;
        SC_METHOD( thread_mac_src_0_s3_15_O);
            sensitive << mac_src_0_s3_15_O;
        SC_METHOD( thread_mac_src_0_s3_16_O);
            sensitive << mac_src_0_s3_16_O;
        SC_METHOD( thread_mac_src_0_s3_17_O);
            sensitive << mac_src_0_s3_17_O;
        SC_METHOD( thread_mac_src_0_s3_18_O);
            sensitive << mac_src_0_s3_18_O;
        SC_METHOD( thread_mac_src_0_s3_19_O);
            sensitive << mac_src_0_s3_19_O;
        SC_METHOD( thread_mac_src_0_s3_20_O);
            sensitive << mac_src_0_s3_20_O;
        SC_METHOD( thread_mac_src_0_s3_21_O);
            sensitive << mac_src_0_s3_21_O;
        SC_METHOD( thread_mac_src_0_s3_22_O);
            sensitive << mac_src_0_s3_22_O;
        SC_METHOD( thread_mac_src_0_s3_23_O);
            sensitive << mac_src_0_s3_23_O;
        SC_METHOD( thread_mac_src_0_s3_24_O);
            sensitive << mac_src_0_s3_24_O;
        SC_METHOD( thread_mac_src_0_s3_25_O);
            sensitive << mac_src_0_s3_25_O;
        SC_METHOD( thread_mac_src_0_s3_26_O);
            sensitive << mac_src_0_s3_26_O;
        SC_METHOD( thread_mac_src_0_s3_27_O);
            sensitive << mac_src_0_s3_27_O;
        SC_METHOD( thread_mac_src_0_s3_28_O);
            sensitive << mac_src_0_s3_28_O;
        SC_METHOD( thread_mac_src_0_s3_29_O);
            sensitive << mac_src_0_s3_29_O;
        SC_METHOD( thread_mac_src_0_s3_30_O);
            sensitive << mac_src_0_s3_30_O;
        SC_METHOD( thread_mac_src_0_s3_31_O);
            sensitive << mac_src_0_s3_31_O;
        SC_METHOD( thread_mac_src_0_s4_0_O);
            sensitive << mac_src_0_s4_0_O;
        SC_METHOD( thread_mac_src_0_s4_1_O);
            sensitive << mac_src_0_s4_1_O;
        SC_METHOD( thread_mac_src_0_s4_2_O);
            sensitive << mac_src_0_s4_2_O;
        SC_METHOD( thread_mac_src_0_s4_3_O);
            sensitive << mac_src_0_s4_3_O;
        SC_METHOD( thread_mac_src_0_s4_4_O);
            sensitive << mac_src_0_s4_4_O;
        SC_METHOD( thread_mac_src_0_s4_5_O);
            sensitive << mac_src_0_s4_5_O;
        SC_METHOD( thread_mac_src_0_s4_6_O);
            sensitive << mac_src_0_s4_6_O;
        SC_METHOD( thread_mac_src_0_s4_7_O);
            sensitive << mac_src_0_s4_7_O;
        SC_METHOD( thread_mac_src_0_s4_8_O);
            sensitive << mac_src_0_s4_8_O;
        SC_METHOD( thread_mac_src_0_s4_9_O);
            sensitive << mac_src_0_s4_9_O;
        SC_METHOD( thread_mac_src_0_s4_10_O);
            sensitive << mac_src_0_s4_10_O;
        SC_METHOD( thread_mac_src_0_s4_11_O);
            sensitive << mac_src_0_s4_11_O;
        SC_METHOD( thread_mac_src_0_s4_12_O);
            sensitive << mac_src_0_s4_12_O;
        SC_METHOD( thread_mac_src_0_s4_13_O);
            sensitive << mac_src_0_s4_13_O;
        SC_METHOD( thread_mac_src_0_s4_14_O);
            sensitive << mac_src_0_s4_14_O;
        SC_METHOD( thread_mac_src_0_s4_15_O);
            sensitive << mac_src_0_s4_15_O;
        SC_METHOD( thread_mac_src_0_s4_16_O);
            sensitive << mac_src_0_s4_16_O;
        SC_METHOD( thread_mac_src_0_s4_17_O);
            sensitive << mac_src_0_s4_17_O;
        SC_METHOD( thread_mac_src_0_s4_18_O);
            sensitive << mac_src_0_s4_18_O;
        SC_METHOD( thread_mac_src_0_s4_19_O);
            sensitive << mac_src_0_s4_19_O;
        SC_METHOD( thread_mac_src_0_s4_20_O);
            sensitive << mac_src_0_s4_20_O;
        SC_METHOD( thread_mac_src_0_s4_21_O);
            sensitive << mac_src_0_s4_21_O;
        SC_METHOD( thread_mac_src_0_s4_22_O);
            sensitive << mac_src_0_s4_22_O;
        SC_METHOD( thread_mac_src_0_s4_23_O);
            sensitive << mac_src_0_s4_23_O;
        SC_METHOD( thread_mac_src_0_s4_24_O);
            sensitive << mac_src_0_s4_24_O;
        SC_METHOD( thread_mac_src_0_s4_25_O);
            sensitive << mac_src_0_s4_25_O;
        SC_METHOD( thread_mac_src_0_s4_26_O);
            sensitive << mac_src_0_s4_26_O;
        SC_METHOD( thread_mac_src_0_s4_27_O);
            sensitive << mac_src_0_s4_27_O;
        SC_METHOD( thread_mac_src_0_s4_28_O);
            sensitive << mac_src_0_s4_28_O;
        SC_METHOD( thread_mac_src_0_s4_29_O);
            sensitive << mac_src_0_s4_29_O;
        SC_METHOD( thread_mac_src_0_s4_30_O);
            sensitive << mac_src_0_s4_30_O;
        SC_METHOD( thread_mac_src_0_s4_31_O);
            sensitive << mac_src_0_s4_31_O;
        SC_METHOD( thread_mac_src_0_s5_0_O);
            sensitive << mac_src_0_s5_0_O;
        SC_METHOD( thread_mac_src_0_s5_1_O);
            sensitive << mac_src_0_s5_1_O;
        SC_METHOD( thread_mac_src_0_s5_2_O);
            sensitive << mac_src_0_s5_2_O;
        SC_METHOD( thread_mac_src_0_s5_3_O);
            sensitive << mac_src_0_s5_3_O;
        SC_METHOD( thread_mac_src_0_s5_4_O);
            sensitive << mac_src_0_s5_4_O;
        SC_METHOD( thread_mac_src_0_s5_5_O);
            sensitive << mac_src_0_s5_5_O;
        SC_METHOD( thread_mac_src_0_s5_6_O);
            sensitive << mac_src_0_s5_6_O;
        SC_METHOD( thread_mac_src_0_s5_7_O);
            sensitive << mac_src_0_s5_7_O;
        SC_METHOD( thread_mac_src_0_s5_8_O);
            sensitive << mac_src_0_s5_8_O;
        SC_METHOD( thread_mac_src_0_s5_9_O);
            sensitive << mac_src_0_s5_9_O;
        SC_METHOD( thread_mac_src_0_s5_10_O);
            sensitive << mac_src_0_s5_10_O;
        SC_METHOD( thread_mac_src_0_s5_11_O);
            sensitive << mac_src_0_s5_11_O;
        SC_METHOD( thread_mac_src_0_s5_12_O);
            sensitive << mac_src_0_s5_12_O;
        SC_METHOD( thread_mac_src_0_s5_13_O);
            sensitive << mac_src_0_s5_13_O;
        SC_METHOD( thread_mac_src_0_s5_14_O);
            sensitive << mac_src_0_s5_14_O;
        SC_METHOD( thread_mac_src_0_s5_15_O);
            sensitive << mac_src_0_s5_15_O;
        SC_METHOD( thread_mac_src_0_s5_16_O);
            sensitive << mac_src_0_s5_16_O;
        SC_METHOD( thread_mac_src_0_s5_17_O);
            sensitive << mac_src_0_s5_17_O;
        SC_METHOD( thread_mac_src_0_s5_18_O);
            sensitive << mac_src_0_s5_18_O;
        SC_METHOD( thread_mac_src_0_s5_19_O);
            sensitive << mac_src_0_s5_19_O;
        SC_METHOD( thread_mac_src_0_s5_20_O);
            sensitive << mac_src_0_s5_20_O;
        SC_METHOD( thread_mac_src_0_s5_21_O);
            sensitive << mac_src_0_s5_21_O;
        SC_METHOD( thread_mac_src_0_s5_22_O);
            sensitive << mac_src_0_s5_22_O;
        SC_METHOD( thread_mac_src_0_s5_23_O);
            sensitive << mac_src_0_s5_23_O;
        SC_METHOD( thread_mac_src_0_s5_24_O);
            sensitive << mac_src_0_s5_24_O;
        SC_METHOD( thread_mac_src_0_s5_25_O);
            sensitive << mac_src_0_s5_25_O;
        SC_METHOD( thread_mac_src_0_s5_26_O);
            sensitive << mac_src_0_s5_26_O;
        SC_METHOD( thread_mac_src_0_s5_27_O);
            sensitive << mac_src_0_s5_27_O;
        SC_METHOD( thread_mac_src_0_s5_28_O);
            sensitive << mac_src_0_s5_28_O;
        SC_METHOD( thread_mac_src_0_s5_29_O);
            sensitive << mac_src_0_s5_29_O;
        SC_METHOD( thread_mac_src_0_s5_30_O);
            sensitive << mac_src_0_s5_30_O;
        SC_METHOD( thread_mac_src_0_s5_31_O);
            sensitive << mac_src_0_s5_31_O;
        SC_METHOD( thread_mac_src_0_s6_0_O);
            sensitive << mac_src_0_s6_0_O;
        SC_METHOD( thread_mac_src_0_s6_1_O);
            sensitive << mac_src_0_s6_1_O;
        SC_METHOD( thread_mac_src_0_s6_2_O);
            sensitive << mac_src_0_s6_2_O;
        SC_METHOD( thread_mac_src_0_s6_3_O);
            sensitive << mac_src_0_s6_3_O;
        SC_METHOD( thread_mac_src_0_s6_4_O);
            sensitive << mac_src_0_s6_4_O;
        SC_METHOD( thread_mac_src_0_s6_5_O);
            sensitive << mac_src_0_s6_5_O;
        SC_METHOD( thread_mac_src_0_s6_6_O);
            sensitive << mac_src_0_s6_6_O;
        SC_METHOD( thread_mac_src_0_s6_7_O);
            sensitive << mac_src_0_s6_7_O;
        SC_METHOD( thread_mac_src_0_s6_8_O);
            sensitive << mac_src_0_s6_8_O;
        SC_METHOD( thread_mac_src_0_s6_9_O);
            sensitive << mac_src_0_s6_9_O;
        SC_METHOD( thread_mac_src_0_s6_10_O);
            sensitive << mac_src_0_s6_10_O;
        SC_METHOD( thread_mac_src_0_s6_11_O);
            sensitive << mac_src_0_s6_11_O;
        SC_METHOD( thread_mac_src_0_s6_12_O);
            sensitive << mac_src_0_s6_12_O;
        SC_METHOD( thread_mac_src_0_s6_13_O);
            sensitive << mac_src_0_s6_13_O;
        SC_METHOD( thread_mac_src_0_s6_14_O);
            sensitive << mac_src_0_s6_14_O;
        SC_METHOD( thread_mac_src_0_s6_15_O);
            sensitive << mac_src_0_s6_15_O;
        SC_METHOD( thread_mac_src_0_s6_16_O);
            sensitive << mac_src_0_s6_16_O;
        SC_METHOD( thread_mac_src_0_s6_17_O);
            sensitive << mac_src_0_s6_17_O;
        SC_METHOD( thread_mac_src_0_s6_18_O);
            sensitive << mac_src_0_s6_18_O;
        SC_METHOD( thread_mac_src_0_s6_19_O);
            sensitive << mac_src_0_s6_19_O;
        SC_METHOD( thread_mac_src_0_s6_20_O);
            sensitive << mac_src_0_s6_20_O;
        SC_METHOD( thread_mac_src_0_s6_21_O);
            sensitive << mac_src_0_s6_21_O;
        SC_METHOD( thread_mac_src_0_s6_22_O);
            sensitive << mac_src_0_s6_22_O;
        SC_METHOD( thread_mac_src_0_s6_23_O);
            sensitive << mac_src_0_s6_23_O;
        SC_METHOD( thread_mac_src_0_s6_24_O);
            sensitive << mac_src_0_s6_24_O;
        SC_METHOD( thread_mac_src_0_s6_25_O);
            sensitive << mac_src_0_s6_25_O;
        SC_METHOD( thread_mac_src_0_s6_26_O);
            sensitive << mac_src_0_s6_26_O;
        SC_METHOD( thread_mac_src_0_s6_27_O);
            sensitive << mac_src_0_s6_27_O;
        SC_METHOD( thread_mac_src_0_s6_28_O);
            sensitive << mac_src_0_s6_28_O;
        SC_METHOD( thread_mac_src_0_s6_29_O);
            sensitive << mac_src_0_s6_29_O;
        SC_METHOD( thread_mac_src_0_s6_30_O);
            sensitive << mac_src_0_s6_30_O;
        SC_METHOD( thread_mac_src_0_s6_31_O);
            sensitive << mac_src_0_s6_31_O;
        SC_METHOD( thread_mac_src_1_0_O);
            sensitive << mac_src_1_0_O;
        SC_METHOD( thread_mac_src_1_1_O);
            sensitive << mac_src_1_1_O;
        SC_METHOD( thread_mac_src_1_2_O);
            sensitive << mac_src_1_2_O;
        SC_METHOD( thread_mac_src_1_3_O);
            sensitive << mac_src_1_3_O;
        SC_METHOD( thread_mac_src_1_4_O);
            sensitive << mac_src_1_4_O;
        SC_METHOD( thread_mac_src_1_5_O);
            sensitive << mac_src_1_5_O;
        SC_METHOD( thread_mac_src_1_6_O);
            sensitive << mac_src_1_6_O;
        SC_METHOD( thread_mac_src_1_7_O);
            sensitive << mac_src_1_7_O;
        SC_METHOD( thread_mac_src_1_8_O);
            sensitive << mac_src_1_8_O;
        SC_METHOD( thread_mac_src_1_9_O);
            sensitive << mac_src_1_9_O;
        SC_METHOD( thread_mac_src_1_10_O);
            sensitive << mac_src_1_10_O;
        SC_METHOD( thread_mac_src_1_11_O);
            sensitive << mac_src_1_11_O;
        SC_METHOD( thread_mac_src_1_12_O);
            sensitive << mac_src_1_12_O;
        SC_METHOD( thread_mac_src_1_13_O);
            sensitive << mac_src_1_13_O;
        SC_METHOD( thread_mac_src_1_14_O);
            sensitive << mac_src_1_14_O;
        SC_METHOD( thread_mac_src_1_15_O);
            sensitive << mac_src_1_15_O;
        SC_METHOD( thread_mac_src_1_16_O);
            sensitive << mac_src_1_16_O;
        SC_METHOD( thread_mac_src_1_17_O);
            sensitive << mac_src_1_17_O;
        SC_METHOD( thread_mac_src_1_18_O);
            sensitive << mac_src_1_18_O;
        SC_METHOD( thread_mac_src_1_19_O);
            sensitive << mac_src_1_19_O;
        SC_METHOD( thread_mac_src_1_20_O);
            sensitive << mac_src_1_20_O;
        SC_METHOD( thread_mac_src_1_21_O);
            sensitive << mac_src_1_21_O;
        SC_METHOD( thread_mac_src_1_22_O);
            sensitive << mac_src_1_22_O;
        SC_METHOD( thread_mac_src_1_23_O);
            sensitive << mac_src_1_23_O;
        SC_METHOD( thread_mac_src_1_24_O);
            sensitive << mac_src_1_24_O;
        SC_METHOD( thread_mac_src_1_25_O);
            sensitive << mac_src_1_25_O;
        SC_METHOD( thread_mac_src_1_26_O);
            sensitive << mac_src_1_26_O;
        SC_METHOD( thread_mac_src_1_27_O);
            sensitive << mac_src_1_27_O;
        SC_METHOD( thread_mac_src_1_28_O);
            sensitive << mac_src_1_28_O;
        SC_METHOD( thread_mac_src_1_29_O);
            sensitive << mac_src_1_29_O;
        SC_METHOD( thread_mac_src_1_30_O);
            sensitive << mac_src_1_30_O;
        SC_METHOD( thread_mac_src_1_31_O);
            sensitive << mac_src_1_31_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            cache_cyc0->trace(tfp,99);
        }
    };

    ~cache_cycsimV()
    {
        delete cache_cyc0;
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
    Vcache_rtl* cache_cyc0;
};

cache_cycsim* cache_cycsim_factory()
{
    return new cache_cycsimV("cache");
}

class cache_linkup
{
public:
    cache_linkup() {
        extern cache_cycsim* (*cache_cycsim_factory_p)();
        cache_cycsim_factory_p = &cache_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
cache_linkup cache_cycsimV_link;


