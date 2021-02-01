/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FINISH_GEN_SC_WRAP_INCLUDED_
#define _FINISH_GEN_SC_WRAP_INCLUDED_

#include <systemc.h>

struct finish_gen;


// Declaration of wrapper with BEH level ports

SC_MODULE(finish_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(finish_gen_wrapper);

    	finish_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("finish_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,clear("clear")
		  	,cnt_enable("cnt_enable")
		  	,total_num("total_num")
		  	,finish("finish")
		  	

		  ,finish_gen0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~finish_gen_wrapper()
    {
        DeleteInstances();
    }

	finish_gen* finish_gen0;
};

#endif /* _FINISH_GEN_SC_WRAP_INCLUDED_ */
