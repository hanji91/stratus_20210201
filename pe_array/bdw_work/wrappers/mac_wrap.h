/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _MAC_WRAP_INCLUDED_
#define _MAC_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define mac_wrapper mac

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(mac)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;

	SC_CTOR(mac);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define mac_wrapper mac

/* Only port declarations are required for nested modules.
 */
SC_MODULE(mac)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;


	SC_HAS_PROCESS(mac);
    	mac_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("mac")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct mac;
struct mac_cosim;
struct mac_cycsim;
struct mac_rtl;

#ifdef BDW_COWARE
#include	"mac_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(mac_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;

    
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
    

	SC_HAS_PROCESS(mac_wrapper);

    	mac_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("mac")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,clear("clear")
		  	,src_vld("src_vld")
		  	,src_0("src_0")
		  	,src_1("src_1")
		  	,acc("acc")
		  	,src_1_1d("src_1_1d")
		  	

		  ,mac0(0), mac_cosim0(0), mac_rtl0(0), mac_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~mac_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( mac_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( mac_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( mac_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( mac_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( mac_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	mac* behModule() { return mac0; }
	mac_cosim* cosimModule() { return mac_cosim0; }
	mac_cycsim* cycsimModule() { return mac_cycsim0; }
	mac_rtl* rtlModule() { return mac_rtl0; }

	mac* mac0;
	mac_cosim* mac_cosim0;
	mac_rtl* mac_rtl0;
	mac_cycsim* mac_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(mac_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;

    
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
    

	SC_HAS_PROCESS(mac_wrapper_r);

	mac_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("mac")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,clear("clear")
		  	,src_vld("src_vld")
		  	,src_0("src_0")
		  	,src_1("src_1")
		  	,acc("acc")
		  	,src_1_1d("src_1_1d")
		  	

		  ,mac0(0), mac_cosim0(0), mac_rtl0(0), mac_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~mac_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( mac_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( mac_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( mac_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( mac_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( mac_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	mac* behModule() { return mac0; }
	mac_cosim* cosimModule() { return mac_cosim0; }
	mac_cycsim* cycsimModule() { return mac_cycsim0; }
	mac_rtl* rtlModule() { return mac_rtl0; }

protected:
	mac* mac0;
	mac_cosim* mac_cosim0;
	mac_rtl* mac_rtl0;
	mac_cycsim* mac_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
