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
* block called "relu_offset_float". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)










#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"relu_offset_float_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_relu_offset_float)

#define BDW_AUTO_KNOWN 1 


#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#undef fp_cmp
#define fp_cmp fp_cmp_wrapper_r

#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef relu_offset_float
#define relu_offset_float relu_offset_float_rtl
#	include	"relu_offset_float_rtl.cpp"
#undef relu_offset_float


#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#undef fp_cmp

#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"relu_offset_float_coware.h"
#else
#include	"relu_offset_float_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "relu_offset_float_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"relu_offset_float.cpp"


#define		relu_offset_float_INTERNAL


#include	"relu_offset_float_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
relu_offset_float_cycsim* (*relu_offset_float_cycsim_factory_p)() = 0;

#define MAX_SIMCONFIG_LENGTH 128

#if BDW_WRITEFSDB == 1

#if defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102
#include "fsdb_nc_mix.h"
#else
#if SYSTEMC_VERSION >= 20120701
#include "fsdb_osci.h"
#else
#include "fsdb_trace_file.h"
#endif
#endif 
#if BDW_USE_SCV
#include "scv.h"
#include "scv_tr_fsdb.h"
#endif

#endif /* BDW_WRITEFSDB */

inline void esc_open_fsdb_trace( const char *file_name = "systemc" );
inline void esc_close_fsdb_trace();
inline void esc_close_fsdb_scv_trace();

