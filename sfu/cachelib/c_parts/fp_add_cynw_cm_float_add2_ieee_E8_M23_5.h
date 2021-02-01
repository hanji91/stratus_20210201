///////////////////////////////////////////////////////////////////////////////
//                                                                             
// Copyright (c) 2019 Cadence Design Systems, Inc. All rights reserved worldwide.
//                                                                               
// The code contained herein is the proprietary and confidential information     
// of Cadence or its licensors, and is supplied subject to a previously          
// executed license and maintenance agreement between Cadence and customer.      
// This code is intended for use with Cadence high-level synthesis tools and
// may not be used with other high-level synthesis tools. Permission is only
// granted to distribute the code as indicated. Cadence grants permission for
// customer to distribute a copy of this code to any partner to aid in designing
// or verifying the customer's intellectual property, as long as such
// distribution includes a restriction of no additional distributions from the
// partner, unless the partner receives permission directly from Cadence.
//
// ALL CODE FURNISHED BY CADENCE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
// KIND, AND CADENCE SPECIFICALLY DISCLAIMS ANY WARRANTY OF NONINFRINGEMENT,
// FITNESS FOR A PARTICULAR PURPOSE OR MERCHANTABILITY. CADENCE SHALL NOT BE
// LIABLE FOR ANY COSTS OF PROCUREMENT OF SUBSTITUTES, LOSS OF PROFITS,
// INTERRUPTION OF BUSINESS, OR FOR ANY OTHER SPECIAL, CONSEQUENTIAL OR
// INCIDENTAL DAMAGES, HOWEVER CAUSED, WHETHER FOR BREACH OF WARRANTY,
// CONTRACT, TORT, NEGLIGENCE, STRICT LIABILITY OR OTHERWISE.
//
////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
    SystemC RTL Simulation Model
    
    Configured at: 22:25:04 KST (+0900), Thursday 31 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef fp_add_cynw_cm_float_add2_ieee_E8_M23_5_COMPILED
#define fp_add_cynw_cm_float_add2_ieee_E8_M23_5_COMPILED

