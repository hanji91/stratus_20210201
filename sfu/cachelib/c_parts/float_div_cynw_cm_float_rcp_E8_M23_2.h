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
    
    Configured at: 12:05:58 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef float_div_cynw_cm_float_rcp_E8_M23_2_COMPILED
#define float_div_cynw_cm_float_rcp_E8_M23_2_COMPILED

SC_MODULE(float_div_cynw_cm_float_rcp_E8_M23_2) // architecture "behavioural"
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
    sc_out<sc_uint<37> > x;
    sc_in<bool> aclk;
    sc_in<sc_uint<1> > astall;
    sc_signal<sc_uint<1> > bdw_enable;
    sc_signal<sc_uint<37> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_x;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__24;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__30;
    sc_signal<sc_uint<8> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31;
    sc_signal<sc_uint<8> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;
    sc_signal<sc_uint<27> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49;
    sc_signal<sc_uint<24> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum;
    sc_signal<sc_uint<37> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
    sc_signal<sc_uint<40> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57;
    sc_signal<sc_uint<23> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28__7;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29__8;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32__14;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16;
    sc_signal<sc_uint<11> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__18;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21;
    sc_signal<sc_uint<10> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__23;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26;
    sc_signal<sc_uint<9> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__28;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31;
    sc_signal<sc_uint<8> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__33;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36;
    sc_signal<sc_uint<7> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__38;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41;
    sc_signal<sc_uint<6> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__43;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46;
    sc_signal<sc_uint<5> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__48;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51;
    sc_signal<sc_uint<4> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__53;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56;
    sc_signal<sc_uint<3> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__58;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__63;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__68;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59__81;
    sc_signal<sc_uint<13> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4;
    sc_signal<sc_uint<1> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29;
    sc_signal<sc_uint<2> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41;
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42;
    sc_signal<sc_uint<34> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44;
    sc_signal<sc_uint<53> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47;
    sc_signal<sc_uint<16> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0;
    sc_signal<sc_uint<9> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0
    void method_0() {
        sc_uint<9> temp_0;
        temp_0 = 
            
            +((sc_uint<9>)(a_exp.read()))
            -((sc_uint<9>)(sc_uint<2>("0b01")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4
    void method_1() {
        sc_uint<13> temp_1;
        temp_1 = 
            (sc_uint<13>)(( ((sc_uint<4>)(sc_int<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0.read()[8])), float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0.read() ))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17
    void method_2() {
        sc_uint<1> temp_2;

                    sc_uint<17> float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17_tmp_0 = 
            +((sc_uint<17>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4.read()))
            -((sc_uint<17>)(sc_uint<11>("0b00011111111")));
        temp_2 = (((sc_uint<1>)float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18
    void method_3() {
        sc_uint<1> temp_3;

                    sc_uint<27> float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18_tmp_1 = 
            +((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_3 = (((sc_uint<1>)float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5
    void method_4() {
        sc_uint<1> temp_4;
        temp_4 = 
            ~(sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18.read())
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17.read())))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66
    void method_6() {
        sc_uint<1> temp_6;
        temp_6 = 
            ~(sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25.read())
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16
    void method_7() {
        sc_uint<1> temp_7;

                    sc_uint<12> float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16_tmp_2 = 
            +((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_7 = (((sc_uint<1>)float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26
    void method_8() {
        sc_uint<1> temp_8;

                    sc_uint<13> float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26_tmp_3 = 
            -((sc_uint<13>)(a_exp.read()))
            -((sc_uint<13>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5.read()))
            -((sc_uint<13>)(sc_uint<2>("0b01")));
        temp_8 = (((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26_tmp_3[12]))==((sc_uint<1>)0))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29__8
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16.read())))
            |((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29__8 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29
    void method_10() {
        sc_uint<1> temp_10;
        temp_10 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66.read())))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29__8.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__24
    void method_11() {
        sc_uint<1> temp_11;
        temp_11 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17.read())))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__24 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4
    void method_12() {
        sc_uint<1> temp_12;

                    sc_uint<15> float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4_tmp_4 = 
            +((sc_uint<15>)(a_exp.read()))
            +((sc_uint<15>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5.read()))
            -((sc_uint<15>)(sc_uint<10>("0b0011111110")));
        temp_12 = (((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4_tmp_4[14]))==((sc_uint<1>)0))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28__7
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__24.read())))
            |((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28__7 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28
    void method_15() {
        sc_uint<1> temp_15;
        temp_15 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66.read())))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28__7.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59__81
    void method_16() {
        sc_uint<1> temp_16;
        temp_16 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29.read())))
            |((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18.read())))
            |((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59__81 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29
    void method_17() {
        sc_uint<2> temp_17;
        temp_17 = 
            (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59__81.read(),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25.read())
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34
    void method_18() {
        sc_uint<1> temp_18;
        temp_18 = 
            ~(sc_uint<1>)(a_man.read()(15,15))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242(24,24)
    // part assign: lhs_part_96(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242(24,24)
    sc_signal<sc_uint<1> > lhs_part_96;
    void method_19() {
        lhs_part_96 = sc_uint<1>(
        (sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242(23,0)
    // part assign: lhs_part_97(2): float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242(23,0)
    sc_signal<sc_uint<24> > lhs_part_97;
    void method_20() {
        lhs_part_97 = sc_uint<24>(
        (sc_uint<24>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0
    void method_21() {
        sc_uint<16> temp_21;
        temp_21 = 
            (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read(),a_man.read()(14,0))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: bdw_enable
    void method_22() {
        sc_uint<1> temp_22;
        temp_22 = 
            ~(sc_uint<1>)(astall.read())
        ;
        bdw_enable = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(36,33)
    // part assign: lhs_part_98(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(36,33)
    sc_signal<sc_uint<4> > lhs_part_98;
    void method_23() {
        lhs_part_98 = sc_uint<4>(
        (sc_uint<4>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__30
    void method_24() {
        sc_uint<1> temp_24;
        temp_24 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__30 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32__14
    void method_25() {
        sc_uint<1> temp_25;
        temp_25 = 
            
            ((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25.read())))
            |((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29.read())))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32__14 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30
    void method_26() {
        sc_uint<2> temp_26;
        temp_26 = 
            (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32__14.read(),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28.read())
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<8> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31_tmp_5;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31_tmp_5
    void method_27() {
        sc_uint<8> temp_27;
        temp_27 = 
            
            +((sc_uint<8>)(((sc_uint<8>)(sc_int<1>)float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5.read())))
            -((sc_uint<8>)(a_exp.read()))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31_tmp_5 = temp_27;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31
    void method_28() {
        sc_uint<8> temp_28;
        temp_28 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31_tmp_5.read()
            +((sc_uint<8>)(sc_uint<8>("0bus11111110")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32
    void method_29() {
        sc_uint<8> temp_29;
        temp_29 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30.read()) == sc_uint<2>("0bus00")) & ((sc_uint<8>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47
    void method_30() {
        sc_uint<53> temp_30;
        temp_30 = 
            
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000000")) & ((sc_uint<53>)(sc_uint<53>("0bus11111110000000011111111000000000111111100101111110100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000001")) & ((sc_uint<53>)(sc_uint<53>("0bus11111010000100011100101010000010111100100111111011100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000010")) & ((sc_uint<53>)(sc_uint<53>("0bus11110110001100010000101010000100110110110011111000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000011")) & ((sc_uint<53>)(sc_uint<53>("0bus11110010010111110110010000000110101110001111110110000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000100")) & ((sc_uint<53>)(sc_uint<53>("0bus11101110100111000111111110001000100010111101110011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000101")) & ((sc_uint<53>)(sc_uint<53>("0bus11101010111010000000011110001010010101000011110000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000110")) & ((sc_uint<53>)(sc_uint<53>("0bus11100111010000011010101000001100000100100111101110010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0000111")) & ((sc_uint<53>)(sc_uint<53>("0bus11100011101010010001011110001101110001101111101011111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001000")) & ((sc_uint<53>)(sc_uint<53>("0bus11100000000111100000000110001111011100011101101001100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001001")) & ((sc_uint<53>)(sc_uint<53>("0bus11011100101000000001110110010001000100110101100111010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001010")) & ((sc_uint<53>)(sc_uint<53>("0bus11011001001011110010001000010010101010111111100101000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001011")) & ((sc_uint<53>)(sc_uint<53>("0bus11010101110010101100100000010100001110111101100010111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001100")) & ((sc_uint<53>)(sc_uint<53>("0bus11010010011100101100101000010101110000110001100000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001101")) & ((sc_uint<53>)(sc_uint<53>("0bus11001111001001101110010110010111010000100011011110101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001110")) & ((sc_uint<53>)(sc_uint<53>("0bus11001011111001101101100100011000101110010011011100110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0001111")) & ((sc_uint<53>)(sc_uint<53>("0bus11001000101100100110010110011010001010000111011010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010000")) & ((sc_uint<53>)(sc_uint<53>("0bus11000101100010010100110100011011100011111111011000111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010001")) & ((sc_uint<53>)(sc_uint<53>("0bus11000010011010110101001110011100111100000011010111001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010010")) & ((sc_uint<53>)(sc_uint<53>("0bus10111111010110000011111010011110010010010011010101010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010011")) & ((sc_uint<53>)(sc_uint<53>("0bus10111100010011111101011000011111100110110101010011101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010100")) & ((sc_uint<53>)(sc_uint<53>("0bus10111001010100011110001010100000111001101001010001111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010101")) & ((sc_uint<53>)(sc_uint<53>("0bus10110110010111100010111000100010001010110001010000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010110")) & ((sc_uint<53>)(sc_uint<53>("0bus10110011011101001000010010100011011010010101001110101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0010111")) & ((sc_uint<53>)(sc_uint<53>("0bus10110000100101001011001100100100101000010011001101001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011000")) & ((sc_uint<53>)(sc_uint<53>("0bus10101101101111101000011110100101110100101111001011101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011001")) & ((sc_uint<53>)(sc_uint<53>("0bus10101010111100011101001010100110111111101011001010001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011010")) & ((sc_uint<53>)(sc_uint<53>("0bus10101000001011100110010100101000001001001011001000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011011")) & ((sc_uint<53>)(sc_uint<53>("0bus10100101011101000001000000101001010001010001000111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011100")) & ((sc_uint<53>)(sc_uint<53>("0bus10100010110000101010100000101010010111111111000110000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011101")) & ((sc_uint<53>)(sc_uint<53>("0bus10100000000110100000000110101011011101010111000100101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011110")) & ((sc_uint<53>)(sc_uint<53>("0bus10011101011110011111000100101100100001011011000011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0011111")) & ((sc_uint<53>)(sc_uint<53>("0bus10011010111000100100111010101101100100001101000010001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100000")) & ((sc_uint<53>)(sc_uint<53>("0bus10011000010100101111000010101110100101101111000000111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100001")) & ((sc_uint<53>)(sc_uint<53>("0bus10010101110010111011000010101111100110000010111111101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100010")) & ((sc_uint<53>)(sc_uint<53>("0bus10010011010011000110011110110000100101001100111110100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100011")) & ((sc_uint<53>)(sc_uint<53>("0bus10010000110101001111000100110001100011001010111101011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100100")) & ((sc_uint<53>)(sc_uint<53>("0bus10001110011001010010011110110010100000000010111100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100101")) & ((sc_uint<53>)(sc_uint<53>("0bus10001011111111001110100000110011011011110010111011001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100110")) & ((sc_uint<53>)(sc_uint<53>("0bus10001001100111000000111100110100010110011110111010001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0100111")) & ((sc_uint<53>)(sc_uint<53>("0bus10000111010000100111101110110101010000000110111001000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101000")) & ((sc_uint<53>)(sc_uint<53>("0bus10000100111100000000110000110110001000101110111000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101001")) & ((sc_uint<53>)(sc_uint<53>("0bus10000010101001001010000000110111000000010110110111000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101010")) & ((sc_uint<53>)(sc_uint<53>("0bus10000000011000000001100000110111110110111110110110001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101011")) & ((sc_uint<53>)(sc_uint<52>("0bus1111110001000100101010100111000101100101010110101001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101100")) & ((sc_uint<53>)(sc_uint<52>("0bus1111011111010110011100100111001100001011010110100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101101")) & ((sc_uint<53>)(sc_uint<52>("0bus1111001101110101010011010111010010101010000110011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101110")) & ((sc_uint<53>)(sc_uint<52>("0bus1110111100100001000000100111011001000001110110010100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101111")) & ((sc_uint<53>)(sc_uint<52>("0bus1110101011011001010110000111011111010010100110001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110000")) & ((sc_uint<53>)(sc_uint<52>("0bus1110011010011110000110000111100101011100010110000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110001")) & ((sc_uint<53>)(sc_uint<52>("0bus1110001001101111000011010111101011011111110110000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110010")) & ((sc_uint<53>)(sc_uint<52>("0bus1101111001001100000000100111110001011100100101111001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110011")) & ((sc_uint<53>)(sc_uint<52>("0bus1101101000110100110001000111110111010010110101110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110100")) & ((sc_uint<53>)(sc_uint<52>("0bus1101011000101001001000010111111101000011000101101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110101")) & ((sc_uint<53>)(sc_uint<52>("0bus1101001000101000111001111000000010101101010101100111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110110")) & ((sc_uint<53>)(sc_uint<52>("0bus1100111000110011111001101000001000010001100101100001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110111")) & ((sc_uint<53>)(sc_uint<52>("0bus1100101001001001111100001000001101110000000101011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111000")) & ((sc_uint<53>)(sc_uint<52>("0bus1100011001101010110101111000010011001000110101010101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111001")) & ((sc_uint<53>)(sc_uint<52>("0bus1100001010010110011011011000011000011011110101010000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111010")) & ((sc_uint<53>)(sc_uint<52>("0bus1011111011001100100001101000011101101001100101001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111011")) & ((sc_uint<53>)(sc_uint<52>("0bus1011101100001100111110001000100010110010000101000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111100")) & ((sc_uint<53>)(sc_uint<52>("0bus1011011101010111100110001000100111110101010101000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111101")) & ((sc_uint<53>)(sc_uint<52>("0bus1011001110101100001111101000101100110011010100111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111110")) & ((sc_uint<53>)(sc_uint<52>("0bus1011000000001010110000001000110001101100010100110110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111111")) & ((sc_uint<53>)(sc_uint<52>("0bus1010110001110010111101111000110110100000100100110001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000000")) & ((sc_uint<53>)(sc_uint<52>("0bus1010100011100100101111001000111011010000000100101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000001")) & ((sc_uint<53>)(sc_uint<52>("0bus1010010101011111111010101000111111111010110100101000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000010")) & ((sc_uint<53>)(sc_uint<52>("0bus1010000111100100010111001001000100100000110100100011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000011")) & ((sc_uint<53>)(sc_uint<52>("0bus1001111001110001111011001001001001000010100100011111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000100")) & ((sc_uint<53>)(sc_uint<52>("0bus1001101100001000011101111001001101011111110100011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000101")) & ((sc_uint<53>)(sc_uint<52>("0bus1001011110100111110110111001010001111000100100010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000110")) & ((sc_uint<53>)(sc_uint<52>("0bus1001010001001111111101011001010110001101010100010010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000111")) & ((sc_uint<53>)(sc_uint<52>("0bus1001000100000000101001001001011010011101110100001110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001000")) & ((sc_uint<53>)(sc_uint<52>("0bus1000110110111001110001101001011110101010010100001010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001001")) & ((sc_uint<53>)(sc_uint<52>("0bus1000101001111011001111001001100010110010110100000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001010")) & ((sc_uint<53>)(sc_uint<52>("0bus1000011101000100111001101001100110110111010100000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001011")) & ((sc_uint<53>)(sc_uint<52>("0bus1000010000010110101001001001101010111000000011111110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001100")) & ((sc_uint<53>)(sc_uint<52>("0bus1000000011110000010110101001101110110100110011111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001101")) & ((sc_uint<53>)(sc_uint<51>("0bus111110111010001111010001001110010101110000011110111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001110")) & ((sc_uint<53>)(sc_uint<51>("0bus111101010111011001100101001110110100011110011110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001111")) & ((sc_uint<53>)(sc_uint<51>("0bus111011110101100000110111001111010010110000011110000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010000")) & ((sc_uint<53>)(sc_uint<51>("0bus111010010100100100001111001111110000100100011101100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010001")) & ((sc_uint<53>)(sc_uint<51>("0bus111000110100100010110101010000001101111110011101001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010010")) & ((sc_uint<53>)(sc_uint<51>("0bus110111010101011011110101010000101010111110011100110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010011")) & ((sc_uint<53>)(sc_uint<51>("0bus110101110111001110010111010001000111100010011100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010100")) & ((sc_uint<53>)(sc_uint<51>("0bus110100011001111001101011010001100011101110011011111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010101")) & ((sc_uint<53>)(sc_uint<51>("0bus110010111101011100111011010001111111100000011011100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010110")) & ((sc_uint<53>)(sc_uint<51>("0bus110001100001110111010111010010011010111000011011001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010111")) & ((sc_uint<53>)(sc_uint<51>("0bus110000000111001000001011010010110101111000011010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011000")) & ((sc_uint<53>)(sc_uint<51>("0bus101110101101001110101001010011010000100010011010011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011001")) & ((sc_uint<53>)(sc_uint<51>("0bus101101010100001010000001010011101010110010011010000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011010")) & ((sc_uint<53>)(sc_uint<51>("0bus101011111011111001100011010100000100101110011001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011011")) & ((sc_uint<53>)(sc_uint<51>("0bus101010100100011100100101010100011110010000011001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011100")) & ((sc_uint<53>)(sc_uint<51>("0bus101001001101110010010111010100110111011110011001000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011101")) & ((sc_uint<53>)(sc_uint<51>("0bus100111110111111010001111010101010000010110011000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011110")) & ((sc_uint<53>)(sc_uint<51>("0bus100110100010110011011111010101101000111000011000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011111")) & ((sc_uint<53>)(sc_uint<51>("0bus100101001110011101011111010110000001000110011000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100000")) & ((sc_uint<53>)(sc_uint<51>("0bus100011111010110111100101010110011000111110010111101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100001")) & ((sc_uint<53>)(sc_uint<51>("0bus100010101000000001001001010110110000100010010111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100010")) & ((sc_uint<53>)(sc_uint<51>("0bus100001010101111001100001010111000111110010010111000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100011")) & ((sc_uint<53>)(sc_uint<51>("0bus100000000100100000000101010111011110110000010110110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100100")) & ((sc_uint<53>)(sc_uint<50>("0bus11110110011110100001111010111110101011000010110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100101")) & ((sc_uint<53>)(sc_uint<50>("0bus11101100011110101011001011000001011110000010110001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100110")) & ((sc_uint<53>)(sc_uint<50>("0bus11100010100100010111111011000100001110100010101111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100111")) & ((sc_uint<53>)(sc_uint<50>("0bus11011000101111100011001011000110111100110010101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101000")) & ((sc_uint<53>)(sc_uint<50>("0bus11001111000000001000111011001001101000110010101010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101001")) & ((sc_uint<53>)(sc_uint<50>("0bus11000101010110000100001011001100010010100010101000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101010")) & ((sc_uint<53>)(sc_uint<50>("0bus10111011110001010000111011001110111010000010100110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101011")) & ((sc_uint<53>)(sc_uint<50>("0bus10110010010001101010101011010001011111100010100100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101100")) & ((sc_uint<53>)(sc_uint<50>("0bus10101000110111001101001011010100000010110010100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101101")) & ((sc_uint<53>)(sc_uint<50>("0bus10011111100001110100011011010110100100010010100000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101110")) & ((sc_uint<53>)(sc_uint<50>("0bus10010110010001011100011011011001000011100010011110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101111")) & ((sc_uint<53>)(sc_uint<50>("0bus10001101000110000000111011011011100000110010011100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110000")) & ((sc_uint<53>)(sc_uint<50>("0bus10000011111111011101111011011101111100010010011010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110001")) & ((sc_uint<53>)(sc_uint<49>("0bus1111010111101101111111011100000010101100010011000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110010")) & ((sc_uint<53>)(sc_uint<49>("0bus1110010000000110010101011100010101101000010010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110011")) & ((sc_uint<53>)(sc_uint<49>("0bus1101001001000100010101011100101000010110010010100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110100")) & ((sc_uint<53>)(sc_uint<49>("0bus1100000010100111100001011100111010110100010010010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110101")) & ((sc_uint<53>)(sc_uint<49>("0bus1010111100101111011101011101001101000100010010001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110110")) & ((sc_uint<53>)(sc_uint<49>("0bus1001110111011011101001011101011111000110010001111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110111")) & ((sc_uint<53>)(sc_uint<49>("0bus1000110010101011101101011101110000111100010001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111000")) & ((sc_uint<53>)(sc_uint<48>("0bus111101110011111001011011110000010100010010001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111001")) & ((sc_uint<53>)(sc_uint<48>("0bus110101010110101100111011110010011111010010001010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111010")) & ((sc_uint<53>)(sc_uint<48>("0bus101100111101110101001011110100101000110010001000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111011")) & ((sc_uint<53>)(sc_uint<48>("0bus100100101001001110011011110110110000100010000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111100")) & ((sc_uint<53>)(sc_uint<47>("0bus11100011000110101101011111000110110110010000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111101")) & ((sc_uint<53>)(sc_uint<47>("0bus10100001100100111111011111010111011010010000011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111110")) & ((sc_uint<53>)(sc_uint<46>("0bus1100000100100001101011111100111110100010000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111111")) & ((sc_uint<53>)(sc_uint<45>("0bus100000000100000001011111111000000000010000000")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71(0,0)
    // part assign: lhs_part_99(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71(0,0)
    sc_signal<sc_uint<1> > lhs_part_99;
    void method_31() {
        lhs_part_99 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31(2,0)
    // part assign: lhs_part_100(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31(2,0)
    sc_signal<sc_uint<3> > lhs_part_100;
    void method_32() {
        lhs_part_100 = sc_uint<3>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71.read()(0,0),sc_uint<1>(0),a_man.read()(14,14))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66(0,0)
    // part assign: lhs_part_101(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66(0,0)
    sc_signal<sc_uint<1> > lhs_part_101;
    void method_33() {
        lhs_part_101 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__68
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__68 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32(3,0)
    // part assign: lhs_part_102(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32(3,0)
    sc_signal<sc_uint<4> > lhs_part_102;
    void method_35() {
        lhs_part_102 = sc_uint<4>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__68.read(),sc_uint<1>(0),a_man.read()(13,13))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61(0,0)
    // part assign: lhs_part_103(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61(0,0)
    sc_signal<sc_uint<1> > lhs_part_103;
    void method_36() {
        lhs_part_103 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(12,12))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__63
    void method_37() {
        sc_uint<2> temp_37;
        temp_37 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(12,12)) == sc_uint<1>("0bus1")) & ((sc_uint<2>)(a_man.read()(14,13)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__63 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33(4,0)
    // part assign: lhs_part_104(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33(4,0)
    sc_signal<sc_uint<5> > lhs_part_104;
    void method_38() {
        lhs_part_104 = sc_uint<5>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__63.read(),sc_uint<1>(0),a_man.read()(12,12))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56(0,0)
    // part assign: lhs_part_105(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56(0,0)
    sc_signal<sc_uint<1> > lhs_part_105;
    void method_39() {
        lhs_part_105 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(11,11))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__58
    void method_40() {
        sc_uint<3> temp_40;
        temp_40 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(11,11)) == sc_uint<1>("0bus1")) & ((sc_uint<3>)(a_man.read()(14,12)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__58 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34(5,0)
    // part assign: lhs_part_106(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34(5,0)
    sc_signal<sc_uint<6> > lhs_part_106;
    void method_41() {
        lhs_part_106 = sc_uint<6>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__58.read(),sc_uint<1>(0),a_man.read()(11,11))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51(0,0)
    // part assign: lhs_part_107(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51(0,0)
    sc_signal<sc_uint<1> > lhs_part_107;
    void method_42() {
        lhs_part_107 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(10,10))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__53
    void method_43() {
        sc_uint<4> temp_43;
        temp_43 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(10,10)) == sc_uint<1>("0bus1")) & ((sc_uint<4>)(a_man.read()(14,11)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__53 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35(6,0)
    // part assign: lhs_part_108(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35(6,0)
    sc_signal<sc_uint<7> > lhs_part_108;
    void method_44() {
        lhs_part_108 = sc_uint<7>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__53.read(),sc_uint<1>(0),a_man.read()(10,10))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46(0,0)
    // part assign: lhs_part_109(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46(0,0)
    sc_signal<sc_uint<1> > lhs_part_109;
    void method_45() {
        lhs_part_109 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(9,9))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__48
    void method_46() {
        sc_uint<5> temp_46;
        temp_46 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(9,9)) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(a_man.read()(14,10)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__48 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36(7,0)
    // part assign: lhs_part_110(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36(7,0)
    sc_signal<sc_uint<8> > lhs_part_110;
    void method_47() {
        lhs_part_110 = sc_uint<8>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__48.read(),sc_uint<1>(0),a_man.read()(9,9))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41(0,0)
    // part assign: lhs_part_111(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41(0,0)
    sc_signal<sc_uint<1> > lhs_part_111;
    void method_48() {
        lhs_part_111 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__43
    void method_49() {
        sc_uint<6> temp_49;
        temp_49 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(8,8)) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(a_man.read()(14,9)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__43 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37(8,0)
    // part assign: lhs_part_112(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37(8,0)
    sc_signal<sc_uint<9> > lhs_part_112;
    void method_50() {
        lhs_part_112 = sc_uint<9>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__43.read(),sc_uint<1>(0),a_man.read()(8,8))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36(0,0)
    // part assign: lhs_part_113(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36(0,0)
    sc_signal<sc_uint<1> > lhs_part_113;
    void method_51() {
        lhs_part_113 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__38
    void method_52() {
        sc_uint<7> temp_52;
        temp_52 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(7,7)) == sc_uint<1>("0bus1")) & ((sc_uint<7>)(a_man.read()(14,8)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__38 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38(9,0)
    // part assign: lhs_part_114(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38(9,0)
    sc_signal<sc_uint<10> > lhs_part_114;
    void method_53() {
        lhs_part_114 = sc_uint<10>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__38.read(),sc_uint<1>(0),a_man.read()(7,7))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31(0,0)
    // part assign: lhs_part_115(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31(0,0)
    sc_signal<sc_uint<1> > lhs_part_115;
    void method_54() {
        lhs_part_115 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__33
    void method_55() {
        sc_uint<8> temp_55;
        temp_55 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(6,6)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(a_man.read()(14,7)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__33 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39(10,0)
    // part assign: lhs_part_116(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39(10,0)
    sc_signal<sc_uint<11> > lhs_part_116;
    void method_56() {
        lhs_part_116 = sc_uint<11>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__33.read(),sc_uint<1>(0),a_man.read()(6,6))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26(0,0)
    // part assign: lhs_part_117(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26(0,0)
    sc_signal<sc_uint<1> > lhs_part_117;
    void method_57() {
        lhs_part_117 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__28
    void method_58() {
        sc_uint<9> temp_58;
        temp_58 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(5,5)) == sc_uint<1>("0bus1")) & ((sc_uint<9>)(a_man.read()(14,6)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__28 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40(11,0)
    // part assign: lhs_part_118(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40(11,0)
    sc_signal<sc_uint<12> > lhs_part_118;
    void method_59() {
        lhs_part_118 = sc_uint<12>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__28.read(),sc_uint<1>(0),a_man.read()(5,5))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16(0,0)
    // part assign: lhs_part_119(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16(0,0)
    sc_signal<sc_uint<1> > lhs_part_119;
    void method_60() {
        lhs_part_119 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__18
    void method_61() {
        sc_uint<11> temp_61;
        temp_61 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(3,3)) == sc_uint<1>("0bus1")) & ((sc_uint<11>)(a_man.read()(14,4)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__18 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41(13,0)
    // part assign: lhs_part_120(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41(13,0)
    sc_signal<sc_uint<14> > lhs_part_120;
    void method_62() {
        lhs_part_120 = sc_uint<14>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__18.read(),sc_uint<1>(0),a_man.read()(3,3))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21(0,0)
    // part assign: lhs_part_121(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21(0,0)
    sc_signal<sc_uint<1> > lhs_part_121;
    void method_63() {
        lhs_part_121 = sc_uint<1>(
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34.read()))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__23
    void method_64() {
        sc_uint<10> temp_64;
        temp_64 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(4,4)) == sc_uint<1>("0bus1")) & ((sc_uint<10>)(a_man.read()(14,5)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__23 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42(12,0)
    // part assign: lhs_part_122(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42(12,0)
    sc_signal<sc_uint<13> > lhs_part_122;
    void method_65() {
        lhs_part_122 = sc_uint<13>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21.read()(0,0),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__23.read(),sc_uint<1>(0),a_man.read()(4,4))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_6;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_9;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_10;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_11;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_12;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_13;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_14;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_15;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_16;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_17;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_17
    void method_66() {
        sc_uint<25> temp_66;
        temp_66 = 
            
            +((sc_uint<25>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242.read()))
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31.read()(2,0))<<(shift_v)22))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_17 = temp_66;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_16
    void method_67() {
        sc_uint<25> temp_67;
        temp_67 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_17.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32.read()(3,0))<<(shift_v)20))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_16 = temp_67;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_15
    void method_68() {
        sc_uint<25> temp_68;
        temp_68 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_16.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33.read()(4,0))<<(shift_v)18))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_15 = temp_68;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_14
    void method_69() {
        sc_uint<25> temp_69;
        temp_69 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_15.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34.read()(5,0))<<(shift_v)16))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_14 = temp_69;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_13
    void method_70() {
        sc_uint<25> temp_70;
        temp_70 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_14.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35.read()(6,0))<<(shift_v)14))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_13 = temp_70;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_12
    void method_71() {
        sc_uint<25> temp_71;
        temp_71 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_13.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36.read()(7,0))<<(shift_v)12))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_12 = temp_71;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_11
    void method_72() {
        sc_uint<25> temp_72;
        temp_72 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_12.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37.read()(8,0))<<(shift_v)10))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_11 = temp_72;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_10
    void method_73() {
        sc_uint<25> temp_73;
        temp_73 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_11.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38.read()(9,0))<<(shift_v)8))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_10 = temp_73;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_9
    void method_74() {
        sc_uint<25> temp_74;
        temp_74 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_10.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39.read()(10,0))<<(shift_v)6))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_9 = temp_74;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_8
    void method_75() {
        sc_uint<25> temp_75;
        temp_75 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_9.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40.read()(11,0))<<(shift_v)4))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_8 = temp_75;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_7
    void method_76() {
        sc_uint<25> temp_76;
        temp_76 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_8.read()
            +((sc_uint<25>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41.read()(13,0)))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_7 = temp_76;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_6
    void method_77() {
        sc_uint<25> temp_77;
        temp_77 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_7.read()
            +((sc_uint<25>)(((sc_uint<25>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42.read()(12,0))<<(shift_v)2))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_6 = temp_77;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49(24,0)
    // part assign: lhs_part_123(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49(24,0)
    sc_signal<sc_uint<25> > lhs_part_123;
    void method_78() {
        lhs_part_123 = sc_uint<25>(
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_6.read()
            +((sc_uint<25>)(sc_uint<15>("0bus010000000000000")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0)
    // part assign: lhs_part_124(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0)
    sc_signal<sc_uint<22> > lhs_part_124;
    void method_79() {
        lhs_part_124 = sc_uint<22>(
        
            +((sc_uint<22>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49.read()(24,13)) * (sc_uint<22>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47.read()(9,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44(18,0)
    // part assign: lhs_part_125(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44(18,0)
    sc_signal<sc_uint<19> > lhs_part_125;
    void method_80() {
        lhs_part_125 = sc_uint<19>(
        (sc_uint<1>(1),float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47.read()(27,10))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)
    // part assign: lhs_part_126(1): float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)
    sc_signal<sc_uint<34> > lhs_part_126;
    void method_81() {
        lhs_part_126 = sc_uint<34>(
        
            +((sc_uint<34>)(( ((sc_uint<15>)(sc_int<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44.read()[18])), float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44.read()(18,0) )) * (sc_uint<34>)(( ((sc_uint<18>)(sc_int<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0.read()[15])), float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0.read() )))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<40> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_18;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<40> > float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_19;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_19
    void method_82() {
        sc_uint<40> temp_82;
        temp_82 = 
            
            +((sc_uint<40>)(((sc_uint<40>)(( (sc_uint<40>)(( ((sc_uint<14>)(sc_int<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read()[21])), float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read()(21,0) )))<<(shift_v)4))))
            +((sc_uint<40>)(((sc_uint<40>)((float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47.read()(52,28))<<(shift_v)15))))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_19 = temp_82;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_18
    void method_83() {
        sc_uint<40> temp_83;
        temp_83 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_19.read()
            +((sc_uint<40>)(( ((sc_uint<6>)(sc_int<1>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read()[33])), (sc_biguint<34>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read()(33,0)) )))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_18 = temp_83;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57
    void method_84() {
        sc_uint<40> temp_84;
        temp_84 = 
            float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_18.read()
            +((sc_uint<40>)(sc_uint<18>("0bus010000000000000000")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57 = temp_84;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59
    void method_85() {
        sc_uint<23> temp_85;
        temp_85 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29.read()) == sc_uint<2>("0bus00")) & ((sc_uint<23>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57.read()(39,17))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29.read()) == sc_uint<2>("0bus01")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59 = temp_85;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(31,0)
    // part assign: lhs_part_127(2): float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(31,0)
    sc_signal<sc_uint<32> > lhs_part_127;
    void method_86() {
        lhs_part_127 = sc_uint<32>(
        (float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__30.read(),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32.read(),float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(32,32)
    // part assign: lhs_part_128(3): float_div_cynw_cm_float_rcp_E8_M23_0_inst_x(32,32)
    sc_signal<sc_uint<1> > lhs_part_128;
    void method_87() {
        lhs_part_128 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<37> > cascade_x[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_88() {
                    if (bdw_enable.read()==1) {cascade_x[0] = (sc_uint<37>)((sc_uint<37>)(float_div_cynw_cm_float_rcp_E8_M23_0_inst_x.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_89() {
            x = cascade_x[0].read();
    }
    void method_90() { 
        sc_uint<25> temp_90 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242.read();
        temp_90(24,24) = lhs_part_96.read();
        temp_90(23,0) = lhs_part_97.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242 = temp_90;
}
    void method_91() { 
        sc_uint<37> temp_91 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_x.read();
        temp_91(36,33) = lhs_part_98.read();
        temp_91(31,0) = lhs_part_127.read();
        temp_91(32,32) = lhs_part_128.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_x = temp_91;
}
    void method_92() { 
        sc_uint<2> temp_92 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71.read();
        temp_92(0,0) = lhs_part_99.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71 = temp_92;
}
    void method_93() { 
        sc_uint<25> temp_93 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31.read();
        temp_93(2,0) = lhs_part_100.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31 = temp_93;
}
    void method_94() { 
        sc_uint<2> temp_94 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66.read();
        temp_94(0,0) = lhs_part_101.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66 = temp_94;
}
    void method_95() { 
        sc_uint<25> temp_95 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32.read();
        temp_95(3,0) = lhs_part_102.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32 = temp_95;
}
    void method_96() { 
        sc_uint<2> temp_96 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61.read();
        temp_96(0,0) = lhs_part_103.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61 = temp_96;
}
    void method_97() { 
        sc_uint<25> temp_97 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33.read();
        temp_97(4,0) = lhs_part_104.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33 = temp_97;
}
    void method_98() { 
        sc_uint<2> temp_98 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56.read();
        temp_98(0,0) = lhs_part_105.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56 = temp_98;
}
    void method_99() { 
        sc_uint<25> temp_99 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34.read();
        temp_99(5,0) = lhs_part_106.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34 = temp_99;
}
    void method_100() { 
        sc_uint<2> temp_100 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51.read();
        temp_100(0,0) = lhs_part_107.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51 = temp_100;
}
    void method_101() { 
        sc_uint<25> temp_101 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35.read();
        temp_101(6,0) = lhs_part_108.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35 = temp_101;
}
    void method_102() { 
        sc_uint<2> temp_102 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46.read();
        temp_102(0,0) = lhs_part_109.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46 = temp_102;
}
    void method_103() { 
        sc_uint<25> temp_103 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36.read();
        temp_103(7,0) = lhs_part_110.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36 = temp_103;
}
    void method_104() { 
        sc_uint<2> temp_104 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41.read();
        temp_104(0,0) = lhs_part_111.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41 = temp_104;
}
    void method_105() { 
        sc_uint<25> temp_105 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37.read();
        temp_105(8,0) = lhs_part_112.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37 = temp_105;
}
    void method_106() { 
        sc_uint<2> temp_106 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36.read();
        temp_106(0,0) = lhs_part_113.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36 = temp_106;
}
    void method_107() { 
        sc_uint<25> temp_107 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38.read();
        temp_107(9,0) = lhs_part_114.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38 = temp_107;
}
    void method_108() { 
        sc_uint<2> temp_108 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31.read();
        temp_108(0,0) = lhs_part_115.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31 = temp_108;
}
    void method_109() { 
        sc_uint<25> temp_109 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39.read();
        temp_109(10,0) = lhs_part_116.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39 = temp_109;
}
    void method_110() { 
        sc_uint<2> temp_110 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26.read();
        temp_110(0,0) = lhs_part_117.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26 = temp_110;
}
    void method_111() { 
        sc_uint<25> temp_111 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40.read();
        temp_111(11,0) = lhs_part_118.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40 = temp_111;
}
    void method_112() { 
        sc_uint<2> temp_112 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16.read();
        temp_112(0,0) = lhs_part_119.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16 = temp_112;
}
    void method_113() { 
        sc_uint<25> temp_113 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41.read();
        temp_113(13,0) = lhs_part_120.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41 = temp_113;
}
    void method_114() { 
        sc_uint<2> temp_114 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21.read();
        temp_114(0,0) = lhs_part_121.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21 = temp_114;
}
    void method_115() { 
        sc_uint<25> temp_115 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42.read();
        temp_115(12,0) = lhs_part_122.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42 = temp_115;
}
    void method_116() { 
        sc_uint<27> temp_116 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49.read();
        temp_116(24,0) = lhs_part_123.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49 = temp_116;
}
    void method_117() { 
        sc_uint<24> temp_117 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read();
        temp_117(21,0) = lhs_part_124.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum = temp_117;
}
    void method_118() { 
        sc_uint<34> temp_118 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44.read();
        temp_118(18,0) = lhs_part_125.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44 = temp_118;
}
    void method_119() { 
        sc_uint<37> temp_119 = float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read();
        temp_119(33,0) = lhs_part_126.read();
        float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum = temp_119;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(float_div_cynw_cm_float_rcp_E8_M23_2)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_1);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_2);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n4;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_3);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_4);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_5);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_6);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_7);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_8);
        sensitive << a_exp
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__16
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__26;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_10);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_11);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_12);
        sensitive << a_exp
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__4
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__24
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_15);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28__7;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_16);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__18
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_17);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59__81
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_18);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_19);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_20);

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_21);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_22);
        sensitive << astall;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_23);

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_24);
        sensitive << a_sign
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n66;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_25);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__25
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_26);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32__14
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__28;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_27);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__22__5
                  << a_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_28);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31_tmp_5;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_29);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__31
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_30;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_30);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_31);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_32);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__71
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_33);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_35);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__66
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__68
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_37);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_38);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__61
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__63
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_39);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_40);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_41);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__56
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__58
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_43);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_44);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__51
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__53
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_46);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_47);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__46
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__48
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_48);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_49);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_50);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__41
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__43
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_51);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_52);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_53);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__36
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__38
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_54);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_55);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_56);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__31
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__33
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_57);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_58);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_59);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__26
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__28
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_61);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_62);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__16
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__18
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_63);
        sensitive << a_man
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_64);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_65);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__21
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49__23
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_66);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_n242
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_31;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_67);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_17
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_32;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_68);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_16
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_33;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_69);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_15
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_34;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_70);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_14
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_35;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_71);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_13
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_36;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_72);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_12
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_37;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_73);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_11
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_38;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_74);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_10
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_39;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_75);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_9
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_40;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_76);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_8
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_41;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_77);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_7
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_42;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_78);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49_tmp_6;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_79);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_mult_d_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_80);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_81);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_43_0
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_44;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_82);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_47;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_83);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_19
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_84);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57_tmp_18;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_85);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__57
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_tmp_29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_86);
        sensitive << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__30
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__32
                  << float_div_cynw_cm_float_rcp_E8_M23_0_inst_inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_87);

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_88);
        sensitive << aclk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_89);
        sensitive << cascade_x[0];
        SC_METHOD(method_90);
        sensitive << lhs_part_96
                  << lhs_part_97;
        SC_METHOD(method_91);
        sensitive << lhs_part_98
                  << lhs_part_127
                  << lhs_part_128;
        SC_METHOD(method_92);
        sensitive << lhs_part_99;
        SC_METHOD(method_93);
        sensitive << lhs_part_100;
        SC_METHOD(method_94);
        sensitive << lhs_part_101;
        SC_METHOD(method_95);
        sensitive << lhs_part_102;
        SC_METHOD(method_96);
        sensitive << lhs_part_103;
        SC_METHOD(method_97);
        sensitive << lhs_part_104;
        SC_METHOD(method_98);
        sensitive << lhs_part_105;
        SC_METHOD(method_99);
        sensitive << lhs_part_106;
        SC_METHOD(method_100);
        sensitive << lhs_part_107;
        SC_METHOD(method_101);
        sensitive << lhs_part_108;
        SC_METHOD(method_102);
        sensitive << lhs_part_109;
        SC_METHOD(method_103);
        sensitive << lhs_part_110;
        SC_METHOD(method_104);
        sensitive << lhs_part_111;
        SC_METHOD(method_105);
        sensitive << lhs_part_112;
        SC_METHOD(method_106);
        sensitive << lhs_part_113;
        SC_METHOD(method_107);
        sensitive << lhs_part_114;
        SC_METHOD(method_108);
        sensitive << lhs_part_115;
        SC_METHOD(method_109);
        sensitive << lhs_part_116;
        SC_METHOD(method_110);
        sensitive << lhs_part_117;
        SC_METHOD(method_111);
        sensitive << lhs_part_118;
        SC_METHOD(method_112);
        sensitive << lhs_part_119;
        SC_METHOD(method_113);
        sensitive << lhs_part_120;
        SC_METHOD(method_114);
        sensitive << lhs_part_121;
        SC_METHOD(method_115);
        sensitive << lhs_part_122;
        SC_METHOD(method_116);
        sensitive << lhs_part_123;
        SC_METHOD(method_117);
        sensitive << lhs_part_124;
        SC_METHOD(method_118);
        sensitive << lhs_part_125;
        SC_METHOD(method_119);
        sensitive << lhs_part_126;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef float_div_cynw_cm_float_rcp_E8_M23_2_COMPILED

/* CADENCE  s7n5SQjdqg== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




