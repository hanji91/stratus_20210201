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
    
    Configured at: 22:37:42 KST (+0900), Thursday 31 December 2020
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
#if !defined fp_add_cynw_cm_float_add2_ieee_E8_M23_3_INCLUDED
#define fp_add_cynw_cm_float_add2_ieee_E8_M23_3_INCLUDED

struct class_fp_add_cynw_cm_float_add2_ieee_E8_M23_3_0 { // BDW_REPLACE_NAME cynw_cm_float_add2_ieee

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
    inst_cellmath__9=0;
    inst_cellmath__10=0;
    inst_cellmath__11=0;
    inst_cellmath__12=0;
    inst_cellmath__13=0;
    inst_cellmath__14=0;
    inst_cellmath__15=0;
    inst_cellmath__16=0;
    inst_cellmath__17=0;
    inst_cellmath__18=0;
    inst_cellmath__21=0;
    inst_cellmath__25=0;
    inst_cellmath__26=0;
    inst_cellmath__27=0;
    inst_cellmath__28=0;
    inst_cellmath__29=0;
    inst_cellmath__30=0;
    inst_cellmath__31=0;
    inst_cellmath__32=0;
    inst_cellmath__33=0;
    inst_cellmath__34=0;
    inst_cellmath__35=0;
    inst_cellmath__36=0;
    inst_cellmath__37=0;
    inst_cellmath__39=0;
    inst_cellmath__42=0;
    inst_cellmath__43=0;
    inst_cellmath__44=0;
    inst_cellmath__45=0;
    inst_cellmath__48=0;
    inst_cellmath__49=0;
    inst_cellmath__50=0;
    inst_cellmath__53=0;
    inst_cellmath__54=0;
    inst_cellmath__55=0;
    inst_cellmath__57=0;
    inst_cellmath__59=0;
    inst_cellmath__62=0;
    inst_cellmath__63=0;
    inst_cellmath__64=0;
    inst_cellmath__66=0;
    inst_cellmath__67=0;
    inst_cellmath__68=0;
    inst_cellmath__70=0;
    inst_cellmath__71=0;
    inst_cellmath__72=0;
    inst_cellmath__73=0;
    inst_cellmath__24__5=0;
    inst_cellmath__27__7=0;
    inst_cellmath__27__6=0;
    inst_cellmath__28__8=0;
    inst_cellmath__29__12=0;
    inst_cellmath__32__14=0;
    inst_cellmath__36__15=0;
    inst_cellmath__33__18=0;
    inst_cellmath__39__19=0;
    inst_cellmath__42__22=0;
    inst_cellmath__43__26=0;
    inst_cellmath__43__25=0;
    inst_cellmath__43__28=0;
    inst_cellmath__43__27=0;
    inst_cellmath__43__24=0;
    inst_cellmath__54__33=0;
    inst_cellmath__55__37=0;
    inst_cellmath__55__36=0;
    inst_cellmath__55__38=0;
    inst_cellmath__55__39=0;
    inst_cellmath__55__35=0;
    inst_cellmath__55__34=0;
    inst_cellmath__55__41=0;
    inst_cellmath__55__40=0;
    inst_cellmath__60__44=0;
    inst_cellmath__62__46=0;
    inst_cellmath__62__45=0;
    inst_cellmath__66__58=0;
    inst_cellmath__66__59=0;
    inst_cellmath__66__56=0;
    inst_cellmath__67__65=0;
    inst_cellmath__67__66=0;
    inst_cellmath__67__67=0;
    inst_cellmath__68__0=0;
    inst_cellmath__68__69=0;
    inst_cellmath__68__68=0;
    inst_cellmath__70__74=0;
    inst_cellmath__70__73=0;
    inst_cellmath__40_0=0;
    inst_cellmath__40_0_0=0;
    inst_cellmath__13_0=0;
    inst_cellmath__63_0=0;
    inst_cellmath__71_0=0;
    inst_cellmath__64__48_0=0;
    inst_cellmath__64__48_1=0;
    inst_cellmath__64__48_2=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__26(23,0)
    inst_cellmath__26(23,0) = 
        (b_man,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__21
    inst_cellmath__21 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__9
    inst_cellmath__9 = 
        
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
    // Compare anchor: inst_cellmath__10
    inst_cellmath__10 = 
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
    // Compare anchor: inst_cellmath__12
    inst_cellmath__12 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__10)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__14
    inst_cellmath__14 = 
        
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
    // Compare anchor: inst_cellmath__15
    inst_cellmath__15 = 
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
    // Compare anchor: inst_cellmath__17
    inst_cellmath__17 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__15)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__24__5
    inst_cellmath__24__5 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__13
    inst_cellmath__13 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__10)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__18
    inst_cellmath__18 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__14)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__15)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__63
    inst_cellmath__63 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24__5)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__11
    inst_cellmath__11 = 
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
    // Compare anchor: inst_cellmath__16
    inst_cellmath__16 = 
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
    // Compare anchor: inst_cellmath__67__67
    inst_cellmath__67__67 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__6_tmp_0 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<2>("0bus01")));
        inst_cellmath__6 = (((sc_uint<1>)inst_cellmath__6_tmp_0.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__63_0
    inst_cellmath__63_0 = 
        (inst_cellmath__63,inst_cellmath__67__67,inst_cellmath__6)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__27__7
    inst_cellmath__27__7 = 
        ~(sc_uint<8>)(b_exp)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__27__6
    inst_cellmath__27__6 = 
        (sc_uint<1>(1),inst_cellmath__27__7)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__28__8(8,0)
    inst_cellmath__28__8(8,0) = 
        
            +((sc_uint<9>)(a_exp))
            +((sc_uint<9>)(inst_cellmath__27__6))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<9> inst_cellmath__27_tmp_1;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__27_tmp_1
    inst_cellmath__27_tmp_1 = 
        
            +((sc_uint<9>)(a_exp))
            +((sc_uint<9>)(inst_cellmath__27__6))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__27
    inst_cellmath__27 = 
        inst_cellmath__27_tmp_1
            +((sc_uint<9>)(sc_uint<1>(1)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__28(8,8)
    inst_cellmath__28(8,8) = 
        ~(sc_uint<1>)(inst_cellmath__28__8(8,8))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<28> inst_cellmath__34_tmp_2 = 
            +((sc_uint<28>)(b_man))
            -((sc_uint<28>)(a_man))
            -((sc_uint<28>)(sc_uint<2>("0b01")));
        inst_cellmath__34 = (((sc_uint<1>)(inst_cellmath__34_tmp_2(27,27)))==((sc_uint<1>)0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32__14
    inst_cellmath__32__14 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__28(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32
    inst_cellmath__32 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__27(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__14)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__48
    inst_cellmath__48 = 
        
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(a_sign)) |
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(b_sign))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__35
    inst_cellmath__35 = 
        
        -(int)((sc_uint<1>)inst_cellmath__27(8,8) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__27(7,0))) |
        -(int)((sc_uint<1>)inst_cellmath__27(8,8) == sc_uint<1>("0bus1")) & sc_uint<8>(~(sc_uint<8>)(inst_cellmath__28__8(7,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__30_tmp_3 = 
            +((sc_uint<12>)(inst_cellmath__35))
            -((sc_uint<12>)(sc_uint<7>("0b0011010")));
        inst_cellmath__30 = (((sc_uint<1>)(inst_cellmath__30_tmp_3(11,11)))==((sc_uint<1>)0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__31
    inst_cellmath__31 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__33__18
    inst_cellmath__33__18 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__31)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__36__15
    inst_cellmath__36__15 = 
        
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus0")) & ((sc_uint<23>)(b_man)) |
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus1")) & ((sc_uint<23>)(a_man))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__36
    inst_cellmath__36 = 
        (sc_uint<1>(1),inst_cellmath__36__15,sc_uint<26>("0bus00000000000000000000000000"))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__37
    inst_cellmath__37 = 
            // !!!! amethyst/writers/SystemCbeh.cpp:4652
(sc_biguint<81>)(inst_cellmath__36) >> (shift_v)(shift_v)(((sc_uint<5>)(inst_cellmath__35(4,0))).to_int())
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__33(49,24)
    inst_cellmath__33(49,24) = 
        
        -(int)((sc_uint<1>)inst_cellmath__33__18 == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__37(49,24)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__42__22
    inst_cellmath__42__22 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37(23,23))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__42
    inst_cellmath__42 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42__22)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__31)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__44
    inst_cellmath__44 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__21)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__33(24,24))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__42)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__25(23,0)
    inst_cellmath__25(23,0) = 
        (a_man,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__40_0_0(23,0)
    inst_cellmath__40_0_0(23,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__25(23,0))) |
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus1")) & ((sc_uint<24>)(inst_cellmath__26(23,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__40_0
    inst_cellmath__40_0 = 
        (sc_uint<1>(1),inst_cellmath__40_0_0(23,1),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__39__19
    inst_cellmath__39__19 = 
        
        -(int)((sc_uint<1>)inst_cellmath__21 == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__33(49,25))) |
        -(int)((sc_uint<1>)inst_cellmath__21 == sc_uint<1>("0bus1")) & sc_uint<25>(~(sc_uint<25>)(inst_cellmath__33(49,25)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__39
    inst_cellmath__39 = 
        (inst_cellmath__21,inst_cellmath__39__19)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<26> inst_cellmath__45_tmp_4;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45_tmp_4
    inst_cellmath__45_tmp_4 = 
        
            +((sc_uint<26>)(inst_cellmath__44))
            +((sc_uint<26>)(((sc_uint<26>)((inst_cellmath__40_0(24,1))<<(shift_v)1))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45(25,0)
    inst_cellmath__45(25,0) = 
        inst_cellmath__45_tmp_4
            +((sc_uint<26>)(inst_cellmath__39))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__49
    inst_cellmath__49 = 
        
        -(int)((sc_uint<1>)inst_cellmath__45(25,25) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(sc_uint<6>("0bus000000"))) |
        -(int)((sc_uint<2>)inst_cellmath__45(25,24) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<6>("0bus000001"))) |
        -(int)((sc_uint<3>)inst_cellmath__45(25,23) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<6>("0bus000010"))) |
        -(int)((sc_uint<4>)inst_cellmath__45(25,22) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<6>("0bus000011"))) |
        -(int)((sc_uint<5>)inst_cellmath__45(25,21) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<6>("0bus000100"))) |
        -(int)((sc_uint<6>)inst_cellmath__45(25,20) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000101"))) |
        -(int)((sc_uint<7>)inst_cellmath__45(25,19) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000110"))) |
        -(int)((sc_uint<8>)inst_cellmath__45(25,18) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000111"))) |
        -(int)((sc_uint<9>)inst_cellmath__45(25,17) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001000"))) |
        -(int)((sc_uint<10>)inst_cellmath__45(25,16) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001001"))) |
        -(int)((sc_uint<11>)inst_cellmath__45(25,15) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001010"))) |
        -(int)((sc_uint<12>)inst_cellmath__45(25,14) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001011"))) |
        -(int)((sc_uint<13>)inst_cellmath__45(25,13) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001100"))) |
        -(int)((sc_uint<14>)inst_cellmath__45(25,12) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001101"))) |
        -(int)((sc_uint<15>)inst_cellmath__45(25,11) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001110"))) |
        -(int)((sc_uint<16>)inst_cellmath__45(25,10) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001111"))) |
        -(int)((sc_uint<17>)inst_cellmath__45(25,9) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010000"))) |
        -(int)((sc_uint<18>)inst_cellmath__45(25,8) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010001"))) |
        -(int)((sc_uint<19>)inst_cellmath__45(25,7) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010010"))) |
        -(int)((sc_uint<20>)inst_cellmath__45(25,6) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010011"))) |
        -(int)((sc_uint<21>)inst_cellmath__45(25,5) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010100"))) |
        -(int)((sc_uint<22>)inst_cellmath__45(25,4) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010101"))) |
        -(int)((sc_uint<23>)inst_cellmath__45(25,3) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010110"))) |
        -(int)((sc_uint<24>)inst_cellmath__45(25,2) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010111"))) |
        -(int)((sc_uint<25>)inst_cellmath__45(25,1) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011000"))) |
        -(int)((sc_uint<26>)inst_cellmath__45(25,0) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011001"))) |
        -(int)((sc_uint<26>)inst_cellmath__45(25,0) == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__67__66
    inst_cellmath__67__66 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__49(5,5))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__67__65
    inst_cellmath__67__65 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49(5,5))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__66__59
    inst_cellmath__66__59 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            &((sc_uint<1>)((sc_uint<1>)(b_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__66__58
    inst_cellmath__66__58 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            |((sc_uint<1>)((sc_uint<1>)(b_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__66__56
    inst_cellmath__66__56 = 
        
        -(int)((sc_uint<1>)inst_cellmath__6 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__66__59)) |
        -(int)((sc_uint<1>)inst_cellmath__6 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__66__58))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__66
    inst_cellmath__66 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__66__56)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__11)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__13_0
    inst_cellmath__13_0 = 
        (inst_cellmath__13,inst_cellmath__18)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__64__48_1
    inst_cellmath__64__48_1 = 
        (b_man(21,0),b_sign)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__64__48_2
    inst_cellmath__64__48_2 = 
        (a_man(21,0),a_sign)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__64__48_0
    inst_cellmath__64__48_0 = 
        
        -(int)((sc_uint<2>)inst_cellmath__13_0 == sc_uint<2>("0bus01")) & ((sc_uint<23>)(inst_cellmath__64__48_1)) |
        -(int)((sc_uint<1>)inst_cellmath__13_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__64__48_2)) |
        -(int)((sc_uint<2>)inst_cellmath__13_0 == sc_uint<2>("0bus00")) & ((sc_uint<23>)(sc_uint<23>("0bus00000000000000000000001")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__67
    inst_cellmath__67 = 
        
        -(int)((sc_uint<3>)inst_cellmath__63_0 == sc_uint<3>("0bus000")) & ((sc_uint<1>)(inst_cellmath__67__66)) |
        -(int)((sc_uint<3>)inst_cellmath__63_0 == sc_uint<3>("0bus001")) & ((sc_uint<1>)(inst_cellmath__67__65)) |
        -(int)((sc_uint<2>)inst_cellmath__63_0(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<1>)(inst_cellmath__66)) |
        -(int)((sc_uint<1>)inst_cellmath__63_0(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__64__48_0(0,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__50
    inst_cellmath__50 = 
         ((shift_v)(((sc_uint<5>)(inst_cellmath__49(4,0))).to_int()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(inst_cellmath__45(25,0)) << (shift_v)(((sc_uint<5>)(inst_cellmath__49(4,0))).to_int())))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__26
    inst_cellmath__43__26 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33(24,24))))
            ^((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__25
    inst_cellmath__43__25 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__30)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__26)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__28
    inst_cellmath__43__28 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__27
    inst_cellmath__43__27 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__28)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__24
    inst_cellmath__43__24 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__25)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__27)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__43
    inst_cellmath__43 = 
        
        -(int)((sc_uint<1>)inst_cellmath__21 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__33(24,24))) |
        -(int)((sc_uint<1>)inst_cellmath__21 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__43__24))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__53
    inst_cellmath__53 = 
        
        -(int)((sc_uint<1>)inst_cellmath__49(1,1) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__50(1,1))) |
        -(int)((sc_uint<1>)inst_cellmath__49(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__43))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<6> inst_cellmath__5_tmp_5 = 
            -((sc_uint<6>)(rm));
        inst_cellmath__5 = (((sc_uint<1>)inst_cellmath__5_tmp_5.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__39
    inst_cellmath__55__39 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__5)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__48)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__38
    inst_cellmath__55__38 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__6)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__8_tmp_6 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<3>("0bus011")));
        inst_cellmath__8 = (((sc_uint<1>)inst_cellmath__8_tmp_6.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__4_tmp_7 = 
            -((sc_uint<7>)(rm))
            -((sc_uint<7>)(sc_uint<2>("0b01")));
        inst_cellmath__4 = (((sc_uint<1>)inst_cellmath__4_tmp_7.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__54__33
    inst_cellmath__54__33 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__42)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__54
    inst_cellmath__54 = 
        
        -(int)((sc_uint<1>)inst_cellmath__49(1,1) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__54__33)) |
        -(int)((sc_uint<1>)inst_cellmath__49(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__42))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__37
    inst_cellmath__55__37 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__54)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50(2,2))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__36
    inst_cellmath__55__36 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__37)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__35
    inst_cellmath__55__35 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__36)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__34
    inst_cellmath__55__34 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__53)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__35)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__41
    inst_cellmath__55__41 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__40
    inst_cellmath__55__40 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__54)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__41)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55
    inst_cellmath__55 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__34)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__40)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__57
    inst_cellmath__57 = 
        
            +((sc_uint<24>)(inst_cellmath__50(24,2)))
            +((sc_uint<24>)(inst_cellmath__55))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__62__46
    inst_cellmath__62__46 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__57(23,23))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__62__45
    inst_cellmath__62__45 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62__46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__29__12
    inst_cellmath__29__12 = 
        ~(sc_uint<1>)(inst_cellmath__28(8,8))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__29
    inst_cellmath__29 = 
        
        -(int)((sc_uint<1>)inst_cellmath__29__12 == sc_uint<1>("0bus0")) & ((sc_uint<8>)(a_exp)) |
        -(int)((sc_uint<1>)inst_cellmath__29__12 == sc_uint<1>("0bus1")) & ((sc_uint<8>)(b_exp))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__62
    inst_cellmath__62 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62__45)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__29(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__59_tmp_8;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__59_tmp_9;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__59_tmp_9
    inst_cellmath__59_tmp_9 = 
        
            +((sc_uint<10>)(inst_cellmath__57(23,23)))
            -((sc_uint<10>)(inst_cellmath__49(4,0)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__59_tmp_8
    inst_cellmath__59_tmp_8 = 
        inst_cellmath__59_tmp_9
            +((sc_uint<10>)(inst_cellmath__29))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__59
    inst_cellmath__59 = 
        inst_cellmath__59_tmp_8
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__60__44
    inst_cellmath__60__44 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__59(8,8))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__71
    inst_cellmath__71 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__67)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49(5,5))))
            |((sc_uint<1>)((sc_uint<1>)((inst_cellmath__59(9,9)))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__60__44)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__68__69
    inst_cellmath__68__69 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__38)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__55__39)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__4)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__68__68
    inst_cellmath__68__68 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68__69)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__68(0,0)
    inst_cellmath__68(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68__68)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__68__0
    inst_cellmath__68__0 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__63)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__12)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__68(7,1)
    inst_cellmath__68(7,1) = 
        (sc_uint<7>)(((sc_uint<7>)(sc_int<1>)inst_cellmath__68__0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__72
    inst_cellmath__72 = 
        
        -(int)((sc_uint<1>)inst_cellmath__71 == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__59(7,0))) |
        -(int)((sc_uint<1>)inst_cellmath__71 == sc_uint<1>("0bus1")) & ((sc_uint<8>)(inst_cellmath__68))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__71_0
    inst_cellmath__71_0 = 
        (inst_cellmath__71,inst_cellmath__63)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<7> inst_cellmath__7_tmp_10 = 
            -((sc_uint<7>)(rm))
            +((sc_uint<7>)(sc_uint<3>("0bus010")));
        inst_cellmath__7 = (((sc_uint<1>)inst_cellmath__7_tmp_10.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__70__74
    inst_cellmath__70__74 = 
        
        -(int)((sc_uint<1>)inst_cellmath__5 == sc_uint<1>("0bus0")) & sc_uint<1>(~(sc_uint<1>)(inst_cellmath__48)) |
        -(int)((sc_uint<1>)inst_cellmath__5 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__48))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__70__73
    inst_cellmath__70__73 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__7)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70__74)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__70
    inst_cellmath__70 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__62)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70__73)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__4)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__64
    inst_cellmath__64 = 
        (sc_uint<1>(1),inst_cellmath__64__48_0(22,1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__73
    inst_cellmath__73 = 
        
        -(int)((sc_uint<1>)inst_cellmath__71_0(1,1) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__57(22,0))) |
        -(int)((sc_uint<2>)inst_cellmath__71_0 == sc_uint<2>("0bus10")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)inst_cellmath__70))) |
        -(int)((sc_uint<2>)inst_cellmath__71_0 == sc_uint<2>("0bus11")) & ((sc_uint<23>)(inst_cellmath__64))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__3
    inst_cellmath__3 = 
        (inst_cellmath__67,inst_cellmath__72,inst_cellmath__73)
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
    sc_uint<1> inst_cellmath__9;
    sc_uint<1> inst_cellmath__10;
    sc_uint<1> inst_cellmath__11;
    sc_uint<1> inst_cellmath__12;
    sc_uint<1> inst_cellmath__13;
    sc_uint<1> inst_cellmath__14;
    sc_uint<1> inst_cellmath__15;
    sc_uint<1> inst_cellmath__16;
    sc_uint<1> inst_cellmath__17;
    sc_uint<1> inst_cellmath__18;
    sc_uint<1> inst_cellmath__21;
    sc_uint<25> inst_cellmath__25;
    sc_uint<25> inst_cellmath__26;
    sc_uint<9> inst_cellmath__27;
    sc_uint<9> inst_cellmath__28;
    sc_uint<8> inst_cellmath__29;
    sc_uint<1> inst_cellmath__30;
    sc_uint<1> inst_cellmath__31;
    sc_uint<1> inst_cellmath__32;
    sc_uint<50> inst_cellmath__33;
    sc_uint<1> inst_cellmath__34;
    sc_uint<8> inst_cellmath__35;
    sc_uint<50> inst_cellmath__36;
    sc_uint<50> inst_cellmath__37;
    sc_int<26> inst_cellmath__39;
    sc_uint<1> inst_cellmath__42;
    sc_uint<1> inst_cellmath__43;
    sc_uint<1> inst_cellmath__44;
    sc_uint<27> inst_cellmath__45;
    sc_uint<1> inst_cellmath__48;
    sc_uint<6> inst_cellmath__49;
    sc_uint<25> inst_cellmath__50;
    sc_uint<1> inst_cellmath__53;
    sc_uint<1> inst_cellmath__54;
    sc_uint<1> inst_cellmath__55;
    sc_uint<24> inst_cellmath__57;
    sc_int<10> inst_cellmath__59;
    sc_uint<1> inst_cellmath__62;
    sc_uint<1> inst_cellmath__63;
    sc_uint<23> inst_cellmath__64;
    sc_uint<1> inst_cellmath__66;
    sc_uint<1> inst_cellmath__67;
    sc_uint<8> inst_cellmath__68;
    sc_uint<1> inst_cellmath__70;
    sc_uint<1> inst_cellmath__71;
    sc_uint<8> inst_cellmath__72;
    sc_uint<23> inst_cellmath__73;
    sc_uint<1> inst_cellmath__24__5;
    sc_uint<8> inst_cellmath__27__7;
    sc_uint<9> inst_cellmath__27__6;
    sc_uint<10> inst_cellmath__28__8;
    sc_uint<1> inst_cellmath__29__12;
    sc_uint<1> inst_cellmath__32__14;
    sc_uint<23> inst_cellmath__36__15;
    sc_uint<1> inst_cellmath__33__18;
    sc_uint<25> inst_cellmath__39__19;
    sc_uint<1> inst_cellmath__42__22;
    sc_uint<1> inst_cellmath__43__26;
    sc_uint<1> inst_cellmath__43__25;
    sc_uint<1> inst_cellmath__43__28;
    sc_uint<1> inst_cellmath__43__27;
    sc_uint<1> inst_cellmath__43__24;
    sc_uint<1> inst_cellmath__54__33;
    sc_uint<1> inst_cellmath__55__37;
    sc_uint<1> inst_cellmath__55__36;
    sc_uint<1> inst_cellmath__55__38;
    sc_uint<1> inst_cellmath__55__39;
    sc_uint<1> inst_cellmath__55__35;
    sc_uint<1> inst_cellmath__55__34;
    sc_uint<1> inst_cellmath__55__41;
    sc_uint<1> inst_cellmath__55__40;
    sc_uint<1> inst_cellmath__60__44;
    sc_uint<1> inst_cellmath__62__46;
    sc_uint<1> inst_cellmath__62__45;
    sc_uint<1> inst_cellmath__66__58;
    sc_uint<1> inst_cellmath__66__59;
    sc_uint<1> inst_cellmath__66__56;
    sc_uint<1> inst_cellmath__67__65;
    sc_uint<1> inst_cellmath__67__66;
    sc_uint<1> inst_cellmath__67__67;
    sc_uint<1> inst_cellmath__68__0;
    sc_uint<1> inst_cellmath__68__69;
    sc_uint<1> inst_cellmath__68__68;
    sc_uint<1> inst_cellmath__70__74;
    sc_uint<1> inst_cellmath__70__73;
    sc_uint<25> inst_cellmath__40_0;
    sc_uint<25> inst_cellmath__40_0_0;
    sc_uint<2> inst_cellmath__13_0;
    sc_uint<3> inst_cellmath__63_0;
    sc_uint<2> inst_cellmath__71_0;
    sc_uint<23> inst_cellmath__64__48_0;
    sc_uint<23> inst_cellmath__64__48_1;
    sc_uint<23> inst_cellmath__64__48_2;
};
#endif // !defined fp_add_cynw_cm_float_add2_ieee_E8_M23_3_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_add2_ieee - cynth invocation function


inline void fp_add_cynw_cm_float_add2_ieee_E8_M23_3_0( // module fp_add_cynw_cm_float_add2_ieee_E8_M23_3_0
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
    static class_fp_add_cynw_cm_float_add2_ieee_E8_M23_3_0 target; // BDW_REPLACE_NAME
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

/* CADENCE  uLb1SgrdqA== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




