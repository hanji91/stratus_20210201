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
* This file contains the float2fix_type_wrapper module
* for use in the verilog verification wrapper float2fix_vlwrapper.v
* It creats an instance of the float2fix module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "float2fix_type_wrapper.h"


SC_MODULE_EXPORT(float2fix_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void float2fix_type_wrapper::InitInstances()
{
    float2fix0 = new float2fix( "float2fix" );

    float2fix0->clk(clk);
    float2fix0->rstn(rstn);
    float2fix0->src_valid(src_valid);
    float2fix0->src(src);
    float2fix0->dst_valid(dst_valid);
    float2fix0->dst(dst);

}

void float2fix_type_wrapper::InitThreads()
{
    
}

void float2fix_type_wrapper::DeleteInstances()
{
        delete float2fix0;
        float2fix0 = 0;
}

