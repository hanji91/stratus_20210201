/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FINISH_GEN_SC_FOREIGN_INCLUDED_
#define _FINISH_GEN_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct finish_gen : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 1 > > enable;
	sc_in< sc_uint< 1 > > clear;
	sc_in< bool > cnt_enable;
	sc_in< sc_uint< 32 > > total_num;
	sc_out< bool > finish;


    const char* hdl_name() const { return "finish_gen"; }
    
	finish_gen( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,clear("clear")
		  	,cnt_enable("cnt_enable")
		  	,total_num("total_num")
		  	,finish("finish")
		  	

		
    {
    }

};

#endif /* _FINISH_GEN_SC_FOREIGN_INCLUDED_ */
