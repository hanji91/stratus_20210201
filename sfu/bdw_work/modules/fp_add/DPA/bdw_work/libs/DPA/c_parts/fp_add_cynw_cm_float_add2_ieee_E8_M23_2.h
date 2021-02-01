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
    
    Configured at: 22:40:44 KST (+0900), Thursday 31 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef fp_add_cynw_cm_float_add2_ieee_E8_M23_2_COMPILED
#define fp_add_cynw_cm_float_add2_ieee_E8_M23_2_COMPILED

SC_MODULE(fp_add_cynw_cm_float_add2_ieee_E8_M23_2) // architecture "behavioural"
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
    sc_signal<sc_uint<32> > inst_cellmath__3;
    sc_signal<sc_uint<1> > inst_cellmath__4;
    sc_signal<sc_uint<1> > inst_cellmath__5;
    sc_signal<sc_uint<1> > inst_cellmath__6;
    sc_signal<sc_uint<1> > inst_cellmath__7;
    sc_signal<sc_uint<1> > inst_cellmath__8;
    sc_signal<sc_uint<1> > inst_cellmath__9;
    sc_signal<sc_uint<1> > inst_cellmath__10;
    sc_signal<sc_uint<1> > inst_cellmath__11;
    sc_signal<sc_uint<1> > inst_cellmath__12;
    sc_signal<sc_uint<1> > inst_cellmath__13;
    sc_signal<sc_uint<1> > inst_cellmath__14;
    sc_signal<sc_uint<1> > inst_cellmath__15;
    sc_signal<sc_uint<1> > inst_cellmath__16;
    sc_signal<sc_uint<1> > inst_cellmath__17;
    sc_signal<sc_uint<1> > inst_cellmath__18;
    sc_signal<sc_uint<1> > inst_cellmath__21;
    sc_signal<sc_uint<25> > inst_cellmath__25;
    sc_signal<sc_uint<25> > inst_cellmath__26;
    sc_signal<sc_uint<9> > inst_cellmath__27;
    sc_signal<sc_uint<9> > inst_cellmath__28;
    sc_signal<sc_uint<8> > inst_cellmath__29;
    sc_signal<sc_uint<1> > inst_cellmath__30;
    sc_signal<sc_uint<1> > inst_cellmath__31;
    sc_signal<sc_uint<1> > inst_cellmath__32;
    sc_signal<sc_uint<50> > inst_cellmath__33;
    sc_signal<sc_uint<1> > inst_cellmath__34;
    sc_signal<sc_uint<8> > inst_cellmath__35;
    sc_signal<sc_uint<50> > inst_cellmath__36;
    sc_signal<sc_uint<50> > inst_cellmath__37;
    sc_signal<sc_uint<26> > inst_cellmath__39;
    sc_signal<sc_uint<1> > inst_cellmath__42;
    sc_signal<sc_uint<1> > inst_cellmath__43;
    sc_signal<sc_uint<1> > inst_cellmath__44;
    sc_signal<sc_uint<27> > inst_cellmath__45;
    sc_signal<sc_uint<1> > inst_cellmath__48;
    sc_signal<sc_uint<6> > inst_cellmath__49;
    sc_signal<sc_uint<25> > inst_cellmath__50;
    sc_signal<sc_uint<1> > inst_cellmath__53;
    sc_signal<sc_uint<1> > inst_cellmath__54;
    sc_signal<sc_uint<1> > inst_cellmath__55;
    sc_signal<sc_uint<24> > inst_cellmath__57;
    sc_signal<sc_uint<10> > inst_cellmath__59;
    sc_signal<sc_uint<1> > inst_cellmath__62;
    sc_signal<sc_uint<1> > inst_cellmath__63;
    sc_signal<sc_uint<23> > inst_cellmath__64;
    sc_signal<sc_uint<1> > inst_cellmath__66;
    sc_signal<sc_uint<1> > inst_cellmath__67;
    sc_signal<sc_uint<8> > inst_cellmath__68;
    sc_signal<sc_uint<1> > inst_cellmath__70;
    sc_signal<sc_uint<1> > inst_cellmath__71;
    sc_signal<sc_uint<8> > inst_cellmath__72;
    sc_signal<sc_uint<23> > inst_cellmath__73;
    sc_signal<sc_uint<1> > inst_cellmath__24__5;
    sc_signal<sc_uint<8> > inst_cellmath__27__7;
    sc_signal<sc_uint<9> > inst_cellmath__27__6;
    sc_signal<sc_uint<10> > inst_cellmath__28__8;
    sc_signal<sc_uint<1> > inst_cellmath__29__12;
    sc_signal<sc_uint<1> > inst_cellmath__32__14;
    sc_signal<sc_uint<23> > inst_cellmath__36__15;
    sc_signal<sc_uint<1> > inst_cellmath__33__18;
    sc_signal<sc_uint<25> > inst_cellmath__39__19;
    sc_signal<sc_uint<1> > inst_cellmath__42__22;
    sc_signal<sc_uint<1> > inst_cellmath__43__26;
    sc_signal<sc_uint<1> > inst_cellmath__43__25;
    sc_signal<sc_uint<1> > inst_cellmath__43__28;
    sc_signal<sc_uint<1> > inst_cellmath__43__27;
    sc_signal<sc_uint<1> > inst_cellmath__43__24;
    sc_signal<sc_uint<1> > inst_cellmath__54__33;
    sc_signal<sc_uint<1> > inst_cellmath__55__37;
    sc_signal<sc_uint<1> > inst_cellmath__55__36;
    sc_signal<sc_uint<1> > inst_cellmath__55__38;
    sc_signal<sc_uint<1> > inst_cellmath__55__39;
    sc_signal<sc_uint<1> > inst_cellmath__55__35;
    sc_signal<sc_uint<1> > inst_cellmath__55__34;
    sc_signal<sc_uint<1> > inst_cellmath__55__41;
    sc_signal<sc_uint<1> > inst_cellmath__55__40;
    sc_signal<sc_uint<1> > inst_cellmath__60__44;
    sc_signal<sc_uint<1> > inst_cellmath__62__46;
    sc_signal<sc_uint<1> > inst_cellmath__62__45;
    sc_signal<sc_uint<1> > inst_cellmath__66__58;
    sc_signal<sc_uint<1> > inst_cellmath__66__59;
    sc_signal<sc_uint<1> > inst_cellmath__66__56;
    sc_signal<sc_uint<1> > inst_cellmath__67__65;
    sc_signal<sc_uint<1> > inst_cellmath__67__66;
    sc_signal<sc_uint<1> > inst_cellmath__67__67;
    sc_signal<sc_uint<1> > inst_cellmath__68__0;
    sc_signal<sc_uint<1> > inst_cellmath__68__69;
    sc_signal<sc_uint<1> > inst_cellmath__68__68;
    sc_signal<sc_uint<1> > inst_cellmath__70__74;
    sc_signal<sc_uint<1> > inst_cellmath__70__73;
    sc_signal<sc_uint<25> > inst_cellmath__40_0;
    sc_signal<sc_uint<25> > inst_cellmath__40_0_0;
    sc_signal<sc_uint<2> > inst_cellmath__13_0;
    sc_signal<sc_uint<3> > inst_cellmath__63_0;
    sc_signal<sc_uint<2> > inst_cellmath__71_0;
    sc_signal<sc_uint<23> > inst_cellmath__64__48_0;
    sc_signal<sc_uint<23> > inst_cellmath__64__48_1;
    sc_signal<sc_uint<23> > inst_cellmath__64__48_2;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__26(23,0)
    // part assign: lhs_part_66(1): inst_cellmath__26(23,0)
    sc_signal<sc_uint<24> > lhs_part_66;
    void method_0() {
        lhs_part_66 = sc_uint<24>(
        (b_man.read(),sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__21
    void method_1() {
        sc_uint<1> temp_1;
        temp_1 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        inst_cellmath__21 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__9
    void method_2() {
        sc_uint<1> temp_2;
        temp_2 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
        ;
        inst_cellmath__9 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__10
    void method_3() {
        sc_uint<1> temp_3;
        temp_3 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(a_man.read()(22,22)))))
        ;
        inst_cellmath__10 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__12
    void method_4() {
        sc_uint<1> temp_4;
        temp_4 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10.read())))
        ;
        inst_cellmath__12 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__14
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            
            ((sc_uint<1>)((sc_uint<1>)(b_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(7,7))))
        ;
        inst_cellmath__14 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__15
    void method_6() {
        sc_uint<1> temp_6;
        temp_6 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(b_man.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(b_man.read()(22,22)))))
        ;
        inst_cellmath__15 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__17
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__15.read())))
        ;
        inst_cellmath__17 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__24__5
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
        ;
        inst_cellmath__24__5 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__13
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__10.read())))
        ;
        inst_cellmath__13 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__18
    void method_10() {
        sc_uint<1> temp_10;
        temp_10 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__15.read())))
        ;
        inst_cellmath__18 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__63
    void method_11() {
        sc_uint<1> temp_11;
        temp_11 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24__5.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18.read())))
        ;
        inst_cellmath__63 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__11
    void method_12() {
        sc_uint<1> temp_12;
        temp_12 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7)))))
        ;
        inst_cellmath__11 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__16
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(b_exp.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp.read()(7,7)))))
        ;
        inst_cellmath__16 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67__67
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16.read())))
        ;
        inst_cellmath__67__67 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__6
    void method_15() {
        sc_uint<1> temp_15;

                    sc_uint<7> inst_cellmath__6_tmp_0 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<2>("0bus01")));
        temp_15 = (((sc_uint<1>)inst_cellmath__6_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__6 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__63_0
    void method_16() {
        sc_uint<3> temp_16;
        temp_16 = 
            (inst_cellmath__63.read(),inst_cellmath__67__67.read(),inst_cellmath__6.read())
        ;
        inst_cellmath__63_0 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__27__7
    void method_17() {
        sc_uint<8> temp_17;
        temp_17 = 
            ~(sc_uint<8>)(b_exp.read())
        ;
        inst_cellmath__27__7 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__27__6
    void method_18() {
        sc_uint<9> temp_18;
        temp_18 = 
            (sc_uint<1>(1),inst_cellmath__27__7.read())
        ;
        inst_cellmath__27__6 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:5170
    // Compare anchor: inst_cellmath__28__8(8,0)
    // part assign: lhs_part_67(1): inst_cellmath__28__8(8,0)
    sc_signal<sc_uint<9> > lhs_part_67;
    void method_19() {
        lhs_part_67 = sc_uint<9>(
        (sc_uint<9>)(a_exp.read()) + (sc_uint<9>)(inst_cellmath__27__6.read())
        );
    }
    // !!!! amethyst/writers/SystemC.cpp:5187
    // Compare anchor: inst_cellmath__27
    void method_20() {
        sc_uint<9> temp_20;
        temp_20 = 
            (sc_uint<9>)(a_exp.read()) + (sc_uint<9>)(inst_cellmath__27__6.read()) + sc_uint<1>(1)
        ;
        inst_cellmath__27 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__28(8,8)
    // part assign: lhs_part_68(1): inst_cellmath__28(8,8)
    sc_signal<sc_uint<1> > lhs_part_68;
    void method_21() {
        lhs_part_68 = sc_uint<1>(
        ~(sc_uint<1>)(inst_cellmath__28__8.read()(8,8))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__34
    void method_22() {
        sc_uint<1> temp_22;

                    sc_uint<28> inst_cellmath__34_tmp_1 = 
            +((sc_uint<28>)(b_man.read()))
            -((sc_uint<28>)(a_man.read()))
            -((sc_uint<28>)(sc_uint<2>("0b01")));
        temp_22 = (((sc_uint<1>)(inst_cellmath__34_tmp_1[27]))==((sc_uint<1>)0))
        ;
        inst_cellmath__34 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32__14
    void method_23() {
        sc_uint<1> temp_23;
        temp_23 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__28.read()(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
        ;
        inst_cellmath__32__14 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32
    void method_24() {
        sc_uint<1> temp_24;
        temp_24 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__14.read())))
        ;
        inst_cellmath__32 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__48
    void method_25() {
        sc_uint<1> temp_25;
        temp_25 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(a_sign.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(b_sign.read()))
        ;
        inst_cellmath__48 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__35
    void method_26() {
        sc_uint<8> temp_26;
        temp_26 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__27.read()(8,8)) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__27.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__27.read()(8,8)) == sc_uint<1>("0bus1")) & sc_uint<8>(~(sc_uint<8>)(inst_cellmath__28__8.read()(7,0)))
        ;
        inst_cellmath__35 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__30
    void method_27() {
        sc_uint<1> temp_27;

                    sc_uint<12> inst_cellmath__30_tmp_2 = 
            +((sc_uint<12>)(inst_cellmath__35.read()))
            -((sc_uint<12>)(sc_uint<7>("0b0011010")));
        temp_27 = (((sc_uint<1>)(inst_cellmath__30_tmp_2[11]))==((sc_uint<1>)0))
        ;
        inst_cellmath__30 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__31
    void method_28() {
        sc_uint<1> temp_28;
        temp_28 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16.read())))
        ;
        inst_cellmath__31 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__33__18
    void method_29() {
        sc_uint<1> temp_29;
        temp_29 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__31.read())))
        ;
        inst_cellmath__33__18 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__36__15
    void method_30() {
        sc_uint<23> temp_30;
        temp_30 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(b_man.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(a_man.read()))
        ;
        inst_cellmath__36__15 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__36
    void method_31() {
        sc_uint<50> temp_31;
        temp_31 = 
            (sc_uint<1>(1),inst_cellmath__36__15.read(),sc_uint<26>("0bus00000000000000000000000000"))
        ;
        inst_cellmath__36 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__37
    void method_32() {
        sc_uint<50> temp_32;
        temp_32 = 
            (sc_biguint<81>)((sc_biguint<50>)inst_cellmath__36.read()) >> (shift_v)(((sc_uint<5>)(inst_cellmath__35.read()(4,0))).to_long())
        ;
        inst_cellmath__37 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__33(49,24)
    // part assign: lhs_part_69(1): inst_cellmath__33(49,24)
    sc_signal<sc_uint<26> > lhs_part_69;
    void method_33() {
        lhs_part_69 = sc_uint<26>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__33__18.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__37.read()(49,24)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__42__22
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read()(23,23))))
        ;
        inst_cellmath__42__22 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__42
    void method_35() {
        sc_uint<1> temp_35;
        temp_35 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42__22.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__31.read())))
        ;
        inst_cellmath__42 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44
    void method_36() {
        sc_uint<1> temp_36;
        temp_36 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__33.read()(24,24))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__42.read())))
        ;
        inst_cellmath__44 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__25(23,0)
    // part assign: lhs_part_70(1): inst_cellmath__25(23,0)
    sc_signal<sc_uint<24> > lhs_part_70;
    void method_37() {
        lhs_part_70 = sc_uint<24>(
        (a_man.read(),sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__40_0_0(23,0)
    // part assign: lhs_part_71(1): inst_cellmath__40_0_0(23,0)
    sc_signal<sc_uint<24> > lhs_part_71;
    void method_38() {
        lhs_part_71 = sc_uint<24>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__25.read()(23,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<24>)(inst_cellmath__26.read()(23,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__40_0
    void method_39() {
        sc_uint<25> temp_39;
        temp_39 = 
            (sc_uint<1>(1),inst_cellmath__40_0_0.read()(23,1),sc_uint<1>(0))
        ;
        inst_cellmath__40_0 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__39__19
    void method_40() {
        sc_uint<25> temp_40;
        temp_40 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__21.read()) == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__33.read()(49,25))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__21.read()) == sc_uint<1>("0bus1")) & sc_uint<25>(~(sc_uint<25>)(inst_cellmath__33.read()(49,25)))
        ;
        inst_cellmath__39__19 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__39
    void method_41() {
        sc_uint<26> temp_41;
        temp_41 = 
            (inst_cellmath__21.read(),inst_cellmath__39__19.read())
        ;
        inst_cellmath__39 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<26> > inst_cellmath__45_tmp_3;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45_tmp_3
    void method_42() {
        sc_uint<26> temp_42;
        temp_42 = 
            
            +((sc_uint<26>)(inst_cellmath__44.read()))
            +((sc_uint<26>)(((sc_uint<26>)((inst_cellmath__40_0.read()(24,1))<<(shift_v)1))))
        ;
        inst_cellmath__45_tmp_3 = temp_42;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45(25,0)
    // part assign: lhs_part_72(1): inst_cellmath__45(25,0)
    sc_signal<sc_uint<26> > lhs_part_72;
    void method_43() {
        lhs_part_72 = sc_uint<26>(
        inst_cellmath__45_tmp_3.read()
            +((sc_uint<26>)(inst_cellmath__39.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__49
    void method_44() {
        sc_uint<6> temp_44;
        temp_44 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__45.read()(25,25)) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(sc_uint<6>("0bus000000"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__45.read()(25,24)) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<6>("0bus000001"))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__45.read()(25,23)) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<6>("0bus000010"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(inst_cellmath__45.read()(25,22)) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<6>("0bus000011"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(inst_cellmath__45.read()(25,21)) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<6>("0bus000100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__45.read()(25,20)) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_cellmath__45.read()(25,19)) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(inst_cellmath__45.read()(25,18)) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(inst_cellmath__45.read()(25,17)) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(inst_cellmath__45.read()(25,16)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(inst_cellmath__45.read()(25,15)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(inst_cellmath__45.read()(25,14)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(inst_cellmath__45.read()(25,13)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(inst_cellmath__45.read()(25,12)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(inst_cellmath__45.read()(25,11)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(inst_cellmath__45.read()(25,10)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(inst_cellmath__45.read()(25,9)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(inst_cellmath__45.read()(25,8)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(inst_cellmath__45.read()(25,7)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(inst_cellmath__45.read()(25,6)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(inst_cellmath__45.read()(25,5)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(inst_cellmath__45.read()(25,4)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(inst_cellmath__45.read()(25,3)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010110"))) |
        -(int)((sc_uint<24>)(sc_uint<24>)(inst_cellmath__45.read()(25,2)) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010111"))) |
        -(int)((sc_uint<25>)(sc_uint<25>)(inst_cellmath__45.read()(25,1)) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011000"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(inst_cellmath__45.read()(25,0)) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011001"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(inst_cellmath__45.read()(25,0)) == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
        ;
        inst_cellmath__49 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67__66
    void method_45() {
        sc_uint<1> temp_45;
        temp_45 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__49.read()(5,5))))
        ;
        inst_cellmath__67__66 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67__65
    void method_46() {
        sc_uint<1> temp_46;
        temp_46 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49.read()(5,5))))
        ;
        inst_cellmath__67__65 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__66__59
    void method_47() {
        sc_uint<1> temp_47;
        temp_47 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        inst_cellmath__66__59 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__66__58
    void method_48() {
        sc_uint<1> temp_48;
        temp_48 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            |((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        inst_cellmath__66__58 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__66__56
    void method_49() {
        sc_uint<1> temp_49;
        temp_49 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__6.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__66__59.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__6.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__66__58.read()))
        ;
        inst_cellmath__66__56 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__66
    void method_50() {
        sc_uint<1> temp_50;
        temp_50 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__66__56.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16.read())))
        ;
        inst_cellmath__66 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__13_0
    void method_51() {
        sc_uint<2> temp_51;
        temp_51 = 
            (inst_cellmath__13.read(),inst_cellmath__18.read())
        ;
        inst_cellmath__13_0 = temp_51;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__64__48_1
    void method_52() {
        sc_uint<23> temp_52;
        temp_52 = 
            (b_man.read()(21,0),b_sign.read())
        ;
        inst_cellmath__64__48_1 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__64__48_2
    void method_53() {
        sc_uint<23> temp_53;
        temp_53 = 
            (a_man.read()(21,0),a_sign.read())
        ;
        inst_cellmath__64__48_2 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__64__48_0
    void method_54() {
        sc_uint<23> temp_54;
        temp_54 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__13_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<23>)(inst_cellmath__64__48_1.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__13_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__64__48_2.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__13_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<23>)(sc_uint<23>("0bus00000000000000000000001")))
        ;
        inst_cellmath__64__48_0 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__67
    void method_55() {
        sc_uint<1> temp_55;
        temp_55 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__63_0.read()) == sc_uint<3>("0bus000")) & ((sc_uint<1>)(inst_cellmath__67__66.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__63_0.read()) == sc_uint<3>("0bus001")) & ((sc_uint<1>)(inst_cellmath__67__65.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__63_0.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__66.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__63_0.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__64__48_0.read()(0,0)))
        ;
        inst_cellmath__67 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__50
    void method_56() {
        sc_uint<25> temp_56;
        temp_56 = 
             ((shift_v)(((sc_uint<5>)(inst_cellmath__49.read()(4,0))).to_long()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(inst_cellmath__45.read()(25,0)) << (shift_v)(((sc_uint<5>)(inst_cellmath__49.read()(4,0))).to_long())))
        ;
        inst_cellmath__50 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__26
    void method_57() {
        sc_uint<1> temp_57;
        temp_57 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33.read()(24,24))))
            ^((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42.read())))
        ;
        inst_cellmath__43__26 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__25
    void method_58() {
        sc_uint<1> temp_58;
        temp_58 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__30.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__26.read())))
        ;
        inst_cellmath__43__25 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__28
    void method_59() {
        sc_uint<1> temp_59;
        temp_59 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42.read())))
        ;
        inst_cellmath__43__28 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__27
    void method_60() {
        sc_uint<1> temp_60;
        temp_60 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__28.read())))
        ;
        inst_cellmath__43__27 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__24
    void method_61() {
        sc_uint<1> temp_61;
        temp_61 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__25.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__27.read())))
        ;
        inst_cellmath__43__24 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__43
    void method_62() {
        sc_uint<1> temp_62;
        temp_62 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__21.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__33.read()(24,24))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__21.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__43__24.read()))
        ;
        inst_cellmath__43 = temp_62;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__53
    void method_63() {
        sc_uint<1> temp_63;
        temp_63 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__50.read()(1,1))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__43.read()))
        ;
        inst_cellmath__53 = temp_63;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__5
    void method_64() {
        sc_uint<1> temp_64;

                    sc_uint<6> inst_cellmath__5_tmp_4 = 
            -((sc_uint<6>)(rm.read()));
        temp_64 = (((sc_uint<1>)inst_cellmath__5_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__5 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__39
    void method_65() {
        sc_uint<1> temp_65;
        temp_65 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__48.read())))
        ;
        inst_cellmath__55__39 = temp_65;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__38
    void method_66() {
        sc_uint<1> temp_66;
        temp_66 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__6.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read())))
        ;
        inst_cellmath__55__38 = temp_66;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__8
    void method_67() {
        sc_uint<1> temp_67;

                    sc_uint<7> inst_cellmath__8_tmp_5 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<3>("0bus011")));
        temp_67 = (((sc_uint<1>)inst_cellmath__8_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__8 = temp_67;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__4
    void method_68() {
        sc_uint<1> temp_68;

                    sc_uint<7> inst_cellmath__4_tmp_6 = 
            -((sc_uint<7>)(rm.read()))
            -((sc_uint<7>)(sc_uint<2>("0b01")));
        temp_68 = (((sc_uint<1>)inst_cellmath__4_tmp_6.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__4 = temp_68;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__54__33
    void method_69() {
        sc_uint<1> temp_69;
        temp_69 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43.read())))
        ;
        inst_cellmath__54__33 = temp_69;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__54
    void method_70() {
        sc_uint<1> temp_70;
        temp_70 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__54__33.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__49.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__42.read()))
        ;
        inst_cellmath__54 = temp_70;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__37
    void method_71() {
        sc_uint<1> temp_71;
        temp_71 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__54.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50.read()(2,2))))
        ;
        inst_cellmath__55__37 = temp_71;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__36
    void method_72() {
        sc_uint<1> temp_72;
        temp_72 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__37.read())))
        ;
        inst_cellmath__55__36 = temp_72;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__35
    void method_73() {
        sc_uint<1> temp_73;
        temp_73 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__36.read())))
        ;
        inst_cellmath__55__35 = temp_73;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__34
    void method_74() {
        sc_uint<1> temp_74;
        temp_74 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__53.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__35.read())))
        ;
        inst_cellmath__55__34 = temp_74;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__41
    void method_75() {
        sc_uint<1> temp_75;
        temp_75 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39.read())))
        ;
        inst_cellmath__55__41 = temp_75;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__40
    void method_76() {
        sc_uint<1> temp_76;
        temp_76 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__54.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__41.read())))
        ;
        inst_cellmath__55__40 = temp_76;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55
    void method_77() {
        sc_uint<1> temp_77;
        temp_77 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__34.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__40.read())))
        ;
        inst_cellmath__55 = temp_77;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__57
    void method_78() {
        sc_uint<24> temp_78;
        temp_78 = 
            
            +((sc_uint<24>)(inst_cellmath__50.read()(24,2)))
            +((sc_uint<24>)(inst_cellmath__55.read()))
        ;
        inst_cellmath__57 = temp_78;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__62__46
    void method_79() {
        sc_uint<1> temp_79;
        temp_79 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read()(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__57.read()(23,23))))
        ;
        inst_cellmath__62__46 = temp_79;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__62__45
    void method_80() {
        sc_uint<1> temp_80;
        temp_80 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62__46.read())))
        ;
        inst_cellmath__62__45 = temp_80;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__29__12
    void method_81() {
        sc_uint<1> temp_81;
        temp_81 = 
            ~(sc_uint<1>)(inst_cellmath__28.read()(8,8))
        ;
        inst_cellmath__29__12 = temp_81;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__29
    void method_82() {
        sc_uint<8> temp_82;
        temp_82 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__29__12.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(a_exp.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__29__12.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(b_exp.read()))
        ;
        inst_cellmath__29 = temp_82;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__62
    void method_83() {
        sc_uint<1> temp_83;
        temp_83 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62__45.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__29.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29.read()(7,7))))
        ;
        inst_cellmath__62 = temp_83;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__59_tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__59_tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__59_tmp_8
    void method_84() {
        sc_uint<10> temp_84;
        temp_84 = 
            
            +((sc_uint<10>)(inst_cellmath__57.read()(23,23)))
            -((sc_uint<10>)(inst_cellmath__49.read()(4,0)))
        ;
        inst_cellmath__59_tmp_8 = temp_84;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__59_tmp_7
    void method_85() {
        sc_uint<10> temp_85;
        temp_85 = 
            inst_cellmath__59_tmp_8.read()
            +((sc_uint<10>)(inst_cellmath__29.read()))
        ;
        inst_cellmath__59_tmp_7 = temp_85;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__59
    void method_86() {
        sc_uint<10> temp_86;
        temp_86 = 
            inst_cellmath__59_tmp_7.read()
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
        ;
        inst_cellmath__59 = temp_86;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__60__44
    void method_87() {
        sc_uint<1> temp_87;
        temp_87 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59.read()(8,8))))
        ;
        inst_cellmath__60__44 = temp_87;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__71
    void method_88() {
        sc_uint<1> temp_88;
        temp_88 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__67.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)((inst_cellmath__59.read()[9]))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__60__44.read())))
        ;
        inst_cellmath__71 = temp_88;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__68__69
    void method_89() {
        sc_uint<1> temp_89;
        temp_89 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read())))
        ;
        inst_cellmath__68__69 = temp_89;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__68__68
    void method_90() {
        sc_uint<1> temp_90;
        temp_90 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68__69.read())))
        ;
        inst_cellmath__68__68 = temp_90;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__68(0,0)
    // part assign: lhs_part_73(1): inst_cellmath__68(0,0)
    sc_signal<sc_uint<1> > lhs_part_73;
    void method_91() {
        lhs_part_73 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68__68.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__68__0
    void method_92() {
        sc_uint<1> temp_92;
        temp_92 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
        ;
        inst_cellmath__68__0 = temp_92;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__68(7,1)
    // part assign: lhs_part_74(2): inst_cellmath__68(7,1)
    sc_signal<sc_uint<7> > lhs_part_74;
    void method_93() {
        lhs_part_74 = sc_uint<7>(
        (sc_uint<7>)(((sc_uint<7>)(sc_int<1>)inst_cellmath__68__0.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__72
    void method_94() {
        sc_uint<8> temp_94;
        temp_94 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__71.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__59.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__71.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(inst_cellmath__68.read()))
        ;
        inst_cellmath__72 = temp_94;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__71_0
    void method_95() {
        sc_uint<2> temp_95;
        temp_95 = 
            (inst_cellmath__71.read(),inst_cellmath__63.read())
        ;
        inst_cellmath__71_0 = temp_95;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__7
    void method_96() {
        sc_uint<1> temp_96;

                    sc_uint<7> inst_cellmath__7_tmp_9 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<3>("0bus010")));
        temp_96 = (((sc_uint<1>)inst_cellmath__7_tmp_9.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__7 = temp_96;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__70__74
    void method_97() {
        sc_uint<1> temp_97;
        temp_97 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__5.read()) == sc_uint<1>("0bus0")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__48.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__5.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__48.read()))
        ;
        inst_cellmath__70__74 = temp_97;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__70__73
    void method_98() {
        sc_uint<1> temp_98;
        temp_98 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__7.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70__74.read())))
        ;
        inst_cellmath__70__73 = temp_98;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__70
    void method_99() {
        sc_uint<1> temp_99;
        temp_99 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70__73.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__4.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__8.read())))
        ;
        inst_cellmath__70 = temp_99;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__64
    void method_100() {
        sc_uint<23> temp_100;
        temp_100 = 
            (sc_uint<1>(1),inst_cellmath__64__48_0.read()(22,1))
        ;
        inst_cellmath__64 = temp_100;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__73
    void method_101() {
        sc_uint<23> temp_101;
        temp_101 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__71_0.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__57.read()(22,0))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__71_0.read()) == sc_uint<2>("0bus10")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)inst_cellmath__70.read()))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__71_0.read()) == sc_uint<2>("0bus11")) & ((sc_uint<23>)(inst_cellmath__64.read()))
        ;
        inst_cellmath__73 = temp_101;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__3
    void method_102() {
        sc_uint<32> temp_102;
        temp_102 = 
            (inst_cellmath__67.read(),inst_cellmath__72.read(),inst_cellmath__73.read())
        ;
        inst_cellmath__3 = temp_102;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x
    void method_103() {
        sc_uint<32> temp_103;
        temp_103 = 
            (sc_uint<32>)(inst_cellmath__3.read())
        ;
        x = temp_103;
    }
    void method_104() { 
        sc_uint<25> temp_104 = inst_cellmath__26.read();
        temp_104(23,0) = lhs_part_66.read();
        inst_cellmath__26 = temp_104;
}
    void method_105() { 
        sc_uint<10> temp_105 = inst_cellmath__28__8.read();
        temp_105(8,0) = lhs_part_67.read();
        inst_cellmath__28__8 = temp_105;
}
    void method_106() { 
        sc_uint<9> temp_106 = inst_cellmath__28.read();
        temp_106(8,8) = lhs_part_68.read();
        inst_cellmath__28 = temp_106;
}
    void method_107() { 
        sc_uint<50> temp_107 = inst_cellmath__33.read();
        temp_107(49,24) = lhs_part_69.read();
        inst_cellmath__33 = temp_107;
}
    void method_108() { 
        sc_uint<25> temp_108 = inst_cellmath__25.read();
        temp_108(23,0) = lhs_part_70.read();
        inst_cellmath__25 = temp_108;
}
    void method_109() { 
        sc_uint<25> temp_109 = inst_cellmath__40_0_0.read();
        temp_109(23,0) = lhs_part_71.read();
        inst_cellmath__40_0_0 = temp_109;
}
    void method_110() { 
        sc_uint<27> temp_110 = inst_cellmath__45.read();
        temp_110(25,0) = lhs_part_72.read();
        inst_cellmath__45 = temp_110;
}
    void method_111() { 
        sc_uint<8> temp_111 = inst_cellmath__68.read();
        temp_111(0,0) = lhs_part_73.read();
        temp_111(7,1) = lhs_part_74.read();
        inst_cellmath__68 = temp_111;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(fp_add_cynw_cm_float_add2_ieee_E8_M23_2)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_0);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_1);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_2);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_3);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_4);
        sensitive << inst_cellmath__9
                  << inst_cellmath__10;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_5);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_6);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << inst_cellmath__14
                  << inst_cellmath__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << inst_cellmath__21
                  << inst_cellmath__12
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << inst_cellmath__9
                  << inst_cellmath__10;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_10);
        sensitive << inst_cellmath__14
                  << inst_cellmath__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_11);
        sensitive << inst_cellmath__24__5
                  << inst_cellmath__13
                  << inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_12);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << inst_cellmath__11
                  << inst_cellmath__16;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_15);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_16);
        sensitive << inst_cellmath__63
                  << inst_cellmath__67__67
                  << inst_cellmath__6;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_17);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_18);
        sensitive << inst_cellmath__27__7;

    // !!!! amethyst/writers/SystemC.cpp:5170
        SC_METHOD(method_19);
        sensitive << a_exp
                  << inst_cellmath__27__6;
    // !!!! amethyst/writers/SystemC.cpp:5187
        SC_METHOD(method_20);
        sensitive << a_exp
                  << inst_cellmath__27__6;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_21);
        sensitive << inst_cellmath__28__8;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_22);
        sensitive << b_man
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_23);
        sensitive << inst_cellmath__28
                  << inst_cellmath__34;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_24);
        sensitive << inst_cellmath__27
                  << inst_cellmath__32__14;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_25);
        sensitive << a_sign
                  << b_sign
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_26);
        sensitive << inst_cellmath__27
                  << inst_cellmath__28__8;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_27);
        sensitive << inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_28);
        sensitive << inst_cellmath__11
                  << inst_cellmath__16;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << inst_cellmath__30
                  << inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_30);
        sensitive << b_man
                  << a_man
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_31);
        sensitive << inst_cellmath__36__15;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_32);
        sensitive << inst_cellmath__36
                  << inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_33);
        sensitive << inst_cellmath__37
                  << inst_cellmath__33__18;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << inst_cellmath__30
                  << inst_cellmath__37;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << inst_cellmath__42__22
                  << inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << inst_cellmath__21
                  << inst_cellmath__33
                  << inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_37);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_38);
        sensitive << inst_cellmath__25
                  << inst_cellmath__26
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_39);
        sensitive << inst_cellmath__40_0_0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_40);
        sensitive << inst_cellmath__33
                  << inst_cellmath__21;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_41);
        sensitive << inst_cellmath__21
                  << inst_cellmath__39__19;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_42);
        sensitive << inst_cellmath__44
                  << inst_cellmath__40_0;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_43);
        sensitive << inst_cellmath__45_tmp_3
                  << inst_cellmath__39;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_44);
        sensitive << inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << inst_cellmath__48
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_46);
        sensitive << inst_cellmath__48
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_47);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_48);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_49);
        sensitive << inst_cellmath__66__59
                  << inst_cellmath__66__58
                  << inst_cellmath__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << inst_cellmath__66__56
                  << inst_cellmath__11
                  << inst_cellmath__16;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_51);
        sensitive << inst_cellmath__13
                  << inst_cellmath__18;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_52);
        sensitive << b_man
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_53);
        sensitive << a_man
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_54);
        sensitive << inst_cellmath__64__48_1
                  << inst_cellmath__64__48_2
                  << inst_cellmath__13_0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_55);
        sensitive << inst_cellmath__67__66
                  << inst_cellmath__67__65
                  << inst_cellmath__66
                  << inst_cellmath__64__48_0
                  << inst_cellmath__63_0;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_56);
        sensitive << inst_cellmath__45
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_57);
        sensitive << inst_cellmath__33
                  << inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_58);
        sensitive << inst_cellmath__30
                  << inst_cellmath__43__26;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_59);
        sensitive << inst_cellmath__33
                  << inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << inst_cellmath__30
                  << inst_cellmath__43__28;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_61);
        sensitive << inst_cellmath__43__25
                  << inst_cellmath__43__27;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_62);
        sensitive << inst_cellmath__33
                  << inst_cellmath__43__24
                  << inst_cellmath__21;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_63);
        sensitive << inst_cellmath__50
                  << inst_cellmath__43
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_64);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_65);
        sensitive << inst_cellmath__5
                  << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_66);
        sensitive << inst_cellmath__6
                  << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_67);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_68);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_69);
        sensitive << inst_cellmath__42
                  << inst_cellmath__50
                  << inst_cellmath__43;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_70);
        sensitive << inst_cellmath__54__33
                  << inst_cellmath__42
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_71);
        sensitive << inst_cellmath__54
                  << inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_72);
        sensitive << inst_cellmath__4
                  << inst_cellmath__55__37;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_73);
        sensitive << inst_cellmath__55__39
                  << inst_cellmath__55__38
                  << inst_cellmath__8
                  << inst_cellmath__55__36;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_74);
        sensitive << inst_cellmath__53
                  << inst_cellmath__55__35;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_75);
        sensitive << inst_cellmath__55__38
                  << inst_cellmath__55__39;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_76);
        sensitive << inst_cellmath__54
                  << inst_cellmath__55__41;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_77);
        sensitive << inst_cellmath__55__34
                  << inst_cellmath__55__40;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_78);
        sensitive << inst_cellmath__50
                  << inst_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_79);
        sensitive << inst_cellmath__45
                  << inst_cellmath__57;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_80);
        sensitive << inst_cellmath__45
                  << inst_cellmath__62__46;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_81);
        sensitive << inst_cellmath__28;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_82);
        sensitive << a_exp
                  << b_exp
                  << inst_cellmath__29__12;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_83);
        sensitive << inst_cellmath__62__45
                  << inst_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_84);
        sensitive << inst_cellmath__57
                  << inst_cellmath__49;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_85);
        sensitive << inst_cellmath__59_tmp_8
                  << inst_cellmath__29;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_86);
        sensitive << inst_cellmath__59_tmp_7;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_87);
        sensitive << inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_88);
        sensitive << inst_cellmath__67__67
                  << inst_cellmath__62
                  << inst_cellmath__17
                  << inst_cellmath__63
                  << inst_cellmath__12
                  << inst_cellmath__49
                  << inst_cellmath__59
                  << inst_cellmath__60__44;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_89);
        sensitive << inst_cellmath__55__38
                  << inst_cellmath__55__39
                  << inst_cellmath__4
                  << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_90);
        sensitive << inst_cellmath__62
                  << inst_cellmath__68__69;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_91);
        sensitive << inst_cellmath__68__68
                  << inst_cellmath__63
                  << inst_cellmath__12
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_92);
        sensitive << inst_cellmath__63
                  << inst_cellmath__62
                  << inst_cellmath__12
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_93);
        sensitive << inst_cellmath__68__0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_94);
        sensitive << inst_cellmath__59
                  << inst_cellmath__68
                  << inst_cellmath__71;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_95);
        sensitive << inst_cellmath__71
                  << inst_cellmath__63;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_96);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_97);
        sensitive << inst_cellmath__48
                  << inst_cellmath__5;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_98);
        sensitive << inst_cellmath__7
                  << inst_cellmath__70__74;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_99);
        sensitive << inst_cellmath__62
                  << inst_cellmath__70__73
                  << inst_cellmath__4
                  << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_100);
        sensitive << inst_cellmath__64__48_0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_101);
        sensitive << inst_cellmath__57
                  << inst_cellmath__70
                  << inst_cellmath__64
                  << inst_cellmath__71_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_102);
        sensitive << inst_cellmath__67
                  << inst_cellmath__72
                  << inst_cellmath__73;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_103);
        sensitive << inst_cellmath__3;
        SC_METHOD(method_104);
        sensitive << lhs_part_66;
        SC_METHOD(method_105);
        sensitive << lhs_part_67;
        SC_METHOD(method_106);
        sensitive << lhs_part_68;
        SC_METHOD(method_107);
        sensitive << lhs_part_69;
        SC_METHOD(method_108);
        sensitive << lhs_part_70;
        SC_METHOD(method_109);
        sensitive << lhs_part_71;
        SC_METHOD(method_110);
        sensitive << lhs_part_72;
        SC_METHOD(method_111);
        sensitive << lhs_part_73
                  << lhs_part_74;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef fp_add_cynw_cm_float_add2_ieee_E8_M23_2_COMPILED

/* CADENCE  vrbzTQDdrQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



