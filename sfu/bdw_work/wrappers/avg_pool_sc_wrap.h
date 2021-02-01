/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _AVG_POOL_SC_WRAP_INCLUDED_
#define _AVG_POOL_SC_WRAP_INCLUDED_

#include <systemc.h>

struct avg_pool;


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

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

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
		  	

		  ,avg_pool0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~avg_pool_wrapper()
    {
        DeleteInstances();
    }

	avg_pool* avg_pool0;
};

#endif /* _AVG_POOL_SC_WRAP_INCLUDED_ */
