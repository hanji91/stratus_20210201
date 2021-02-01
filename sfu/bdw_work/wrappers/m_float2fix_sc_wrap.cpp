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
* block called "m_float2fix". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"m_float2fix_sc_wrap.h"
#include	"m_float2fix_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void m_float2fix_wrapper::InitInstances(  )
{
	
            
    m_float2fix0 = new m_float2fix( "m_float2fix" );

    m_float2fix0->clk(clk);
    m_float2fix0->rstn(rstn);
    m_float2fix0->src_valid(src_valid);
    m_float2fix0->src_0(src[0]);
    m_float2fix0->src_1(src[1]);
    m_float2fix0->src_2(src[2]);
    m_float2fix0->src_3(src[3]);
    m_float2fix0->src_4(src[4]);
    m_float2fix0->src_5(src[5]);
    m_float2fix0->src_6(src[6]);
    m_float2fix0->src_7(src[7]);
    m_float2fix0->dst_valid(dst_valid);
    m_float2fix0->dst_0(dst[0]);
    m_float2fix0->dst_1(dst[1]);
    m_float2fix0->dst_2(dst[2]);
    m_float2fix0->dst_3(dst[3]);
    m_float2fix0->dst_4(dst[4]);
    m_float2fix0->dst_5(dst[5]);
    m_float2fix0->dst_6(dst[6]);
    m_float2fix0->dst_7(dst[7]);

}

void m_float2fix_wrapper::InitThreads()
{
    
}

void m_float2fix_wrapper::DeleteInstances()
{
    if (m_float2fix0)
    {
        delete m_float2fix0;
        m_float2fix0 = 0;
    }
}

