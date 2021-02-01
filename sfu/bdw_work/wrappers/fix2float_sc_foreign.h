/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FIX2FLOAT_SC_FOREIGN_INCLUDED_
#define _FIX2FLOAT_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct fix2float : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;


    const char* hdl_name() const { return "fix2float"; }
    
	fix2float( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,fraction_len("fraction_len")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		
    {
    }

};

#endif /* _FIX2FLOAT_SC_FOREIGN_INCLUDED_ */
