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
* This file contains the finish_gen_type_wrapper module
* for use in the verilog verification wrapper finish_gen_vlwrapper.v
* It creats an instance of the finish_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "finish_gen_type_wrapper.h"


SC_MODULE_EXPORT(finish_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void finish_gen_type_wrapper::InitInstances()
{
    finish_gen0 = new finish_gen( "finish_gen" );

    finish_gen0->clk(clk);
    finish_gen0->rstn(rstn);
    finish_gen0->enable(enable);
    finish_gen0->clear(clear);
    finish_gen0->cnt_enable(cnt_enable);
    finish_gen0->total_num(total_num);
    finish_gen0->finish(finish);

}

void finish_gen_type_wrapper::InitThreads()
{
    
}

void finish_gen_type_wrapper::DeleteInstances()
{
        delete finish_gen0;
        finish_gen0 = 0;
}

