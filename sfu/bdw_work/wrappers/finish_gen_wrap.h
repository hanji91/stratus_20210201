/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FINISH_GEN_WRAP_INCLUDED_
#define _FINISH_GEN_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define finish_gen_wrapper finish_gen

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(finish_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;

	SC_CTOR(finish_gen);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define finish_gen_wrapper finish_gen

/* Only port declarations are required for nested modules.
 */
SC_MODULE(finish_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;


	SC_HAS_PROCESS(finish_gen);
    	finish_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("finish_gen")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct finish_gen;
struct finish_gen_cosim;
struct finish_gen_cycsim;
struct finish_gen_rtl;

#ifdef BDW_COWARE
#include	"finish_gen_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(finish_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
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
    

	SC_HAS_PROCESS(finish_gen_wrapper);

    	finish_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("finish_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,clear("clear")
		  	,cnt_enable("cnt_enable")
		  	,total_num("total_num")
		  	,finish("finish")
		  	

		  ,finish_gen0(0), finish_gen_cosim0(0), finish_gen_rtl0(0), finish_gen_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~finish_gen_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( finish_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( finish_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( finish_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( finish_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( finish_gen_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	finish_gen* behModule() { return finish_gen0; }
	finish_gen_cosim* cosimModule() { return finish_gen_cosim0; }
	finish_gen_cycsim* cycsimModule() { return finish_gen_cycsim0; }
	finish_gen_rtl* rtlModule() { return finish_gen_rtl0; }

	finish_gen* finish_gen0;
	finish_gen_cosim* finish_gen_cosim0;
	finish_gen_rtl* finish_gen_rtl0;
	finish_gen_cycsim* finish_gen_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(finish_gen_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
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
    

	SC_HAS_PROCESS(finish_gen_wrapper_r);

	finish_gen_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("finish_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,clear("clear")
		  	,cnt_enable("cnt_enable")
		  	,total_num("total_num")
		  	,finish("finish")
		  	

		  ,finish_gen0(0), finish_gen_cosim0(0), finish_gen_rtl0(0), finish_gen_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~finish_gen_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( finish_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( finish_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( finish_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( finish_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( finish_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	finish_gen* behModule() { return finish_gen0; }
	finish_gen_cosim* cosimModule() { return finish_gen_cosim0; }
	finish_gen_cycsim* cycsimModule() { return finish_gen_cycsim0; }
	finish_gen_rtl* rtlModule() { return finish_gen_rtl0; }

protected:
	finish_gen* finish_gen0;
	finish_gen_cosim* finish_gen_cosim0;
	finish_gen_rtl* finish_gen_rtl0;
	finish_gen_cycsim* finish_gen_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
