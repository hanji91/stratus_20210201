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
    
    Configured at: 12:11:01 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef float_div_cynw_cm_float_rcp_E8_M23_2_0_COMPILED
#define float_div_cynw_cm_float_rcp_E8_M23_2_0_COMPILED

SC_MODULE(float_div_cynw_cm_float_rcp_E8_M23_2_0) // architecture "behavioural"
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
    sc_signal<sc_uint<1> > inst_cellmath__16;
    sc_signal<sc_uint<1> > inst_cellmath__17;
    sc_signal<sc_uint<1> > inst_cellmath__18;
    sc_signal<sc_uint<1> > inst_cellmath__22;
    sc_signal<sc_uint<1> > inst_cellmath__24;
    sc_signal<sc_uint<1> > inst_cellmath__25;
    sc_signal<sc_uint<1> > inst_cellmath__26;
    sc_signal<sc_uint<1> > inst_cellmath__28;
    sc_signal<sc_uint<1> > inst_cellmath__29;
    sc_signal<sc_uint<1> > inst_cellmath__30;
    sc_signal<sc_uint<8> > inst_cellmath__31;
    sc_signal<sc_uint<8> > inst_cellmath__32;
    sc_signal<sc_uint<1> > inst_cellmath__34;
    sc_signal<sc_uint<16> > inst_cellmath__36;
    sc_signal<sc_uint<19> > inst_cellmath__38;
    sc_signal<sc_uint<27> > inst_mult_d_cellmath__49;
    sc_signal<sc_uint<24> > inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum;
    sc_signal<sc_uint<37> > inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
    sc_signal<sc_uint<40> > inst_cellmath__57;
    sc_signal<sc_uint<23> > inst_cellmath__59;
    sc_signal<sc_uint<32> > inst_cellmath__69;
    sc_signal<sc_uint<1> > inst_cellmath__22__5;
    sc_signal<sc_uint<1> > inst_cellmath__22__4;
    sc_signal<sc_uint<1> > inst_cellmath__28__7;
    sc_signal<sc_uint<1> > inst_cellmath__29__8;
    sc_signal<sc_uint<1> > inst_cellmath__32__14;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__17;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__16;
    sc_signal<sc_uint<11> > inst_mult_d_cellmath__49__18;
    sc_signal<sc_uint<14> > inst_mult_d_cellmath__49__15;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__22;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__21;
    sc_signal<sc_uint<10> > inst_mult_d_cellmath__49__23;
    sc_signal<sc_uint<13> > inst_mult_d_cellmath__49__20;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__27;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__26;
    sc_signal<sc_uint<9> > inst_mult_d_cellmath__49__28;
    sc_signal<sc_uint<12> > inst_mult_d_cellmath__49__25;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__32;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__31;
    sc_signal<sc_uint<8> > inst_mult_d_cellmath__49__33;
    sc_signal<sc_uint<11> > inst_mult_d_cellmath__49__30;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__37;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__36;
    sc_signal<sc_uint<7> > inst_mult_d_cellmath__49__38;
    sc_signal<sc_uint<10> > inst_mult_d_cellmath__49__35;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__42;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__41;
    sc_signal<sc_uint<6> > inst_mult_d_cellmath__49__43;
    sc_signal<sc_uint<9> > inst_mult_d_cellmath__49__40;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__47;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__46;
    sc_signal<sc_uint<5> > inst_mult_d_cellmath__49__48;
    sc_signal<sc_uint<8> > inst_mult_d_cellmath__49__45;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__52;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__51;
    sc_signal<sc_uint<4> > inst_mult_d_cellmath__49__53;
    sc_signal<sc_uint<7> > inst_mult_d_cellmath__49__50;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__57;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__56;
    sc_signal<sc_uint<3> > inst_mult_d_cellmath__49__58;
    sc_signal<sc_uint<6> > inst_mult_d_cellmath__49__55;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__62;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__61;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__63;
    sc_signal<sc_uint<5> > inst_mult_d_cellmath__49__60;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__67;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__66;
    sc_signal<sc_uint<1> > inst_mult_d_cellmath__49__68;
    sc_signal<sc_uint<4> > inst_mult_d_cellmath__49__65;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__72;
    sc_signal<sc_uint<2> > inst_mult_d_cellmath__49__71;
    sc_signal<sc_uint<3> > inst_mult_d_cellmath__49__70;
    sc_signal<sc_uint<1> > inst_cellmath__59__81;
    sc_signal<sc_uint<2> > inst_cellmath__32__14_0;
    sc_signal<sc_uint<2> > inst_cellmath__59__81_0;
    sc_signal<sc_uint<53> > inst_noninc_a_cellmath__42_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(32,32)
    // part assign: lhs_part_183(1): x(32,32)
    sc_signal<sc_uint<1> > lhs_part_183;
    void method_0() {
        lhs_part_183 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__17
    void method_1() {
        sc_uint<1> temp_1;

                    sc_uint<13> inst_cellmath__17_tmp_0 = 
            -((sc_uint<13>)(a_exp.read()))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        temp_1 = (((sc_uint<1>)inst_cellmath__17_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__17 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__18
    void method_2() {
        sc_uint<1> temp_2;

                    sc_uint<27> inst_cellmath__18_tmp_1 = 
            -((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_2 = (((sc_uint<1>)inst_cellmath__18_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__18 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__25
    void method_3() {
        sc_uint<1> temp_3;
        temp_3 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__18.read())))
        ;
        inst_cellmath__25 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__16
    void method_4() {
        sc_uint<1> temp_4;

                    sc_uint<12> inst_cellmath__16_tmp_2 = 
            -((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_4 = (((sc_uint<1>)inst_cellmath__16_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__16 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__22__5
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            ~(sc_uint<1>)(inst_cellmath__18.read())
        ;
        inst_cellmath__22__5 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__26
    void method_6() {
        sc_uint<1> temp_6;

                    sc_uint<12> inst_cellmath__26_tmp_3 = 
            +((sc_uint<12>)(a_exp.read()))
            +((sc_uint<12>)(inst_cellmath__22__5.read()));
        temp_6 = (((sc_uint<1>)(inst_cellmath__26_tmp_3[11]))==((sc_uint<1>)1))
        ;
        inst_cellmath__26 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__29__8
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26.read())))
        ;
        inst_cellmath__29__8 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__29
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29__8.read())))
        ;
        inst_cellmath__29 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32__14
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read())))
        ;
        inst_cellmath__32__14 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__24
    void method_10() {
        sc_uint<1> temp_10;
        temp_10 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18.read())))
        ;
        inst_cellmath__24 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__22__4
    void method_11() {
        sc_uint<1> temp_11;

                    sc_uint<14> inst_cellmath__22__4_tmp_4 = 
            -((sc_uint<14>)(a_exp.read()))
            -((sc_uint<14>)(inst_cellmath__22__5.read()))
            +((sc_uint<14>)(sc_uint<9>("0bus011111101")));
        temp_11 = (((sc_uint<1>)(inst_cellmath__22__4_tmp_4[13]))==((sc_uint<1>)1))
        ;
        inst_cellmath__22__4 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__22
    void method_12() {
        sc_uint<1> temp_12;
        temp_12 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22__4.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__17.read())))
        ;
        inst_cellmath__22 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__28__7
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22.read())))
        ;
        inst_cellmath__28__7 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__28
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28__7.read())))
        ;
        inst_cellmath__28 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__32__14_0
    void method_15() {
        sc_uint<2> temp_15;
        temp_15 = 
            (inst_cellmath__32__14.read(),inst_cellmath__28.read())
        ;
        inst_cellmath__32__14_0 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__30
    void method_16() {
        sc_uint<1> temp_16;
        temp_16 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25.read())))
        ;
        inst_cellmath__30 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<8> > inst_cellmath__31_tmp_5;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__31_tmp_5
    void method_17() {
        sc_uint<8> temp_17;
        temp_17 = 
            
            -((sc_uint<8>)(inst_cellmath__22__5.read()))
            -((sc_uint<8>)(a_exp.read()))
        ;
        inst_cellmath__31_tmp_5 = temp_17;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__31
    void method_18() {
        sc_uint<8> temp_18;
        temp_18 = 
            inst_cellmath__31_tmp_5.read()
            +((sc_uint<8>)(sc_uint<8>("0bus11111110")))
        ;
        inst_cellmath__31 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__32
    void method_19() {
        sc_uint<8> temp_19;
        temp_19 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__32__14_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__31.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32__14_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__32 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__59__81
    void method_20() {
        sc_uint<1> temp_20;
        temp_20 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read())))
        ;
        inst_cellmath__59__81 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__59__81_0
    void method_21() {
        sc_uint<2> temp_21;
        temp_21 = 
            (inst_cellmath__59__81.read(),inst_cellmath__25.read())
        ;
        inst_cellmath__59__81_0 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__34
    void method_22() {
        sc_uint<1> temp_22;
        temp_22 = 
            ~(sc_uint<1>)(a_man.read()(15,15))
        ;
        inst_cellmath__34 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__72(0,0)
    // part assign: lhs_part_184(1): inst_mult_d_cellmath__49__72(0,0)
    sc_signal<sc_uint<1> > lhs_part_184;
    void method_23() {
        lhs_part_184 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__71(0,0)
    // part assign: lhs_part_185(1): inst_mult_d_cellmath__49__71(0,0)
    sc_signal<sc_uint<1> > lhs_part_185;
    void method_24() {
        lhs_part_185 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__72.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__70
    void method_25() {
        sc_uint<3> temp_25;
        temp_25 = 
            (inst_mult_d_cellmath__49__71.read()(0,0),sc_uint<1>(0),a_man.read()(14,14))
        ;
        inst_mult_d_cellmath__49__70 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__67(0,0)
    // part assign: lhs_part_186(1): inst_mult_d_cellmath__49__67(0,0)
    sc_signal<sc_uint<1> > lhs_part_186;
    void method_26() {
        lhs_part_186 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__66(0,0)
    // part assign: lhs_part_187(1): inst_mult_d_cellmath__49__66(0,0)
    sc_signal<sc_uint<1> > lhs_part_187;
    void method_27() {
        lhs_part_187 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__67.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__68
    void method_28() {
        sc_uint<1> temp_28;
        temp_28 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
        ;
        inst_mult_d_cellmath__49__68 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__65
    void method_29() {
        sc_uint<4> temp_29;
        temp_29 = 
            (inst_mult_d_cellmath__49__66.read()(0,0),inst_mult_d_cellmath__49__68.read(),sc_uint<1>(0),a_man.read()(13,13))
        ;
        inst_mult_d_cellmath__49__65 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__62(0,0)
    // part assign: lhs_part_188(1): inst_mult_d_cellmath__49__62(0,0)
    sc_signal<sc_uint<1> > lhs_part_188;
    void method_30() {
        lhs_part_188 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(12,12))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__61(0,0)
    // part assign: lhs_part_189(1): inst_mult_d_cellmath__49__61(0,0)
    sc_signal<sc_uint<1> > lhs_part_189;
    void method_31() {
        lhs_part_189 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__62.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__63
    void method_32() {
        sc_uint<2> temp_32;
        temp_32 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(12,12)) == sc_uint<1>("0bus1")) & ((sc_uint<2>)(a_man.read()(14,13)))
        ;
        inst_mult_d_cellmath__49__63 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__60
    void method_33() {
        sc_uint<5> temp_33;
        temp_33 = 
            (inst_mult_d_cellmath__49__61.read()(0,0),inst_mult_d_cellmath__49__63.read(),sc_uint<1>(0),a_man.read()(12,12))
        ;
        inst_mult_d_cellmath__49__60 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__57(0,0)
    // part assign: lhs_part_190(1): inst_mult_d_cellmath__49__57(0,0)
    sc_signal<sc_uint<1> > lhs_part_190;
    void method_34() {
        lhs_part_190 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(11,11))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__56(0,0)
    // part assign: lhs_part_191(1): inst_mult_d_cellmath__49__56(0,0)
    sc_signal<sc_uint<1> > lhs_part_191;
    void method_35() {
        lhs_part_191 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__57.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__58
    void method_36() {
        sc_uint<3> temp_36;
        temp_36 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(11,11)) == sc_uint<1>("0bus1")) & ((sc_uint<3>)(a_man.read()(14,12)))
        ;
        inst_mult_d_cellmath__49__58 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__55
    void method_37() {
        sc_uint<6> temp_37;
        temp_37 = 
            (inst_mult_d_cellmath__49__56.read()(0,0),inst_mult_d_cellmath__49__58.read(),sc_uint<1>(0),a_man.read()(11,11))
        ;
        inst_mult_d_cellmath__49__55 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__52(0,0)
    // part assign: lhs_part_192(1): inst_mult_d_cellmath__49__52(0,0)
    sc_signal<sc_uint<1> > lhs_part_192;
    void method_38() {
        lhs_part_192 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(10,10))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__51(0,0)
    // part assign: lhs_part_193(1): inst_mult_d_cellmath__49__51(0,0)
    sc_signal<sc_uint<1> > lhs_part_193;
    void method_39() {
        lhs_part_193 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__52.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__53
    void method_40() {
        sc_uint<4> temp_40;
        temp_40 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(10,10)) == sc_uint<1>("0bus1")) & ((sc_uint<4>)(a_man.read()(14,11)))
        ;
        inst_mult_d_cellmath__49__53 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__50
    void method_41() {
        sc_uint<7> temp_41;
        temp_41 = 
            (inst_mult_d_cellmath__49__51.read()(0,0),inst_mult_d_cellmath__49__53.read(),sc_uint<1>(0),a_man.read()(10,10))
        ;
        inst_mult_d_cellmath__49__50 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__47(0,0)
    // part assign: lhs_part_194(1): inst_mult_d_cellmath__49__47(0,0)
    sc_signal<sc_uint<1> > lhs_part_194;
    void method_42() {
        lhs_part_194 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(9,9))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__46(0,0)
    // part assign: lhs_part_195(1): inst_mult_d_cellmath__49__46(0,0)
    sc_signal<sc_uint<1> > lhs_part_195;
    void method_43() {
        lhs_part_195 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__47.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__48
    void method_44() {
        sc_uint<5> temp_44;
        temp_44 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(9,9)) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(a_man.read()(14,10)))
        ;
        inst_mult_d_cellmath__49__48 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__45
    void method_45() {
        sc_uint<8> temp_45;
        temp_45 = 
            (inst_mult_d_cellmath__49__46.read()(0,0),inst_mult_d_cellmath__49__48.read(),sc_uint<1>(0),a_man.read()(9,9))
        ;
        inst_mult_d_cellmath__49__45 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__42(0,0)
    // part assign: lhs_part_196(1): inst_mult_d_cellmath__49__42(0,0)
    sc_signal<sc_uint<1> > lhs_part_196;
    void method_46() {
        lhs_part_196 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__41(0,0)
    // part assign: lhs_part_197(1): inst_mult_d_cellmath__49__41(0,0)
    sc_signal<sc_uint<1> > lhs_part_197;
    void method_47() {
        lhs_part_197 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__42.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__43
    void method_48() {
        sc_uint<6> temp_48;
        temp_48 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(8,8)) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(a_man.read()(14,9)))
        ;
        inst_mult_d_cellmath__49__43 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__40
    void method_49() {
        sc_uint<9> temp_49;
        temp_49 = 
            (inst_mult_d_cellmath__49__41.read()(0,0),inst_mult_d_cellmath__49__43.read(),sc_uint<1>(0),a_man.read()(8,8))
        ;
        inst_mult_d_cellmath__49__40 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__37(0,0)
    // part assign: lhs_part_198(1): inst_mult_d_cellmath__49__37(0,0)
    sc_signal<sc_uint<1> > lhs_part_198;
    void method_50() {
        lhs_part_198 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__36(0,0)
    // part assign: lhs_part_199(1): inst_mult_d_cellmath__49__36(0,0)
    sc_signal<sc_uint<1> > lhs_part_199;
    void method_51() {
        lhs_part_199 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__37.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__38
    void method_52() {
        sc_uint<7> temp_52;
        temp_52 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(7,7)) == sc_uint<1>("0bus1")) & ((sc_uint<7>)(a_man.read()(14,8)))
        ;
        inst_mult_d_cellmath__49__38 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__35
    void method_53() {
        sc_uint<10> temp_53;
        temp_53 = 
            (inst_mult_d_cellmath__49__36.read()(0,0),inst_mult_d_cellmath__49__38.read(),sc_uint<1>(0),a_man.read()(7,7))
        ;
        inst_mult_d_cellmath__49__35 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__32(0,0)
    // part assign: lhs_part_200(1): inst_mult_d_cellmath__49__32(0,0)
    sc_signal<sc_uint<1> > lhs_part_200;
    void method_54() {
        lhs_part_200 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__31(0,0)
    // part assign: lhs_part_201(1): inst_mult_d_cellmath__49__31(0,0)
    sc_signal<sc_uint<1> > lhs_part_201;
    void method_55() {
        lhs_part_201 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__32.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__33
    void method_56() {
        sc_uint<8> temp_56;
        temp_56 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(6,6)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(a_man.read()(14,7)))
        ;
        inst_mult_d_cellmath__49__33 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__30
    void method_57() {
        sc_uint<11> temp_57;
        temp_57 = 
            (inst_mult_d_cellmath__49__31.read()(0,0),inst_mult_d_cellmath__49__33.read(),sc_uint<1>(0),a_man.read()(6,6))
        ;
        inst_mult_d_cellmath__49__30 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__27(0,0)
    // part assign: lhs_part_202(1): inst_mult_d_cellmath__49__27(0,0)
    sc_signal<sc_uint<1> > lhs_part_202;
    void method_58() {
        lhs_part_202 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__26(0,0)
    // part assign: lhs_part_203(1): inst_mult_d_cellmath__49__26(0,0)
    sc_signal<sc_uint<1> > lhs_part_203;
    void method_59() {
        lhs_part_203 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__27.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__28
    void method_60() {
        sc_uint<9> temp_60;
        temp_60 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(5,5)) == sc_uint<1>("0bus1")) & ((sc_uint<9>)(a_man.read()(14,6)))
        ;
        inst_mult_d_cellmath__49__28 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__25
    void method_61() {
        sc_uint<12> temp_61;
        temp_61 = 
            (inst_mult_d_cellmath__49__26.read()(0,0),inst_mult_d_cellmath__49__28.read(),sc_uint<1>(0),a_man.read()(5,5))
        ;
        inst_mult_d_cellmath__49__25 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__17(0,0)
    // part assign: lhs_part_204(1): inst_mult_d_cellmath__49__17(0,0)
    sc_signal<sc_uint<1> > lhs_part_204;
    void method_62() {
        lhs_part_204 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__16(0,0)
    // part assign: lhs_part_205(1): inst_mult_d_cellmath__49__16(0,0)
    sc_signal<sc_uint<1> > lhs_part_205;
    void method_63() {
        lhs_part_205 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__17.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__18
    void method_64() {
        sc_uint<11> temp_64;
        temp_64 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(3,3)) == sc_uint<1>("0bus1")) & ((sc_uint<11>)(a_man.read()(14,4)))
        ;
        inst_mult_d_cellmath__49__18 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__15
    void method_65() {
        sc_uint<14> temp_65;
        temp_65 = 
            (inst_mult_d_cellmath__49__16.read()(0,0),inst_mult_d_cellmath__49__18.read(),sc_uint<1>(0),a_man.read()(3,3))
        ;
        inst_mult_d_cellmath__49__15 = temp_65;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_mult_d_cellmath__49__22(0,0)
    // part assign: lhs_part_206(1): inst_mult_d_cellmath__49__22(0,0)
    sc_signal<sc_uint<1> > lhs_part_206;
    void method_66() {
        lhs_part_206 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_mult_d_cellmath__49__21(0,0)
    // part assign: lhs_part_207(1): inst_mult_d_cellmath__49__21(0,0)
    sc_signal<sc_uint<1> > lhs_part_207;
    void method_67() {
        lhs_part_207 = sc_uint<1>(
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__22.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_mult_d_cellmath__49__23
    void method_68() {
        sc_uint<10> temp_68;
        temp_68 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_man.read()(4,4)) == sc_uint<1>("0bus1")) & ((sc_uint<10>)(a_man.read()(14,5)))
        ;
        inst_mult_d_cellmath__49__23 = temp_68;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_mult_d_cellmath__49__20
    void method_69() {
        sc_uint<13> temp_69;
        temp_69 = 
            (inst_mult_d_cellmath__49__21.read()(0,0),inst_mult_d_cellmath__49__23.read(),sc_uint<1>(0),a_man.read()(4,4))
        ;
        inst_mult_d_cellmath__49__20 = temp_69;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_6;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_9;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_10;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_11;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_12;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_13;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_14;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_15;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_16;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<25> > inst_mult_d_cellmath__49_tmp_17;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_17
    void method_70() {
        sc_uint<25> temp_70;
        temp_70 = 
            
            +((sc_uint<25>)(((sc_uint<25>)((inst_cellmath__34.read())<<(shift_v)24))))
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__70.read())<<(shift_v)22))))
        ;
        inst_mult_d_cellmath__49_tmp_17 = temp_70;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_16
    void method_71() {
        sc_uint<25> temp_71;
        temp_71 = 
            inst_mult_d_cellmath__49_tmp_17.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__65.read())<<(shift_v)20))))
        ;
        inst_mult_d_cellmath__49_tmp_16 = temp_71;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_15
    void method_72() {
        sc_uint<25> temp_72;
        temp_72 = 
            inst_mult_d_cellmath__49_tmp_16.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__60.read())<<(shift_v)18))))
        ;
        inst_mult_d_cellmath__49_tmp_15 = temp_72;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_14
    void method_73() {
        sc_uint<25> temp_73;
        temp_73 = 
            inst_mult_d_cellmath__49_tmp_15.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__55.read())<<(shift_v)16))))
        ;
        inst_mult_d_cellmath__49_tmp_14 = temp_73;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_13
    void method_74() {
        sc_uint<25> temp_74;
        temp_74 = 
            inst_mult_d_cellmath__49_tmp_14.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__50.read())<<(shift_v)14))))
        ;
        inst_mult_d_cellmath__49_tmp_13 = temp_74;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_12
    void method_75() {
        sc_uint<25> temp_75;
        temp_75 = 
            inst_mult_d_cellmath__49_tmp_13.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__45.read())<<(shift_v)12))))
        ;
        inst_mult_d_cellmath__49_tmp_12 = temp_75;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_11
    void method_76() {
        sc_uint<25> temp_76;
        temp_76 = 
            inst_mult_d_cellmath__49_tmp_12.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__40.read())<<(shift_v)10))))
        ;
        inst_mult_d_cellmath__49_tmp_11 = temp_76;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_10
    void method_77() {
        sc_uint<25> temp_77;
        temp_77 = 
            inst_mult_d_cellmath__49_tmp_11.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__35.read())<<(shift_v)8))))
        ;
        inst_mult_d_cellmath__49_tmp_10 = temp_77;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_9
    void method_78() {
        sc_uint<25> temp_78;
        temp_78 = 
            inst_mult_d_cellmath__49_tmp_10.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__30.read())<<(shift_v)6))))
        ;
        inst_mult_d_cellmath__49_tmp_9 = temp_78;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_8
    void method_79() {
        sc_uint<25> temp_79;
        temp_79 = 
            inst_mult_d_cellmath__49_tmp_9.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__25.read())<<(shift_v)4))))
        ;
        inst_mult_d_cellmath__49_tmp_8 = temp_79;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_7
    void method_80() {
        sc_uint<25> temp_80;
        temp_80 = 
            inst_mult_d_cellmath__49_tmp_8.read()
            +((sc_uint<25>)(inst_mult_d_cellmath__49__15.read()))
        ;
        inst_mult_d_cellmath__49_tmp_7 = temp_80;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49_tmp_6
    void method_81() {
        sc_uint<25> temp_81;
        temp_81 = 
            inst_mult_d_cellmath__49_tmp_7.read()
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__20.read())<<(shift_v)2))))
        ;
        inst_mult_d_cellmath__49_tmp_6 = temp_81;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_mult_d_cellmath__49(24,0)
    // part assign: lhs_part_208(1): inst_mult_d_cellmath__49(24,0)
    sc_signal<sc_uint<25> > lhs_part_208;
    void method_82() {
        lhs_part_208 = sc_uint<25>(
        inst_mult_d_cellmath__49_tmp_6.read()
            +((sc_uint<25>)(sc_uint<15>("0bus010000000000000")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_noninc_a_cellmath__42_0
    void method_83() {
        sc_uint<53> temp_83;
        temp_83 = 
            
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
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101011")) & ((sc_uint<53>)(sc_uint<53>("0bus01111110001000100101010100111000101100101010110101001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101100")) & ((sc_uint<53>)(sc_uint<53>("0bus01111011111010110011100100111001100001011010110100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101101")) & ((sc_uint<53>)(sc_uint<53>("0bus01111001101110101010011010111010010101010000110011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101110")) & ((sc_uint<53>)(sc_uint<53>("0bus01110111100100001000000100111011001000001110110010100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0101111")) & ((sc_uint<53>)(sc_uint<53>("0bus01110101011011001010110000111011111010010100110001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110000")) & ((sc_uint<53>)(sc_uint<53>("0bus01110011010011110000110000111100101011100010110000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110001")) & ((sc_uint<53>)(sc_uint<53>("0bus01110001001101111000011010111101011011111110110000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110010")) & ((sc_uint<53>)(sc_uint<53>("0bus01101111001001100000000100111110001011100100101111001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110011")) & ((sc_uint<53>)(sc_uint<53>("0bus01101101000110100110001000111110111010010110101110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110100")) & ((sc_uint<53>)(sc_uint<53>("0bus01101011000101001001000010111111101000011000101101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110101")) & ((sc_uint<53>)(sc_uint<53>("0bus01101001000101000111001111000000010101101010101100111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110110")) & ((sc_uint<53>)(sc_uint<53>("0bus01100111000110011111001101000001000010001100101100001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0110111")) & ((sc_uint<53>)(sc_uint<53>("0bus01100101001001001111100001000001101110000000101011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111000")) & ((sc_uint<53>)(sc_uint<53>("0bus01100011001101010110101111000010011001000110101010101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111001")) & ((sc_uint<53>)(sc_uint<53>("0bus01100001010010110011011011000011000011011110101010000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111010")) & ((sc_uint<53>)(sc_uint<53>("0bus01011111011001100100001101000011101101001100101001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111011")) & ((sc_uint<53>)(sc_uint<53>("0bus01011101100001100111110001000100010110010000101000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111100")) & ((sc_uint<53>)(sc_uint<53>("0bus01011011101010111100110001000100111110101010101000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111101")) & ((sc_uint<53>)(sc_uint<53>("0bus01011001110101100001111101000101100110011010100111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111110")) & ((sc_uint<53>)(sc_uint<53>("0bus01011000000001010110000001000110001101100010100110110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus0111111")) & ((sc_uint<53>)(sc_uint<53>("0bus01010110001110010111101111000110110100000100100110001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000000")) & ((sc_uint<53>)(sc_uint<53>("0bus01010100011100100101111001000111011010000000100101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000001")) & ((sc_uint<53>)(sc_uint<53>("0bus01010010101011111111010101000111111111010110100101000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000010")) & ((sc_uint<53>)(sc_uint<53>("0bus01010000111100100010111001001000100100000110100100011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000011")) & ((sc_uint<53>)(sc_uint<53>("0bus01001111001110001111011001001001001000010100100011111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000100")) & ((sc_uint<53>)(sc_uint<53>("0bus01001101100001000011101111001001101011111110100011011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000101")) & ((sc_uint<53>)(sc_uint<53>("0bus01001011110100111110110111001010001111000100100010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000110")) & ((sc_uint<53>)(sc_uint<53>("0bus01001010001001111111101011001010110001101010100010010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1000111")) & ((sc_uint<53>)(sc_uint<53>("0bus01001000100000000101001001001011010011101110100001110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001000")) & ((sc_uint<53>)(sc_uint<53>("0bus01000110110111001110001101001011110101010010100001010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001001")) & ((sc_uint<53>)(sc_uint<53>("0bus01000101001111011001111001001100010110010110100000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001010")) & ((sc_uint<53>)(sc_uint<53>("0bus01000011101000100111001101001100110110111010100000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001011")) & ((sc_uint<53>)(sc_uint<53>("0bus01000010000010110101001001001101010111000000011111110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001100")) & ((sc_uint<53>)(sc_uint<53>("0bus01000000011110000010110101001101110110100110011111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001101")) & ((sc_uint<53>)(sc_uint<53>("0bus00111110111010001111010001001110010101110000011110111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001110")) & ((sc_uint<53>)(sc_uint<53>("0bus00111101010111011001100101001110110100011110011110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1001111")) & ((sc_uint<53>)(sc_uint<53>("0bus00111011110101100000110111001111010010110000011110000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010000")) & ((sc_uint<53>)(sc_uint<53>("0bus00111010010100100100001111001111110000100100011101100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010001")) & ((sc_uint<53>)(sc_uint<53>("0bus00111000110100100010110101010000001101111110011101001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010010")) & ((sc_uint<53>)(sc_uint<53>("0bus00110111010101011011110101010000101010111110011100110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010011")) & ((sc_uint<53>)(sc_uint<53>("0bus00110101110111001110010111010001000111100010011100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010100")) & ((sc_uint<53>)(sc_uint<53>("0bus00110100011001111001101011010001100011101110011011111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010101")) & ((sc_uint<53>)(sc_uint<53>("0bus00110010111101011100111011010001111111100000011011100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010110")) & ((sc_uint<53>)(sc_uint<53>("0bus00110001100001110111010111010010011010111000011011001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1010111")) & ((sc_uint<53>)(sc_uint<53>("0bus00110000000111001000001011010010110101111000011010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011000")) & ((sc_uint<53>)(sc_uint<53>("0bus00101110101101001110101001010011010000100010011010011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011001")) & ((sc_uint<53>)(sc_uint<53>("0bus00101101010100001010000001010011101010110010011010000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011010")) & ((sc_uint<53>)(sc_uint<53>("0bus00101011111011111001100011010100000100101110011001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011011")) & ((sc_uint<53>)(sc_uint<53>("0bus00101010100100011100100101010100011110010000011001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011100")) & ((sc_uint<53>)(sc_uint<53>("0bus00101001001101110010010111010100110111011110011001000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011101")) & ((sc_uint<53>)(sc_uint<53>("0bus00100111110111111010001111010101010000010110011000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011110")) & ((sc_uint<53>)(sc_uint<53>("0bus00100110100010110011011111010101101000111000011000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1011111")) & ((sc_uint<53>)(sc_uint<53>("0bus00100101001110011101011111010110000001000110011000000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100000")) & ((sc_uint<53>)(sc_uint<53>("0bus00100011111010110111100101010110011000111110010111101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100001")) & ((sc_uint<53>)(sc_uint<53>("0bus00100010101000000001001001010110110000100010010111011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100010")) & ((sc_uint<53>)(sc_uint<53>("0bus00100001010101111001100001010111000111110010010111000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100011")) & ((sc_uint<53>)(sc_uint<53>("0bus00100000000100100000000101010111011110110000010110110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100100")) & ((sc_uint<53>)(sc_uint<53>("0bus00011110110011110100001111010111110101011000010110011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100101")) & ((sc_uint<53>)(sc_uint<53>("0bus00011101100011110101011001011000001011110000010110001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100110")) & ((sc_uint<53>)(sc_uint<53>("0bus00011100010100100010111111011000100001110100010101111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1100111")) & ((sc_uint<53>)(sc_uint<53>("0bus00011011000101111100011001011000110111100110010101101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101000")) & ((sc_uint<53>)(sc_uint<53>("0bus00011001111000000001000111011001001101000110010101010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101001")) & ((sc_uint<53>)(sc_uint<53>("0bus00011000101010110000100001011001100010010100010101000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101010")) & ((sc_uint<53>)(sc_uint<53>("0bus00010111011110001010000111011001110111010000010100110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101011")) & ((sc_uint<53>)(sc_uint<53>("0bus00010110010010001101010101011010001011111100010100100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101100")) & ((sc_uint<53>)(sc_uint<53>("0bus00010101000110111001101001011010100000010110010100010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101101")) & ((sc_uint<53>)(sc_uint<53>("0bus00010011111100001110100011011010110100100010010100000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101110")) & ((sc_uint<53>)(sc_uint<53>("0bus00010010110010001011100011011011001000011100010011110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1101111")) & ((sc_uint<53>)(sc_uint<53>("0bus00010001101000110000000111011011011100000110010011100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110000")) & ((sc_uint<53>)(sc_uint<53>("0bus00010000011111111011101111011011101111100010010011010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110001")) & ((sc_uint<53>)(sc_uint<53>("0bus00001111010111101101111111011100000010101100010011000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110010")) & ((sc_uint<53>)(sc_uint<53>("0bus00001110010000000110010101011100010101101000010010110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110011")) & ((sc_uint<53>)(sc_uint<53>("0bus00001101001001000100010101011100101000010110010010100"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110100")) & ((sc_uint<53>)(sc_uint<53>("0bus00001100000010100111100001011100111010110100010010010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110101")) & ((sc_uint<53>)(sc_uint<53>("0bus00001010111100101111011101011101001101000100010010001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110110")) & ((sc_uint<53>)(sc_uint<53>("0bus00001001110111011011101001011101011111000110010001111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1110111")) & ((sc_uint<53>)(sc_uint<53>("0bus00001000110010101011101101011101110000111100010001101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111000")) & ((sc_uint<53>)(sc_uint<53>("0bus00000111101110011111001011011110000010100010010001011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111001")) & ((sc_uint<53>)(sc_uint<53>("0bus00000110101010110101100111011110010011111010010001010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111010")) & ((sc_uint<53>)(sc_uint<53>("0bus00000101100111101110101001011110100101000110010001000"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111011")) & ((sc_uint<53>)(sc_uint<53>("0bus00000100100101001001110011011110110110000100010000110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111100")) & ((sc_uint<53>)(sc_uint<53>("0bus00000011100011000110101101011111000110110110010000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111101")) & ((sc_uint<53>)(sc_uint<53>("0bus00000010100001100100111111011111010111011010010000011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111110")) & ((sc_uint<53>)(sc_uint<53>("0bus00000001100000100100001101011111100111110100010000010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(a_man.read()(22,16)) == sc_uint<7>("0bus1111111")) & ((sc_uint<53>)(sc_uint<53>("0bus00000000100000000100000001011111111000000000010000000")))
        ;
        inst_noninc_a_cellmath__42_0 = temp_83;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0)
    // part assign: lhs_part_209(1): inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0)
    sc_signal<sc_uint<22> > lhs_part_209;
    void method_84() {
        lhs_part_209 = sc_uint<22>(
        
            +(/*conformal multiplier wall*/(sc_uint<22>)(inst_noninc_a_cellmath__42_0.read()(9,0)) * (sc_uint<22>)(inst_mult_d_cellmath__49.read()(24,13)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__38
    void method_85() {
        sc_uint<19> temp_85;
        temp_85 = 
            (sc_uint<1>(1),inst_noninc_a_cellmath__42_0.read()(27,10))
        ;
        inst_cellmath__38 = temp_85;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__36
    void method_86() {
        sc_uint<16> temp_86;
        temp_86 = 
            (inst_cellmath__34.read(),a_man.read()(14,0))
        ;
        inst_cellmath__36 = temp_86;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)
    // part assign: lhs_part_210(1): inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)
    sc_signal<sc_uint<34> > lhs_part_210;
    void method_87() {
        lhs_part_210 = sc_uint<34>(
        
            +(/*conformal multiplier wall*/(sc_uint<34>)(( ((sc_uint<18>)(sc_int<1>)(inst_cellmath__36.read()[15])), inst_cellmath__36.read() )) * (sc_uint<34>)(( ((sc_uint<15>)(sc_int<1>)(inst_cellmath__38.read()[18])), inst_cellmath__38.read() )))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<40> > inst_cellmath__57_tmp_18;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<40> > inst_cellmath__57_tmp_19;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__57_tmp_19
    void method_88() {
        sc_uint<40> temp_88;
        temp_88 = 
            
            +((sc_uint<40>)(((sc_uint<40>)(( (sc_uint<40>)(( ((sc_uint<14>)(sc_int<1>)(inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read()[21])), inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read()(21,0) )))<<(shift_v)4))))
            +((sc_uint<40>)(((sc_uint<40>)((inst_noninc_a_cellmath__42_0.read()(52,28))<<(shift_v)15))))
        ;
        inst_cellmath__57_tmp_19 = temp_88;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__57_tmp_18
    void method_89() {
        sc_uint<40> temp_89;
        temp_89 = 
            inst_cellmath__57_tmp_19.read()
            +((sc_uint<40>)(( ((sc_uint<6>)(sc_int<1>)(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read()[33])), (sc_biguint<34>)(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read()(33,0)) )))
        ;
        inst_cellmath__57_tmp_18 = temp_89;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__57
    void method_90() {
        sc_uint<40> temp_90;
        temp_90 = 
            inst_cellmath__57_tmp_18.read()
            +((sc_uint<40>)(sc_uint<18>("0bus010000000000000000")))
        ;
        inst_cellmath__57 = temp_90;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__59
    void method_91() {
        sc_uint<23> temp_91;
        temp_91 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__59__81_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<23>)(inst_cellmath__57.read()(39,17))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__59__81_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        inst_cellmath__59 = temp_91;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__69
    void method_92() {
        sc_uint<32> temp_92;
        temp_92 = 
            (inst_cellmath__30.read(),inst_cellmath__32.read(),inst_cellmath__59.read())
        ;
        inst_cellmath__69 = temp_92;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(31,0)
    // part assign: lhs_part_211(2): x(31,0)
    sc_signal<sc_uint<32> > lhs_part_211;
    void method_93() {
        lhs_part_211 = sc_uint<32>(
        (sc_uint<32>)(inst_cellmath__69.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(36,33)
    // part assign: lhs_part_212(3): x(36,33)
    sc_signal<sc_uint<4> > lhs_part_212;
    void method_94() {
        lhs_part_212 = sc_uint<4>(
        (sc_uint<4>)(sc_uint<4>("0bus0000"))
        );
    }
    void method_95() { 
        sc_uint<37> temp_95 = x.read();
        temp_95(32,32) = lhs_part_183.read();
        temp_95(31,0) = lhs_part_211.read();
        temp_95(36,33) = lhs_part_212.read();
        x = temp_95;
}
    void method_96() { 
        sc_uint<2> temp_96 = inst_mult_d_cellmath__49__72.read();
        temp_96(0,0) = lhs_part_184.read();
        inst_mult_d_cellmath__49__72 = temp_96;
}
    void method_97() { 
        sc_uint<2> temp_97 = inst_mult_d_cellmath__49__71.read();
        temp_97(0,0) = lhs_part_185.read();
        inst_mult_d_cellmath__49__71 = temp_97;
}
    void method_98() { 
        sc_uint<2> temp_98 = inst_mult_d_cellmath__49__67.read();
        temp_98(0,0) = lhs_part_186.read();
        inst_mult_d_cellmath__49__67 = temp_98;
}
    void method_99() { 
        sc_uint<2> temp_99 = inst_mult_d_cellmath__49__66.read();
        temp_99(0,0) = lhs_part_187.read();
        inst_mult_d_cellmath__49__66 = temp_99;
}
    void method_100() { 
        sc_uint<2> temp_100 = inst_mult_d_cellmath__49__62.read();
        temp_100(0,0) = lhs_part_188.read();
        inst_mult_d_cellmath__49__62 = temp_100;
}
    void method_101() { 
        sc_uint<2> temp_101 = inst_mult_d_cellmath__49__61.read();
        temp_101(0,0) = lhs_part_189.read();
        inst_mult_d_cellmath__49__61 = temp_101;
}
    void method_102() { 
        sc_uint<2> temp_102 = inst_mult_d_cellmath__49__57.read();
        temp_102(0,0) = lhs_part_190.read();
        inst_mult_d_cellmath__49__57 = temp_102;
}
    void method_103() { 
        sc_uint<2> temp_103 = inst_mult_d_cellmath__49__56.read();
        temp_103(0,0) = lhs_part_191.read();
        inst_mult_d_cellmath__49__56 = temp_103;
}
    void method_104() { 
        sc_uint<2> temp_104 = inst_mult_d_cellmath__49__52.read();
        temp_104(0,0) = lhs_part_192.read();
        inst_mult_d_cellmath__49__52 = temp_104;
}
    void method_105() { 
        sc_uint<2> temp_105 = inst_mult_d_cellmath__49__51.read();
        temp_105(0,0) = lhs_part_193.read();
        inst_mult_d_cellmath__49__51 = temp_105;
}
    void method_106() { 
        sc_uint<2> temp_106 = inst_mult_d_cellmath__49__47.read();
        temp_106(0,0) = lhs_part_194.read();
        inst_mult_d_cellmath__49__47 = temp_106;
}
    void method_107() { 
        sc_uint<2> temp_107 = inst_mult_d_cellmath__49__46.read();
        temp_107(0,0) = lhs_part_195.read();
        inst_mult_d_cellmath__49__46 = temp_107;
}
    void method_108() { 
        sc_uint<2> temp_108 = inst_mult_d_cellmath__49__42.read();
        temp_108(0,0) = lhs_part_196.read();
        inst_mult_d_cellmath__49__42 = temp_108;
}
    void method_109() { 
        sc_uint<2> temp_109 = inst_mult_d_cellmath__49__41.read();
        temp_109(0,0) = lhs_part_197.read();
        inst_mult_d_cellmath__49__41 = temp_109;
}
    void method_110() { 
        sc_uint<2> temp_110 = inst_mult_d_cellmath__49__37.read();
        temp_110(0,0) = lhs_part_198.read();
        inst_mult_d_cellmath__49__37 = temp_110;
}
    void method_111() { 
        sc_uint<2> temp_111 = inst_mult_d_cellmath__49__36.read();
        temp_111(0,0) = lhs_part_199.read();
        inst_mult_d_cellmath__49__36 = temp_111;
}
    void method_112() { 
        sc_uint<2> temp_112 = inst_mult_d_cellmath__49__32.read();
        temp_112(0,0) = lhs_part_200.read();
        inst_mult_d_cellmath__49__32 = temp_112;
}
    void method_113() { 
        sc_uint<2> temp_113 = inst_mult_d_cellmath__49__31.read();
        temp_113(0,0) = lhs_part_201.read();
        inst_mult_d_cellmath__49__31 = temp_113;
}
    void method_114() { 
        sc_uint<2> temp_114 = inst_mult_d_cellmath__49__27.read();
        temp_114(0,0) = lhs_part_202.read();
        inst_mult_d_cellmath__49__27 = temp_114;
}
    void method_115() { 
        sc_uint<2> temp_115 = inst_mult_d_cellmath__49__26.read();
        temp_115(0,0) = lhs_part_203.read();
        inst_mult_d_cellmath__49__26 = temp_115;
}
    void method_116() { 
        sc_uint<2> temp_116 = inst_mult_d_cellmath__49__17.read();
        temp_116(0,0) = lhs_part_204.read();
        inst_mult_d_cellmath__49__17 = temp_116;
}
    void method_117() { 
        sc_uint<2> temp_117 = inst_mult_d_cellmath__49__16.read();
        temp_117(0,0) = lhs_part_205.read();
        inst_mult_d_cellmath__49__16 = temp_117;
}
    void method_118() { 
        sc_uint<2> temp_118 = inst_mult_d_cellmath__49__22.read();
        temp_118(0,0) = lhs_part_206.read();
        inst_mult_d_cellmath__49__22 = temp_118;
}
    void method_119() { 
        sc_uint<2> temp_119 = inst_mult_d_cellmath__49__21.read();
        temp_119(0,0) = lhs_part_207.read();
        inst_mult_d_cellmath__49__21 = temp_119;
}
    void method_120() { 
        sc_uint<27> temp_120 = inst_mult_d_cellmath__49.read();
        temp_120(24,0) = lhs_part_208.read();
        inst_mult_d_cellmath__49 = temp_120;
}
    void method_121() { 
        sc_uint<24> temp_121 = inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum.read();
        temp_121(21,0) = lhs_part_209.read();
        inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum = temp_121;
}
    void method_122() { 
        sc_uint<37> temp_122 = inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum.read();
        temp_122(33,0) = lhs_part_210.read();
        inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum = temp_122;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(float_div_cynw_cm_float_rcp_E8_M23_2_0)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_0);

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_1);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_2);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_3);
        sensitive << inst_cellmath__17
                  << inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_4);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_5);
        sensitive << inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_6);
        sensitive << a_exp
                  << inst_cellmath__22__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << inst_cellmath__16
                  << inst_cellmath__26;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << inst_cellmath__25
                  << inst_cellmath__29__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << inst_cellmath__25
                  << inst_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_10);
        sensitive << inst_cellmath__17
                  << inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_11);
        sensitive << a_exp
                  << inst_cellmath__22__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_12);
        sensitive << inst_cellmath__22__4
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << inst_cellmath__24
                  << inst_cellmath__22;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << inst_cellmath__25
                  << inst_cellmath__28__7;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_15);
        sensitive << inst_cellmath__32__14
                  << inst_cellmath__28;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_16);
        sensitive << a_sign
                  << inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_17);
        sensitive << inst_cellmath__22__5
                  << a_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_18);
        sensitive << inst_cellmath__31_tmp_5;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_19);
        sensitive << inst_cellmath__31
                  << inst_cellmath__32__14_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_20);
        sensitive << inst_cellmath__18
                  << inst_cellmath__28
                  << inst_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_21);
        sensitive << inst_cellmath__59__81
                  << inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_22);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_23);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_24);
        sensitive << inst_mult_d_cellmath__49__72;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_25);
        sensitive << inst_mult_d_cellmath__49__71
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_26);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_27);
        sensitive << inst_mult_d_cellmath__49__67;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_28);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_29);
        sensitive << inst_mult_d_cellmath__49__66
                  << inst_mult_d_cellmath__49__68
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_30);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_31);
        sensitive << inst_mult_d_cellmath__49__62;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_32);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_33);
        sensitive << inst_mult_d_cellmath__49__61
                  << inst_mult_d_cellmath__49__63
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_35);
        sensitive << inst_mult_d_cellmath__49__57;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_36);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_37);
        sensitive << inst_mult_d_cellmath__49__56
                  << inst_mult_d_cellmath__49__58
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_38);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_39);
        sensitive << inst_mult_d_cellmath__49__52;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_40);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_41);
        sensitive << inst_mult_d_cellmath__49__51
                  << inst_mult_d_cellmath__49__53
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_43);
        sensitive << inst_mult_d_cellmath__49__47;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_44);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_45);
        sensitive << inst_mult_d_cellmath__49__46
                  << inst_mult_d_cellmath__49__48
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_46);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_47);
        sensitive << inst_mult_d_cellmath__49__42;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_48);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_49);
        sensitive << inst_mult_d_cellmath__49__41
                  << inst_mult_d_cellmath__49__43
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_51);
        sensitive << inst_mult_d_cellmath__49__37;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_52);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_53);
        sensitive << inst_mult_d_cellmath__49__36
                  << inst_mult_d_cellmath__49__38
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_54);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_55);
        sensitive << inst_mult_d_cellmath__49__32;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_56);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_57);
        sensitive << inst_mult_d_cellmath__49__31
                  << inst_mult_d_cellmath__49__33
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_58);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_59);
        sensitive << inst_mult_d_cellmath__49__27;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_60);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_61);
        sensitive << inst_mult_d_cellmath__49__26
                  << inst_mult_d_cellmath__49__28
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_62);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_63);
        sensitive << inst_mult_d_cellmath__49__17;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_64);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_65);
        sensitive << inst_mult_d_cellmath__49__16
                  << inst_mult_d_cellmath__49__18
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_66);
        sensitive << a_man
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_67);
        sensitive << inst_mult_d_cellmath__49__22;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_68);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_69);
        sensitive << inst_mult_d_cellmath__49__21
                  << inst_mult_d_cellmath__49__23
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
        SC_METHOD(method_70);
        sensitive << inst_cellmath__34
                  << inst_mult_d_cellmath__49__70;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_71);
        sensitive << inst_mult_d_cellmath__49_tmp_17
                  << inst_mult_d_cellmath__49__65;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_72);
        sensitive << inst_mult_d_cellmath__49_tmp_16
                  << inst_mult_d_cellmath__49__60;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_73);
        sensitive << inst_mult_d_cellmath__49_tmp_15
                  << inst_mult_d_cellmath__49__55;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_74);
        sensitive << inst_mult_d_cellmath__49_tmp_14
                  << inst_mult_d_cellmath__49__50;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_75);
        sensitive << inst_mult_d_cellmath__49_tmp_13
                  << inst_mult_d_cellmath__49__45;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_76);
        sensitive << inst_mult_d_cellmath__49_tmp_12
                  << inst_mult_d_cellmath__49__40;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_77);
        sensitive << inst_mult_d_cellmath__49_tmp_11
                  << inst_mult_d_cellmath__49__35;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_78);
        sensitive << inst_mult_d_cellmath__49_tmp_10
                  << inst_mult_d_cellmath__49__30;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_79);
        sensitive << inst_mult_d_cellmath__49_tmp_9
                  << inst_mult_d_cellmath__49__25;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_80);
        sensitive << inst_mult_d_cellmath__49_tmp_8
                  << inst_mult_d_cellmath__49__15;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_81);
        sensitive << inst_mult_d_cellmath__49_tmp_7
                  << inst_mult_d_cellmath__49__20;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_82);
        sensitive << inst_mult_d_cellmath__49_tmp_6;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_83);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_84);
        sensitive << inst_mult_d_cellmath__49
                  << inst_noninc_a_cellmath__42_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_85);
        sensitive << inst_noninc_a_cellmath__42_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_86);
        sensitive << inst_cellmath__34
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_87);
        sensitive << inst_cellmath__38
                  << inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_88);
        sensitive << inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum
                  << inst_noninc_a_cellmath__42_0;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_89);
        sensitive << inst_cellmath__57_tmp_19
                  << inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_90);
        sensitive << inst_cellmath__57_tmp_18;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_91);
        sensitive << inst_cellmath__57
                  << inst_cellmath__59__81_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_92);
        sensitive << inst_cellmath__30
                  << inst_cellmath__32
                  << inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_93);
        sensitive << inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_94);
        SC_METHOD(method_95);
        sensitive << lhs_part_183
                  << lhs_part_211
                  << lhs_part_212;
        SC_METHOD(method_96);
        sensitive << lhs_part_184;
        SC_METHOD(method_97);
        sensitive << lhs_part_185;
        SC_METHOD(method_98);
        sensitive << lhs_part_186;
        SC_METHOD(method_99);
        sensitive << lhs_part_187;
        SC_METHOD(method_100);
        sensitive << lhs_part_188;
        SC_METHOD(method_101);
        sensitive << lhs_part_189;
        SC_METHOD(method_102);
        sensitive << lhs_part_190;
        SC_METHOD(method_103);
        sensitive << lhs_part_191;
        SC_METHOD(method_104);
        sensitive << lhs_part_192;
        SC_METHOD(method_105);
        sensitive << lhs_part_193;
        SC_METHOD(method_106);
        sensitive << lhs_part_194;
        SC_METHOD(method_107);
        sensitive << lhs_part_195;
        SC_METHOD(method_108);
        sensitive << lhs_part_196;
        SC_METHOD(method_109);
        sensitive << lhs_part_197;
        SC_METHOD(method_110);
        sensitive << lhs_part_198;
        SC_METHOD(method_111);
        sensitive << lhs_part_199;
        SC_METHOD(method_112);
        sensitive << lhs_part_200;
        SC_METHOD(method_113);
        sensitive << lhs_part_201;
        SC_METHOD(method_114);
        sensitive << lhs_part_202;
        SC_METHOD(method_115);
        sensitive << lhs_part_203;
        SC_METHOD(method_116);
        sensitive << lhs_part_204;
        SC_METHOD(method_117);
        sensitive << lhs_part_205;
        SC_METHOD(method_118);
        sensitive << lhs_part_206;
        SC_METHOD(method_119);
        sensitive << lhs_part_207;
        SC_METHOD(method_120);
        sensitive << lhs_part_208;
        SC_METHOD(method_121);
        sensitive << lhs_part_209;
        SC_METHOD(method_122);
        sensitive << lhs_part_210;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef float_div_cynw_cm_float_rcp_E8_M23_2_0_COMPILED

/* CADENCE  vLD1TArZqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




