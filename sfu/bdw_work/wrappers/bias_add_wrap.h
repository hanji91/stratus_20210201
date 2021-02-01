/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BIAS_ADD_WRAP_INCLUDED_
#define _BIAS_ADD_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define bias_add_wrapper bias_add

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(bias_add)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src_0;
	sc_in< sc_uint< 32 > > src_1;
	sc_in< sc_uint< 32 > > src_2;
	sc_in< sc_uint< 32 > > src_3;
	sc_in< sc_uint< 32 > > src_4;
	sc_in< sc_uint< 32 > > src_5;
	sc_in< sc_uint< 32 > > src_6;
	sc_in< sc_uint< 32 > > src_7;
	sc_in< sc_biguint< 512 > > bias_data;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst_0;
	sc_out< sc_uint< 32 > > dst_1;
	sc_out< sc_uint< 32 > > dst_2;
	sc_out< sc_uint< 32 > > dst_3;
	sc_out< sc_uint< 32 > > dst_4;
	sc_out< sc_uint< 32 > > dst_5;
	sc_out< sc_uint< 32 > > dst_6;
	sc_out< sc_uint< 32 > > dst_7;

	SC_CTOR(bias_add);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define bias_add_wrapper bias_add

/* Only port declarations are required for nested modules.
 */
SC_MODULE(bias_add)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src[8];
	sc_in< sc_biguint< 512 > > bias_data;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst[8];


	SC_HAS_PROCESS(bias_add);
    	bias_add_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_add")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct bias_add;
struct bias_add_cosim;
struct bias_add_cycsim;
struct bias_add_rtl;

#ifdef BDW_COWARE
#include	"bias_add_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(bias_add_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src[8];
	sc_in< sc_biguint< 512 > > bias_data;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst[8];

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > src_0;
    sc_signal< sc_uint< 32 > > src_1;
    sc_signal< sc_uint< 32 > > src_2;
    sc_signal< sc_uint< 32 > > src_3;
    sc_signal< sc_uint< 32 > > src_4;
    sc_signal< sc_uint< 32 > > src_5;
    sc_signal< sc_uint< 32 > > src_6;
    sc_signal< sc_uint< 32 > > src_7;
    sc_signal< sc_uint< 32 > > dst_0;
    sc_signal< sc_uint< 32 > > dst_1;
    sc_signal< sc_uint< 32 > > dst_2;
    sc_signal< sc_uint< 32 > > dst_3;
    sc_signal< sc_uint< 32 > > dst_4;
    sc_signal< sc_uint< 32 > > dst_5;
    sc_signal< sc_uint< 32 > > dst_6;
    sc_signal< sc_uint< 32 > > dst_7;

    
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
    

	SC_HAS_PROCESS(bias_add_wrapper);

    	bias_add_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_add")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src()
		  	,bias_data("bias_data")
		  	,dst_valid("dst_valid")
		  	,dst()
		  	

		  ,bias_add0(0), bias_add_cosim0(0), bias_add_rtl0(0), bias_add_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~bias_add_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bias_add_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bias_add_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bias_add_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bias_add_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bias_add_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bias_add* behModule() { return bias_add0; }
	bias_add_cosim* cosimModule() { return bias_add_cosim0; }
	bias_add_cycsim* cycsimModule() { return bias_add_cycsim0; }
	bias_add_rtl* rtlModule() { return bias_add_rtl0; }

	bias_add* bias_add0;
	bias_add_cosim* bias_add_cosim0;
	bias_add_rtl* bias_add_rtl0;
	bias_add_cycsim* bias_add_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(bias_add_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src_0;
	sc_in< sc_uint< 32 > > src_1;
	sc_in< sc_uint< 32 > > src_2;
	sc_in< sc_uint< 32 > > src_3;
	sc_in< sc_uint< 32 > > src_4;
	sc_in< sc_uint< 32 > > src_5;
	sc_in< sc_uint< 32 > > src_6;
	sc_in< sc_uint< 32 > > src_7;
	sc_in< sc_biguint< 512 > > bias_data;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst_0;
	sc_out< sc_uint< 32 > > dst_1;
	sc_out< sc_uint< 32 > > dst_2;
	sc_out< sc_uint< 32 > > dst_3;
	sc_out< sc_uint< 32 > > dst_4;
	sc_out< sc_uint< 32 > > dst_5;
	sc_out< sc_uint< 32 > > dst_6;
	sc_out< sc_uint< 32 > > dst_7;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > src[8];
    sc_signal< sc_uint< 32 > > dst[8];

    
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
    void thread_src_0();
    void thread_src_1();
    void thread_src_2();
    void thread_src_3();
    void thread_src_4();
    void thread_src_5();
    void thread_src_6();
    void thread_src_7();
    void thread_dst_0();
    void thread_dst_1();
    void thread_dst_2();
    void thread_dst_3();
    void thread_dst_4();
    void thread_dst_5();
    void thread_dst_6();
    void thread_dst_7();


	SC_HAS_PROCESS(bias_add_wrapper_r);

	bias_add_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_add")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src_0("src_0"),
		  src_1("src_1"),
		  src_2("src_2"),
		  src_3("src_3"),
		  src_4("src_4"),
		  src_5("src_5"),
		  src_6("src_6"),
		  src_7("src_7")
		  	,bias_data("bias_data")
		  	,dst_valid("dst_valid")
		  	,dst_0("dst_0"),
		  dst_1("dst_1"),
		  dst_2("dst_2"),
		  dst_3("dst_3"),
		  dst_4("dst_4"),
		  dst_5("dst_5"),
		  dst_6("dst_6"),
		  dst_7("dst_7")
		  	

		  ,bias_add0(0), bias_add_cosim0(0), bias_add_rtl0(0), bias_add_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~bias_add_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( bias_add_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( bias_add_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( bias_add_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( bias_add_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( bias_add_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	bias_add* behModule() { return bias_add0; }
	bias_add_cosim* cosimModule() { return bias_add_cosim0; }
	bias_add_cycsim* cycsimModule() { return bias_add_cycsim0; }
	bias_add_rtl* rtlModule() { return bias_add_rtl0; }

protected:
	bias_add* bias_add0;
	bias_add_cosim* bias_add_cosim0;
	bias_add_rtl* bias_add_rtl0;
	bias_add_cycsim* bias_add_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
