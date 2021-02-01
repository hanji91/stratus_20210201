/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BN_FLOAT32_WRAP_INCLUDED_
#define _BN_FLOAT32_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define bn_float32_wrapper bn_float32

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(bn_float32)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > src_man_0;
	sc_in< sc_uint< 8 > > src_exp_0;
	sc_in< sc_uint< 1 > > src_sign_0;
	sc_in< sc_uint< 23 > > src_man_1;
	sc_in< sc_uint< 8 > > src_exp_1;
	sc_in< sc_uint< 1 > > src_sign_1;
	sc_in< sc_uint< 23 > > src_man_2;
	sc_in< sc_uint< 8 > > src_exp_2;
	sc_in< sc_uint< 1 > > src_sign_2;
	sc_in< sc_uint< 23 > > src_man_3;
	sc_in< sc_uint< 8 > > src_exp_3;
	sc_in< sc_uint< 1 > > src_sign_3;
	sc_in< sc_uint< 23 > > src_man_4;
	sc_in< sc_uint< 8 > > src_exp_4;
	sc_in< sc_uint< 1 > > src_sign_4;
	sc_in< sc_uint< 23 > > src_man_5;
	sc_in< sc_uint< 8 > > src_exp_5;
	sc_in< sc_uint< 1 > > src_sign_5;
	sc_in< sc_uint< 23 > > src_man_6;
	sc_in< sc_uint< 8 > > src_exp_6;
	sc_in< sc_uint< 1 > > src_sign_6;
	sc_in< sc_uint< 23 > > src_man_7;
	sc_in< sc_uint< 8 > > src_exp_7;
	sc_in< sc_uint< 1 > > src_sign_7;
	sc_in< sc_uint< 23 > > mul_coeff_man_0;
	sc_in< sc_uint< 8 > > mul_coeff_exp_0;
	sc_in< sc_uint< 1 > > mul_coeff_sign_0;
	sc_in< sc_uint< 23 > > mul_coeff_man_1;
	sc_in< sc_uint< 8 > > mul_coeff_exp_1;
	sc_in< sc_uint< 1 > > mul_coeff_sign_1;
	sc_in< sc_uint< 23 > > mul_coeff_man_2;
	sc_in< sc_uint< 8 > > mul_coeff_exp_2;
	sc_in< sc_uint< 1 > > mul_coeff_sign_2;
	sc_in< sc_uint< 23 > > mul_coeff_man_3;
	sc_in< sc_uint< 8 > > mul_coeff_exp_3;
	sc_in< sc_uint< 1 > > mul_coeff_sign_3;
	sc_in< sc_uint< 23 > > mul_coeff_man_4;
	sc_in< sc_uint< 8 > > mul_coeff_exp_4;
	sc_in< sc_uint< 1 > > mul_coeff_sign_4;
	sc_in< sc_uint< 23 > > mul_coeff_man_5;
	sc_in< sc_uint< 8 > > mul_coeff_exp_5;
	sc_in< sc_uint< 1 > > mul_coeff_sign_5;
	sc_in< sc_uint< 23 > > mul_coeff_man_6;
	sc_in< sc_uint< 8 > > mul_coeff_exp_6;
	sc_in< sc_uint< 1 > > mul_coeff_sign_6;
	sc_in< sc_uint< 23 > > mul_coeff_man_7;
	sc_in< sc_uint< 8 > > mul_coeff_exp_7;
	sc_in< sc_uint< 1 > > mul_coeff_sign_7;
	sc_in< sc_uint< 23 > > add_coeff_man_0;
	sc_in< sc_uint< 8 > > add_coeff_exp_0;
	sc_in< sc_uint< 1 > > add_coeff_sign_0;
	sc_in< sc_uint< 23 > > add_coeff_man_1;
	sc_in< sc_uint< 8 > > add_coeff_exp_1;
	sc_in< sc_uint< 1 > > add_coeff_sign_1;
	sc_in< sc_uint< 23 > > add_coeff_man_2;
	sc_in< sc_uint< 8 > > add_coeff_exp_2;
	sc_in< sc_uint< 1 > > add_coeff_sign_2;
	sc_in< sc_uint< 23 > > add_coeff_man_3;
	sc_in< sc_uint< 8 > > add_coeff_exp_3;
	sc_in< sc_uint< 1 > > add_coeff_sign_3;
	sc_in< sc_uint< 23 > > add_coeff_man_4;
	sc_in< sc_uint< 8 > > add_coeff_exp_4;
	sc_in< sc_uint< 1 > > add_coeff_sign_4;
	sc_in< sc_uint< 23 > > add_coeff_man_5;
	sc_in< sc_uint< 8 > > add_coeff_exp_5;
	sc_in< sc_uint< 1 > > add_coeff_sign_5;
	sc_in< sc_uint< 23 > > add_coeff_man_6;
	sc_in< sc_uint< 8 > > add_coeff_exp_6;
	sc_in< sc_uint< 1 > > add_coeff_sign_6;
	sc_in< sc_uint< 23 > > add_coeff_man_7;
	sc_in< sc_uint< 8 > > add_coeff_exp_7;
	sc_in< sc_uint< 1 > > add_coeff_sign_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 23 > > dst_man_0;
	sc_out< sc_uint< 8 > > dst_exp_0;
	sc_out< sc_uint< 1 > > dst_sign_0;
	sc_out< sc_uint< 23 > > dst_man_1;
	sc_out< sc_uint< 8 > > dst_exp_1;
	sc_out< sc_uint< 1 > > dst_sign_1;
	sc_out< sc_uint< 23 > > dst_man_2;
	sc_out< sc_uint< 8 > > dst_exp_2;
	sc_out< sc_uint< 1 > > dst_sign_2;
	sc_out< sc_uint< 23 > > dst_man_3;
	sc_out< sc_uint< 8 > > dst_exp_3;
	sc_out< sc_uint< 1 > > dst_sign_3;
	sc_out< sc_uint< 23 > > dst_man_4;
	sc_out< sc_uint< 8 > > dst_exp_4;
	sc_out< sc_uint< 1 > > dst_sign_4;
	sc_out< sc_uint< 23 > > dst_man_5;
	sc_out< sc_uint< 8 > > dst_exp_5;
	sc_out< sc_uint< 1 > > dst_sign_5;
	sc_out< sc_uint< 23 > > dst_man_6;
	sc_out< sc_uint< 8 > > dst_exp_6;
	sc_out< sc_uint< 1 > > dst_sign_6;
	sc_out< sc_uint< 23 > > dst_man_7;
	sc_out< sc_uint< 8 > > dst_exp_7;
	sc_out< sc_uint< 1 > > dst_sign_7;

	SC_CTOR(bn_float32);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>

