/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _IN_BUFF_WRAP_INCLUDED_
#define _IN_BUFF_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define in_buff_wrapper in_buff

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(in_buff)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
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
	sc_out< bool > out_data_valid;

	SC_CTOR(in_buff);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define in_buff_wrapper in_buff

/* Only port declarations are required for nested modules.
 */
SC_MODULE(in_buff)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_int< 32 > > in_data[32];
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data[8];
	sc_out< bool > out_data_valid;


	SC_HAS_PROCESS(in_buff);
    	in_buff_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("in_buff")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct in_buff;
struct in_buff_cosim;
struct in_buff_cycsim;
struct in_buff_rtl;

#ifdef BDW_COWARE
#include	"in_buff_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(in_buff_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_int< 32 > > in_data[32];
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data[8];
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
    

	SC_HAS_PROCESS(in_buff_wrapper);

    	in_buff_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("in_buff")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,in_data()
		  	,in_data_valid("in_data_valid")
		  	,out_data()
		  	,out_data_valid("out_data_valid")
		  	

		  ,in_buff0(0), in_buff_cosim0(0), in_buff_rtl0(0), in_buff_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~in_buff_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( in_buff_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( in_buff_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( in_buff_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( in_buff_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( in_buff_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	in_buff* behModule() { return in_buff0; }
	in_buff_cosim* cosimModule() { return in_buff_cosim0; }
	in_buff_cycsim* cycsimModule() { return in_buff_cycsim0; }
	in_buff_rtl* rtlModule() { return in_buff_rtl0; }

	in_buff* in_buff0;
	in_buff_cosim* in_buff_cosim0;
	in_buff_rtl* in_buff_rtl0;
	in_buff_cycsim* in_buff_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(in_buff_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
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
	sc_out< bool > out_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 32 > > in_data[32];
    sc_signal< sc_int< 32 > > out_data[8];

    
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


	SC_HAS_PROCESS(in_buff_wrapper_r);

	in_buff_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("in_buff")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
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
		  out_data_7("out_data_7")
		  	,out_data_valid("out_data_valid")
		  	

		  ,in_buff0(0), in_buff_cosim0(0), in_buff_rtl0(0), in_buff_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~in_buff_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( in_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( in_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( in_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( in_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( in_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	in_buff* behModule() { return in_buff0; }
	in_buff_cosim* cosimModule() { return in_buff_cosim0; }
	in_buff_cycsim* cycsimModule() { return in_buff_cycsim0; }
	in_buff_rtl* rtlModule() { return in_buff_rtl0; }

protected:
	in_buff* in_buff0;
	in_buff_cosim* in_buff_cosim0;
	in_buff_rtl* in_buff_rtl0;
	in_buff_cycsim* in_buff_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
