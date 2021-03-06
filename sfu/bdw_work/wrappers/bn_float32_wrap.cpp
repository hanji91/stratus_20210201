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
* block called "bn_float32". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


















#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"bn_float32_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_bn_float32)

#define BDW_AUTO_KNOWN 1 


#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_mul
#define fp_mul fp_mul_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#undef fp_add
#define fp_add fp_add_wrapper_r

#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef bn_float32
#define bn_float32 bn_float32_rtl
#	include	"bn_float32_rtl.cpp"
#undef bn_float32


#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_mul

#undef fp_add

#undef fp_add

#undef fp_add

#undef fp_add

#undef fp_add

#undef fp_add

#undef fp_add

#undef fp_add

#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"bn_float32_coware.h"
#else
#include	"bn_float32_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "bn_float32_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"bn_float32.cpp"


#define		bn_float32_INTERNAL


#include	"bn_float32_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
bn_float32_cycsim* (*bn_float32_cycsim_factory_p)() = 0;

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
void bn_float32_wrapper::thread_src_man_0()
{
   src_man_0 = src[0].read().man;
}
void bn_float32_wrapper::thread_src_exp_0()
{
   src_exp_0 = src[0].read().exp;
}
void bn_float32_wrapper::thread_src_sign_0()
{
   src_sign_0 = src[0].read().sign;
}
void bn_float32_wrapper::thread_src_man_1()
{
   src_man_1 = src[1].read().man;
}
void bn_float32_wrapper::thread_src_exp_1()
{
   src_exp_1 = src[1].read().exp;
}
void bn_float32_wrapper::thread_src_sign_1()
{
   src_sign_1 = src[1].read().sign;
}
void bn_float32_wrapper::thread_src_man_2()
{
   src_man_2 = src[2].read().man;
}
void bn_float32_wrapper::thread_src_exp_2()
{
   src_exp_2 = src[2].read().exp;
}
void bn_float32_wrapper::thread_src_sign_2()
{
   src_sign_2 = src[2].read().sign;
}
void bn_float32_wrapper::thread_src_man_3()
{
   src_man_3 = src[3].read().man;
}
void bn_float32_wrapper::thread_src_exp_3()
{
   src_exp_3 = src[3].read().exp;
}
void bn_float32_wrapper::thread_src_sign_3()
{
   src_sign_3 = src[3].read().sign;
}
void bn_float32_wrapper::thread_src_man_4()
{
   src_man_4 = src[4].read().man;
}
void bn_float32_wrapper::thread_src_exp_4()
{
   src_exp_4 = src[4].read().exp;
}
void bn_float32_wrapper::thread_src_sign_4()
{
   src_sign_4 = src[4].read().sign;
}
void bn_float32_wrapper::thread_src_man_5()
{
   src_man_5 = src[5].read().man;
}
void bn_float32_wrapper::thread_src_exp_5()
{
   src_exp_5 = src[5].read().exp;
}
void bn_float32_wrapper::thread_src_sign_5()
{
   src_sign_5 = src[5].read().sign;
}
void bn_float32_wrapper::thread_src_man_6()
{
   src_man_6 = src[6].read().man;
}
void bn_float32_wrapper::thread_src_exp_6()
{
   src_exp_6 = src[6].read().exp;
}
void bn_float32_wrapper::thread_src_sign_6()
{
   src_sign_6 = src[6].read().sign;
}
void bn_float32_wrapper::thread_src_man_7()
{
   src_man_7 = src[7].read().man;
}
void bn_float32_wrapper::thread_src_exp_7()
{
   src_exp_7 = src[7].read().exp;
}
void bn_float32_wrapper::thread_src_sign_7()
{
   src_sign_7 = src[7].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_0()
{
   mul_coeff_man_0 = mul_coeff[0].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_0()
{
   mul_coeff_exp_0 = mul_coeff[0].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_0()
{
   mul_coeff_sign_0 = mul_coeff[0].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_1()
{
   mul_coeff_man_1 = mul_coeff[1].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_1()
{
   mul_coeff_exp_1 = mul_coeff[1].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_1()
{
   mul_coeff_sign_1 = mul_coeff[1].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_2()
{
   mul_coeff_man_2 = mul_coeff[2].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_2()
{
   mul_coeff_exp_2 = mul_coeff[2].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_2()
{
   mul_coeff_sign_2 = mul_coeff[2].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_3()
{
   mul_coeff_man_3 = mul_coeff[3].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_3()
{
   mul_coeff_exp_3 = mul_coeff[3].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_3()
{
   mul_coeff_sign_3 = mul_coeff[3].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_4()
{
   mul_coeff_man_4 = mul_coeff[4].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_4()
{
   mul_coeff_exp_4 = mul_coeff[4].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_4()
{
   mul_coeff_sign_4 = mul_coeff[4].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_5()
{
   mul_coeff_man_5 = mul_coeff[5].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_5()
{
   mul_coeff_exp_5 = mul_coeff[5].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_5()
{
   mul_coeff_sign_5 = mul_coeff[5].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_6()
{
   mul_coeff_man_6 = mul_coeff[6].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_6()
{
   mul_coeff_exp_6 = mul_coeff[6].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_6()
{
   mul_coeff_sign_6 = mul_coeff[6].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_7()
{
   mul_coeff_man_7 = mul_coeff[7].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_7()
{
   mul_coeff_exp_7 = mul_coeff[7].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_7()
{
   mul_coeff_sign_7 = mul_coeff[7].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_0()
{
   add_coeff_man_0 = add_coeff[0].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_0()
{
   add_coeff_exp_0 = add_coeff[0].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_0()
{
   add_coeff_sign_0 = add_coeff[0].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_1()
{
   add_coeff_man_1 = add_coeff[1].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_1()
{
   add_coeff_exp_1 = add_coeff[1].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_1()
{
   add_coeff_sign_1 = add_coeff[1].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_2()
{
   add_coeff_man_2 = add_coeff[2].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_2()
{
   add_coeff_exp_2 = add_coeff[2].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_2()
{
   add_coeff_sign_2 = add_coeff[2].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_3()
{
   add_coeff_man_3 = add_coeff[3].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_3()
{
   add_coeff_exp_3 = add_coeff[3].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_3()
{
   add_coeff_sign_3 = add_coeff[3].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_4()
{
   add_coeff_man_4 = add_coeff[4].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_4()
{
   add_coeff_exp_4 = add_coeff[4].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_4()
{
   add_coeff_sign_4 = add_coeff[4].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_5()
{
   add_coeff_man_5 = add_coeff[5].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_5()
{
   add_coeff_exp_5 = add_coeff[5].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_5()
{
   add_coeff_sign_5 = add_coeff[5].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_6()
{
   add_coeff_man_6 = add_coeff[6].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_6()
{
   add_coeff_exp_6 = add_coeff[6].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_6()
{
   add_coeff_sign_6 = add_coeff[6].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_7()
{
   add_coeff_man_7 = add_coeff[7].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_7()
{
   add_coeff_exp_7 = add_coeff[7].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_7()
{
   add_coeff_sign_7 = add_coeff[7].read().sign;
}
void bn_float32_wrapper::thread_dst_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_0.read();
   tmp.exp = dst_exp_0.read();
   tmp.sign = dst_sign_0.read();
   dst[0].write(tmp);
}
void bn_float32_wrapper::thread_dst_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_1.read();
   tmp.exp = dst_exp_1.read();
   tmp.sign = dst_sign_1.read();
   dst[1].write(tmp);
}
void bn_float32_wrapper::thread_dst_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_2.read();
   tmp.exp = dst_exp_2.read();
   tmp.sign = dst_sign_2.read();
   dst[2].write(tmp);
}
void bn_float32_wrapper::thread_dst_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_3.read();
   tmp.exp = dst_exp_3.read();
   tmp.sign = dst_sign_3.read();
   dst[3].write(tmp);
}
void bn_float32_wrapper::thread_dst_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_4.read();
   tmp.exp = dst_exp_4.read();
   tmp.sign = dst_sign_4.read();
   dst[4].write(tmp);
}
void bn_float32_wrapper::thread_dst_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_5.read();
   tmp.exp = dst_exp_5.read();
   tmp.sign = dst_sign_5.read();
   dst[5].write(tmp);
}
void bn_float32_wrapper::thread_dst_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_6.read();
   tmp.exp = dst_exp_6.read();
   tmp.sign = dst_sign_6.read();
   dst[6].write(tmp);
}
void bn_float32_wrapper::thread_dst_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_7.read();
   tmp.exp = dst_exp_7.read();
   tmp.sign = dst_sign_7.read();
   dst[7].write(tmp);
}


const char * bn_float32_wrapper::simConfigName()
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

enum bn_float32_wrapper::Representation bn_float32_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "bn_float32", simConfig, instName, &iresult );
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
								 "bn_float32", simConfig, instName, leaf,  "bn_float32" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void bn_float32_wrapper::InitInstances(  )
{
    enum bn_float32_wrapper::Representation rep =
		bn_float32_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "bn_float32" );
	esc_log_representation( "bn_float32", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    bn_float32_cosim0 = new bn_float32_cosim( "bn_float32" );

		    bn_float32_cosim0->clk(clk);
		    bn_float32_cosim0->rstn(rstn);
		    bn_float32_cosim0->enable(enable);
		    bn_float32_cosim0->src_valid(src_valid);
		    bn_float32_cosim0->src_man_0(src_man_0);
		    bn_float32_cosim0->src_exp_0(src_exp_0);
		    bn_float32_cosim0->src_sign_0(src_sign_0);
		    bn_float32_cosim0->src_man_1(src_man_1);
		    bn_float32_cosim0->src_exp_1(src_exp_1);
		    bn_float32_cosim0->src_sign_1(src_sign_1);
		    bn_float32_cosim0->src_man_2(src_man_2);
		    bn_float32_cosim0->src_exp_2(src_exp_2);
		    bn_float32_cosim0->src_sign_2(src_sign_2);
		    bn_float32_cosim0->src_man_3(src_man_3);
		    bn_float32_cosim0->src_exp_3(src_exp_3);
		    bn_float32_cosim0->src_sign_3(src_sign_3);
		    bn_float32_cosim0->src_man_4(src_man_4);
		    bn_float32_cosim0->src_exp_4(src_exp_4);
		    bn_float32_cosim0->src_sign_4(src_sign_4);
		    bn_float32_cosim0->src_man_5(src_man_5);
		    bn_float32_cosim0->src_exp_5(src_exp_5);
		    bn_float32_cosim0->src_sign_5(src_sign_5);
		    bn_float32_cosim0->src_man_6(src_man_6);
		    bn_float32_cosim0->src_exp_6(src_exp_6);
		    bn_float32_cosim0->src_sign_6(src_sign_6);
		    bn_float32_cosim0->src_man_7(src_man_7);
		    bn_float32_cosim0->src_exp_7(src_exp_7);
		    bn_float32_cosim0->src_sign_7(src_sign_7);
		    bn_float32_cosim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cosim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cosim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cosim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cosim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cosim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cosim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cosim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cosim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cosim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cosim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cosim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cosim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cosim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cosim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cosim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cosim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cosim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cosim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cosim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cosim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cosim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cosim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cosim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cosim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cosim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cosim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cosim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cosim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cosim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cosim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cosim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cosim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cosim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cosim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cosim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cosim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cosim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cosim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cosim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cosim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cosim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cosim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cosim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cosim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cosim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cosim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cosim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cosim0->dst_valid(dst_valid);
		    bn_float32_cosim0->dst_man_0(dst_man_0);
		    bn_float32_cosim0->dst_exp_0(dst_exp_0);
		    bn_float32_cosim0->dst_sign_0(dst_sign_0);
		    bn_float32_cosim0->dst_man_1(dst_man_1);
		    bn_float32_cosim0->dst_exp_1(dst_exp_1);
		    bn_float32_cosim0->dst_sign_1(dst_sign_1);
		    bn_float32_cosim0->dst_man_2(dst_man_2);
		    bn_float32_cosim0->dst_exp_2(dst_exp_2);
		    bn_float32_cosim0->dst_sign_2(dst_sign_2);
		    bn_float32_cosim0->dst_man_3(dst_man_3);
		    bn_float32_cosim0->dst_exp_3(dst_exp_3);
		    bn_float32_cosim0->dst_sign_3(dst_sign_3);
		    bn_float32_cosim0->dst_man_4(dst_man_4);
		    bn_float32_cosim0->dst_exp_4(dst_exp_4);
		    bn_float32_cosim0->dst_sign_4(dst_sign_4);
		    bn_float32_cosim0->dst_man_5(dst_man_5);
		    bn_float32_cosim0->dst_exp_5(dst_exp_5);
		    bn_float32_cosim0->dst_sign_5(dst_sign_5);
		    bn_float32_cosim0->dst_man_6(dst_man_6);
		    bn_float32_cosim0->dst_exp_6(dst_exp_6);
		    bn_float32_cosim0->dst_sign_6(dst_sign_6);
		    bn_float32_cosim0->dst_man_7(dst_man_7);
		    bn_float32_cosim0->dst_exp_7(dst_exp_7);
		    bn_float32_cosim0->dst_sign_7(dst_sign_7);

			break;
		case BDWRep_RTL_HDL:
		    bn_float32_cosim0 = new bn_float32_cosim( "bn_float32" );

		    bn_float32_cosim0->clk(clk);
		    bn_float32_cosim0->rstn(rstn);
		    bn_float32_cosim0->enable(enable);
		    bn_float32_cosim0->src_valid(src_valid);
		    bn_float32_cosim0->src_man_0(src_man_0);
		    bn_float32_cosim0->src_exp_0(src_exp_0);
		    bn_float32_cosim0->src_sign_0(src_sign_0);
		    bn_float32_cosim0->src_man_1(src_man_1);
		    bn_float32_cosim0->src_exp_1(src_exp_1);
		    bn_float32_cosim0->src_sign_1(src_sign_1);
		    bn_float32_cosim0->src_man_2(src_man_2);
		    bn_float32_cosim0->src_exp_2(src_exp_2);
		    bn_float32_cosim0->src_sign_2(src_sign_2);
		    bn_float32_cosim0->src_man_3(src_man_3);
		    bn_float32_cosim0->src_exp_3(src_exp_3);
		    bn_float32_cosim0->src_sign_3(src_sign_3);
		    bn_float32_cosim0->src_man_4(src_man_4);
		    bn_float32_cosim0->src_exp_4(src_exp_4);
		    bn_float32_cosim0->src_sign_4(src_sign_4);
		    bn_float32_cosim0->src_man_5(src_man_5);
		    bn_float32_cosim0->src_exp_5(src_exp_5);
		    bn_float32_cosim0->src_sign_5(src_sign_5);
		    bn_float32_cosim0->src_man_6(src_man_6);
		    bn_float32_cosim0->src_exp_6(src_exp_6);
		    bn_float32_cosim0->src_sign_6(src_sign_6);
		    bn_float32_cosim0->src_man_7(src_man_7);
		    bn_float32_cosim0->src_exp_7(src_exp_7);
		    bn_float32_cosim0->src_sign_7(src_sign_7);
		    bn_float32_cosim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cosim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cosim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cosim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cosim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cosim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cosim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cosim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cosim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cosim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cosim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cosim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cosim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cosim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cosim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cosim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cosim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cosim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cosim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cosim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cosim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cosim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cosim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cosim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cosim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cosim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cosim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cosim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cosim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cosim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cosim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cosim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cosim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cosim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cosim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cosim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cosim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cosim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cosim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cosim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cosim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cosim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cosim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cosim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cosim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cosim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cosim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cosim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cosim0->dst_valid(dst_valid);
		    bn_float32_cosim0->dst_man_0(dst_man_0);
		    bn_float32_cosim0->dst_exp_0(dst_exp_0);
		    bn_float32_cosim0->dst_sign_0(dst_sign_0);
		    bn_float32_cosim0->dst_man_1(dst_man_1);
		    bn_float32_cosim0->dst_exp_1(dst_exp_1);
		    bn_float32_cosim0->dst_sign_1(dst_sign_1);
		    bn_float32_cosim0->dst_man_2(dst_man_2);
		    bn_float32_cosim0->dst_exp_2(dst_exp_2);
		    bn_float32_cosim0->dst_sign_2(dst_sign_2);
		    bn_float32_cosim0->dst_man_3(dst_man_3);
		    bn_float32_cosim0->dst_exp_3(dst_exp_3);
		    bn_float32_cosim0->dst_sign_3(dst_sign_3);
		    bn_float32_cosim0->dst_man_4(dst_man_4);
		    bn_float32_cosim0->dst_exp_4(dst_exp_4);
		    bn_float32_cosim0->dst_sign_4(dst_sign_4);
		    bn_float32_cosim0->dst_man_5(dst_man_5);
		    bn_float32_cosim0->dst_exp_5(dst_exp_5);
		    bn_float32_cosim0->dst_sign_5(dst_sign_5);
		    bn_float32_cosim0->dst_man_6(dst_man_6);
		    bn_float32_cosim0->dst_exp_6(dst_exp_6);
		    bn_float32_cosim0->dst_sign_6(dst_sign_6);
		    bn_float32_cosim0->dst_man_7(dst_man_7);
		    bn_float32_cosim0->dst_exp_7(dst_exp_7);
		    bn_float32_cosim0->dst_sign_7(dst_sign_7);

			break;
        case BDWRep_CYC_HDL:
            if ( bn_float32_cycsim_factory_p )
                bn_float32_cycsim0 = bn_float32_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module bn_float32");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"bn_float32\"");

		    bn_float32_cycsim0->clk(clk);
		    bn_float32_cycsim0->rstn(rstn);
		    bn_float32_cycsim0->enable(enable);
		    bn_float32_cycsim0->src_valid(src_valid);
		    bn_float32_cycsim0->src_man_0(src_man_0);
		    bn_float32_cycsim0->src_exp_0(src_exp_0);
		    bn_float32_cycsim0->src_sign_0(src_sign_0);
		    bn_float32_cycsim0->src_man_1(src_man_1);
		    bn_float32_cycsim0->src_exp_1(src_exp_1);
		    bn_float32_cycsim0->src_sign_1(src_sign_1);
		    bn_float32_cycsim0->src_man_2(src_man_2);
		    bn_float32_cycsim0->src_exp_2(src_exp_2);
		    bn_float32_cycsim0->src_sign_2(src_sign_2);
		    bn_float32_cycsim0->src_man_3(src_man_3);
		    bn_float32_cycsim0->src_exp_3(src_exp_3);
		    bn_float32_cycsim0->src_sign_3(src_sign_3);
		    bn_float32_cycsim0->src_man_4(src_man_4);
		    bn_float32_cycsim0->src_exp_4(src_exp_4);
		    bn_float32_cycsim0->src_sign_4(src_sign_4);
		    bn_float32_cycsim0->src_man_5(src_man_5);
		    bn_float32_cycsim0->src_exp_5(src_exp_5);
		    bn_float32_cycsim0->src_sign_5(src_sign_5);
		    bn_float32_cycsim0->src_man_6(src_man_6);
		    bn_float32_cycsim0->src_exp_6(src_exp_6);
		    bn_float32_cycsim0->src_sign_6(src_sign_6);
		    bn_float32_cycsim0->src_man_7(src_man_7);
		    bn_float32_cycsim0->src_exp_7(src_exp_7);
		    bn_float32_cycsim0->src_sign_7(src_sign_7);
		    bn_float32_cycsim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cycsim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cycsim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cycsim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cycsim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cycsim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cycsim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cycsim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cycsim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cycsim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cycsim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cycsim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cycsim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cycsim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cycsim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cycsim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cycsim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cycsim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cycsim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cycsim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cycsim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cycsim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cycsim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cycsim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cycsim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cycsim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cycsim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cycsim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cycsim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cycsim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cycsim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cycsim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cycsim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cycsim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cycsim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cycsim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cycsim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cycsim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cycsim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cycsim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cycsim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cycsim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cycsim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cycsim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cycsim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cycsim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cycsim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cycsim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cycsim0->dst_valid(dst_valid);
		    bn_float32_cycsim0->dst_man_0(dst_man_0);
		    bn_float32_cycsim0->dst_exp_0(dst_exp_0);
		    bn_float32_cycsim0->dst_sign_0(dst_sign_0);
		    bn_float32_cycsim0->dst_man_1(dst_man_1);
		    bn_float32_cycsim0->dst_exp_1(dst_exp_1);
		    bn_float32_cycsim0->dst_sign_1(dst_sign_1);
		    bn_float32_cycsim0->dst_man_2(dst_man_2);
		    bn_float32_cycsim0->dst_exp_2(dst_exp_2);
		    bn_float32_cycsim0->dst_sign_2(dst_sign_2);
		    bn_float32_cycsim0->dst_man_3(dst_man_3);
		    bn_float32_cycsim0->dst_exp_3(dst_exp_3);
		    bn_float32_cycsim0->dst_sign_3(dst_sign_3);
		    bn_float32_cycsim0->dst_man_4(dst_man_4);
		    bn_float32_cycsim0->dst_exp_4(dst_exp_4);
		    bn_float32_cycsim0->dst_sign_4(dst_sign_4);
		    bn_float32_cycsim0->dst_man_5(dst_man_5);
		    bn_float32_cycsim0->dst_exp_5(dst_exp_5);
		    bn_float32_cycsim0->dst_sign_5(dst_sign_5);
		    bn_float32_cycsim0->dst_man_6(dst_man_6);
		    bn_float32_cycsim0->dst_exp_6(dst_exp_6);
		    bn_float32_cycsim0->dst_sign_6(dst_sign_6);
		    bn_float32_cycsim0->dst_man_7(dst_man_7);
		    bn_float32_cycsim0->dst_exp_7(dst_exp_7);
		    bn_float32_cycsim0->dst_sign_7(dst_sign_7);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_bn_float32)
		case BDWRep_RTL_C:
		    bn_float32_rtl0 = new bn_float32_rtl( "bn_float32" );

		    bn_float32_rtl0->clk(clk);
		    bn_float32_rtl0->rstn(rstn);
		    bn_float32_rtl0->enable(enable);
		    bn_float32_rtl0->src_valid(src_valid);
		    bn_float32_rtl0->src_man_0(src_man_0);
		    bn_float32_rtl0->src_exp_0(src_exp_0);
		    bn_float32_rtl0->src_sign_0(src_sign_0);
		    bn_float32_rtl0->src_man_1(src_man_1);
		    bn_float32_rtl0->src_exp_1(src_exp_1);
		    bn_float32_rtl0->src_sign_1(src_sign_1);
		    bn_float32_rtl0->src_man_2(src_man_2);
		    bn_float32_rtl0->src_exp_2(src_exp_2);
		    bn_float32_rtl0->src_sign_2(src_sign_2);
		    bn_float32_rtl0->src_man_3(src_man_3);
		    bn_float32_rtl0->src_exp_3(src_exp_3);
		    bn_float32_rtl0->src_sign_3(src_sign_3);
		    bn_float32_rtl0->src_man_4(src_man_4);
		    bn_float32_rtl0->src_exp_4(src_exp_4);
		    bn_float32_rtl0->src_sign_4(src_sign_4);
		    bn_float32_rtl0->src_man_5(src_man_5);
		    bn_float32_rtl0->src_exp_5(src_exp_5);
		    bn_float32_rtl0->src_sign_5(src_sign_5);
		    bn_float32_rtl0->src_man_6(src_man_6);
		    bn_float32_rtl0->src_exp_6(src_exp_6);
		    bn_float32_rtl0->src_sign_6(src_sign_6);
		    bn_float32_rtl0->src_man_7(src_man_7);
		    bn_float32_rtl0->src_exp_7(src_exp_7);
		    bn_float32_rtl0->src_sign_7(src_sign_7);
		    bn_float32_rtl0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_rtl0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_rtl0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_rtl0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_rtl0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_rtl0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_rtl0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_rtl0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_rtl0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_rtl0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_rtl0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_rtl0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_rtl0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_rtl0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_rtl0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_rtl0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_rtl0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_rtl0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_rtl0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_rtl0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_rtl0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_rtl0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_rtl0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_rtl0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_rtl0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_rtl0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_rtl0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_rtl0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_rtl0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_rtl0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_rtl0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_rtl0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_rtl0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_rtl0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_rtl0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_rtl0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_rtl0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_rtl0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_rtl0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_rtl0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_rtl0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_rtl0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_rtl0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_rtl0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_rtl0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_rtl0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_rtl0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_rtl0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_rtl0->dst_valid(dst_valid);
		    bn_float32_rtl0->dst_man_0(dst_man_0);
		    bn_float32_rtl0->dst_exp_0(dst_exp_0);
		    bn_float32_rtl0->dst_sign_0(dst_sign_0);
		    bn_float32_rtl0->dst_man_1(dst_man_1);
		    bn_float32_rtl0->dst_exp_1(dst_exp_1);
		    bn_float32_rtl0->dst_sign_1(dst_sign_1);
		    bn_float32_rtl0->dst_man_2(dst_man_2);
		    bn_float32_rtl0->dst_exp_2(dst_exp_2);
		    bn_float32_rtl0->dst_sign_2(dst_sign_2);
		    bn_float32_rtl0->dst_man_3(dst_man_3);
		    bn_float32_rtl0->dst_exp_3(dst_exp_3);
		    bn_float32_rtl0->dst_sign_3(dst_sign_3);
		    bn_float32_rtl0->dst_man_4(dst_man_4);
		    bn_float32_rtl0->dst_exp_4(dst_exp_4);
		    bn_float32_rtl0->dst_sign_4(dst_sign_4);
		    bn_float32_rtl0->dst_man_5(dst_man_5);
		    bn_float32_rtl0->dst_exp_5(dst_exp_5);
		    bn_float32_rtl0->dst_sign_5(dst_sign_5);
		    bn_float32_rtl0->dst_man_6(dst_man_6);
		    bn_float32_rtl0->dst_exp_6(dst_exp_6);
		    bn_float32_rtl0->dst_sign_6(dst_sign_6);
		    bn_float32_rtl0->dst_man_7(dst_man_7);
		    bn_float32_rtl0->dst_exp_7(dst_exp_7);
		    bn_float32_rtl0->dst_sign_7(dst_sign_7);


			{
			const char *simConfig = bn_float32_wrapper::simConfigName();
			
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
		    bn_float320 = new bn_float32( "bn_float32" );

		    bn_float320->clk(clk);
		    bn_float320->rstn(rstn);
		    bn_float320->enable(enable);
		    bn_float320->src_valid(src_valid);
		    bn_float320->src[0](src[0]);
		    bn_float320->src[1](src[1]);
		    bn_float320->src[2](src[2]);
		    bn_float320->src[3](src[3]);
		    bn_float320->src[4](src[4]);
		    bn_float320->src[5](src[5]);
		    bn_float320->src[6](src[6]);
		    bn_float320->src[7](src[7]);
		    bn_float320->mul_coeff[0](mul_coeff[0]);
		    bn_float320->mul_coeff[1](mul_coeff[1]);
		    bn_float320->mul_coeff[2](mul_coeff[2]);
		    bn_float320->mul_coeff[3](mul_coeff[3]);
		    bn_float320->mul_coeff[4](mul_coeff[4]);
		    bn_float320->mul_coeff[5](mul_coeff[5]);
		    bn_float320->mul_coeff[6](mul_coeff[6]);
		    bn_float320->mul_coeff[7](mul_coeff[7]);
		    bn_float320->add_coeff[0](add_coeff[0]);
		    bn_float320->add_coeff[1](add_coeff[1]);
		    bn_float320->add_coeff[2](add_coeff[2]);
		    bn_float320->add_coeff[3](add_coeff[3]);
		    bn_float320->add_coeff[4](add_coeff[4]);
		    bn_float320->add_coeff[5](add_coeff[5]);
		    bn_float320->add_coeff[6](add_coeff[6]);
		    bn_float320->add_coeff[7](add_coeff[7]);
		    bn_float320->dst_valid(dst_valid);
		    bn_float320->dst[0](dst[0]);
		    bn_float320->dst[1](dst[1]);
		    bn_float320->dst[2](dst[2]);
		    bn_float320->dst[3](dst[3]);
		    bn_float320->dst[4](dst[4]);
		    bn_float320->dst[5](dst[5]);
		    bn_float320->dst[6](dst[6]);
		    bn_float320->dst[7](dst[7]);


			{
			const char *simConfig = bn_float32_wrapper::simConfigName();
			
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

void bn_float32_wrapper::InitThreads()
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
		SC_METHOD(thread_mul_coeff_man_0);
		  sensitive << mul_coeff[0];
		SC_METHOD(thread_mul_coeff_exp_0);
		  sensitive << mul_coeff[0];
		SC_METHOD(thread_mul_coeff_sign_0);
		  sensitive << mul_coeff[0];
		SC_METHOD(thread_mul_coeff_man_1);
		  sensitive << mul_coeff[1];
		SC_METHOD(thread_mul_coeff_exp_1);
		  sensitive << mul_coeff[1];
		SC_METHOD(thread_mul_coeff_sign_1);
		  sensitive << mul_coeff[1];
		SC_METHOD(thread_mul_coeff_man_2);
		  sensitive << mul_coeff[2];
		SC_METHOD(thread_mul_coeff_exp_2);
		  sensitive << mul_coeff[2];
		SC_METHOD(thread_mul_coeff_sign_2);
		  sensitive << mul_coeff[2];
		SC_METHOD(thread_mul_coeff_man_3);
		  sensitive << mul_coeff[3];
		SC_METHOD(thread_mul_coeff_exp_3);
		  sensitive << mul_coeff[3];
		SC_METHOD(thread_mul_coeff_sign_3);
		  sensitive << mul_coeff[3];
		SC_METHOD(thread_mul_coeff_man_4);
		  sensitive << mul_coeff[4];
		SC_METHOD(thread_mul_coeff_exp_4);
		  sensitive << mul_coeff[4];
		SC_METHOD(thread_mul_coeff_sign_4);
		  sensitive << mul_coeff[4];
		SC_METHOD(thread_mul_coeff_man_5);
		  sensitive << mul_coeff[5];
		SC_METHOD(thread_mul_coeff_exp_5);
		  sensitive << mul_coeff[5];
		SC_METHOD(thread_mul_coeff_sign_5);
		  sensitive << mul_coeff[5];
		SC_METHOD(thread_mul_coeff_man_6);
		  sensitive << mul_coeff[6];
		SC_METHOD(thread_mul_coeff_exp_6);
		  sensitive << mul_coeff[6];
		SC_METHOD(thread_mul_coeff_sign_6);
		  sensitive << mul_coeff[6];
		SC_METHOD(thread_mul_coeff_man_7);
		  sensitive << mul_coeff[7];
		SC_METHOD(thread_mul_coeff_exp_7);
		  sensitive << mul_coeff[7];
		SC_METHOD(thread_mul_coeff_sign_7);
		  sensitive << mul_coeff[7];
		SC_METHOD(thread_add_coeff_man_0);
		  sensitive << add_coeff[0];
		SC_METHOD(thread_add_coeff_exp_0);
		  sensitive << add_coeff[0];
		SC_METHOD(thread_add_coeff_sign_0);
		  sensitive << add_coeff[0];
		SC_METHOD(thread_add_coeff_man_1);
		  sensitive << add_coeff[1];
		SC_METHOD(thread_add_coeff_exp_1);
		  sensitive << add_coeff[1];
		SC_METHOD(thread_add_coeff_sign_1);
		  sensitive << add_coeff[1];
		SC_METHOD(thread_add_coeff_man_2);
		  sensitive << add_coeff[2];
		SC_METHOD(thread_add_coeff_exp_2);
		  sensitive << add_coeff[2];
		SC_METHOD(thread_add_coeff_sign_2);
		  sensitive << add_coeff[2];
		SC_METHOD(thread_add_coeff_man_3);
		  sensitive << add_coeff[3];
		SC_METHOD(thread_add_coeff_exp_3);
		  sensitive << add_coeff[3];
		SC_METHOD(thread_add_coeff_sign_3);
		  sensitive << add_coeff[3];
		SC_METHOD(thread_add_coeff_man_4);
		  sensitive << add_coeff[4];
		SC_METHOD(thread_add_coeff_exp_4);
		  sensitive << add_coeff[4];
		SC_METHOD(thread_add_coeff_sign_4);
		  sensitive << add_coeff[4];
		SC_METHOD(thread_add_coeff_man_5);
		  sensitive << add_coeff[5];
		SC_METHOD(thread_add_coeff_exp_5);
		  sensitive << add_coeff[5];
		SC_METHOD(thread_add_coeff_sign_5);
		  sensitive << add_coeff[5];
		SC_METHOD(thread_add_coeff_man_6);
		  sensitive << add_coeff[6];
		SC_METHOD(thread_add_coeff_exp_6);
		  sensitive << add_coeff[6];
		SC_METHOD(thread_add_coeff_sign_6);
		  sensitive << add_coeff[6];
		SC_METHOD(thread_add_coeff_man_7);
		  sensitive << add_coeff[7];
		SC_METHOD(thread_add_coeff_exp_7);
		  sensitive << add_coeff[7];
		SC_METHOD(thread_add_coeff_sign_7);
		  sensitive << add_coeff[7];
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

void bn_float32_wrapper::start_of_simulation()
{

#include <bn_float32_trace.h>

    esc_multiple_writers_warning();
}

void bn_float32_wrapper::CloseTrace()
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

void bn_float32_wrapper::end_of_simulation()
{
	CloseTrace();
}



void bn_float32_wrapper::DeleteInstances()
{
    if (bn_float320)
    {
        delete bn_float320;
        bn_float320 = 0;
    }
    if (bn_float32_cosim0)
    {
        delete bn_float32_cosim0;
        bn_float32_cosim0 = 0;
    }
    if (bn_float32_cycsim0)
    {
        delete bn_float32_cycsim0;
        bn_float32_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_bn_float32)
    if (bn_float32_rtl0)
    {
        delete bn_float32_rtl0;
        bn_float32_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void bn_float32_wrapper_r::thread_src_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_0.read();
   tmp.exp = src_exp_0.read();
   tmp.sign = src_sign_0.read();
   src[0].write(tmp);
}
void bn_float32_wrapper_r::thread_src_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_1.read();
   tmp.exp = src_exp_1.read();
   tmp.sign = src_sign_1.read();
   src[1].write(tmp);
}
void bn_float32_wrapper_r::thread_src_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_2.read();
   tmp.exp = src_exp_2.read();
   tmp.sign = src_sign_2.read();
   src[2].write(tmp);
}
void bn_float32_wrapper_r::thread_src_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_3.read();
   tmp.exp = src_exp_3.read();
   tmp.sign = src_sign_3.read();
   src[3].write(tmp);
}
void bn_float32_wrapper_r::thread_src_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_4.read();
   tmp.exp = src_exp_4.read();
   tmp.sign = src_sign_4.read();
   src[4].write(tmp);
}
void bn_float32_wrapper_r::thread_src_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_5.read();
   tmp.exp = src_exp_5.read();
   tmp.sign = src_sign_5.read();
   src[5].write(tmp);
}
void bn_float32_wrapper_r::thread_src_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_6.read();
   tmp.exp = src_exp_6.read();
   tmp.sign = src_sign_6.read();
   src[6].write(tmp);
}
void bn_float32_wrapper_r::thread_src_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_7.read();
   tmp.exp = src_exp_7.read();
   tmp.sign = src_sign_7.read();
   src[7].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_0.read();
   tmp.exp = mul_coeff_exp_0.read();
   tmp.sign = mul_coeff_sign_0.read();
   mul_coeff[0].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_1.read();
   tmp.exp = mul_coeff_exp_1.read();
   tmp.sign = mul_coeff_sign_1.read();
   mul_coeff[1].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_2.read();
   tmp.exp = mul_coeff_exp_2.read();
   tmp.sign = mul_coeff_sign_2.read();
   mul_coeff[2].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_3.read();
   tmp.exp = mul_coeff_exp_3.read();
   tmp.sign = mul_coeff_sign_3.read();
   mul_coeff[3].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_4.read();
   tmp.exp = mul_coeff_exp_4.read();
   tmp.sign = mul_coeff_sign_4.read();
   mul_coeff[4].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_5.read();
   tmp.exp = mul_coeff_exp_5.read();
   tmp.sign = mul_coeff_sign_5.read();
   mul_coeff[5].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_6.read();
   tmp.exp = mul_coeff_exp_6.read();
   tmp.sign = mul_coeff_sign_6.read();
   mul_coeff[6].write(tmp);
}
void bn_float32_wrapper_r::thread_mul_coeff_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = mul_coeff_man_7.read();
   tmp.exp = mul_coeff_exp_7.read();
   tmp.sign = mul_coeff_sign_7.read();
   mul_coeff[7].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_0.read();
   tmp.exp = add_coeff_exp_0.read();
   tmp.sign = add_coeff_sign_0.read();
   add_coeff[0].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_1.read();
   tmp.exp = add_coeff_exp_1.read();
   tmp.sign = add_coeff_sign_1.read();
   add_coeff[1].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_2.read();
   tmp.exp = add_coeff_exp_2.read();
   tmp.sign = add_coeff_sign_2.read();
   add_coeff[2].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_3.read();
   tmp.exp = add_coeff_exp_3.read();
   tmp.sign = add_coeff_sign_3.read();
   add_coeff[3].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_4.read();
   tmp.exp = add_coeff_exp_4.read();
   tmp.sign = add_coeff_sign_4.read();
   add_coeff[4].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_5.read();
   tmp.exp = add_coeff_exp_5.read();
   tmp.sign = add_coeff_sign_5.read();
   add_coeff[5].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_6.read();
   tmp.exp = add_coeff_exp_6.read();
   tmp.sign = add_coeff_sign_6.read();
   add_coeff[6].write(tmp);
}
void bn_float32_wrapper_r::thread_add_coeff_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = add_coeff_man_7.read();
   tmp.exp = add_coeff_exp_7.read();
   tmp.sign = add_coeff_sign_7.read();
   add_coeff[7].write(tmp);
}
void bn_float32_wrapper_r::thread_dst_man_0()
{
   dst_man_0 = dst[0].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_0()
{
   dst_exp_0 = dst[0].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_0()
{
   dst_sign_0 = dst[0].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_1()
{
   dst_man_1 = dst[1].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_1()
{
   dst_exp_1 = dst[1].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_1()
{
   dst_sign_1 = dst[1].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_2()
{
   dst_man_2 = dst[2].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_2()
{
   dst_exp_2 = dst[2].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_2()
{
   dst_sign_2 = dst[2].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_3()
{
   dst_man_3 = dst[3].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_3()
{
   dst_exp_3 = dst[3].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_3()
{
   dst_sign_3 = dst[3].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_4()
{
   dst_man_4 = dst[4].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_4()
{
   dst_exp_4 = dst[4].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_4()
{
   dst_sign_4 = dst[4].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_5()
{
   dst_man_5 = dst[5].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_5()
{
   dst_exp_5 = dst[5].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_5()
{
   dst_sign_5 = dst[5].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_6()
{
   dst_man_6 = dst[6].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_6()
{
   dst_exp_6 = dst[6].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_6()
{
   dst_sign_6 = dst[6].read().sign;
}
void bn_float32_wrapper_r::thread_dst_man_7()
{
   dst_man_7 = dst[7].read().man;
}
void bn_float32_wrapper_r::thread_dst_exp_7()
{
   dst_exp_7 = dst[7].read().exp;
}
void bn_float32_wrapper_r::thread_dst_sign_7()
{
   dst_sign_7 = dst[7].read().sign;
}


const char * bn_float32_wrapper_r::simConfigName()
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

enum bn_float32_wrapper_r::Representation bn_float32_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "bn_float32", simConfig, instName, &iresult );
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

void bn_float32_wrapper_r::InitInstances()
{
    enum bn_float32_wrapper_r::Representation rep =
		bn_float32_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "bn_float32" );
	esc_log_representation( "bn_float32", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    bn_float32_cosim0 = new bn_float32_cosim( "bn_float32" );

		    bn_float32_cosim0->clk(clk);
		    bn_float32_cosim0->rstn(rstn);
		    bn_float32_cosim0->enable(enable);
		    bn_float32_cosim0->src_valid(src_valid);
		    bn_float32_cosim0->src_man_0(src_man_0);
		    bn_float32_cosim0->src_exp_0(src_exp_0);
		    bn_float32_cosim0->src_sign_0(src_sign_0);
		    bn_float32_cosim0->src_man_1(src_man_1);
		    bn_float32_cosim0->src_exp_1(src_exp_1);
		    bn_float32_cosim0->src_sign_1(src_sign_1);
		    bn_float32_cosim0->src_man_2(src_man_2);
		    bn_float32_cosim0->src_exp_2(src_exp_2);
		    bn_float32_cosim0->src_sign_2(src_sign_2);
		    bn_float32_cosim0->src_man_3(src_man_3);
		    bn_float32_cosim0->src_exp_3(src_exp_3);
		    bn_float32_cosim0->src_sign_3(src_sign_3);
		    bn_float32_cosim0->src_man_4(src_man_4);
		    bn_float32_cosim0->src_exp_4(src_exp_4);
		    bn_float32_cosim0->src_sign_4(src_sign_4);
		    bn_float32_cosim0->src_man_5(src_man_5);
		    bn_float32_cosim0->src_exp_5(src_exp_5);
		    bn_float32_cosim0->src_sign_5(src_sign_5);
		    bn_float32_cosim0->src_man_6(src_man_6);
		    bn_float32_cosim0->src_exp_6(src_exp_6);
		    bn_float32_cosim0->src_sign_6(src_sign_6);
		    bn_float32_cosim0->src_man_7(src_man_7);
		    bn_float32_cosim0->src_exp_7(src_exp_7);
		    bn_float32_cosim0->src_sign_7(src_sign_7);
		    bn_float32_cosim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cosim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cosim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cosim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cosim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cosim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cosim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cosim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cosim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cosim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cosim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cosim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cosim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cosim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cosim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cosim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cosim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cosim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cosim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cosim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cosim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cosim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cosim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cosim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cosim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cosim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cosim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cosim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cosim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cosim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cosim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cosim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cosim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cosim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cosim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cosim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cosim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cosim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cosim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cosim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cosim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cosim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cosim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cosim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cosim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cosim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cosim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cosim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cosim0->dst_valid(dst_valid);
		    bn_float32_cosim0->dst_man_0(dst_man_0);
		    bn_float32_cosim0->dst_exp_0(dst_exp_0);
		    bn_float32_cosim0->dst_sign_0(dst_sign_0);
		    bn_float32_cosim0->dst_man_1(dst_man_1);
		    bn_float32_cosim0->dst_exp_1(dst_exp_1);
		    bn_float32_cosim0->dst_sign_1(dst_sign_1);
		    bn_float32_cosim0->dst_man_2(dst_man_2);
		    bn_float32_cosim0->dst_exp_2(dst_exp_2);
		    bn_float32_cosim0->dst_sign_2(dst_sign_2);
		    bn_float32_cosim0->dst_man_3(dst_man_3);
		    bn_float32_cosim0->dst_exp_3(dst_exp_3);
		    bn_float32_cosim0->dst_sign_3(dst_sign_3);
		    bn_float32_cosim0->dst_man_4(dst_man_4);
		    bn_float32_cosim0->dst_exp_4(dst_exp_4);
		    bn_float32_cosim0->dst_sign_4(dst_sign_4);
		    bn_float32_cosim0->dst_man_5(dst_man_5);
		    bn_float32_cosim0->dst_exp_5(dst_exp_5);
		    bn_float32_cosim0->dst_sign_5(dst_sign_5);
		    bn_float32_cosim0->dst_man_6(dst_man_6);
		    bn_float32_cosim0->dst_exp_6(dst_exp_6);
		    bn_float32_cosim0->dst_sign_6(dst_sign_6);
		    bn_float32_cosim0->dst_man_7(dst_man_7);
		    bn_float32_cosim0->dst_exp_7(dst_exp_7);
		    bn_float32_cosim0->dst_sign_7(dst_sign_7);

			break;
		case BDWRep_RTL_HDL:
		    bn_float32_cosim0 = new bn_float32_cosim( "bn_float32" );

		    bn_float32_cosim0->clk(clk);
		    bn_float32_cosim0->rstn(rstn);
		    bn_float32_cosim0->enable(enable);
		    bn_float32_cosim0->src_valid(src_valid);
		    bn_float32_cosim0->src_man_0(src_man_0);
		    bn_float32_cosim0->src_exp_0(src_exp_0);
		    bn_float32_cosim0->src_sign_0(src_sign_0);
		    bn_float32_cosim0->src_man_1(src_man_1);
		    bn_float32_cosim0->src_exp_1(src_exp_1);
		    bn_float32_cosim0->src_sign_1(src_sign_1);
		    bn_float32_cosim0->src_man_2(src_man_2);
		    bn_float32_cosim0->src_exp_2(src_exp_2);
		    bn_float32_cosim0->src_sign_2(src_sign_2);
		    bn_float32_cosim0->src_man_3(src_man_3);
		    bn_float32_cosim0->src_exp_3(src_exp_3);
		    bn_float32_cosim0->src_sign_3(src_sign_3);
		    bn_float32_cosim0->src_man_4(src_man_4);
		    bn_float32_cosim0->src_exp_4(src_exp_4);
		    bn_float32_cosim0->src_sign_4(src_sign_4);
		    bn_float32_cosim0->src_man_5(src_man_5);
		    bn_float32_cosim0->src_exp_5(src_exp_5);
		    bn_float32_cosim0->src_sign_5(src_sign_5);
		    bn_float32_cosim0->src_man_6(src_man_6);
		    bn_float32_cosim0->src_exp_6(src_exp_6);
		    bn_float32_cosim0->src_sign_6(src_sign_6);
		    bn_float32_cosim0->src_man_7(src_man_7);
		    bn_float32_cosim0->src_exp_7(src_exp_7);
		    bn_float32_cosim0->src_sign_7(src_sign_7);
		    bn_float32_cosim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cosim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cosim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cosim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cosim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cosim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cosim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cosim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cosim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cosim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cosim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cosim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cosim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cosim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cosim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cosim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cosim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cosim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cosim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cosim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cosim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cosim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cosim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cosim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cosim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cosim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cosim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cosim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cosim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cosim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cosim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cosim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cosim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cosim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cosim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cosim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cosim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cosim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cosim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cosim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cosim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cosim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cosim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cosim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cosim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cosim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cosim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cosim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cosim0->dst_valid(dst_valid);
		    bn_float32_cosim0->dst_man_0(dst_man_0);
		    bn_float32_cosim0->dst_exp_0(dst_exp_0);
		    bn_float32_cosim0->dst_sign_0(dst_sign_0);
		    bn_float32_cosim0->dst_man_1(dst_man_1);
		    bn_float32_cosim0->dst_exp_1(dst_exp_1);
		    bn_float32_cosim0->dst_sign_1(dst_sign_1);
		    bn_float32_cosim0->dst_man_2(dst_man_2);
		    bn_float32_cosim0->dst_exp_2(dst_exp_2);
		    bn_float32_cosim0->dst_sign_2(dst_sign_2);
		    bn_float32_cosim0->dst_man_3(dst_man_3);
		    bn_float32_cosim0->dst_exp_3(dst_exp_3);
		    bn_float32_cosim0->dst_sign_3(dst_sign_3);
		    bn_float32_cosim0->dst_man_4(dst_man_4);
		    bn_float32_cosim0->dst_exp_4(dst_exp_4);
		    bn_float32_cosim0->dst_sign_4(dst_sign_4);
		    bn_float32_cosim0->dst_man_5(dst_man_5);
		    bn_float32_cosim0->dst_exp_5(dst_exp_5);
		    bn_float32_cosim0->dst_sign_5(dst_sign_5);
		    bn_float32_cosim0->dst_man_6(dst_man_6);
		    bn_float32_cosim0->dst_exp_6(dst_exp_6);
		    bn_float32_cosim0->dst_sign_6(dst_sign_6);
		    bn_float32_cosim0->dst_man_7(dst_man_7);
		    bn_float32_cosim0->dst_exp_7(dst_exp_7);
		    bn_float32_cosim0->dst_sign_7(dst_sign_7);

			break;
        case BDWRep_CYC_HDL:
            if ( bn_float32_cycsim_factory_p )
                bn_float32_cycsim0 = bn_float32_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module bn_float32");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"bn_float32\"");

		    bn_float32_cycsim0->clk(clk);
		    bn_float32_cycsim0->rstn(rstn);
		    bn_float32_cycsim0->enable(enable);
		    bn_float32_cycsim0->src_valid(src_valid);
		    bn_float32_cycsim0->src_man_0(src_man_0);
		    bn_float32_cycsim0->src_exp_0(src_exp_0);
		    bn_float32_cycsim0->src_sign_0(src_sign_0);
		    bn_float32_cycsim0->src_man_1(src_man_1);
		    bn_float32_cycsim0->src_exp_1(src_exp_1);
		    bn_float32_cycsim0->src_sign_1(src_sign_1);
		    bn_float32_cycsim0->src_man_2(src_man_2);
		    bn_float32_cycsim0->src_exp_2(src_exp_2);
		    bn_float32_cycsim0->src_sign_2(src_sign_2);
		    bn_float32_cycsim0->src_man_3(src_man_3);
		    bn_float32_cycsim0->src_exp_3(src_exp_3);
		    bn_float32_cycsim0->src_sign_3(src_sign_3);
		    bn_float32_cycsim0->src_man_4(src_man_4);
		    bn_float32_cycsim0->src_exp_4(src_exp_4);
		    bn_float32_cycsim0->src_sign_4(src_sign_4);
		    bn_float32_cycsim0->src_man_5(src_man_5);
		    bn_float32_cycsim0->src_exp_5(src_exp_5);
		    bn_float32_cycsim0->src_sign_5(src_sign_5);
		    bn_float32_cycsim0->src_man_6(src_man_6);
		    bn_float32_cycsim0->src_exp_6(src_exp_6);
		    bn_float32_cycsim0->src_sign_6(src_sign_6);
		    bn_float32_cycsim0->src_man_7(src_man_7);
		    bn_float32_cycsim0->src_exp_7(src_exp_7);
		    bn_float32_cycsim0->src_sign_7(src_sign_7);
		    bn_float32_cycsim0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_cycsim0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_cycsim0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_cycsim0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_cycsim0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_cycsim0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_cycsim0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_cycsim0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_cycsim0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_cycsim0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_cycsim0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_cycsim0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_cycsim0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_cycsim0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_cycsim0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_cycsim0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_cycsim0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_cycsim0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_cycsim0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_cycsim0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_cycsim0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_cycsim0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_cycsim0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_cycsim0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_cycsim0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_cycsim0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_cycsim0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_cycsim0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_cycsim0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_cycsim0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_cycsim0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_cycsim0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_cycsim0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_cycsim0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_cycsim0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_cycsim0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_cycsim0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_cycsim0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_cycsim0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_cycsim0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_cycsim0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_cycsim0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_cycsim0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_cycsim0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_cycsim0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_cycsim0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_cycsim0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_cycsim0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_cycsim0->dst_valid(dst_valid);
		    bn_float32_cycsim0->dst_man_0(dst_man_0);
		    bn_float32_cycsim0->dst_exp_0(dst_exp_0);
		    bn_float32_cycsim0->dst_sign_0(dst_sign_0);
		    bn_float32_cycsim0->dst_man_1(dst_man_1);
		    bn_float32_cycsim0->dst_exp_1(dst_exp_1);
		    bn_float32_cycsim0->dst_sign_1(dst_sign_1);
		    bn_float32_cycsim0->dst_man_2(dst_man_2);
		    bn_float32_cycsim0->dst_exp_2(dst_exp_2);
		    bn_float32_cycsim0->dst_sign_2(dst_sign_2);
		    bn_float32_cycsim0->dst_man_3(dst_man_3);
		    bn_float32_cycsim0->dst_exp_3(dst_exp_3);
		    bn_float32_cycsim0->dst_sign_3(dst_sign_3);
		    bn_float32_cycsim0->dst_man_4(dst_man_4);
		    bn_float32_cycsim0->dst_exp_4(dst_exp_4);
		    bn_float32_cycsim0->dst_sign_4(dst_sign_4);
		    bn_float32_cycsim0->dst_man_5(dst_man_5);
		    bn_float32_cycsim0->dst_exp_5(dst_exp_5);
		    bn_float32_cycsim0->dst_sign_5(dst_sign_5);
		    bn_float32_cycsim0->dst_man_6(dst_man_6);
		    bn_float32_cycsim0->dst_exp_6(dst_exp_6);
		    bn_float32_cycsim0->dst_sign_6(dst_sign_6);
		    bn_float32_cycsim0->dst_man_7(dst_man_7);
		    bn_float32_cycsim0->dst_exp_7(dst_exp_7);
		    bn_float32_cycsim0->dst_sign_7(dst_sign_7);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_bn_float32)
		case BDWRep_RTL_C:
		    bn_float32_rtl0 = new bn_float32_rtl( "bn_float32" );

		    bn_float32_rtl0->clk(clk);
		    bn_float32_rtl0->rstn(rstn);
		    bn_float32_rtl0->enable(enable);
		    bn_float32_rtl0->src_valid(src_valid);
		    bn_float32_rtl0->src_man_0(src_man_0);
		    bn_float32_rtl0->src_exp_0(src_exp_0);
		    bn_float32_rtl0->src_sign_0(src_sign_0);
		    bn_float32_rtl0->src_man_1(src_man_1);
		    bn_float32_rtl0->src_exp_1(src_exp_1);
		    bn_float32_rtl0->src_sign_1(src_sign_1);
		    bn_float32_rtl0->src_man_2(src_man_2);
		    bn_float32_rtl0->src_exp_2(src_exp_2);
		    bn_float32_rtl0->src_sign_2(src_sign_2);
		    bn_float32_rtl0->src_man_3(src_man_3);
		    bn_float32_rtl0->src_exp_3(src_exp_3);
		    bn_float32_rtl0->src_sign_3(src_sign_3);
		    bn_float32_rtl0->src_man_4(src_man_4);
		    bn_float32_rtl0->src_exp_4(src_exp_4);
		    bn_float32_rtl0->src_sign_4(src_sign_4);
		    bn_float32_rtl0->src_man_5(src_man_5);
		    bn_float32_rtl0->src_exp_5(src_exp_5);
		    bn_float32_rtl0->src_sign_5(src_sign_5);
		    bn_float32_rtl0->src_man_6(src_man_6);
		    bn_float32_rtl0->src_exp_6(src_exp_6);
		    bn_float32_rtl0->src_sign_6(src_sign_6);
		    bn_float32_rtl0->src_man_7(src_man_7);
		    bn_float32_rtl0->src_exp_7(src_exp_7);
		    bn_float32_rtl0->src_sign_7(src_sign_7);
		    bn_float32_rtl0->mul_coeff_man_0(mul_coeff_man_0);
		    bn_float32_rtl0->mul_coeff_exp_0(mul_coeff_exp_0);
		    bn_float32_rtl0->mul_coeff_sign_0(mul_coeff_sign_0);
		    bn_float32_rtl0->mul_coeff_man_1(mul_coeff_man_1);
		    bn_float32_rtl0->mul_coeff_exp_1(mul_coeff_exp_1);
		    bn_float32_rtl0->mul_coeff_sign_1(mul_coeff_sign_1);
		    bn_float32_rtl0->mul_coeff_man_2(mul_coeff_man_2);
		    bn_float32_rtl0->mul_coeff_exp_2(mul_coeff_exp_2);
		    bn_float32_rtl0->mul_coeff_sign_2(mul_coeff_sign_2);
		    bn_float32_rtl0->mul_coeff_man_3(mul_coeff_man_3);
		    bn_float32_rtl0->mul_coeff_exp_3(mul_coeff_exp_3);
		    bn_float32_rtl0->mul_coeff_sign_3(mul_coeff_sign_3);
		    bn_float32_rtl0->mul_coeff_man_4(mul_coeff_man_4);
		    bn_float32_rtl0->mul_coeff_exp_4(mul_coeff_exp_4);
		    bn_float32_rtl0->mul_coeff_sign_4(mul_coeff_sign_4);
		    bn_float32_rtl0->mul_coeff_man_5(mul_coeff_man_5);
		    bn_float32_rtl0->mul_coeff_exp_5(mul_coeff_exp_5);
		    bn_float32_rtl0->mul_coeff_sign_5(mul_coeff_sign_5);
		    bn_float32_rtl0->mul_coeff_man_6(mul_coeff_man_6);
		    bn_float32_rtl0->mul_coeff_exp_6(mul_coeff_exp_6);
		    bn_float32_rtl0->mul_coeff_sign_6(mul_coeff_sign_6);
		    bn_float32_rtl0->mul_coeff_man_7(mul_coeff_man_7);
		    bn_float32_rtl0->mul_coeff_exp_7(mul_coeff_exp_7);
		    bn_float32_rtl0->mul_coeff_sign_7(mul_coeff_sign_7);
		    bn_float32_rtl0->add_coeff_man_0(add_coeff_man_0);
		    bn_float32_rtl0->add_coeff_exp_0(add_coeff_exp_0);
		    bn_float32_rtl0->add_coeff_sign_0(add_coeff_sign_0);
		    bn_float32_rtl0->add_coeff_man_1(add_coeff_man_1);
		    bn_float32_rtl0->add_coeff_exp_1(add_coeff_exp_1);
		    bn_float32_rtl0->add_coeff_sign_1(add_coeff_sign_1);
		    bn_float32_rtl0->add_coeff_man_2(add_coeff_man_2);
		    bn_float32_rtl0->add_coeff_exp_2(add_coeff_exp_2);
		    bn_float32_rtl0->add_coeff_sign_2(add_coeff_sign_2);
		    bn_float32_rtl0->add_coeff_man_3(add_coeff_man_3);
		    bn_float32_rtl0->add_coeff_exp_3(add_coeff_exp_3);
		    bn_float32_rtl0->add_coeff_sign_3(add_coeff_sign_3);
		    bn_float32_rtl0->add_coeff_man_4(add_coeff_man_4);
		    bn_float32_rtl0->add_coeff_exp_4(add_coeff_exp_4);
		    bn_float32_rtl0->add_coeff_sign_4(add_coeff_sign_4);
		    bn_float32_rtl0->add_coeff_man_5(add_coeff_man_5);
		    bn_float32_rtl0->add_coeff_exp_5(add_coeff_exp_5);
		    bn_float32_rtl0->add_coeff_sign_5(add_coeff_sign_5);
		    bn_float32_rtl0->add_coeff_man_6(add_coeff_man_6);
		    bn_float32_rtl0->add_coeff_exp_6(add_coeff_exp_6);
		    bn_float32_rtl0->add_coeff_sign_6(add_coeff_sign_6);
		    bn_float32_rtl0->add_coeff_man_7(add_coeff_man_7);
		    bn_float32_rtl0->add_coeff_exp_7(add_coeff_exp_7);
		    bn_float32_rtl0->add_coeff_sign_7(add_coeff_sign_7);
		    bn_float32_rtl0->dst_valid(dst_valid);
		    bn_float32_rtl0->dst_man_0(dst_man_0);
		    bn_float32_rtl0->dst_exp_0(dst_exp_0);
		    bn_float32_rtl0->dst_sign_0(dst_sign_0);
		    bn_float32_rtl0->dst_man_1(dst_man_1);
		    bn_float32_rtl0->dst_exp_1(dst_exp_1);
		    bn_float32_rtl0->dst_sign_1(dst_sign_1);
		    bn_float32_rtl0->dst_man_2(dst_man_2);
		    bn_float32_rtl0->dst_exp_2(dst_exp_2);
		    bn_float32_rtl0->dst_sign_2(dst_sign_2);
		    bn_float32_rtl0->dst_man_3(dst_man_3);
		    bn_float32_rtl0->dst_exp_3(dst_exp_3);
		    bn_float32_rtl0->dst_sign_3(dst_sign_3);
		    bn_float32_rtl0->dst_man_4(dst_man_4);
		    bn_float32_rtl0->dst_exp_4(dst_exp_4);
		    bn_float32_rtl0->dst_sign_4(dst_sign_4);
		    bn_float32_rtl0->dst_man_5(dst_man_5);
		    bn_float32_rtl0->dst_exp_5(dst_exp_5);
		    bn_float32_rtl0->dst_sign_5(dst_sign_5);
		    bn_float32_rtl0->dst_man_6(dst_man_6);
		    bn_float32_rtl0->dst_exp_6(dst_exp_6);
		    bn_float32_rtl0->dst_sign_6(dst_sign_6);
		    bn_float32_rtl0->dst_man_7(dst_man_7);
		    bn_float32_rtl0->dst_exp_7(dst_exp_7);
		    bn_float32_rtl0->dst_sign_7(dst_sign_7);


			{
			const char *simConfig = bn_float32_wrapper::simConfigName();
			
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
		    bn_float320 = new bn_float32( "bn_float32" );

		    bn_float320->clk(clk);
		    bn_float320->rstn(rstn);
		    bn_float320->enable(enable);
		    bn_float320->src_valid(src_valid);
		    bn_float320->src[0](src[0]);
		    bn_float320->src[1](src[1]);
		    bn_float320->src[2](src[2]);
		    bn_float320->src[3](src[3]);
		    bn_float320->src[4](src[4]);
		    bn_float320->src[5](src[5]);
		    bn_float320->src[6](src[6]);
		    bn_float320->src[7](src[7]);
		    bn_float320->mul_coeff[0](mul_coeff[0]);
		    bn_float320->mul_coeff[1](mul_coeff[1]);
		    bn_float320->mul_coeff[2](mul_coeff[2]);
		    bn_float320->mul_coeff[3](mul_coeff[3]);
		    bn_float320->mul_coeff[4](mul_coeff[4]);
		    bn_float320->mul_coeff[5](mul_coeff[5]);
		    bn_float320->mul_coeff[6](mul_coeff[6]);
		    bn_float320->mul_coeff[7](mul_coeff[7]);
		    bn_float320->add_coeff[0](add_coeff[0]);
		    bn_float320->add_coeff[1](add_coeff[1]);
		    bn_float320->add_coeff[2](add_coeff[2]);
		    bn_float320->add_coeff[3](add_coeff[3]);
		    bn_float320->add_coeff[4](add_coeff[4]);
		    bn_float320->add_coeff[5](add_coeff[5]);
		    bn_float320->add_coeff[6](add_coeff[6]);
		    bn_float320->add_coeff[7](add_coeff[7]);
		    bn_float320->dst_valid(dst_valid);
		    bn_float320->dst[0](dst[0]);
		    bn_float320->dst[1](dst[1]);
		    bn_float320->dst[2](dst[2]);
		    bn_float320->dst[3](dst[3]);
		    bn_float320->dst[4](dst[4]);
		    bn_float320->dst[5](dst[5]);
		    bn_float320->dst[6](dst[6]);
		    bn_float320->dst[7](dst[7]);


			{
			const char *simConfig = bn_float32_wrapper::simConfigName();
			
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

void bn_float32_wrapper_r::InitThreads()
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
		SC_METHOD(thread_mul_coeff_0);
		  sensitive << mul_coeff_man_0;
		  sensitive << mul_coeff_exp_0;
		  sensitive << mul_coeff_sign_0;
		SC_METHOD(thread_mul_coeff_1);
		  sensitive << mul_coeff_man_1;
		  sensitive << mul_coeff_exp_1;
		  sensitive << mul_coeff_sign_1;
		SC_METHOD(thread_mul_coeff_2);
		  sensitive << mul_coeff_man_2;
		  sensitive << mul_coeff_exp_2;
		  sensitive << mul_coeff_sign_2;
		SC_METHOD(thread_mul_coeff_3);
		  sensitive << mul_coeff_man_3;
		  sensitive << mul_coeff_exp_3;
		  sensitive << mul_coeff_sign_3;
		SC_METHOD(thread_mul_coeff_4);
		  sensitive << mul_coeff_man_4;
		  sensitive << mul_coeff_exp_4;
		  sensitive << mul_coeff_sign_4;
		SC_METHOD(thread_mul_coeff_5);
		  sensitive << mul_coeff_man_5;
		  sensitive << mul_coeff_exp_5;
		  sensitive << mul_coeff_sign_5;
		SC_METHOD(thread_mul_coeff_6);
		  sensitive << mul_coeff_man_6;
		  sensitive << mul_coeff_exp_6;
		  sensitive << mul_coeff_sign_6;
		SC_METHOD(thread_mul_coeff_7);
		  sensitive << mul_coeff_man_7;
		  sensitive << mul_coeff_exp_7;
		  sensitive << mul_coeff_sign_7;
		SC_METHOD(thread_add_coeff_0);
		  sensitive << add_coeff_man_0;
		  sensitive << add_coeff_exp_0;
		  sensitive << add_coeff_sign_0;
		SC_METHOD(thread_add_coeff_1);
		  sensitive << add_coeff_man_1;
		  sensitive << add_coeff_exp_1;
		  sensitive << add_coeff_sign_1;
		SC_METHOD(thread_add_coeff_2);
		  sensitive << add_coeff_man_2;
		  sensitive << add_coeff_exp_2;
		  sensitive << add_coeff_sign_2;
		SC_METHOD(thread_add_coeff_3);
		  sensitive << add_coeff_man_3;
		  sensitive << add_coeff_exp_3;
		  sensitive << add_coeff_sign_3;
		SC_METHOD(thread_add_coeff_4);
		  sensitive << add_coeff_man_4;
		  sensitive << add_coeff_exp_4;
		  sensitive << add_coeff_sign_4;
		SC_METHOD(thread_add_coeff_5);
		  sensitive << add_coeff_man_5;
		  sensitive << add_coeff_exp_5;
		  sensitive << add_coeff_sign_5;
		SC_METHOD(thread_add_coeff_6);
		  sensitive << add_coeff_man_6;
		  sensitive << add_coeff_exp_6;
		  sensitive << add_coeff_sign_6;
		SC_METHOD(thread_add_coeff_7);
		  sensitive << add_coeff_man_7;
		  sensitive << add_coeff_exp_7;
		  sensitive << add_coeff_sign_7;
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

void bn_float32_wrapper_r::start_of_simulation()
{

#include <bn_float32_trace.h>

    esc_multiple_writers_warning();
}

void bn_float32_wrapper_r::CloseTrace()
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

void bn_float32_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void bn_float32_wrapper_r::DeleteInstances()
{
    if (bn_float320)
    {
        delete bn_float320;
        bn_float320 = 0;
    }
    if (bn_float32_cosim0)
    {
        delete bn_float32_cosim0;
        bn_float32_cosim0 = 0;
    }
    if (bn_float32_cycsim0)
    {
        delete bn_float32_cycsim0;
        bn_float32_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_bn_float32)
    if (bn_float32_rtl0)
    {
        delete bn_float32_rtl0;
        bn_float32_rtl0 = 0;
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

class bn_float32_wrapper_fsdb_opener {
public:
	bn_float32_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static bn_float32_wrapper_fsdb_opener
  bn_float32_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"bn_float32.cpp"

#define		bn_float32_INTERNAL


#include	"bn_float32_wrap.h"

const char * bn_float32_wrapper::simConfigName()
{
  return "";
}

enum bn_float32_wrapper::Representation bn_float32_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void bn_float32_wrapper::InitInstances( sc_core::sc_module_name  )
{
	bn_float320 = new bn_float32( "bn_float32" );

	bn_float320->clk(clk);
	bn_float320->rstn(rstn);
	bn_float320->enable(enable);
	bn_float320->src_valid(src_valid);
	bn_float320->src[0](src[0]);
	bn_float320->src[1](src[1]);
	bn_float320->src[2](src[2]);
	bn_float320->src[3](src[3]);
	bn_float320->src[4](src[4]);
	bn_float320->src[5](src[5]);
	bn_float320->src[6](src[6]);
	bn_float320->src[7](src[7]);
	bn_float320->mul_coeff[0](mul_coeff[0]);
	bn_float320->mul_coeff[1](mul_coeff[1]);
	bn_float320->mul_coeff[2](mul_coeff[2]);
	bn_float320->mul_coeff[3](mul_coeff[3]);
	bn_float320->mul_coeff[4](mul_coeff[4]);
	bn_float320->mul_coeff[5](mul_coeff[5]);
	bn_float320->mul_coeff[6](mul_coeff[6]);
	bn_float320->mul_coeff[7](mul_coeff[7]);
	bn_float320->add_coeff[0](add_coeff[0]);
	bn_float320->add_coeff[1](add_coeff[1]);
	bn_float320->add_coeff[2](add_coeff[2]);
	bn_float320->add_coeff[3](add_coeff[3]);
	bn_float320->add_coeff[4](add_coeff[4]);
	bn_float320->add_coeff[5](add_coeff[5]);
	bn_float320->add_coeff[6](add_coeff[6]);
	bn_float320->add_coeff[7](add_coeff[7]);
	bn_float320->dst_valid(dst_valid);
	bn_float320->dst[0](dst[0]);
	bn_float320->dst[1](dst[1]);
	bn_float320->dst[2](dst[2]);
	bn_float320->dst[3](dst[3]);
	bn_float320->dst[4](dst[4]);
	bn_float320->dst[5](dst[5]);
	bn_float320->dst[6](dst[6]);
	bn_float320->dst[7](dst[7]);

}

void bn_float32_wrapper::InitThreads()
{
}

void bn_float32_wrapper::CloseTrace()
{
}

void bn_float32_wrapper::DeleteInstances()
{
    if (bn_float320)
    {
        delete bn_float320;
        bn_float320 = 0;
    }
}

void bn_float32_wrapper::start_of_simulation()
{
}

void bn_float32_wrapper::end_of_simulation()
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

class bn_float32_wrapper_fsdb_opener {
public:
	bn_float32_wrapper_fsdb_opener() {
	}
};

static bn_float32_wrapper_fsdb_opener
  bn_float32_wrapper_fsdb_opener_inst;

#endif

#endif
