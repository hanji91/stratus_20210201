/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _SFU_OUT_BUFF_SC_WRAP_INCLUDED_
#define _SFU_OUT_BUFF_SC_WRAP_INCLUDED_

#include <systemc.h>

struct sfu_out_buff;


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

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

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
		  	

		  ,sfu_out_buff0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~sfu_out_buff_wrapper()
    {
        DeleteInstances();
    }

	sfu_out_buff* sfu_out_buff0;
};

#endif /* _SFU_OUT_BUFF_SC_WRAP_INCLUDED_ */
