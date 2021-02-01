/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FEATURE_WRITE_ADDR_GEN_WRAP_INCLUDED_
#define _FEATURE_WRITE_ADDR_GEN_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define feature_write_addr_gen_wrapper feature_write_addr_gen

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(feature_write_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;

	SC_CTOR(feature_write_addr_gen);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define feature_write_addr_gen_wrapper feature_write_addr_gen

/* Only port declarations are required for nested modules.
 */
SC_MODULE(feature_write_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;


	SC_HAS_PROCESS(feature_write_addr_gen);
    	feature_write_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("feature_write_addr_gen")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct feature_write_addr_gen;
struct feature_write_addr_gen_cosim;
struct feature_write_addr_gen_cycsim;
struct feature_write_addr_gen_rtl;

#ifdef BDW_COWARE
#include	"feature_write_addr_gen_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(feature_write_addr_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;

    
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
    

	SC_HAS_PROCESS(feature_write_addr_gen_wrapper);

    	feature_write_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("feature_write_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,start("start")
		  	,conv_type("conv_type")
		  	,stop("stop")
		  	,base_addr("base_addr")
		  	,src("src")
		  	,src_vld("src_vld")
		  	,read_address("read_address")
		  	,read_address_valid("read_address_valid")
		  	,data_in_en("data_in_en")
		  	,read_data("read_data")
		  	,address_0("address_0")
		  	,cs_0("cs_0")
		  	,we_0("we_0")
		  	,oe_0("oe_0")
		  	,data_in("data_in")
		  	,data_out("data_out")
		  	

		  ,feature_write_addr_gen0(0), feature_write_addr_gen_cosim0(0), feature_write_addr_gen_rtl0(0), feature_write_addr_gen_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~feature_write_addr_gen_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( feature_write_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( feature_write_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( feature_write_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( feature_write_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( feature_write_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	feature_write_addr_gen* behModule() { return feature_write_addr_gen0; }
	feature_write_addr_gen_cosim* cosimModule() { return feature_write_addr_gen_cosim0; }
	feature_write_addr_gen_cycsim* cycsimModule() { return feature_write_addr_gen_cycsim0; }
	feature_write_addr_gen_rtl* rtlModule() { return feature_write_addr_gen_rtl0; }

	feature_write_addr_gen* feature_write_addr_gen0;
	feature_write_addr_gen_cosim* feature_write_addr_gen_cosim0;
	feature_write_addr_gen_rtl* feature_write_addr_gen_rtl0;
	feature_write_addr_gen_cycsim* feature_write_addr_gen_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(feature_write_addr_gen_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;

    
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
    

	SC_HAS_PROCESS(feature_write_addr_gen_wrapper_r);

	feature_write_addr_gen_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("feature_write_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,start("start")
		  	,conv_type("conv_type")
		  	,stop("stop")
		  	,base_addr("base_addr")
		  	,src("src")
		  	,src_vld("src_vld")
		  	,read_address("read_address")
		  	,read_address_valid("read_address_valid")
		  	,data_in_en("data_in_en")
		  	,read_data("read_data")
		  	,address_0("address_0")
		  	,cs_0("cs_0")
		  	,we_0("we_0")
		  	,oe_0("oe_0")
		  	,data_in("data_in")
		  	,data_out("data_out")
		  	

		  ,feature_write_addr_gen0(0), feature_write_addr_gen_cosim0(0), feature_write_addr_gen_rtl0(0), feature_write_addr_gen_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~feature_write_addr_gen_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( feature_write_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( feature_write_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( feature_write_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( feature_write_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( feature_write_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	feature_write_addr_gen* behModule() { return feature_write_addr_gen0; }
	feature_write_addr_gen_cosim* cosimModule() { return feature_write_addr_gen_cosim0; }
	feature_write_addr_gen_cycsim* cycsimModule() { return feature_write_addr_gen_cycsim0; }
	feature_write_addr_gen_rtl* rtlModule() { return feature_write_addr_gen_rtl0; }

protected:
	feature_write_addr_gen* feature_write_addr_gen0;
	feature_write_addr_gen_cosim* feature_write_addr_gen_cosim0;
	feature_write_addr_gen_rtl* feature_write_addr_gen_rtl0;
	feature_write_addr_gen_cycsim* feature_write_addr_gen_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
