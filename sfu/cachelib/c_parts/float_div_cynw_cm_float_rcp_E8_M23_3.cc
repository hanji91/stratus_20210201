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
    
    Configured at: 12:05:59 KST (+0900), Tuesday 29 December 2020
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
#if !defined float_div_cynw_cm_float_rcp_E8_M23_3_INCLUDED
#define float_div_cynw_cm_float_rcp_E8_M23_3_INCLUDED

struct class_float_div_cynw_cm_float_rcp_E8_M23_3 { // BDW_REPLACE_NAME cynw_cm_float_rcp

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
    ,sc_uint<37>& x // output  x[36:0] : unsigned
)
{


// Signal initializations:

    inst_cellmath__16=0;
    inst_cellmath__17=0;
    inst_cellmath__18=0;
    inst_cellmath__22=0;
    inst_cellmath__24=0;
    inst_cellmath__25=0;
    inst_cellmath__26=0;
    inst_cellmath__28=0;
    inst_cellmath__29=0;
    inst_cellmath__30=0;
    inst_cellmath__31=0;
    inst_cellmath__32=0;
    inst_cellmath__34=0;
    inst_cellmath__36=0;
    inst_cellmath__38=0;
    inst_mult_d_cellmath__49=0;
    inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum=0;
    inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum=0;
    inst_cellmath__57=0;
    inst_cellmath__59=0;
    inst_cellmath__69=0;
    inst_cellmath__22__5=0;
    inst_cellmath__22__4=0;
    inst_cellmath__28__7=0;
    inst_cellmath__29__8=0;
    inst_cellmath__32__14=0;
    inst_mult_d_cellmath__49__17=0;
    inst_mult_d_cellmath__49__16=0;
    inst_mult_d_cellmath__49__18=0;
    inst_mult_d_cellmath__49__15=0;
    inst_mult_d_cellmath__49__22=0;
    inst_mult_d_cellmath__49__21=0;
    inst_mult_d_cellmath__49__23=0;
    inst_mult_d_cellmath__49__20=0;
    inst_mult_d_cellmath__49__27=0;
    inst_mult_d_cellmath__49__26=0;
    inst_mult_d_cellmath__49__28=0;
    inst_mult_d_cellmath__49__25=0;
    inst_mult_d_cellmath__49__32=0;
    inst_mult_d_cellmath__49__31=0;
    inst_mult_d_cellmath__49__33=0;
    inst_mult_d_cellmath__49__30=0;
    inst_mult_d_cellmath__49__37=0;
    inst_mult_d_cellmath__49__36=0;
    inst_mult_d_cellmath__49__38=0;
    inst_mult_d_cellmath__49__35=0;
    inst_mult_d_cellmath__49__42=0;
    inst_mult_d_cellmath__49__41=0;
    inst_mult_d_cellmath__49__43=0;
    inst_mult_d_cellmath__49__40=0;
    inst_mult_d_cellmath__49__47=0;
    inst_mult_d_cellmath__49__46=0;
    inst_mult_d_cellmath__49__48=0;
    inst_mult_d_cellmath__49__45=0;
    inst_mult_d_cellmath__49__52=0;
    inst_mult_d_cellmath__49__51=0;
    inst_mult_d_cellmath__49__53=0;
    inst_mult_d_cellmath__49__50=0;
    inst_mult_d_cellmath__49__57=0;
    inst_mult_d_cellmath__49__56=0;
    inst_mult_d_cellmath__49__58=0;
    inst_mult_d_cellmath__49__55=0;
    inst_mult_d_cellmath__49__62=0;
    inst_mult_d_cellmath__49__61=0;
    inst_mult_d_cellmath__49__63=0;
    inst_mult_d_cellmath__49__60=0;
    inst_mult_d_cellmath__49__67=0;
    inst_mult_d_cellmath__49__66=0;
    inst_mult_d_cellmath__49__68=0;
    inst_mult_d_cellmath__49__65=0;
    inst_mult_d_cellmath__49__72=0;
    inst_mult_d_cellmath__49__71=0;
    inst_mult_d_cellmath__49__70=0;
    inst_cellmath__59__81=0;
    inst_cellmath__32__14_0=0;
    inst_cellmath__59__81_0=0;
    inst_noninc_a_cellmath__42_0=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(32,32)
    x(32,32) = 
        (sc_uint<1>)(sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<13> inst_cellmath__17_tmp_0 = 
            -((sc_uint<13>)(a_exp))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__17 = (((sc_uint<1>)inst_cellmath__17_tmp_0.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<27> inst_cellmath__18_tmp_1 = 
            -((sc_uint<27>)(a_man))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        inst_cellmath__18 = (((sc_uint<1>)inst_cellmath__18_tmp_1.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__25
    inst_cellmath__25 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__18)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__16_tmp_2 = 
            -((sc_uint<12>)(a_exp))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__16 = (((sc_uint<1>)inst_cellmath__16_tmp_2.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__22__5
    inst_cellmath__22__5 = 
        ~(sc_uint<1>)(inst_cellmath__18)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__26_tmp_3 = 
            +((sc_uint<12>)(a_exp))
            +((sc_uint<12>)(inst_cellmath__22__5));
        inst_cellmath__26 = (((sc_uint<1>)(inst_cellmath__26_tmp_3(11,11)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__29__8
    inst_cellmath__29__8 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__16)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__26)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__29
    inst_cellmath__29 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32__14
    inst_cellmath__32__14 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__25)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__24
    inst_cellmath__24 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<14> inst_cellmath__22__4_tmp_4 = 
            -((sc_uint<14>)(a_exp))
            -((sc_uint<14>)(inst_cellmath__22__5))
            +((sc_uint<14>)(sc_uint<9>("0bus011111101")));
        inst_cellmath__22__4 = (((sc_uint<1>)(inst_cellmath__22__4_tmp_4(13,13)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__22
    inst_cellmath__22 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22__4)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__17)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__28__7
    inst_cellmath__28__7 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__22)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__28
    inst_cellmath__28 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28__7)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__32__14_0
    inst_cellmath__32__14_0 = 
        (inst_cellmath__32__14,inst_cellmath__28)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__30
    inst_cellmath__30 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__25)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<8> inst_cellmath__31_tmp_5;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__31_tmp_5
    inst_cellmath__31_tmp_5 = 
        
            -((sc_uint<8>)(inst_cellmath__22__5))
            -((sc_uint<8>)(a_exp))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__31
    inst_cellmath__31 = 
        inst_cellmath__31_tmp_5
            +((sc_uint<8>)(sc_uint<8>("0bus11111110")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__32
    inst_cellmath__32 = 
        
        -(int)((sc_uint<2>)inst_cellmath__32__14_0 == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__31)) |
        -(int)((sc_uint<1>)inst_cellmath__32__14_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__59__81
    inst_cellmath__59__81 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__18)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__28)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__29)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__59__81_0
    inst_cellmath__59__81_0 = 
        (inst_cellmath__59__81,inst_cellmath__25)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__34
    inst_cellmath__34 = 
        ~(sc_uint<1>)(a_man(15,15))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__72(0,0)
    inst_mult_d_cellmath__49__72(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(14,14))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__71(0,0)
    inst_mult_d_cellmath__49__71(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__72(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__70
    inst_mult_d_cellmath__49__70 = 
        (inst_mult_d_cellmath__49__71(0,0),sc_uint<1>(0),a_man(14,14))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__67(0,0)
    inst_mult_d_cellmath__49__67(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__66(0,0)
    inst_mult_d_cellmath__49__66(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__67(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__68
    inst_mult_d_cellmath__49__68 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(13,13))))
            &((sc_uint<1>)((sc_uint<1>)(a_man(14,14))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__65
    inst_mult_d_cellmath__49__65 = 
        (inst_mult_d_cellmath__49__66(0,0),inst_mult_d_cellmath__49__68,sc_uint<1>(0),a_man(13,13))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__62(0,0)
    inst_mult_d_cellmath__49__62(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(12,12))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__61(0,0)
    inst_mult_d_cellmath__49__61(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__62(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__63
    inst_mult_d_cellmath__49__63 = 
        
        -(int)((sc_uint<1>)a_man(12,12) == sc_uint<1>("0bus1")) & ((sc_uint<2>)(a_man(14,13)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__60
    inst_mult_d_cellmath__49__60 = 
        (inst_mult_d_cellmath__49__61(0,0),inst_mult_d_cellmath__49__63,sc_uint<1>(0),a_man(12,12))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__57(0,0)
    inst_mult_d_cellmath__49__57(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(11,11))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__56(0,0)
    inst_mult_d_cellmath__49__56(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__57(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__58
    inst_mult_d_cellmath__49__58 = 
        
        -(int)((sc_uint<1>)a_man(11,11) == sc_uint<1>("0bus1")) & ((sc_uint<3>)(a_man(14,12)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__55
    inst_mult_d_cellmath__49__55 = 
        (inst_mult_d_cellmath__49__56(0,0),inst_mult_d_cellmath__49__58,sc_uint<1>(0),a_man(11,11))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__52(0,0)
    inst_mult_d_cellmath__49__52(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(10,10))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__51(0,0)
    inst_mult_d_cellmath__49__51(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__52(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__53
    inst_mult_d_cellmath__49__53 = 
        
        -(int)((sc_uint<1>)a_man(10,10) == sc_uint<1>("0bus1")) & ((sc_uint<4>)(a_man(14,11)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__50
    inst_mult_d_cellmath__49__50 = 
        (inst_mult_d_cellmath__49__51(0,0),inst_mult_d_cellmath__49__53,sc_uint<1>(0),a_man(10,10))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__47(0,0)
    inst_mult_d_cellmath__49__47(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(9,9))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__46(0,0)
    inst_mult_d_cellmath__49__46(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__47(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__48
    inst_mult_d_cellmath__49__48 = 
        
        -(int)((sc_uint<1>)a_man(9,9) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(a_man(14,10)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__45
    inst_mult_d_cellmath__49__45 = 
        (inst_mult_d_cellmath__49__46(0,0),inst_mult_d_cellmath__49__48,sc_uint<1>(0),a_man(9,9))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__42(0,0)
    inst_mult_d_cellmath__49__42(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__41(0,0)
    inst_mult_d_cellmath__49__41(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__42(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__43
    inst_mult_d_cellmath__49__43 = 
        
        -(int)((sc_uint<1>)a_man(8,8) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(a_man(14,9)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__40
    inst_mult_d_cellmath__49__40 = 
        (inst_mult_d_cellmath__49__41(0,0),inst_mult_d_cellmath__49__43,sc_uint<1>(0),a_man(8,8))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__37(0,0)
    inst_mult_d_cellmath__49__37(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__36(0,0)
    inst_mult_d_cellmath__49__36(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__37(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__38
    inst_mult_d_cellmath__49__38 = 
        
        -(int)((sc_uint<1>)a_man(7,7) == sc_uint<1>("0bus1")) & ((sc_uint<7>)(a_man(14,8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__35
    inst_mult_d_cellmath__49__35 = 
        (inst_mult_d_cellmath__49__36(0,0),inst_mult_d_cellmath__49__38,sc_uint<1>(0),a_man(7,7))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__32(0,0)
    inst_mult_d_cellmath__49__32(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__31(0,0)
    inst_mult_d_cellmath__49__31(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__32(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__33
    inst_mult_d_cellmath__49__33 = 
        
        -(int)((sc_uint<1>)a_man(6,6) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(a_man(14,7)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__30
    inst_mult_d_cellmath__49__30 = 
        (inst_mult_d_cellmath__49__31(0,0),inst_mult_d_cellmath__49__33,sc_uint<1>(0),a_man(6,6))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__27(0,0)
    inst_mult_d_cellmath__49__27(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__26(0,0)
    inst_mult_d_cellmath__49__26(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__27(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__28
    inst_mult_d_cellmath__49__28 = 
        
        -(int)((sc_uint<1>)a_man(5,5) == sc_uint<1>("0bus1")) & ((sc_uint<9>)(a_man(14,6)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__25
    inst_mult_d_cellmath__49__25 = 
        (inst_mult_d_cellmath__49__26(0,0),inst_mult_d_cellmath__49__28,sc_uint<1>(0),a_man(5,5))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__17(0,0)
    inst_mult_d_cellmath__49__17(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__16(0,0)
    inst_mult_d_cellmath__49__16(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__17(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__18
    inst_mult_d_cellmath__49__18 = 
        
        -(int)((sc_uint<1>)a_man(3,3) == sc_uint<1>("0bus1")) & ((sc_uint<11>)(a_man(14,4)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__15
    inst_mult_d_cellmath__49__15 = 
        (inst_mult_d_cellmath__49__16(0,0),inst_mult_d_cellmath__49__18,sc_uint<1>(0),a_man(3,3))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_mult_d_cellmath__49__22(0,0)
    inst_mult_d_cellmath__49__22(0,0) = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_man(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_mult_d_cellmath__49__21(0,0)
    inst_mult_d_cellmath__49__21(0,0) = 
        ~(sc_uint<1>)(inst_mult_d_cellmath__49__22(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_mult_d_cellmath__49__23
    inst_mult_d_cellmath__49__23 = 
        
        -(int)((sc_uint<1>)a_man(4,4) == sc_uint<1>("0bus1")) & ((sc_uint<10>)(a_man(14,5)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_mult_d_cellmath__49__20
    inst_mult_d_cellmath__49__20 = 
        (inst_mult_d_cellmath__49__21(0,0),inst_mult_d_cellmath__49__23,sc_uint<1>(0),a_man(4,4))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_6;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_7;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_8;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_9;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_10;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_11;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_12;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_13;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_14;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_15;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_16;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<25> inst_mult_d_cellmath__49_tmp_17;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_17
    inst_mult_d_cellmath__49_tmp_17 = 
        
            +((sc_uint<25>)(((sc_uint<25>)((inst_cellmath__34)<<(shift_v)24))))
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__70)<<(shift_v)22))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_16
    inst_mult_d_cellmath__49_tmp_16 = 
        inst_mult_d_cellmath__49_tmp_17
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__65)<<(shift_v)20))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_15
    inst_mult_d_cellmath__49_tmp_15 = 
        inst_mult_d_cellmath__49_tmp_16
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__60)<<(shift_v)18))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_14
    inst_mult_d_cellmath__49_tmp_14 = 
        inst_mult_d_cellmath__49_tmp_15
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__55)<<(shift_v)16))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_13
    inst_mult_d_cellmath__49_tmp_13 = 
        inst_mult_d_cellmath__49_tmp_14
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__50)<<(shift_v)14))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_12
    inst_mult_d_cellmath__49_tmp_12 = 
        inst_mult_d_cellmath__49_tmp_13
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__45)<<(shift_v)12))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_11
    inst_mult_d_cellmath__49_tmp_11 = 
        inst_mult_d_cellmath__49_tmp_12
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__40)<<(shift_v)10))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_10
    inst_mult_d_cellmath__49_tmp_10 = 
        inst_mult_d_cellmath__49_tmp_11
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__35)<<(shift_v)8))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_9
    inst_mult_d_cellmath__49_tmp_9 = 
        inst_mult_d_cellmath__49_tmp_10
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__30)<<(shift_v)6))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_8
    inst_mult_d_cellmath__49_tmp_8 = 
        inst_mult_d_cellmath__49_tmp_9
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__25)<<(shift_v)4))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_7
    inst_mult_d_cellmath__49_tmp_7 = 
        inst_mult_d_cellmath__49_tmp_8
            +((sc_uint<25>)(inst_mult_d_cellmath__49__15))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49_tmp_6
    inst_mult_d_cellmath__49_tmp_6 = 
        inst_mult_d_cellmath__49_tmp_7
            +((sc_uint<25>)(((sc_uint<25>)((inst_mult_d_cellmath__49__20)<<(shift_v)2))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_mult_d_cellmath__49(24,0)
    inst_mult_d_cellmath__49(24,0) = 
        inst_mult_d_cellmath__49_tmp_6
            +((sc_uint<25>)(sc_uint<15>("0bus010000000000000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_noninc_a_cellmath__42_0
    inst_noninc_a_cellmath__42_0 = 
        
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000000")) & ((sc_uint<53>)(sc_uint<53>("0bus11111110000000011111111000000000111111100101111110100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000001")) & ((sc_uint<53>)(sc_uint<53>("0bus11111010000100011100101010000010111100100111111011100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000010")) & ((sc_uint<53>)(sc_uint<53>("0bus11110110001100010000101010000100110110110011111000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000011")) & ((sc_uint<53>)(sc_uint<53>("0bus11110010010111110110010000000110101110001111110110000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000100")) & ((sc_uint<53>)(sc_uint<53>("0bus11101110100111000111111110001000100010111101110011011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000101")) & ((sc_uint<53>)(sc_uint<53>("0bus11101010111010000000011110001010010101000011110000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000110")) & ((sc_uint<53>)(sc_uint<53>("0bus11100111010000011010101000001100000100100111101110010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0000111")) & ((sc_uint<53>)(sc_uint<53>("0bus11100011101010010001011110001101110001101111101011111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001000")) & ((sc_uint<53>)(sc_uint<53>("0bus11100000000111100000000110001111011100011101101001100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001001")) & ((sc_uint<53>)(sc_uint<53>("0bus11011100101000000001110110010001000100110101100111010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001010")) & ((sc_uint<53>)(sc_uint<53>("0bus11011001001011110010001000010010101010111111100101000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001011")) & ((sc_uint<53>)(sc_uint<53>("0bus11010101110010101100100000010100001110111101100010111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001100")) & ((sc_uint<53>)(sc_uint<53>("0bus11010010011100101100101000010101110000110001100000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001101")) & ((sc_uint<53>)(sc_uint<53>("0bus11001111001001101110010110010111010000100011011110101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001110")) & ((sc_uint<53>)(sc_uint<53>("0bus11001011111001101101100100011000101110010011011100110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0001111")) & ((sc_uint<53>)(sc_uint<53>("0bus11001000101100100110010110011010001010000111011010110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010000")) & ((sc_uint<53>)(sc_uint<53>("0bus11000101100010010100110100011011100011111111011000111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010001")) & ((sc_uint<53>)(sc_uint<53>("0bus11000010011010110101001110011100111100000011010111001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010010")) & ((sc_uint<53>)(sc_uint<53>("0bus10111111010110000011111010011110010010010011010101010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010011")) & ((sc_uint<53>)(sc_uint<53>("0bus10111100010011111101011000011111100110110101010011101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010100")) & ((sc_uint<53>)(sc_uint<53>("0bus10111001010100011110001010100000111001101001010001111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010101")) & ((sc_uint<53>)(sc_uint<53>("0bus10110110010111100010111000100010001010110001010000010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010110")) & ((sc_uint<53>)(sc_uint<53>("0bus10110011011101001000010010100011011010010101001110101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0010111")) & ((sc_uint<53>)(sc_uint<53>("0bus10110000100101001011001100100100101000010011001101001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011000")) & ((sc_uint<53>)(sc_uint<53>("0bus10101101101111101000011110100101110100101111001011101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011001")) & ((sc_uint<53>)(sc_uint<53>("0bus10101010111100011101001010100110111111101011001010001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011010")) & ((sc_uint<53>)(sc_uint<53>("0bus10101000001011100110010100101000001001001011001000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011011")) & ((sc_uint<53>)(sc_uint<53>("0bus10100101011101000001000000101001010001010001000111011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011100")) & ((sc_uint<53>)(sc_uint<53>("0bus10100010110000101010100000101010010111111111000110000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011101")) & ((sc_uint<53>)(sc_uint<53>("0bus10100000000110100000000110101011011101010111000100101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011110")) & ((sc_uint<53>)(sc_uint<53>("0bus10011101011110011111000100101100100001011011000011011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0011111")) & ((sc_uint<53>)(sc_uint<53>("0bus10011010111000100100111010101101100100001101000010001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100000")) & ((sc_uint<53>)(sc_uint<53>("0bus10011000010100101111000010101110100101101111000000111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100001")) & ((sc_uint<53>)(sc_uint<53>("0bus10010101110010111011000010101111100110000010111111101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100010")) & ((sc_uint<53>)(sc_uint<53>("0bus10010011010011000110011110110000100101001100111110100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100011")) & ((sc_uint<53>)(sc_uint<53>("0bus10010000110101001111000100110001100011001010111101011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100100")) & ((sc_uint<53>)(sc_uint<53>("0bus10001110011001010010011110110010100000000010111100010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100101")) & ((sc_uint<53>)(sc_uint<53>("0bus10001011111111001110100000110011011011110010111011001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100110")) & ((sc_uint<53>)(sc_uint<53>("0bus10001001100111000000111100110100010110011110111010001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0100111")) & ((sc_uint<53>)(sc_uint<53>("0bus10000111010000100111101110110101010000000110111001000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101000")) & ((sc_uint<53>)(sc_uint<53>("0bus10000100111100000000110000110110001000101110111000000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101001")) & ((sc_uint<53>)(sc_uint<53>("0bus10000010101001001010000000110111000000010110110111000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101010")) & ((sc_uint<53>)(sc_uint<53>("0bus10000000011000000001100000110111110110111110110110001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101011")) & ((sc_uint<53>)(sc_uint<53>("0bus01111110001000100101010100111000101100101010110101001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101100")) & ((sc_uint<53>)(sc_uint<53>("0bus01111011111010110011100100111001100001011010110100010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101101")) & ((sc_uint<53>)(sc_uint<53>("0bus01111001101110101010011010111010010101010000110011011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101110")) & ((sc_uint<53>)(sc_uint<53>("0bus01110111100100001000000100111011001000001110110010100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0101111")) & ((sc_uint<53>)(sc_uint<53>("0bus01110101011011001010110000111011111010010100110001101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110000")) & ((sc_uint<53>)(sc_uint<53>("0bus01110011010011110000110000111100101011100010110000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110001")) & ((sc_uint<53>)(sc_uint<53>("0bus01110001001101111000011010111101011011111110110000000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110010")) & ((sc_uint<53>)(sc_uint<53>("0bus01101111001001100000000100111110001011100100101111001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110011")) & ((sc_uint<53>)(sc_uint<53>("0bus01101101000110100110001000111110111010010110101110011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110100")) & ((sc_uint<53>)(sc_uint<53>("0bus01101011000101001001000010111111101000011000101101101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110101")) & ((sc_uint<53>)(sc_uint<53>("0bus01101001000101000111001111000000010101101010101100111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110110")) & ((sc_uint<53>)(sc_uint<53>("0bus01100111000110011111001101000001000010001100101100001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0110111")) & ((sc_uint<53>)(sc_uint<53>("0bus01100101001001001111100001000001101110000000101011011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111000")) & ((sc_uint<53>)(sc_uint<53>("0bus01100011001101010110101111000010011001000110101010101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111001")) & ((sc_uint<53>)(sc_uint<53>("0bus01100001010010110011011011000011000011011110101010000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111010")) & ((sc_uint<53>)(sc_uint<53>("0bus01011111011001100100001101000011101101001100101001011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111011")) & ((sc_uint<53>)(sc_uint<53>("0bus01011101100001100111110001000100010110010000101000101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111100")) & ((sc_uint<53>)(sc_uint<53>("0bus01011011101010111100110001000100111110101010101000000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111101")) & ((sc_uint<53>)(sc_uint<53>("0bus01011001110101100001111101000101100110011010100111011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111110")) & ((sc_uint<53>)(sc_uint<53>("0bus01011000000001010110000001000110001101100010100110110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus0111111")) & ((sc_uint<53>)(sc_uint<53>("0bus01010110001110010111101111000110110100000100100110001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000000")) & ((sc_uint<53>)(sc_uint<53>("0bus01010100011100100101111001000111011010000000100101101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000001")) & ((sc_uint<53>)(sc_uint<53>("0bus01010010101011111111010101000111111111010110100101000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000010")) & ((sc_uint<53>)(sc_uint<53>("0bus01010000111100100010111001001000100100000110100100011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000011")) & ((sc_uint<53>)(sc_uint<53>("0bus01001111001110001111011001001001001000010100100011111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000100")) & ((sc_uint<53>)(sc_uint<53>("0bus01001101100001000011101111001001101011111110100011011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000101")) & ((sc_uint<53>)(sc_uint<53>("0bus01001011110100111110110111001010001111000100100010110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000110")) & ((sc_uint<53>)(sc_uint<53>("0bus01001010001001111111101011001010110001101010100010010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1000111")) & ((sc_uint<53>)(sc_uint<53>("0bus01001000100000000101001001001011010011101110100001110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001000")) & ((sc_uint<53>)(sc_uint<53>("0bus01000110110111001110001101001011110101010010100001010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001001")) & ((sc_uint<53>)(sc_uint<53>("0bus01000101001111011001111001001100010110010110100000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001010")) & ((sc_uint<53>)(sc_uint<53>("0bus01000011101000100111001101001100110110111010100000010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001011")) & ((sc_uint<53>)(sc_uint<53>("0bus01000010000010110101001001001101010111000000011111110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001100")) & ((sc_uint<53>)(sc_uint<53>("0bus01000000011110000010110101001101110110100110011111011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001101")) & ((sc_uint<53>)(sc_uint<53>("0bus00111110111010001111010001001110010101110000011110111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001110")) & ((sc_uint<53>)(sc_uint<53>("0bus00111101010111011001100101001110110100011110011110011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1001111")) & ((sc_uint<53>)(sc_uint<53>("0bus00111011110101100000110111001111010010110000011110000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010000")) & ((sc_uint<53>)(sc_uint<53>("0bus00111010010100100100001111001111110000100100011101100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010001")) & ((sc_uint<53>)(sc_uint<53>("0bus00111000110100100010110101010000001101111110011101001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010010")) & ((sc_uint<53>)(sc_uint<53>("0bus00110111010101011011110101010000101010111110011100110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010011")) & ((sc_uint<53>)(sc_uint<53>("0bus00110101110111001110010111010001000111100010011100010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010100")) & ((sc_uint<53>)(sc_uint<53>("0bus00110100011001111001101011010001100011101110011011111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010101")) & ((sc_uint<53>)(sc_uint<53>("0bus00110010111101011100111011010001111111100000011011100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010110")) & ((sc_uint<53>)(sc_uint<53>("0bus00110001100001110111010111010010011010111000011011001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1010111")) & ((sc_uint<53>)(sc_uint<53>("0bus00110000000111001000001011010010110101111000011010110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011000")) & ((sc_uint<53>)(sc_uint<53>("0bus00101110101101001110101001010011010000100010011010011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011001")) & ((sc_uint<53>)(sc_uint<53>("0bus00101101010100001010000001010011101010110010011010000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011010")) & ((sc_uint<53>)(sc_uint<53>("0bus00101011111011111001100011010100000100101110011001101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011011")) & ((sc_uint<53>)(sc_uint<53>("0bus00101010100100011100100101010100011110010000011001011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011100")) & ((sc_uint<53>)(sc_uint<53>("0bus00101001001101110010010111010100110111011110011001000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011101")) & ((sc_uint<53>)(sc_uint<53>("0bus00100111110111111010001111010101010000010110011000101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011110")) & ((sc_uint<53>)(sc_uint<53>("0bus00100110100010110011011111010101101000111000011000010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1011111")) & ((sc_uint<53>)(sc_uint<53>("0bus00100101001110011101011111010110000001000110011000000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100000")) & ((sc_uint<53>)(sc_uint<53>("0bus00100011111010110111100101010110011000111110010111101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100001")) & ((sc_uint<53>)(sc_uint<53>("0bus00100010101000000001001001010110110000100010010111011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100010")) & ((sc_uint<53>)(sc_uint<53>("0bus00100001010101111001100001010111000111110010010111000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100011")) & ((sc_uint<53>)(sc_uint<53>("0bus00100000000100100000000101010111011110110000010110110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100100")) & ((sc_uint<53>)(sc_uint<53>("0bus00011110110011110100001111010111110101011000010110011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100101")) & ((sc_uint<53>)(sc_uint<53>("0bus00011101100011110101011001011000001011110000010110001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100110")) & ((sc_uint<53>)(sc_uint<53>("0bus00011100010100100010111111011000100001110100010101111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1100111")) & ((sc_uint<53>)(sc_uint<53>("0bus00011011000101111100011001011000110111100110010101101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101000")) & ((sc_uint<53>)(sc_uint<53>("0bus00011001111000000001000111011001001101000110010101010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101001")) & ((sc_uint<53>)(sc_uint<53>("0bus00011000101010110000100001011001100010010100010101000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101010")) & ((sc_uint<53>)(sc_uint<53>("0bus00010111011110001010000111011001110111010000010100110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101011")) & ((sc_uint<53>)(sc_uint<53>("0bus00010110010010001101010101011010001011111100010100100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101100")) & ((sc_uint<53>)(sc_uint<53>("0bus00010101000110111001101001011010100000010110010100010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101101")) & ((sc_uint<53>)(sc_uint<53>("0bus00010011111100001110100011011010110100100010010100000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101110")) & ((sc_uint<53>)(sc_uint<53>("0bus00010010110010001011100011011011001000011100010011110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1101111")) & ((sc_uint<53>)(sc_uint<53>("0bus00010001101000110000000111011011011100000110010011100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110000")) & ((sc_uint<53>)(sc_uint<53>("0bus00010000011111111011101111011011101111100010010011010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110001")) & ((sc_uint<53>)(sc_uint<53>("0bus00001111010111101101111111011100000010101100010011000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110010")) & ((sc_uint<53>)(sc_uint<53>("0bus00001110010000000110010101011100010101101000010010110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110011")) & ((sc_uint<53>)(sc_uint<53>("0bus00001101001001000100010101011100101000010110010010100"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110100")) & ((sc_uint<53>)(sc_uint<53>("0bus00001100000010100111100001011100111010110100010010010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110101")) & ((sc_uint<53>)(sc_uint<53>("0bus00001010111100101111011101011101001101000100010010001"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110110")) & ((sc_uint<53>)(sc_uint<53>("0bus00001001110111011011101001011101011111000110010001111"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1110111")) & ((sc_uint<53>)(sc_uint<53>("0bus00001000110010101011101101011101110000111100010001101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111000")) & ((sc_uint<53>)(sc_uint<53>("0bus00000111101110011111001011011110000010100010010001011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111001")) & ((sc_uint<53>)(sc_uint<53>("0bus00000110101010110101100111011110010011111010010001010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111010")) & ((sc_uint<53>)(sc_uint<53>("0bus00000101100111101110101001011110100101000110010001000"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111011")) & ((sc_uint<53>)(sc_uint<53>("0bus00000100100101001001110011011110110110000100010000110"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111100")) & ((sc_uint<53>)(sc_uint<53>("0bus00000011100011000110101101011111000110110110010000101"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111101")) & ((sc_uint<53>)(sc_uint<53>("0bus00000010100001100100111111011111010111011010010000011"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111110")) & ((sc_uint<53>)(sc_uint<53>("0bus00000001100000100100001101011111100111110100010000010"))) |
        -(int)((sc_uint<7>)a_man(22,16) == sc_uint<7>("0bus1111111")) & ((sc_uint<53>)(sc_uint<53>("0bus00000000100000000100000001011111111000000000010000000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0)
    inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0) = 
        
            +(/*conformal multiplier wall*/(sc_uint<22>)(inst_noninc_a_cellmath__42_0(9,0)) * (sc_uint<22>)(inst_mult_d_cellmath__49(24,13)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__38
    inst_cellmath__38 = 
        (sc_uint<1>(1),inst_noninc_a_cellmath__42_0(27,10))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__36
    inst_cellmath__36 = 
        (inst_cellmath__34,a_man(14,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)
    inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0) = 
        
            +(/*conformal multiplier wall*/(sc_uint<34>)(( ((sc_uint<18>)(sc_int<1>)(inst_cellmath__36(15,15))), inst_cellmath__36)) * (sc_uint<34>)(( ((sc_uint<15>)(sc_int<1>)(inst_cellmath__38(18,18))), inst_cellmath__38)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<40> inst_cellmath__57_tmp_18;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<40> inst_cellmath__57_tmp_19;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__57_tmp_19
    inst_cellmath__57_tmp_19 = 
        
            +((sc_uint<40>)(((sc_uint<40>)(((sc_uint<40>)(( ((sc_uint<14>)(sc_int<1>)(inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,21))), inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum(21,0))))<<(shift_v)4))))
            +((sc_uint<40>)(((sc_uint<40>)((inst_noninc_a_cellmath__42_0(52,28))<<(shift_v)15))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__57_tmp_18
    inst_cellmath__57_tmp_18 = 
        inst_cellmath__57_tmp_19
            +((sc_uint<40>)(( ((sc_uint<6>)(sc_int<1>)(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,33))), (sc_biguint<34>)(inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum(33,0)))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__57
    inst_cellmath__57 = 
        inst_cellmath__57_tmp_18
            +((sc_uint<40>)(sc_uint<18>("0bus010000000000000000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__59
    inst_cellmath__59 = 
        
        -(int)((sc_uint<2>)inst_cellmath__59__81_0 == sc_uint<2>("0bus00")) & ((sc_uint<23>)(inst_cellmath__57(39,17))) |
        -(int)((sc_uint<2>)inst_cellmath__59__81_0 == sc_uint<2>("0bus01")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__69
    inst_cellmath__69 = 
        (inst_cellmath__30,inst_cellmath__32,inst_cellmath__59)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(31,0)
    x(31,0) = 
        (sc_uint<32>)(inst_cellmath__69)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(36,33)
    x(36,33) = 
        (sc_uint<4>)(sc_uint<4>("0bus0000"))
    ;

/*Clock change logic follows*/
}

// Signal declarations:

    sc_uint<1> inst_cellmath__16;
    sc_uint<1> inst_cellmath__17;
    sc_uint<1> inst_cellmath__18;
    sc_uint<1> inst_cellmath__22;
    sc_uint<1> inst_cellmath__24;
    sc_uint<1> inst_cellmath__25;
    sc_uint<1> inst_cellmath__26;
    sc_uint<1> inst_cellmath__28;
    sc_uint<1> inst_cellmath__29;
    sc_uint<1> inst_cellmath__30;
    sc_uint<8> inst_cellmath__31;
    sc_uint<8> inst_cellmath__32;
    sc_uint<1> inst_cellmath__34;
    sc_int<16> inst_cellmath__36;
    sc_int<19> inst_cellmath__38;
    sc_int<27> inst_mult_d_cellmath__49;
    sc_int<24> inst_FP_RECIP_MULT_C_mult_c_datapath_prodSum;
    sc_int<37> inst_FP_RECIP_MULT_B_mult_b_datapath_prodSum;
    sc_uint<40> inst_cellmath__57;
    sc_uint<23> inst_cellmath__59;
    sc_uint<32> inst_cellmath__69;
    sc_uint<1> inst_cellmath__22__5;
    sc_uint<1> inst_cellmath__22__4;
    sc_uint<1> inst_cellmath__28__7;
    sc_uint<1> inst_cellmath__29__8;
    sc_uint<1> inst_cellmath__32__14;
    sc_int<2> inst_mult_d_cellmath__49__17;
    sc_int<2> inst_mult_d_cellmath__49__16;
    sc_uint<11> inst_mult_d_cellmath__49__18;
    sc_uint<14> inst_mult_d_cellmath__49__15;
    sc_int<2> inst_mult_d_cellmath__49__22;
    sc_int<2> inst_mult_d_cellmath__49__21;
    sc_uint<10> inst_mult_d_cellmath__49__23;
    sc_uint<13> inst_mult_d_cellmath__49__20;
    sc_int<2> inst_mult_d_cellmath__49__27;
    sc_int<2> inst_mult_d_cellmath__49__26;
    sc_uint<9> inst_mult_d_cellmath__49__28;
    sc_uint<12> inst_mult_d_cellmath__49__25;
    sc_int<2> inst_mult_d_cellmath__49__32;
    sc_int<2> inst_mult_d_cellmath__49__31;
    sc_uint<8> inst_mult_d_cellmath__49__33;
    sc_uint<11> inst_mult_d_cellmath__49__30;
    sc_int<2> inst_mult_d_cellmath__49__37;
    sc_int<2> inst_mult_d_cellmath__49__36;
    sc_uint<7> inst_mult_d_cellmath__49__38;
    sc_uint<10> inst_mult_d_cellmath__49__35;
    sc_int<2> inst_mult_d_cellmath__49__42;
    sc_int<2> inst_mult_d_cellmath__49__41;
    sc_uint<6> inst_mult_d_cellmath__49__43;
    sc_uint<9> inst_mult_d_cellmath__49__40;
    sc_int<2> inst_mult_d_cellmath__49__47;
    sc_int<2> inst_mult_d_cellmath__49__46;
    sc_uint<5> inst_mult_d_cellmath__49__48;
    sc_uint<8> inst_mult_d_cellmath__49__45;
    sc_int<2> inst_mult_d_cellmath__49__52;
    sc_int<2> inst_mult_d_cellmath__49__51;
    sc_uint<4> inst_mult_d_cellmath__49__53;
    sc_uint<7> inst_mult_d_cellmath__49__50;
    sc_int<2> inst_mult_d_cellmath__49__57;
    sc_int<2> inst_mult_d_cellmath__49__56;
    sc_uint<3> inst_mult_d_cellmath__49__58;
    sc_uint<6> inst_mult_d_cellmath__49__55;
    sc_int<2> inst_mult_d_cellmath__49__62;
    sc_int<2> inst_mult_d_cellmath__49__61;
    sc_uint<2> inst_mult_d_cellmath__49__63;
    sc_uint<5> inst_mult_d_cellmath__49__60;
    sc_int<2> inst_mult_d_cellmath__49__67;
    sc_int<2> inst_mult_d_cellmath__49__66;
    sc_uint<1> inst_mult_d_cellmath__49__68;
    sc_uint<4> inst_mult_d_cellmath__49__65;
    sc_int<2> inst_mult_d_cellmath__49__72;
    sc_int<2> inst_mult_d_cellmath__49__71;
    sc_uint<3> inst_mult_d_cellmath__49__70;
    sc_uint<1> inst_cellmath__59__81;
    sc_uint<2> inst_cellmath__32__14_0;
    sc_uint<2> inst_cellmath__59__81_0;
    sc_uint<53> inst_noninc_a_cellmath__42_0;
};
#endif // !defined float_div_cynw_cm_float_rcp_E8_M23_3_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_rcp - cynth invocation function


inline void float_div_cynw_cm_float_rcp_E8_M23_3( // module float_div_cynw_cm_float_rcp_E8_M23_3
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,sc_uint<37>& x // output  x[36:0] : unsigned
)
{
    static class_float_div_cynw_cm_float_rcp_E8_M23_3 target; // BDW_REPLACE_NAME
    target(
        a_sign,
        a_exp,
        a_man,
        x    
);
}

/* CADENCE  v7bzTQvfrQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




