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
    C++ RTL Simulation Model
    
    Configured at: 12:10:47 KST (+0900), Tuesday 29 December 2020
    Configured on: design1
    Configured by: hanji ()
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/
#include "systemc.h"
#if !defined(systemc_beh_c2_libs)
#define systemc_beh_c2_libs
template <class T>
static inline
void
c2_sqrt(
    T &q,       // quotient output
    T &r,       // remainder output
    const T &x, // input
    int bits=0  // max number of bits in x to consider
)
{
    q=T(0);
    r=x;

    int stages = bits ? bits/2+(bits&1) : sizeof(T)*8/2;
    for (int i=stages-1; i>=0; i--) {
        T d=(q<<(i+1)) | (T(1)<<(2*i));
        if (r >= d) {
            r -= d;
            q |= T(1)<<i;
        }
    }
}

#endif // !defined(systemc_beh_c2_libs)
    // !!!! amethyst/writers/SystemCbeh.cpp:4013
#if !defined float_div_cynw_cm_float_mul_ieee_E8_M23_2_INCLUDED
#define float_div_cynw_cm_float_mul_ieee_E8_M23_2_INCLUDED

struct class_float_div_cynw_cm_float_mul_ieee_E8_M23_2_0 { // BDW_REPLACE_NAME cynw_cm_float_mul_ieee

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    void operator () (
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,const sc_uint<3>& rm // input  rm[2:0] : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{


// Signal initializations:

    inst_cellmath__3=0;
    inst_cellmath__4=0;
    inst_cellmath__5=0;
    inst_cellmath__6=0;
    inst_cellmath__7=0;
    inst_cellmath__8=0;
    inst_cellmath__10=0;
    inst_cellmath__12=0;
    inst_cellmath__13=0;
    inst_cellmath__14=0;
    inst_cellmath__15=0;
    inst_cellmath__17=0;
    inst_cellmath__19=0;
    inst_cellmath__20=0;
    inst_cellmath__21=0;
    inst_cellmath__22=0;
    inst_cellmath__23=0;
    inst_cellmath__24=0;
    inst_cellmath__25=0;
    inst_cellmath__26=0;
    inst_cellmath__27=0;
    inst_cellmath__28=0;
    inst_cellmath__30=0;
    inst_cellmath__31=0;
    inst_cellmath__32=0;
    inst_cellmath__34=0;
    inst_cellmath__38=0;
    inst_cellmath__41=0;
    inst_cellmath__42=0;
    inst_cellmath__44=0;
    inst_cellmath__45=0;
    inst_cellmath__46=0;
    inst_cellmath__47=0;
    inst_cellmath__48=0;
    inst_cellmath__49=0;
    inst_cellmath__51=0;
    inst_cellmath__52=0;
    inst_cellmath__53=0;
    inst_cellmath__24__4=0;
    inst_cellmath__24__5=0;
    inst_cellmath__25__7=0;
    inst_cellmath__26__8=0;
    inst_cellmath__26__9=0;
    inst_cellmath__32__11=0;
    inst_cellmath__44__29=0;
    inst_cellmath__44__28=0;
    inst_cellmath__44__30=0;
    inst_cellmath__44__31=0;
    inst_cellmath__44__27=0;
    inst_cellmath__44__26=0;
    inst_cellmath__44__33=0;
    inst_cellmath__44__32=0;
    inst_cellmath__37__40=0;
    inst_cellmath__37__42=0;
    inst_cellmath__37__43=0;
    inst_cellmath__51__49=0;
    inst_cellmath__51__48=0;
    inst_cellmath__50__50=0;
    inst_cellmath__26_0=0;
    inst_cellmath__5_0=0;
    inst_cellmath__49_0=0;
    inst_cellmath__49_1_0=0;
    inst_cellmath__49_1_1=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__24__4
    inst_cellmath__24__4 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__17
    inst_cellmath__17 = 
        
            ((sc_uint<1>)((sc_uint<1>)(b_exp(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(b_exp(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__19
    inst_cellmath__19 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(b_man(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(b_man(22,22)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__21
    inst_cellmath__21 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__13
    inst_cellmath__13 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_exp(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_exp(7,7)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__26__9
    inst_cellmath__26__9 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__10
    inst_cellmath__10 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_exp(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__12
    inst_cellmath__12 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(a_man(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(a_man(22,22)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__14
    inst_cellmath__14 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__20
    inst_cellmath__20 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(b_exp(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(b_exp(7,7)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__26__8
    inst_cellmath__26__8 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__20)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__15
    inst_cellmath__15 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__12)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__22
    inst_cellmath__22 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__19)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__26
    inst_cellmath__26 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26__9)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26__8)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__15)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__26_0
    inst_cellmath__26_0 = 
        (inst_cellmath__26,inst_cellmath__15,inst_cellmath__22)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__23
    inst_cellmath__23 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__41
    inst_cellmath__41 = 
        
        -(int)((sc_uint<1>)inst_cellmath__26_0(2,2) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__23)) |
        -(int)((sc_uint<3>)inst_cellmath__26_0 == sc_uint<3>("0bus100")) & ((sc_uint<1>)(sc_uint<1>(1))) |
        -(int)((sc_uint<3>)inst_cellmath__26_0 == sc_uint<3>("0bus101")) & ((sc_uint<1>)(b_sign)) |
        -(int)((sc_uint<2>)inst_cellmath__26_0(2,1) == sc_uint<2>("0bus11")) & ((sc_uint<1>)(a_sign))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__24__5
    inst_cellmath__24__5 = 
        (sc_uint<1>(1),b_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__24
    inst_cellmath__24 = 
        
            +((sc_uint<48>)(inst_cellmath__24__4) * (sc_uint<48>)(inst_cellmath__24__5))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__25__7
    inst_cellmath__25__7 = 
        ((sc_biguint<47>)(inst_cellmath__24(46,0)),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__25
    inst_cellmath__25 = 
        
        -(int)((sc_uint<1>)inst_cellmath__24(47,47) == sc_uint<1>("0bus0")) & ((sc_uint<48>)(inst_cellmath__25__7)) |
        -(int)((sc_uint<1>)inst_cellmath__24(47,47) == sc_uint<1>("0bus1")) & ((sc_uint<48>)(inst_cellmath__24))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45
    inst_cellmath__45 = 
        
            +((sc_uint<25>)(inst_cellmath__25(47,24)))
            +((sc_uint<25>)(sc_uint<2>("0bus01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<6> inst_cellmath__5_tmp_0 = 
            -((sc_uint<6>)(rm));
        inst_cellmath__5 = (((sc_uint<1>)inst_cellmath__5_tmp_0.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__31
    inst_cellmath__44__31 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__5)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__23)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__6_tmp_1 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<2>("0bus01")));
        inst_cellmath__6 = (((sc_uint<1>)inst_cellmath__6_tmp_1.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__30
    inst_cellmath__44__30 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__6)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__23)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__8_tmp_2 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<3>("0bus011")));
        inst_cellmath__8 = (((sc_uint<1>)inst_cellmath__8_tmp_2.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__4_tmp_3 = 
            -((sc_uint<7>)(rm))
            -((sc_uint<7>)(sc_uint<2>("0b01")));
        inst_cellmath__4 = (((sc_uint<1>)inst_cellmath__4_tmp_3.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__34
    inst_cellmath__34 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(22,22))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__29
    inst_cellmath__44__29 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(24,24))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__28
    inst_cellmath__44__28 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__29)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__27
    inst_cellmath__44__27 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__31)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__30)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__28)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__26
    inst_cellmath__44__26 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__27)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__33
    inst_cellmath__44__33 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__30)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__31)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44__32
    inst_cellmath__44__32 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__33)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44
    inst_cellmath__44 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__26)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44__32)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__46
    inst_cellmath__46 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__38
    inst_cellmath__38 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24(47,47))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__30_tmp_4;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__30_tmp_4
    inst_cellmath__30_tmp_4 = 
        
            +((sc_uint<10>)(a_exp))
            +((sc_uint<10>)(b_exp))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__30
    inst_cellmath__30 = 
        inst_cellmath__30_tmp_4
            -((sc_uint<10>)(sc_uint<10>("0b0001111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__31
    inst_cellmath__31 = 
        
            +((sc_uint<10>)(inst_cellmath__30))
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__48
    inst_cellmath__48 = 
        
        -(int)((sc_uint<1>)inst_cellmath__38 == sc_uint<1>("0bus0")) & ((sc_uint<10>)(inst_cellmath__30)) |
        -(int)((sc_uint<1>)inst_cellmath__38 == sc_uint<1>("0bus1")) & ((sc_uint<10>)(inst_cellmath__31))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51__49
    inst_cellmath__51__49 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51__48
    inst_cellmath__51__48 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__49)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51
    inst_cellmath__51 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__48(9,9)))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__48)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__28
    inst_cellmath__28 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__20)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__27
    inst_cellmath__27 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__50__50
    inst_cellmath__50__50 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48(9,9))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__49
    inst_cellmath__49 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27)))
            |((sc_uint<1>)((sc_uint<1>)((inst_cellmath__48(9,9)))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__50)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__37__43
    inst_cellmath__37__43 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32__11
    inst_cellmath__32__11 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30(8,8))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32
    inst_cellmath__32 = 
        ~(
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__30(9,9)))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__11))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__37__42
    inst_cellmath__37__42 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__49_0
    inst_cellmath__49_0 = 
        (inst_cellmath__49,inst_cellmath__37__43,inst_cellmath__37__42)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__5_0
    inst_cellmath__5_0 = 
        (inst_cellmath__5,inst_cellmath__6)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__7_tmp_5 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<3>("0bus010")));
        inst_cellmath__7 = (((sc_uint<1>)inst_cellmath__7_tmp_5.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__42
    inst_cellmath__42 = 
        
        -(int)((sc_uint<2>)inst_cellmath__5_0 == sc_uint<2>("0bus00")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__7)) |
        -(int)((sc_uint<2>)inst_cellmath__5_0 == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__23)) |
        -(int)((sc_uint<1>)inst_cellmath__5_0(1,1) == sc_uint<1>("0bus1")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__23))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__37__40(7,0)
    inst_cellmath__37__40(7,0) = 
        (sc_uint<7>("0bus1111111"),inst_cellmath__42)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__52
    inst_cellmath__52 = 
        
        -(int)((sc_uint<1>)inst_cellmath__49_0(2,2) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__48(7,0))) |
        -(int)((sc_uint<3>)inst_cellmath__49_0 == sc_uint<3>("0bus100")) & ((sc_uint<8>)(inst_cellmath__37__40(7,0))) |
        -(int)((sc_uint<2>)inst_cellmath__49_0(2,1) == sc_uint<2>("0bus11")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__49_1_1
    inst_cellmath__49_1_1 = 
        (inst_cellmath__49,inst_cellmath__44,inst_cellmath__26)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__47
    inst_cellmath__47 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__42)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__32)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__28)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__26)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__27)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__53(22,22)
    inst_cellmath__53(22,22) = 
        
        -(int)((sc_uint<2>)inst_cellmath__49_1_1(2,1) == sc_uint<2>("0bus00")) & ((sc_uint<1>)(inst_cellmath__25(46,46))) |
        -(int)((sc_uint<2>)inst_cellmath__49_1_1(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__45(22,22))) |
        -(int)((sc_uint<2>)(inst_cellmath__49_1_1(2,2), inst_cellmath__49_1_1(0,0)) == sc_uint<2>("0bus10")) & ((sc_uint<1>)(inst_cellmath__47)) |
        -(int)((sc_uint<2>)(inst_cellmath__49_1_1(2,2), inst_cellmath__49_1_1(0,0)) == sc_uint<2>("0bus11")) & ((sc_uint<1>)(sc_uint<1>(1)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__49_1_0
    inst_cellmath__49_1_0 = 
        (inst_cellmath__49,inst_cellmath__44,inst_cellmath__26,inst_cellmath__15,inst_cellmath__22)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__53(21,0)
    inst_cellmath__53(21,0) = 
        
        -(int)((sc_uint<2>)inst_cellmath__49_1_0(4,3) == sc_uint<2>("0bus00")) & ((sc_uint<22>)(inst_cellmath__25(45,24))) |
        -(int)((sc_uint<2>)inst_cellmath__49_1_0(4,3) == sc_uint<2>("0bus01")) & ((sc_uint<22>)(inst_cellmath__45(21,0))) |
        -(int)((sc_uint<2>)(inst_cellmath__49_1_0(4,4), inst_cellmath__49_1_0(2,2)) == sc_uint<2>("0bus10")) & ((sc_uint<22>)(((sc_uint<22>)(sc_int<1>)inst_cellmath__47))) |
        -(int)((sc_uint<4>)(inst_cellmath__49_1_0(4,4), inst_cellmath__49_1_0(2,0)) == sc_uint<4>("0bus1101")) & ((sc_uint<22>)(b_man(21,0))) |
        -(int)((sc_uint<3>)(inst_cellmath__49_1_0(4,4), inst_cellmath__49_1_0(2,1)) == sc_uint<3>("0bus111")) & ((sc_uint<22>)(a_man(21,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__3
    inst_cellmath__3 = 
        (inst_cellmath__41,inst_cellmath__52,inst_cellmath__53)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x
    x = 
        (sc_uint<32>)(inst_cellmath__3)
    ;

/*Clock change logic follows*/
}

// Signal declarations:

    sc_uint<32> inst_cellmath__3;
    sc_uint<1> inst_cellmath__4;
    sc_uint<1> inst_cellmath__5;
    sc_uint<1> inst_cellmath__6;
    sc_uint<1> inst_cellmath__7;
    sc_uint<1> inst_cellmath__8;
    sc_uint<1> inst_cellmath__10;
    sc_uint<1> inst_cellmath__12;
    sc_uint<1> inst_cellmath__13;
    sc_uint<1> inst_cellmath__14;
    sc_uint<1> inst_cellmath__15;
    sc_uint<1> inst_cellmath__17;
    sc_uint<1> inst_cellmath__19;
    sc_uint<1> inst_cellmath__20;
    sc_uint<1> inst_cellmath__21;
    sc_uint<1> inst_cellmath__22;
    sc_uint<1> inst_cellmath__23;
    sc_uint<48> inst_cellmath__24;
    sc_uint<48> inst_cellmath__25;
    sc_uint<1> inst_cellmath__26;
    sc_uint<1> inst_cellmath__27;
    sc_uint<1> inst_cellmath__28;
    sc_int<10> inst_cellmath__30;
    sc_int<10> inst_cellmath__31;
    sc_uint<1> inst_cellmath__32;
    sc_uint<1> inst_cellmath__34;
    sc_uint<1> inst_cellmath__38;
    sc_uint<1> inst_cellmath__41;
    sc_uint<1> inst_cellmath__42;
    sc_uint<1> inst_cellmath__44;
    sc_uint<25> inst_cellmath__45;
    sc_uint<1> inst_cellmath__46;
    sc_uint<1> inst_cellmath__47;
    sc_int<10> inst_cellmath__48;
    sc_uint<1> inst_cellmath__49;
    sc_uint<1> inst_cellmath__51;
    sc_uint<8> inst_cellmath__52;
    sc_uint<23> inst_cellmath__53;
    sc_uint<24> inst_cellmath__24__4;
    sc_uint<24> inst_cellmath__24__5;
    sc_uint<48> inst_cellmath__25__7;
    sc_uint<1> inst_cellmath__26__8;
    sc_uint<1> inst_cellmath__26__9;
    sc_uint<1> inst_cellmath__32__11;
    sc_uint<1> inst_cellmath__44__29;
    sc_uint<1> inst_cellmath__44__28;
    sc_uint<1> inst_cellmath__44__30;
    sc_uint<1> inst_cellmath__44__31;
    sc_uint<1> inst_cellmath__44__27;
    sc_uint<1> inst_cellmath__44__26;
    sc_uint<1> inst_cellmath__44__33;
    sc_uint<1> inst_cellmath__44__32;
    sc_int<9> inst_cellmath__37__40;
    sc_uint<1> inst_cellmath__37__42;
    sc_uint<1> inst_cellmath__37__43;
    sc_uint<1> inst_cellmath__51__49;
    sc_uint<1> inst_cellmath__51__48;
    sc_uint<1> inst_cellmath__50__50;
    sc_uint<3> inst_cellmath__26_0;
    sc_uint<2> inst_cellmath__5_0;
    sc_uint<3> inst_cellmath__49_0;
    sc_uint<5> inst_cellmath__49_1_0;
    sc_uint<3> inst_cellmath__49_1_1;
};
#endif // !defined float_div_cynw_cm_float_mul_ieee_E8_M23_2_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_mul_ieee - cynth invocation function


inline void float_div_cynw_cm_float_mul_ieee_E8_M23_2_0( // module float_div_cynw_cm_float_mul_ieee_E8_M23_2_0
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,const sc_uint<3>& rm // input  rm[2:0] : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{
    static class_float_div_cynw_cm_float_mul_ieee_E8_M23_2_0 target; // BDW_REPLACE_NAME
    target(
        a_sign,
        a_exp,
        a_man,
        b_sign,
        b_exp,
        b_man,
        rm,
        x    
);
}

/* CADENCE  ubP0TArdog== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




