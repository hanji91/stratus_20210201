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
* This file contains the mac_type_wrapper module
* for use in the verilog verification wrapper mac_vlwrapper.v
* It creats an instance of the mac module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "mac_type_wrapper.h"


SC_MODULE_EXPORT(mac_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void mac_type_wrapper::InitInstances()
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

void mac_type_wrapper::InitThreads()
{
    
}

void mac_type_wrapper::DeleteInstances()
{
        delete mac0;
        mac0 = 0;
}

