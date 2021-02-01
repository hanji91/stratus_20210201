/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _LINEAR_DEQUANT_WRAP_INCLUDED_
#define _LINEAR_DEQUANT_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define linear_dequant_wrapper linear_dequant

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(linear_dequant)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > src_man_0;
	sc_in< sc_uint< 8 > > src_exp_0;
	sc_in< sc_uint< 1 > > src_sign_0;
	sc_in< sc_uint< 23 > > src_man_1;
	sc_in< sc_uint< 8 > > src_exp_1;
	sc_in< sc_uint< 1 > > src_sign_1;
	sc_in< sc_uint< 23 > > src_man_2;
	sc_in< sc_uint< 8 > > src_exp_2;
	sc_in< sc_uint< 1 > > src_sign_2;
	sc_in< sc_uint< 23 > > src_man_3;
	sc_in< sc_uint< 8 > > src_exp_3;
	sc_in< sc_uint< 1 > > src_sign_3;
	sc_in< sc_uint< 23 > > src_man_4;
	sc_in< sc_uint< 8 > > src_exp_4;
	sc_in< sc_uint< 1 > > src_sign_4;
	sc_in< sc_uint< 23 > > src_man_5;
	sc_in< sc_uint< 8 > > src_exp_5;
	sc_in< sc_uint< 1 > > src_sign_5;
	sc_in< sc_uint< 23 > > src_man_6;
	sc_in< sc_uint< 8 > > src_exp_6;
	sc_in< sc_uint< 1 > > src_sign_6;
	sc_in< sc_uint< 23 > > src_man_7;
	sc_in< sc_uint< 8 > > src_exp_7;
	sc_in< sc_uint< 1 > > src_sign_7;
	sc_in< sc_uint< 23 > > divisor_man;
	sc_in< sc_uint< 8 > > divisor_exp;
	sc_in< sc_uint< 1 > > divisor_sign;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 23 > > dst_man_0;
	sc_out< sc_uint< 8 > > dst_exp_0;
	sc_out< sc_uint< 1 > > dst_sign_0;
	sc_out< sc_uint< 23 > > dst_man_1;
	sc_out< sc_uint< 8 > > dst_exp_1;
	sc_out< sc_uint< 1 > > dst_sign_1;
	sc_out< sc_uint< 23 > > dst_man_2;
	sc_out< sc_uint< 8 > > dst_exp_2;
	sc_out< sc_uint< 1 > > dst_sign_2;
	sc_out< sc_uint< 23 > > dst_man_3;
	sc_out< sc_uint< 8 > > dst_exp_3;
	sc_out< sc_uint< 1 > > dst_sign_3;
	sc_out< sc_uint< 23 > > dst_man_4;
	sc_out< sc_uint< 8 > > dst_exp_4;
	sc_out< sc_uint< 1 > > dst_sign_4;
	sc_out< sc_uint< 23 > > dst_man_5;
	sc_out< sc_uint< 8 > > dst_exp_5;
	sc_out< sc_uint< 1 > > dst_sign_5;
	sc_out< sc_uint< 23 > > dst_man_6;
	sc_out< sc_uint< 8 > > dst_exp_6;
	sc_out< sc_uint< 1 > > dst_sign_6;
	sc_out< sc_uint< 23 > > dst_man_7;
	sc_out< sc_uint< 8 > > dst_exp_7;
	sc_out< sc_uint< 1 > > dst_sign_7;

	SC_CTOR(linear_dequant);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>

#include "cynw_cm_float_int.h"


#define linear_dequant_wrapper linear_dequant

/* Only port declarations are required for nested modules.
 */
SC_MODULE(linear_dequant)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > divisor;
	sc_out< bool > dst_valid;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];


	SC_HAS_PROCESS(linear_dequant);
    	linear_dequant_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("linear_dequant")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct linear_dequant;
struct linear_dequant_cosim;
struct linear_dequant_cycsim;
struct linear_dequant_rtl;

