/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _AVG_POOL_WRAP_INCLUDED_
#define _AVG_POOL_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define avg_pool_wrapper avg_pool

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(avg_pool)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > init;
	sc_in< sc_int< 32 > > in_data_0;
	sc_in< sc_int< 32 > > in_data_1;
	sc_in< sc_int< 32 > > in_data_2;
	sc_in< sc_int< 32 > > in_data_3;
	sc_in< sc_int< 32 > > in_data_4;
	sc_in< sc_int< 32 > > in_data_5;
	sc_in< sc_int< 32 > > in_data_6;
	sc_in< sc_int< 32 > > in_data_7;
	sc_in< sc_int< 32 > > in_data_8;
	sc_in< sc_int< 32 > > in_data_9;
	sc_in< sc_int< 32 > > in_data_10;
	sc_in< sc_int< 32 > > in_data_11;
	sc_in< sc_int< 32 > > in_data_12;
	sc_in< sc_int< 32 > > in_data_13;
	sc_in< sc_int< 32 > > in_data_14;
	sc_in< sc_int< 32 > > in_data_15;
	sc_in< sc_int< 32 > > in_data_16;
	sc_in< sc_int< 32 > > in_data_17;
	sc_in< sc_int< 32 > > in_data_18;
	sc_in< sc_int< 32 > > in_data_19;
	sc_in< sc_int< 32 > > in_data_20;
	sc_in< sc_int< 32 > > in_data_21;
	sc_in< sc_int< 32 > > in_data_22;
	sc_in< sc_int< 32 > > in_data_23;
	sc_in< sc_int< 32 > > in_data_24;
	sc_in< sc_int< 32 > > in_data_25;
	sc_in< sc_int< 32 > > in_data_26;
	sc_in< sc_int< 32 > > in_data_27;
	sc_in< sc_int< 32 > > in_data_28;
	sc_in< sc_int< 32 > > in_data_29;
	sc_in< sc_int< 32 > > in_data_30;
	sc_in< sc_int< 32 > > in_data_31;
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data_0;
	sc_out< sc_int< 32 > > out_data_1;
	sc_out< sc_int< 32 > > out_data_2;
	sc_out< sc_int< 32 > > out_data_3;
	sc_out< sc_int< 32 > > out_data_4;
	sc_out< sc_int< 32 > > out_data_5;
	sc_out< sc_int< 32 > > out_data_6;
	sc_out< sc_int< 32 > > out_data_7;
	sc_out< sc_int< 32 > > out_data_8;
	sc_out< sc_int< 32 > > out_data_9;
	sc_out< sc_int< 32 > > out_data_10;
	sc_out< sc_int< 32 > > out_data_11;
	sc_out< sc_int< 32 > > out_data_12;
	sc_out< sc_int< 32 > > out_data_13;
	sc_out< sc_int< 32 > > out_data_14;
	sc_out< sc_int< 32 > > out_data_15;
	sc_out< sc_int< 32 > > out_data_16;
	sc_out< sc_int< 32 > > out_data_17;
	sc_out< sc_int< 32 > > out_data_18;
	sc_out< sc_int< 32 > > out_data_19;
	sc_out< sc_int< 32 > > out_data_20;
	sc_out< sc_int< 32 > > out_data_21;
	sc_out< sc_int< 32 > > out_data_22;
	sc_out< sc_int< 32 > > out_data_23;
	sc_out< sc_int< 32 > > out_data_24;
	sc_out< sc_int< 32 > > out_data_25;
	sc_out< sc_int< 32 > > out_data_26;
	sc_out< sc_int< 32 > > out_data_27;
	sc_out< sc_int< 32 > > out_data_28;
	sc_out< sc_int< 32 > > out_data_29;
	sc_out< sc_int< 32 > > out_data_30;
	sc_out< sc_int< 32 > > out_data_31;
	sc_out< bool > out_data_valid;

	SC_CTOR(avg_pool);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define avg_pool_wrapper avg_pool

/* Only port declarations are required for nested modules.
 */
SC_MODULE(avg_pool)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > init;
	sc_in< sc_int< 32 > > in_data[32];
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data[32];
	sc_out< bool > out_data_valid;


	SC_HAS_PROCESS(avg_pool);
    	avg_pool_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("avg_pool")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct avg_pool;
struct avg_pool_cosim;
struct avg_pool_cycsim;
struct avg_pool_rtl;

