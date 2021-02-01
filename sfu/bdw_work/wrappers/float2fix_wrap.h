/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FLOAT2FIX_WRAP_INCLUDED_
#define _FLOAT2FIX_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define float2fix_wrapper float2fix

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(float2fix)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

	SC_CTOR(float2fix);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define float2fix_wrapper float2fix

/* Only port declarations are required for nested modules.
 */
SC_MODULE(float2fix)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;


	SC_HAS_PROCESS(float2fix);
    	float2fix_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float2fix")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct float2fix;
struct float2fix_cosim;
struct float2fix_cycsim;
struct float2fix_rtl;

#ifdef BDW_COWARE
#include	"float2fix_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(float2fix_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
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
    

	SC_HAS_PROCESS(float2fix_wrapper);

    	float2fix_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float2fix")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,float2fix0(0), float2fix_cosim0(0), float2fix_rtl0(0), float2fix_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~float2fix_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( float2fix_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( float2fix_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( float2fix_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( float2fix_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( float2fix_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	float2fix* behModule() { return float2fix0; }
	float2fix_cosim* cosimModule() { return float2fix_cosim0; }
	float2fix_cycsim* cycsimModule() { return float2fix_cycsim0; }
	float2fix_rtl* rtlModule() { return float2fix_rtl0; }

	float2fix* float2fix0;
	float2fix_cosim* float2fix_cosim0;
	float2fix_rtl* float2fix_rtl0;
	float2fix_cycsim* float2fix_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(float2fix_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
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
    

	SC_HAS_PROCESS(float2fix_wrapper_r);

	float2fix_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("float2fix")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,float2fix0(0), float2fix_cosim0(0), float2fix_rtl0(0), float2fix_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~float2fix_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( float2fix_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( float2fix_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( float2fix_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( float2fix_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( float2fix_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	float2fix* behModule() { return float2fix0; }
	float2fix_cosim* cosimModule() { return float2fix_cosim0; }
	float2fix_cycsim* cycsimModule() { return float2fix_cycsim0; }
	float2fix_rtl* rtlModule() { return float2fix_rtl0; }

protected:
	float2fix* float2fix0;
	float2fix_cosim* float2fix_cosim0;
	float2fix_rtl* float2fix_rtl0;
	float2fix_cycsim* float2fix_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
