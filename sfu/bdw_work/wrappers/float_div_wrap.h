/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FLOAT_DIV_WRAP_INCLUDED_
#define _FLOAT_DIV_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define float_div_wrapper float_div

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(float_div)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;

	SC_CTOR(float_div);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>

#include "cynw_cm_float_int.h"


#define float_div_wrapper float_div

/* Only port declarations are required for nested modules.
 */
SC_MODULE(float_div)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;


	SC_HAS_PROCESS(float_div);
    	float_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float_div")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct float_div;
struct float_div_cosim;
struct float_div_cycsim;
struct float_div_rtl;

#ifdef BDW_COWARE
#include	"float_div_coware.h"
#endif

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(float_div_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;

    
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


	SC_HAS_PROCESS(float_div_wrapper);

    	float_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,a("a")
		  	,b("b")
		  	,r("r")
		  	

		  ,float_div0(0), float_div_cosim0(0), float_div_rtl0(0), float_div_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~float_div_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( float_div_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( float_div_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( float_div_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( float_div_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( float_div_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	float_div* behModule() { return float_div0; }
	float_div_cosim* cosimModule() { return float_div_cosim0; }
	float_div_cycsim* cycsimModule() { return float_div_cycsim0; }
	float_div_rtl* rtlModule() { return float_div_rtl0; }

	float_div* float_div0;
	float_div_cosim* float_div_cosim0;
	float_div_rtl* float_div_rtl0;
	float_div_cycsim* float_div_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(float_div_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;

    
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


	SC_HAS_PROCESS(float_div_wrapper_r);

	float_div_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("float_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,a_man("a_man"),
		  a_exp("a_exp"),
		  a_sign("a_sign")
		  	,b_man("b_man"),
		  b_exp("b_exp"),
		  b_sign("b_sign")
		  	,r_man("r_man"),
		  r_exp("r_exp"),
		  r_sign("r_sign")
		  	

		  ,float_div0(0), float_div_cosim0(0), float_div_rtl0(0), float_div_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~float_div_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( float_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( float_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( float_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( float_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( float_div_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	float_div* behModule() { return float_div0; }
	float_div_cosim* cosimModule() { return float_div_cosim0; }
	float_div_cycsim* cycsimModule() { return float_div_cycsim0; }
	float_div_rtl* rtlModule() { return float_div_rtl0; }

protected:
	float_div* float_div0;
	float_div_cosim* float_div_cosim0;
	float_div_rtl* float_div_rtl0;
	float_div_cycsim* float_div_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