#include "cynw_cm_float_int.h"


#define bn_float32_wrapper bn_float32

/* Only port declarations are required for nested modules.
 */
SC_MODULE(bn_float32)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > mul_coeff[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > add_coeff[8];
	sc_out< bool > dst_valid;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];


	SC_HAS_PROCESS(bn_float32);
    	bn_float32_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bn_float32")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct bn_float32;
struct bn_float32_cosim;
struct bn_float32_cycsim;
struct bn_float32_rtl;

#ifdef BDW_COWARE
#include	"bn_float32_coware.h"
#endif

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(bn_float32_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > mul_coeff[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > add_coeff[8];
	sc_out< bool > dst_valid;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > src_man_0;
    sc_signal< sc_uint< 8 > > src_exp_0;
    sc_signal< sc_uint< 1 > > src_sign_0;
    sc_signal< sc_uint< 23 > > src_man_1;
    sc_signal< sc_uint< 8 > > src_exp_1;
    sc_signal< sc_uint< 1 > > src_sign_1;
    sc_signal< sc_uint< 23 > > src_man_2;
    sc_signal< sc_uint< 8 > > src_exp_2;
    sc_signal< sc_uint< 1 > > src_sign_2;
    sc_signal< sc_uint< 23 > > src_man_3;
    sc_signal< sc_uint< 8 > > src_exp_3;
    sc_signal< sc_uint< 1 > > src_sign_3;
    sc_signal< sc_uint< 23 > > src_man_4;
    sc_signal< sc_uint< 8 > > src_exp_4;
    sc_signal< sc_uint< 1 > > src_sign_4;
    sc_signal< sc_uint< 23 > > src_man_5;
    sc_signal< sc_uint< 8 > > src_exp_5;
    sc_signal< sc_uint< 1 > > src_sign_5;
    sc_signal< sc_uint< 23 > > src_man_6;
    sc_signal< sc_uint< 8 > > src_exp_6;
    sc_signal< sc_uint< 1 > > src_sign_6;
    sc_signal< sc_uint< 23 > > src_man_7;
    sc_signal< sc_uint< 8 > > src_exp_7;
    sc_signal< sc_uint< 1 > > src_sign_7;
    sc_signal< sc_uint< 23 > > mul_coeff_man_0;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_0;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_0;
    sc_signal< sc_uint< 23 > > mul_coeff_man_1;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_1;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_1;
    sc_signal< sc_uint< 23 > > mul_coeff_man_2;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_2;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_2;
    sc_signal< sc_uint< 23 > > mul_coeff_man_3;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_3;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_3;
    sc_signal< sc_uint< 23 > > mul_coeff_man_4;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_4;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_4;
    sc_signal< sc_uint< 23 > > mul_coeff_man_5;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_5;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_5;
    sc_signal< sc_uint< 23 > > mul_coeff_man_6;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_6;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_6;
    sc_signal< sc_uint< 23 > > mul_coeff_man_7;
    sc_signal< sc_uint< 8 > > mul_coeff_exp_7;
    sc_signal< sc_uint< 1 > > mul_coeff_sign_7;
    sc_signal< sc_uint< 23 > > add_coeff_man_0;
    sc_signal< sc_uint< 8 > > add_coeff_exp_0;
    sc_signal< sc_uint< 1 > > add_coeff_sign_0;
    sc_signal< sc_uint< 23 > > add_coeff_man_1;
    sc_signal< sc_uint< 8 > > add_coeff_exp_1;
    sc_signal< sc_uint< 1 > > add_coeff_sign_1;
    sc_signal< sc_uint< 23 > > add_coeff_man_2;
    sc_signal< sc_uint< 8 > > add_coeff_exp_2;
    sc_signal< sc_uint< 1 > > add_coeff_sign_2;
    sc_signal< sc_uint< 23 > > add_coeff_man_3;
    sc_signal< sc_uint< 8 > > add_coeff_exp_3;
    sc_signal< sc_uint< 1 > > add_coeff_sign_3;
    sc_signal< sc_uint< 23 > > add_coeff_man_4;
    sc_signal< sc_uint< 8 > > add_coeff_exp_4;
    sc_signal< sc_uint< 1 > > add_coeff_sign_4;
    sc_signal< sc_uint< 23 > > add_coeff_man_5;
    sc_signal< sc_uint< 8 > > add_coeff_exp_5;
    sc_signal< sc_uint< 1 > > add_coeff_sign_5;
    sc_signal< sc_uint< 23 > > add_coeff_man_6;
    sc_signal< sc_uint< 8 > > add_coeff_exp_6;
    sc_signal< sc_uint< 1 > > add_coeff_sign_6;
    sc_signal< sc_uint< 23 > > add_coeff_man_7;
    sc_signal< sc_uint< 8 > > add_coeff_exp_7;
    sc_signal< sc_uint< 1 > > add_coeff_sign_7;
    sc_signal< sc_uint< 23 > > dst_man_0;
    sc_signal< sc_uint< 8 > > dst_exp_0;
    sc_signal< sc_uint< 1 > > dst_sign_0;
    sc_signal< sc_uint< 23 > > dst_man_1;
    sc_signal< sc_uint< 8 > > dst_exp_1;
    sc_signal< sc_uint< 1 > > dst_sign_1;
    sc_signal< sc_uint< 23 > > dst_man_2;
    sc_signal< sc_uint< 8 > > dst_exp_2;
    sc_signal< sc_uint< 1 > > dst_sign_2;
    sc_signal< sc_uint< 23 > > dst_man_3;
    sc_signal< sc_uint< 8 > > dst_exp_3;
    sc_signal< sc_uint< 1 > > dst_sign_3;
    sc_signal< sc_uint< 23 > > dst_man_4;
    sc_signal< sc_uint< 8 > > dst_exp_4;
    sc_signal< sc_uint< 1 > > dst_sign_4;
    sc_signal< sc_uint< 23 > > dst_man_5;
    sc_signal< sc_uint< 8 > > dst_exp_5;
    sc_signal< sc_uint< 1 > > dst_sign_5;
    sc_signal< sc_uint< 23 > > dst_man_6;
    sc_signal< sc_uint< 8 > > dst_exp_6;
    sc_signal< sc_uint< 1 > > dst_sign_6;
    sc_signal< sc_uint< 23 > > dst_man_7;
    sc_signal< sc_uint< 8 > > dst_exp_7;
    sc_signal< sc_uint< 1 > > dst_sign_7;

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };
	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_src_man_0();
    void thread_src_exp_0();
    void thread_src_sign_0();
    void thread_src_man_1();
    void thread_src_exp_1();
    void thread_src_sign_1();
    void thread_src_man_2();
    void thread_src_exp_2();
    void thread_src_sign_2();
    void thread_src_man_3();
    void thread_src_exp_3();
    void thread_src_sign_3();
    void thread_src_man_4();
    void thread_src_exp_4();
    void thread_src_sign_4();
    void thread_src_man_5();
    void thread_src_exp_5();
    void thread_src_sign_5();
    void thread_src_man_6();
    void thread_src_exp_6();
    void thread_src_sign_6();
    void thread_src_man_7();
    void thread_src_exp_7();
    void thread_src_sign_7();
    void thread_mul_coeff_man_0();
    void thread_mul_coeff_exp_0();
    void thread_mul_coeff_sign_0();
    void thread_mul_coeff_man_1();
    void thread_mul_coeff_exp_1();
    void thread_mul_coeff_sign_1();
    void thread_mul_coeff_man_2();
    void thread_mul_coeff_exp_2();
    void thread_mul_coeff_sign_2();
    void thread_mul_coeff_man_3();
    void thread_mul_coeff_exp_3();
    void thread_mul_coeff_sign_3();
    void thread_mul_coeff_man_4();
    void thread_mul_coeff_exp_4();
    void thread_mul_coeff_sign_4();
    void thread_mul_coeff_man_5();
    void thread_mul_coeff_exp_5();
    void thread_mul_coeff_sign_5();
    void thread_mul_coeff_man_6();
    void thread_mul_coeff_exp_6();
    void thread_mul_coeff_sign_6();
    void thread_mul_coeff_man_7();
    void thread_mul_coeff_exp_7();
    void thread_mul_coeff_sign_7();
    void thread_add_coeff_man_0();
    void thread_add_coeff_exp_0();
    void thread_add_coeff_sign_0();
    void thread_add_coeff_man_1();
    void thread_add_coeff_exp_1();
    void thread_add_coeff_sign_1();
    void thread_add_coeff_man_2();
    void thread_add_coeff_exp_2();
    void thread_add_coeff_sign_2();
    void thread_add_coeff_man_3();
    void thread_add_coeff_exp_3();
    void thread_add_coeff_sign_3();
    void thread_add_coeff_man_4();
    void thread_add_coeff_exp_4();
    void thread_add_coeff_sign_4();
    void thread_add_coeff_man_5();
    void thread_add_coeff_exp_5();
    void thread_add_coeff_sign_5();
    void thread_add_coeff_man_6();
    void thread_add_coeff_exp_6();
    void thread_add_coeff_sign_6();
    void thread_add_coeff_man_7();
    void thread_add_coeff_exp_7();
    void thread_add_coeff_sign_7();
    void thread_dst_0();
    void thread_dst_1();
    void thread_dst_2();
    void thread_dst_3();
    void thread_dst_4();
    void thread_dst_5();
    void thread_dst_6();
    void thread_dst_7();


	SC_HAS_PROCESS(bn_float32_wrapper);

    	bn_float32_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bn_float32")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src()
		  	,mul_coeff()
		  	,add_coeff()
		  	,dst_valid("dst_valid")
		  	,dst()
		  	

		  ,bn_float320(0), bn_float32_cosim0(0), bn_float32_rtl0(0), bn_float32_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~bn_float32_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bn_float32_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bn_float32_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bn_float32_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bn_float32_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bn_float32_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bn_float32* behModule() { return bn_float320; }
	bn_float32_cosim* cosimModule() { return bn_float32_cosim0; }
	bn_float32_cycsim* cycsimModule() { return bn_float32_cycsim0; }
	bn_float32_rtl* rtlModule() { return bn_float32_rtl0; }

	bn_float32* bn_float320;
	bn_float32_cosim* bn_float32_cosim0;
	bn_float32_rtl* bn_float32_rtl0;
	bn_float32_cycsim* bn_float32_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(bn_float32_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > src_man_0;
	sc_in< sc_uint< 8 > > src_exp_0;
	sc_in< sc_uint< 1 > > src_sign_0;
	sc_in< sc_uint< 23 > > src_man_1;
	sc_in< sc_uint< 8 > > src_exp_1;
	sc_in< sc_uint< 1 > > src_sign_1;
	sc_in< sc_uint< 23 > > src_man_2;
	sc_in< sc_uint< 8 > > src_exp_2;
	sc_in< sc_uint< 1 > > src_sign_2;
	sc_in< sc_uint< 23 > > src_man_3;
	sc_in< sc_uint< 8 > > src_exp_3;
	sc_in< sc_uint< 1 > > src_sign_3;
	sc_in< sc_uint< 23 > > src_man_4;
	sc_in< sc_uint< 8 > > src_exp_4;
	sc_in< sc_uint< 1 > > src_sign_4;
	sc_in< sc_uint< 23 > > src_man_5;
	sc_in< sc_uint< 8 > > src_exp_5;
	sc_in< sc_uint< 1 > > src_sign_5;
	sc_in< sc_uint< 23 > > src_man_6;
	sc_in< sc_uint< 8 > > src_exp_6;
	sc_in< sc_uint< 1 > > src_sign_6;
	sc_in< sc_uint< 23 > > src_man_7;
	sc_in< sc_uint< 8 > > src_exp_7;
	sc_in< sc_uint< 1 > > src_sign_7;
	sc_in< sc_uint< 23 > > mul_coeff_man_0;
	sc_in< sc_uint< 8 > > mul_coeff_exp_0;
	sc_in< sc_uint< 1 > > mul_coeff_sign_0;
	sc_in< sc_uint< 23 > > mul_coeff_man_1;
	sc_in< sc_uint< 8 > > mul_coeff_exp_1;
	sc_in< sc_uint< 1 > > mul_coeff_sign_1;
	sc_in< sc_uint< 23 > > mul_coeff_man_2;
	sc_in< sc_uint< 8 > > mul_coeff_exp_2;
	sc_in< sc_uint< 1 > > mul_coeff_sign_2;
	sc_in< sc_uint< 23 > > mul_coeff_man_3;
	sc_in< sc_uint< 8 > > mul_coeff_exp_3;
	sc_in< sc_uint< 1 > > mul_coeff_sign_3;
	sc_in< sc_uint< 23 > > mul_coeff_man_4;
	sc_in< sc_uint< 8 > > mul_coeff_exp_4;
	sc_in< sc_uint< 1 > > mul_coeff_sign_4;
	sc_in< sc_uint< 23 > > mul_coeff_man_5;
	sc_in< sc_uint< 8 > > mul_coeff_exp_5;
	sc_in< sc_uint< 1 > > mul_coeff_sign_5;
	sc_in< sc_uint< 23 > > mul_coeff_man_6;
	sc_in< sc_uint< 8 > > mul_coeff_exp_6;
	sc_in< sc_uint< 1 > > mul_coeff_sign_6;
	sc_in< sc_uint< 23 > > mul_coeff_man_7;
	sc_in< sc_uint< 8 > > mul_coeff_exp_7;
	sc_in< sc_uint< 1 > > mul_coeff_sign_7;
	sc_in< sc_uint< 23 > > add_coeff_man_0;
	sc_in< sc_uint< 8 > > add_coeff_exp_0;
	sc_in< sc_uint< 1 > > add_coeff_sign_0;
	sc_in< sc_uint< 23 > > add_coeff_man_1;
	sc_in< sc_uint< 8 > > add_coeff_exp_1;
	sc_in< sc_uint< 1 > > add_coeff_sign_1;
	sc_in< sc_uint< 23 > > add_coeff_man_2;
	sc_in< sc_uint< 8 > > add_coeff_exp_2;
	sc_in< sc_uint< 1 > > add_coeff_sign_2;
	sc_in< sc_uint< 23 > > add_coeff_man_3;
	sc_in< sc_uint< 8 > > add_coeff_exp_3;
	sc_in< sc_uint< 1 > > add_coeff_sign_3;
	sc_in< sc_uint< 23 > > add_coeff_man_4;
	sc_in< sc_uint< 8 > > add_coeff_exp_4;
	sc_in< sc_uint< 1 > > add_coeff_sign_4;
	sc_in< sc_uint< 23 > > add_coeff_man_5;
	sc_in< sc_uint< 8 > > add_coeff_exp_5;
	sc_in< sc_uint< 1 > > add_coeff_sign_5;
	sc_in< sc_uint< 23 > > add_coeff_man_6;
	sc_in< sc_uint< 8 > > add_coeff_exp_6;
	sc_in< sc_uint< 1 > > add_coeff_sign_6;
	sc_in< sc_uint< 23 > > add_coeff_man_7;
	sc_in< sc_uint< 8 > > add_coeff_exp_7;
	sc_in< sc_uint< 1 > > add_coeff_sign_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 23 > > dst_man_0;
	sc_out< sc_uint< 8 > > dst_exp_0;
	sc_out< sc_uint< 1 > > dst_sign_0;
	sc_out< sc_uint< 23 > > dst_man_1;
	sc_out< sc_uint< 8 > > dst_exp_1;
	sc_out< sc_uint< 1 > > dst_sign_1;
	sc_out< sc_uint< 23 > > dst_man_2;
	sc_out< sc_uint< 8 > > dst_exp_2;
	sc_out< sc_uint< 1 > > dst_sign_2;
	sc_out< sc_uint< 23 > > dst_man_3;
	sc_out< sc_uint< 8 > > dst_exp_3;
	sc_out< sc_uint< 1 > > dst_sign_3;
	sc_out< sc_uint< 23 > > dst_man_4;
	sc_out< sc_uint< 8 > > dst_exp_4;
	sc_out< sc_uint< 1 > > dst_sign_4;
	sc_out< sc_uint< 23 > > dst_man_5;
	sc_out< sc_uint< 8 > > dst_exp_5;
	sc_out< sc_uint< 1 > > dst_sign_5;
	sc_out< sc_uint< 23 > > dst_man_6;
	sc_out< sc_uint< 8 > > dst_exp_6;
	sc_out< sc_uint< 1 > > dst_sign_6;
	sc_out< sc_uint< 23 > > dst_man_7;
	sc_out< sc_uint< 8 > > dst_exp_7;
	sc_out< sc_uint< 1 > > dst_sign_7;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > mul_coeff[8];
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > add_coeff[8];
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };

	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_src_0();
    void thread_src_1();
    void thread_src_2();
    void thread_src_3();
    void thread_src_4();
    void thread_src_5();
    void thread_src_6();
    void thread_src_7();
    void thread_mul_coeff_0();
    void thread_mul_coeff_1();
    void thread_mul_coeff_2();
    void thread_mul_coeff_3();
    void thread_mul_coeff_4();
    void thread_mul_coeff_5();
    void thread_mul_coeff_6();
    void thread_mul_coeff_7();
    void thread_add_coeff_0();
    void thread_add_coeff_1();
    void thread_add_coeff_2();
    void thread_add_coeff_3();
    void thread_add_coeff_4();
    void thread_add_coeff_5();
    void thread_add_coeff_6();
    void thread_add_coeff_7();
    void thread_dst_man_0();
    void thread_dst_exp_0();
    void thread_dst_sign_0();
    void thread_dst_man_1();
    void thread_dst_exp_1();
    void thread_dst_sign_1();
    void thread_dst_man_2();
    void thread_dst_exp_2();
    void thread_dst_sign_2();
    void thread_dst_man_3();
    void thread_dst_exp_3();
    void thread_dst_sign_3();
    void thread_dst_man_4();
    void thread_dst_exp_4();
    void thread_dst_sign_4();
    void thread_dst_man_5();
    void thread_dst_exp_5();
    void thread_dst_sign_5();
    void thread_dst_man_6();
    void thread_dst_exp_6();
    void thread_dst_sign_6();
    void thread_dst_man_7();
    void thread_dst_exp_7();
    void thread_dst_sign_7();


	SC_HAS_PROCESS(bn_float32_wrapper_r);

	bn_float32_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("bn_float32")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src_man_0("src_man_0"),
		  src_exp_0("src_exp_0"),
		  src_sign_0("src_sign_0"),
		  src_man_1("src_man_1"),
		  src_exp_1("src_exp_1"),
		  src_sign_1("src_sign_1"),
		  src_man_2("src_man_2"),
		  src_exp_2("src_exp_2"),
		  src_sign_2("src_sign_2"),
		  src_man_3("src_man_3"),
		  src_exp_3("src_exp_3"),
		  src_sign_3("src_sign_3"),
		  src_man_4("src_man_4"),
		  src_exp_4("src_exp_4"),
		  src_sign_4("src_sign_4"),
		  src_man_5("src_man_5"),
		  src_exp_5("src_exp_5"),
		  src_sign_5("src_sign_5"),
		  src_man_6("src_man_6"),
		  src_exp_6("src_exp_6"),
		  src_sign_6("src_sign_6"),
		  src_man_7("src_man_7"),
		  src_exp_7("src_exp_7"),
		  src_sign_7("src_sign_7")
		  	,mul_coeff_man_0("mul_coeff_man_0"),
		  mul_coeff_exp_0("mul_coeff_exp_0"),
		  mul_coeff_sign_0("mul_coeff_sign_0"),
		  mul_coeff_man_1("mul_coeff_man_1"),
		  mul_coeff_exp_1("mul_coeff_exp_1"),
		  mul_coeff_sign_1("mul_coeff_sign_1"),
		  mul_coeff_man_2("mul_coeff_man_2"),
		  mul_coeff_exp_2("mul_coeff_exp_2"),
		  mul_coeff_sign_2("mul_coeff_sign_2"),
		  mul_coeff_man_3("mul_coeff_man_3"),
		  mul_coeff_exp_3("mul_coeff_exp_3"),
		  mul_coeff_sign_3("mul_coeff_sign_3"),
		  mul_coeff_man_4("mul_coeff_man_4"),
		  mul_coeff_exp_4("mul_coeff_exp_4"),
		  mul_coeff_sign_4("mul_coeff_sign_4"),
		  mul_coeff_man_5("mul_coeff_man_5"),
		  mul_coeff_exp_5("mul_coeff_exp_5"),
		  mul_coeff_sign_5("mul_coeff_sign_5"),
		  mul_coeff_man_6("mul_coeff_man_6"),
		  mul_coeff_exp_6("mul_coeff_exp_6"),
		  mul_coeff_sign_6("mul_coeff_sign_6"),
		  mul_coeff_man_7("mul_coeff_man_7"),
		  mul_coeff_exp_7("mul_coeff_exp_7"),
		  mul_coeff_sign_7("mul_coeff_sign_7")
		  	,add_coeff_man_0("add_coeff_man_0"),
		  add_coeff_exp_0("add_coeff_exp_0"),
		  add_coeff_sign_0("add_coeff_sign_0"),
		  add_coeff_man_1("add_coeff_man_1"),
		  add_coeff_exp_1("add_coeff_exp_1"),
		  add_coeff_sign_1("add_coeff_sign_1"),
		  add_coeff_man_2("add_coeff_man_2"),
		  add_coeff_exp_2("add_coeff_exp_2"),
		  add_coeff_sign_2("add_coeff_sign_2"),
		  add_coeff_man_3("add_coeff_man_3"),
		  add_coeff_exp_3("add_coeff_exp_3"),
		  add_coeff_sign_3("add_coeff_sign_3"),
		  add_coeff_man_4("add_coeff_man_4"),
		  add_coeff_exp_4("add_coeff_exp_4"),
		  add_coeff_sign_4("add_coeff_sign_4"),
		  add_coeff_man_5("add_coeff_man_5"),
		  add_coeff_exp_5("add_coeff_exp_5"),
		  add_coeff_sign_5("add_coeff_sign_5"),
		  add_coeff_man_6("add_coeff_man_6"),
		  add_coeff_exp_6("add_coeff_exp_6"),
		  add_coeff_sign_6("add_coeff_sign_6"),
		  add_coeff_man_7("add_coeff_man_7"),
		  add_coeff_exp_7("add_coeff_exp_7"),
		  add_coeff_sign_7("add_coeff_sign_7")
		  	,dst_valid("dst_valid")
		  	,dst_man_0("dst_man_0"),
		  dst_exp_0("dst_exp_0"),
		  dst_sign_0("dst_sign_0"),
		  dst_man_1("dst_man_1"),
		  dst_exp_1("dst_exp_1"),
		  dst_sign_1("dst_sign_1"),
		  dst_man_2("dst_man_2"),
		  dst_exp_2("dst_exp_2"),
		  dst_sign_2("dst_sign_2"),
		  dst_man_3("dst_man_3"),
		  dst_exp_3("dst_exp_3"),
		  dst_sign_3("dst_sign_3"),
		  dst_man_4("dst_man_4"),
		  dst_exp_4("dst_exp_4"),
		  dst_sign_4("dst_sign_4"),
		  dst_man_5("dst_man_5"),
		  dst_exp_5("dst_exp_5"),
		  dst_sign_5("dst_sign_5"),
		  dst_man_6("dst_man_6"),
		  dst_exp_6("dst_exp_6"),
		  dst_sign_6("dst_sign_6"),
		  dst_man_7("dst_man_7"),
		  dst_exp_7("dst_exp_7"),
		  dst_sign_7("dst_sign_7")
		  	

		  ,bn_float320(0), bn_float32_cosim0(0), bn_float32_rtl0(0), bn_float32_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~bn_float32_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bn_float32_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bn_float32_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bn_float32_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bn_float32_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bn_float32_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bn_float32* behModule() { return bn_float320; }
	bn_float32_cosim* cosimModule() { return bn_float32_cosim0; }
	bn_float32_cycsim* cycsimModule() { return bn_float32_cycsim0; }
	bn_float32_rtl* rtlModule() { return bn_float32_rtl0; }

protected:
	bn_float32* bn_float320;
	bn_float32_cosim* bn_float32_cosim0;
	bn_float32_rtl* bn_float32_rtl0;
	bn_float32_cycsim* bn_float32_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
