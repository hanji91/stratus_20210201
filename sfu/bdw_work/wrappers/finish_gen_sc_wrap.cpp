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
* block called "finish_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"finish_gen_sc_wrap.h"
#include	"finish_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void finish_gen_wrapper::InitInstances(  )
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

void finish_gen_wrapper::InitThreads()
{
    
}

void finish_gen_wrapper::DeleteInstances()
{
    if (finish_gen0)
    {
        delete finish_gen0;
        finish_gen0 = 0;
    }
}

