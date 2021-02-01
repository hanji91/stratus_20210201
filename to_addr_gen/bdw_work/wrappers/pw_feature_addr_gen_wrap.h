/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _PW_FEATURE_ADDR_GEN_WRAP_INCLUDED_
#define _PW_FEATURE_ADDR_GEN_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define pw_feature_addr_gen_wrapper pw_feature_addr_gen

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(pw_feature_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 16 > > filter_number;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > pw_feature_addr;
	sc_out< bool > pw_feature_addr_valid;
	sc_out< bool > pw_feature_data_valid;
	sc_out< bool > pw_cache_en;
	sc_out< sc_uint< 16 > > pw_feature_data_sel;
	sc_out< bool > pw_addr_if_start;
	sc_out< sc_uint< 8 > > systolic_sel_12d;

	SC_CTOR(pw_feature_addr_gen);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define pw_feature_addr_gen_wrapper pw_feature_addr_gen

/* Only port declarations are required for nested modules.
 */
SC_MODULE(pw_feature_addr_gen)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 16 > > filter_number;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > pw_feature_addr;
	sc_out< bool > pw_feature_addr_valid;
	sc_out< bool > pw_feature_data_valid;
	sc_out< bool > pw_cache_en;
	sc_out< sc_uint< 16 > > pw_feature_data_sel;
	sc_out< bool > pw_addr_if_start;
	sc_out< sc_uint< 8 > > systolic_sel_12d;


	SC_HAS_PROCESS(pw_feature_addr_gen);
    	pw_feature_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("pw_feature_addr_gen")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct pw_feature_addr_gen;
struct pw_feature_addr_gen_cosim;
struct pw_feature_addr_gen_cycsim;
struct pw_feature_addr_gen_rtl;

#ifdef BDW_COWARE
#include	"pw_feature_addr_gen_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(pw_feature_addr_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 16 > > filter_number;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > pw_feature_addr;
	sc_out< bool > pw_feature_addr_valid;
	sc_out< bool > pw_feature_data_valid;
	sc_out< bool > pw_cache_en;
	sc_out< sc_uint< 16 > > pw_feature_data_sel;
	sc_out< bool > pw_addr_if_start;
	sc_out< sc_uint< 8 > > systolic_sel_12d;

    
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
    

	SC_HAS_PROCESS(pw_feature_addr_gen_wrapper);

    	pw_feature_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("pw_feature_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,stop("stop")
		  	,start("start")
		  	,start_rising("start_rising")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,feature_width("feature_width")
		  	,feature_height("feature_height")
		  	,feature_channel("feature_channel")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,filter_number("filter_number")
		  	,read_feature_base_addr("read_feature_base_addr")
		  	,pw_feature_addr("pw_feature_addr")
		  	,pw_feature_addr_valid("pw_feature_addr_valid")
		  	,pw_feature_data_valid("pw_feature_data_valid")
		  	,pw_cache_en("pw_cache_en")
		  	,pw_feature_data_sel("pw_feature_data_sel")
		  	,pw_addr_if_start("pw_addr_if_start")
		  	,systolic_sel_12d("systolic_sel_12d")
		  	

		  ,pw_feature_addr_gen0(0), pw_feature_addr_gen_cosim0(0), pw_feature_addr_gen_rtl0(0), pw_feature_addr_gen_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~pw_feature_addr_gen_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( pw_feature_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( pw_feature_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( pw_feature_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( pw_feature_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( pw_feature_addr_gen_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	pw_feature_addr_gen* behModule() { return pw_feature_addr_gen0; }
	pw_feature_addr_gen_cosim* cosimModule() { return pw_feature_addr_gen_cosim0; }
	pw_feature_addr_gen_cycsim* cycsimModule() { return pw_feature_addr_gen_cycsim0; }
	pw_feature_addr_gen_rtl* rtlModule() { return pw_feature_addr_gen_rtl0; }

	pw_feature_addr_gen* pw_feature_addr_gen0;
	pw_feature_addr_gen_cosim* pw_feature_addr_gen_cosim0;
	pw_feature_addr_gen_rtl* pw_feature_addr_gen_rtl0;
	pw_feature_addr_gen_cycsim* pw_feature_addr_gen_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(pw_feature_addr_gen_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 16 > > filter_number;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > pw_feature_addr;
	sc_out< bool > pw_feature_addr_valid;
	sc_out< bool > pw_feature_data_valid;
	sc_out< bool > pw_cache_en;
	sc_out< sc_uint< 16 > > pw_feature_data_sel;
	sc_out< bool > pw_addr_if_start;
	sc_out< sc_uint< 8 > > systolic_sel_12d;

    
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
    

	SC_HAS_PROCESS(pw_feature_addr_gen_wrapper_r);

	pw_feature_addr_gen_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("pw_feature_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,stop("stop")
		  	,start("start")
		  	,start_rising("start_rising")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,feature_width("feature_width")
		  	,feature_height("feature_height")
		  	,feature_channel("feature_channel")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,filter_number("filter_number")
		  	,read_feature_base_addr("read_feature_base_addr")
		  	,pw_feature_addr("pw_feature_addr")
		  	,pw_feature_addr_valid("pw_feature_addr_valid")
		  	,pw_feature_data_valid("pw_feature_data_valid")
		  	,pw_cache_en("pw_cache_en")
		  	,pw_feature_data_sel("pw_feature_data_sel")
		  	,pw_addr_if_start("pw_addr_if_start")
		  	,systolic_sel_12d("systolic_sel_12d")
		  	

		  ,pw_feature_addr_gen0(0), pw_feature_addr_gen_cosim0(0), pw_feature_addr_gen_rtl0(0), pw_feature_addr_gen_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~pw_feature_addr_gen_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( pw_feature_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( pw_feature_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( pw_feature_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( pw_feature_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( pw_feature_addr_gen_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	pw_feature_addr_gen* behModule() { return pw_feature_addr_gen0; }
	pw_feature_addr_gen_cosim* cosimModule() { return pw_feature_addr_gen_cosim0; }
	pw_feature_addr_gen_cycsim* cycsimModule() { return pw_feature_addr_gen_cycsim0; }
	pw_feature_addr_gen_rtl* rtlModule() { return pw_feature_addr_gen_rtl0; }

protected:
	pw_feature_addr_gen* pw_feature_addr_gen0;
	pw_feature_addr_gen_cosim* pw_feature_addr_gen_cosim0;
	pw_feature_addr_gen_rtl* pw_feature_addr_gen_rtl0;
	pw_feature_addr_gen_cycsim* pw_feature_addr_gen_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
