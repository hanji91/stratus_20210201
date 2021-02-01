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
    
    Configured at: 12:10:46 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_COMPILED
#define fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_COMPILED

SC_MODULE(fp_mul_cynw_cm_float_mul_ieee_E8_M23_0) // architecture "behavioural"
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
    sc_signal<sc_uint<1> > inst_cellmath__10;
    sc_signal<sc_uint<1> > inst_cellmath__12;
    sc_signal<sc_uint<1> > inst_cellmath__13;
    sc_signal<sc_uint<1> > inst_cellmath__14;
    sc_signal<sc_uint<1> > inst_cellmath__15;
    sc_signal<sc_uint<1> > inst_cellmath__17;
    sc_signal<sc_uint<1> > inst_cellmath__19;
    sc_signal<sc_uint<1> > inst_cellmath__20;
    sc_signal<sc_uint<1> > inst_cellmath__21;
    sc_signal<sc_uint<1> > inst_cellmath__22;
    sc_signal<sc_uint<1> > inst_cellmath__23;
    sc_signal<sc_uint<48> > inst_cellmath__24;
    sc_signal<sc_uint<48> > inst_cellmath__25;
    sc_signal<sc_uint<1> > inst_cellmath__26;
    sc_signal<sc_uint<1> > inst_cellmath__27;
    sc_signal<sc_uint<1> > inst_cellmath__28;
    sc_signal<sc_uint<10> > inst_cellmath__30;
    sc_signal<sc_uint<10> > inst_cellmath__31;
    sc_signal<sc_uint<1> > inst_cellmath__32;
    sc_signal<sc_uint<1> > inst_cellmath__34;
    sc_signal<sc_uint<1> > inst_cellmath__38;
    sc_signal<sc_uint<1> > inst_cellmath__41;
    sc_signal<sc_uint<1> > inst_cellmath__42;
    sc_signal<sc_uint<1> > inst_cellmath__44;
    sc_signal<sc_uint<25> > inst_cellmath__45;
    sc_signal<sc_uint<1> > inst_cellmath__46;
    sc_signal<sc_uint<1> > inst_cellmath__47;
    sc_signal<sc_uint<10> > inst_cellmath__48;
    sc_signal<sc_uint<1> > inst_cellmath__49;
    sc_signal<sc_uint<1> > inst_cellmath__51;
    sc_signal<sc_uint<8> > inst_cellmath__52;
    sc_signal<sc_uint<23> > inst_cellmath__53;
    sc_signal<sc_uint<24> > inst_cellmath__24__4;
    sc_signal<sc_uint<24> > inst_cellmath__24__5;
    sc_signal<sc_uint<48> > inst_cellmath__25__7;
    sc_signal<sc_uint<1> > inst_cellmath__26__8;
    sc_signal<sc_uint<1> > inst_cellmath__26__9;
    sc_signal<sc_uint<1> > inst_cellmath__32__11;
    sc_signal<sc_uint<1> > inst_cellmath__44__29;
    sc_signal<sc_uint<1> > inst_cellmath__44__28;
    sc_signal<sc_uint<1> > inst_cellmath__44__30;
    sc_signal<sc_uint<1> > inst_cellmath__44__31;
    sc_signal<sc_uint<1> > inst_cellmath__44__27;
    sc_signal<sc_uint<1> > inst_cellmath__44__26;
    sc_signal<sc_uint<1> > inst_cellmath__44__33;
    sc_signal<sc_uint<1> > inst_cellmath__44__32;
    sc_signal<sc_uint<9> > inst_cellmath__37__40;
    sc_signal<sc_uint<1> > inst_cellmath__37__42;
    sc_signal<sc_uint<1> > inst_cellmath__37__43;
    sc_signal<sc_uint<1> > inst_cellmath__51__49;
    sc_signal<sc_uint<1> > inst_cellmath__51__48;
    sc_signal<sc_uint<1> > inst_cellmath__50__50;
    sc_signal<sc_uint<3> > inst_cellmath__26_0;
    sc_signal<sc_uint<2> > inst_cellmath__5_0;
    sc_signal<sc_uint<3> > inst_cellmath__49_0;
    sc_signal<sc_uint<5> > inst_cellmath__49_1_0;
    sc_signal<sc_uint<3> > inst_cellmath__49_1_1;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__24__4
    void method_0() {
        sc_uint<24> temp_0;
        temp_0 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_cellmath__24__4 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__17
    void method_1() {
        sc_uint<1> temp_1;
        temp_1 = 
            
            ((sc_uint<1>)((sc_uint<1>)(b_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp.read()(7,7))))
        ;
        inst_cellmath__17 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__19
    void method_2() {
        sc_uint<1> temp_2;
        temp_2 = 
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
        inst_cellmath__19 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__21
    void method_3() {
        sc_uint<1> temp_3;
        temp_3 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19.read())))
        ;
        inst_cellmath__21 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__13
    void method_4() {
        sc_uint<1> temp_4;
        temp_4 = 
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
        inst_cellmath__13 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__26__9
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read())))
        ;
        inst_cellmath__26__9 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__10
    void method_6() {
        sc_uint<1> temp_6;
        temp_6 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
        ;
        inst_cellmath__10 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__12
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
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
        inst_cellmath__12 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__14
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12.read())))
        ;
        inst_cellmath__14 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__20
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
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
        inst_cellmath__20 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__26__8
    void method_10() {
        sc_uint<1> temp_10;
        temp_10 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__20.read())))
        ;
        inst_cellmath__26__8 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__15
    void method_11() {
        sc_uint<1> temp_11;
        temp_11 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__12.read())))
        ;
        inst_cellmath__15 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__22
    void method_12() {
        sc_uint<1> temp_12;
        temp_12 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__19.read())))
        ;
        inst_cellmath__22 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__26
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26__9.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26__8.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__15.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22.read())))
        ;
        inst_cellmath__26 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__26_0
    void method_14() {
        sc_uint<3> temp_14;
        temp_14 = 
            (inst_cellmath__26.read(),inst_cellmath__15.read(),inst_cellmath__22.read())
        ;
        inst_cellmath__26_0 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__23
    void method_15() {
        sc_uint<1> temp_15;
        temp_15 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        inst_cellmath__23 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__41
    void method_16() {
        sc_uint<1> temp_16;
        temp_16 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__26_0.read()(2,2)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__23.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__26_0.read()) == sc_uint<3>("0bus100")) & ((sc_uint<1>)(sc_uint<1>(1))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__26_0.read()) == sc_uint<3>("0bus101")) & ((sc_uint<1>)(b_sign.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__26_0.read()(2,1)) == sc_uint<2>("0bus11")) & ((sc_uint<1>)(a_sign.read()))
        ;
        inst_cellmath__41 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__24__5
    void method_17() {
        sc_uint<24> temp_17;
        temp_17 = 
            (sc_uint<1>(1),b_man.read())
        ;
        inst_cellmath__24__5 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__24
    void method_18() {
        sc_uint<48> temp_18;
        temp_18 = 
            
            +((sc_uint<48>)(inst_cellmath__24__4.read()) * (sc_uint<48>)(inst_cellmath__24__5.read()))
        ;
        inst_cellmath__24 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__25__7
    void method_19() {
        sc_uint<48> temp_19;
        temp_19 = 
            ((sc_biguint<47>)(inst_cellmath__24.read()(46,0)),sc_uint<1>(0))
        ;
        inst_cellmath__25__7 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__25
    void method_20() {
        sc_uint<48> temp_20;
        temp_20 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__24.read()(47,47)) == sc_uint<1>("0bus0")) & ((sc_uint<48>)(inst_cellmath__25__7.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__24.read()(47,47)) == sc_uint<1>("0bus1")) & ((sc_uint<48>)(inst_cellmath__24.read()))
        ;
        inst_cellmath__25 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45
    void method_21() {
        sc_uint<25> temp_21;
        temp_21 = 
            
            +((sc_uint<25>)(inst_cellmath__25.read()(47,24)))
            +((sc_uint<25>)(sc_uint<2>("0bus01")))
        ;
        inst_cellmath__45 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__5
    void method_22() {
        sc_uint<1> temp_22;

                    sc_uint<6> inst_cellmath__5_tmp_0 = 
            -((sc_uint<6>)(rm.read()));
        temp_22 = (((sc_uint<1>)inst_cellmath__5_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__5 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__31
    void method_23() {
        sc_uint<1> temp_23;
        temp_23 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__23.read())))
        ;
        inst_cellmath__44__31 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__6
    void method_24() {
        sc_uint<1> temp_24;

                    sc_uint<7> inst_cellmath__6_tmp_1 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<2>("0bus01")));
        temp_24 = (((sc_uint<1>)inst_cellmath__6_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__6 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__30
    void method_25() {
        sc_uint<1> temp_25;
        temp_25 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__6.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__23.read())))
        ;
        inst_cellmath__44__30 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__8
    void method_26() {
        sc_uint<1> temp_26;

                    sc_uint<7> inst_cellmath__8_tmp_2 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<3>("0bus011")));
        temp_26 = (((sc_uint<1>)inst_cellmath__8_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__8 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__4
    void method_27() {
        sc_uint<1> temp_27;

                    sc_uint<7> inst_cellmath__4_tmp_3 = 
            -((sc_uint<7>)(rm.read()))
            -((sc_uint<7>)(sc_uint<2>("0b01")));
        temp_27 = (((sc_uint<1>)inst_cellmath__4_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__4 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__34
    void method_28() {
        sc_uint<1> temp_28;
        temp_28 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(22,22))))
        ;
        inst_cellmath__34 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__29
    void method_29() {
        sc_uint<1> temp_29;
        temp_29 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(24,24))))
        ;
        inst_cellmath__44__29 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__28
    void method_30() {
        sc_uint<1> temp_30;
        temp_30 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__29.read())))
        ;
        inst_cellmath__44__28 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__27
    void method_31() {
        sc_uint<1> temp_31;
        temp_31 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__31.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__28.read())))
        ;
        inst_cellmath__44__27 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__26
    void method_32() {
        sc_uint<1> temp_32;
        temp_32 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25.read()(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__27.read())))
        ;
        inst_cellmath__44__26 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__33
    void method_33() {
        sc_uint<1> temp_33;
        temp_33 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__31.read())))
        ;
        inst_cellmath__44__33 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44__32
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__33.read())))
        ;
        inst_cellmath__44__32 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__44
    void method_35() {
        sc_uint<1> temp_35;
        temp_35 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__26.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__32.read())))
        ;
        inst_cellmath__44 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__46
    void method_36() {
        sc_uint<1> temp_36;
        temp_36 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read()(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44.read())))
        ;
        inst_cellmath__46 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__38
    void method_37() {
        sc_uint<1> temp_37;
        temp_37 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24.read()(47,47))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46.read())))
        ;
        inst_cellmath__38 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__30_tmp_4;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__30_tmp_4
    void method_38() {
        sc_uint<10> temp_38;
        temp_38 = 
            
            +((sc_uint<10>)(a_exp.read()))
            +((sc_uint<10>)(b_exp.read()))
        ;
        inst_cellmath__30_tmp_4 = temp_38;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__30
    void method_39() {
        sc_uint<10> temp_39;
        temp_39 = 
            inst_cellmath__30_tmp_4.read()
            -((sc_uint<10>)(sc_uint<10>("0b0001111111")))
        ;
        inst_cellmath__30 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__31
    void method_40() {
        sc_uint<10> temp_40;
        temp_40 = 
            
            +((sc_uint<10>)(inst_cellmath__30.read()))
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
        ;
        inst_cellmath__31 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__48
    void method_41() {
        sc_uint<10> temp_41;
        temp_41 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__38.read()) == sc_uint<1>("0bus0")) & ((sc_uint<10>)(inst_cellmath__30.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__38.read()) == sc_uint<1>("0bus1")) & ((sc_uint<10>)(inst_cellmath__31.read()))
        ;
        inst_cellmath__48 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51__49
    void method_42() {
        sc_uint<1> temp_42;
        temp_42 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(7,7))))
        ;
        inst_cellmath__51__49 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51__48
    void method_43() {
        sc_uint<1> temp_43;
        temp_43 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__49.read())))
        ;
        inst_cellmath__51__48 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51
    void method_44() {
        sc_uint<1> temp_44;
        temp_44 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__48.read()[9]))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__48.read())))
        ;
        inst_cellmath__51 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__28
    void method_45() {
        sc_uint<1> temp_45;
        temp_45 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__20.read())))
        ;
        inst_cellmath__28 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__27
    void method_46() {
        sc_uint<1> temp_46;
        temp_46 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21.read())))
        ;
        inst_cellmath__27 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__50__50
    void method_47() {
        sc_uint<1> temp_47;
        temp_47 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read()(9,9))))
        ;
        inst_cellmath__50__50 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__49
    void method_48() {
        sc_uint<1> temp_48;
        temp_48 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27.read())))
            |((sc_uint<1>)((sc_uint<1>)((inst_cellmath__48.read()[9]))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__50.read())))
        ;
        inst_cellmath__49 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__37__43
    void method_49() {
        sc_uint<1> temp_49;
        temp_49 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27.read())))
        ;
        inst_cellmath__37__43 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32__11
    void method_50() {
        sc_uint<1> temp_50;
        temp_50 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read()(8,8))))
        ;
        inst_cellmath__32__11 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32
    void method_51() {
        sc_uint<1> temp_51;
        temp_51 = 
            ~(
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__30.read()[9]))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__11.read()))))
        ;
        inst_cellmath__32 = temp_51;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__37__42
    void method_52() {
        sc_uint<1> temp_52;
        temp_52 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32.read())))
        ;
        inst_cellmath__37__42 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__49_0
    void method_53() {
        sc_uint<3> temp_53;
        temp_53 = 
            (inst_cellmath__49.read(),inst_cellmath__37__43.read(),inst_cellmath__37__42.read())
        ;
        inst_cellmath__49_0 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__5_0
    void method_54() {
        sc_uint<2> temp_54;
        temp_54 = 
            (inst_cellmath__5.read(),inst_cellmath__6.read())
        ;
        inst_cellmath__5_0 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__7
    void method_55() {
        sc_uint<1> temp_55;

                    sc_uint<7> inst_cellmath__7_tmp_5 = 
            -((sc_uint<7>)(rm.read()))
            +((sc_uint<7>)(sc_uint<3>("0bus010")));
        temp_55 = (((sc_uint<1>)inst_cellmath__7_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__7 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__42
    void method_56() {
        sc_uint<1> temp_56;
        temp_56 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__5_0.read()) == sc_uint<2>("0bus00")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__7.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__5_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__23.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__5_0.read()(1,1)) == sc_uint<1>("0bus1")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__23.read()))
        ;
        inst_cellmath__42 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__37__40(7,0)
    // part assign: lhs_part_159(1): inst_cellmath__37__40(7,0)
    sc_signal<sc_uint<8> > lhs_part_159;
    void method_57() {
        lhs_part_159 = sc_uint<8>(
        (sc_uint<7>("0bus1111111"),inst_cellmath__42.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__52
    void method_58() {
        sc_uint<8> temp_58;
        temp_58 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__49_0.read()(2,2)) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__48.read()(7,0))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__49_0.read()) == sc_uint<3>("0bus100")) & ((sc_uint<8>)(inst_cellmath__37__40.read()(7,0))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__49_0.read()(2,1)) == sc_uint<2>("0bus11")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__52 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__49_1_1
    void method_59() {
        sc_uint<3> temp_59;
        temp_59 = 
            (inst_cellmath__49.read(),inst_cellmath__44.read(),inst_cellmath__26.read())
        ;
        inst_cellmath__49_1_1 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__47
    void method_60() {
        sc_uint<1> temp_60;
        temp_60 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__42.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__32.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__28.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__26.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__27.read())))
        ;
        inst_cellmath__47 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__53(22,22)
    // part assign: lhs_part_160(1): inst_cellmath__53(22,22)
    sc_signal<sc_uint<1> > lhs_part_160;
    void method_61() {
        lhs_part_160 = sc_uint<1>(
        
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__49_1_1.read()(2,1)) == sc_uint<2>("0bus00")) & ((sc_uint<1>)(inst_cellmath__25.read()(46,46))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__49_1_1.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__45.read()(22,22))) |
        -(int)((sc_uint<2>)((sc_uint<1>)(inst_cellmath__49_1_1.read()(2,2)), (sc_uint<1>)(inst_cellmath__49_1_1.read()(0,0))) == sc_uint<2>("0bus10")) & ((sc_uint<1>)(inst_cellmath__47.read())) |
        -(int)((sc_uint<2>)((sc_uint<1>)(inst_cellmath__49_1_1.read()(2,2)), (sc_uint<1>)(inst_cellmath__49_1_1.read()(0,0))) == sc_uint<2>("0bus11")) & ((sc_uint<1>)(sc_uint<1>(1)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__49_1_0
    void method_62() {
        sc_uint<5> temp_62;
        temp_62 = 
            (inst_cellmath__49.read(),inst_cellmath__44.read(),inst_cellmath__26.read(),inst_cellmath__15.read(),inst_cellmath__22.read())
        ;
        inst_cellmath__49_1_0 = temp_62;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__53(21,0)
    // part assign: lhs_part_161(2): inst_cellmath__53(21,0)
    sc_signal<sc_uint<22> > lhs_part_161;
    void method_63() {
        lhs_part_161 = sc_uint<22>(
        
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__49_1_0.read()(4,3)) == sc_uint<2>("0bus00")) & ((sc_uint<22>)(inst_cellmath__25.read()(45,24))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__49_1_0.read()(4,3)) == sc_uint<2>("0bus01")) & ((sc_uint<22>)(inst_cellmath__45.read()(21,0))) |
        -(int)((sc_uint<2>)((sc_uint<1>)(inst_cellmath__49_1_0.read()(4,4)), (sc_uint<1>)(inst_cellmath__49_1_0.read()(2,2))) == sc_uint<2>("0bus10")) & ((sc_uint<22>)(((sc_uint<22>)(sc_int<1>)inst_cellmath__47.read()))) |
        -(int)((sc_uint<4>)((sc_uint<1>)(inst_cellmath__49_1_0.read()(4,4)), (sc_uint<3>)(inst_cellmath__49_1_0.read()(2,0))) == sc_uint<4>("0bus1101")) & ((sc_uint<22>)(b_man.read()(21,0))) |
        -(int)((sc_uint<3>)((sc_uint<1>)(inst_cellmath__49_1_0.read()(4,4)), (sc_uint<2>)(inst_cellmath__49_1_0.read()(2,1))) == sc_uint<3>("0bus111")) & ((sc_uint<22>)(a_man.read()(21,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__3
    void method_64() {
        sc_uint<32> temp_64;
        temp_64 = 
            (inst_cellmath__41.read(),inst_cellmath__52.read(),inst_cellmath__53.read())
        ;
        inst_cellmath__3 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x
    void method_65() {
        sc_uint<32> temp_65;
        temp_65 = 
            (sc_uint<32>)(inst_cellmath__3.read())
        ;
        x = temp_65;
    }
    void method_66() { 
        sc_uint<9> temp_66 = inst_cellmath__37__40.read();
        temp_66(7,0) = lhs_part_159.read();
        inst_cellmath__37__40 = temp_66;
}
    void method_67() { 
        sc_uint<23> temp_67 = inst_cellmath__53.read();
        temp_67(22,22) = lhs_part_160.read();
        temp_67(21,0) = lhs_part_161.read();
        inst_cellmath__53 = temp_67;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(fp_mul_cynw_cm_float_mul_ieee_E8_M23_0)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_0);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_1);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_2);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_3);
        sensitive << inst_cellmath__17
                  << inst_cellmath__19;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_4);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_5);
        sensitive << inst_cellmath__21
                  << inst_cellmath__13;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_6);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << inst_cellmath__10
                  << inst_cellmath__12;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_10);
        sensitive << inst_cellmath__14
                  << inst_cellmath__20;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_11);
        sensitive << inst_cellmath__10
                  << inst_cellmath__12;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_12);
        sensitive << inst_cellmath__17
                  << inst_cellmath__19;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << inst_cellmath__26__9
                  << inst_cellmath__26__8
                  << inst_cellmath__15
                  << inst_cellmath__22;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_14);
        sensitive << inst_cellmath__26
                  << inst_cellmath__15
                  << inst_cellmath__22;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_15);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_16);
        sensitive << inst_cellmath__23
                  << b_sign
                  << a_sign
                  << inst_cellmath__26_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_17);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_18);
        sensitive << inst_cellmath__24__4
                  << inst_cellmath__24__5;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_19);
        sensitive << inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_20);
        sensitive << inst_cellmath__25__7
                  << inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_21);
        sensitive << inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_22);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_23);
        sensitive << inst_cellmath__5
                  << inst_cellmath__23;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_24);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_25);
        sensitive << inst_cellmath__6
                  << inst_cellmath__23;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_26);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_27);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_28);
        sensitive << inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << inst_cellmath__34
                  << inst_cellmath__25;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_30);
        sensitive << inst_cellmath__4
                  << inst_cellmath__44__29;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_31);
        sensitive << inst_cellmath__44__31
                  << inst_cellmath__44__30
                  << inst_cellmath__8
                  << inst_cellmath__44__28;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_32);
        sensitive << inst_cellmath__25
                  << inst_cellmath__44__27;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_33);
        sensitive << inst_cellmath__44__30
                  << inst_cellmath__44__31;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << inst_cellmath__34
                  << inst_cellmath__44__33;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << inst_cellmath__44__26
                  << inst_cellmath__44__32;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << inst_cellmath__45
                  << inst_cellmath__44;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_37);
        sensitive << inst_cellmath__24
                  << inst_cellmath__46;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_38);
        sensitive << a_exp
                  << b_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_39);
        sensitive << inst_cellmath__30_tmp_4;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_40);
        sensitive << inst_cellmath__30;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_41);
        sensitive << inst_cellmath__30
                  << inst_cellmath__31
                  << inst_cellmath__38;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_43);
        sensitive << inst_cellmath__48
                  << inst_cellmath__51__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_44);
        sensitive << inst_cellmath__48
                  << inst_cellmath__51__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << inst_cellmath__13
                  << inst_cellmath__20;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_46);
        sensitive << inst_cellmath__14
                  << inst_cellmath__21;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_47);
        sensitive << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_48);
        sensitive << inst_cellmath__51
                  << inst_cellmath__28
                  << inst_cellmath__26
                  << inst_cellmath__27
                  << inst_cellmath__48
                  << inst_cellmath__50__50;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_49);
        sensitive << inst_cellmath__26
                  << inst_cellmath__27;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << inst_cellmath__30;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_51);
        sensitive << inst_cellmath__30
                  << inst_cellmath__32__11;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_52);
        sensitive << inst_cellmath__28
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_53);
        sensitive << inst_cellmath__49
                  << inst_cellmath__37__43
                  << inst_cellmath__37__42;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_54);
        sensitive << inst_cellmath__5
                  << inst_cellmath__6;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_55);
        sensitive << rm;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_56);
        sensitive << inst_cellmath__7
                  << inst_cellmath__23
                  << inst_cellmath__5_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_57);
        sensitive << inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_58);
        sensitive << inst_cellmath__48
                  << inst_cellmath__37__40
                  << inst_cellmath__49_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_59);
        sensitive << inst_cellmath__49
                  << inst_cellmath__44
                  << inst_cellmath__26;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << inst_cellmath__42
                  << inst_cellmath__32
                  << inst_cellmath__28
                  << inst_cellmath__26
                  << inst_cellmath__27;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_61);
        sensitive << inst_cellmath__25
                  << inst_cellmath__45
                  << inst_cellmath__47
                  << inst_cellmath__49_1_1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_62);
        sensitive << inst_cellmath__49
                  << inst_cellmath__44
                  << inst_cellmath__26
                  << inst_cellmath__15
                  << inst_cellmath__22;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_63);
        sensitive << inst_cellmath__25
                  << inst_cellmath__45
                  << inst_cellmath__47
                  << b_man
                  << a_man
                  << inst_cellmath__49_1_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_64);
        sensitive << inst_cellmath__41
                  << inst_cellmath__52
                  << inst_cellmath__53;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_65);
        sensitive << inst_cellmath__3;
        SC_METHOD(method_66);
        sensitive << lhs_part_159;
        SC_METHOD(method_67);
        sensitive << lhs_part_160
                  << lhs_part_161;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef fp_mul_cynw_cm_float_mul_ieee_E8_M23_0_COMPILED

/* CADENCE  uLX0Qg3cow== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/





