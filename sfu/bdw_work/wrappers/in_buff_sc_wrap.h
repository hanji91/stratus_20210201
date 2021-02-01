/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _IN_BUFF_SC_WRAP_INCLUDED_
#define _IN_BUFF_SC_WRAP_INCLUDED_

#include <systemc.h>

struct in_buff;


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

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

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
		  	

		  ,in_buff0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~in_buff_wrapper()
    {
        DeleteInstances();
    }

	in_buff* in_buff0;
};

#endif /* _IN_BUFF_SC_WRAP_INCLUDED_ */
