/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _SFU_OUT_BUFF_CYCSIM_INCLUDED_
#define _SFU_OUT_BUFF_CYCSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"

SC_MODULE(sfu_out_buff_cycsim)
{

	// Port declarations.
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


	sfu_out_buff_cycsim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" sfu_out_buff") ) )
		: sc_module(in_name)
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
		  	

    {
    };
};

#endif
