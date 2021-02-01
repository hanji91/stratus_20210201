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
* This file contains the fix2float_type_wrapper module
* for use in the verilog verification wrapper fix2float_vlwrapper.v
* It creats an instance of the fix2float module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "fix2float_type_wrapper.h"


SC_MODULE_EXPORT(fix2float_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void fix2float_type_wrapper::InitInstances()
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

void fix2float_type_wrapper::InitThreads()
{
    
}

void fix2float_type_wrapper::DeleteInstances()
{
        delete fix2float0;
        fix2float0 = 0;
}

