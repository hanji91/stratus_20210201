/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _SFU_OUT_BUFF_WRAP_INCLUDED_
#define _SFU_OUT_BUFF_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define sfu_out_buff_wrapper sfu_out_buff

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(sfu_out_buff)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > learned_clip_en;
	sc_in< sc_uint< 32 > > in0_data_0;
	sc_in< sc_uint< 32 > > in0_data_1;
	sc_in< sc_uint< 32 > > in0_data_2;
	sc_in< sc_uint< 32 > > in0_data_3;
	sc_in< sc_uint< 32 > > in0_data_4;
	sc_in< sc_uint< 32 > > in0_data_5;
	sc_in< sc_uint< 32 > > in0_data_6;
	sc_in< sc_uint< 32 > > in0_data_7;
	sc_in< bool > in0_data_valid;
	sc_in< sc_uint< 32 > > in1_data_0;
	sc_in< sc_uint< 32 > > in1_data_1;
	sc_in< sc_uint< 32 > > in1_data_2;
	sc_in< sc_uint< 32 > > in1_data_3;
	sc_in< sc_uint< 32 > > in1_data_4;
	sc_in< sc_uint< 32 > > in1_data_5;
	sc_in< sc_uint< 32 > > in1_data_6;
	sc_in< sc_uint< 32 > > in1_data_7;
	sc_in< bool > in1_data_valid;
	sc_out< sc_biguint< 320 > > out_data;
	sc_out< bool > out_data_valid;

	SC_CTOR(sfu_out_buff);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define sfu_out_buff_wrapper sfu_out_buff

/* Only port declarations are required for nested modules.
 */
SC_MODULE(sfu_out_buff)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > learned_clip_en;
	sc_in< sc_uint< 32 > > in0_data[8];
	sc_in< bool > in0_data_valid;
	sc_in< sc_uint< 32 > > in1_data[8];
	sc_in< bool > in1_data_valid;
	sc_out< sc_biguint< 320 > > out_data;
	sc_out< bool > out_data_valid;


	SC_HAS_PROCESS(sfu_out_buff);
    	sfu_out_buff_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("sfu_out_buff")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct sfu_out_buff;
struct sfu_out_buff_cosim;
struct sfu_out_buff_cycsim;
struct sfu_out_buff_rtl;

