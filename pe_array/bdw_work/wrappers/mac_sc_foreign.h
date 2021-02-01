/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _MAC_SC_FOREIGN_INCLUDED_
#define _MAC_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct mac : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;


    const char* hdl_name() const { return "mac"; }
    
	mac( sc_module_name name )
		: ncsc_foreign_module(name)
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
    }

};

#endif /* _MAC_SC_FOREIGN_INCLUDED_ */