SC_MODULE(fp_add_cynw_cm_float_add2_ieee_E8_M23_5) // architecture "behavioural"
{

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    // Input/Output Ports and Signals:

    sc_in<sc_uint<1> > a_sign;
    sc_in<sc_uint<8> > a_exp;
    sc_in<sc_uint<23> > a_man;
    sc_in<sc_uint<1> > b_sign;
    sc_in<sc_uint<8> > b_exp;
    sc_in<sc_uint<23> > b_man;
    sc_in<sc_uint<3> > rm;
    sc_out<sc_uint<32> > x;
    sc_in<bool> aclk;
    sc_in<sc_uint<1> > astall;
    sc_signal<sc_uint<1> > bdw_enable;
    sc_signal<sc_uint<32> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21;
    sc_signal<sc_uint<9> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27;
    sc_signal<sc_uint<8> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32;
    sc_signal<sc_uint<50> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34;
    sc_signal<sc_uint<8> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35;
    sc_signal<sc_uint<50> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36;
    sc_signal<sc_uint<50> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37;
    sc_signal<sc_uint<26> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__44;
    sc_signal<sc_uint<27> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48;
    sc_signal<sc_uint<6> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;
    sc_signal<sc_uint<25> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__53;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55;
    sc_signal<sc_uint<24> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57;
    sc_signal<sc_uint<10> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66;
    sc_signal<sc_uint<8> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__24__5;
    sc_signal<sc_uint<8> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27__7;
    sc_signal<sc_uint<10> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32__14;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33__18;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42__22;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__26;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__25;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__28;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__27;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__24;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54__33;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__37;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__36;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__38;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__39;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__35;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__34;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__40;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__60__44;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__46;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__45;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__58;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__59;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__56;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__65;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__66;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__69;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__68;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__74;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__73;
    sc_signal<sc_uint<26> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45_tmp_4;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64;
    sc_signal<sc_uint<28> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144;
    sc_signal<sc_uint<28> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173;
    sc_signal<sc_uint<12> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231;
    sc_signal<sc_uint<1> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679;
    sc_signal<sc_uint<7> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830;
    sc_signal<sc_uint<9> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71;
    sc_signal<sc_uint<50> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_73;
    sc_signal<sc_uint<24> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_74;
    sc_signal<sc_uint<24> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_75;
    sc_signal<sc_uint<24> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_76;
    sc_signal<sc_uint<26> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_78;
    sc_signal<sc_uint<23> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79;
    sc_signal<sc_uint<2> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80;
    sc_signal<sc_uint<23> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_81;
    sc_signal<sc_uint<23> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_82;
    sc_signal<sc_uint<3> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83;
    sc_signal<sc_uint<2> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84;
    sc_signal<sc_uint<23> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_86;
    sc_signal<sc_uint<2> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0;
    sc_signal<sc_uint<4> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0
    void method_0() {
        sc_uint<4> temp_0;
        temp_0 = 
            
            +((sc_uint<4>)(rm.read()))
            -((sc_uint<4>)(sc_uint<2>("0b01")))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830
    void method_1() {
        sc_uint<7> temp_1;
        temp_1 = 
            (sc_uint<7>)(( ((sc_uint<3>)(sc_int<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0.read()[3])), fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0.read() ))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27__7
    void method_2() {
        sc_uint<8> temp_2;
        temp_2 = 
            ~(sc_uint<8>)(b_exp.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27__7 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71
    void method_3() {
        sc_uint<9> temp_3;
        temp_3 = 
            (sc_uint<1>(1),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27__7.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144(26,0)
    // part assign: lhs_part_75(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144(26,0)
    sc_signal<sc_uint<27> > lhs_part_75;
    void method_4() {
        lhs_part_75 = sc_uint<27>(
        (sc_uint<27>)(b_man.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144(27,27)
    // part assign: lhs_part_76(2): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144(27,27)
    sc_signal<sc_uint<1> > lhs_part_76;
    void method_5() {
        lhs_part_76 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173(26,0)
    // part assign: lhs_part_77(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173(26,0)
    sc_signal<sc_uint<27> > lhs_part_77;
    void method_6() {
        lhs_part_77 = sc_uint<27>(
        (sc_uint<27>)(a_man.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173(27,27)
    // part assign: lhs_part_78(2): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173(27,27)
    sc_signal<sc_uint<1> > lhs_part_78;
    void method_7() {
        lhs_part_78 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5170
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8(8,0)
    // part assign: lhs_part_79(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8(8,0)
    sc_signal<sc_uint<9> > lhs_part_79;
    void method_8() {
        lhs_part_79 = sc_uint<9>(
        (sc_uint<9>)(a_exp.read()) + (sc_uint<9>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71.read())
        );
    }
    // !!!! amethyst/writers/SystemC.cpp:5187
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27
    void method_9() {
        sc_uint<9> temp_9;
        temp_9 = 
            (sc_uint<9>)(a_exp.read()) + (sc_uint<9>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71.read()) + sc_uint<1>(1)
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35
    void method_10() {
        sc_uint<8> temp_10;
        temp_10 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27.read()(8,8)) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27.read()(8,8)) == sc_uint<1>("0bus1")) & sc_uint<8>(~(sc_uint<8>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8.read()(7,0)))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231(10,0)
    // part assign: lhs_part_80(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231(10,0)
    sc_signal<sc_uint<11> > lhs_part_80;
    void method_11() {
        lhs_part_80 = sc_uint<11>(
        (sc_uint<11>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231(11,11)
    // part assign: lhs_part_81(2): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231(11,11)
    sc_signal<sc_uint<1> > lhs_part_81;
    void method_12() {
        lhs_part_81 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34
    void method_13() {
        sc_uint<1> temp_13;

                    sc_uint<33> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34_tmp_0 = 
            +((sc_uint<33>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144.read()))
            -((sc_uint<33>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173.read()))
            -((sc_uint<33>)(sc_uint<2>("0b01")));
        temp_13 = (((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34_tmp_0[32]))==((sc_uint<1>)0))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32__14
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8.read()(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32__14 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32
    void method_15() {
        sc_uint<1> temp_15;
        temp_15 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32__14.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_75
    void method_16() {
        sc_uint<24> temp_16;
        temp_16 = 
            (a_man.read(),sc_uint<1>(0))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_75 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_76
    void method_17() {
        sc_uint<24> temp_17;
        temp_17 = 
            (b_man.read(),sc_uint<1>(0))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_76 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_74
    void method_18() {
        sc_uint<24> temp_18;
        temp_18 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<24>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_75.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<24>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_76.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_74 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21
    void method_19() {
        sc_uint<1> temp_19;
        temp_19 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30
    void method_20() {
        sc_uint<1> temp_20;

                    sc_uint<17> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30_tmp_1 = 
            -((sc_uint<17>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231.read()))
            +((sc_uint<17>)(sc_uint<13>("0bus0100000011001")));
        temp_20 = (((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30_tmp_1[16]))==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11
    void method_21() {
        sc_uint<1> temp_21;
        temp_21 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1)))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16
    void method_22() {
        sc_uint<1> temp_22;
        temp_22 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(b_exp.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(1,1)))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31
    void method_23() {
        sc_uint<1> temp_23;
        temp_23 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33__18
    void method_24() {
        sc_uint<1> temp_24;
        temp_24 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33__18 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36(48,26)
    // part assign: lhs_part_82(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36(48,26)
    sc_signal<sc_uint<23> > lhs_part_82;
    void method_25() {
        lhs_part_82 = sc_uint<23>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(b_man.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(a_man.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_73
    void method_26() {
        sc_uint<50> temp_26;
        temp_26 = 
            (sc_uint<1>(1),(sc_biguint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36.read()(48,26)),sc_uint<26>("0bus00000000000000000000000000"))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_73 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37
    void method_27() {
        sc_uint<50> temp_27;
        temp_27 = 
            (sc_biguint<81>)((sc_biguint<50>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_73.read()) >> (shift_v)(((sc_uint<5>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35.read()(4,0))).to_long())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33(49,24)
    // part assign: lhs_part_83(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33(49,24)
    sc_signal<sc_uint<26> > lhs_part_83;
    void method_28() {
        lhs_part_83 = sc_uint<26>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33__18.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(49,24)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42__22
    void method_29() {
        sc_uint<1> temp_29;
        temp_29 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37.read()(0,0))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42__22 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42
    void method_30() {
        sc_uint<1> temp_30;
        temp_30 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42__22.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__44
    void method_31() {
        sc_uint<1> temp_31;
        temp_31 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(24,24))))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__44 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45_tmp_4
    void method_32() {
        sc_uint<26> temp_32;
        temp_32 = 
            (sc_uint<2>("0bus01"),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_74.read()(23,1),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__44.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45_tmp_4 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14
    void method_33() {
        sc_uint<1> temp_33;
        temp_33 = 
            
            ((sc_uint<1>)((sc_uint<1>)(b_exp.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(1,1))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
            ((sc_uint<1>)((sc_uint<1>)(b_man.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(1,1))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17
    void method_35() {
        sc_uint<1> temp_35;
        temp_35 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9
    void method_36() {
        sc_uint<1> temp_36;
        temp_36 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33
    void method_37() {
        sc_uint<1> temp_37;
        temp_37 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(1,1))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12
    void method_38() {
        sc_uint<1> temp_38;
        temp_38 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18
    void method_39() {
        sc_uint<1> temp_39;
        temp_39 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__24__5
    void method_40() {
        sc_uint<1> temp_40;
        temp_40 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__24__5 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13
    void method_41() {
        sc_uint<1> temp_41;
        temp_41 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63
    void method_42() {
        sc_uint<1> temp_42;
        temp_42 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__24__5.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29
    void method_43() {
        sc_uint<8> temp_43;
        temp_43 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8.read()(8,8)) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(a_exp.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8.read()(8,8)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(b_exp.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39(24,0)
    // part assign: lhs_part_84(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39(24,0)
    sc_signal<sc_uint<25> > lhs_part_84;
    void method_44() {
        lhs_part_84 = sc_uint<25>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read()) == sc_uint<1>("0bus0")) & ((sc_uint<25>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(49,25))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read()) == sc_uint<1>("0bus1")) & sc_uint<25>(~(sc_uint<25>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(49,25)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_78
    void method_45() {
        sc_uint<26> temp_45;
        temp_45 = 
            (fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read(),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39.read()(24,0))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_78 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45(25,0)
    // part assign: lhs_part_85(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45(25,0)
    sc_signal<sc_uint<26> > lhs_part_85;
    void method_46() {
        lhs_part_85 = sc_uint<26>(
        
            +((sc_uint<26>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45_tmp_4.read()))
            +((sc_uint<26>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_78.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49
    void method_47() {
        sc_uint<6> temp_47;
        temp_47 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,24)) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<1>(1))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,23)) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<2>("0bus10"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,22)) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<2>("0bus11"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,21)) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<3>("0bus100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,20)) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,19)) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,18)) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,17)) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,16)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,15)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,14)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,13)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,12)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,11)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,10)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,9)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,8)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,7)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,6)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,5)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,4)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,3)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10110"))) |
        -(int)((sc_uint<24>)(sc_uint<24>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,2)) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10111"))) |
        -(int)((sc_uint<25>)(sc_uint<25>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,1)) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus11000"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,0)) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus11001"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,0)) == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50
    void method_48() {
        sc_uint<25> temp_48;
        temp_48 = 
             ((shift_v)(((sc_uint<5>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(4,0))).to_long()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(24,0)) << (shift_v)(((sc_uint<5>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(4,0))).to_long())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__26
    void method_49() {
        sc_uint<1> temp_49;
        temp_49 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(24,24))))
            ^((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__26 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__25
    void method_50() {
        sc_uint<1> temp_50;
        temp_50 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__26.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__25 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__28
    void method_51() {
        sc_uint<1> temp_51;
        temp_51 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__28 = temp_51;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__27
    void method_52() {
        sc_uint<1> temp_52;
        temp_52 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__28.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__27 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__24
    void method_53() {
        sc_uint<1> temp_53;
        temp_53 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__25.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__27.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__24 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43
    void method_54() {
        sc_uint<1> temp_54;
        temp_54 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read()(24,24))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__24.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__53
    void method_55() {
        sc_uint<1> temp_55;
        temp_55 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50.read()(1,1))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__53 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4
    void method_56() {
        sc_uint<1> temp_56;

                    sc_uint<7> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4_tmp_2 = 
            +((sc_uint<7>)(rm.read()))
            -((sc_uint<7>)(sc_uint<2>("0b01")));
        temp_56 = (((sc_uint<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54__33
    void method_57() {
        sc_uint<1> temp_57;
        temp_57 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50.read()(0,0))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54__33 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54
    void method_58() {
        sc_uint<1> temp_58;
        temp_58 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54__33.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__37
    void method_59() {
        sc_uint<1> temp_59;
        temp_59 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50.read()(2,2))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__37 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__36
    void method_60() {
        sc_uint<1> temp_60;
        temp_60 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__37.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__36 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5
    void method_61() {
        sc_uint<1> temp_61;

                    sc_uint<10> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5_tmp_3 = 
            +((sc_uint<10>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830.read()(5,0)))
            -((sc_uint<10>)(sc_uint<2>("0b01")));
        temp_61 = (((sc_uint<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48
    void method_62() {
        sc_uint<1> temp_62;
        temp_62 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(a_sign.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(b_sign.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48 = temp_62;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679
    void method_63() {
        sc_uint<1> temp_63;
        temp_63 = 
            ~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679 = temp_63;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__39
    void method_64() {
        sc_uint<1> temp_64;
        temp_64 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__39 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6
    void method_65() {
        sc_uint<1> temp_65;

                    sc_uint<11> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6_tmp_4 = 
            +((sc_uint<11>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830.read()))
            -((sc_uint<11>)(sc_uint<3>("0b010")));
        temp_65 = (((sc_uint<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6 = temp_65;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__38
    void method_66() {
        sc_uint<1> temp_66;
        temp_66 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__38 = temp_66;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41
    void method_67() {
        sc_uint<1> temp_67;
        temp_67 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__39.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__38.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41 = temp_67;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8
    void method_68() {
        sc_uint<1> temp_68;

                    sc_uint<11> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8_tmp_5 = 
            +((sc_uint<11>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830.read()))
            -((sc_uint<11>)(sc_uint<4>("0b0100")));
        temp_68 = (((sc_uint<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8 = temp_68;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__35
    void method_69() {
        sc_uint<1> temp_69;
        temp_69 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__36.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__35 = temp_69;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__34
    void method_70() {
        sc_uint<1> temp_70;
        temp_70 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__53.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__35.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__34 = temp_70;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__40
    void method_71() {
        sc_uint<1> temp_71;
        temp_71 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__40 = temp_71;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55
    void method_72() {
        sc_uint<1> temp_72;
        temp_72 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__34.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__40.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55 = temp_72;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57
    void method_73() {
        sc_uint<24> temp_73;
        temp_73 = 
            
            +((sc_uint<24>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50.read()(24,2)))
            +((sc_uint<24>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57 = temp_73;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__46
    void method_74() {
        sc_uint<1> temp_74;
        temp_74 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57.read()(23,23))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__46 = temp_74;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__45
    void method_75() {
        sc_uint<1> temp_75;
        temp_75 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__46.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__45 = temp_75;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62
    void method_76() {
        sc_uint<1> temp_76;
        temp_76 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__45.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()(0,0))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62 = temp_76;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68(7,7)
    // part assign: lhs_part_86(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68(7,7)
    sc_signal<sc_uint<1> > lhs_part_86;
    void method_77() {
        lhs_part_86 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__69
    void method_78() {
        sc_uint<1> temp_78;
        temp_78 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__69 = temp_78;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__68
    void method_79() {
        sc_uint<1> temp_79;
        temp_79 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__69.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__68 = temp_79;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68(0,0)
    // part assign: lhs_part_87(2): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68(0,0)
    sc_signal<sc_uint<1> > lhs_part_87;
    void method_80() {
        lhs_part_87 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__68.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0
    void method_81() {
        sc_uint<2> temp_81;
        temp_81 = 
            (fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68.read()(7,7),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68.read()(0,0))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0 = temp_81;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: bdw_enable
    void method_82() {
        sc_uint<1> temp_82;
        temp_82 = 
            ~(sc_uint<1>)(astall.read())
        ;
        bdw_enable = temp_82;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_6;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_7
    void method_83() {
        sc_uint<10> temp_83;
        temp_83 = 
            
            +((sc_uint<10>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57.read()(23,23)))
            -((sc_uint<10>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(4,0)))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_7 = temp_83;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_6
    void method_84() {
        sc_uint<10> temp_84;
        temp_84 = 
            fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_7.read()
            +((sc_uint<10>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_6 = temp_84;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59
    void method_85() {
        sc_uint<10> temp_85;
        temp_85 = 
            fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_6.read()
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59 = temp_85;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67
    void method_86() {
        sc_uint<1> temp_86;
        temp_86 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67 = temp_86;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__60__44
    void method_87() {
        sc_uint<1> temp_87;
        temp_87 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(1,1))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__60__44 = temp_87;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71
    void method_88() {
        sc_uint<1> temp_88;
        temp_88 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62.read())))
            |((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__60__44.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71 = temp_88;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(30,23)
    // part assign: lhs_part_88(1): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(30,23)
    sc_signal<sc_uint<8> > lhs_part_88;
    void method_89() {
        lhs_part_88 = sc_uint<8>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(( ((sc_uint<6>)(sc_int<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0.read()[1])), fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0.read() )))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84
    void method_90() {
        sc_uint<2> temp_90;
        temp_90 = 
            (fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71.read(),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84 = temp_90;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7
    void method_91() {
        sc_uint<1> temp_91;

                    sc_uint<11> fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7_tmp_8 = 
            +((sc_uint<11>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830.read()))
            -((sc_uint<11>)(sc_uint<5>("0b00011")));
        temp_91 = (((sc_uint<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7_tmp_8.and_reduce())==((sc_uint<1>)1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7 = temp_91;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__74
    void method_92() {
        sc_uint<1> temp_92;
        temp_92 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__74 = temp_92;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__73
    void method_93() {
        sc_uint<1> temp_93;
        temp_93 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__74.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__73 = temp_93;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70
    void method_94() {
        sc_uint<1> temp_94;
        temp_94 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__73.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70 = temp_94;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80
    void method_95() {
        sc_uint<2> temp_95;
        temp_95 = 
            (fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13.read(),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80 = temp_95;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_81
    void method_96() {
        sc_uint<23> temp_96;
        temp_96 = 
            (b_man.read()(21,0),b_sign.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_81 = temp_96;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_82
    void method_97() {
        sc_uint<23> temp_97;
        temp_97 = 
            (a_man.read()(21,0),a_sign.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_82 = temp_97;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79
    void method_98() {
        sc_uint<23> temp_98;
        temp_98 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80.read()) == sc_uint<2>("0bus01")) & ((sc_uint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_81.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_82.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80.read()) == sc_uint<2>("0bus00")) & ((sc_uint<23>)(sc_uint<1>(1)))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79 = temp_98;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_86
    void method_99() {
        sc_uint<23> temp_99;
        temp_99 = 
            (sc_uint<1>(1),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79.read()(22,1))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_86 = temp_99;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(22,0)
    // part assign: lhs_part_89(2): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(22,0)
    sc_signal<sc_uint<23> > lhs_part_89;
    void method_100() {
        lhs_part_89 = sc_uint<23>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57.read()(22,0))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84.read()) == sc_uint<2>("0bus10")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70.read()))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84.read()) == sc_uint<2>("0bus11")) & ((sc_uint<23>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_86.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83
    void method_101() {
        sc_uint<3> temp_101;
        temp_101 = 
            (fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63.read(),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67.read(),fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6.read())
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83 = temp_101;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__66
    void method_102() {
        sc_uint<1> temp_102;
        temp_102 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(5,5))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__66 = temp_102;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__65
    void method_103() {
        sc_uint<1> temp_103;
        temp_103 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48.read())))
            |((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49.read()(5,5))))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__65 = temp_103;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__59
    void method_104() {
        sc_uint<1> temp_104;
        temp_104 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__59 = temp_104;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__58
    void method_105() {
        sc_uint<1> temp_105;
        temp_105 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            |((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__58 = temp_105;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__56
    void method_106() {
        sc_uint<1> temp_106;
        temp_106 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__59.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__58.read()))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__56 = temp_106;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66
    void method_107() {
        sc_uint<1> temp_107;
        temp_107 = 
            
            ((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__56.read())))
            &((sc_uint<1>)((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11.read())))
        ;
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66 = temp_107;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(31,31)
    // part assign: lhs_part_90(3): fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3(31,31)
    sc_signal<sc_uint<1> > lhs_part_90;
    void method_108() {
        lhs_part_90 = sc_uint<1>(
        
        -(int)((sc_uint<3>)(sc_uint<3>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83.read()) == sc_uint<3>("0bus000")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__66.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83.read()) == sc_uint<3>("0bus001")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__65.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79.read()(0,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_x[2];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_109() {
                    if (bdw_enable.read()==1) {cascade_x[1] = cascade_x[0].read();
        }            if (bdw_enable.read()==1) {cascade_x[0] = (sc_uint<32>)((sc_uint<32>)(fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_110() {
            x = cascade_x[1].read();
    }
    void method_111() { 
        sc_uint<28> temp_111 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144.read();
        temp_111(26,0) = lhs_part_75.read();
        temp_111(27,27) = lhs_part_76.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144 = temp_111;
}
    void method_112() { 
        sc_uint<28> temp_112 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173.read();
        temp_112(26,0) = lhs_part_77.read();
        temp_112(27,27) = lhs_part_78.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173 = temp_112;
}
    void method_113() { 
        sc_uint<10> temp_113 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8.read();
        temp_113(8,0) = lhs_part_79.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8 = temp_113;
}
    void method_114() { 
        sc_uint<12> temp_114 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231.read();
        temp_114(10,0) = lhs_part_80.read();
        temp_114(11,11) = lhs_part_81.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231 = temp_114;
}
    void method_115() { 
        sc_uint<50> temp_115 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36.read();
        temp_115(48,26) = lhs_part_82.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36 = temp_115;
}
    void method_116() { 
        sc_uint<50> temp_116 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33.read();
        temp_116(49,24) = lhs_part_83.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33 = temp_116;
}
    void method_117() { 
        sc_uint<26> temp_117 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39.read();
        temp_117(24,0) = lhs_part_84.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39 = temp_117;
}
    void method_118() { 
        sc_uint<27> temp_118 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45.read();
        temp_118(25,0) = lhs_part_85.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45 = temp_118;
}
    void method_119() { 
        sc_uint<8> temp_119 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68.read();
        temp_119(7,7) = lhs_part_86.read();
        temp_119(0,0) = lhs_part_87.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68 = temp_119;
}
    void method_120() { 
        sc_uint<32> temp_120 = fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3.read();
        temp_120(30,23) = lhs_part_88.read();
        temp_120(22,0) = lhs_part_89.read();
        temp_120(31,31) = lhs_part_90.read();
        fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__3 = temp_120;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(fp_add_cynw_cm_float_add2_ieee_E8_M23_5)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_1);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n92_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_2);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_3);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27__7;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_4);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_5);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_6);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_7);

    // !!!! amethyst/writers/SystemC.cpp:5170
        SC_METHOD(method_8);
        sensitive << a_exp
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71;
    // !!!! amethyst/writers/SystemC.cpp:5187
        SC_METHOD(method_9);
        sensitive << a_exp
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_71;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_10);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_11);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_12);

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_13);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n144
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n173;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_15);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__27
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32__14;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_16);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_17);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_18);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_75
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_76
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_19);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_20);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n231;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_21);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_22);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_23);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_24);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_25);
        sensitive << b_man
                  << a_man
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_26);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_27);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_73
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_28);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33__18;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__37
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_30);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42__22
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_31);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_32);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_74
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__44;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_33);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_37);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_38);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_39);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__14
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n64;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_40);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_41);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__9
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n33;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__24__5
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_43);
        sensitive << a_exp
                  << b_exp
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__28__8;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_44);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_45);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__39;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_46);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45_tmp_4
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_78;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_47);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_48);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_49);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__26
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_51);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_52);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__30
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__28;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_53);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__25
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__27;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_54);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43__24
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__21;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_55);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_56);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_57);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__43
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_58);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54__33
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__42
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_59);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__37;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_61);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_62);
        sensitive << a_sign
                  << b_sign
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_63);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_64);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_65);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_66);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_67);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__39
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__38;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_68);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_69);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__36
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_70);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__53
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__35;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_71);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__54
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_72);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__34
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__40;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_73);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__50
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_74);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_75);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__45
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__46;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_76);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_77);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_78);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__55__41
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_79);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__69;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_80);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68__68
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_81);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_82);
        sensitive << astall;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_83);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_84);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_7
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__29;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_85);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59_tmp_6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_86);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_87);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_88);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__12
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__17
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__60__44;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_89);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__59
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_87_0
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_90);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__71
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_91);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n830;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_92);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_n679
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_93);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__7
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__74;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_94);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__62
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70__73
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__4
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_95);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__13
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_96);
        sensitive << b_man
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_97);
        sensitive << a_man
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_98);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_81
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_82
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_80;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_99);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_100);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__57
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__70
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_86
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_84;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_101);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__63
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__67
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_102);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_103);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__48
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_104);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_105);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_106);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__59
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__58
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_107);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__16
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66__56
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_108);
        sensitive << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__66
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__67__65
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_inst_cellmath__66
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_79
                  << fp_add_cynw_cm_float_add2_ieee_E8_M23_3_inst_tmp_83;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_109);
        sensitive << aclk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_110);
        sensitive << cascade_x[1];
        SC_METHOD(method_111);
        sensitive << lhs_part_75
                  << lhs_part_76;
        SC_METHOD(method_112);
        sensitive << lhs_part_77
                  << lhs_part_78;
        SC_METHOD(method_113);
        sensitive << lhs_part_79;
        SC_METHOD(method_114);
        sensitive << lhs_part_80
                  << lhs_part_81;
        SC_METHOD(method_115);
        sensitive << lhs_part_82;
        SC_METHOD(method_116);
        sensitive << lhs_part_83;
        SC_METHOD(method_117);
        sensitive << lhs_part_84;
        SC_METHOD(method_118);
        sensitive << lhs_part_85;
        SC_METHOD(method_119);
        sensitive << lhs_part_86
                  << lhs_part_87;
        SC_METHOD(method_120);
        sensitive << lhs_part_88
                  << lhs_part_89
                  << lhs_part_90;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef fp_add_cynw_cm_float_add2_ieee_E8_M23_5_COMPILED

/* CADENCE  srX5Tgzaow== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