#ifdef BDW_COWARE
#include	"avg_pool_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(avg_pool_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > init;
	sc_in< sc_int< 32 > > in_data[32];
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data[32];
	sc_out< bool > out_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 32 > > in_data_0;
    sc_signal< sc_int< 32 > > in_data_1;
    sc_signal< sc_int< 32 > > in_data_2;
    sc_signal< sc_int< 32 > > in_data_3;
    sc_signal< sc_int< 32 > > in_data_4;
    sc_signal< sc_int< 32 > > in_data_5;
    sc_signal< sc_int< 32 > > in_data_6;
    sc_signal< sc_int< 32 > > in_data_7;
    sc_signal< sc_int< 32 > > in_data_8;
    sc_signal< sc_int< 32 > > in_data_9;
    sc_signal< sc_int< 32 > > in_data_10;
    sc_signal< sc_int< 32 > > in_data_11;
    sc_signal< sc_int< 32 > > in_data_12;
    sc_signal< sc_int< 32 > > in_data_13;
    sc_signal< sc_int< 32 > > in_data_14;
    sc_signal< sc_int< 32 > > in_data_15;
    sc_signal< sc_int< 32 > > in_data_16;
    sc_signal< sc_int< 32 > > in_data_17;
    sc_signal< sc_int< 32 > > in_data_18;
    sc_signal< sc_int< 32 > > in_data_19;
    sc_signal< sc_int< 32 > > in_data_20;
    sc_signal< sc_int< 32 > > in_data_21;
    sc_signal< sc_int< 32 > > in_data_22;
    sc_signal< sc_int< 32 > > in_data_23;
    sc_signal< sc_int< 32 > > in_data_24;
    sc_signal< sc_int< 32 > > in_data_25;
    sc_signal< sc_int< 32 > > in_data_26;
    sc_signal< sc_int< 32 > > in_data_27;
    sc_signal< sc_int< 32 > > in_data_28;
    sc_signal< sc_int< 32 > > in_data_29;
    sc_signal< sc_int< 32 > > in_data_30;
    sc_signal< sc_int< 32 > > in_data_31;
    sc_signal< sc_int< 32 > > out_data_0;
    sc_signal< sc_int< 32 > > out_data_1;
    sc_signal< sc_int< 32 > > out_data_2;
    sc_signal< sc_int< 32 > > out_data_3;
    sc_signal< sc_int< 32 > > out_data_4;
    sc_signal< sc_int< 32 > > out_data_5;
    sc_signal< sc_int< 32 > > out_data_6;
    sc_signal< sc_int< 32 > > out_data_7;
    sc_signal< sc_int< 32 > > out_data_8;
    sc_signal< sc_int< 32 > > out_data_9;
    sc_signal< sc_int< 32 > > out_data_10;
    sc_signal< sc_int< 32 > > out_data_11;
    sc_signal< sc_int< 32 > > out_data_12;
    sc_signal< sc_int< 32 > > out_data_13;
    sc_signal< sc_int< 32 > > out_data_14;
    sc_signal< sc_int< 32 > > out_data_15;
    sc_signal< sc_int< 32 > > out_data_16;
    sc_signal< sc_int< 32 > > out_data_17;
    sc_signal< sc_int< 32 > > out_data_18;
    sc_signal< sc_int< 32 > > out_data_19;
    sc_signal< sc_int< 32 > > out_data_20;
    sc_signal< sc_int< 32 > > out_data_21;
    sc_signal< sc_int< 32 > > out_data_22;
    sc_signal< sc_int< 32 > > out_data_23;
    sc_signal< sc_int< 32 > > out_data_24;
    sc_signal< sc_int< 32 > > out_data_25;
    sc_signal< sc_int< 32 > > out_data_26;
    sc_signal< sc_int< 32 > > out_data_27;
    sc_signal< sc_int< 32 > > out_data_28;
    sc_signal< sc_int< 32 > > out_data_29;
    sc_signal< sc_int< 32 > > out_data_30;
    sc_signal< sc_int< 32 > > out_data_31;

    
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
    

	SC_HAS_PROCESS(avg_pool_wrapper);

    	avg_pool_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("avg_pool")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,init("init")
		  	,in_data()
		  	,in_data_valid("in_data_valid")
		  	,out_data()
		  	,out_data_valid("out_data_valid")
		  	

		  ,avg_pool0(0), avg_pool_cosim0(0), avg_pool_rtl0(0), avg_pool_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~avg_pool_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( avg_pool_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( avg_pool_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( avg_pool_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( avg_pool_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( avg_pool_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	avg_pool* behModule() { return avg_pool0; }
	avg_pool_cosim* cosimModule() { return avg_pool_cosim0; }
	avg_pool_cycsim* cycsimModule() { return avg_pool_cycsim0; }
	avg_pool_rtl* rtlModule() { return avg_pool_rtl0; }

	avg_pool* avg_pool0;
	avg_pool_cosim* avg_pool_cosim0;
	avg_pool_rtl* avg_pool_rtl0;
	avg_pool_cycsim* avg_pool_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(avg_pool_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > init;
	sc_in< sc_int< 32 > > in_data_0;
	sc_in< sc_int< 32 > > in_data_1;
	sc_in< sc_int< 32 > > in_data_2;
	sc_in< sc_int< 32 > > in_data_3;
	sc_in< sc_int< 32 > > in_data_4;
	sc_in< sc_int< 32 > > in_data_5;
	sc_in< sc_int< 32 > > in_data_6;
	sc_in< sc_int< 32 > > in_data_7;
	sc_in< sc_int< 32 > > in_data_8;
	sc_in< sc_int< 32 > > in_data_9;
	sc_in< sc_int< 32 > > in_data_10;
	sc_in< sc_int< 32 > > in_data_11;
	sc_in< sc_int< 32 > > in_data_12;
	sc_in< sc_int< 32 > > in_data_13;
	sc_in< sc_int< 32 > > in_data_14;
	sc_in< sc_int< 32 > > in_data_15;
	sc_in< sc_int< 32 > > in_data_16;
	sc_in< sc_int< 32 > > in_data_17;
	sc_in< sc_int< 32 > > in_data_18;
	sc_in< sc_int< 32 > > in_data_19;
	sc_in< sc_int< 32 > > in_data_20;
	sc_in< sc_int< 32 > > in_data_21;
	sc_in< sc_int< 32 > > in_data_22;
	sc_in< sc_int< 32 > > in_data_23;
	sc_in< sc_int< 32 > > in_data_24;
	sc_in< sc_int< 32 > > in_data_25;
	sc_in< sc_int< 32 > > in_data_26;
	sc_in< sc_int< 32 > > in_data_27;
	sc_in< sc_int< 32 > > in_data_28;
	sc_in< sc_int< 32 > > in_data_29;
	sc_in< sc_int< 32 > > in_data_30;
	sc_in< sc_int< 32 > > in_data_31;
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data_0;
	sc_out< sc_int< 32 > > out_data_1;
	sc_out< sc_int< 32 > > out_data_2;
	sc_out< sc_int< 32 > > out_data_3;
	sc_out< sc_int< 32 > > out_data_4;
	sc_out< sc_int< 32 > > out_data_5;
	sc_out< sc_int< 32 > > out_data_6;
	sc_out< sc_int< 32 > > out_data_7;
	sc_out< sc_int< 32 > > out_data_8;
	sc_out< sc_int< 32 > > out_data_9;
	sc_out< sc_int< 32 > > out_data_10;
	sc_out< sc_int< 32 > > out_data_11;
	sc_out< sc_int< 32 > > out_data_12;
	sc_out< sc_int< 32 > > out_data_13;
	sc_out< sc_int< 32 > > out_data_14;
	sc_out< sc_int< 32 > > out_data_15;
	sc_out< sc_int< 32 > > out_data_16;
	sc_out< sc_int< 32 > > out_data_17;
	sc_out< sc_int< 32 > > out_data_18;
	sc_out< sc_int< 32 > > out_data_19;
	sc_out< sc_int< 32 > > out_data_20;
	sc_out< sc_int< 32 > > out_data_21;
	sc_out< sc_int< 32 > > out_data_22;
	sc_out< sc_int< 32 > > out_data_23;
	sc_out< sc_int< 32 > > out_data_24;
	sc_out< sc_int< 32 > > out_data_25;
	sc_out< sc_int< 32 > > out_data_26;
	sc_out< sc_int< 32 > > out_data_27;
	sc_out< sc_int< 32 > > out_data_28;
	sc_out< sc_int< 32 > > out_data_29;
	sc_out< sc_int< 32 > > out_data_30;
	sc_out< sc_int< 32 > > out_data_31;
	sc_out< bool > out_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 32 > > in_data[32];
    sc_signal< sc_int< 32 > > out_data[32];

    
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
    void thread_in_data_0();
    void thread_in_data_1();
    void thread_in_data_2();
    void thread_in_data_3();
    void thread_in_data_4();
    void thread_in_data_5();
    void thread_in_data_6();
    void thread_in_data_7();
    void thread_in_data_8();
    void thread_in_data_9();
    void thread_in_data_10();
    void thread_in_data_11();
    void thread_in_data_12();
    void thread_in_data_13();
    void thread_in_data_14();
    void thread_in_data_15();
    void thread_in_data_16();
    void thread_in_data_17();
    void thread_in_data_18();
    void thread_in_data_19();
    void thread_in_data_20();
    void thread_in_data_21();
    void thread_in_data_22();
    void thread_in_data_23();
    void thread_in_data_24();
    void thread_in_data_25();
    void thread_in_data_26();
    void thread_in_data_27();
    void thread_in_data_28();
    void thread_in_data_29();
    void thread_in_data_30();
    void thread_in_data_31();
    void thread_out_data_0();
    void thread_out_data_1();
    void thread_out_data_2();
    void thread_out_data_3();
    void thread_out_data_4();
    void thread_out_data_5();
    void thread_out_data_6();
    void thread_out_data_7();
    void thread_out_data_8();
    void thread_out_data_9();
    void thread_out_data_10();
    void thread_out_data_11();
    void thread_out_data_12();
    void thread_out_data_13();
    void thread_out_data_14();
    void thread_out_data_15();
    void thread_out_data_16();
    void thread_out_data_17();
    void thread_out_data_18();
    void thread_out_data_19();
    void thread_out_data_20();
    void thread_out_data_21();
    void thread_out_data_22();
    void thread_out_data_23();
    void thread_out_data_24();
    void thread_out_data_25();
    void thread_out_data_26();
    void thread_out_data_27();
    void thread_out_data_28();
    void thread_out_data_29();
    void thread_out_data_30();
    void thread_out_data_31();


	SC_HAS_PROCESS(avg_pool_wrapper_r);

	avg_pool_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("avg_pool")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,init("init")
		  	,in_data_0("in_data_0"),
		  in_data_1("in_data_1"),
		  in_data_2("in_data_2"),
		  in_data_3("in_data_3"),
		  in_data_4("in_data_4"),
		  in_data_5("in_data_5"),
		  in_data_6("in_data_6"),
		  in_data_7("in_data_7"),
		  in_data_8("in_data_8"),
		  in_data_9("in_data_9"),
		  in_data_10("in_data_10"),
		  in_data_11("in_data_11"),
		  in_data_12("in_data_12"),
		  in_data_13("in_data_13"),
		  in_data_14("in_data_14"),
		  in_data_15("in_data_15"),
		  in_data_16("in_data_16"),
		  in_data_17("in_data_17"),
		  in_data_18("in_data_18"),
		  in_data_19("in_data_19"),
		  in_data_20("in_data_20"),
		  in_data_21("in_data_21"),
		  in_data_22("in_data_22"),
		  in_data_23("in_data_23"),
		  in_data_24("in_data_24"),
		  in_data_25("in_data_25"),
		  in_data_26("in_data_26"),
		  in_data_27("in_data_27"),
		  in_data_28("in_data_28"),
		  in_data_29("in_data_29"),
		  in_data_30("in_data_30"),
		  in_data_31("in_data_31")
		  	,in_data_valid("in_data_valid")
		  	,out_data_0("out_data_0"),
		  out_data_1("out_data_1"),
		  out_data_2("out_data_2"),
		  out_data_3("out_data_3"),
		  out_data_4("out_data_4"),
		  out_data_5("out_data_5"),
		  out_data_6("out_data_6"),
		  out_data_7("out_data_7"),
		  out_data_8("out_data_8"),
		  out_data_9("out_data_9"),
		  out_data_10("out_data_10"),
		  out_data_11("out_data_11"),
		  out_data_12("out_data_12"),
		  out_data_13("out_data_13"),
		  out_data_14("out_data_14"),
		  out_data_15("out_data_15"),
		  out_data_16("out_data_16"),
		  out_data_17("out_data_17"),
		  out_data_18("out_data_18"),
		  out_data_19("out_data_19"),
		  out_data_20("out_data_20"),
		  out_data_21("out_data_21"),
		  out_data_22("out_data_22"),
		  out_data_23("out_data_23"),
		  out_data_24("out_data_24"),
		  out_data_25("out_data_25"),
		  out_data_26("out_data_26"),
		  out_data_27("out_data_27"),
		  out_data_28("out_data_28"),
		  out_data_29("out_data_29"),
		  out_data_30("out_data_30"),
		  out_data_31("out_data_31")
		  	,out_data_valid("out_data_valid")
		  	

		  ,avg_pool0(0), avg_pool_cosim0(0), avg_pool_rtl0(0), avg_pool_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~avg_pool_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( avg_pool_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( avg_pool_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( avg_pool_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( avg_pool_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( avg_pool_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	avg_pool* behModule() { return avg_pool0; }
	avg_pool_cosim* cosimModule() { return avg_pool_cosim0; }
	avg_pool_cycsim* cycsimModule() { return avg_pool_cycsim0; }
	avg_pool_rtl* rtlModule() { return avg_pool_rtl0; }

protected:
	avg_pool* avg_pool0;
	avg_pool_cosim* avg_pool_cosim0;
	avg_pool_rtl* avg_pool_rtl0;
	avg_pool_cycsim* avg_pool_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
