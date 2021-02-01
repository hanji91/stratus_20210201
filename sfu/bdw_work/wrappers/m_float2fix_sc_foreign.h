/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _M_FLOAT2FIX_SC_FOREIGN_INCLUDED_
#define _M_FLOAT2FIX_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct m_float2fix : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src_0;
	sc_in< sc_uint< 32 > > src_1;
	sc_in< sc_uint< 32 > > src_2;
	sc_in< sc_uint< 32 > > src_3;
	sc_in< sc_uint< 32 > > src_4;
	sc_in< sc_uint< 32 > > src_5;
	sc_in< sc_uint< 32 > > src_6;
	sc_in< sc_uint< 32 > > src_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst_0;
	sc_out< sc_uint< 32 > > dst_1;
	sc_out< sc_uint< 32 > > dst_2;
	sc_out< sc_uint< 32 > > dst_3;
	sc_out< sc_uint< 32 > > dst_4;
	sc_out< sc_uint< 32 > > dst_5;
	sc_out< sc_uint< 32 > > dst_6;
	sc_out< sc_uint< 32 > > dst_7;


    const char* hdl_name() const { return "m_float2fix"; }
    
	m_float2fix( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src_0("src_0"),
		  src_1("src_1"),
		  src_2("src_2"),
		  src_3("src_3"),
		  src_4("src_4"),
		  src_5("src_5"),
		  src_6("src_6"),
		  src_7("src_7")
		  	,dst_valid("dst_valid")
		  	,dst_0("dst_0"),
		  dst_1("dst_1"),
		  dst_2("dst_2"),
		  dst_3("dst_3"),
		  dst_4("dst_4"),
		  dst_5("dst_5"),
		  dst_6("dst_6"),
		  dst_7("dst_7")
		  	

		
    {
    }

};

#endif /* _M_FLOAT2FIX_SC_FOREIGN_INCLUDED_ */
