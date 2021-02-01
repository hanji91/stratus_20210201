/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _ORG_BN_ADDR_GEN_WRAP_INCLUDED_
#define _ORG_BN_ADDR_GEN_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define org_bn_addr_gen_wrapper org_bn_addr_gen

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(org_bn_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bn_read_base_addr;
	sc_in< sc_uint< 8 > > bn_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bn_addr;
	sc_out< bool > bn_addr_valid;

	SC_CTOR(org_bn_addr_gen);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define org_bn_addr_gen_wrapper org_bn_addr_gen

/* Only port declarations are required for nested modules.
 */
SC_MODULE(org_bn_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bn_read_base_addr;
	sc_in< sc_uint< 8 > > bn_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bn_addr;
	sc_out< bool > bn_addr_valid;


	SC_HAS_PROCESS(org_bn_addr_gen);
    	org_bn_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("org_bn_addr_gen")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct org_bn_addr_gen;
struct org_bn_addr_gen_cosim;
struct org_bn_addr_gen_cycsim;
struct org_bn_addr_gen_rtl;

#ifdef BDW_COWARE
#include	"org_bn_addr_gen_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(org_bn_addr_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bn_read_base_addr;
	sc_in< sc_uint< 8 > > bn_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bn_addr;
	sc_out< bool > bn_addr_valid;

    
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
    

	SC_HAS_PROCESS(org_bn_addr_gen_wrapper);

    	org_bn_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("org_bn_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bn_read_base_addr("bn_read_base_addr")
		  	,bn_en("bn_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bn_addr("bn_addr")
		  	,bn_addr_valid("bn_addr_valid")
		  	

		  ,org_bn_addr_gen0(0), org_bn_addr_gen_cosim0(0), org_bn_addr_gen_rtl0(0), org_bn_addr_gen_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~org_bn_addr_gen_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( org_bn_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( org_bn_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( org_bn_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( org_bn_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( org_bn_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	org_bn_addr_gen* behModule() { return org_bn_addr_gen0; }
	org_bn_addr_gen_cosim* cosimModule() { return org_bn_addr_gen_cosim0; }
	org_bn_addr_gen_cycsim* cycsimModule() { return org_bn_addr_gen_cycsim0; }
	org_bn_addr_gen_rtl* rtlModule() { return org_bn_addr_gen_rtl0; }

	org_bn_addr_gen* org_bn_addr_gen0;
	org_bn_addr_gen_cosim* org_bn_addr_gen_cosim0;
	org_bn_addr_gen_rtl* org_bn_addr_gen_rtl0;
	org_bn_addr_gen_cycsim* org_bn_addr_gen_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(org_bn_addr_gen_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bn_read_base_addr;
	sc_in< sc_uint< 8 > > bn_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bn_addr;
	sc_out< bool > bn_addr_valid;

    
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
    

	SC_HAS_PROCESS(org_bn_addr_gen_wrapper_r);

	org_bn_addr_gen_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("org_bn_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bn_read_base_addr("bn_read_base_addr")
		  	,bn_en("bn_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bn_addr("bn_addr")
		  	,bn_addr_valid("bn_addr_valid")
		  	

		  ,org_bn_addr_gen0(0), org_bn_addr_gen_cosim0(0), org_bn_addr_gen_rtl0(0), org_bn_addr_gen_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~org_bn_addr_gen_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( org_bn_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( org_bn_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( org_bn_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( org_bn_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( org_bn_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	org_bn_addr_gen* behModule() { return org_bn_addr_gen0; }
	org_bn_addr_gen_cosim* cosimModule() { return org_bn_addr_gen_cosim0; }
	org_bn_addr_gen_cycsim* cycsimModule() { return org_bn_addr_gen_cycsim0; }
	org_bn_addr_gen_rtl* rtlModule() { return org_bn_addr_gen_rtl0; }

protected:
	org_bn_addr_gen* org_bn_addr_gen0;
	org_bn_addr_gen_cosim* org_bn_addr_gen_cosim0;
	org_bn_addr_gen_rtl* org_bn_addr_gen_rtl0;
	org_bn_addr_gen_cycsim* org_bn_addr_gen_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
