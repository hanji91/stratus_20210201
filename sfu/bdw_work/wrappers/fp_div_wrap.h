/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FP_DIV_WRAP_INCLUDED_
#define _FP_DIV_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define fp_div_wrapper fp_div

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(fp_div)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;
	sc_out< bool > dst_valid;

	SC_CTOR(fp_div);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>

#include "cynw_cm_float_int.h"


#define fp_div_wrapper fp_div

/* Only port declarations are required for nested modules.
 */
SC_MODULE(fp_div)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;
	sc_out< bool > dst_valid;


	SC_HAS_PROCESS(fp_div);
    	fp_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fp_div")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct fp_div;
struct fp_div_cosim;
struct fp_div_cycsim;
struct fp_div_rtl;

#ifdef BDW_COWARE
#include	"fp_div_coware.h"
#endif

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(fp_div_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;
	sc_out< bool > dst_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > a_man;
    sc_signal< sc_uint< 8 > > a_exp;
    sc_signal< sc_uint< 1 > > a_sign;
    sc_signal< sc_uint< 23 > > b_man;
    sc_signal< sc_uint< 8 > > b_exp;
    sc_signal< sc_uint< 1 > > b_sign;
    sc_signal< sc_uint< 23 > > r_man;
    sc_signal< sc_uint< 8 > > r_exp;
    sc_signal< sc_uint< 1 > > r_sign;

    
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
    void thread_a_man();
    void thread_a_exp();
    void thread_a_sign();
    void thread_b_man();
    void thread_b_exp();
    void thread_b_sign();
    void thread_r();


	SC_HAS_PROCESS(fp_div_wrapper);

    	fp_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fp_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,a("a")
		  	,b("b")
		  	,r("r")
		  	,dst_valid("dst_valid")
		  	

		  ,fp_div0(0), fp_div_cosim0(0), fp_div_rtl0(0), fp_div_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~fp_div_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( fp_div_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( fp_div_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( fp_div_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( fp_div_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( fp_div_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	fp_div* behModule() { return fp_div0; }
	fp_div_cosim* cosimModule() { return fp_div_cosim0; }
	fp_div_cycsim* cycsimModule() { return fp_div_cycsim0; }
	fp_div_rtl* rtlModule() { return fp_div_rtl0; }

	fp_div* fp_div0;
	fp_div_cosim* fp_div_cosim0;
	fp_div_rtl* fp_div_rtl0;
	fp_div_cycsim* fp_div_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(fp_div_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;
	sc_out< bool > dst_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;

    
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
    void thread_a();
    void thread_b();
    void thread_r_man();
    void thread_r_exp();
    void thread_r_sign();


	SC_HAS_PROCESS(fp_div_wrapper_r);

	fp_div_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("fp_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,a_man("a_man"),
		  a_exp("a_exp"),
		  a_sign("a_sign")
		  	,b_man("b_man"),
		  b_exp("b_exp"),
		  b_sign("b_sign")
		  	,r_man("r_man"),
		  r_exp("r_exp"),
		  r_sign("r_sign")
		  	,dst_valid("dst_valid")
		  	

		  ,fp_div0(0), fp_div_cosim0(0), fp_div_rtl0(0), fp_div_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~fp_div_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( fp_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( fp_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( fp_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( fp_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( fp_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	fp_div* behModule() { return fp_div0; }
	fp_div_cosim* cosimModule() { return fp_div_cosim0; }
	fp_div_cycsim* cycsimModule() { return fp_div_cycsim0; }
	fp_div_rtl* rtlModule() { return fp_div_rtl0; }

protected:
	fp_div* fp_div0;
	fp_div_cosim* fp_div_cosim0;
	fp_div_rtl* fp_div_rtl0;
	fp_div_cycsim* fp_div_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
