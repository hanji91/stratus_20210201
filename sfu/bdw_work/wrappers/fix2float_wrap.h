/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FIX2FLOAT_WRAP_INCLUDED_
#define _FIX2FLOAT_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define fix2float_wrapper fix2float

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(fix2float)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

	SC_CTOR(fix2float);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define fix2float_wrapper fix2float

/* Only port declarations are required for nested modules.
 */
SC_MODULE(fix2float)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;


	SC_HAS_PROCESS(fix2float);
    	fix2float_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fix2float")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct fix2float;
struct fix2float_cosim;
struct fix2float_cycsim;
struct fix2float_rtl;

#ifdef BDW_COWARE
#include	"fix2float_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(fix2float_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

    
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
    

	SC_HAS_PROCESS(fix2float_wrapper);

    	fix2float_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fix2float")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,fraction_len("fraction_len")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,fix2float0(0), fix2float_cosim0(0), fix2float_rtl0(0), fix2float_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~fix2float_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( fix2float_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( fix2float_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( fix2float_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( fix2float_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( fix2float_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	fix2float* behModule() { return fix2float0; }
	fix2float_cosim* cosimModule() { return fix2float_cosim0; }
	fix2float_cycsim* cycsimModule() { return fix2float_cycsim0; }
	fix2float_rtl* rtlModule() { return fix2float_rtl0; }

	fix2float* fix2float0;
	fix2float_cosim* fix2float_cosim0;
	fix2float_rtl* fix2float_rtl0;
	fix2float_cycsim* fix2float_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(fix2float_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

    
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
    

	SC_HAS_PROCESS(fix2float_wrapper_r);

	fix2float_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("fix2float")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,fraction_len("fraction_len")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,fix2float0(0), fix2float_cosim0(0), fix2float_rtl0(0), fix2float_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~fix2float_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( fix2float_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( fix2float_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( fix2float_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( fix2float_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( fix2float_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	fix2float* behModule() { return fix2float0; }
	fix2float_cosim* cosimModule() { return fix2float_cosim0; }
	fix2float_cycsim* cycsimModule() { return fix2float_cycsim0; }
	fix2float_rtl* rtlModule() { return fix2float_rtl0; }

protected:
	fix2float* fix2float0;
	fix2float_cosim* fix2float_cosim0;
	fix2float_rtl* fix2float_rtl0;
	fix2float_cycsim* fix2float_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
