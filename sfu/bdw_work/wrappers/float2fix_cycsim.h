/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _FLOAT2FIX_CYCSIM_INCLUDED_
#define _FLOAT2FIX_CYCSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"

SC_MODULE(float2fix_cycsim)
{

	// Port declarations.
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;


	float2fix_cycsim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" float2fix") ) )
		: sc_module(in_name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

    {
    };
};

#endif
