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
* block called "bias_add". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"bias_add_sc_wrap.h"
#include	"bias_add_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void bias_add_wrapper::InitInstances(  )
{
	
            
    bias_add0 = new bias_add( "bias_add" );

    bias_add0->clk(clk);
    bias_add0->rstn(rstn);
    bias_add0->enable(enable);
    bias_add0->src_valid(src_valid);
    bias_add0->src_0(src[0]);
    bias_add0->src_1(src[1]);
    bias_add0->src_2(src[2]);
    bias_add0->src_3(src[3]);
    bias_add0->src_4(src[4]);
    bias_add0->src_5(src[5]);
    bias_add0->src_6(src[6]);
    bias_add0->src_7(src[7]);
    bias_add0->bias_data(bias_data);
    bias_add0->dst_valid(dst_valid);
    bias_add0->dst_0(dst[0]);
    bias_add0->dst_1(dst[1]);
    bias_add0->dst_2(dst[2]);
    bias_add0->dst_3(dst[3]);
    bias_add0->dst_4(dst[4]);
    bias_add0->dst_5(dst[5]);
    bias_add0->dst_6(dst[6]);
    bias_add0->dst_7(dst[7]);

}

void bias_add_wrapper::InitThreads()
{
    
}

void bias_add_wrapper::DeleteInstances()
{
    if (bias_add0)
    {
        delete bias_add0;
        bias_add0 = 0;
    }
}

