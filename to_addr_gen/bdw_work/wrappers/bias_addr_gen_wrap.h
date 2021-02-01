/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BIAS_ADDR_GEN_WRAP_INCLUDED_
#define _BIAS_ADDR_GEN_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define bias_addr_gen_wrapper bias_addr_gen

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(bias_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;

	SC_CTOR(bias_addr_gen);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define bias_addr_gen_wrapper bias_addr_gen

/* Only port declarations are required for nested modules.
 */
SC_MODULE(bias_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;


	SC_HAS_PROCESS(bias_addr_gen);
    	bias_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_addr_gen")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct bias_addr_gen;
struct bias_addr_gen_cosim;
struct bias_addr_gen_cycsim;
struct bias_addr_gen_rtl;

#ifdef BDW_COWARE
#include	"bias_addr_gen_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(bias_addr_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;

    
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
    

	SC_HAS_PROCESS(bias_addr_gen_wrapper);

    	bias_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bias_read_base_addr("bias_read_base_addr")
		  	,bias_en("bias_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bias_addr("bias_addr")
		  	,bias_addr_valid("bias_addr_valid")
		  	

		  ,bias_addr_gen0(0), bias_addr_gen_cosim0(0), bias_addr_gen_rtl0(0), bias_addr_gen_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~bias_addr_gen_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bias_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bias_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bias_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bias_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bias_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bias_addr_gen* behModule() { return bias_addr_gen0; }
	bias_addr_gen_cosim* cosimModule() { return bias_addr_gen_cosim0; }
	bias_addr_gen_cycsim* cycsimModule() { return bias_addr_gen_cycsim0; }
	bias_addr_gen_rtl* rtlModule() { return bias_addr_gen_rtl0; }

	bias_addr_gen* bias_addr_gen0;
	bias_addr_gen_cosim* bias_addr_gen_cosim0;
	bias_addr_gen_rtl* bias_addr_gen_rtl0;
	bias_addr_gen_cycsim* bias_addr_gen_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(bias_addr_gen_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;

    
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
    

	SC_HAS_PROCESS(bias_addr_gen_wrapper_r);

	bias_addr_gen_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bias_read_base_addr("bias_read_base_addr")
		  	,bias_en("bias_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bias_addr("bias_addr")
		  	,bias_addr_valid("bias_addr_valid")
		  	

		  ,bias_addr_gen0(0), bias_addr_gen_cosim0(0), bias_addr_gen_rtl0(0), bias_addr_gen_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~bias_addr_gen_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bias_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bias_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bias_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bias_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bias_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bias_addr_gen* behModule() { return bias_addr_gen0; }
	bias_addr_gen_cosim* cosimModule() { return bias_addr_gen_cosim0; }
	bias_addr_gen_cycsim* cycsimModule() { return bias_addr_gen_cycsim0; }
	bias_addr_gen_rtl* rtlModule() { return bias_addr_gen_rtl0; }

protected:
	bias_addr_gen* bias_addr_gen0;
	bias_addr_gen_cosim* bias_addr_gen_cosim0;
	bias_addr_gen_rtl* bias_addr_gen_rtl0;
	bias_addr_gen_cycsim* bias_addr_gen_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