// The following threads are used to connect structured ports to the actual
// RTL ports
void relu_offset_float_wrapper::thread_src_man_0()
{
   src_man_0 = src[0].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_0()
{
   src_exp_0 = src[0].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_0()
{
   src_sign_0 = src[0].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_1()
{
   src_man_1 = src[1].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_1()
{
   src_exp_1 = src[1].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_1()
{
   src_sign_1 = src[1].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_2()
{
   src_man_2 = src[2].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_2()
{
   src_exp_2 = src[2].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_2()
{
   src_sign_2 = src[2].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_3()
{
   src_man_3 = src[3].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_3()
{
   src_exp_3 = src[3].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_3()
{
   src_sign_3 = src[3].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_4()
{
   src_man_4 = src[4].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_4()
{
   src_exp_4 = src[4].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_4()
{
   src_sign_4 = src[4].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_5()
{
   src_man_5 = src[5].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_5()
{
   src_exp_5 = src[5].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_5()
{
   src_sign_5 = src[5].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_6()
{
   src_man_6 = src[6].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_6()
{
   src_exp_6 = src[6].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_6()
{
   src_sign_6 = src[6].read().sign;
}
void relu_offset_float_wrapper::thread_src_man_7()
{
   src_man_7 = src[7].read().man;
}
void relu_offset_float_wrapper::thread_src_exp_7()
{
   src_exp_7 = src[7].read().exp;
}
void relu_offset_float_wrapper::thread_src_sign_7()
{
   src_sign_7 = src[7].read().sign;
}
void relu_offset_float_wrapper::thread_offset_man()
{
   offset_man = offset.read().man;
}
void relu_offset_float_wrapper::thread_offset_exp()
{
   offset_exp = offset.read().exp;
}
void relu_offset_float_wrapper::thread_offset_sign()
{
   offset_sign = offset.read().sign;
}
void relu_offset_float_wrapper::thread_dst_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_0.read();
   tmp.exp = dst_exp_0.read();
   tmp.sign = dst_sign_0.read();
   dst[0].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_1.read();
   tmp.exp = dst_exp_1.read();
   tmp.sign = dst_sign_1.read();
   dst[1].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_2.read();
   tmp.exp = dst_exp_2.read();
   tmp.sign = dst_sign_2.read();
   dst[2].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_3.read();
   tmp.exp = dst_exp_3.read();
   tmp.sign = dst_sign_3.read();
   dst[3].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_4.read();
   tmp.exp = dst_exp_4.read();
   tmp.sign = dst_sign_4.read();
   dst[4].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_5.read();
   tmp.exp = dst_exp_5.read();
   tmp.sign = dst_sign_5.read();
   dst[5].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_6.read();
   tmp.exp = dst_exp_6.read();
   tmp.sign = dst_sign_6.read();
   dst[6].write(tmp);
}
void relu_offset_float_wrapper::thread_dst_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_7.read();
   tmp.exp = dst_exp_7.read();
   tmp.sign = dst_sign_7.read();
   dst[7].write(tmp);
}


const char * relu_offset_float_wrapper::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum relu_offset_float_wrapper::Representation relu_offset_float_wrapper::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "relu_offset_float", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound ) {
		return BDWRep_Behavioral;
	} else if ( err == qbhErrorBadInstName ) {
		if (instName && *instName) {
			const char* leaf = strrchr( instName, '.' ) + 1;
			esc_report_error( esc_warning, "Instance names were specified for module '%s' in simConfig '%s', but they did not "
			                    "match the actal instance names in the RTL.  Try '%s' or '%s'. Simulating '%s' as BEH.\n",
								 "relu_offset_float", simConfig, instName, leaf,  "relu_offset_float" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void relu_offset_float_wrapper::InitInstances(  )
{
    enum relu_offset_float_wrapper::Representation rep =
		relu_offset_float_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "relu_offset_float" );
	esc_log_representation( "relu_offset_float", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    relu_offset_float_cosim0 = new relu_offset_float_cosim( "relu_offset_float" );

		    relu_offset_float_cosim0->clk(clk);
		    relu_offset_float_cosim0->rstn(rstn);
		    relu_offset_float_cosim0->enable(enable);
		    relu_offset_float_cosim0->src_valid(src_valid);
		    relu_offset_float_cosim0->src_man_0(src_man_0);
		    relu_offset_float_cosim0->src_exp_0(src_exp_0);
		    relu_offset_float_cosim0->src_sign_0(src_sign_0);
		    relu_offset_float_cosim0->src_man_1(src_man_1);
		    relu_offset_float_cosim0->src_exp_1(src_exp_1);
		    relu_offset_float_cosim0->src_sign_1(src_sign_1);
		    relu_offset_float_cosim0->src_man_2(src_man_2);
		    relu_offset_float_cosim0->src_exp_2(src_exp_2);
		    relu_offset_float_cosim0->src_sign_2(src_sign_2);
		    relu_offset_float_cosim0->src_man_3(src_man_3);
		    relu_offset_float_cosim0->src_exp_3(src_exp_3);
		    relu_offset_float_cosim0->src_sign_3(src_sign_3);
		    relu_offset_float_cosim0->src_man_4(src_man_4);
		    relu_offset_float_cosim0->src_exp_4(src_exp_4);
		    relu_offset_float_cosim0->src_sign_4(src_sign_4);
		    relu_offset_float_cosim0->src_man_5(src_man_5);
		    relu_offset_float_cosim0->src_exp_5(src_exp_5);
		    relu_offset_float_cosim0->src_sign_5(src_sign_5);
		    relu_offset_float_cosim0->src_man_6(src_man_6);
		    relu_offset_float_cosim0->src_exp_6(src_exp_6);
		    relu_offset_float_cosim0->src_sign_6(src_sign_6);
		    relu_offset_float_cosim0->src_man_7(src_man_7);
		    relu_offset_float_cosim0->src_exp_7(src_exp_7);
		    relu_offset_float_cosim0->src_sign_7(src_sign_7);
		    relu_offset_float_cosim0->offset_man(offset_man);
		    relu_offset_float_cosim0->offset_exp(offset_exp);
		    relu_offset_float_cosim0->offset_sign(offset_sign);
		    relu_offset_float_cosim0->dst_valid(dst_valid);
		    relu_offset_float_cosim0->dst_man_0(dst_man_0);
		    relu_offset_float_cosim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cosim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cosim0->dst_man_1(dst_man_1);
		    relu_offset_float_cosim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cosim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cosim0->dst_man_2(dst_man_2);
		    relu_offset_float_cosim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cosim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cosim0->dst_man_3(dst_man_3);
		    relu_offset_float_cosim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cosim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cosim0->dst_man_4(dst_man_4);
		    relu_offset_float_cosim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cosim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cosim0->dst_man_5(dst_man_5);
		    relu_offset_float_cosim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cosim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cosim0->dst_man_6(dst_man_6);
		    relu_offset_float_cosim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cosim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cosim0->dst_man_7(dst_man_7);
		    relu_offset_float_cosim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cosim0->dst_sign_7(dst_sign_7);

			break;
		case BDWRep_RTL_HDL:
		    relu_offset_float_cosim0 = new relu_offset_float_cosim( "relu_offset_float" );

		    relu_offset_float_cosim0->clk(clk);
		    relu_offset_float_cosim0->rstn(rstn);
		    relu_offset_float_cosim0->enable(enable);
		    relu_offset_float_cosim0->src_valid(src_valid);
		    relu_offset_float_cosim0->src_man_0(src_man_0);
		    relu_offset_float_cosim0->src_exp_0(src_exp_0);
		    relu_offset_float_cosim0->src_sign_0(src_sign_0);
		    relu_offset_float_cosim0->src_man_1(src_man_1);
		    relu_offset_float_cosim0->src_exp_1(src_exp_1);
		    relu_offset_float_cosim0->src_sign_1(src_sign_1);
		    relu_offset_float_cosim0->src_man_2(src_man_2);
		    relu_offset_float_cosim0->src_exp_2(src_exp_2);
		    relu_offset_float_cosim0->src_sign_2(src_sign_2);
		    relu_offset_float_cosim0->src_man_3(src_man_3);
		    relu_offset_float_cosim0->src_exp_3(src_exp_3);
		    relu_offset_float_cosim0->src_sign_3(src_sign_3);
		    relu_offset_float_cosim0->src_man_4(src_man_4);
		    relu_offset_float_cosim0->src_exp_4(src_exp_4);
		    relu_offset_float_cosim0->src_sign_4(src_sign_4);
		    relu_offset_float_cosim0->src_man_5(src_man_5);
		    relu_offset_float_cosim0->src_exp_5(src_exp_5);
		    relu_offset_float_cosim0->src_sign_5(src_sign_5);
		    relu_offset_float_cosim0->src_man_6(src_man_6);
		    relu_offset_float_cosim0->src_exp_6(src_exp_6);
		    relu_offset_float_cosim0->src_sign_6(src_sign_6);
		    relu_offset_float_cosim0->src_man_7(src_man_7);
		    relu_offset_float_cosim0->src_exp_7(src_exp_7);
		    relu_offset_float_cosim0->src_sign_7(src_sign_7);
		    relu_offset_float_cosim0->offset_man(offset_man);
		    relu_offset_float_cosim0->offset_exp(offset_exp);
		    relu_offset_float_cosim0->offset_sign(offset_sign);
		    relu_offset_float_cosim0->dst_valid(dst_valid);
		    relu_offset_float_cosim0->dst_man_0(dst_man_0);
		    relu_offset_float_cosim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cosim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cosim0->dst_man_1(dst_man_1);
		    relu_offset_float_cosim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cosim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cosim0->dst_man_2(dst_man_2);
		    relu_offset_float_cosim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cosim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cosim0->dst_man_3(dst_man_3);
		    relu_offset_float_cosim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cosim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cosim0->dst_man_4(dst_man_4);
		    relu_offset_float_cosim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cosim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cosim0->dst_man_5(dst_man_5);
		    relu_offset_float_cosim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cosim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cosim0->dst_man_6(dst_man_6);
		    relu_offset_float_cosim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cosim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cosim0->dst_man_7(dst_man_7);
		    relu_offset_float_cosim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cosim0->dst_sign_7(dst_sign_7);

			break;
        case BDWRep_CYC_HDL:
            if ( relu_offset_float_cycsim_factory_p )
                relu_offset_float_cycsim0 = relu_offset_float_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module relu_offset_float");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"relu_offset_float\"");

		    relu_offset_float_cycsim0->clk(clk);
		    relu_offset_float_cycsim0->rstn(rstn);
		    relu_offset_float_cycsim0->enable(enable);
		    relu_offset_float_cycsim0->src_valid(src_valid);
		    relu_offset_float_cycsim0->src_man_0(src_man_0);
		    relu_offset_float_cycsim0->src_exp_0(src_exp_0);
		    relu_offset_float_cycsim0->src_sign_0(src_sign_0);
		    relu_offset_float_cycsim0->src_man_1(src_man_1);
		    relu_offset_float_cycsim0->src_exp_1(src_exp_1);
		    relu_offset_float_cycsim0->src_sign_1(src_sign_1);
		    relu_offset_float_cycsim0->src_man_2(src_man_2);
		    relu_offset_float_cycsim0->src_exp_2(src_exp_2);
		    relu_offset_float_cycsim0->src_sign_2(src_sign_2);
		    relu_offset_float_cycsim0->src_man_3(src_man_3);
		    relu_offset_float_cycsim0->src_exp_3(src_exp_3);
		    relu_offset_float_cycsim0->src_sign_3(src_sign_3);
		    relu_offset_float_cycsim0->src_man_4(src_man_4);
		    relu_offset_float_cycsim0->src_exp_4(src_exp_4);
		    relu_offset_float_cycsim0->src_sign_4(src_sign_4);
		    relu_offset_float_cycsim0->src_man_5(src_man_5);
		    relu_offset_float_cycsim0->src_exp_5(src_exp_5);
		    relu_offset_float_cycsim0->src_sign_5(src_sign_5);
		    relu_offset_float_cycsim0->src_man_6(src_man_6);
		    relu_offset_float_cycsim0->src_exp_6(src_exp_6);
		    relu_offset_float_cycsim0->src_sign_6(src_sign_6);
		    relu_offset_float_cycsim0->src_man_7(src_man_7);
		    relu_offset_float_cycsim0->src_exp_7(src_exp_7);
		    relu_offset_float_cycsim0->src_sign_7(src_sign_7);
		    relu_offset_float_cycsim0->offset_man(offset_man);
		    relu_offset_float_cycsim0->offset_exp(offset_exp);
		    relu_offset_float_cycsim0->offset_sign(offset_sign);
		    relu_offset_float_cycsim0->dst_valid(dst_valid);
		    relu_offset_float_cycsim0->dst_man_0(dst_man_0);
		    relu_offset_float_cycsim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cycsim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cycsim0->dst_man_1(dst_man_1);
		    relu_offset_float_cycsim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cycsim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cycsim0->dst_man_2(dst_man_2);
		    relu_offset_float_cycsim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cycsim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cycsim0->dst_man_3(dst_man_3);
		    relu_offset_float_cycsim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cycsim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cycsim0->dst_man_4(dst_man_4);
		    relu_offset_float_cycsim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cycsim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cycsim0->dst_man_5(dst_man_5);
		    relu_offset_float_cycsim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cycsim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cycsim0->dst_man_6(dst_man_6);
		    relu_offset_float_cycsim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cycsim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cycsim0->dst_man_7(dst_man_7);
		    relu_offset_float_cycsim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cycsim0->dst_sign_7(dst_sign_7);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_relu_offset_float)
		case BDWRep_RTL_C:
		    relu_offset_float_rtl0 = new relu_offset_float_rtl( "relu_offset_float" );

		    relu_offset_float_rtl0->clk(clk);
		    relu_offset_float_rtl0->rstn(rstn);
		    relu_offset_float_rtl0->enable(enable);
		    relu_offset_float_rtl0->src_valid(src_valid);
		    relu_offset_float_rtl0->src_man_0(src_man_0);
		    relu_offset_float_rtl0->src_exp_0(src_exp_0);
		    relu_offset_float_rtl0->src_sign_0(src_sign_0);
		    relu_offset_float_rtl0->src_man_1(src_man_1);
		    relu_offset_float_rtl0->src_exp_1(src_exp_1);
		    relu_offset_float_rtl0->src_sign_1(src_sign_1);
		    relu_offset_float_rtl0->src_man_2(src_man_2);
		    relu_offset_float_rtl0->src_exp_2(src_exp_2);
		    relu_offset_float_rtl0->src_sign_2(src_sign_2);
		    relu_offset_float_rtl0->src_man_3(src_man_3);
		    relu_offset_float_rtl0->src_exp_3(src_exp_3);
		    relu_offset_float_rtl0->src_sign_3(src_sign_3);
		    relu_offset_float_rtl0->src_man_4(src_man_4);
		    relu_offset_float_rtl0->src_exp_4(src_exp_4);
		    relu_offset_float_rtl0->src_sign_4(src_sign_4);
		    relu_offset_float_rtl0->src_man_5(src_man_5);
		    relu_offset_float_rtl0->src_exp_5(src_exp_5);
		    relu_offset_float_rtl0->src_sign_5(src_sign_5);
		    relu_offset_float_rtl0->src_man_6(src_man_6);
		    relu_offset_float_rtl0->src_exp_6(src_exp_6);
		    relu_offset_float_rtl0->src_sign_6(src_sign_6);
		    relu_offset_float_rtl0->src_man_7(src_man_7);
		    relu_offset_float_rtl0->src_exp_7(src_exp_7);
		    relu_offset_float_rtl0->src_sign_7(src_sign_7);
		    relu_offset_float_rtl0->offset_man(offset_man);
		    relu_offset_float_rtl0->offset_exp(offset_exp);
		    relu_offset_float_rtl0->offset_sign(offset_sign);
		    relu_offset_float_rtl0->dst_valid(dst_valid);
		    relu_offset_float_rtl0->dst_man_0(dst_man_0);
		    relu_offset_float_rtl0->dst_exp_0(dst_exp_0);
		    relu_offset_float_rtl0->dst_sign_0(dst_sign_0);
		    relu_offset_float_rtl0->dst_man_1(dst_man_1);
		    relu_offset_float_rtl0->dst_exp_1(dst_exp_1);
		    relu_offset_float_rtl0->dst_sign_1(dst_sign_1);
		    relu_offset_float_rtl0->dst_man_2(dst_man_2);
		    relu_offset_float_rtl0->dst_exp_2(dst_exp_2);
		    relu_offset_float_rtl0->dst_sign_2(dst_sign_2);
		    relu_offset_float_rtl0->dst_man_3(dst_man_3);
		    relu_offset_float_rtl0->dst_exp_3(dst_exp_3);
		    relu_offset_float_rtl0->dst_sign_3(dst_sign_3);
		    relu_offset_float_rtl0->dst_man_4(dst_man_4);
		    relu_offset_float_rtl0->dst_exp_4(dst_exp_4);
		    relu_offset_float_rtl0->dst_sign_4(dst_sign_4);
		    relu_offset_float_rtl0->dst_man_5(dst_man_5);
		    relu_offset_float_rtl0->dst_exp_5(dst_exp_5);
		    relu_offset_float_rtl0->dst_sign_5(dst_sign_5);
		    relu_offset_float_rtl0->dst_man_6(dst_man_6);
		    relu_offset_float_rtl0->dst_exp_6(dst_exp_6);
		    relu_offset_float_rtl0->dst_sign_6(dst_sign_6);
		    relu_offset_float_rtl0->dst_man_7(dst_man_7);
		    relu_offset_float_rtl0->dst_exp_7(dst_exp_7);
		    relu_offset_float_rtl0->dst_sign_7(dst_sign_7);


			{
			const char *simConfig = relu_offset_float_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    relu_offset_float0 = new relu_offset_float( "relu_offset_float" );

		    relu_offset_float0->clk(clk);
		    relu_offset_float0->rstn(rstn);
		    relu_offset_float0->enable(enable);
		    relu_offset_float0->src_valid(src_valid);
		    relu_offset_float0->src[0](src[0]);
		    relu_offset_float0->src[1](src[1]);
		    relu_offset_float0->src[2](src[2]);
		    relu_offset_float0->src[3](src[3]);
		    relu_offset_float0->src[4](src[4]);
		    relu_offset_float0->src[5](src[5]);
		    relu_offset_float0->src[6](src[6]);
		    relu_offset_float0->src[7](src[7]);
		    relu_offset_float0->offset(offset);
		    relu_offset_float0->dst_valid(dst_valid);
		    relu_offset_float0->dst[0](dst[0]);
		    relu_offset_float0->dst[1](dst[1]);
		    relu_offset_float0->dst[2](dst[2]);
		    relu_offset_float0->dst[3](dst[3]);
		    relu_offset_float0->dst[4](dst[4]);
		    relu_offset_float0->dst[5](dst[5]);
		    relu_offset_float0->dst[6](dst[6]);
		    relu_offset_float0->dst[7](dst[7]);


			{
			const char *simConfig = relu_offset_float_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void relu_offset_float_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		SC_METHOD(thread_src_man_0);
		  sensitive << src[0];
		SC_METHOD(thread_src_exp_0);
		  sensitive << src[0];
		SC_METHOD(thread_src_sign_0);
		  sensitive << src[0];
		SC_METHOD(thread_src_man_1);
		  sensitive << src[1];
		SC_METHOD(thread_src_exp_1);
		  sensitive << src[1];
		SC_METHOD(thread_src_sign_1);
		  sensitive << src[1];
		SC_METHOD(thread_src_man_2);
		  sensitive << src[2];
		SC_METHOD(thread_src_exp_2);
		  sensitive << src[2];
		SC_METHOD(thread_src_sign_2);
		  sensitive << src[2];
		SC_METHOD(thread_src_man_3);
		  sensitive << src[3];
		SC_METHOD(thread_src_exp_3);
		  sensitive << src[3];
		SC_METHOD(thread_src_sign_3);
		  sensitive << src[3];
		SC_METHOD(thread_src_man_4);
		  sensitive << src[4];
		SC_METHOD(thread_src_exp_4);
		  sensitive << src[4];
		SC_METHOD(thread_src_sign_4);
		  sensitive << src[4];
		SC_METHOD(thread_src_man_5);
		  sensitive << src[5];
		SC_METHOD(thread_src_exp_5);
		  sensitive << src[5];
		SC_METHOD(thread_src_sign_5);
		  sensitive << src[5];
		SC_METHOD(thread_src_man_6);
		  sensitive << src[6];
		SC_METHOD(thread_src_exp_6);
		  sensitive << src[6];
		SC_METHOD(thread_src_sign_6);
		  sensitive << src[6];
		SC_METHOD(thread_src_man_7);
		  sensitive << src[7];
		SC_METHOD(thread_src_exp_7);
		  sensitive << src[7];
		SC_METHOD(thread_src_sign_7);
		  sensitive << src[7];
		SC_METHOD(thread_offset_man);
		  sensitive << offset;
		SC_METHOD(thread_offset_exp);
		  sensitive << offset;
		SC_METHOD(thread_offset_sign);
		  sensitive << offset;
		SC_METHOD(thread_dst_0);
		  sensitive << dst_man_0;
		  sensitive << dst_exp_0;
		  sensitive << dst_sign_0;
		SC_METHOD(thread_dst_1);
		  sensitive << dst_man_1;
		  sensitive << dst_exp_1;
		  sensitive << dst_sign_1;
		SC_METHOD(thread_dst_2);
		  sensitive << dst_man_2;
		  sensitive << dst_exp_2;
		  sensitive << dst_sign_2;
		SC_METHOD(thread_dst_3);
		  sensitive << dst_man_3;
		  sensitive << dst_exp_3;
		  sensitive << dst_sign_3;
		SC_METHOD(thread_dst_4);
		  sensitive << dst_man_4;
		  sensitive << dst_exp_4;
		  sensitive << dst_sign_4;
		SC_METHOD(thread_dst_5);
		  sensitive << dst_man_5;
		  sensitive << dst_exp_5;
		  sensitive << dst_sign_5;
		SC_METHOD(thread_dst_6);
		  sensitive << dst_man_6;
		  sensitive << dst_exp_6;
		  sensitive << dst_sign_6;
		SC_METHOD(thread_dst_7);
		  sensitive << dst_man_7;
		  sensitive << dst_exp_7;
		  sensitive << dst_sign_7;

	}
}

void relu_offset_float_wrapper::start_of_simulation()
{

#include <relu_offset_float_trace.h>

    esc_multiple_writers_warning();
}

void relu_offset_float_wrapper::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void relu_offset_float_wrapper::end_of_simulation()
{
	CloseTrace();
}



void relu_offset_float_wrapper::DeleteInstances()
{
    if (relu_offset_float0)
    {
        delete relu_offset_float0;
        relu_offset_float0 = 0;
    }
    if (relu_offset_float_cosim0)
    {
        delete relu_offset_float_cosim0;
        relu_offset_float_cosim0 = 0;
    }
    if (relu_offset_float_cycsim0)
    {
        delete relu_offset_float_cycsim0;
        relu_offset_float_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_relu_offset_float)
    if (relu_offset_float_rtl0)
    {
        delete relu_offset_float_rtl0;
        relu_offset_float_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void relu_offset_float_wrapper_r::thread_src_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_0.read();
   tmp.exp = src_exp_0.read();
   tmp.sign = src_sign_0.read();
   src[0].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_1.read();
   tmp.exp = src_exp_1.read();
   tmp.sign = src_sign_1.read();
   src[1].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_2.read();
   tmp.exp = src_exp_2.read();
   tmp.sign = src_sign_2.read();
   src[2].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_3.read();
   tmp.exp = src_exp_3.read();
   tmp.sign = src_sign_3.read();
   src[3].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_4.read();
   tmp.exp = src_exp_4.read();
   tmp.sign = src_sign_4.read();
   src[4].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_5.read();
   tmp.exp = src_exp_5.read();
   tmp.sign = src_sign_5.read();
   src[5].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_6.read();
   tmp.exp = src_exp_6.read();
   tmp.sign = src_sign_6.read();
   src[6].write(tmp);
}
void relu_offset_float_wrapper_r::thread_src_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_7.read();
   tmp.exp = src_exp_7.read();
   tmp.sign = src_sign_7.read();
   src[7].write(tmp);
}
void relu_offset_float_wrapper_r::thread_offset()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = offset_man.read();
   tmp.exp = offset_exp.read();
   tmp.sign = offset_sign.read();
   offset.write(tmp);
}
void relu_offset_float_wrapper_r::thread_dst_man_0()
{
   dst_man_0 = dst[0].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_0()
{
   dst_exp_0 = dst[0].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_0()
{
   dst_sign_0 = dst[0].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_1()
{
   dst_man_1 = dst[1].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_1()
{
   dst_exp_1 = dst[1].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_1()
{
   dst_sign_1 = dst[1].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_2()
{
   dst_man_2 = dst[2].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_2()
{
   dst_exp_2 = dst[2].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_2()
{
   dst_sign_2 = dst[2].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_3()
{
   dst_man_3 = dst[3].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_3()
{
   dst_exp_3 = dst[3].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_3()
{
   dst_sign_3 = dst[3].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_4()
{
   dst_man_4 = dst[4].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_4()
{
   dst_exp_4 = dst[4].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_4()
{
   dst_sign_4 = dst[4].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_5()
{
   dst_man_5 = dst[5].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_5()
{
   dst_exp_5 = dst[5].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_5()
{
   dst_sign_5 = dst[5].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_6()
{
   dst_man_6 = dst[6].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_6()
{
   dst_exp_6 = dst[6].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_6()
{
   dst_sign_6 = dst[6].read().sign;
}
void relu_offset_float_wrapper_r::thread_dst_man_7()
{
   dst_man_7 = dst[7].read().man;
}
void relu_offset_float_wrapper_r::thread_dst_exp_7()
{
   dst_exp_7 = dst[7].read().exp;
}
void relu_offset_float_wrapper_r::thread_dst_sign_7()
{
   dst_sign_7 = dst[7].read().sign;
}


const char * relu_offset_float_wrapper_r::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum relu_offset_float_wrapper_r::Representation relu_offset_float_wrapper_r::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "relu_offset_float", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound )
		return BDWRep_Behavioral;

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void relu_offset_float_wrapper_r::InitInstances()
{
    enum relu_offset_float_wrapper_r::Representation rep =
		relu_offset_float_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "relu_offset_float" );
	esc_log_representation( "relu_offset_float", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    relu_offset_float_cosim0 = new relu_offset_float_cosim( "relu_offset_float" );

		    relu_offset_float_cosim0->clk(clk);
		    relu_offset_float_cosim0->rstn(rstn);
		    relu_offset_float_cosim0->enable(enable);
		    relu_offset_float_cosim0->src_valid(src_valid);
		    relu_offset_float_cosim0->src_man_0(src_man_0);
		    relu_offset_float_cosim0->src_exp_0(src_exp_0);
		    relu_offset_float_cosim0->src_sign_0(src_sign_0);
		    relu_offset_float_cosim0->src_man_1(src_man_1);
		    relu_offset_float_cosim0->src_exp_1(src_exp_1);
		    relu_offset_float_cosim0->src_sign_1(src_sign_1);
		    relu_offset_float_cosim0->src_man_2(src_man_2);
		    relu_offset_float_cosim0->src_exp_2(src_exp_2);
		    relu_offset_float_cosim0->src_sign_2(src_sign_2);
		    relu_offset_float_cosim0->src_man_3(src_man_3);
		    relu_offset_float_cosim0->src_exp_3(src_exp_3);
		    relu_offset_float_cosim0->src_sign_3(src_sign_3);
		    relu_offset_float_cosim0->src_man_4(src_man_4);
		    relu_offset_float_cosim0->src_exp_4(src_exp_4);
		    relu_offset_float_cosim0->src_sign_4(src_sign_4);
		    relu_offset_float_cosim0->src_man_5(src_man_5);
		    relu_offset_float_cosim0->src_exp_5(src_exp_5);
		    relu_offset_float_cosim0->src_sign_5(src_sign_5);
		    relu_offset_float_cosim0->src_man_6(src_man_6);
		    relu_offset_float_cosim0->src_exp_6(src_exp_6);
		    relu_offset_float_cosim0->src_sign_6(src_sign_6);
		    relu_offset_float_cosim0->src_man_7(src_man_7);
		    relu_offset_float_cosim0->src_exp_7(src_exp_7);
		    relu_offset_float_cosim0->src_sign_7(src_sign_7);
		    relu_offset_float_cosim0->offset_man(offset_man);
		    relu_offset_float_cosim0->offset_exp(offset_exp);
		    relu_offset_float_cosim0->offset_sign(offset_sign);
		    relu_offset_float_cosim0->dst_valid(dst_valid);
		    relu_offset_float_cosim0->dst_man_0(dst_man_0);
		    relu_offset_float_cosim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cosim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cosim0->dst_man_1(dst_man_1);
		    relu_offset_float_cosim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cosim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cosim0->dst_man_2(dst_man_2);
		    relu_offset_float_cosim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cosim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cosim0->dst_man_3(dst_man_3);
		    relu_offset_float_cosim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cosim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cosim0->dst_man_4(dst_man_4);
		    relu_offset_float_cosim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cosim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cosim0->dst_man_5(dst_man_5);
		    relu_offset_float_cosim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cosim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cosim0->dst_man_6(dst_man_6);
		    relu_offset_float_cosim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cosim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cosim0->dst_man_7(dst_man_7);
		    relu_offset_float_cosim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cosim0->dst_sign_7(dst_sign_7);

			break;
		case BDWRep_RTL_HDL:
		    relu_offset_float_cosim0 = new relu_offset_float_cosim( "relu_offset_float" );

		    relu_offset_float_cosim0->clk(clk);
		    relu_offset_float_cosim0->rstn(rstn);
		    relu_offset_float_cosim0->enable(enable);
		    relu_offset_float_cosim0->src_valid(src_valid);
		    relu_offset_float_cosim0->src_man_0(src_man_0);
		    relu_offset_float_cosim0->src_exp_0(src_exp_0);
		    relu_offset_float_cosim0->src_sign_0(src_sign_0);
		    relu_offset_float_cosim0->src_man_1(src_man_1);
		    relu_offset_float_cosim0->src_exp_1(src_exp_1);
		    relu_offset_float_cosim0->src_sign_1(src_sign_1);
		    relu_offset_float_cosim0->src_man_2(src_man_2);
		    relu_offset_float_cosim0->src_exp_2(src_exp_2);
		    relu_offset_float_cosim0->src_sign_2(src_sign_2);
		    relu_offset_float_cosim0->src_man_3(src_man_3);
		    relu_offset_float_cosim0->src_exp_3(src_exp_3);
		    relu_offset_float_cosim0->src_sign_3(src_sign_3);
		    relu_offset_float_cosim0->src_man_4(src_man_4);
		    relu_offset_float_cosim0->src_exp_4(src_exp_4);
		    relu_offset_float_cosim0->src_sign_4(src_sign_4);
		    relu_offset_float_cosim0->src_man_5(src_man_5);
		    relu_offset_float_cosim0->src_exp_5(src_exp_5);
		    relu_offset_float_cosim0->src_sign_5(src_sign_5);
		    relu_offset_float_cosim0->src_man_6(src_man_6);
		    relu_offset_float_cosim0->src_exp_6(src_exp_6);
		    relu_offset_float_cosim0->src_sign_6(src_sign_6);
		    relu_offset_float_cosim0->src_man_7(src_man_7);
		    relu_offset_float_cosim0->src_exp_7(src_exp_7);
		    relu_offset_float_cosim0->src_sign_7(src_sign_7);
		    relu_offset_float_cosim0->offset_man(offset_man);
		    relu_offset_float_cosim0->offset_exp(offset_exp);
		    relu_offset_float_cosim0->offset_sign(offset_sign);
		    relu_offset_float_cosim0->dst_valid(dst_valid);
		    relu_offset_float_cosim0->dst_man_0(dst_man_0);
		    relu_offset_float_cosim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cosim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cosim0->dst_man_1(dst_man_1);
		    relu_offset_float_cosim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cosim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cosim0->dst_man_2(dst_man_2);
		    relu_offset_float_cosim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cosim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cosim0->dst_man_3(dst_man_3);
		    relu_offset_float_cosim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cosim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cosim0->dst_man_4(dst_man_4);
		    relu_offset_float_cosim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cosim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cosim0->dst_man_5(dst_man_5);
		    relu_offset_float_cosim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cosim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cosim0->dst_man_6(dst_man_6);
		    relu_offset_float_cosim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cosim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cosim0->dst_man_7(dst_man_7);
		    relu_offset_float_cosim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cosim0->dst_sign_7(dst_sign_7);

			break;
        case BDWRep_CYC_HDL:
            if ( relu_offset_float_cycsim_factory_p )
                relu_offset_float_cycsim0 = relu_offset_float_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module relu_offset_float");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"relu_offset_float\"");

		    relu_offset_float_cycsim0->clk(clk);
		    relu_offset_float_cycsim0->rstn(rstn);
		    relu_offset_float_cycsim0->enable(enable);
		    relu_offset_float_cycsim0->src_valid(src_valid);
		    relu_offset_float_cycsim0->src_man_0(src_man_0);
		    relu_offset_float_cycsim0->src_exp_0(src_exp_0);
		    relu_offset_float_cycsim0->src_sign_0(src_sign_0);
		    relu_offset_float_cycsim0->src_man_1(src_man_1);
		    relu_offset_float_cycsim0->src_exp_1(src_exp_1);
		    relu_offset_float_cycsim0->src_sign_1(src_sign_1);
		    relu_offset_float_cycsim0->src_man_2(src_man_2);
		    relu_offset_float_cycsim0->src_exp_2(src_exp_2);
		    relu_offset_float_cycsim0->src_sign_2(src_sign_2);
		    relu_offset_float_cycsim0->src_man_3(src_man_3);
		    relu_offset_float_cycsim0->src_exp_3(src_exp_3);
		    relu_offset_float_cycsim0->src_sign_3(src_sign_3);
		    relu_offset_float_cycsim0->src_man_4(src_man_4);
		    relu_offset_float_cycsim0->src_exp_4(src_exp_4);
		    relu_offset_float_cycsim0->src_sign_4(src_sign_4);
		    relu_offset_float_cycsim0->src_man_5(src_man_5);
		    relu_offset_float_cycsim0->src_exp_5(src_exp_5);
		    relu_offset_float_cycsim0->src_sign_5(src_sign_5);
		    relu_offset_float_cycsim0->src_man_6(src_man_6);
		    relu_offset_float_cycsim0->src_exp_6(src_exp_6);
		    relu_offset_float_cycsim0->src_sign_6(src_sign_6);
		    relu_offset_float_cycsim0->src_man_7(src_man_7);
		    relu_offset_float_cycsim0->src_exp_7(src_exp_7);
		    relu_offset_float_cycsim0->src_sign_7(src_sign_7);
		    relu_offset_float_cycsim0->offset_man(offset_man);
		    relu_offset_float_cycsim0->offset_exp(offset_exp);
		    relu_offset_float_cycsim0->offset_sign(offset_sign);
		    relu_offset_float_cycsim0->dst_valid(dst_valid);
		    relu_offset_float_cycsim0->dst_man_0(dst_man_0);
		    relu_offset_float_cycsim0->dst_exp_0(dst_exp_0);
		    relu_offset_float_cycsim0->dst_sign_0(dst_sign_0);
		    relu_offset_float_cycsim0->dst_man_1(dst_man_1);
		    relu_offset_float_cycsim0->dst_exp_1(dst_exp_1);
		    relu_offset_float_cycsim0->dst_sign_1(dst_sign_1);
		    relu_offset_float_cycsim0->dst_man_2(dst_man_2);
		    relu_offset_float_cycsim0->dst_exp_2(dst_exp_2);
		    relu_offset_float_cycsim0->dst_sign_2(dst_sign_2);
		    relu_offset_float_cycsim0->dst_man_3(dst_man_3);
		    relu_offset_float_cycsim0->dst_exp_3(dst_exp_3);
		    relu_offset_float_cycsim0->dst_sign_3(dst_sign_3);
		    relu_offset_float_cycsim0->dst_man_4(dst_man_4);
		    relu_offset_float_cycsim0->dst_exp_4(dst_exp_4);
		    relu_offset_float_cycsim0->dst_sign_4(dst_sign_4);
		    relu_offset_float_cycsim0->dst_man_5(dst_man_5);
		    relu_offset_float_cycsim0->dst_exp_5(dst_exp_5);
		    relu_offset_float_cycsim0->dst_sign_5(dst_sign_5);
		    relu_offset_float_cycsim0->dst_man_6(dst_man_6);
		    relu_offset_float_cycsim0->dst_exp_6(dst_exp_6);
		    relu_offset_float_cycsim0->dst_sign_6(dst_sign_6);
		    relu_offset_float_cycsim0->dst_man_7(dst_man_7);
		    relu_offset_float_cycsim0->dst_exp_7(dst_exp_7);
		    relu_offset_float_cycsim0->dst_sign_7(dst_sign_7);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_relu_offset_float)
		case BDWRep_RTL_C:
		    relu_offset_float_rtl0 = new relu_offset_float_rtl( "relu_offset_float" );

		    relu_offset_float_rtl0->clk(clk);
		    relu_offset_float_rtl0->rstn(rstn);
		    relu_offset_float_rtl0->enable(enable);
		    relu_offset_float_rtl0->src_valid(src_valid);
		    relu_offset_float_rtl0->src_man_0(src_man_0);
		    relu_offset_float_rtl0->src_exp_0(src_exp_0);
		    relu_offset_float_rtl0->src_sign_0(src_sign_0);
		    relu_offset_float_rtl0->src_man_1(src_man_1);
		    relu_offset_float_rtl0->src_exp_1(src_exp_1);
		    relu_offset_float_rtl0->src_sign_1(src_sign_1);
		    relu_offset_float_rtl0->src_man_2(src_man_2);
		    relu_offset_float_rtl0->src_exp_2(src_exp_2);
		    relu_offset_float_rtl0->src_sign_2(src_sign_2);
		    relu_offset_float_rtl0->src_man_3(src_man_3);
		    relu_offset_float_rtl0->src_exp_3(src_exp_3);
		    relu_offset_float_rtl0->src_sign_3(src_sign_3);
		    relu_offset_float_rtl0->src_man_4(src_man_4);
		    relu_offset_float_rtl0->src_exp_4(src_exp_4);
		    relu_offset_float_rtl0->src_sign_4(src_sign_4);
		    relu_offset_float_rtl0->src_man_5(src_man_5);
		    relu_offset_float_rtl0->src_exp_5(src_exp_5);
		    relu_offset_float_rtl0->src_sign_5(src_sign_5);
		    relu_offset_float_rtl0->src_man_6(src_man_6);
		    relu_offset_float_rtl0->src_exp_6(src_exp_6);
		    relu_offset_float_rtl0->src_sign_6(src_sign_6);
		    relu_offset_float_rtl0->src_man_7(src_man_7);
		    relu_offset_float_rtl0->src_exp_7(src_exp_7);
		    relu_offset_float_rtl0->src_sign_7(src_sign_7);
		    relu_offset_float_rtl0->offset_man(offset_man);
		    relu_offset_float_rtl0->offset_exp(offset_exp);
		    relu_offset_float_rtl0->offset_sign(offset_sign);
		    relu_offset_float_rtl0->dst_valid(dst_valid);
		    relu_offset_float_rtl0->dst_man_0(dst_man_0);
		    relu_offset_float_rtl0->dst_exp_0(dst_exp_0);
		    relu_offset_float_rtl0->dst_sign_0(dst_sign_0);
		    relu_offset_float_rtl0->dst_man_1(dst_man_1);
		    relu_offset_float_rtl0->dst_exp_1(dst_exp_1);
		    relu_offset_float_rtl0->dst_sign_1(dst_sign_1);
		    relu_offset_float_rtl0->dst_man_2(dst_man_2);
		    relu_offset_float_rtl0->dst_exp_2(dst_exp_2);
		    relu_offset_float_rtl0->dst_sign_2(dst_sign_2);
		    relu_offset_float_rtl0->dst_man_3(dst_man_3);
		    relu_offset_float_rtl0->dst_exp_3(dst_exp_3);
		    relu_offset_float_rtl0->dst_sign_3(dst_sign_3);
		    relu_offset_float_rtl0->dst_man_4(dst_man_4);
		    relu_offset_float_rtl0->dst_exp_4(dst_exp_4);
		    relu_offset_float_rtl0->dst_sign_4(dst_sign_4);
		    relu_offset_float_rtl0->dst_man_5(dst_man_5);
		    relu_offset_float_rtl0->dst_exp_5(dst_exp_5);
		    relu_offset_float_rtl0->dst_sign_5(dst_sign_5);
		    relu_offset_float_rtl0->dst_man_6(dst_man_6);
		    relu_offset_float_rtl0->dst_exp_6(dst_exp_6);
		    relu_offset_float_rtl0->dst_sign_6(dst_sign_6);
		    relu_offset_float_rtl0->dst_man_7(dst_man_7);
		    relu_offset_float_rtl0->dst_exp_7(dst_exp_7);
		    relu_offset_float_rtl0->dst_sign_7(dst_sign_7);


			{
			const char *simConfig = relu_offset_float_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    relu_offset_float0 = new relu_offset_float( "relu_offset_float" );

		    relu_offset_float0->clk(clk);
		    relu_offset_float0->rstn(rstn);
		    relu_offset_float0->enable(enable);
		    relu_offset_float0->src_valid(src_valid);
		    relu_offset_float0->src[0](src[0]);
		    relu_offset_float0->src[1](src[1]);
		    relu_offset_float0->src[2](src[2]);
		    relu_offset_float0->src[3](src[3]);
		    relu_offset_float0->src[4](src[4]);
		    relu_offset_float0->src[5](src[5]);
		    relu_offset_float0->src[6](src[6]);
		    relu_offset_float0->src[7](src[7]);
		    relu_offset_float0->offset(offset);
		    relu_offset_float0->dst_valid(dst_valid);
		    relu_offset_float0->dst[0](dst[0]);
		    relu_offset_float0->dst[1](dst[1]);
		    relu_offset_float0->dst[2](dst[2]);
		    relu_offset_float0->dst[3](dst[3]);
		    relu_offset_float0->dst[4](dst[4]);
		    relu_offset_float0->dst[5](dst[5]);
		    relu_offset_float0->dst[6](dst[6]);
		    relu_offset_float0->dst[7](dst[7]);


			{
			const char *simConfig = relu_offset_float_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void relu_offset_float_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_src_0);
		  sensitive << src_man_0;
		  sensitive << src_exp_0;
		  sensitive << src_sign_0;
		SC_METHOD(thread_src_1);
		  sensitive << src_man_1;
		  sensitive << src_exp_1;
		  sensitive << src_sign_1;
		SC_METHOD(thread_src_2);
		  sensitive << src_man_2;
		  sensitive << src_exp_2;
		  sensitive << src_sign_2;
		SC_METHOD(thread_src_3);
		  sensitive << src_man_3;
		  sensitive << src_exp_3;
		  sensitive << src_sign_3;
		SC_METHOD(thread_src_4);
		  sensitive << src_man_4;
		  sensitive << src_exp_4;
		  sensitive << src_sign_4;
		SC_METHOD(thread_src_5);
		  sensitive << src_man_5;
		  sensitive << src_exp_5;
		  sensitive << src_sign_5;
		SC_METHOD(thread_src_6);
		  sensitive << src_man_6;
		  sensitive << src_exp_6;
		  sensitive << src_sign_6;
		SC_METHOD(thread_src_7);
		  sensitive << src_man_7;
		  sensitive << src_exp_7;
		  sensitive << src_sign_7;
		SC_METHOD(thread_offset);
		  sensitive << offset_man;
		  sensitive << offset_exp;
		  sensitive << offset_sign;
		SC_METHOD(thread_dst_man_0);
		  sensitive << dst[0];
		SC_METHOD(thread_dst_exp_0);
		  sensitive << dst[0];
		SC_METHOD(thread_dst_sign_0);
		  sensitive << dst[0];
		SC_METHOD(thread_dst_man_1);
		  sensitive << dst[1];
		SC_METHOD(thread_dst_exp_1);
		  sensitive << dst[1];
		SC_METHOD(thread_dst_sign_1);
		  sensitive << dst[1];
		SC_METHOD(thread_dst_man_2);
		  sensitive << dst[2];
		SC_METHOD(thread_dst_exp_2);
		  sensitive << dst[2];
		SC_METHOD(thread_dst_sign_2);
		  sensitive << dst[2];
		SC_METHOD(thread_dst_man_3);
		  sensitive << dst[3];
		SC_METHOD(thread_dst_exp_3);
		  sensitive << dst[3];
		SC_METHOD(thread_dst_sign_3);
		  sensitive << dst[3];
		SC_METHOD(thread_dst_man_4);
		  sensitive << dst[4];
		SC_METHOD(thread_dst_exp_4);
		  sensitive << dst[4];
		SC_METHOD(thread_dst_sign_4);
		  sensitive << dst[4];
		SC_METHOD(thread_dst_man_5);
		  sensitive << dst[5];
		SC_METHOD(thread_dst_exp_5);
		  sensitive << dst[5];
		SC_METHOD(thread_dst_sign_5);
		  sensitive << dst[5];
		SC_METHOD(thread_dst_man_6);
		  sensitive << dst[6];
		SC_METHOD(thread_dst_exp_6);
		  sensitive << dst[6];
		SC_METHOD(thread_dst_sign_6);
		  sensitive << dst[6];
		SC_METHOD(thread_dst_man_7);
		  sensitive << dst[7];
		SC_METHOD(thread_dst_exp_7);
		  sensitive << dst[7];
		SC_METHOD(thread_dst_sign_7);
		  sensitive << dst[7];

	}
}

void relu_offset_float_wrapper_r::start_of_simulation()
{

#include <relu_offset_float_trace.h>

    esc_multiple_writers_warning();
}

void relu_offset_float_wrapper_r::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void relu_offset_float_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void relu_offset_float_wrapper_r::DeleteInstances()
{
    if (relu_offset_float0)
    {
        delete relu_offset_float0;
        relu_offset_float0 = 0;
    }
    if (relu_offset_float_cosim0)
    {
        delete relu_offset_float_cosim0;
        relu_offset_float_cosim0 = 0;
    }
    if (relu_offset_float_cycsim0)
    {
        delete relu_offset_float_cycsim0;
        relu_offset_float_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_relu_offset_float)
    if (relu_offset_float_rtl0)
    {
        delete relu_offset_float_rtl0;
        relu_offset_float_rtl0 = 0;
    }
#endif
}

#if BDW_WRITEFSDB == 1

inline void esc_open_fsdb_trace( const char *file_name  )
{
	sc_trace_file *fsdb_file;
#if ( defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102 ) || SYSTEMC_VERSION >= 20120701
    fsdbDumpfile(file_name);
    esc_set_trace_file( fsdb_file, esc_trace_fsdb );
# else

	// SystemC suffixes .fsdb to filenames automatically. Make sure
	// that doesn't get tacked onto a filename that already has the suffix.
	if ( strrchr( file_name, '.' ) != NULL )
	{
		char *trunc_file_name = new char[strlen(file_name)+1];
		strcpy( trunc_file_name, file_name );

		fsdb_file = new fsdb_trace_file( trunc_file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );

		delete trunc_file_name;
	}
	else
	{
		fsdb_file = new fsdb_trace_file( file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );
	}
#endif

//
// Novas's SystemC wrapper doesn't have a way to set the time unit as of SystemC 2.1v1.
//
//		((fsdb_trace_file*)fsdb_file)->sc_set_fsdb_time_unit( -12 );
}

inline void esc_close_fsdb_trace()
{
#if ! ((defined(NC_SYSTEMC) &&  defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102) || SYSTEMC_VERSION >= 20120701)
	fsdb_trace_file * fsdb_file =
		(fsdb_trace_file *)esc_trace_file( esc_trace_fsdb );

	if ( fsdb_file != NULL )
	{
		fsdb_file->CloseFile();
		delete fsdb_file;
		esc_set_trace_file( NULL, esc_trace_fsdb );
	}
#endif
}

#else

inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}

#endif

#if BDW_USE_SCV && BDW_WRITEFSDB == 1
static scv_tr_db* local_fsdb_scv_db = 0;

inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
	// Start SCV logging to FSDB if there is not already a database setup.
    if (!esc_get_scv_tr_db() && esc_trace_is_enabled(esc_trace_scv) )
	{
		scv_startup();
		scv_tr_fsdb_init();

		char* scv_file_name = new char[strlen(file_name) + 1];
		strcpy( scv_file_name, file_name );
		char* fsdb_suffix = strstr( scv_file_name, ".fsdb" );
		if (fsdb_suffix)
			*fsdb_suffix = 0;
		local_fsdb_scv_db = new scv_tr_db(scv_file_name);

		delete [] scv_file_name;
		esc_set_scv_tr_db(local_fsdb_scv_db);
		scv_tr_db::set_default_db(local_fsdb_scv_db);
		local_fsdb_scv_db->set_recording(true);
	}
}

inline void esc_close_fsdb_scv_trace()
{
    if ( local_fsdb_scv_db && (local_fsdb_scv_db == esc_get_scv_tr_db() ) ) 
	{
		delete local_fsdb_scv_db;
		local_fsdb_scv_db = 0;
		esc_set_scv_tr_db(0);
	}
}
#else 
inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

#endif

class relu_offset_float_wrapper_fsdb_opener {
public:
	relu_offset_float_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static relu_offset_float_wrapper_fsdb_opener
  relu_offset_float_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"relu_offset_float.cpp"

#define		relu_offset_float_INTERNAL


#include	"relu_offset_float_wrap.h"

const char * relu_offset_float_wrapper::simConfigName()
{
  return "";
}

enum relu_offset_float_wrapper::Representation relu_offset_float_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void relu_offset_float_wrapper::InitInstances( sc_core::sc_module_name  )
{
	relu_offset_float0 = new relu_offset_float( "relu_offset_float" );

	relu_offset_float0->clk(clk);
	relu_offset_float0->rstn(rstn);
	relu_offset_float0->enable(enable);
	relu_offset_float0->src_valid(src_valid);
	relu_offset_float0->src[0](src[0]);
	relu_offset_float0->src[1](src[1]);
	relu_offset_float0->src[2](src[2]);
	relu_offset_float0->src[3](src[3]);
	relu_offset_float0->src[4](src[4]);
	relu_offset_float0->src[5](src[5]);
	relu_offset_float0->src[6](src[6]);
	relu_offset_float0->src[7](src[7]);
	relu_offset_float0->offset(offset);
	relu_offset_float0->dst_valid(dst_valid);
	relu_offset_float0->dst[0](dst[0]);
	relu_offset_float0->dst[1](dst[1]);
	relu_offset_float0->dst[2](dst[2]);
	relu_offset_float0->dst[3](dst[3]);
	relu_offset_float0->dst[4](dst[4]);
	relu_offset_float0->dst[5](dst[5]);
	relu_offset_float0->dst[6](dst[6]);
	relu_offset_float0->dst[7](dst[7]);

}

void relu_offset_float_wrapper::InitThreads()
{
}

void relu_offset_float_wrapper::CloseTrace()
{
}

void relu_offset_float_wrapper::DeleteInstances()
{
    if (relu_offset_float0)
    {
        delete relu_offset_float0;
        relu_offset_float0 = 0;
    }
}

void relu_offset_float_wrapper::start_of_simulation()
{
}

void relu_offset_float_wrapper::end_of_simulation()
{
}



inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}


inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

class relu_offset_float_wrapper_fsdb_opener {
public:
	relu_offset_float_wrapper_fsdb_opener() {
	}
};

static relu_offset_float_wrapper_fsdb_opener
  relu_offset_float_wrapper_fsdb_opener_inst;

#endif

#endif