#ifdef BDW_COWARE
#include	"linear_dequant_coware.h"
#endif

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(linear_dequant_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > divisor;
	sc_out< bool > dst_valid;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > src_man_0;
    sc_signal< sc_uint< 8 > > src_exp_0;
    sc_signal< sc_uint< 1 > > src_sign_0;
    sc_signal< sc_uint< 23 > > src_man_1;
    sc_signal< sc_uint< 8 > > src_exp_1;
    sc_signal< sc_uint< 1 > > src_sign_1;
    sc_signal< sc_uint< 23 > > src_man_2;
    sc_signal< sc_uint< 8 > > src_exp_2;
    sc_signal< sc_uint< 1 > > src_sign_2;
    sc_signal< sc_uint< 23 > > src_man_3;
    sc_signal< sc_uint< 8 > > src_exp_3;
    sc_signal< sc_uint< 1 > > src_sign_3;
    sc_signal< sc_uint< 23 > > src_man_4;
    sc_signal< sc_uint< 8 > > src_exp_4;
    sc_signal< sc_uint< 1 > > src_sign_4;
    sc_signal< sc_uint< 23 > > src_man_5;
    sc_signal< sc_uint< 8 > > src_exp_5;
    sc_signal< sc_uint< 1 > > src_sign_5;
    sc_signal< sc_uint< 23 > > src_man_6;
    sc_signal< sc_uint< 8 > > src_exp_6;
    sc_signal< sc_uint< 1 > > src_sign_6;
    sc_signal< sc_uint< 23 > > src_man_7;
    sc_signal< sc_uint< 8 > > src_exp_7;
    sc_signal< sc_uint< 1 > > src_sign_7;
    sc_signal< sc_uint< 23 > > divisor_man;
    sc_signal< sc_uint< 8 > > divisor_exp;
    sc_signal< sc_uint< 1 > > divisor_sign;
    sc_signal< sc_uint< 23 > > dst_man_0;
    sc_signal< sc_uint< 8 > > dst_exp_0;
    sc_signal< sc_uint< 1 > > dst_sign_0;
    sc_signal< sc_uint< 23 > > dst_man_1;
    sc_signal< sc_uint< 8 > > dst_exp_1;
    sc_signal< sc_uint< 1 > > dst_sign_1;
    sc_signal< sc_uint< 23 > > dst_man_2;
    sc_signal< sc_uint< 8 > > dst_exp_2;
    sc_signal< sc_uint< 1 > > dst_sign_2;
    sc_signal< sc_uint< 23 > > dst_man_3;
    sc_signal< sc_uint< 8 > > dst_exp_3;
    sc_signal< sc_uint< 1 > > dst_sign_3;
    sc_signal< sc_uint< 23 > > dst_man_4;
    sc_signal< sc_uint< 8 > > dst_exp_4;
    sc_signal< sc_uint< 1 > > dst_sign_4;
    sc_signal< sc_uint< 23 > > dst_man_5;
    sc_signal< sc_uint< 8 > > dst_exp_5;
    sc_signal< sc_uint< 1 > > dst_sign_5;
    sc_signal< sc_uint< 23 > > dst_man_6;
    sc_signal< sc_uint< 8 > > dst_exp_6;
    sc_signal< sc_uint< 1 > > dst_sign_6;
    sc_signal< sc_uint< 23 > > dst_man_7;
    sc_signal< sc_uint< 8 > > dst_exp_7;
    sc_signal< sc_uint< 1 > > dst_sign_7;

    
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
    void thread_src_man_0();
    void thread_src_exp_0();
    void thread_src_sign_0();
    void thread_src_man_1();
    void thread_src_exp_1();
    void thread_src_sign_1();
    void thread_src_man_2();
    void thread_src_exp_2();
    void thread_src_sign_2();
    void thread_src_man_3();
    void thread_src_exp_3();
    void thread_src_sign_3();
    void thread_src_man_4();
    void thread_src_exp_4();
    void thread_src_sign_4();
    void thread_src_man_5();
    void thread_src_exp_5();
    void thread_src_sign_5();
    void thread_src_man_6();
    void thread_src_exp_6();
    void thread_src_sign_6();
    void thread_src_man_7();
    void thread_src_exp_7();
    void thread_src_sign_7();
    void thread_divisor_man();
    void thread_divisor_exp();
    void thread_divisor_sign();
    void thread_dst_0();
    void thread_dst_1();
    void thread_dst_2();
    void thread_dst_3();
    void thread_dst_4();
    void thread_dst_5();
    void thread_dst_6();
    void thread_dst_7();


	SC_HAS_PROCESS(linear_dequant_wrapper);

    	linear_dequant_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("linear_dequant")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src()
		  	,divisor("divisor")
		  	,dst_valid("dst_valid")
		  	,dst()
		  	

		  ,linear_dequant0(0), linear_dequant_cosim0(0), linear_dequant_rtl0(0), linear_dequant_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~linear_dequant_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( linear_dequant_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( linear_dequant_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( linear_dequant_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( linear_dequant_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( linear_dequant_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	linear_dequant* behModule() { return linear_dequant0; }
	linear_dequant_cosim* cosimModule() { return linear_dequant_cosim0; }
	linear_dequant_cycsim* cycsimModule() { return linear_dequant_cycsim0; }
	linear_dequant_rtl* rtlModule() { return linear_dequant_rtl0; }

	linear_dequant* linear_dequant0;
	linear_dequant_cosim* linear_dequant_cosim0;
	linear_dequant_rtl* linear_dequant_rtl0;
	linear_dequant_cycsim* linear_dequant_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(linear_dequant_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > src_man_0;
	sc_in< sc_uint< 8 > > src_exp_0;
	sc_in< sc_uint< 1 > > src_sign_0;
	sc_in< sc_uint< 23 > > src_man_1;
	sc_in< sc_uint< 8 > > src_exp_1;
	sc_in< sc_uint< 1 > > src_sign_1;
	sc_in< sc_uint< 23 > > src_man_2;
	sc_in< sc_uint< 8 > > src_exp_2;
	sc_in< sc_uint< 1 > > src_sign_2;
	sc_in< sc_uint< 23 > > src_man_3;
	sc_in< sc_uint< 8 > > src_exp_3;
	sc_in< sc_uint< 1 > > src_sign_3;
	sc_in< sc_uint< 23 > > src_man_4;
	sc_in< sc_uint< 8 > > src_exp_4;
	sc_in< sc_uint< 1 > > src_sign_4;
	sc_in< sc_uint< 23 > > src_man_5;
	sc_in< sc_uint< 8 > > src_exp_5;
	sc_in< sc_uint< 1 > > src_sign_5;
	sc_in< sc_uint< 23 > > src_man_6;
	sc_in< sc_uint< 8 > > src_exp_6;
	sc_in< sc_uint< 1 > > src_sign_6;
	sc_in< sc_uint< 23 > > src_man_7;
	sc_in< sc_uint< 8 > > src_exp_7;
	sc_in< sc_uint< 1 > > src_sign_7;
	sc_in< sc_uint< 23 > > divisor_man;
	sc_in< sc_uint< 8 > > divisor_exp;
	sc_in< sc_uint< 1 > > divisor_sign;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 23 > > dst_man_0;
	sc_out< sc_uint< 8 > > dst_exp_0;
	sc_out< sc_uint< 1 > > dst_sign_0;
	sc_out< sc_uint< 23 > > dst_man_1;
	sc_out< sc_uint< 8 > > dst_exp_1;
	sc_out< sc_uint< 1 > > dst_sign_1;
	sc_out< sc_uint< 23 > > dst_man_2;
	sc_out< sc_uint< 8 > > dst_exp_2;
	sc_out< sc_uint< 1 > > dst_sign_2;
	sc_out< sc_uint< 23 > > dst_man_3;
	sc_out< sc_uint< 8 > > dst_exp_3;
	sc_out< sc_uint< 1 > > dst_sign_3;
	sc_out< sc_uint< 23 > > dst_man_4;
	sc_out< sc_uint< 8 > > dst_exp_4;
	sc_out< sc_uint< 1 > > dst_sign_4;
	sc_out< sc_uint< 23 > > dst_man_5;
	sc_out< sc_uint< 8 > > dst_exp_5;
	sc_out< sc_uint< 1 > > dst_sign_5;
	sc_out< sc_uint< 23 > > dst_man_6;
	sc_out< sc_uint< 8 > > dst_exp_6;
	sc_out< sc_uint< 1 > > dst_sign_6;
	sc_out< sc_uint< 23 > > dst_man_7;
	sc_out< sc_uint< 8 > > dst_exp_7;
	sc_out< sc_uint< 1 > > dst_sign_7;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > divisor;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];

    
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
    void thread_divisor();
    void thread_dst_man_0();
    void thread_dst_exp_0();
    void thread_dst_sign_0();
    void thread_dst_man_1();
    void thread_dst_exp_1();
    void thread_dst_sign_1();
    void thread_dst_man_2();
    void thread_dst_exp_2();
    void thread_dst_sign_2();
    void thread_dst_man_3();
    void thread_dst_exp_3();
    void thread_dst_sign_3();
    void thread_dst_man_4();
    void thread_dst_exp_4();
    void thread_dst_sign_4();
    void thread_dst_man_5();
    void thread_dst_exp_5();
    void thread_dst_sign_5();
    void thread_dst_man_6();
    void thread_dst_exp_6();
    void thread_dst_sign_6();
    void thread_dst_man_7();
    void thread_dst_exp_7();
    void thread_dst_sign_7();


	SC_HAS_PROCESS(linear_dequant_wrapper_r);

	linear_dequant_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("linear_dequant")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src_man_0("src_man_0"),
		  src_exp_0("src_exp_0"),
		  src_sign_0("src_sign_0"),
		  src_man_1("src_man_1"),
		  src_exp_1("src_exp_1"),
		  src_sign_1("src_sign_1"),
		  src_man_2("src_man_2"),
		  src_exp_2("src_exp_2"),
		  src_sign_2("src_sign_2"),
		  src_man_3("src_man_3"),
		  src_exp_3("src_exp_3"),
		  src_sign_3("src_sign_3"),
		  src_man_4("src_man_4"),
		  src_exp_4("src_exp_4"),
		  src_sign_4("src_sign_4"),
		  src_man_5("src_man_5"),
		  src_exp_5("src_exp_5"),
		  src_sign_5("src_sign_5"),
		  src_man_6("src_man_6"),
		  src_exp_6("src_exp_6"),
		  src_sign_6("src_sign_6"),
		  src_man_7("src_man_7"),
		  src_exp_7("src_exp_7"),
		  src_sign_7("src_sign_7")
		  	,divisor_man("divisor_man"),
		  divisor_exp("divisor_exp"),
		  divisor_sign("divisor_sign")
		  	,dst_valid("dst_valid")
		  	,dst_man_0("dst_man_0"),
		  dst_exp_0("dst_exp_0"),
		  dst_sign_0("dst_sign_0"),
		  dst_man_1("dst_man_1"),
		  dst_exp_1("dst_exp_1"),
		  dst_sign_1("dst_sign_1"),
		  dst_man_2("dst_man_2"),
		  dst_exp_2("dst_exp_2"),
		  dst_sign_2("dst_sign_2"),
		  dst_man_3("dst_man_3"),
		  dst_exp_3("dst_exp_3"),
		  dst_sign_3("dst_sign_3"),
		  dst_man_4("dst_man_4"),
		  dst_exp_4("dst_exp_4"),
		  dst_sign_4("dst_sign_4"),
		  dst_man_5("dst_man_5"),
		  dst_exp_5("dst_exp_5"),
		  dst_sign_5("dst_sign_5"),
		  dst_man_6("dst_man_6"),
		  dst_exp_6("dst_exp_6"),
		  dst_sign_6("dst_sign_6"),
		  dst_man_7("dst_man_7"),
		  dst_exp_7("dst_exp_7"),
		  dst_sign_7("dst_sign_7")
		  	

		  ,linear_dequant0(0), linear_dequant_cosim0(0), linear_dequant_rtl0(0), linear_dequant_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~linear_dequant_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( linear_dequant_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( linear_dequant_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( linear_dequant_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( linear_dequant_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( linear_dequant_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	linear_dequant* behModule() { return linear_dequant0; }
	linear_dequant_cosim* cosimModule() { return linear_dequant_cosim0; }
	linear_dequant_cycsim* cycsimModule() { return linear_dequant_cycsim0; }
	linear_dequant_rtl* rtlModule() { return linear_dequant_rtl0; }

protected:
	linear_dequant* linear_dequant0;
	linear_dequant_cosim* linear_dequant_cosim0;
	linear_dequant_rtl* linear_dequant_rtl0;
	linear_dequant_cycsim* linear_dequant_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
