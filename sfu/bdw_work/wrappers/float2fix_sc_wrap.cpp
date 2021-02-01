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
* block called "float2fix". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"float2fix_sc_wrap.h"
#include	"float2fix_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void float2fix_wrapper::InitInstances(  )
{
	
            
    float2fix0 = new float2fix( "float2fix" );

    float2fix0->clk(clk);
    float2fix0->rstn(rstn);
    float2fix0->src_valid(src_valid);
    float2fix0->src(src);
    float2fix0->dst_valid(dst_valid);
    float2fix0->dst(dst);

}

void float2fix_wrapper::InitThreads()
{
    
}

void float2fix_wrapper::DeleteInstances()
{
    if (float2fix0)
    {
        delete float2fix0;
        float2fix0 = 0;
    }
}

