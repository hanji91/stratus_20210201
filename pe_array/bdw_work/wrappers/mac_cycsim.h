/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _MAC_CYCSIM_INCLUDED_
#define _MAC_CYCSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"

SC_MODULE(mac_cycsim)
{

	// Port declarations.
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;


	mac_cycsim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" mac") ) )
		: sc_module(in_name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,clear("clear")
		  	,src_vld("src_vld")
		  	,src_0("src_0")
		  	,src_1("src_1")
		  	,acc("acc")
		  	,src_1_1d("src_1_1d")
		  	

    {
    };
};

#endif