#ifdef BDW_COWARE
#include	"sfu_out_buff_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(sfu_out_buff_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > learned_clip_en;
	sc_in< sc_uint< 32 > > in0_data[8];
	sc_in< bool > in0_data_valid;
	sc_in< sc_uint< 32 > > in1_data[8];
	sc_in< bool > in1_data_valid;
	sc_out< sc_biguint< 320 > > out_data;
	sc_out< bool > out_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > in0_data_0;
    sc_signal< sc_uint< 32 > > in0_data_1;
    sc_signal< sc_uint< 32 > > in0_data_2;
    sc_signal< sc_uint< 32 > > in0_data_3;
    sc_signal< sc_uint< 32 > > in0_data_4;
    sc_signal< sc_uint< 32 > > in0_data_5;
    sc_signal< sc_uint< 32 > > in0_data_6;
    sc_signal< sc_uint< 32 > > in0_data_7;
    sc_signal< sc_uint< 32 > > in1_data_0;
    sc_signal< sc_uint< 32 > > in1_data_1;
    sc_signal< sc_uint< 32 > > in1_data_2;
    sc_signal< sc_uint< 32 > > in1_data_3;
    sc_signal< sc_uint< 32 > > in1_data_4;
    sc_signal< sc_uint< 32 > > in1_data_5;
    sc_signal< sc_uint< 32 > > in1_data_6;
    sc_signal< sc_uint< 32 > > in1_data_7;

    
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
    

	SC_HAS_PROCESS(sfu_out_buff_wrapper);

    	sfu_out_buff_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("sfu_out_buff")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,learned_clip_en("learned_clip_en")
		  	,in0_data()
		  	,in0_data_valid("in0_data_valid")
		  	,in1_data()
		  	,in1_data_valid("in1_data_valid")
		  	,out_data("out_data")
		  	,out_data_valid("out_data_valid")
		  	

		  ,sfu_out_buff0(0), sfu_out_buff_cosim0(0), sfu_out_buff_rtl0(0), sfu_out_buff_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~sfu_out_buff_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( sfu_out_buff_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( sfu_out_buff_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( sfu_out_buff_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( sfu_out_buff_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( sfu_out_buff_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	sfu_out_buff* behModule() { return sfu_out_buff0; }
	sfu_out_buff_cosim* cosimModule() { return sfu_out_buff_cosim0; }
	sfu_out_buff_cycsim* cycsimModule() { return sfu_out_buff_cycsim0; }
	sfu_out_buff_rtl* rtlModule() { return sfu_out_buff_rtl0; }

	sfu_out_buff* sfu_out_buff0;
	sfu_out_buff_cosim* sfu_out_buff_cosim0;
	sfu_out_buff_rtl* sfu_out_buff_rtl0;
	sfu_out_buff_cycsim* sfu_out_buff_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(sfu_out_buff_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > learned_clip_en;
	sc_in< sc_uint< 32 > > in0_data_0;
	sc_in< sc_uint< 32 > > in0_data_1;
	sc_in< sc_uint< 32 > > in0_data_2;
	sc_in< sc_uint< 32 > > in0_data_3;
	sc_in< sc_uint< 32 > > in0_data_4;
	sc_in< sc_uint< 32 > > in0_data_5;
	sc_in< sc_uint< 32 > > in0_data_6;
	sc_in< sc_uint< 32 > > in0_data_7;
	sc_in< bool > in0_data_valid;
	sc_in< sc_uint< 32 > > in1_data_0;
	sc_in< sc_uint< 32 > > in1_data_1;
	sc_in< sc_uint< 32 > > in1_data_2;
	sc_in< sc_uint< 32 > > in1_data_3;
	sc_in< sc_uint< 32 > > in1_data_4;
	sc_in< sc_uint< 32 > > in1_data_5;
	sc_in< sc_uint< 32 > > in1_data_6;
	sc_in< sc_uint< 32 > > in1_data_7;
	sc_in< bool > in1_data_valid;
	sc_out< sc_biguint< 320 > > out_data;
	sc_out< bool > out_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > in0_data[8];
    sc_signal< sc_uint< 32 > > in1_data[8];

    
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
    void thread_in0_data_0();
    void thread_in0_data_1();
    void thread_in0_data_2();
    void thread_in0_data_3();
    void thread_in0_data_4();
    void thread_in0_data_5();
    void thread_in0_data_6();
    void thread_in0_data_7();
    void thread_in1_data_0();
    void thread_in1_data_1();
    void thread_in1_data_2();
    void thread_in1_data_3();
    void thread_in1_data_4();
    void thread_in1_data_5();
    void thread_in1_data_6();
    void thread_in1_data_7();


	SC_HAS_PROCESS(sfu_out_buff_wrapper_r);

	sfu_out_buff_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("sfu_out_buff")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,learned_clip_en("learned_clip_en")
		  	,in0_data_0("in0_data_0"),
		  in0_data_1("in0_data_1"),
		  in0_data_2("in0_data_2"),
		  in0_data_3("in0_data_3"),
		  in0_data_4("in0_data_4"),
		  in0_data_5("in0_data_5"),
		  in0_data_6("in0_data_6"),
		  in0_data_7("in0_data_7")
		  	,in0_data_valid("in0_data_valid")
		  	,in1_data_0("in1_data_0"),
		  in1_data_1("in1_data_1"),
		  in1_data_2("in1_data_2"),
		  in1_data_3("in1_data_3"),
		  in1_data_4("in1_data_4"),
		  in1_data_5("in1_data_5"),
		  in1_data_6("in1_data_6"),
		  in1_data_7("in1_data_7")
		  	,in1_data_valid("in1_data_valid")
		  	,out_data("out_data")
		  	,out_data_valid("out_data_valid")
		  	

		  ,sfu_out_buff0(0), sfu_out_buff_cosim0(0), sfu_out_buff_rtl0(0), sfu_out_buff_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~sfu_out_buff_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( sfu_out_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( sfu_out_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( sfu_out_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( sfu_out_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( sfu_out_buff_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	sfu_out_buff* behModule() { return sfu_out_buff0; }
	sfu_out_buff_cosim* cosimModule() { return sfu_out_buff_cosim0; }
	sfu_out_buff_cycsim* cycsimModule() { return sfu_out_buff_cycsim0; }
	sfu_out_buff_rtl* rtlModule() { return sfu_out_buff_rtl0; }

protected:
	sfu_out_buff* sfu_out_buff0;
	sfu_out_buff_cosim* sfu_out_buff_cosim0;
	sfu_out_buff_rtl* sfu_out_buff_rtl0;
	sfu_out_buff_cycsim* sfu_out_buff_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
