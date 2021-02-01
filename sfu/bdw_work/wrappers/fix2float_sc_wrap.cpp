/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* This file is used to wrap the three different versions of the DUT
* block called "fix2float". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"fix2float_sc_wrap.h"
#include	"fix2float_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void fix2float_wrapper::InitInstances(  )
{
	
            
    fix2float0 = new fix2float( "fix2float" );

    fix2float0->clk(clk);
    fix2float0->rstn(rstn);
    fix2float0->enable(enable);
    fix2float0->fraction_len(fraction_len);
    fix2float0->src_valid(src_valid);
    fix2float0->src(src);
    fix2float0->dst_valid(dst_valid);
    fix2float0->dst(dst);

}

void fix2float_wrapper::InitThreads()
{
    
}

void fix2float_wrapper::DeleteInstances()
{
    if (fix2float0)
    {
        delete fix2float0;
        fix2float0 = 0;
    }
}

