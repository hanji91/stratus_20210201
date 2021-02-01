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
* block called "mac". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"mac_sc_wrap.h"
#include	"mac_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void mac_wrapper::InitInstances(  )
{
	
            
    mac0 = new mac( "mac" );

    mac0->clk(clk);
    mac0->rstn(rstn);
    mac0->init(init);
    mac0->clear(clear);
    mac0->src_vld(src_vld);
    mac0->src_0(src_0);
    mac0->src_1(src_1);
    mac0->acc(acc);
    mac0->src_1_1d(src_1_1d);

}

void mac_wrapper::InitThreads()
{
    
}

void mac_wrapper::DeleteInstances()
{
    if (mac0)
    {
        delete mac0;
        mac0 = 0;
    }
}

