/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _FINISH_GEN_CYCSIM_INCLUDED_
#define _FINISH_GEN_CYCSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"

SC_MODULE(finish_gen_cycsim)
{

	// Port declarations.
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;


	finish_gen_cycsim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" finish_gen") ) )
		: sc_module(in_name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,clear("clear")
		  	,cnt_enable("cnt_enable")
		  	,total_num("total_num")
		  	,finish("finish")
		  	

    {
    };
};

#endif
