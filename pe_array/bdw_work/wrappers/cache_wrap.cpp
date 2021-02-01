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
* block called "cache". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"cache_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_cache)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef cache
#define cache cache_rtl
#	include	"cache_rtl.cpp"
#undef cache


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"cache_coware.h"
#else
#include	"cache_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "cache_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"cache.cpp"


#define		cache_INTERNAL


#include	"cache_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
cache_cycsim* (*cache_cycsim_factory_p)() = 0;

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

const char * cache_wrapper::simConfigName()
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

enum cache_wrapper::Representation cache_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "cache", simConfig, instName, &iresult );
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
								 "cache", simConfig, instName, leaf,  "cache" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void cache_wrapper::InitInstances(  )
{
    enum cache_wrapper::Representation rep =
		cache_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "cache" );
	esc_log_representation( "cache", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    cache_cosim0 = new cache_cosim( "cache" );

		    cache_cosim0->clk(clk);
		    cache_cosim0->rstn(rstn);
		    cache_cosim0->cache_en(cache_en);
		    cache_cosim0->systolic_en(systolic_en);
		    cache_cosim0->systolic_depth(systolic_depth);
		    cache_cosim0->addr_if_start(addr_if_start);
		    cache_cosim0->systolic_sel(systolic_sel);
		    cache_cosim0->feature_data(feature_data);
		    cache_cosim0->feature_share_en(feature_share_en);
		    cache_cosim0->feature_data_en(feature_data_en);
		    cache_cosim0->feature_data_sel(feature_data_sel);
		    cache_cosim0->weight_data(weight_data);
		    cache_cosim0->weight_data_en(weight_data_en);
		    cache_cosim0->mac_src_0_s0_0(mac_src_0_s0[0]);
		    cache_cosim0->mac_src_0_s0_1(mac_src_0_s0[1]);
		    cache_cosim0->mac_src_0_s0_2(mac_src_0_s0[2]);
		    cache_cosim0->mac_src_0_s0_3(mac_src_0_s0[3]);
		    cache_cosim0->mac_src_0_s0_4(mac_src_0_s0[4]);
		    cache_cosim0->mac_src_0_s0_5(mac_src_0_s0[5]);
		    cache_cosim0->mac_src_0_s0_6(mac_src_0_s0[6]);
		    cache_cosim0->mac_src_0_s0_7(mac_src_0_s0[7]);
		    cache_cosim0->mac_src_0_s0_8(mac_src_0_s0[8]);
		    cache_cosim0->mac_src_0_s0_9(mac_src_0_s0[9]);
		    cache_cosim0->mac_src_0_s0_10(mac_src_0_s0[10]);
		    cache_cosim0->mac_src_0_s0_11(mac_src_0_s0[11]);
		    cache_cosim0->mac_src_0_s0_12(mac_src_0_s0[12]);
		    cache_cosim0->mac_src_0_s0_13(mac_src_0_s0[13]);
		    cache_cosim0->mac_src_0_s0_14(mac_src_0_s0[14]);
		    cache_cosim0->mac_src_0_s0_15(mac_src_0_s0[15]);
		    cache_cosim0->mac_src_0_s0_16(mac_src_0_s0[16]);
		    cache_cosim0->mac_src_0_s0_17(mac_src_0_s0[17]);
		    cache_cosim0->mac_src_0_s0_18(mac_src_0_s0[18]);
		    cache_cosim0->mac_src_0_s0_19(mac_src_0_s0[19]);
		    cache_cosim0->mac_src_0_s0_20(mac_src_0_s0[20]);
		    cache_cosim0->mac_src_0_s0_21(mac_src_0_s0[21]);
		    cache_cosim0->mac_src_0_s0_22(mac_src_0_s0[22]);
		    cache_cosim0->mac_src_0_s0_23(mac_src_0_s0[23]);
		    cache_cosim0->mac_src_0_s0_24(mac_src_0_s0[24]);
		    cache_cosim0->mac_src_0_s0_25(mac_src_0_s0[25]);
		    cache_cosim0->mac_src_0_s0_26(mac_src_0_s0[26]);
		    cache_cosim0->mac_src_0_s0_27(mac_src_0_s0[27]);
		    cache_cosim0->mac_src_0_s0_28(mac_src_0_s0[28]);
		    cache_cosim0->mac_src_0_s0_29(mac_src_0_s0[29]);
		    cache_cosim0->mac_src_0_s0_30(mac_src_0_s0[30]);
		    cache_cosim0->mac_src_0_s0_31(mac_src_0_s0[31]);
		    cache_cosim0->mac_src_0_s1_0(mac_src_0_s1[0]);
		    cache_cosim0->mac_src_0_s1_1(mac_src_0_s1[1]);
		    cache_cosim0->mac_src_0_s1_2(mac_src_0_s1[2]);
		    cache_cosim0->mac_src_0_s1_3(mac_src_0_s1[3]);
		    cache_cosim0->mac_src_0_s1_4(mac_src_0_s1[4]);
		    cache_cosim0->mac_src_0_s1_5(mac_src_0_s1[5]);
		    cache_cosim0->mac_src_0_s1_6(mac_src_0_s1[6]);
		    cache_cosim0->mac_src_0_s1_7(mac_src_0_s1[7]);
		    cache_cosim0->mac_src_0_s1_8(mac_src_0_s1[8]);
		    cache_cosim0->mac_src_0_s1_9(mac_src_0_s1[9]);
		    cache_cosim0->mac_src_0_s1_10(mac_src_0_s1[10]);
		    cache_cosim0->mac_src_0_s1_11(mac_src_0_s1[11]);
		    cache_cosim0->mac_src_0_s1_12(mac_src_0_s1[12]);
		    cache_cosim0->mac_src_0_s1_13(mac_src_0_s1[13]);
		    cache_cosim0->mac_src_0_s1_14(mac_src_0_s1[14]);
		    cache_cosim0->mac_src_0_s1_15(mac_src_0_s1[15]);
		    cache_cosim0->mac_src_0_s1_16(mac_src_0_s1[16]);
		    cache_cosim0->mac_src_0_s1_17(mac_src_0_s1[17]);
		    cache_cosim0->mac_src_0_s1_18(mac_src_0_s1[18]);
		    cache_cosim0->mac_src_0_s1_19(mac_src_0_s1[19]);
		    cache_cosim0->mac_src_0_s1_20(mac_src_0_s1[20]);
		    cache_cosim0->mac_src_0_s1_21(mac_src_0_s1[21]);
		    cache_cosim0->mac_src_0_s1_22(mac_src_0_s1[22]);
		    cache_cosim0->mac_src_0_s1_23(mac_src_0_s1[23]);
		    cache_cosim0->mac_src_0_s1_24(mac_src_0_s1[24]);
		    cache_cosim0->mac_src_0_s1_25(mac_src_0_s1[25]);
		    cache_cosim0->mac_src_0_s1_26(mac_src_0_s1[26]);
		    cache_cosim0->mac_src_0_s1_27(mac_src_0_s1[27]);
		    cache_cosim0->mac_src_0_s1_28(mac_src_0_s1[28]);
		    cache_cosim0->mac_src_0_s1_29(mac_src_0_s1[29]);
		    cache_cosim0->mac_src_0_s1_30(mac_src_0_s1[30]);
		    cache_cosim0->mac_src_0_s1_31(mac_src_0_s1[31]);
		    cache_cosim0->mac_src_0_s2_0(mac_src_0_s2[0]);
		    cache_cosim0->mac_src_0_s2_1(mac_src_0_s2[1]);
		    cache_cosim0->mac_src_0_s2_2(mac_src_0_s2[2]);
		    cache_cosim0->mac_src_0_s2_3(mac_src_0_s2[3]);
		    cache_cosim0->mac_src_0_s2_4(mac_src_0_s2[4]);
		    cache_cosim0->mac_src_0_s2_5(mac_src_0_s2[5]);
		    cache_cosim0->mac_src_0_s2_6(mac_src_0_s2[6]);
		    cache_cosim0->mac_src_0_s2_7(mac_src_0_s2[7]);
		    cache_cosim0->mac_src_0_s2_8(mac_src_0_s2[8]);
		    cache_cosim0->mac_src_0_s2_9(mac_src_0_s2[9]);
		    cache_cosim0->mac_src_0_s2_10(mac_src_0_s2[10]);
		    cache_cosim0->mac_src_0_s2_11(mac_src_0_s2[11]);
		    cache_cosim0->mac_src_0_s2_12(mac_src_0_s2[12]);
		    cache_cosim0->mac_src_0_s2_13(mac_src_0_s2[13]);
		    cache_cosim0->mac_src_0_s2_14(mac_src_0_s2[14]);
		    cache_cosim0->mac_src_0_s2_15(mac_src_0_s2[15]);
		    cache_cosim0->mac_src_0_s2_16(mac_src_0_s2[16]);
		    cache_cosim0->mac_src_0_s2_17(mac_src_0_s2[17]);
		    cache_cosim0->mac_src_0_s2_18(mac_src_0_s2[18]);
		    cache_cosim0->mac_src_0_s2_19(mac_src_0_s2[19]);
		    cache_cosim0->mac_src_0_s2_20(mac_src_0_s2[20]);
		    cache_cosim0->mac_src_0_s2_21(mac_src_0_s2[21]);
		    cache_cosim0->mac_src_0_s2_22(mac_src_0_s2[22]);
		    cache_cosim0->mac_src_0_s2_23(mac_src_0_s2[23]);
		    cache_cosim0->mac_src_0_s2_24(mac_src_0_s2[24]);
		    cache_cosim0->mac_src_0_s2_25(mac_src_0_s2[25]);
		    cache_cosim0->mac_src_0_s2_26(mac_src_0_s2[26]);
		    cache_cosim0->mac_src_0_s2_27(mac_src_0_s2[27]);
		    cache_cosim0->mac_src_0_s2_28(mac_src_0_s2[28]);
		    cache_cosim0->mac_src_0_s2_29(mac_src_0_s2[29]);
		    cache_cosim0->mac_src_0_s2_30(mac_src_0_s2[30]);
		    cache_cosim0->mac_src_0_s2_31(mac_src_0_s2[31]);
		    cache_cosim0->mac_src_0_s3_0(mac_src_0_s3[0]);
		    cache_cosim0->mac_src_0_s3_1(mac_src_0_s3[1]);
		    cache_cosim0->mac_src_0_s3_2(mac_src_0_s3[2]);
		    cache_cosim0->mac_src_0_s3_3(mac_src_0_s3[3]);
		    cache_cosim0->mac_src_0_s3_4(mac_src_0_s3[4]);
		    cache_cosim0->mac_src_0_s3_5(mac_src_0_s3[5]);
		    cache_cosim0->mac_src_0_s3_6(mac_src_0_s3[6]);
		    cache_cosim0->mac_src_0_s3_7(mac_src_0_s3[7]);
		    cache_cosim0->mac_src_0_s3_8(mac_src_0_s3[8]);
		    cache_cosim0->mac_src_0_s3_9(mac_src_0_s3[9]);
		    cache_cosim0->mac_src_0_s3_10(mac_src_0_s3[10]);
		    cache_cosim0->mac_src_0_s3_11(mac_src_0_s3[11]);
		    cache_cosim0->mac_src_0_s3_12(mac_src_0_s3[12]);
		    cache_cosim0->mac_src_0_s3_13(mac_src_0_s3[13]);
		    cache_cosim0->mac_src_0_s3_14(mac_src_0_s3[14]);
		    cache_cosim0->mac_src_0_s3_15(mac_src_0_s3[15]);
		    cache_cosim0->mac_src_0_s3_16(mac_src_0_s3[16]);
		    cache_cosim0->mac_src_0_s3_17(mac_src_0_s3[17]);
		    cache_cosim0->mac_src_0_s3_18(mac_src_0_s3[18]);
		    cache_cosim0->mac_src_0_s3_19(mac_src_0_s3[19]);
		    cache_cosim0->mac_src_0_s3_20(mac_src_0_s3[20]);
		    cache_cosim0->mac_src_0_s3_21(mac_src_0_s3[21]);
		    cache_cosim0->mac_src_0_s3_22(mac_src_0_s3[22]);
		    cache_cosim0->mac_src_0_s3_23(mac_src_0_s3[23]);
		    cache_cosim0->mac_src_0_s3_24(mac_src_0_s3[24]);
		    cache_cosim0->mac_src_0_s3_25(mac_src_0_s3[25]);
		    cache_cosim0->mac_src_0_s3_26(mac_src_0_s3[26]);
		    cache_cosim0->mac_src_0_s3_27(mac_src_0_s3[27]);
		    cache_cosim0->mac_src_0_s3_28(mac_src_0_s3[28]);
		    cache_cosim0->mac_src_0_s3_29(mac_src_0_s3[29]);
		    cache_cosim0->mac_src_0_s3_30(mac_src_0_s3[30]);
		    cache_cosim0->mac_src_0_s3_31(mac_src_0_s3[31]);
		    cache_cosim0->mac_src_0_s4_0(mac_src_0_s4[0]);
		    cache_cosim0->mac_src_0_s4_1(mac_src_0_s4[1]);
		    cache_cosim0->mac_src_0_s4_2(mac_src_0_s4[2]);
		    cache_cosim0->mac_src_0_s4_3(mac_src_0_s4[3]);
		    cache_cosim0->mac_src_0_s4_4(mac_src_0_s4[4]);
		    cache_cosim0->mac_src_0_s4_5(mac_src_0_s4[5]);
		    cache_cosim0->mac_src_0_s4_6(mac_src_0_s4[6]);
		    cache_cosim0->mac_src_0_s4_7(mac_src_0_s4[7]);
		    cache_cosim0->mac_src_0_s4_8(mac_src_0_s4[8]);
		    cache_cosim0->mac_src_0_s4_9(mac_src_0_s4[9]);
		    cache_cosim0->mac_src_0_s4_10(mac_src_0_s4[10]);
		    cache_cosim0->mac_src_0_s4_11(mac_src_0_s4[11]);
		    cache_cosim0->mac_src_0_s4_12(mac_src_0_s4[12]);
		    cache_cosim0->mac_src_0_s4_13(mac_src_0_s4[13]);
		    cache_cosim0->mac_src_0_s4_14(mac_src_0_s4[14]);
		    cache_cosim0->mac_src_0_s4_15(mac_src_0_s4[15]);
		    cache_cosim0->mac_src_0_s4_16(mac_src_0_s4[16]);
		    cache_cosim0->mac_src_0_s4_17(mac_src_0_s4[17]);
		    cache_cosim0->mac_src_0_s4_18(mac_src_0_s4[18]);
		    cache_cosim0->mac_src_0_s4_19(mac_src_0_s4[19]);
		    cache_cosim0->mac_src_0_s4_20(mac_src_0_s4[20]);
		    cache_cosim0->mac_src_0_s4_21(mac_src_0_s4[21]);
		    cache_cosim0->mac_src_0_s4_22(mac_src_0_s4[22]);
		    cache_cosim0->mac_src_0_s4_23(mac_src_0_s4[23]);
		    cache_cosim0->mac_src_0_s4_24(mac_src_0_s4[24]);
		    cache_cosim0->mac_src_0_s4_25(mac_src_0_s4[25]);
		    cache_cosim0->mac_src_0_s4_26(mac_src_0_s4[26]);
		    cache_cosim0->mac_src_0_s4_27(mac_src_0_s4[27]);
		    cache_cosim0->mac_src_0_s4_28(mac_src_0_s4[28]);
		    cache_cosim0->mac_src_0_s4_29(mac_src_0_s4[29]);
		    cache_cosim0->mac_src_0_s4_30(mac_src_0_s4[30]);
		    cache_cosim0->mac_src_0_s4_31(mac_src_0_s4[31]);
		    cache_cosim0->mac_src_0_s5_0(mac_src_0_s5[0]);
		    cache_cosim0->mac_src_0_s5_1(mac_src_0_s5[1]);
		    cache_cosim0->mac_src_0_s5_2(mac_src_0_s5[2]);
		    cache_cosim0->mac_src_0_s5_3(mac_src_0_s5[3]);
		    cache_cosim0->mac_src_0_s5_4(mac_src_0_s5[4]);
		    cache_cosim0->mac_src_0_s5_5(mac_src_0_s5[5]);
		    cache_cosim0->mac_src_0_s5_6(mac_src_0_s5[6]);
		    cache_cosim0->mac_src_0_s5_7(mac_src_0_s5[7]);
		    cache_cosim0->mac_src_0_s5_8(mac_src_0_s5[8]);
		    cache_cosim0->mac_src_0_s5_9(mac_src_0_s5[9]);
		    cache_cosim0->mac_src_0_s5_10(mac_src_0_s5[10]);
		    cache_cosim0->mac_src_0_s5_11(mac_src_0_s5[11]);
		    cache_cosim0->mac_src_0_s5_12(mac_src_0_s5[12]);
		    cache_cosim0->mac_src_0_s5_13(mac_src_0_s5[13]);
		    cache_cosim0->mac_src_0_s5_14(mac_src_0_s5[14]);
		    cache_cosim0->mac_src_0_s5_15(mac_src_0_s5[15]);
		    cache_cosim0->mac_src_0_s5_16(mac_src_0_s5[16]);
		    cache_cosim0->mac_src_0_s5_17(mac_src_0_s5[17]);
		    cache_cosim0->mac_src_0_s5_18(mac_src_0_s5[18]);
		    cache_cosim0->mac_src_0_s5_19(mac_src_0_s5[19]);
		    cache_cosim0->mac_src_0_s5_20(mac_src_0_s5[20]);
		    cache_cosim0->mac_src_0_s5_21(mac_src_0_s5[21]);
		    cache_cosim0->mac_src_0_s5_22(mac_src_0_s5[22]);
		    cache_cosim0->mac_src_0_s5_23(mac_src_0_s5[23]);
		    cache_cosim0->mac_src_0_s5_24(mac_src_0_s5[24]);
		    cache_cosim0->mac_src_0_s5_25(mac_src_0_s5[25]);
		    cache_cosim0->mac_src_0_s5_26(mac_src_0_s5[26]);
		    cache_cosim0->mac_src_0_s5_27(mac_src_0_s5[27]);
		    cache_cosim0->mac_src_0_s5_28(mac_src_0_s5[28]);
		    cache_cosim0->mac_src_0_s5_29(mac_src_0_s5[29]);
		    cache_cosim0->mac_src_0_s5_30(mac_src_0_s5[30]);
		    cache_cosim0->mac_src_0_s5_31(mac_src_0_s5[31]);
		    cache_cosim0->mac_src_0_s6_0(mac_src_0_s6[0]);
		    cache_cosim0->mac_src_0_s6_1(mac_src_0_s6[1]);
		    cache_cosim0->mac_src_0_s6_2(mac_src_0_s6[2]);
		    cache_cosim0->mac_src_0_s6_3(mac_src_0_s6[3]);
		    cache_cosim0->mac_src_0_s6_4(mac_src_0_s6[4]);
		    cache_cosim0->mac_src_0_s6_5(mac_src_0_s6[5]);
		    cache_cosim0->mac_src_0_s6_6(mac_src_0_s6[6]);
		    cache_cosim0->mac_src_0_s6_7(mac_src_0_s6[7]);
		    cache_cosim0->mac_src_0_s6_8(mac_src_0_s6[8]);
		    cache_cosim0->mac_src_0_s6_9(mac_src_0_s6[9]);
		    cache_cosim0->mac_src_0_s6_10(mac_src_0_s6[10]);
		    cache_cosim0->mac_src_0_s6_11(mac_src_0_s6[11]);
		    cache_cosim0->mac_src_0_s6_12(mac_src_0_s6[12]);
		    cache_cosim0->mac_src_0_s6_13(mac_src_0_s6[13]);
		    cache_cosim0->mac_src_0_s6_14(mac_src_0_s6[14]);
		    cache_cosim0->mac_src_0_s6_15(mac_src_0_s6[15]);
		    cache_cosim0->mac_src_0_s6_16(mac_src_0_s6[16]);
		    cache_cosim0->mac_src_0_s6_17(mac_src_0_s6[17]);
		    cache_cosim0->mac_src_0_s6_18(mac_src_0_s6[18]);
		    cache_cosim0->mac_src_0_s6_19(mac_src_0_s6[19]);
		    cache_cosim0->mac_src_0_s6_20(mac_src_0_s6[20]);
		    cache_cosim0->mac_src_0_s6_21(mac_src_0_s6[21]);
		    cache_cosim0->mac_src_0_s6_22(mac_src_0_s6[22]);
		    cache_cosim0->mac_src_0_s6_23(mac_src_0_s6[23]);
		    cache_cosim0->mac_src_0_s6_24(mac_src_0_s6[24]);
		    cache_cosim0->mac_src_0_s6_25(mac_src_0_s6[25]);
		    cache_cosim0->mac_src_0_s6_26(mac_src_0_s6[26]);
		    cache_cosim0->mac_src_0_s6_27(mac_src_0_s6[27]);
		    cache_cosim0->mac_src_0_s6_28(mac_src_0_s6[28]);
		    cache_cosim0->mac_src_0_s6_29(mac_src_0_s6[29]);
		    cache_cosim0->mac_src_0_s6_30(mac_src_0_s6[30]);
		    cache_cosim0->mac_src_0_s6_31(mac_src_0_s6[31]);
		    cache_cosim0->mac_src_1_0(mac_src_1[0]);
		    cache_cosim0->mac_src_1_1(mac_src_1[1]);
		    cache_cosim0->mac_src_1_2(mac_src_1[2]);
		    cache_cosim0->mac_src_1_3(mac_src_1[3]);
		    cache_cosim0->mac_src_1_4(mac_src_1[4]);
		    cache_cosim0->mac_src_1_5(mac_src_1[5]);
		    cache_cosim0->mac_src_1_6(mac_src_1[6]);
		    cache_cosim0->mac_src_1_7(mac_src_1[7]);
		    cache_cosim0->mac_src_1_8(mac_src_1[8]);
		    cache_cosim0->mac_src_1_9(mac_src_1[9]);
		    cache_cosim0->mac_src_1_10(mac_src_1[10]);
		    cache_cosim0->mac_src_1_11(mac_src_1[11]);
		    cache_cosim0->mac_src_1_12(mac_src_1[12]);
		    cache_cosim0->mac_src_1_13(mac_src_1[13]);
		    cache_cosim0->mac_src_1_14(mac_src_1[14]);
		    cache_cosim0->mac_src_1_15(mac_src_1[15]);
		    cache_cosim0->mac_src_1_16(mac_src_1[16]);
		    cache_cosim0->mac_src_1_17(mac_src_1[17]);
		    cache_cosim0->mac_src_1_18(mac_src_1[18]);
		    cache_cosim0->mac_src_1_19(mac_src_1[19]);
		    cache_cosim0->mac_src_1_20(mac_src_1[20]);
		    cache_cosim0->mac_src_1_21(mac_src_1[21]);
		    cache_cosim0->mac_src_1_22(mac_src_1[22]);
		    cache_cosim0->mac_src_1_23(mac_src_1[23]);
		    cache_cosim0->mac_src_1_24(mac_src_1[24]);
		    cache_cosim0->mac_src_1_25(mac_src_1[25]);
		    cache_cosim0->mac_src_1_26(mac_src_1[26]);
		    cache_cosim0->mac_src_1_27(mac_src_1[27]);
		    cache_cosim0->mac_src_1_28(mac_src_1[28]);
		    cache_cosim0->mac_src_1_29(mac_src_1[29]);
		    cache_cosim0->mac_src_1_30(mac_src_1[30]);
		    cache_cosim0->mac_src_1_31(mac_src_1[31]);
		    cache_cosim0->mac_src_valid(mac_src_valid);
		    cache_cosim0->mac_clear(mac_clear);

			break;
		case BDWRep_RTL_HDL:
		    cache_cosim0 = new cache_cosim( "cache" );

		    cache_cosim0->clk(clk);
		    cache_cosim0->rstn(rstn);
		    cache_cosim0->cache_en(cache_en);
		    cache_cosim0->systolic_en(systolic_en);
		    cache_cosim0->systolic_depth(systolic_depth);
		    cache_cosim0->addr_if_start(addr_if_start);
		    cache_cosim0->systolic_sel(systolic_sel);
		    cache_cosim0->feature_data(feature_data);
		    cache_cosim0->feature_share_en(feature_share_en);
		    cache_cosim0->feature_data_en(feature_data_en);
		    cache_cosim0->feature_data_sel(feature_data_sel);
		    cache_cosim0->weight_data(weight_data);
		    cache_cosim0->weight_data_en(weight_data_en);
		    cache_cosim0->mac_src_0_s0_0(mac_src_0_s0[0]);
		    cache_cosim0->mac_src_0_s0_1(mac_src_0_s0[1]);
		    cache_cosim0->mac_src_0_s0_2(mac_src_0_s0[2]);
		    cache_cosim0->mac_src_0_s0_3(mac_src_0_s0[3]);
		    cache_cosim0->mac_src_0_s0_4(mac_src_0_s0[4]);
		    cache_cosim0->mac_src_0_s0_5(mac_src_0_s0[5]);
		    cache_cosim0->mac_src_0_s0_6(mac_src_0_s0[6]);
		    cache_cosim0->mac_src_0_s0_7(mac_src_0_s0[7]);
		    cache_cosim0->mac_src_0_s0_8(mac_src_0_s0[8]);
		    cache_cosim0->mac_src_0_s0_9(mac_src_0_s0[9]);
		    cache_cosim0->mac_src_0_s0_10(mac_src_0_s0[10]);
		    cache_cosim0->mac_src_0_s0_11(mac_src_0_s0[11]);
		    cache_cosim0->mac_src_0_s0_12(mac_src_0_s0[12]);
		    cache_cosim0->mac_src_0_s0_13(mac_src_0_s0[13]);
		    cache_cosim0->mac_src_0_s0_14(mac_src_0_s0[14]);
		    cache_cosim0->mac_src_0_s0_15(mac_src_0_s0[15]);
		    cache_cosim0->mac_src_0_s0_16(mac_src_0_s0[16]);
		    cache_cosim0->mac_src_0_s0_17(mac_src_0_s0[17]);
		    cache_cosim0->mac_src_0_s0_18(mac_src_0_s0[18]);
		    cache_cosim0->mac_src_0_s0_19(mac_src_0_s0[19]);
		    cache_cosim0->mac_src_0_s0_20(mac_src_0_s0[20]);
		    cache_cosim0->mac_src_0_s0_21(mac_src_0_s0[21]);
		    cache_cosim0->mac_src_0_s0_22(mac_src_0_s0[22]);
		    cache_cosim0->mac_src_0_s0_23(mac_src_0_s0[23]);
		    cache_cosim0->mac_src_0_s0_24(mac_src_0_s0[24]);
		    cache_cosim0->mac_src_0_s0_25(mac_src_0_s0[25]);
		    cache_cosim0->mac_src_0_s0_26(mac_src_0_s0[26]);
		    cache_cosim0->mac_src_0_s0_27(mac_src_0_s0[27]);
		    cache_cosim0->mac_src_0_s0_28(mac_src_0_s0[28]);
		    cache_cosim0->mac_src_0_s0_29(mac_src_0_s0[29]);
		    cache_cosim0->mac_src_0_s0_30(mac_src_0_s0[30]);
		    cache_cosim0->mac_src_0_s0_31(mac_src_0_s0[31]);
		    cache_cosim0->mac_src_0_s1_0(mac_src_0_s1[0]);
		    cache_cosim0->mac_src_0_s1_1(mac_src_0_s1[1]);
		    cache_cosim0->mac_src_0_s1_2(mac_src_0_s1[2]);
		    cache_cosim0->mac_src_0_s1_3(mac_src_0_s1[3]);
		    cache_cosim0->mac_src_0_s1_4(mac_src_0_s1[4]);
		    cache_cosim0->mac_src_0_s1_5(mac_src_0_s1[5]);
		    cache_cosim0->mac_src_0_s1_6(mac_src_0_s1[6]);
		    cache_cosim0->mac_src_0_s1_7(mac_src_0_s1[7]);
		    cache_cosim0->mac_src_0_s1_8(mac_src_0_s1[8]);
		    cache_cosim0->mac_src_0_s1_9(mac_src_0_s1[9]);
		    cache_cosim0->mac_src_0_s1_10(mac_src_0_s1[10]);
		    cache_cosim0->mac_src_0_s1_11(mac_src_0_s1[11]);
		    cache_cosim0->mac_src_0_s1_12(mac_src_0_s1[12]);
		    cache_cosim0->mac_src_0_s1_13(mac_src_0_s1[13]);
		    cache_cosim0->mac_src_0_s1_14(mac_src_0_s1[14]);
		    cache_cosim0->mac_src_0_s1_15(mac_src_0_s1[15]);
		    cache_cosim0->mac_src_0_s1_16(mac_src_0_s1[16]);
		    cache_cosim0->mac_src_0_s1_17(mac_src_0_s1[17]);
		    cache_cosim0->mac_src_0_s1_18(mac_src_0_s1[18]);
		    cache_cosim0->mac_src_0_s1_19(mac_src_0_s1[19]);
		    cache_cosim0->mac_src_0_s1_20(mac_src_0_s1[20]);
		    cache_cosim0->mac_src_0_s1_21(mac_src_0_s1[21]);
		    cache_cosim0->mac_src_0_s1_22(mac_src_0_s1[22]);
		    cache_cosim0->mac_src_0_s1_23(mac_src_0_s1[23]);
		    cache_cosim0->mac_src_0_s1_24(mac_src_0_s1[24]);
		    cache_cosim0->mac_src_0_s1_25(mac_src_0_s1[25]);
		    cache_cosim0->mac_src_0_s1_26(mac_src_0_s1[26]);
		    cache_cosim0->mac_src_0_s1_27(mac_src_0_s1[27]);
		    cache_cosim0->mac_src_0_s1_28(mac_src_0_s1[28]);
		    cache_cosim0->mac_src_0_s1_29(mac_src_0_s1[29]);
		    cache_cosim0->mac_src_0_s1_30(mac_src_0_s1[30]);
		    cache_cosim0->mac_src_0_s1_31(mac_src_0_s1[31]);
		    cache_cosim0->mac_src_0_s2_0(mac_src_0_s2[0]);
		    cache_cosim0->mac_src_0_s2_1(mac_src_0_s2[1]);
		    cache_cosim0->mac_src_0_s2_2(mac_src_0_s2[2]);
		    cache_cosim0->mac_src_0_s2_3(mac_src_0_s2[3]);
		    cache_cosim0->mac_src_0_s2_4(mac_src_0_s2[4]);
		    cache_cosim0->mac_src_0_s2_5(mac_src_0_s2[5]);
		    cache_cosim0->mac_src_0_s2_6(mac_src_0_s2[6]);
		    cache_cosim0->mac_src_0_s2_7(mac_src_0_s2[7]);
		    cache_cosim0->mac_src_0_s2_8(mac_src_0_s2[8]);
		    cache_cosim0->mac_src_0_s2_9(mac_src_0_s2[9]);
		    cache_cosim0->mac_src_0_s2_10(mac_src_0_s2[10]);
		    cache_cosim0->mac_src_0_s2_11(mac_src_0_s2[11]);
		    cache_cosim0->mac_src_0_s2_12(mac_src_0_s2[12]);
		    cache_cosim0->mac_src_0_s2_13(mac_src_0_s2[13]);
		    cache_cosim0->mac_src_0_s2_14(mac_src_0_s2[14]);
		    cache_cosim0->mac_src_0_s2_15(mac_src_0_s2[15]);
		    cache_cosim0->mac_src_0_s2_16(mac_src_0_s2[16]);
		    cache_cosim0->mac_src_0_s2_17(mac_src_0_s2[17]);
		    cache_cosim0->mac_src_0_s2_18(mac_src_0_s2[18]);
		    cache_cosim0->mac_src_0_s2_19(mac_src_0_s2[19]);
		    cache_cosim0->mac_src_0_s2_20(mac_src_0_s2[20]);
		    cache_cosim0->mac_src_0_s2_21(mac_src_0_s2[21]);
		    cache_cosim0->mac_src_0_s2_22(mac_src_0_s2[22]);
		    cache_cosim0->mac_src_0_s2_23(mac_src_0_s2[23]);
		    cache_cosim0->mac_src_0_s2_24(mac_src_0_s2[24]);
		    cache_cosim0->mac_src_0_s2_25(mac_src_0_s2[25]);
		    cache_cosim0->mac_src_0_s2_26(mac_src_0_s2[26]);
		    cache_cosim0->mac_src_0_s2_27(mac_src_0_s2[27]);
		    cache_cosim0->mac_src_0_s2_28(mac_src_0_s2[28]);
		    cache_cosim0->mac_src_0_s2_29(mac_src_0_s2[29]);
		    cache_cosim0->mac_src_0_s2_30(mac_src_0_s2[30]);
		    cache_cosim0->mac_src_0_s2_31(mac_src_0_s2[31]);
		    cache_cosim0->mac_src_0_s3_0(mac_src_0_s3[0]);
		    cache_cosim0->mac_src_0_s3_1(mac_src_0_s3[1]);
		    cache_cosim0->mac_src_0_s3_2(mac_src_0_s3[2]);
		    cache_cosim0->mac_src_0_s3_3(mac_src_0_s3[3]);
		    cache_cosim0->mac_src_0_s3_4(mac_src_0_s3[4]);
		    cache_cosim0->mac_src_0_s3_5(mac_src_0_s3[5]);
		    cache_cosim0->mac_src_0_s3_6(mac_src_0_s3[6]);
		    cache_cosim0->mac_src_0_s3_7(mac_src_0_s3[7]);
		    cache_cosim0->mac_src_0_s3_8(mac_src_0_s3[8]);
		    cache_cosim0->mac_src_0_s3_9(mac_src_0_s3[9]);
		    cache_cosim0->mac_src_0_s3_10(mac_src_0_s3[10]);
		    cache_cosim0->mac_src_0_s3_11(mac_src_0_s3[11]);
		    cache_cosim0->mac_src_0_s3_12(mac_src_0_s3[12]);
		    cache_cosim0->mac_src_0_s3_13(mac_src_0_s3[13]);
		    cache_cosim0->mac_src_0_s3_14(mac_src_0_s3[14]);
		    cache_cosim0->mac_src_0_s3_15(mac_src_0_s3[15]);
		    cache_cosim0->mac_src_0_s3_16(mac_src_0_s3[16]);
		    cache_cosim0->mac_src_0_s3_17(mac_src_0_s3[17]);
		    cache_cosim0->mac_src_0_s3_18(mac_src_0_s3[18]);
		    cache_cosim0->mac_src_0_s3_19(mac_src_0_s3[19]);
		    cache_cosim0->mac_src_0_s3_20(mac_src_0_s3[20]);
		    cache_cosim0->mac_src_0_s3_21(mac_src_0_s3[21]);
		    cache_cosim0->mac_src_0_s3_22(mac_src_0_s3[22]);
		    cache_cosim0->mac_src_0_s3_23(mac_src_0_s3[23]);
		    cache_cosim0->mac_src_0_s3_24(mac_src_0_s3[24]);
		    cache_cosim0->mac_src_0_s3_25(mac_src_0_s3[25]);
		    cache_cosim0->mac_src_0_s3_26(mac_src_0_s3[26]);
		    cache_cosim0->mac_src_0_s3_27(mac_src_0_s3[27]);
		    cache_cosim0->mac_src_0_s3_28(mac_src_0_s3[28]);
		    cache_cosim0->mac_src_0_s3_29(mac_src_0_s3[29]);
		    cache_cosim0->mac_src_0_s3_30(mac_src_0_s3[30]);
		    cache_cosim0->mac_src_0_s3_31(mac_src_0_s3[31]);
		    cache_cosim0->mac_src_0_s4_0(mac_src_0_s4[0]);
		    cache_cosim0->mac_src_0_s4_1(mac_src_0_s4[1]);
		    cache_cosim0->mac_src_0_s4_2(mac_src_0_s4[2]);
		    cache_cosim0->mac_src_0_s4_3(mac_src_0_s4[3]);
		    cache_cosim0->mac_src_0_s4_4(mac_src_0_s4[4]);
		    cache_cosim0->mac_src_0_s4_5(mac_src_0_s4[5]);
		    cache_cosim0->mac_src_0_s4_6(mac_src_0_s4[6]);
		    cache_cosim0->mac_src_0_s4_7(mac_src_0_s4[7]);
		    cache_cosim0->mac_src_0_s4_8(mac_src_0_s4[8]);
		    cache_cosim0->mac_src_0_s4_9(mac_src_0_s4[9]);
		    cache_cosim0->mac_src_0_s4_10(mac_src_0_s4[10]);
		    cache_cosim0->mac_src_0_s4_11(mac_src_0_s4[11]);
		    cache_cosim0->mac_src_0_s4_12(mac_src_0_s4[12]);
		    cache_cosim0->mac_src_0_s4_13(mac_src_0_s4[13]);
		    cache_cosim0->mac_src_0_s4_14(mac_src_0_s4[14]);
		    cache_cosim0->mac_src_0_s4_15(mac_src_0_s4[15]);
		    cache_cosim0->mac_src_0_s4_16(mac_src_0_s4[16]);
		    cache_cosim0->mac_src_0_s4_17(mac_src_0_s4[17]);
		    cache_cosim0->mac_src_0_s4_18(mac_src_0_s4[18]);
		    cache_cosim0->mac_src_0_s4_19(mac_src_0_s4[19]);
		    cache_cosim0->mac_src_0_s4_20(mac_src_0_s4[20]);
		    cache_cosim0->mac_src_0_s4_21(mac_src_0_s4[21]);
		    cache_cosim0->mac_src_0_s4_22(mac_src_0_s4[22]);
		    cache_cosim0->mac_src_0_s4_23(mac_src_0_s4[23]);
		    cache_cosim0->mac_src_0_s4_24(mac_src_0_s4[24]);
		    cache_cosim0->mac_src_0_s4_25(mac_src_0_s4[25]);
		    cache_cosim0->mac_src_0_s4_26(mac_src_0_s4[26]);
		    cache_cosim0->mac_src_0_s4_27(mac_src_0_s4[27]);
		    cache_cosim0->mac_src_0_s4_28(mac_src_0_s4[28]);
		    cache_cosim0->mac_src_0_s4_29(mac_src_0_s4[29]);
		    cache_cosim0->mac_src_0_s4_30(mac_src_0_s4[30]);
		    cache_cosim0->mac_src_0_s4_31(mac_src_0_s4[31]);
		    cache_cosim0->mac_src_0_s5_0(mac_src_0_s5[0]);
		    cache_cosim0->mac_src_0_s5_1(mac_src_0_s5[1]);
		    cache_cosim0->mac_src_0_s5_2(mac_src_0_s5[2]);
		    cache_cosim0->mac_src_0_s5_3(mac_src_0_s5[3]);
		    cache_cosim0->mac_src_0_s5_4(mac_src_0_s5[4]);
		    cache_cosim0->mac_src_0_s5_5(mac_src_0_s5[5]);
		    cache_cosim0->mac_src_0_s5_6(mac_src_0_s5[6]);
		    cache_cosim0->mac_src_0_s5_7(mac_src_0_s5[7]);
		    cache_cosim0->mac_src_0_s5_8(mac_src_0_s5[8]);
		    cache_cosim0->mac_src_0_s5_9(mac_src_0_s5[9]);
		    cache_cosim0->mac_src_0_s5_10(mac_src_0_s5[10]);
		    cache_cosim0->mac_src_0_s5_11(mac_src_0_s5[11]);
		    cache_cosim0->mac_src_0_s5_12(mac_src_0_s5[12]);
		    cache_cosim0->mac_src_0_s5_13(mac_src_0_s5[13]);
		    cache_cosim0->mac_src_0_s5_14(mac_src_0_s5[14]);
		    cache_cosim0->mac_src_0_s5_15(mac_src_0_s5[15]);
		    cache_cosim0->mac_src_0_s5_16(mac_src_0_s5[16]);
		    cache_cosim0->mac_src_0_s5_17(mac_src_0_s5[17]);
		    cache_cosim0->mac_src_0_s5_18(mac_src_0_s5[18]);
		    cache_cosim0->mac_src_0_s5_19(mac_src_0_s5[19]);
		    cache_cosim0->mac_src_0_s5_20(mac_src_0_s5[20]);
		    cache_cosim0->mac_src_0_s5_21(mac_src_0_s5[21]);
		    cache_cosim0->mac_src_0_s5_22(mac_src_0_s5[22]);
		    cache_cosim0->mac_src_0_s5_23(mac_src_0_s5[23]);
		    cache_cosim0->mac_src_0_s5_24(mac_src_0_s5[24]);
		    cache_cosim0->mac_src_0_s5_25(mac_src_0_s5[25]);
		    cache_cosim0->mac_src_0_s5_26(mac_src_0_s5[26]);
		    cache_cosim0->mac_src_0_s5_27(mac_src_0_s5[27]);
		    cache_cosim0->mac_src_0_s5_28(mac_src_0_s5[28]);
		    cache_cosim0->mac_src_0_s5_29(mac_src_0_s5[29]);
		    cache_cosim0->mac_src_0_s5_30(mac_src_0_s5[30]);
		    cache_cosim0->mac_src_0_s5_31(mac_src_0_s5[31]);
		    cache_cosim0->mac_src_0_s6_0(mac_src_0_s6[0]);
		    cache_cosim0->mac_src_0_s6_1(mac_src_0_s6[1]);
		    cache_cosim0->mac_src_0_s6_2(mac_src_0_s6[2]);
		    cache_cosim0->mac_src_0_s6_3(mac_src_0_s6[3]);
		    cache_cosim0->mac_src_0_s6_4(mac_src_0_s6[4]);
		    cache_cosim0->mac_src_0_s6_5(mac_src_0_s6[5]);
		    cache_cosim0->mac_src_0_s6_6(mac_src_0_s6[6]);
		    cache_cosim0->mac_src_0_s6_7(mac_src_0_s6[7]);
		    cache_cosim0->mac_src_0_s6_8(mac_src_0_s6[8]);
		    cache_cosim0->mac_src_0_s6_9(mac_src_0_s6[9]);
		    cache_cosim0->mac_src_0_s6_10(mac_src_0_s6[10]);
		    cache_cosim0->mac_src_0_s6_11(mac_src_0_s6[11]);
		    cache_cosim0->mac_src_0_s6_12(mac_src_0_s6[12]);
		    cache_cosim0->mac_src_0_s6_13(mac_src_0_s6[13]);
		    cache_cosim0->mac_src_0_s6_14(mac_src_0_s6[14]);
		    cache_cosim0->mac_src_0_s6_15(mac_src_0_s6[15]);
		    cache_cosim0->mac_src_0_s6_16(mac_src_0_s6[16]);
		    cache_cosim0->mac_src_0_s6_17(mac_src_0_s6[17]);
		    cache_cosim0->mac_src_0_s6_18(mac_src_0_s6[18]);
		    cache_cosim0->mac_src_0_s6_19(mac_src_0_s6[19]);
		    cache_cosim0->mac_src_0_s6_20(mac_src_0_s6[20]);
		    cache_cosim0->mac_src_0_s6_21(mac_src_0_s6[21]);
		    cache_cosim0->mac_src_0_s6_22(mac_src_0_s6[22]);
		    cache_cosim0->mac_src_0_s6_23(mac_src_0_s6[23]);
		    cache_cosim0->mac_src_0_s6_24(mac_src_0_s6[24]);
		    cache_cosim0->mac_src_0_s6_25(mac_src_0_s6[25]);
		    cache_cosim0->mac_src_0_s6_26(mac_src_0_s6[26]);
		    cache_cosim0->mac_src_0_s6_27(mac_src_0_s6[27]);
		    cache_cosim0->mac_src_0_s6_28(mac_src_0_s6[28]);
		    cache_cosim0->mac_src_0_s6_29(mac_src_0_s6[29]);
		    cache_cosim0->mac_src_0_s6_30(mac_src_0_s6[30]);
		    cache_cosim0->mac_src_0_s6_31(mac_src_0_s6[31]);
		    cache_cosim0->mac_src_1_0(mac_src_1[0]);
		    cache_cosim0->mac_src_1_1(mac_src_1[1]);
		    cache_cosim0->mac_src_1_2(mac_src_1[2]);
		    cache_cosim0->mac_src_1_3(mac_src_1[3]);
		    cache_cosim0->mac_src_1_4(mac_src_1[4]);
		    cache_cosim0->mac_src_1_5(mac_src_1[5]);
		    cache_cosim0->mac_src_1_6(mac_src_1[6]);
		    cache_cosim0->mac_src_1_7(mac_src_1[7]);
		    cache_cosim0->mac_src_1_8(mac_src_1[8]);
		    cache_cosim0->mac_src_1_9(mac_src_1[9]);
		    cache_cosim0->mac_src_1_10(mac_src_1[10]);
		    cache_cosim0->mac_src_1_11(mac_src_1[11]);
		    cache_cosim0->mac_src_1_12(mac_src_1[12]);
		    cache_cosim0->mac_src_1_13(mac_src_1[13]);
		    cache_cosim0->mac_src_1_14(mac_src_1[14]);
		    cache_cosim0->mac_src_1_15(mac_src_1[15]);
		    cache_cosim0->mac_src_1_16(mac_src_1[16]);
		    cache_cosim0->mac_src_1_17(mac_src_1[17]);
		    cache_cosim0->mac_src_1_18(mac_src_1[18]);
		    cache_cosim0->mac_src_1_19(mac_src_1[19]);
		    cache_cosim0->mac_src_1_20(mac_src_1[20]);
		    cache_cosim0->mac_src_1_21(mac_src_1[21]);
		    cache_cosim0->mac_src_1_22(mac_src_1[22]);
		    cache_cosim0->mac_src_1_23(mac_src_1[23]);
		    cache_cosim0->mac_src_1_24(mac_src_1[24]);
		    cache_cosim0->mac_src_1_25(mac_src_1[25]);
		    cache_cosim0->mac_src_1_26(mac_src_1[26]);
		    cache_cosim0->mac_src_1_27(mac_src_1[27]);
		    cache_cosim0->mac_src_1_28(mac_src_1[28]);
		    cache_cosim0->mac_src_1_29(mac_src_1[29]);
		    cache_cosim0->mac_src_1_30(mac_src_1[30]);
		    cache_cosim0->mac_src_1_31(mac_src_1[31]);
		    cache_cosim0->mac_src_valid(mac_src_valid);
		    cache_cosim0->mac_clear(mac_clear);

			break;
        case BDWRep_CYC_HDL:
            if ( cache_cycsim_factory_p )
                cache_cycsim0 = cache_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module cache");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"cache\"");

		    cache_cycsim0->clk(clk);
		    cache_cycsim0->rstn(rstn);
		    cache_cycsim0->cache_en(cache_en);
		    cache_cycsim0->systolic_en(systolic_en);
		    cache_cycsim0->systolic_depth(systolic_depth);
		    cache_cycsim0->addr_if_start(addr_if_start);
		    cache_cycsim0->systolic_sel(systolic_sel);
		    cache_cycsim0->feature_data(feature_data);
		    cache_cycsim0->feature_share_en(feature_share_en);
		    cache_cycsim0->feature_data_en(feature_data_en);
		    cache_cycsim0->feature_data_sel(feature_data_sel);
		    cache_cycsim0->weight_data(weight_data);
		    cache_cycsim0->weight_data_en(weight_data_en);
		    cache_cycsim0->mac_src_0_s0_0(mac_src_0_s0[0]);
		    cache_cycsim0->mac_src_0_s0_1(mac_src_0_s0[1]);
		    cache_cycsim0->mac_src_0_s0_2(mac_src_0_s0[2]);
		    cache_cycsim0->mac_src_0_s0_3(mac_src_0_s0[3]);
		    cache_cycsim0->mac_src_0_s0_4(mac_src_0_s0[4]);
		    cache_cycsim0->mac_src_0_s0_5(mac_src_0_s0[5]);
		    cache_cycsim0->mac_src_0_s0_6(mac_src_0_s0[6]);
		    cache_cycsim0->mac_src_0_s0_7(mac_src_0_s0[7]);
		    cache_cycsim0->mac_src_0_s0_8(mac_src_0_s0[8]);
		    cache_cycsim0->mac_src_0_s0_9(mac_src_0_s0[9]);
		    cache_cycsim0->mac_src_0_s0_10(mac_src_0_s0[10]);
		    cache_cycsim0->mac_src_0_s0_11(mac_src_0_s0[11]);
		    cache_cycsim0->mac_src_0_s0_12(mac_src_0_s0[12]);
		    cache_cycsim0->mac_src_0_s0_13(mac_src_0_s0[13]);
		    cache_cycsim0->mac_src_0_s0_14(mac_src_0_s0[14]);
		    cache_cycsim0->mac_src_0_s0_15(mac_src_0_s0[15]);
		    cache_cycsim0->mac_src_0_s0_16(mac_src_0_s0[16]);
		    cache_cycsim0->mac_src_0_s0_17(mac_src_0_s0[17]);
		    cache_cycsim0->mac_src_0_s0_18(mac_src_0_s0[18]);
		    cache_cycsim0->mac_src_0_s0_19(mac_src_0_s0[19]);
		    cache_cycsim0->mac_src_0_s0_20(mac_src_0_s0[20]);
		    cache_cycsim0->mac_src_0_s0_21(mac_src_0_s0[21]);
		    cache_cycsim0->mac_src_0_s0_22(mac_src_0_s0[22]);
		    cache_cycsim0->mac_src_0_s0_23(mac_src_0_s0[23]);
		    cache_cycsim0->mac_src_0_s0_24(mac_src_0_s0[24]);
		    cache_cycsim0->mac_src_0_s0_25(mac_src_0_s0[25]);
		    cache_cycsim0->mac_src_0_s0_26(mac_src_0_s0[26]);
		    cache_cycsim0->mac_src_0_s0_27(mac_src_0_s0[27]);
		    cache_cycsim0->mac_src_0_s0_28(mac_src_0_s0[28]);
		    cache_cycsim0->mac_src_0_s0_29(mac_src_0_s0[29]);
		    cache_cycsim0->mac_src_0_s0_30(mac_src_0_s0[30]);
		    cache_cycsim0->mac_src_0_s0_31(mac_src_0_s0[31]);
		    cache_cycsim0->mac_src_0_s1_0(mac_src_0_s1[0]);
		    cache_cycsim0->mac_src_0_s1_1(mac_src_0_s1[1]);
		    cache_cycsim0->mac_src_0_s1_2(mac_src_0_s1[2]);
		    cache_cycsim0->mac_src_0_s1_3(mac_src_0_s1[3]);
		    cache_cycsim0->mac_src_0_s1_4(mac_src_0_s1[4]);
		    cache_cycsim0->mac_src_0_s1_5(mac_src_0_s1[5]);
		    cache_cycsim0->mac_src_0_s1_6(mac_src_0_s1[6]);
		    cache_cycsim0->mac_src_0_s1_7(mac_src_0_s1[7]);
		    cache_cycsim0->mac_src_0_s1_8(mac_src_0_s1[8]);
		    cache_cycsim0->mac_src_0_s1_9(mac_src_0_s1[9]);
		    cache_cycsim0->mac_src_0_s1_10(mac_src_0_s1[10]);
		    cache_cycsim0->mac_src_0_s1_11(mac_src_0_s1[11]);
		    cache_cycsim0->mac_src_0_s1_12(mac_src_0_s1[12]);
		    cache_cycsim0->mac_src_0_s1_13(mac_src_0_s1[13]);
		    cache_cycsim0->mac_src_0_s1_14(mac_src_0_s1[14]);
		    cache_cycsim0->mac_src_0_s1_15(mac_src_0_s1[15]);
		    cache_cycsim0->mac_src_0_s1_16(mac_src_0_s1[16]);
		    cache_cycsim0->mac_src_0_s1_17(mac_src_0_s1[17]);
		    cache_cycsim0->mac_src_0_s1_18(mac_src_0_s1[18]);
		    cache_cycsim0->mac_src_0_s1_19(mac_src_0_s1[19]);
		    cache_cycsim0->mac_src_0_s1_20(mac_src_0_s1[20]);
		    cache_cycsim0->mac_src_0_s1_21(mac_src_0_s1[21]);
		    cache_cycsim0->mac_src_0_s1_22(mac_src_0_s1[22]);
		    cache_cycsim0->mac_src_0_s1_23(mac_src_0_s1[23]);
		    cache_cycsim0->mac_src_0_s1_24(mac_src_0_s1[24]);
		    cache_cycsim0->mac_src_0_s1_25(mac_src_0_s1[25]);
		    cache_cycsim0->mac_src_0_s1_26(mac_src_0_s1[26]);
		    cache_cycsim0->mac_src_0_s1_27(mac_src_0_s1[27]);
		    cache_cycsim0->mac_src_0_s1_28(mac_src_0_s1[28]);
		    cache_cycsim0->mac_src_0_s1_29(mac_src_0_s1[29]);
		    cache_cycsim0->mac_src_0_s1_30(mac_src_0_s1[30]);
		    cache_cycsim0->mac_src_0_s1_31(mac_src_0_s1[31]);
		    cache_cycsim0->mac_src_0_s2_0(mac_src_0_s2[0]);
		    cache_cycsim0->mac_src_0_s2_1(mac_src_0_s2[1]);
		    cache_cycsim0->mac_src_0_s2_2(mac_src_0_s2[2]);
		    cache_cycsim0->mac_src_0_s2_3(mac_src_0_s2[3]);
		    cache_cycsim0->mac_src_0_s2_4(mac_src_0_s2[4]);
		    cache_cycsim0->mac_src_0_s2_5(mac_src_0_s2[5]);
		    cache_cycsim0->mac_src_0_s2_6(mac_src_0_s2[6]);
		    cache_cycsim0->mac_src_0_s2_7(mac_src_0_s2[7]);
		    cache_cycsim0->mac_src_0_s2_8(mac_src_0_s2[8]);
		    cache_cycsim0->mac_src_0_s2_9(mac_src_0_s2[9]);
		    cache_cycsim0->mac_src_0_s2_10(mac_src_0_s2[10]);
		    cache_cycsim0->mac_src_0_s2_11(mac_src_0_s2[11]);
		    cache_cycsim0->mac_src_0_s2_12(mac_src_0_s2[12]);
		    cache_cycsim0->mac_src_0_s2_13(mac_src_0_s2[13]);
		    cache_cycsim0->mac_src_0_s2_14(mac_src_0_s2[14]);
		    cache_cycsim0->mac_src_0_s2_15(mac_src_0_s2[15]);
		    cache_cycsim0->mac_src_0_s2_16(mac_src_0_s2[16]);
		    cache_cycsim0->mac_src_0_s2_17(mac_src_0_s2[17]);
		    cache_cycsim0->mac_src_0_s2_18(mac_src_0_s2[18]);
		    cache_cycsim0->mac_src_0_s2_19(mac_src_0_s2[19]);
		    cache_cycsim0->mac_src_0_s2_20(mac_src_0_s2[20]);
		    cache_cycsim0->mac_src_0_s2_21(mac_src_0_s2[21]);
		    cache_cycsim0->mac_src_0_s2_22(mac_src_0_s2[22]);
		    cache_cycsim0->mac_src_0_s2_23(mac_src_0_s2[23]);
		    cache_cycsim0->mac_src_0_s2_24(mac_src_0_s2[24]);
		    cache_cycsim0->mac_src_0_s2_25(mac_src_0_s2[25]);
		    cache_cycsim0->mac_src_0_s2_26(mac_src_0_s2[26]);
		    cache_cycsim0->mac_src_0_s2_27(mac_src_0_s2[27]);
		    cache_cycsim0->mac_src_0_s2_28(mac_src_0_s2[28]);
		    cache_cycsim0->mac_src_0_s2_29(mac_src_0_s2[29]);
		    cache_cycsim0->mac_src_0_s2_30(mac_src_0_s2[30]);
		    cache_cycsim0->mac_src_0_s2_31(mac_src_0_s2[31]);
		    cache_cycsim0->mac_src_0_s3_0(mac_src_0_s3[0]);
		    cache_cycsim0->mac_src_0_s3_1(mac_src_0_s3[1]);
		    cache_cycsim0->mac_src_0_s3_2(mac_src_0_s3[2]);
		    cache_cycsim0->mac_src_0_s3_3(mac_src_0_s3[3]);
		    cache_cycsim0->mac_src_0_s3_4(mac_src_0_s3[4]);
		    cache_cycsim0->mac_src_0_s3_5(mac_src_0_s3[5]);
		    cache_cycsim0->mac_src_0_s3_6(mac_src_0_s3[6]);
		    cache_cycsim0->mac_src_0_s3_7(mac_src_0_s3[7]);
		    cache_cycsim0->mac_src_0_s3_8(mac_src_0_s3[8]);
		    cache_cycsim0->mac_src_0_s3_9(mac_src_0_s3[9]);
		    cache_cycsim0->mac_src_0_s3_10(mac_src_0_s3[10]);
		    cache_cycsim0->mac_src_0_s3_11(mac_src_0_s3[11]);
		    cache_cycsim0->mac_src_0_s3_12(mac_src_0_s3[12]);
		    cache_cycsim0->mac_src_0_s3_13(mac_src_0_s3[13]);
		    cache_cycsim0->mac_src_0_s3_14(mac_src_0_s3[14]);
		    cache_cycsim0->mac_src_0_s3_15(mac_src_0_s3[15]);
		    cache_cycsim0->mac_src_0_s3_16(mac_src_0_s3[16]);
		    cache_cycsim0->mac_src_0_s3_17(mac_src_0_s3[17]);
		    cache_cycsim0->mac_src_0_s3_18(mac_src_0_s3[18]);
		    cache_cycsim0->mac_src_0_s3_19(mac_src_0_s3[19]);
		    cache_cycsim0->mac_src_0_s3_20(mac_src_0_s3[20]);
		    cache_cycsim0->mac_src_0_s3_21(mac_src_0_s3[21]);
		    cache_cycsim0->mac_src_0_s3_22(mac_src_0_s3[22]);
		    cache_cycsim0->mac_src_0_s3_23(mac_src_0_s3[23]);
		    cache_cycsim0->mac_src_0_s3_24(mac_src_0_s3[24]);
		    cache_cycsim0->mac_src_0_s3_25(mac_src_0_s3[25]);
		    cache_cycsim0->mac_src_0_s3_26(mac_src_0_s3[26]);
		    cache_cycsim0->mac_src_0_s3_27(mac_src_0_s3[27]);
		    cache_cycsim0->mac_src_0_s3_28(mac_src_0_s3[28]);
		    cache_cycsim0->mac_src_0_s3_29(mac_src_0_s3[29]);
		    cache_cycsim0->mac_src_0_s3_30(mac_src_0_s3[30]);
		    cache_cycsim0->mac_src_0_s3_31(mac_src_0_s3[31]);
		    cache_cycsim0->mac_src_0_s4_0(mac_src_0_s4[0]);
		    cache_cycsim0->mac_src_0_s4_1(mac_src_0_s4[1]);
		    cache_cycsim0->mac_src_0_s4_2(mac_src_0_s4[2]);
		    cache_cycsim0->mac_src_0_s4_3(mac_src_0_s4[3]);
		    cache_cycsim0->mac_src_0_s4_4(mac_src_0_s4[4]);
		    cache_cycsim0->mac_src_0_s4_5(mac_src_0_s4[5]);
		    cache_cycsim0->mac_src_0_s4_6(mac_src_0_s4[6]);
		    cache_cycsim0->mac_src_0_s4_7(mac_src_0_s4[7]);
		    cache_cycsim0->mac_src_0_s4_8(mac_src_0_s4[8]);
		    cache_cycsim0->mac_src_0_s4_9(mac_src_0_s4[9]);
		    cache_cycsim0->mac_src_0_s4_10(mac_src_0_s4[10]);
		    cache_cycsim0->mac_src_0_s4_11(mac_src_0_s4[11]);
		    cache_cycsim0->mac_src_0_s4_12(mac_src_0_s4[12]);
		    cache_cycsim0->mac_src_0_s4_13(mac_src_0_s4[13]);
		    cache_cycsim0->mac_src_0_s4_14(mac_src_0_s4[14]);
		    cache_cycsim0->mac_src_0_s4_15(mac_src_0_s4[15]);
		    cache_cycsim0->mac_src_0_s4_16(mac_src_0_s4[16]);
		    cache_cycsim0->mac_src_0_s4_17(mac_src_0_s4[17]);
		    cache_cycsim0->mac_src_0_s4_18(mac_src_0_s4[18]);
		    cache_cycsim0->mac_src_0_s4_19(mac_src_0_s4[19]);
		    cache_cycsim0->mac_src_0_s4_20(mac_src_0_s4[20]);
		    cache_cycsim0->mac_src_0_s4_21(mac_src_0_s4[21]);
		    cache_cycsim0->mac_src_0_s4_22(mac_src_0_s4[22]);
		    cache_cycsim0->mac_src_0_s4_23(mac_src_0_s4[23]);
		    cache_cycsim0->mac_src_0_s4_24(mac_src_0_s4[24]);
		    cache_cycsim0->mac_src_0_s4_25(mac_src_0_s4[25]);
		    cache_cycsim0->mac_src_0_s4_26(mac_src_0_s4[26]);
		    cache_cycsim0->mac_src_0_s4_27(mac_src_0_s4[27]);
		    cache_cycsim0->mac_src_0_s4_28(mac_src_0_s4[28]);
		    cache_cycsim0->mac_src_0_s4_29(mac_src_0_s4[29]);
		    cache_cycsim0->mac_src_0_s4_30(mac_src_0_s4[30]);
		    cache_cycsim0->mac_src_0_s4_31(mac_src_0_s4[31]);
		    cache_cycsim0->mac_src_0_s5_0(mac_src_0_s5[0]);
		    cache_cycsim0->mac_src_0_s5_1(mac_src_0_s5[1]);
		    cache_cycsim0->mac_src_0_s5_2(mac_src_0_s5[2]);
		    cache_cycsim0->mac_src_0_s5_3(mac_src_0_s5[3]);
		    cache_cycsim0->mac_src_0_s5_4(mac_src_0_s5[4]);
		    cache_cycsim0->mac_src_0_s5_5(mac_src_0_s5[5]);
		    cache_cycsim0->mac_src_0_s5_6(mac_src_0_s5[6]);
		    cache_cycsim0->mac_src_0_s5_7(mac_src_0_s5[7]);
		    cache_cycsim0->mac_src_0_s5_8(mac_src_0_s5[8]);
		    cache_cycsim0->mac_src_0_s5_9(mac_src_0_s5[9]);
		    cache_cycsim0->mac_src_0_s5_10(mac_src_0_s5[10]);
		    cache_cycsim0->mac_src_0_s5_11(mac_src_0_s5[11]);
		    cache_cycsim0->mac_src_0_s5_12(mac_src_0_s5[12]);
		    cache_cycsim0->mac_src_0_s5_13(mac_src_0_s5[13]);
		    cache_cycsim0->mac_src_0_s5_14(mac_src_0_s5[14]);
		    cache_cycsim0->mac_src_0_s5_15(mac_src_0_s5[15]);
		    cache_cycsim0->mac_src_0_s5_16(mac_src_0_s5[16]);
		    cache_cycsim0->mac_src_0_s5_17(mac_src_0_s5[17]);
		    cache_cycsim0->mac_src_0_s5_18(mac_src_0_s5[18]);
		    cache_cycsim0->mac_src_0_s5_19(mac_src_0_s5[19]);
		    cache_cycsim0->mac_src_0_s5_20(mac_src_0_s5[20]);
		    cache_cycsim0->mac_src_0_s5_21(mac_src_0_s5[21]);
		    cache_cycsim0->mac_src_0_s5_22(mac_src_0_s5[22]);
		    cache_cycsim0->mac_src_0_s5_23(mac_src_0_s5[23]);
		    cache_cycsim0->mac_src_0_s5_24(mac_src_0_s5[24]);
		    cache_cycsim0->mac_src_0_s5_25(mac_src_0_s5[25]);
		    cache_cycsim0->mac_src_0_s5_26(mac_src_0_s5[26]);
		    cache_cycsim0->mac_src_0_s5_27(mac_src_0_s5[27]);
		    cache_cycsim0->mac_src_0_s5_28(mac_src_0_s5[28]);
		    cache_cycsim0->mac_src_0_s5_29(mac_src_0_s5[29]);
		    cache_cycsim0->mac_src_0_s5_30(mac_src_0_s5[30]);
		    cache_cycsim0->mac_src_0_s5_31(mac_src_0_s5[31]);
		    cache_cycsim0->mac_src_0_s6_0(mac_src_0_s6[0]);
		    cache_cycsim0->mac_src_0_s6_1(mac_src_0_s6[1]);
		    cache_cycsim0->mac_src_0_s6_2(mac_src_0_s6[2]);
		    cache_cycsim0->mac_src_0_s6_3(mac_src_0_s6[3]);
		    cache_cycsim0->mac_src_0_s6_4(mac_src_0_s6[4]);
		    cache_cycsim0->mac_src_0_s6_5(mac_src_0_s6[5]);
		    cache_cycsim0->mac_src_0_s6_6(mac_src_0_s6[6]);
		    cache_cycsim0->mac_src_0_s6_7(mac_src_0_s6[7]);
		    cache_cycsim0->mac_src_0_s6_8(mac_src_0_s6[8]);
		    cache_cycsim0->mac_src_0_s6_9(mac_src_0_s6[9]);
		    cache_cycsim0->mac_src_0_s6_10(mac_src_0_s6[10]);
		    cache_cycsim0->mac_src_0_s6_11(mac_src_0_s6[11]);
		    cache_cycsim0->mac_src_0_s6_12(mac_src_0_s6[12]);
		    cache_cycsim0->mac_src_0_s6_13(mac_src_0_s6[13]);
		    cache_cycsim0->mac_src_0_s6_14(mac_src_0_s6[14]);
		    cache_cycsim0->mac_src_0_s6_15(mac_src_0_s6[15]);
		    cache_cycsim0->mac_src_0_s6_16(mac_src_0_s6[16]);
		    cache_cycsim0->mac_src_0_s6_17(mac_src_0_s6[17]);
		    cache_cycsim0->mac_src_0_s6_18(mac_src_0_s6[18]);
		    cache_cycsim0->mac_src_0_s6_19(mac_src_0_s6[19]);
		    cache_cycsim0->mac_src_0_s6_20(mac_src_0_s6[20]);
		    cache_cycsim0->mac_src_0_s6_21(mac_src_0_s6[21]);
		    cache_cycsim0->mac_src_0_s6_22(mac_src_0_s6[22]);
		    cache_cycsim0->mac_src_0_s6_23(mac_src_0_s6[23]);
		    cache_cycsim0->mac_src_0_s6_24(mac_src_0_s6[24]);
		    cache_cycsim0->mac_src_0_s6_25(mac_src_0_s6[25]);
		    cache_cycsim0->mac_src_0_s6_26(mac_src_0_s6[26]);
		    cache_cycsim0->mac_src_0_s6_27(mac_src_0_s6[27]);
		    cache_cycsim0->mac_src_0_s6_28(mac_src_0_s6[28]);
		    cache_cycsim0->mac_src_0_s6_29(mac_src_0_s6[29]);
		    cache_cycsim0->mac_src_0_s6_30(mac_src_0_s6[30]);
		    cache_cycsim0->mac_src_0_s6_31(mac_src_0_s6[31]);
		    cache_cycsim0->mac_src_1_0(mac_src_1[0]);
		    cache_cycsim0->mac_src_1_1(mac_src_1[1]);
		    cache_cycsim0->mac_src_1_2(mac_src_1[2]);
		    cache_cycsim0->mac_src_1_3(mac_src_1[3]);
		    cache_cycsim0->mac_src_1_4(mac_src_1[4]);
		    cache_cycsim0->mac_src_1_5(mac_src_1[5]);
		    cache_cycsim0->mac_src_1_6(mac_src_1[6]);
		    cache_cycsim0->mac_src_1_7(mac_src_1[7]);
		    cache_cycsim0->mac_src_1_8(mac_src_1[8]);
		    cache_cycsim0->mac_src_1_9(mac_src_1[9]);
		    cache_cycsim0->mac_src_1_10(mac_src_1[10]);
		    cache_cycsim0->mac_src_1_11(mac_src_1[11]);
		    cache_cycsim0->mac_src_1_12(mac_src_1[12]);
		    cache_cycsim0->mac_src_1_13(mac_src_1[13]);
		    cache_cycsim0->mac_src_1_14(mac_src_1[14]);
		    cache_cycsim0->mac_src_1_15(mac_src_1[15]);
		    cache_cycsim0->mac_src_1_16(mac_src_1[16]);
		    cache_cycsim0->mac_src_1_17(mac_src_1[17]);
		    cache_cycsim0->mac_src_1_18(mac_src_1[18]);
		    cache_cycsim0->mac_src_1_19(mac_src_1[19]);
		    cache_cycsim0->mac_src_1_20(mac_src_1[20]);
		    cache_cycsim0->mac_src_1_21(mac_src_1[21]);
		    cache_cycsim0->mac_src_1_22(mac_src_1[22]);
		    cache_cycsim0->mac_src_1_23(mac_src_1[23]);
		    cache_cycsim0->mac_src_1_24(mac_src_1[24]);
		    cache_cycsim0->mac_src_1_25(mac_src_1[25]);
		    cache_cycsim0->mac_src_1_26(mac_src_1[26]);
		    cache_cycsim0->mac_src_1_27(mac_src_1[27]);
		    cache_cycsim0->mac_src_1_28(mac_src_1[28]);
		    cache_cycsim0->mac_src_1_29(mac_src_1[29]);
		    cache_cycsim0->mac_src_1_30(mac_src_1[30]);
		    cache_cycsim0->mac_src_1_31(mac_src_1[31]);
		    cache_cycsim0->mac_src_valid(mac_src_valid);
		    cache_cycsim0->mac_clear(mac_clear);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_cache)
		case BDWRep_RTL_C:
		    cache_rtl0 = new cache_rtl( "cache" );

		    cache_rtl0->clk(clk);
		    cache_rtl0->rstn(rstn);
		    cache_rtl0->cache_en(cache_en);
		    cache_rtl0->systolic_en(systolic_en);
		    cache_rtl0->systolic_depth(systolic_depth);
		    cache_rtl0->addr_if_start(addr_if_start);
		    cache_rtl0->systolic_sel(systolic_sel);
		    cache_rtl0->feature_data(feature_data);
		    cache_rtl0->feature_share_en(feature_share_en);
		    cache_rtl0->feature_data_en(feature_data_en);
		    cache_rtl0->feature_data_sel(feature_data_sel);
		    cache_rtl0->weight_data(weight_data);
		    cache_rtl0->weight_data_en(weight_data_en);
		    cache_rtl0->mac_src_0_s0_0(mac_src_0_s0[0]);
		    cache_rtl0->mac_src_0_s0_1(mac_src_0_s0[1]);
		    cache_rtl0->mac_src_0_s0_2(mac_src_0_s0[2]);
		    cache_rtl0->mac_src_0_s0_3(mac_src_0_s0[3]);
		    cache_rtl0->mac_src_0_s0_4(mac_src_0_s0[4]);
		    cache_rtl0->mac_src_0_s0_5(mac_src_0_s0[5]);
		    cache_rtl0->mac_src_0_s0_6(mac_src_0_s0[6]);
		    cache_rtl0->mac_src_0_s0_7(mac_src_0_s0[7]);
		    cache_rtl0->mac_src_0_s0_8(mac_src_0_s0[8]);
		    cache_rtl0->mac_src_0_s0_9(mac_src_0_s0[9]);
		    cache_rtl0->mac_src_0_s0_10(mac_src_0_s0[10]);
		    cache_rtl0->mac_src_0_s0_11(mac_src_0_s0[11]);
		    cache_rtl0->mac_src_0_s0_12(mac_src_0_s0[12]);
		    cache_rtl0->mac_src_0_s0_13(mac_src_0_s0[13]);
		    cache_rtl0->mac_src_0_s0_14(mac_src_0_s0[14]);
		    cache_rtl0->mac_src_0_s0_15(mac_src_0_s0[15]);
		    cache_rtl0->mac_src_0_s0_16(mac_src_0_s0[16]);
		    cache_rtl0->mac_src_0_s0_17(mac_src_0_s0[17]);
		    cache_rtl0->mac_src_0_s0_18(mac_src_0_s0[18]);
		    cache_rtl0->mac_src_0_s0_19(mac_src_0_s0[19]);
		    cache_rtl0->mac_src_0_s0_20(mac_src_0_s0[20]);
		    cache_rtl0->mac_src_0_s0_21(mac_src_0_s0[21]);
		    cache_rtl0->mac_src_0_s0_22(mac_src_0_s0[22]);
		    cache_rtl0->mac_src_0_s0_23(mac_src_0_s0[23]);
		    cache_rtl0->mac_src_0_s0_24(mac_src_0_s0[24]);
		    cache_rtl0->mac_src_0_s0_25(mac_src_0_s0[25]);
		    cache_rtl0->mac_src_0_s0_26(mac_src_0_s0[26]);
		    cache_rtl0->mac_src_0_s0_27(mac_src_0_s0[27]);
		    cache_rtl0->mac_src_0_s0_28(mac_src_0_s0[28]);
		    cache_rtl0->mac_src_0_s0_29(mac_src_0_s0[29]);
		    cache_rtl0->mac_src_0_s0_30(mac_src_0_s0[30]);
		    cache_rtl0->mac_src_0_s0_31(mac_src_0_s0[31]);
		    cache_rtl0->mac_src_0_s1_0(mac_src_0_s1[0]);
		    cache_rtl0->mac_src_0_s1_1(mac_src_0_s1[1]);
		    cache_rtl0->mac_src_0_s1_2(mac_src_0_s1[2]);
		    cache_rtl0->mac_src_0_s1_3(mac_src_0_s1[3]);
		    cache_rtl0->mac_src_0_s1_4(mac_src_0_s1[4]);
		    cache_rtl0->mac_src_0_s1_5(mac_src_0_s1[5]);
		    cache_rtl0->mac_src_0_s1_6(mac_src_0_s1[6]);
		    cache_rtl0->mac_src_0_s1_7(mac_src_0_s1[7]);
		    cache_rtl0->mac_src_0_s1_8(mac_src_0_s1[8]);
		    cache_rtl0->mac_src_0_s1_9(mac_src_0_s1[9]);
		    cache_rtl0->mac_src_0_s1_10(mac_src_0_s1[10]);
		    cache_rtl0->mac_src_0_s1_11(mac_src_0_s1[11]);
		    cache_rtl0->mac_src_0_s1_12(mac_src_0_s1[12]);
		    cache_rtl0->mac_src_0_s1_13(mac_src_0_s1[13]);
		    cache_rtl0->mac_src_0_s1_14(mac_src_0_s1[14]);
		    cache_rtl0->mac_src_0_s1_15(mac_src_0_s1[15]);
		    cache_rtl0->mac_src_0_s1_16(mac_src_0_s1[16]);
		    cache_rtl0->mac_src_0_s1_17(mac_src_0_s1[17]);
		    cache_rtl0->mac_src_0_s1_18(mac_src_0_s1[18]);
		    cache_rtl0->mac_src_0_s1_19(mac_src_0_s1[19]);
		    cache_rtl0->mac_src_0_s1_20(mac_src_0_s1[20]);
		    cache_rtl0->mac_src_0_s1_21(mac_src_0_s1[21]);
		    cache_rtl0->mac_src_0_s1_22(mac_src_0_s1[22]);
		    cache_rtl0->mac_src_0_s1_23(mac_src_0_s1[23]);
		    cache_rtl0->mac_src_0_s1_24(mac_src_0_s1[24]);
		    cache_rtl0->mac_src_0_s1_25(mac_src_0_s1[25]);
		    cache_rtl0->mac_src_0_s1_26(mac_src_0_s1[26]);
		    cache_rtl0->mac_src_0_s1_27(mac_src_0_s1[27]);
		    cache_rtl0->mac_src_0_s1_28(mac_src_0_s1[28]);
		    cache_rtl0->mac_src_0_s1_29(mac_src_0_s1[29]);
		    cache_rtl0->mac_src_0_s1_30(mac_src_0_s1[30]);
		    cache_rtl0->mac_src_0_s1_31(mac_src_0_s1[31]);
		    cache_rtl0->mac_src_0_s2_0(mac_src_0_s2[0]);
		    cache_rtl0->mac_src_0_s2_1(mac_src_0_s2[1]);
		    cache_rtl0->mac_src_0_s2_2(mac_src_0_s2[2]);
		    cache_rtl0->mac_src_0_s2_3(mac_src_0_s2[3]);
		    cache_rtl0->mac_src_0_s2_4(mac_src_0_s2[4]);
		    cache_rtl0->mac_src_0_s2_5(mac_src_0_s2[5]);
		    cache_rtl0->mac_src_0_s2_6(mac_src_0_s2[6]);
		    cache_rtl0->mac_src_0_s2_7(mac_src_0_s2[7]);
		    cache_rtl0->mac_src_0_s2_8(mac_src_0_s2[8]);
		    cache_rtl0->mac_src_0_s2_9(mac_src_0_s2[9]);
		    cache_rtl0->mac_src_0_s2_10(mac_src_0_s2[10]);
		    cache_rtl0->mac_src_0_s2_11(mac_src_0_s2[11]);
		    cache_rtl0->mac_src_0_s2_12(mac_src_0_s2[12]);
		    cache_rtl0->mac_src_0_s2_13(mac_src_0_s2[13]);
		    cache_rtl0->mac_src_0_s2_14(mac_src_0_s2[14]);
		    cache_rtl0->mac_src_0_s2_15(mac_src_0_s2[15]);
		    cache_rtl0->mac_src_0_s2_16(mac_src_0_s2[16]);
		    cache_rtl0->mac_src_0_s2_17(mac_src_0_s2[17]);
		    cache_rtl0->mac_src_0_s2_18(mac_src_0_s2[18]);
		    cache_rtl0->mac_src_0_s2_19(mac_src_0_s2[19]);
		    cache_rtl0->mac_src_0_s2_20(mac_src_0_s2[20]);
		    cache_rtl0->mac_src_0_s2_21(mac_src_0_s2[21]);
		    cache_rtl0->mac_src_0_s2_22(mac_src_0_s2[22]);
		    cache_rtl0->mac_src_0_s2_23(mac_src_0_s2[23]);
		    cache_rtl0->mac_src_0_s2_24(mac_src_0_s2[24]);
		    cache_rtl0->mac_src_0_s2_25(mac_src_0_s2[25]);
		    cache_rtl0->mac_src_0_s2_26(mac_src_0_s2[26]);
		    cache_rtl0->mac_src_0_s2_27(mac_src_0_s2[27]);
		    cache_rtl0->mac_src_0_s2_28(mac_src_0_s2[28]);
		    cache_rtl0->mac_src_0_s2_29(mac_src_0_s2[29]);
		    cache_rtl0->mac_src_0_s2_30(mac_src_0_s2[30]);
		    cache_rtl0->mac_src_0_s2_31(mac_src_0_s2[31]);
		    cache_rtl0->mac_src_0_s3_0(mac_src_0_s3[0]);
		    cache_rtl0->mac_src_0_s3_1(mac_src_0_s3[1]);
		    cache_rtl0->mac_src_0_s3_2(mac_src_0_s3[2]);
		    cache_rtl0->mac_src_0_s3_3(mac_src_0_s3[3]);
		    cache_rtl0->mac_src_0_s3_4(mac_src_0_s3[4]);
		    cache_rtl0->mac_src_0_s3_5(mac_src_0_s3[5]);
		    cache_rtl0->mac_src_0_s3_6(mac_src_0_s3[6]);
		    cache_rtl0->mac_src_0_s3_7(mac_src_0_s3[7]);
		    cache_rtl0->mac_src_0_s3_8(mac_src_0_s3[8]);
		    cache_rtl0->mac_src_0_s3_9(mac_src_0_s3[9]);
		    cache_rtl0->mac_src_0_s3_10(mac_src_0_s3[10]);
		    cache_rtl0->mac_src_0_s3_11(mac_src_0_s3[11]);
		    cache_rtl0->mac_src_0_s3_12(mac_src_0_s3[12]);
		    cache_rtl0->mac_src_0_s3_13(mac_src_0_s3[13]);
		    cache_rtl0->mac_src_0_s3_14(mac_src_0_s3[14]);
		    cache_rtl0->mac_src_0_s3_15(mac_src_0_s3[15]);
		    cache_rtl0->mac_src_0_s3_16(mac_src_0_s3[16]);
		    cache_rtl0->mac_src_0_s3_17(mac_src_0_s3[17]);
		    cache_rtl0->mac_src_0_s3_18(mac_src_0_s3[18]);
		    cache_rtl0->mac_src_0_s3_19(mac_src_0_s3[19]);
		    cache_rtl0->mac_src_0_s3_20(mac_src_0_s3[20]);
		    cache_rtl0->mac_src_0_s3_21(mac_src_0_s3[21]);
		    cache_rtl0->mac_src_0_s3_22(mac_src_0_s3[22]);
		    cache_rtl0->mac_src_0_s3_23(mac_src_0_s3[23]);
		    cache_rtl0->mac_src_0_s3_24(mac_src_0_s3[24]);
		    cache_rtl0->mac_src_0_s3_25(mac_src_0_s3[25]);
		    cache_rtl0->mac_src_0_s3_26(mac_src_0_s3[26]);
		    cache_rtl0->mac_src_0_s3_27(mac_src_0_s3[27]);
		    cache_rtl0->mac_src_0_s3_28(mac_src_0_s3[28]);
		    cache_rtl0->mac_src_0_s3_29(mac_src_0_s3[29]);
		    cache_rtl0->mac_src_0_s3_30(mac_src_0_s3[30]);
		    cache_rtl0->mac_src_0_s3_31(mac_src_0_s3[31]);
		    cache_rtl0->mac_src_0_s4_0(mac_src_0_s4[0]);
		    cache_rtl0->mac_src_0_s4_1(mac_src_0_s4[1]);
		    cache_rtl0->mac_src_0_s4_2(mac_src_0_s4[2]);
		    cache_rtl0->mac_src_0_s4_3(mac_src_0_s4[3]);
		    cache_rtl0->mac_src_0_s4_4(mac_src_0_s4[4]);
		    cache_rtl0->mac_src_0_s4_5(mac_src_0_s4[5]);
		    cache_rtl0->mac_src_0_s4_6(mac_src_0_s4[6]);
		    cache_rtl0->mac_src_0_s4_7(mac_src_0_s4[7]);
		    cache_rtl0->mac_src_0_s4_8(mac_src_0_s4[8]);
		    cache_rtl0->mac_src_0_s4_9(mac_src_0_s4[9]);
		    cache_rtl0->mac_src_0_s4_10(mac_src_0_s4[10]);
		    cache_rtl0->mac_src_0_s4_11(mac_src_0_s4[11]);
		    cache_rtl0->mac_src_0_s4_12(mac_src_0_s4[12]);
		    cache_rtl0->mac_src_0_s4_13(mac_src_0_s4[13]);
		    cache_rtl0->mac_src_0_s4_14(mac_src_0_s4[14]);
		    cache_rtl0->mac_src_0_s4_15(mac_src_0_s4[15]);
		    cache_rtl0->mac_src_0_s4_16(mac_src_0_s4[16]);
		    cache_rtl0->mac_src_0_s4_17(mac_src_0_s4[17]);
		    cache_rtl0->mac_src_0_s4_18(mac_src_0_s4[18]);
		    cache_rtl0->mac_src_0_s4_19(mac_src_0_s4[19]);
		    cache_rtl0->mac_src_0_s4_20(mac_src_0_s4[20]);
		    cache_rtl0->mac_src_0_s4_21(mac_src_0_s4[21]);
		    cache_rtl0->mac_src_0_s4_22(mac_src_0_s4[22]);
		    cache_rtl0->mac_src_0_s4_23(mac_src_0_s4[23]);
		    cache_rtl0->mac_src_0_s4_24(mac_src_0_s4[24]);
		    cache_rtl0->mac_src_0_s4_25(mac_src_0_s4[25]);
		    cache_rtl0->mac_src_0_s4_26(mac_src_0_s4[26]);
		    cache_rtl0->mac_src_0_s4_27(mac_src_0_s4[27]);
		    cache_rtl0->mac_src_0_s4_28(mac_src_0_s4[28]);
		    cache_rtl0->mac_src_0_s4_29(mac_src_0_s4[29]);
		    cache_rtl0->mac_src_0_s4_30(mac_src_0_s4[30]);
		    cache_rtl0->mac_src_0_s4_31(mac_src_0_s4[31]);
		    cache_rtl0->mac_src_0_s5_0(mac_src_0_s5[0]);
		    cache_rtl0->mac_src_0_s5_1(mac_src_0_s5[1]);
		    cache_rtl0->mac_src_0_s5_2(mac_src_0_s5[2]);
		    cache_rtl0->mac_src_0_s5_3(mac_src_0_s5[3]);
		    cache_rtl0->mac_src_0_s5_4(mac_src_0_s5[4]);
		    cache_rtl0->mac_src_0_s5_5(mac_src_0_s5[5]);
		    cache_rtl0->mac_src_0_s5_6(mac_src_0_s5[6]);
		    cache_rtl0->mac_src_0_s5_7(mac_src_0_s5[7]);
		    cache_rtl0->mac_src_0_s5_8(mac_src_0_s5[8]);
		    cache_rtl0->mac_src_0_s5_9(mac_src_0_s5[9]);
		    cache_rtl0->mac_src_0_s5_10(mac_src_0_s5[10]);
		    cache_rtl0->mac_src_0_s5_11(mac_src_0_s5[11]);
		    cache_rtl0->mac_src_0_s5_12(mac_src_0_s5[12]);
		    cache_rtl0->mac_src_0_s5_13(mac_src_0_s5[13]);
		    cache_rtl0->mac_src_0_s5_14(mac_src_0_s5[14]);
		    cache_rtl0->mac_src_0_s5_15(mac_src_0_s5[15]);
		    cache_rtl0->mac_src_0_s5_16(mac_src_0_s5[16]);
		    cache_rtl0->mac_src_0_s5_17(mac_src_0_s5[17]);
		    cache_rtl0->mac_src_0_s5_18(mac_src_0_s5[18]);
		    cache_rtl0->mac_src_0_s5_19(mac_src_0_s5[19]);
		    cache_rtl0->mac_src_0_s5_20(mac_src_0_s5[20]);
		    cache_rtl0->mac_src_0_s5_21(mac_src_0_s5[21]);
		    cache_rtl0->mac_src_0_s5_22(mac_src_0_s5[22]);
		    cache_rtl0->mac_src_0_s5_23(mac_src_0_s5[23]);
		    cache_rtl0->mac_src_0_s5_24(mac_src_0_s5[24]);
		    cache_rtl0->mac_src_0_s5_25(mac_src_0_s5[25]);
		    cache_rtl0->mac_src_0_s5_26(mac_src_0_s5[26]);
		    cache_rtl0->mac_src_0_s5_27(mac_src_0_s5[27]);
		    cache_rtl0->mac_src_0_s5_28(mac_src_0_s5[28]);
		    cache_rtl0->mac_src_0_s5_29(mac_src_0_s5[29]);
		    cache_rtl0->mac_src_0_s5_30(mac_src_0_s5[30]);
		    cache_rtl0->mac_src_0_s5_31(mac_src_0_s5[31]);
		    cache_rtl0->mac_src_0_s6_0(mac_src_0_s6[0]);
		    cache_rtl0->mac_src_0_s6_1(mac_src_0_s6[1]);
		    cache_rtl0->mac_src_0_s6_2(mac_src_0_s6[2]);
		    cache_rtl0->mac_src_0_s6_3(mac_src_0_s6[3]);
		    cache_rtl0->mac_src_0_s6_4(mac_src_0_s6[4]);
		    cache_rtl0->mac_src_0_s6_5(mac_src_0_s6[5]);
		    cache_rtl0->mac_src_0_s6_6(mac_src_0_s6[6]);
		    cache_rtl0->mac_src_0_s6_7(mac_src_0_s6[7]);
		    cache_rtl0->mac_src_0_s6_8(mac_src_0_s6[8]);
		    cache_rtl0->mac_src_0_s6_9(mac_src_0_s6[9]);
		    cache_rtl0->mac_src_0_s6_10(mac_src_0_s6[10]);
		    cache_rtl0->mac_src_0_s6_11(mac_src_0_s6[11]);
		    cache_rtl0->mac_src_0_s6_12(mac_src_0_s6[12]);
		    cache_rtl0->mac_src_0_s6_13(mac_src_0_s6[13]);
		    cache_rtl0->mac_src_0_s6_14(mac_src_0_s6[14]);
		    cache_rtl0->mac_src_0_s6_15(mac_src_0_s6[15]);
		    cache_rtl0->mac_src_0_s6_16(mac_src_0_s6[16]);
		    cache_rtl0->mac_src_0_s6_17(mac_src_0_s6[17]);
		    cache_rtl0->mac_src_0_s6_18(mac_src_0_s6[18]);
		    cache_rtl0->mac_src_0_s6_19(mac_src_0_s6[19]);
		    cache_rtl0->mac_src_0_s6_20(mac_src_0_s6[20]);
		    cache_rtl0->mac_src_0_s6_21(mac_src_0_s6[21]);
		    cache_rtl0->mac_src_0_s6_22(mac_src_0_s6[22]);
		    cache_rtl0->mac_src_0_s6_23(mac_src_0_s6[23]);
		    cache_rtl0->mac_src_0_s6_24(mac_src_0_s6[24]);
		    cache_rtl0->mac_src_0_s6_25(mac_src_0_s6[25]);
		    cache_rtl0->mac_src_0_s6_26(mac_src_0_s6[26]);
		    cache_rtl0->mac_src_0_s6_27(mac_src_0_s6[27]);
		    cache_rtl0->mac_src_0_s6_28(mac_src_0_s6[28]);
		    cache_rtl0->mac_src_0_s6_29(mac_src_0_s6[29]);
		    cache_rtl0->mac_src_0_s6_30(mac_src_0_s6[30]);
		    cache_rtl0->mac_src_0_s6_31(mac_src_0_s6[31]);
		    cache_rtl0->mac_src_1_0(mac_src_1[0]);
		    cache_rtl0->mac_src_1_1(mac_src_1[1]);
		    cache_rtl0->mac_src_1_2(mac_src_1[2]);
		    cache_rtl0->mac_src_1_3(mac_src_1[3]);
		    cache_rtl0->mac_src_1_4(mac_src_1[4]);
		    cache_rtl0->mac_src_1_5(mac_src_1[5]);
		    cache_rtl0->mac_src_1_6(mac_src_1[6]);
		    cache_rtl0->mac_src_1_7(mac_src_1[7]);
		    cache_rtl0->mac_src_1_8(mac_src_1[8]);
		    cache_rtl0->mac_src_1_9(mac_src_1[9]);
		    cache_rtl0->mac_src_1_10(mac_src_1[10]);
		    cache_rtl0->mac_src_1_11(mac_src_1[11]);
		    cache_rtl0->mac_src_1_12(mac_src_1[12]);
		    cache_rtl0->mac_src_1_13(mac_src_1[13]);
		    cache_rtl0->mac_src_1_14(mac_src_1[14]);
		    cache_rtl0->mac_src_1_15(mac_src_1[15]);
		    cache_rtl0->mac_src_1_16(mac_src_1[16]);
		    cache_rtl0->mac_src_1_17(mac_src_1[17]);
		    cache_rtl0->mac_src_1_18(mac_src_1[18]);
		    cache_rtl0->mac_src_1_19(mac_src_1[19]);
		    cache_rtl0->mac_src_1_20(mac_src_1[20]);
		    cache_rtl0->mac_src_1_21(mac_src_1[21]);
		    cache_rtl0->mac_src_1_22(mac_src_1[22]);
		    cache_rtl0->mac_src_1_23(mac_src_1[23]);
		    cache_rtl0->mac_src_1_24(mac_src_1[24]);
		    cache_rtl0->mac_src_1_25(mac_src_1[25]);
		    cache_rtl0->mac_src_1_26(mac_src_1[26]);
		    cache_rtl0->mac_src_1_27(mac_src_1[27]);
		    cache_rtl0->mac_src_1_28(mac_src_1[28]);
		    cache_rtl0->mac_src_1_29(mac_src_1[29]);
		    cache_rtl0->mac_src_1_30(mac_src_1[30]);
		    cache_rtl0->mac_src_1_31(mac_src_1[31]);
		    cache_rtl0->mac_src_valid(mac_src_valid);
		    cache_rtl0->mac_clear(mac_clear);


			{
			const char *simConfig = cache_wrapper::simConfigName();
			
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
		    cache0 = new cache( "cache" );

		    cache0->clk(clk);
		    cache0->rstn(rstn);
		    cache0->cache_en(cache_en);
		    cache0->systolic_en(systolic_en);
		    cache0->systolic_depth(systolic_depth);
		    cache0->addr_if_start(addr_if_start);
		    cache0->systolic_sel(systolic_sel);
		    cache0->feature_data(feature_data);
		    cache0->feature_share_en(feature_share_en);
		    cache0->feature_data_en(feature_data_en);
		    cache0->feature_data_sel(feature_data_sel);
		    cache0->weight_data(weight_data);
		    cache0->weight_data_en(weight_data_en);
		    cache0->mac_src_0_s0[0](mac_src_0_s0[0]);
		    cache0->mac_src_0_s0[1](mac_src_0_s0[1]);
		    cache0->mac_src_0_s0[2](mac_src_0_s0[2]);
		    cache0->mac_src_0_s0[3](mac_src_0_s0[3]);
		    cache0->mac_src_0_s0[4](mac_src_0_s0[4]);
		    cache0->mac_src_0_s0[5](mac_src_0_s0[5]);
		    cache0->mac_src_0_s0[6](mac_src_0_s0[6]);
		    cache0->mac_src_0_s0[7](mac_src_0_s0[7]);
		    cache0->mac_src_0_s0[8](mac_src_0_s0[8]);
		    cache0->mac_src_0_s0[9](mac_src_0_s0[9]);
		    cache0->mac_src_0_s0[10](mac_src_0_s0[10]);
		    cache0->mac_src_0_s0[11](mac_src_0_s0[11]);
		    cache0->mac_src_0_s0[12](mac_src_0_s0[12]);
		    cache0->mac_src_0_s0[13](mac_src_0_s0[13]);
		    cache0->mac_src_0_s0[14](mac_src_0_s0[14]);
		    cache0->mac_src_0_s0[15](mac_src_0_s0[15]);
		    cache0->mac_src_0_s0[16](mac_src_0_s0[16]);
		    cache0->mac_src_0_s0[17](mac_src_0_s0[17]);
		    cache0->mac_src_0_s0[18](mac_src_0_s0[18]);
		    cache0->mac_src_0_s0[19](mac_src_0_s0[19]);
		    cache0->mac_src_0_s0[20](mac_src_0_s0[20]);
		    cache0->mac_src_0_s0[21](mac_src_0_s0[21]);
		    cache0->mac_src_0_s0[22](mac_src_0_s0[22]);
		    cache0->mac_src_0_s0[23](mac_src_0_s0[23]);
		    cache0->mac_src_0_s0[24](mac_src_0_s0[24]);
		    cache0->mac_src_0_s0[25](mac_src_0_s0[25]);
		    cache0->mac_src_0_s0[26](mac_src_0_s0[26]);
		    cache0->mac_src_0_s0[27](mac_src_0_s0[27]);
		    cache0->mac_src_0_s0[28](mac_src_0_s0[28]);
		    cache0->mac_src_0_s0[29](mac_src_0_s0[29]);
		    cache0->mac_src_0_s0[30](mac_src_0_s0[30]);
		    cache0->mac_src_0_s0[31](mac_src_0_s0[31]);
		    cache0->mac_src_0_s1[0](mac_src_0_s1[0]);
		    cache0->mac_src_0_s1[1](mac_src_0_s1[1]);
		    cache0->mac_src_0_s1[2](mac_src_0_s1[2]);
		    cache0->mac_src_0_s1[3](mac_src_0_s1[3]);
		    cache0->mac_src_0_s1[4](mac_src_0_s1[4]);
		    cache0->mac_src_0_s1[5](mac_src_0_s1[5]);
		    cache0->mac_src_0_s1[6](mac_src_0_s1[6]);
		    cache0->mac_src_0_s1[7](mac_src_0_s1[7]);
		    cache0->mac_src_0_s1[8](mac_src_0_s1[8]);
		    cache0->mac_src_0_s1[9](mac_src_0_s1[9]);
		    cache0->mac_src_0_s1[10](mac_src_0_s1[10]);
		    cache0->mac_src_0_s1[11](mac_src_0_s1[11]);
		    cache0->mac_src_0_s1[12](mac_src_0_s1[12]);
		    cache0->mac_src_0_s1[13](mac_src_0_s1[13]);
		    cache0->mac_src_0_s1[14](mac_src_0_s1[14]);
		    cache0->mac_src_0_s1[15](mac_src_0_s1[15]);
		    cache0->mac_src_0_s1[16](mac_src_0_s1[16]);
		    cache0->mac_src_0_s1[17](mac_src_0_s1[17]);
		    cache0->mac_src_0_s1[18](mac_src_0_s1[18]);
		    cache0->mac_src_0_s1[19](mac_src_0_s1[19]);
		    cache0->mac_src_0_s1[20](mac_src_0_s1[20]);
		    cache0->mac_src_0_s1[21](mac_src_0_s1[21]);
		    cache0->mac_src_0_s1[22](mac_src_0_s1[22]);
		    cache0->mac_src_0_s1[23](mac_src_0_s1[23]);
		    cache0->mac_src_0_s1[24](mac_src_0_s1[24]);
		    cache0->mac_src_0_s1[25](mac_src_0_s1[25]);
		    cache0->mac_src_0_s1[26](mac_src_0_s1[26]);
		    cache0->mac_src_0_s1[27](mac_src_0_s1[27]);
		    cache0->mac_src_0_s1[28](mac_src_0_s1[28]);
		    cache0->mac_src_0_s1[29](mac_src_0_s1[29]);
		    cache0->mac_src_0_s1[30](mac_src_0_s1[30]);
		    cache0->mac_src_0_s1[31](mac_src_0_s1[31]);
		    cache0->mac_src_0_s2[0](mac_src_0_s2[0]);
		    cache0->mac_src_0_s2[1](mac_src_0_s2[1]);
		    cache0->mac_src_0_s2[2](mac_src_0_s2[2]);
		    cache0->mac_src_0_s2[3](mac_src_0_s2[3]);
		    cache0->mac_src_0_s2[4](mac_src_0_s2[4]);
		    cache0->mac_src_0_s2[5](mac_src_0_s2[5]);
		    cache0->mac_src_0_s2[6](mac_src_0_s2[6]);
		    cache0->mac_src_0_s2[7](mac_src_0_s2[7]);
		    cache0->mac_src_0_s2[8](mac_src_0_s2[8]);
		    cache0->mac_src_0_s2[9](mac_src_0_s2[9]);
		    cache0->mac_src_0_s2[10](mac_src_0_s2[10]);
		    cache0->mac_src_0_s2[11](mac_src_0_s2[11]);
		    cache0->mac_src_0_s2[12](mac_src_0_s2[12]);
		    cache0->mac_src_0_s2[13](mac_src_0_s2[13]);
		    cache0->mac_src_0_s2[14](mac_src_0_s2[14]);
		    cache0->mac_src_0_s2[15](mac_src_0_s2[15]);
		    cache0->mac_src_0_s2[16](mac_src_0_s2[16]);
		    cache0->mac_src_0_s2[17](mac_src_0_s2[17]);
		    cache0->mac_src_0_s2[18](mac_src_0_s2[18]);
		    cache0->mac_src_0_s2[19](mac_src_0_s2[19]);
		    cache0->mac_src_0_s2[20](mac_src_0_s2[20]);
		    cache0->mac_src_0_s2[21](mac_src_0_s2[21]);
		    cache0->mac_src_0_s2[22](mac_src_0_s2[22]);
		    cache0->mac_src_0_s2[23](mac_src_0_s2[23]);
		    cache0->mac_src_0_s2[24](mac_src_0_s2[24]);
		    cache0->mac_src_0_s2[25](mac_src_0_s2[25]);
		    cache0->mac_src_0_s2[26](mac_src_0_s2[26]);
		    cache0->mac_src_0_s2[27](mac_src_0_s2[27]);
		    cache0->mac_src_0_s2[28](mac_src_0_s2[28]);
		    cache0->mac_src_0_s2[29](mac_src_0_s2[29]);
		    cache0->mac_src_0_s2[30](mac_src_0_s2[30]);
		    cache0->mac_src_0_s2[31](mac_src_0_s2[31]);
		    cache0->mac_src_0_s3[0](mac_src_0_s3[0]);
		    cache0->mac_src_0_s3[1](mac_src_0_s3[1]);
		    cache0->mac_src_0_s3[2](mac_src_0_s3[2]);
		    cache0->mac_src_0_s3[3](mac_src_0_s3[3]);
		    cache0->mac_src_0_s3[4](mac_src_0_s3[4]);
		    cache0->mac_src_0_s3[5](mac_src_0_s3[5]);
		    cache0->mac_src_0_s3[6](mac_src_0_s3[6]);
		    cache0->mac_src_0_s3[7](mac_src_0_s3[7]);
		    cache0->mac_src_0_s3[8](mac_src_0_s3[8]);
		    cache0->mac_src_0_s3[9](mac_src_0_s3[9]);
		    cache0->mac_src_0_s3[10](mac_src_0_s3[10]);
		    cache0->mac_src_0_s3[11](mac_src_0_s3[11]);
		    cache0->mac_src_0_s3[12](mac_src_0_s3[12]);
		    cache0->mac_src_0_s3[13](mac_src_0_s3[13]);
		    cache0->mac_src_0_s3[14](mac_src_0_s3[14]);
		    cache0->mac_src_0_s3[15](mac_src_0_s3[15]);
		    cache0->mac_src_0_s3[16](mac_src_0_s3[16]);
		    cache0->mac_src_0_s3[17](mac_src_0_s3[17]);
		    cache0->mac_src_0_s3[18](mac_src_0_s3[18]);
		    cache0->mac_src_0_s3[19](mac_src_0_s3[19]);
		    cache0->mac_src_0_s3[20](mac_src_0_s3[20]);
		    cache0->mac_src_0_s3[21](mac_src_0_s3[21]);
		    cache0->mac_src_0_s3[22](mac_src_0_s3[22]);
		    cache0->mac_src_0_s3[23](mac_src_0_s3[23]);
		    cache0->mac_src_0_s3[24](mac_src_0_s3[24]);
		    cache0->mac_src_0_s3[25](mac_src_0_s3[25]);
		    cache0->mac_src_0_s3[26](mac_src_0_s3[26]);
		    cache0->mac_src_0_s3[27](mac_src_0_s3[27]);
		    cache0->mac_src_0_s3[28](mac_src_0_s3[28]);
		    cache0->mac_src_0_s3[29](mac_src_0_s3[29]);
		    cache0->mac_src_0_s3[30](mac_src_0_s3[30]);
		    cache0->mac_src_0_s3[31](mac_src_0_s3[31]);
		    cache0->mac_src_0_s4[0](mac_src_0_s4[0]);
		    cache0->mac_src_0_s4[1](mac_src_0_s4[1]);
		    cache0->mac_src_0_s4[2](mac_src_0_s4[2]);
		    cache0->mac_src_0_s4[3](mac_src_0_s4[3]);
		    cache0->mac_src_0_s4[4](mac_src_0_s4[4]);
		    cache0->mac_src_0_s4[5](mac_src_0_s4[5]);
		    cache0->mac_src_0_s4[6](mac_src_0_s4[6]);
		    cache0->mac_src_0_s4[7](mac_src_0_s4[7]);
		    cache0->mac_src_0_s4[8](mac_src_0_s4[8]);
		    cache0->mac_src_0_s4[9](mac_src_0_s4[9]);
		    cache0->mac_src_0_s4[10](mac_src_0_s4[10]);
		    cache0->mac_src_0_s4[11](mac_src_0_s4[11]);
		    cache0->mac_src_0_s4[12](mac_src_0_s4[12]);
		    cache0->mac_src_0_s4[13](mac_src_0_s4[13]);
		    cache0->mac_src_0_s4[14](mac_src_0_s4[14]);
		    cache0->mac_src_0_s4[15](mac_src_0_s4[15]);
		    cache0->mac_src_0_s4[16](mac_src_0_s4[16]);
		    cache0->mac_src_0_s4[17](mac_src_0_s4[17]);
		    cache0->mac_src_0_s4[18](mac_src_0_s4[18]);
		    cache0->mac_src_0_s4[19](mac_src_0_s4[19]);
		    cache0->mac_src_0_s4[20](mac_src_0_s4[20]);
		    cache0->mac_src_0_s4[21](mac_src_0_s4[21]);
		    cache0->mac_src_0_s4[22](mac_src_0_s4[22]);
		    cache0->mac_src_0_s4[23](mac_src_0_s4[23]);
		    cache0->mac_src_0_s4[24](mac_src_0_s4[24]);
		    cache0->mac_src_0_s4[25](mac_src_0_s4[25]);
		    cache0->mac_src_0_s4[26](mac_src_0_s4[26]);
		    cache0->mac_src_0_s4[27](mac_src_0_s4[27]);
		    cache0->mac_src_0_s4[28](mac_src_0_s4[28]);
		    cache0->mac_src_0_s4[29](mac_src_0_s4[29]);
		    cache0->mac_src_0_s4[30](mac_src_0_s4[30]);
		    cache0->mac_src_0_s4[31](mac_src_0_s4[31]);
		    cache0->mac_src_0_s5[0](mac_src_0_s5[0]);
		    cache0->mac_src_0_s5[1](mac_src_0_s5[1]);
		    cache0->mac_src_0_s5[2](mac_src_0_s5[2]);
		    cache0->mac_src_0_s5[3](mac_src_0_s5[3]);
		    cache0->mac_src_0_s5[4](mac_src_0_s5[4]);
		    cache0->mac_src_0_s5[5](mac_src_0_s5[5]);
		    cache0->mac_src_0_s5[6](mac_src_0_s5[6]);
		    cache0->mac_src_0_s5[7](mac_src_0_s5[7]);
		    cache0->mac_src_0_s5[8](mac_src_0_s5[8]);
		    cache0->mac_src_0_s5[9](mac_src_0_s5[9]);
		    cache0->mac_src_0_s5[10](mac_src_0_s5[10]);
		    cache0->mac_src_0_s5[11](mac_src_0_s5[11]);
		    cache0->mac_src_0_s5[12](mac_src_0_s5[12]);
		    cache0->mac_src_0_s5[13](mac_src_0_s5[13]);
		    cache0->mac_src_0_s5[14](mac_src_0_s5[14]);
		    cache0->mac_src_0_s5[15](mac_src_0_s5[15]);
		    cache0->mac_src_0_s5[16](mac_src_0_s5[16]);
		    cache0->mac_src_0_s5[17](mac_src_0_s5[17]);
		    cache0->mac_src_0_s5[18](mac_src_0_s5[18]);
		    cache0->mac_src_0_s5[19](mac_src_0_s5[19]);
		    cache0->mac_src_0_s5[20](mac_src_0_s5[20]);
		    cache0->mac_src_0_s5[21](mac_src_0_s5[21]);
		    cache0->mac_src_0_s5[22](mac_src_0_s5[22]);
		    cache0->mac_src_0_s5[23](mac_src_0_s5[23]);
		    cache0->mac_src_0_s5[24](mac_src_0_s5[24]);
		    cache0->mac_src_0_s5[25](mac_src_0_s5[25]);
		    cache0->mac_src_0_s5[26](mac_src_0_s5[26]);
		    cache0->mac_src_0_s5[27](mac_src_0_s5[27]);
		    cache0->mac_src_0_s5[28](mac_src_0_s5[28]);
		    cache0->mac_src_0_s5[29](mac_src_0_s5[29]);
		    cache0->mac_src_0_s5[30](mac_src_0_s5[30]);
		    cache0->mac_src_0_s5[31](mac_src_0_s5[31]);
		    cache0->mac_src_0_s6[0](mac_src_0_s6[0]);
		    cache0->mac_src_0_s6[1](mac_src_0_s6[1]);
		    cache0->mac_src_0_s6[2](mac_src_0_s6[2]);
		    cache0->mac_src_0_s6[3](mac_src_0_s6[3]);
		    cache0->mac_src_0_s6[4](mac_src_0_s6[4]);
		    cache0->mac_src_0_s6[5](mac_src_0_s6[5]);
		    cache0->mac_src_0_s6[6](mac_src_0_s6[6]);
		    cache0->mac_src_0_s6[7](mac_src_0_s6[7]);
		    cache0->mac_src_0_s6[8](mac_src_0_s6[8]);
		    cache0->mac_src_0_s6[9](mac_src_0_s6[9]);
		    cache0->mac_src_0_s6[10](mac_src_0_s6[10]);
		    cache0->mac_src_0_s6[11](mac_src_0_s6[11]);
		    cache0->mac_src_0_s6[12](mac_src_0_s6[12]);
		    cache0->mac_src_0_s6[13](mac_src_0_s6[13]);
		    cache0->mac_src_0_s6[14](mac_src_0_s6[14]);
		    cache0->mac_src_0_s6[15](mac_src_0_s6[15]);
		    cache0->mac_src_0_s6[16](mac_src_0_s6[16]);
		    cache0->mac_src_0_s6[17](mac_src_0_s6[17]);
		    cache0->mac_src_0_s6[18](mac_src_0_s6[18]);
		    cache0->mac_src_0_s6[19](mac_src_0_s6[19]);
		    cache0->mac_src_0_s6[20](mac_src_0_s6[20]);
		    cache0->mac_src_0_s6[21](mac_src_0_s6[21]);
		    cache0->mac_src_0_s6[22](mac_src_0_s6[22]);
		    cache0->mac_src_0_s6[23](mac_src_0_s6[23]);
		    cache0->mac_src_0_s6[24](mac_src_0_s6[24]);
		    cache0->mac_src_0_s6[25](mac_src_0_s6[25]);
		    cache0->mac_src_0_s6[26](mac_src_0_s6[26]);
		    cache0->mac_src_0_s6[27](mac_src_0_s6[27]);
		    cache0->mac_src_0_s6[28](mac_src_0_s6[28]);
		    cache0->mac_src_0_s6[29](mac_src_0_s6[29]);
		    cache0->mac_src_0_s6[30](mac_src_0_s6[30]);
		    cache0->mac_src_0_s6[31](mac_src_0_s6[31]);
		    cache0->mac_src_1[0](mac_src_1[0]);
		    cache0->mac_src_1[1](mac_src_1[1]);
		    cache0->mac_src_1[2](mac_src_1[2]);
		    cache0->mac_src_1[3](mac_src_1[3]);
		    cache0->mac_src_1[4](mac_src_1[4]);
		    cache0->mac_src_1[5](mac_src_1[5]);
		    cache0->mac_src_1[6](mac_src_1[6]);
		    cache0->mac_src_1[7](mac_src_1[7]);
		    cache0->mac_src_1[8](mac_src_1[8]);
		    cache0->mac_src_1[9](mac_src_1[9]);
		    cache0->mac_src_1[10](mac_src_1[10]);
		    cache0->mac_src_1[11](mac_src_1[11]);
		    cache0->mac_src_1[12](mac_src_1[12]);
		    cache0->mac_src_1[13](mac_src_1[13]);
		    cache0->mac_src_1[14](mac_src_1[14]);
		    cache0->mac_src_1[15](mac_src_1[15]);
		    cache0->mac_src_1[16](mac_src_1[16]);
		    cache0->mac_src_1[17](mac_src_1[17]);
		    cache0->mac_src_1[18](mac_src_1[18]);
		    cache0->mac_src_1[19](mac_src_1[19]);
		    cache0->mac_src_1[20](mac_src_1[20]);
		    cache0->mac_src_1[21](mac_src_1[21]);
		    cache0->mac_src_1[22](mac_src_1[22]);
		    cache0->mac_src_1[23](mac_src_1[23]);
		    cache0->mac_src_1[24](mac_src_1[24]);
		    cache0->mac_src_1[25](mac_src_1[25]);
		    cache0->mac_src_1[26](mac_src_1[26]);
		    cache0->mac_src_1[27](mac_src_1[27]);
		    cache0->mac_src_1[28](mac_src_1[28]);
		    cache0->mac_src_1[29](mac_src_1[29]);
		    cache0->mac_src_1[30](mac_src_1[30]);
		    cache0->mac_src_1[31](mac_src_1[31]);
		    cache0->mac_src_valid(mac_src_valid);
		    cache0->mac_clear(mac_clear);


			{
			const char *simConfig = cache_wrapper::simConfigName();
			
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

void cache_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void cache_wrapper::start_of_simulation()
{

#include <cache_trace.h>

    esc_multiple_writers_warning();
}

void cache_wrapper::CloseTrace()
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

void cache_wrapper::end_of_simulation()
{
	CloseTrace();
}



void cache_wrapper::DeleteInstances()
{
    if (cache0)
    {
        delete cache0;
        cache0 = 0;
    }
    if (cache_cosim0)
    {
        delete cache_cosim0;
        cache_cosim0 = 0;
    }
    if (cache_cycsim0)
    {
        delete cache_cycsim0;
        cache_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_cache)
    if (cache_rtl0)
    {
        delete cache_rtl0;
        cache_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void cache_wrapper_r::thread_mac_src_0_s0_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[0].read();
   mac_src_0_s0_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[1].read();
   mac_src_0_s0_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[2].read();
   mac_src_0_s0_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[3].read();
   mac_src_0_s0_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[4].read();
   mac_src_0_s0_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[5].read();
   mac_src_0_s0_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[6].read();
   mac_src_0_s0_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[7].read();
   mac_src_0_s0_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[8].read();
   mac_src_0_s0_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[9].read();
   mac_src_0_s0_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[10].read();
   mac_src_0_s0_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[11].read();
   mac_src_0_s0_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[12].read();
   mac_src_0_s0_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[13].read();
   mac_src_0_s0_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[14].read();
   mac_src_0_s0_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[15].read();
   mac_src_0_s0_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[16].read();
   mac_src_0_s0_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[17].read();
   mac_src_0_s0_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[18].read();
   mac_src_0_s0_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[19].read();
   mac_src_0_s0_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[20].read();
   mac_src_0_s0_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[21].read();
   mac_src_0_s0_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[22].read();
   mac_src_0_s0_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[23].read();
   mac_src_0_s0_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[24].read();
   mac_src_0_s0_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[25].read();
   mac_src_0_s0_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[26].read();
   mac_src_0_s0_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[27].read();
   mac_src_0_s0_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[28].read();
   mac_src_0_s0_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[29].read();
   mac_src_0_s0_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[30].read();
   mac_src_0_s0_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s0_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[31].read();
   mac_src_0_s0_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[0].read();
   mac_src_0_s1_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[1].read();
   mac_src_0_s1_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[2].read();
   mac_src_0_s1_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[3].read();
   mac_src_0_s1_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[4].read();
   mac_src_0_s1_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[5].read();
   mac_src_0_s1_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[6].read();
   mac_src_0_s1_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[7].read();
   mac_src_0_s1_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[8].read();
   mac_src_0_s1_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[9].read();
   mac_src_0_s1_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[10].read();
   mac_src_0_s1_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[11].read();
   mac_src_0_s1_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[12].read();
   mac_src_0_s1_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[13].read();
   mac_src_0_s1_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[14].read();
   mac_src_0_s1_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[15].read();
   mac_src_0_s1_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[16].read();
   mac_src_0_s1_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[17].read();
   mac_src_0_s1_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[18].read();
   mac_src_0_s1_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[19].read();
   mac_src_0_s1_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[20].read();
   mac_src_0_s1_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[21].read();
   mac_src_0_s1_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[22].read();
   mac_src_0_s1_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[23].read();
   mac_src_0_s1_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[24].read();
   mac_src_0_s1_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[25].read();
   mac_src_0_s1_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[26].read();
   mac_src_0_s1_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[27].read();
   mac_src_0_s1_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[28].read();
   mac_src_0_s1_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[29].read();
   mac_src_0_s1_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[30].read();
   mac_src_0_s1_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s1_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[31].read();
   mac_src_0_s1_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[0].read();
   mac_src_0_s2_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[1].read();
   mac_src_0_s2_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[2].read();
   mac_src_0_s2_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[3].read();
   mac_src_0_s2_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[4].read();
   mac_src_0_s2_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[5].read();
   mac_src_0_s2_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[6].read();
   mac_src_0_s2_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[7].read();
   mac_src_0_s2_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[8].read();
   mac_src_0_s2_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[9].read();
   mac_src_0_s2_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[10].read();
   mac_src_0_s2_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[11].read();
   mac_src_0_s2_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[12].read();
   mac_src_0_s2_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[13].read();
   mac_src_0_s2_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[14].read();
   mac_src_0_s2_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[15].read();
   mac_src_0_s2_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[16].read();
   mac_src_0_s2_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[17].read();
   mac_src_0_s2_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[18].read();
   mac_src_0_s2_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[19].read();
   mac_src_0_s2_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[20].read();
   mac_src_0_s2_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[21].read();
   mac_src_0_s2_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[22].read();
   mac_src_0_s2_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[23].read();
   mac_src_0_s2_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[24].read();
   mac_src_0_s2_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[25].read();
   mac_src_0_s2_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[26].read();
   mac_src_0_s2_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[27].read();
   mac_src_0_s2_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[28].read();
   mac_src_0_s2_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[29].read();
   mac_src_0_s2_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[30].read();
   mac_src_0_s2_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s2_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[31].read();
   mac_src_0_s2_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[0].read();
   mac_src_0_s3_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[1].read();
   mac_src_0_s3_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[2].read();
   mac_src_0_s3_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[3].read();
   mac_src_0_s3_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[4].read();
   mac_src_0_s3_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[5].read();
   mac_src_0_s3_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[6].read();
   mac_src_0_s3_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[7].read();
   mac_src_0_s3_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[8].read();
   mac_src_0_s3_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[9].read();
   mac_src_0_s3_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[10].read();
   mac_src_0_s3_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[11].read();
   mac_src_0_s3_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[12].read();
   mac_src_0_s3_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[13].read();
   mac_src_0_s3_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[14].read();
   mac_src_0_s3_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[15].read();
   mac_src_0_s3_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[16].read();
   mac_src_0_s3_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[17].read();
   mac_src_0_s3_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[18].read();
   mac_src_0_s3_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[19].read();
   mac_src_0_s3_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[20].read();
   mac_src_0_s3_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[21].read();
   mac_src_0_s3_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[22].read();
   mac_src_0_s3_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[23].read();
   mac_src_0_s3_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[24].read();
   mac_src_0_s3_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[25].read();
   mac_src_0_s3_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[26].read();
   mac_src_0_s3_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[27].read();
   mac_src_0_s3_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[28].read();
   mac_src_0_s3_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[29].read();
   mac_src_0_s3_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[30].read();
   mac_src_0_s3_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s3_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[31].read();
   mac_src_0_s3_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[0].read();
   mac_src_0_s4_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[1].read();
   mac_src_0_s4_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[2].read();
   mac_src_0_s4_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[3].read();
   mac_src_0_s4_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[4].read();
   mac_src_0_s4_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[5].read();
   mac_src_0_s4_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[6].read();
   mac_src_0_s4_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[7].read();
   mac_src_0_s4_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[8].read();
   mac_src_0_s4_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[9].read();
   mac_src_0_s4_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[10].read();
   mac_src_0_s4_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[11].read();
   mac_src_0_s4_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[12].read();
   mac_src_0_s4_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[13].read();
   mac_src_0_s4_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[14].read();
   mac_src_0_s4_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[15].read();
   mac_src_0_s4_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[16].read();
   mac_src_0_s4_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[17].read();
   mac_src_0_s4_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[18].read();
   mac_src_0_s4_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[19].read();
   mac_src_0_s4_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[20].read();
   mac_src_0_s4_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[21].read();
   mac_src_0_s4_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[22].read();
   mac_src_0_s4_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[23].read();
   mac_src_0_s4_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[24].read();
   mac_src_0_s4_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[25].read();
   mac_src_0_s4_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[26].read();
   mac_src_0_s4_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[27].read();
   mac_src_0_s4_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[28].read();
   mac_src_0_s4_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[29].read();
   mac_src_0_s4_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[30].read();
   mac_src_0_s4_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s4_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[31].read();
   mac_src_0_s4_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[0].read();
   mac_src_0_s5_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[1].read();
   mac_src_0_s5_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[2].read();
   mac_src_0_s5_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[3].read();
   mac_src_0_s5_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[4].read();
   mac_src_0_s5_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[5].read();
   mac_src_0_s5_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[6].read();
   mac_src_0_s5_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[7].read();
   mac_src_0_s5_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[8].read();
   mac_src_0_s5_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[9].read();
   mac_src_0_s5_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[10].read();
   mac_src_0_s5_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[11].read();
   mac_src_0_s5_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[12].read();
   mac_src_0_s5_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[13].read();
   mac_src_0_s5_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[14].read();
   mac_src_0_s5_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[15].read();
   mac_src_0_s5_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[16].read();
   mac_src_0_s5_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[17].read();
   mac_src_0_s5_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[18].read();
   mac_src_0_s5_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[19].read();
   mac_src_0_s5_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[20].read();
   mac_src_0_s5_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[21].read();
   mac_src_0_s5_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[22].read();
   mac_src_0_s5_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[23].read();
   mac_src_0_s5_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[24].read();
   mac_src_0_s5_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[25].read();
   mac_src_0_s5_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[26].read();
   mac_src_0_s5_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[27].read();
   mac_src_0_s5_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[28].read();
   mac_src_0_s5_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[29].read();
   mac_src_0_s5_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[30].read();
   mac_src_0_s5_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s5_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[31].read();
   mac_src_0_s5_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[0].read();
   mac_src_0_s6_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[1].read();
   mac_src_0_s6_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[2].read();
   mac_src_0_s6_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[3].read();
   mac_src_0_s6_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[4].read();
   mac_src_0_s6_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[5].read();
   mac_src_0_s6_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[6].read();
   mac_src_0_s6_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[7].read();
   mac_src_0_s6_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[8].read();
   mac_src_0_s6_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[9].read();
   mac_src_0_s6_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[10].read();
   mac_src_0_s6_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[11].read();
   mac_src_0_s6_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[12].read();
   mac_src_0_s6_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[13].read();
   mac_src_0_s6_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[14].read();
   mac_src_0_s6_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[15].read();
   mac_src_0_s6_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[16].read();
   mac_src_0_s6_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[17].read();
   mac_src_0_s6_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[18].read();
   mac_src_0_s6_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[19].read();
   mac_src_0_s6_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[20].read();
   mac_src_0_s6_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[21].read();
   mac_src_0_s6_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[22].read();
   mac_src_0_s6_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[23].read();
   mac_src_0_s6_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[24].read();
   mac_src_0_s6_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[25].read();
   mac_src_0_s6_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[26].read();
   mac_src_0_s6_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[27].read();
   mac_src_0_s6_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[28].read();
   mac_src_0_s6_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[29].read();
   mac_src_0_s6_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[30].read();
   mac_src_0_s6_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_0_s6_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[31].read();
   mac_src_0_s6_31.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_0()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[0].read();
   mac_src_1_0.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_1()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[1].read();
   mac_src_1_1.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_2()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[2].read();
   mac_src_1_2.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_3()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[3].read();
   mac_src_1_3.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_4()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[4].read();
   mac_src_1_4.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_5()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[5].read();
   mac_src_1_5.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_6()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[6].read();
   mac_src_1_6.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_7()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[7].read();
   mac_src_1_7.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_8()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[8].read();
   mac_src_1_8.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_9()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[9].read();
   mac_src_1_9.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_10()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[10].read();
   mac_src_1_10.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_11()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[11].read();
   mac_src_1_11.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_12()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[12].read();
   mac_src_1_12.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_13()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[13].read();
   mac_src_1_13.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_14()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[14].read();
   mac_src_1_14.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_15()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[15].read();
   mac_src_1_15.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_16()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[16].read();
   mac_src_1_16.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_17()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[17].read();
   mac_src_1_17.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_18()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[18].read();
   mac_src_1_18.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_19()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[19].read();
   mac_src_1_19.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_20()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[20].read();
   mac_src_1_20.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_21()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[21].read();
   mac_src_1_21.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_22()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[22].read();
   mac_src_1_22.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_23()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[23].read();
   mac_src_1_23.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_24()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[24].read();
   mac_src_1_24.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_25()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[25].read();
   mac_src_1_25.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_26()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[26].read();
   mac_src_1_26.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_27()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[27].read();
   mac_src_1_27.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_28()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[28].read();
   mac_src_1_28.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_29()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[29].read();
   mac_src_1_29.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_30()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[30].read();
   mac_src_1_30.write(tmp);
}
void cache_wrapper_r::thread_mac_src_1_31()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[31].read();
   mac_src_1_31.write(tmp);
}


const char * cache_wrapper_r::simConfigName()
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

enum cache_wrapper_r::Representation cache_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "cache", simConfig, instName, &iresult );
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

void cache_wrapper_r::InitInstances()
{
    enum cache_wrapper_r::Representation rep =
		cache_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "cache" );
	esc_log_representation( "cache", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    cache_cosim0 = new cache_cosim( "cache" );

		    cache_cosim0->clk(clk);
		    cache_cosim0->rstn(rstn);
		    cache_cosim0->cache_en(cache_en);
		    cache_cosim0->systolic_en(systolic_en);
		    cache_cosim0->systolic_depth(systolic_depth);
		    cache_cosim0->addr_if_start(addr_if_start);
		    cache_cosim0->systolic_sel(systolic_sel);
		    cache_cosim0->feature_data(feature_data);
		    cache_cosim0->feature_share_en(feature_share_en);
		    cache_cosim0->feature_data_en(feature_data_en);
		    cache_cosim0->feature_data_sel(feature_data_sel);
		    cache_cosim0->weight_data(weight_data);
		    cache_cosim0->weight_data_en(weight_data_en);
		    cache_cosim0->mac_src_0_s0_0(mac_src_0_s0_0);
		    cache_cosim0->mac_src_0_s0_1(mac_src_0_s0_1);
		    cache_cosim0->mac_src_0_s0_2(mac_src_0_s0_2);
		    cache_cosim0->mac_src_0_s0_3(mac_src_0_s0_3);
		    cache_cosim0->mac_src_0_s0_4(mac_src_0_s0_4);
		    cache_cosim0->mac_src_0_s0_5(mac_src_0_s0_5);
		    cache_cosim0->mac_src_0_s0_6(mac_src_0_s0_6);
		    cache_cosim0->mac_src_0_s0_7(mac_src_0_s0_7);
		    cache_cosim0->mac_src_0_s0_8(mac_src_0_s0_8);
		    cache_cosim0->mac_src_0_s0_9(mac_src_0_s0_9);
		    cache_cosim0->mac_src_0_s0_10(mac_src_0_s0_10);
		    cache_cosim0->mac_src_0_s0_11(mac_src_0_s0_11);
		    cache_cosim0->mac_src_0_s0_12(mac_src_0_s0_12);
		    cache_cosim0->mac_src_0_s0_13(mac_src_0_s0_13);
		    cache_cosim0->mac_src_0_s0_14(mac_src_0_s0_14);
		    cache_cosim0->mac_src_0_s0_15(mac_src_0_s0_15);
		    cache_cosim0->mac_src_0_s0_16(mac_src_0_s0_16);
		    cache_cosim0->mac_src_0_s0_17(mac_src_0_s0_17);
		    cache_cosim0->mac_src_0_s0_18(mac_src_0_s0_18);
		    cache_cosim0->mac_src_0_s0_19(mac_src_0_s0_19);
		    cache_cosim0->mac_src_0_s0_20(mac_src_0_s0_20);
		    cache_cosim0->mac_src_0_s0_21(mac_src_0_s0_21);
		    cache_cosim0->mac_src_0_s0_22(mac_src_0_s0_22);
		    cache_cosim0->mac_src_0_s0_23(mac_src_0_s0_23);
		    cache_cosim0->mac_src_0_s0_24(mac_src_0_s0_24);
		    cache_cosim0->mac_src_0_s0_25(mac_src_0_s0_25);
		    cache_cosim0->mac_src_0_s0_26(mac_src_0_s0_26);
		    cache_cosim0->mac_src_0_s0_27(mac_src_0_s0_27);
		    cache_cosim0->mac_src_0_s0_28(mac_src_0_s0_28);
		    cache_cosim0->mac_src_0_s0_29(mac_src_0_s0_29);
		    cache_cosim0->mac_src_0_s0_30(mac_src_0_s0_30);
		    cache_cosim0->mac_src_0_s0_31(mac_src_0_s0_31);
		    cache_cosim0->mac_src_0_s1_0(mac_src_0_s1_0);
		    cache_cosim0->mac_src_0_s1_1(mac_src_0_s1_1);
		    cache_cosim0->mac_src_0_s1_2(mac_src_0_s1_2);
		    cache_cosim0->mac_src_0_s1_3(mac_src_0_s1_3);
		    cache_cosim0->mac_src_0_s1_4(mac_src_0_s1_4);
		    cache_cosim0->mac_src_0_s1_5(mac_src_0_s1_5);
		    cache_cosim0->mac_src_0_s1_6(mac_src_0_s1_6);
		    cache_cosim0->mac_src_0_s1_7(mac_src_0_s1_7);
		    cache_cosim0->mac_src_0_s1_8(mac_src_0_s1_8);
		    cache_cosim0->mac_src_0_s1_9(mac_src_0_s1_9);
		    cache_cosim0->mac_src_0_s1_10(mac_src_0_s1_10);
		    cache_cosim0->mac_src_0_s1_11(mac_src_0_s1_11);
		    cache_cosim0->mac_src_0_s1_12(mac_src_0_s1_12);
		    cache_cosim0->mac_src_0_s1_13(mac_src_0_s1_13);
		    cache_cosim0->mac_src_0_s1_14(mac_src_0_s1_14);
		    cache_cosim0->mac_src_0_s1_15(mac_src_0_s1_15);
		    cache_cosim0->mac_src_0_s1_16(mac_src_0_s1_16);
		    cache_cosim0->mac_src_0_s1_17(mac_src_0_s1_17);
		    cache_cosim0->mac_src_0_s1_18(mac_src_0_s1_18);
		    cache_cosim0->mac_src_0_s1_19(mac_src_0_s1_19);
		    cache_cosim0->mac_src_0_s1_20(mac_src_0_s1_20);
		    cache_cosim0->mac_src_0_s1_21(mac_src_0_s1_21);
		    cache_cosim0->mac_src_0_s1_22(mac_src_0_s1_22);
		    cache_cosim0->mac_src_0_s1_23(mac_src_0_s1_23);
		    cache_cosim0->mac_src_0_s1_24(mac_src_0_s1_24);
		    cache_cosim0->mac_src_0_s1_25(mac_src_0_s1_25);
		    cache_cosim0->mac_src_0_s1_26(mac_src_0_s1_26);
		    cache_cosim0->mac_src_0_s1_27(mac_src_0_s1_27);
		    cache_cosim0->mac_src_0_s1_28(mac_src_0_s1_28);
		    cache_cosim0->mac_src_0_s1_29(mac_src_0_s1_29);
		    cache_cosim0->mac_src_0_s1_30(mac_src_0_s1_30);
		    cache_cosim0->mac_src_0_s1_31(mac_src_0_s1_31);
		    cache_cosim0->mac_src_0_s2_0(mac_src_0_s2_0);
		    cache_cosim0->mac_src_0_s2_1(mac_src_0_s2_1);
		    cache_cosim0->mac_src_0_s2_2(mac_src_0_s2_2);
		    cache_cosim0->mac_src_0_s2_3(mac_src_0_s2_3);
		    cache_cosim0->mac_src_0_s2_4(mac_src_0_s2_4);
		    cache_cosim0->mac_src_0_s2_5(mac_src_0_s2_5);
		    cache_cosim0->mac_src_0_s2_6(mac_src_0_s2_6);
		    cache_cosim0->mac_src_0_s2_7(mac_src_0_s2_7);
		    cache_cosim0->mac_src_0_s2_8(mac_src_0_s2_8);
		    cache_cosim0->mac_src_0_s2_9(mac_src_0_s2_9);
		    cache_cosim0->mac_src_0_s2_10(mac_src_0_s2_10);
		    cache_cosim0->mac_src_0_s2_11(mac_src_0_s2_11);
		    cache_cosim0->mac_src_0_s2_12(mac_src_0_s2_12);
		    cache_cosim0->mac_src_0_s2_13(mac_src_0_s2_13);
		    cache_cosim0->mac_src_0_s2_14(mac_src_0_s2_14);
		    cache_cosim0->mac_src_0_s2_15(mac_src_0_s2_15);
		    cache_cosim0->mac_src_0_s2_16(mac_src_0_s2_16);
		    cache_cosim0->mac_src_0_s2_17(mac_src_0_s2_17);
		    cache_cosim0->mac_src_0_s2_18(mac_src_0_s2_18);
		    cache_cosim0->mac_src_0_s2_19(mac_src_0_s2_19);
		    cache_cosim0->mac_src_0_s2_20(mac_src_0_s2_20);
		    cache_cosim0->mac_src_0_s2_21(mac_src_0_s2_21);
		    cache_cosim0->mac_src_0_s2_22(mac_src_0_s2_22);
		    cache_cosim0->mac_src_0_s2_23(mac_src_0_s2_23);
		    cache_cosim0->mac_src_0_s2_24(mac_src_0_s2_24);
		    cache_cosim0->mac_src_0_s2_25(mac_src_0_s2_25);
		    cache_cosim0->mac_src_0_s2_26(mac_src_0_s2_26);
		    cache_cosim0->mac_src_0_s2_27(mac_src_0_s2_27);
		    cache_cosim0->mac_src_0_s2_28(mac_src_0_s2_28);
		    cache_cosim0->mac_src_0_s2_29(mac_src_0_s2_29);
		    cache_cosim0->mac_src_0_s2_30(mac_src_0_s2_30);
		    cache_cosim0->mac_src_0_s2_31(mac_src_0_s2_31);
		    cache_cosim0->mac_src_0_s3_0(mac_src_0_s3_0);
		    cache_cosim0->mac_src_0_s3_1(mac_src_0_s3_1);
		    cache_cosim0->mac_src_0_s3_2(mac_src_0_s3_2);
		    cache_cosim0->mac_src_0_s3_3(mac_src_0_s3_3);
		    cache_cosim0->mac_src_0_s3_4(mac_src_0_s3_4);
		    cache_cosim0->mac_src_0_s3_5(mac_src_0_s3_5);
		    cache_cosim0->mac_src_0_s3_6(mac_src_0_s3_6);
		    cache_cosim0->mac_src_0_s3_7(mac_src_0_s3_7);
		    cache_cosim0->mac_src_0_s3_8(mac_src_0_s3_8);
		    cache_cosim0->mac_src_0_s3_9(mac_src_0_s3_9);
		    cache_cosim0->mac_src_0_s3_10(mac_src_0_s3_10);
		    cache_cosim0->mac_src_0_s3_11(mac_src_0_s3_11);
		    cache_cosim0->mac_src_0_s3_12(mac_src_0_s3_12);
		    cache_cosim0->mac_src_0_s3_13(mac_src_0_s3_13);
		    cache_cosim0->mac_src_0_s3_14(mac_src_0_s3_14);
		    cache_cosim0->mac_src_0_s3_15(mac_src_0_s3_15);
		    cache_cosim0->mac_src_0_s3_16(mac_src_0_s3_16);
		    cache_cosim0->mac_src_0_s3_17(mac_src_0_s3_17);
		    cache_cosim0->mac_src_0_s3_18(mac_src_0_s3_18);
		    cache_cosim0->mac_src_0_s3_19(mac_src_0_s3_19);
		    cache_cosim0->mac_src_0_s3_20(mac_src_0_s3_20);
		    cache_cosim0->mac_src_0_s3_21(mac_src_0_s3_21);
		    cache_cosim0->mac_src_0_s3_22(mac_src_0_s3_22);
		    cache_cosim0->mac_src_0_s3_23(mac_src_0_s3_23);
		    cache_cosim0->mac_src_0_s3_24(mac_src_0_s3_24);
		    cache_cosim0->mac_src_0_s3_25(mac_src_0_s3_25);
		    cache_cosim0->mac_src_0_s3_26(mac_src_0_s3_26);
		    cache_cosim0->mac_src_0_s3_27(mac_src_0_s3_27);
		    cache_cosim0->mac_src_0_s3_28(mac_src_0_s3_28);
		    cache_cosim0->mac_src_0_s3_29(mac_src_0_s3_29);
		    cache_cosim0->mac_src_0_s3_30(mac_src_0_s3_30);
		    cache_cosim0->mac_src_0_s3_31(mac_src_0_s3_31);
		    cache_cosim0->mac_src_0_s4_0(mac_src_0_s4_0);
		    cache_cosim0->mac_src_0_s4_1(mac_src_0_s4_1);
		    cache_cosim0->mac_src_0_s4_2(mac_src_0_s4_2);
		    cache_cosim0->mac_src_0_s4_3(mac_src_0_s4_3);
		    cache_cosim0->mac_src_0_s4_4(mac_src_0_s4_4);
		    cache_cosim0->mac_src_0_s4_5(mac_src_0_s4_5);
		    cache_cosim0->mac_src_0_s4_6(mac_src_0_s4_6);
		    cache_cosim0->mac_src_0_s4_7(mac_src_0_s4_7);
		    cache_cosim0->mac_src_0_s4_8(mac_src_0_s4_8);
		    cache_cosim0->mac_src_0_s4_9(mac_src_0_s4_9);
		    cache_cosim0->mac_src_0_s4_10(mac_src_0_s4_10);
		    cache_cosim0->mac_src_0_s4_11(mac_src_0_s4_11);
		    cache_cosim0->mac_src_0_s4_12(mac_src_0_s4_12);
		    cache_cosim0->mac_src_0_s4_13(mac_src_0_s4_13);
		    cache_cosim0->mac_src_0_s4_14(mac_src_0_s4_14);
		    cache_cosim0->mac_src_0_s4_15(mac_src_0_s4_15);
		    cache_cosim0->mac_src_0_s4_16(mac_src_0_s4_16);
		    cache_cosim0->mac_src_0_s4_17(mac_src_0_s4_17);
		    cache_cosim0->mac_src_0_s4_18(mac_src_0_s4_18);
		    cache_cosim0->mac_src_0_s4_19(mac_src_0_s4_19);
		    cache_cosim0->mac_src_0_s4_20(mac_src_0_s4_20);
		    cache_cosim0->mac_src_0_s4_21(mac_src_0_s4_21);
		    cache_cosim0->mac_src_0_s4_22(mac_src_0_s4_22);
		    cache_cosim0->mac_src_0_s4_23(mac_src_0_s4_23);
		    cache_cosim0->mac_src_0_s4_24(mac_src_0_s4_24);
		    cache_cosim0->mac_src_0_s4_25(mac_src_0_s4_25);
		    cache_cosim0->mac_src_0_s4_26(mac_src_0_s4_26);
		    cache_cosim0->mac_src_0_s4_27(mac_src_0_s4_27);
		    cache_cosim0->mac_src_0_s4_28(mac_src_0_s4_28);
		    cache_cosim0->mac_src_0_s4_29(mac_src_0_s4_29);
		    cache_cosim0->mac_src_0_s4_30(mac_src_0_s4_30);
		    cache_cosim0->mac_src_0_s4_31(mac_src_0_s4_31);
		    cache_cosim0->mac_src_0_s5_0(mac_src_0_s5_0);
		    cache_cosim0->mac_src_0_s5_1(mac_src_0_s5_1);
		    cache_cosim0->mac_src_0_s5_2(mac_src_0_s5_2);
		    cache_cosim0->mac_src_0_s5_3(mac_src_0_s5_3);
		    cache_cosim0->mac_src_0_s5_4(mac_src_0_s5_4);
		    cache_cosim0->mac_src_0_s5_5(mac_src_0_s5_5);
		    cache_cosim0->mac_src_0_s5_6(mac_src_0_s5_6);
		    cache_cosim0->mac_src_0_s5_7(mac_src_0_s5_7);
		    cache_cosim0->mac_src_0_s5_8(mac_src_0_s5_8);
		    cache_cosim0->mac_src_0_s5_9(mac_src_0_s5_9);
		    cache_cosim0->mac_src_0_s5_10(mac_src_0_s5_10);
		    cache_cosim0->mac_src_0_s5_11(mac_src_0_s5_11);
		    cache_cosim0->mac_src_0_s5_12(mac_src_0_s5_12);
		    cache_cosim0->mac_src_0_s5_13(mac_src_0_s5_13);
		    cache_cosim0->mac_src_0_s5_14(mac_src_0_s5_14);
		    cache_cosim0->mac_src_0_s5_15(mac_src_0_s5_15);
		    cache_cosim0->mac_src_0_s5_16(mac_src_0_s5_16);
		    cache_cosim0->mac_src_0_s5_17(mac_src_0_s5_17);
		    cache_cosim0->mac_src_0_s5_18(mac_src_0_s5_18);
		    cache_cosim0->mac_src_0_s5_19(mac_src_0_s5_19);
		    cache_cosim0->mac_src_0_s5_20(mac_src_0_s5_20);
		    cache_cosim0->mac_src_0_s5_21(mac_src_0_s5_21);
		    cache_cosim0->mac_src_0_s5_22(mac_src_0_s5_22);
		    cache_cosim0->mac_src_0_s5_23(mac_src_0_s5_23);
		    cache_cosim0->mac_src_0_s5_24(mac_src_0_s5_24);
		    cache_cosim0->mac_src_0_s5_25(mac_src_0_s5_25);
		    cache_cosim0->mac_src_0_s5_26(mac_src_0_s5_26);
		    cache_cosim0->mac_src_0_s5_27(mac_src_0_s5_27);
		    cache_cosim0->mac_src_0_s5_28(mac_src_0_s5_28);
		    cache_cosim0->mac_src_0_s5_29(mac_src_0_s5_29);
		    cache_cosim0->mac_src_0_s5_30(mac_src_0_s5_30);
		    cache_cosim0->mac_src_0_s5_31(mac_src_0_s5_31);
		    cache_cosim0->mac_src_0_s6_0(mac_src_0_s6_0);
		    cache_cosim0->mac_src_0_s6_1(mac_src_0_s6_1);
		    cache_cosim0->mac_src_0_s6_2(mac_src_0_s6_2);
		    cache_cosim0->mac_src_0_s6_3(mac_src_0_s6_3);
		    cache_cosim0->mac_src_0_s6_4(mac_src_0_s6_4);
		    cache_cosim0->mac_src_0_s6_5(mac_src_0_s6_5);
		    cache_cosim0->mac_src_0_s6_6(mac_src_0_s6_6);
		    cache_cosim0->mac_src_0_s6_7(mac_src_0_s6_7);
		    cache_cosim0->mac_src_0_s6_8(mac_src_0_s6_8);
		    cache_cosim0->mac_src_0_s6_9(mac_src_0_s6_9);
		    cache_cosim0->mac_src_0_s6_10(mac_src_0_s6_10);
		    cache_cosim0->mac_src_0_s6_11(mac_src_0_s6_11);
		    cache_cosim0->mac_src_0_s6_12(mac_src_0_s6_12);
		    cache_cosim0->mac_src_0_s6_13(mac_src_0_s6_13);
		    cache_cosim0->mac_src_0_s6_14(mac_src_0_s6_14);
		    cache_cosim0->mac_src_0_s6_15(mac_src_0_s6_15);
		    cache_cosim0->mac_src_0_s6_16(mac_src_0_s6_16);
		    cache_cosim0->mac_src_0_s6_17(mac_src_0_s6_17);
		    cache_cosim0->mac_src_0_s6_18(mac_src_0_s6_18);
		    cache_cosim0->mac_src_0_s6_19(mac_src_0_s6_19);
		    cache_cosim0->mac_src_0_s6_20(mac_src_0_s6_20);
		    cache_cosim0->mac_src_0_s6_21(mac_src_0_s6_21);
		    cache_cosim0->mac_src_0_s6_22(mac_src_0_s6_22);
		    cache_cosim0->mac_src_0_s6_23(mac_src_0_s6_23);
		    cache_cosim0->mac_src_0_s6_24(mac_src_0_s6_24);
		    cache_cosim0->mac_src_0_s6_25(mac_src_0_s6_25);
		    cache_cosim0->mac_src_0_s6_26(mac_src_0_s6_26);
		    cache_cosim0->mac_src_0_s6_27(mac_src_0_s6_27);
		    cache_cosim0->mac_src_0_s6_28(mac_src_0_s6_28);
		    cache_cosim0->mac_src_0_s6_29(mac_src_0_s6_29);
		    cache_cosim0->mac_src_0_s6_30(mac_src_0_s6_30);
		    cache_cosim0->mac_src_0_s6_31(mac_src_0_s6_31);
		    cache_cosim0->mac_src_1_0(mac_src_1_0);
		    cache_cosim0->mac_src_1_1(mac_src_1_1);
		    cache_cosim0->mac_src_1_2(mac_src_1_2);
		    cache_cosim0->mac_src_1_3(mac_src_1_3);
		    cache_cosim0->mac_src_1_4(mac_src_1_4);
		    cache_cosim0->mac_src_1_5(mac_src_1_5);
		    cache_cosim0->mac_src_1_6(mac_src_1_6);
		    cache_cosim0->mac_src_1_7(mac_src_1_7);
		    cache_cosim0->mac_src_1_8(mac_src_1_8);
		    cache_cosim0->mac_src_1_9(mac_src_1_9);
		    cache_cosim0->mac_src_1_10(mac_src_1_10);
		    cache_cosim0->mac_src_1_11(mac_src_1_11);
		    cache_cosim0->mac_src_1_12(mac_src_1_12);
		    cache_cosim0->mac_src_1_13(mac_src_1_13);
		    cache_cosim0->mac_src_1_14(mac_src_1_14);
		    cache_cosim0->mac_src_1_15(mac_src_1_15);
		    cache_cosim0->mac_src_1_16(mac_src_1_16);
		    cache_cosim0->mac_src_1_17(mac_src_1_17);
		    cache_cosim0->mac_src_1_18(mac_src_1_18);
		    cache_cosim0->mac_src_1_19(mac_src_1_19);
		    cache_cosim0->mac_src_1_20(mac_src_1_20);
		    cache_cosim0->mac_src_1_21(mac_src_1_21);
		    cache_cosim0->mac_src_1_22(mac_src_1_22);
		    cache_cosim0->mac_src_1_23(mac_src_1_23);
		    cache_cosim0->mac_src_1_24(mac_src_1_24);
		    cache_cosim0->mac_src_1_25(mac_src_1_25);
		    cache_cosim0->mac_src_1_26(mac_src_1_26);
		    cache_cosim0->mac_src_1_27(mac_src_1_27);
		    cache_cosim0->mac_src_1_28(mac_src_1_28);
		    cache_cosim0->mac_src_1_29(mac_src_1_29);
		    cache_cosim0->mac_src_1_30(mac_src_1_30);
		    cache_cosim0->mac_src_1_31(mac_src_1_31);
		    cache_cosim0->mac_src_valid(mac_src_valid);
		    cache_cosim0->mac_clear(mac_clear);

			break;
		case BDWRep_RTL_HDL:
		    cache_cosim0 = new cache_cosim( "cache" );

		    cache_cosim0->clk(clk);
		    cache_cosim0->rstn(rstn);
		    cache_cosim0->cache_en(cache_en);
		    cache_cosim0->systolic_en(systolic_en);
		    cache_cosim0->systolic_depth(systolic_depth);
		    cache_cosim0->addr_if_start(addr_if_start);
		    cache_cosim0->systolic_sel(systolic_sel);
		    cache_cosim0->feature_data(feature_data);
		    cache_cosim0->feature_share_en(feature_share_en);
		    cache_cosim0->feature_data_en(feature_data_en);
		    cache_cosim0->feature_data_sel(feature_data_sel);
		    cache_cosim0->weight_data(weight_data);
		    cache_cosim0->weight_data_en(weight_data_en);
		    cache_cosim0->mac_src_0_s0_0(mac_src_0_s0_0);
		    cache_cosim0->mac_src_0_s0_1(mac_src_0_s0_1);
		    cache_cosim0->mac_src_0_s0_2(mac_src_0_s0_2);
		    cache_cosim0->mac_src_0_s0_3(mac_src_0_s0_3);
		    cache_cosim0->mac_src_0_s0_4(mac_src_0_s0_4);
		    cache_cosim0->mac_src_0_s0_5(mac_src_0_s0_5);
		    cache_cosim0->mac_src_0_s0_6(mac_src_0_s0_6);
		    cache_cosim0->mac_src_0_s0_7(mac_src_0_s0_7);
		    cache_cosim0->mac_src_0_s0_8(mac_src_0_s0_8);
		    cache_cosim0->mac_src_0_s0_9(mac_src_0_s0_9);
		    cache_cosim0->mac_src_0_s0_10(mac_src_0_s0_10);
		    cache_cosim0->mac_src_0_s0_11(mac_src_0_s0_11);
		    cache_cosim0->mac_src_0_s0_12(mac_src_0_s0_12);
		    cache_cosim0->mac_src_0_s0_13(mac_src_0_s0_13);
		    cache_cosim0->mac_src_0_s0_14(mac_src_0_s0_14);
		    cache_cosim0->mac_src_0_s0_15(mac_src_0_s0_15);
		    cache_cosim0->mac_src_0_s0_16(mac_src_0_s0_16);
		    cache_cosim0->mac_src_0_s0_17(mac_src_0_s0_17);
		    cache_cosim0->mac_src_0_s0_18(mac_src_0_s0_18);
		    cache_cosim0->mac_src_0_s0_19(mac_src_0_s0_19);
		    cache_cosim0->mac_src_0_s0_20(mac_src_0_s0_20);
		    cache_cosim0->mac_src_0_s0_21(mac_src_0_s0_21);
		    cache_cosim0->mac_src_0_s0_22(mac_src_0_s0_22);
		    cache_cosim0->mac_src_0_s0_23(mac_src_0_s0_23);
		    cache_cosim0->mac_src_0_s0_24(mac_src_0_s0_24);
		    cache_cosim0->mac_src_0_s0_25(mac_src_0_s0_25);
		    cache_cosim0->mac_src_0_s0_26(mac_src_0_s0_26);
		    cache_cosim0->mac_src_0_s0_27(mac_src_0_s0_27);
		    cache_cosim0->mac_src_0_s0_28(mac_src_0_s0_28);
		    cache_cosim0->mac_src_0_s0_29(mac_src_0_s0_29);
		    cache_cosim0->mac_src_0_s0_30(mac_src_0_s0_30);
		    cache_cosim0->mac_src_0_s0_31(mac_src_0_s0_31);
		    cache_cosim0->mac_src_0_s1_0(mac_src_0_s1_0);
		    cache_cosim0->mac_src_0_s1_1(mac_src_0_s1_1);
		    cache_cosim0->mac_src_0_s1_2(mac_src_0_s1_2);
		    cache_cosim0->mac_src_0_s1_3(mac_src_0_s1_3);
		    cache_cosim0->mac_src_0_s1_4(mac_src_0_s1_4);
		    cache_cosim0->mac_src_0_s1_5(mac_src_0_s1_5);
		    cache_cosim0->mac_src_0_s1_6(mac_src_0_s1_6);
		    cache_cosim0->mac_src_0_s1_7(mac_src_0_s1_7);
		    cache_cosim0->mac_src_0_s1_8(mac_src_0_s1_8);
		    cache_cosim0->mac_src_0_s1_9(mac_src_0_s1_9);
		    cache_cosim0->mac_src_0_s1_10(mac_src_0_s1_10);
		    cache_cosim0->mac_src_0_s1_11(mac_src_0_s1_11);
		    cache_cosim0->mac_src_0_s1_12(mac_src_0_s1_12);
		    cache_cosim0->mac_src_0_s1_13(mac_src_0_s1_13);
		    cache_cosim0->mac_src_0_s1_14(mac_src_0_s1_14);
		    cache_cosim0->mac_src_0_s1_15(mac_src_0_s1_15);
		    cache_cosim0->mac_src_0_s1_16(mac_src_0_s1_16);
		    cache_cosim0->mac_src_0_s1_17(mac_src_0_s1_17);
		    cache_cosim0->mac_src_0_s1_18(mac_src_0_s1_18);
		    cache_cosim0->mac_src_0_s1_19(mac_src_0_s1_19);
		    cache_cosim0->mac_src_0_s1_20(mac_src_0_s1_20);
		    cache_cosim0->mac_src_0_s1_21(mac_src_0_s1_21);
		    cache_cosim0->mac_src_0_s1_22(mac_src_0_s1_22);
		    cache_cosim0->mac_src_0_s1_23(mac_src_0_s1_23);
		    cache_cosim0->mac_src_0_s1_24(mac_src_0_s1_24);
		    cache_cosim0->mac_src_0_s1_25(mac_src_0_s1_25);
		    cache_cosim0->mac_src_0_s1_26(mac_src_0_s1_26);
		    cache_cosim0->mac_src_0_s1_27(mac_src_0_s1_27);
		    cache_cosim0->mac_src_0_s1_28(mac_src_0_s1_28);
		    cache_cosim0->mac_src_0_s1_29(mac_src_0_s1_29);
		    cache_cosim0->mac_src_0_s1_30(mac_src_0_s1_30);
		    cache_cosim0->mac_src_0_s1_31(mac_src_0_s1_31);
		    cache_cosim0->mac_src_0_s2_0(mac_src_0_s2_0);
		    cache_cosim0->mac_src_0_s2_1(mac_src_0_s2_1);
		    cache_cosim0->mac_src_0_s2_2(mac_src_0_s2_2);
		    cache_cosim0->mac_src_0_s2_3(mac_src_0_s2_3);
		    cache_cosim0->mac_src_0_s2_4(mac_src_0_s2_4);
		    cache_cosim0->mac_src_0_s2_5(mac_src_0_s2_5);
		    cache_cosim0->mac_src_0_s2_6(mac_src_0_s2_6);
		    cache_cosim0->mac_src_0_s2_7(mac_src_0_s2_7);
		    cache_cosim0->mac_src_0_s2_8(mac_src_0_s2_8);
		    cache_cosim0->mac_src_0_s2_9(mac_src_0_s2_9);
		    cache_cosim0->mac_src_0_s2_10(mac_src_0_s2_10);
		    cache_cosim0->mac_src_0_s2_11(mac_src_0_s2_11);
		    cache_cosim0->mac_src_0_s2_12(mac_src_0_s2_12);
		    cache_cosim0->mac_src_0_s2_13(mac_src_0_s2_13);
		    cache_cosim0->mac_src_0_s2_14(mac_src_0_s2_14);
		    cache_cosim0->mac_src_0_s2_15(mac_src_0_s2_15);
		    cache_cosim0->mac_src_0_s2_16(mac_src_0_s2_16);
		    cache_cosim0->mac_src_0_s2_17(mac_src_0_s2_17);
		    cache_cosim0->mac_src_0_s2_18(mac_src_0_s2_18);
		    cache_cosim0->mac_src_0_s2_19(mac_src_0_s2_19);
		    cache_cosim0->mac_src_0_s2_20(mac_src_0_s2_20);
		    cache_cosim0->mac_src_0_s2_21(mac_src_0_s2_21);
		    cache_cosim0->mac_src_0_s2_22(mac_src_0_s2_22);
		    cache_cosim0->mac_src_0_s2_23(mac_src_0_s2_23);
		    cache_cosim0->mac_src_0_s2_24(mac_src_0_s2_24);
		    cache_cosim0->mac_src_0_s2_25(mac_src_0_s2_25);
		    cache_cosim0->mac_src_0_s2_26(mac_src_0_s2_26);
		    cache_cosim0->mac_src_0_s2_27(mac_src_0_s2_27);
		    cache_cosim0->mac_src_0_s2_28(mac_src_0_s2_28);
		    cache_cosim0->mac_src_0_s2_29(mac_src_0_s2_29);
		    cache_cosim0->mac_src_0_s2_30(mac_src_0_s2_30);
		    cache_cosim0->mac_src_0_s2_31(mac_src_0_s2_31);
		    cache_cosim0->mac_src_0_s3_0(mac_src_0_s3_0);
		    cache_cosim0->mac_src_0_s3_1(mac_src_0_s3_1);
		    cache_cosim0->mac_src_0_s3_2(mac_src_0_s3_2);
		    cache_cosim0->mac_src_0_s3_3(mac_src_0_s3_3);
		    cache_cosim0->mac_src_0_s3_4(mac_src_0_s3_4);
		    cache_cosim0->mac_src_0_s3_5(mac_src_0_s3_5);
		    cache_cosim0->mac_src_0_s3_6(mac_src_0_s3_6);
		    cache_cosim0->mac_src_0_s3_7(mac_src_0_s3_7);
		    cache_cosim0->mac_src_0_s3_8(mac_src_0_s3_8);
		    cache_cosim0->mac_src_0_s3_9(mac_src_0_s3_9);
		    cache_cosim0->mac_src_0_s3_10(mac_src_0_s3_10);
		    cache_cosim0->mac_src_0_s3_11(mac_src_0_s3_11);
		    cache_cosim0->mac_src_0_s3_12(mac_src_0_s3_12);
		    cache_cosim0->mac_src_0_s3_13(mac_src_0_s3_13);
		    cache_cosim0->mac_src_0_s3_14(mac_src_0_s3_14);
		    cache_cosim0->mac_src_0_s3_15(mac_src_0_s3_15);
		    cache_cosim0->mac_src_0_s3_16(mac_src_0_s3_16);
		    cache_cosim0->mac_src_0_s3_17(mac_src_0_s3_17);
		    cache_cosim0->mac_src_0_s3_18(mac_src_0_s3_18);
		    cache_cosim0->mac_src_0_s3_19(mac_src_0_s3_19);
		    cache_cosim0->mac_src_0_s3_20(mac_src_0_s3_20);
		    cache_cosim0->mac_src_0_s3_21(mac_src_0_s3_21);
		    cache_cosim0->mac_src_0_s3_22(mac_src_0_s3_22);
		    cache_cosim0->mac_src_0_s3_23(mac_src_0_s3_23);
		    cache_cosim0->mac_src_0_s3_24(mac_src_0_s3_24);
		    cache_cosim0->mac_src_0_s3_25(mac_src_0_s3_25);
		    cache_cosim0->mac_src_0_s3_26(mac_src_0_s3_26);
		    cache_cosim0->mac_src_0_s3_27(mac_src_0_s3_27);
		    cache_cosim0->mac_src_0_s3_28(mac_src_0_s3_28);
		    cache_cosim0->mac_src_0_s3_29(mac_src_0_s3_29);
		    cache_cosim0->mac_src_0_s3_30(mac_src_0_s3_30);
		    cache_cosim0->mac_src_0_s3_31(mac_src_0_s3_31);
		    cache_cosim0->mac_src_0_s4_0(mac_src_0_s4_0);
		    cache_cosim0->mac_src_0_s4_1(mac_src_0_s4_1);
		    cache_cosim0->mac_src_0_s4_2(mac_src_0_s4_2);
		    cache_cosim0->mac_src_0_s4_3(mac_src_0_s4_3);
		    cache_cosim0->mac_src_0_s4_4(mac_src_0_s4_4);
		    cache_cosim0->mac_src_0_s4_5(mac_src_0_s4_5);
		    cache_cosim0->mac_src_0_s4_6(mac_src_0_s4_6);
		    cache_cosim0->mac_src_0_s4_7(mac_src_0_s4_7);
		    cache_cosim0->mac_src_0_s4_8(mac_src_0_s4_8);
		    cache_cosim0->mac_src_0_s4_9(mac_src_0_s4_9);
		    cache_cosim0->mac_src_0_s4_10(mac_src_0_s4_10);
		    cache_cosim0->mac_src_0_s4_11(mac_src_0_s4_11);
		    cache_cosim0->mac_src_0_s4_12(mac_src_0_s4_12);
		    cache_cosim0->mac_src_0_s4_13(mac_src_0_s4_13);
		    cache_cosim0->mac_src_0_s4_14(mac_src_0_s4_14);
		    cache_cosim0->mac_src_0_s4_15(mac_src_0_s4_15);
		    cache_cosim0->mac_src_0_s4_16(mac_src_0_s4_16);
		    cache_cosim0->mac_src_0_s4_17(mac_src_0_s4_17);
		    cache_cosim0->mac_src_0_s4_18(mac_src_0_s4_18);
		    cache_cosim0->mac_src_0_s4_19(mac_src_0_s4_19);
		    cache_cosim0->mac_src_0_s4_20(mac_src_0_s4_20);
		    cache_cosim0->mac_src_0_s4_21(mac_src_0_s4_21);
		    cache_cosim0->mac_src_0_s4_22(mac_src_0_s4_22);
		    cache_cosim0->mac_src_0_s4_23(mac_src_0_s4_23);
		    cache_cosim0->mac_src_0_s4_24(mac_src_0_s4_24);
		    cache_cosim0->mac_src_0_s4_25(mac_src_0_s4_25);
		    cache_cosim0->mac_src_0_s4_26(mac_src_0_s4_26);
		    cache_cosim0->mac_src_0_s4_27(mac_src_0_s4_27);
		    cache_cosim0->mac_src_0_s4_28(mac_src_0_s4_28);
		    cache_cosim0->mac_src_0_s4_29(mac_src_0_s4_29);
		    cache_cosim0->mac_src_0_s4_30(mac_src_0_s4_30);
		    cache_cosim0->mac_src_0_s4_31(mac_src_0_s4_31);
		    cache_cosim0->mac_src_0_s5_0(mac_src_0_s5_0);
		    cache_cosim0->mac_src_0_s5_1(mac_src_0_s5_1);
		    cache_cosim0->mac_src_0_s5_2(mac_src_0_s5_2);
		    cache_cosim0->mac_src_0_s5_3(mac_src_0_s5_3);
		    cache_cosim0->mac_src_0_s5_4(mac_src_0_s5_4);
		    cache_cosim0->mac_src_0_s5_5(mac_src_0_s5_5);
		    cache_cosim0->mac_src_0_s5_6(mac_src_0_s5_6);
		    cache_cosim0->mac_src_0_s5_7(mac_src_0_s5_7);
		    cache_cosim0->mac_src_0_s5_8(mac_src_0_s5_8);
		    cache_cosim0->mac_src_0_s5_9(mac_src_0_s5_9);
		    cache_cosim0->mac_src_0_s5_10(mac_src_0_s5_10);
		    cache_cosim0->mac_src_0_s5_11(mac_src_0_s5_11);
		    cache_cosim0->mac_src_0_s5_12(mac_src_0_s5_12);
		    cache_cosim0->mac_src_0_s5_13(mac_src_0_s5_13);
		    cache_cosim0->mac_src_0_s5_14(mac_src_0_s5_14);
		    cache_cosim0->mac_src_0_s5_15(mac_src_0_s5_15);
		    cache_cosim0->mac_src_0_s5_16(mac_src_0_s5_16);
		    cache_cosim0->mac_src_0_s5_17(mac_src_0_s5_17);
		    cache_cosim0->mac_src_0_s5_18(mac_src_0_s5_18);
		    cache_cosim0->mac_src_0_s5_19(mac_src_0_s5_19);
		    cache_cosim0->mac_src_0_s5_20(mac_src_0_s5_20);
		    cache_cosim0->mac_src_0_s5_21(mac_src_0_s5_21);
		    cache_cosim0->mac_src_0_s5_22(mac_src_0_s5_22);
		    cache_cosim0->mac_src_0_s5_23(mac_src_0_s5_23);
		    cache_cosim0->mac_src_0_s5_24(mac_src_0_s5_24);
		    cache_cosim0->mac_src_0_s5_25(mac_src_0_s5_25);
		    cache_cosim0->mac_src_0_s5_26(mac_src_0_s5_26);
		    cache_cosim0->mac_src_0_s5_27(mac_src_0_s5_27);
		    cache_cosim0->mac_src_0_s5_28(mac_src_0_s5_28);
		    cache_cosim0->mac_src_0_s5_29(mac_src_0_s5_29);
		    cache_cosim0->mac_src_0_s5_30(mac_src_0_s5_30);
		    cache_cosim0->mac_src_0_s5_31(mac_src_0_s5_31);
		    cache_cosim0->mac_src_0_s6_0(mac_src_0_s6_0);
		    cache_cosim0->mac_src_0_s6_1(mac_src_0_s6_1);
		    cache_cosim0->mac_src_0_s6_2(mac_src_0_s6_2);
		    cache_cosim0->mac_src_0_s6_3(mac_src_0_s6_3);
		    cache_cosim0->mac_src_0_s6_4(mac_src_0_s6_4);
		    cache_cosim0->mac_src_0_s6_5(mac_src_0_s6_5);
		    cache_cosim0->mac_src_0_s6_6(mac_src_0_s6_6);
		    cache_cosim0->mac_src_0_s6_7(mac_src_0_s6_7);
		    cache_cosim0->mac_src_0_s6_8(mac_src_0_s6_8);
		    cache_cosim0->mac_src_0_s6_9(mac_src_0_s6_9);
		    cache_cosim0->mac_src_0_s6_10(mac_src_0_s6_10);
		    cache_cosim0->mac_src_0_s6_11(mac_src_0_s6_11);
		    cache_cosim0->mac_src_0_s6_12(mac_src_0_s6_12);
		    cache_cosim0->mac_src_0_s6_13(mac_src_0_s6_13);
		    cache_cosim0->mac_src_0_s6_14(mac_src_0_s6_14);
		    cache_cosim0->mac_src_0_s6_15(mac_src_0_s6_15);
		    cache_cosim0->mac_src_0_s6_16(mac_src_0_s6_16);
		    cache_cosim0->mac_src_0_s6_17(mac_src_0_s6_17);
		    cache_cosim0->mac_src_0_s6_18(mac_src_0_s6_18);
		    cache_cosim0->mac_src_0_s6_19(mac_src_0_s6_19);
		    cache_cosim0->mac_src_0_s6_20(mac_src_0_s6_20);
		    cache_cosim0->mac_src_0_s6_21(mac_src_0_s6_21);
		    cache_cosim0->mac_src_0_s6_22(mac_src_0_s6_22);
		    cache_cosim0->mac_src_0_s6_23(mac_src_0_s6_23);
		    cache_cosim0->mac_src_0_s6_24(mac_src_0_s6_24);
		    cache_cosim0->mac_src_0_s6_25(mac_src_0_s6_25);
		    cache_cosim0->mac_src_0_s6_26(mac_src_0_s6_26);
		    cache_cosim0->mac_src_0_s6_27(mac_src_0_s6_27);
		    cache_cosim0->mac_src_0_s6_28(mac_src_0_s6_28);
		    cache_cosim0->mac_src_0_s6_29(mac_src_0_s6_29);
		    cache_cosim0->mac_src_0_s6_30(mac_src_0_s6_30);
		    cache_cosim0->mac_src_0_s6_31(mac_src_0_s6_31);
		    cache_cosim0->mac_src_1_0(mac_src_1_0);
		    cache_cosim0->mac_src_1_1(mac_src_1_1);
		    cache_cosim0->mac_src_1_2(mac_src_1_2);
		    cache_cosim0->mac_src_1_3(mac_src_1_3);
		    cache_cosim0->mac_src_1_4(mac_src_1_4);
		    cache_cosim0->mac_src_1_5(mac_src_1_5);
		    cache_cosim0->mac_src_1_6(mac_src_1_6);
		    cache_cosim0->mac_src_1_7(mac_src_1_7);
		    cache_cosim0->mac_src_1_8(mac_src_1_8);
		    cache_cosim0->mac_src_1_9(mac_src_1_9);
		    cache_cosim0->mac_src_1_10(mac_src_1_10);
		    cache_cosim0->mac_src_1_11(mac_src_1_11);
		    cache_cosim0->mac_src_1_12(mac_src_1_12);
		    cache_cosim0->mac_src_1_13(mac_src_1_13);
		    cache_cosim0->mac_src_1_14(mac_src_1_14);
		    cache_cosim0->mac_src_1_15(mac_src_1_15);
		    cache_cosim0->mac_src_1_16(mac_src_1_16);
		    cache_cosim0->mac_src_1_17(mac_src_1_17);
		    cache_cosim0->mac_src_1_18(mac_src_1_18);
		    cache_cosim0->mac_src_1_19(mac_src_1_19);
		    cache_cosim0->mac_src_1_20(mac_src_1_20);
		    cache_cosim0->mac_src_1_21(mac_src_1_21);
		    cache_cosim0->mac_src_1_22(mac_src_1_22);
		    cache_cosim0->mac_src_1_23(mac_src_1_23);
		    cache_cosim0->mac_src_1_24(mac_src_1_24);
		    cache_cosim0->mac_src_1_25(mac_src_1_25);
		    cache_cosim0->mac_src_1_26(mac_src_1_26);
		    cache_cosim0->mac_src_1_27(mac_src_1_27);
		    cache_cosim0->mac_src_1_28(mac_src_1_28);
		    cache_cosim0->mac_src_1_29(mac_src_1_29);
		    cache_cosim0->mac_src_1_30(mac_src_1_30);
		    cache_cosim0->mac_src_1_31(mac_src_1_31);
		    cache_cosim0->mac_src_valid(mac_src_valid);
		    cache_cosim0->mac_clear(mac_clear);

			break;
        case BDWRep_CYC_HDL:
            if ( cache_cycsim_factory_p )
                cache_cycsim0 = cache_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module cache");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"cache\"");

		    cache_cycsim0->clk(clk);
		    cache_cycsim0->rstn(rstn);
		    cache_cycsim0->cache_en(cache_en);
		    cache_cycsim0->systolic_en(systolic_en);
		    cache_cycsim0->systolic_depth(systolic_depth);
		    cache_cycsim0->addr_if_start(addr_if_start);
		    cache_cycsim0->systolic_sel(systolic_sel);
		    cache_cycsim0->feature_data(feature_data);
		    cache_cycsim0->feature_share_en(feature_share_en);
		    cache_cycsim0->feature_data_en(feature_data_en);
		    cache_cycsim0->feature_data_sel(feature_data_sel);
		    cache_cycsim0->weight_data(weight_data);
		    cache_cycsim0->weight_data_en(weight_data_en);
		    cache_cycsim0->mac_src_0_s0_0(mac_src_0_s0_0);
		    cache_cycsim0->mac_src_0_s0_1(mac_src_0_s0_1);
		    cache_cycsim0->mac_src_0_s0_2(mac_src_0_s0_2);
		    cache_cycsim0->mac_src_0_s0_3(mac_src_0_s0_3);
		    cache_cycsim0->mac_src_0_s0_4(mac_src_0_s0_4);
		    cache_cycsim0->mac_src_0_s0_5(mac_src_0_s0_5);
		    cache_cycsim0->mac_src_0_s0_6(mac_src_0_s0_6);
		    cache_cycsim0->mac_src_0_s0_7(mac_src_0_s0_7);
		    cache_cycsim0->mac_src_0_s0_8(mac_src_0_s0_8);
		    cache_cycsim0->mac_src_0_s0_9(mac_src_0_s0_9);
		    cache_cycsim0->mac_src_0_s0_10(mac_src_0_s0_10);
		    cache_cycsim0->mac_src_0_s0_11(mac_src_0_s0_11);
		    cache_cycsim0->mac_src_0_s0_12(mac_src_0_s0_12);
		    cache_cycsim0->mac_src_0_s0_13(mac_src_0_s0_13);
		    cache_cycsim0->mac_src_0_s0_14(mac_src_0_s0_14);
		    cache_cycsim0->mac_src_0_s0_15(mac_src_0_s0_15);
		    cache_cycsim0->mac_src_0_s0_16(mac_src_0_s0_16);
		    cache_cycsim0->mac_src_0_s0_17(mac_src_0_s0_17);
		    cache_cycsim0->mac_src_0_s0_18(mac_src_0_s0_18);
		    cache_cycsim0->mac_src_0_s0_19(mac_src_0_s0_19);
		    cache_cycsim0->mac_src_0_s0_20(mac_src_0_s0_20);
		    cache_cycsim0->mac_src_0_s0_21(mac_src_0_s0_21);
		    cache_cycsim0->mac_src_0_s0_22(mac_src_0_s0_22);
		    cache_cycsim0->mac_src_0_s0_23(mac_src_0_s0_23);
		    cache_cycsim0->mac_src_0_s0_24(mac_src_0_s0_24);
		    cache_cycsim0->mac_src_0_s0_25(mac_src_0_s0_25);
		    cache_cycsim0->mac_src_0_s0_26(mac_src_0_s0_26);
		    cache_cycsim0->mac_src_0_s0_27(mac_src_0_s0_27);
		    cache_cycsim0->mac_src_0_s0_28(mac_src_0_s0_28);
		    cache_cycsim0->mac_src_0_s0_29(mac_src_0_s0_29);
		    cache_cycsim0->mac_src_0_s0_30(mac_src_0_s0_30);
		    cache_cycsim0->mac_src_0_s0_31(mac_src_0_s0_31);
		    cache_cycsim0->mac_src_0_s1_0(mac_src_0_s1_0);
		    cache_cycsim0->mac_src_0_s1_1(mac_src_0_s1_1);
		    cache_cycsim0->mac_src_0_s1_2(mac_src_0_s1_2);
		    cache_cycsim0->mac_src_0_s1_3(mac_src_0_s1_3);
		    cache_cycsim0->mac_src_0_s1_4(mac_src_0_s1_4);
		    cache_cycsim0->mac_src_0_s1_5(mac_src_0_s1_5);
		    cache_cycsim0->mac_src_0_s1_6(mac_src_0_s1_6);
		    cache_cycsim0->mac_src_0_s1_7(mac_src_0_s1_7);
		    cache_cycsim0->mac_src_0_s1_8(mac_src_0_s1_8);
		    cache_cycsim0->mac_src_0_s1_9(mac_src_0_s1_9);
		    cache_cycsim0->mac_src_0_s1_10(mac_src_0_s1_10);
		    cache_cycsim0->mac_src_0_s1_11(mac_src_0_s1_11);
		    cache_cycsim0->mac_src_0_s1_12(mac_src_0_s1_12);
		    cache_cycsim0->mac_src_0_s1_13(mac_src_0_s1_13);
		    cache_cycsim0->mac_src_0_s1_14(mac_src_0_s1_14);
		    cache_cycsim0->mac_src_0_s1_15(mac_src_0_s1_15);
		    cache_cycsim0->mac_src_0_s1_16(mac_src_0_s1_16);
		    cache_cycsim0->mac_src_0_s1_17(mac_src_0_s1_17);
		    cache_cycsim0->mac_src_0_s1_18(mac_src_0_s1_18);
		    cache_cycsim0->mac_src_0_s1_19(mac_src_0_s1_19);
		    cache_cycsim0->mac_src_0_s1_20(mac_src_0_s1_20);
		    cache_cycsim0->mac_src_0_s1_21(mac_src_0_s1_21);
		    cache_cycsim0->mac_src_0_s1_22(mac_src_0_s1_22);
		    cache_cycsim0->mac_src_0_s1_23(mac_src_0_s1_23);
		    cache_cycsim0->mac_src_0_s1_24(mac_src_0_s1_24);
		    cache_cycsim0->mac_src_0_s1_25(mac_src_0_s1_25);
		    cache_cycsim0->mac_src_0_s1_26(mac_src_0_s1_26);
		    cache_cycsim0->mac_src_0_s1_27(mac_src_0_s1_27);
		    cache_cycsim0->mac_src_0_s1_28(mac_src_0_s1_28);
		    cache_cycsim0->mac_src_0_s1_29(mac_src_0_s1_29);
		    cache_cycsim0->mac_src_0_s1_30(mac_src_0_s1_30);
		    cache_cycsim0->mac_src_0_s1_31(mac_src_0_s1_31);
		    cache_cycsim0->mac_src_0_s2_0(mac_src_0_s2_0);
		    cache_cycsim0->mac_src_0_s2_1(mac_src_0_s2_1);
		    cache_cycsim0->mac_src_0_s2_2(mac_src_0_s2_2);
		    cache_cycsim0->mac_src_0_s2_3(mac_src_0_s2_3);
		    cache_cycsim0->mac_src_0_s2_4(mac_src_0_s2_4);
		    cache_cycsim0->mac_src_0_s2_5(mac_src_0_s2_5);
		    cache_cycsim0->mac_src_0_s2_6(mac_src_0_s2_6);
		    cache_cycsim0->mac_src_0_s2_7(mac_src_0_s2_7);
		    cache_cycsim0->mac_src_0_s2_8(mac_src_0_s2_8);
		    cache_cycsim0->mac_src_0_s2_9(mac_src_0_s2_9);
		    cache_cycsim0->mac_src_0_s2_10(mac_src_0_s2_10);
		    cache_cycsim0->mac_src_0_s2_11(mac_src_0_s2_11);
		    cache_cycsim0->mac_src_0_s2_12(mac_src_0_s2_12);
		    cache_cycsim0->mac_src_0_s2_13(mac_src_0_s2_13);
		    cache_cycsim0->mac_src_0_s2_14(mac_src_0_s2_14);
		    cache_cycsim0->mac_src_0_s2_15(mac_src_0_s2_15);
		    cache_cycsim0->mac_src_0_s2_16(mac_src_0_s2_16);
		    cache_cycsim0->mac_src_0_s2_17(mac_src_0_s2_17);
		    cache_cycsim0->mac_src_0_s2_18(mac_src_0_s2_18);
		    cache_cycsim0->mac_src_0_s2_19(mac_src_0_s2_19);
		    cache_cycsim0->mac_src_0_s2_20(mac_src_0_s2_20);
		    cache_cycsim0->mac_src_0_s2_21(mac_src_0_s2_21);
		    cache_cycsim0->mac_src_0_s2_22(mac_src_0_s2_22);
		    cache_cycsim0->mac_src_0_s2_23(mac_src_0_s2_23);
		    cache_cycsim0->mac_src_0_s2_24(mac_src_0_s2_24);
		    cache_cycsim0->mac_src_0_s2_25(mac_src_0_s2_25);
		    cache_cycsim0->mac_src_0_s2_26(mac_src_0_s2_26);
		    cache_cycsim0->mac_src_0_s2_27(mac_src_0_s2_27);
		    cache_cycsim0->mac_src_0_s2_28(mac_src_0_s2_28);
		    cache_cycsim0->mac_src_0_s2_29(mac_src_0_s2_29);
		    cache_cycsim0->mac_src_0_s2_30(mac_src_0_s2_30);
		    cache_cycsim0->mac_src_0_s2_31(mac_src_0_s2_31);
		    cache_cycsim0->mac_src_0_s3_0(mac_src_0_s3_0);
		    cache_cycsim0->mac_src_0_s3_1(mac_src_0_s3_1);
		    cache_cycsim0->mac_src_0_s3_2(mac_src_0_s3_2);
		    cache_cycsim0->mac_src_0_s3_3(mac_src_0_s3_3);
		    cache_cycsim0->mac_src_0_s3_4(mac_src_0_s3_4);
		    cache_cycsim0->mac_src_0_s3_5(mac_src_0_s3_5);
		    cache_cycsim0->mac_src_0_s3_6(mac_src_0_s3_6);
		    cache_cycsim0->mac_src_0_s3_7(mac_src_0_s3_7);
		    cache_cycsim0->mac_src_0_s3_8(mac_src_0_s3_8);
		    cache_cycsim0->mac_src_0_s3_9(mac_src_0_s3_9);
		    cache_cycsim0->mac_src_0_s3_10(mac_src_0_s3_10);
		    cache_cycsim0->mac_src_0_s3_11(mac_src_0_s3_11);
		    cache_cycsim0->mac_src_0_s3_12(mac_src_0_s3_12);
		    cache_cycsim0->mac_src_0_s3_13(mac_src_0_s3_13);
		    cache_cycsim0->mac_src_0_s3_14(mac_src_0_s3_14);
		    cache_cycsim0->mac_src_0_s3_15(mac_src_0_s3_15);
		    cache_cycsim0->mac_src_0_s3_16(mac_src_0_s3_16);
		    cache_cycsim0->mac_src_0_s3_17(mac_src_0_s3_17);
		    cache_cycsim0->mac_src_0_s3_18(mac_src_0_s3_18);
		    cache_cycsim0->mac_src_0_s3_19(mac_src_0_s3_19);
		    cache_cycsim0->mac_src_0_s3_20(mac_src_0_s3_20);
		    cache_cycsim0->mac_src_0_s3_21(mac_src_0_s3_21);
		    cache_cycsim0->mac_src_0_s3_22(mac_src_0_s3_22);
		    cache_cycsim0->mac_src_0_s3_23(mac_src_0_s3_23);
		    cache_cycsim0->mac_src_0_s3_24(mac_src_0_s3_24);
		    cache_cycsim0->mac_src_0_s3_25(mac_src_0_s3_25);
		    cache_cycsim0->mac_src_0_s3_26(mac_src_0_s3_26);
		    cache_cycsim0->mac_src_0_s3_27(mac_src_0_s3_27);
		    cache_cycsim0->mac_src_0_s3_28(mac_src_0_s3_28);
		    cache_cycsim0->mac_src_0_s3_29(mac_src_0_s3_29);
		    cache_cycsim0->mac_src_0_s3_30(mac_src_0_s3_30);
		    cache_cycsim0->mac_src_0_s3_31(mac_src_0_s3_31);
		    cache_cycsim0->mac_src_0_s4_0(mac_src_0_s4_0);
		    cache_cycsim0->mac_src_0_s4_1(mac_src_0_s4_1);
		    cache_cycsim0->mac_src_0_s4_2(mac_src_0_s4_2);
		    cache_cycsim0->mac_src_0_s4_3(mac_src_0_s4_3);
		    cache_cycsim0->mac_src_0_s4_4(mac_src_0_s4_4);
		    cache_cycsim0->mac_src_0_s4_5(mac_src_0_s4_5);
		    cache_cycsim0->mac_src_0_s4_6(mac_src_0_s4_6);
		    cache_cycsim0->mac_src_0_s4_7(mac_src_0_s4_7);
		    cache_cycsim0->mac_src_0_s4_8(mac_src_0_s4_8);
		    cache_cycsim0->mac_src_0_s4_9(mac_src_0_s4_9);
		    cache_cycsim0->mac_src_0_s4_10(mac_src_0_s4_10);
		    cache_cycsim0->mac_src_0_s4_11(mac_src_0_s4_11);
		    cache_cycsim0->mac_src_0_s4_12(mac_src_0_s4_12);
		    cache_cycsim0->mac_src_0_s4_13(mac_src_0_s4_13);
		    cache_cycsim0->mac_src_0_s4_14(mac_src_0_s4_14);
		    cache_cycsim0->mac_src_0_s4_15(mac_src_0_s4_15);
		    cache_cycsim0->mac_src_0_s4_16(mac_src_0_s4_16);
		    cache_cycsim0->mac_src_0_s4_17(mac_src_0_s4_17);
		    cache_cycsim0->mac_src_0_s4_18(mac_src_0_s4_18);
		    cache_cycsim0->mac_src_0_s4_19(mac_src_0_s4_19);
		    cache_cycsim0->mac_src_0_s4_20(mac_src_0_s4_20);
		    cache_cycsim0->mac_src_0_s4_21(mac_src_0_s4_21);
		    cache_cycsim0->mac_src_0_s4_22(mac_src_0_s4_22);
		    cache_cycsim0->mac_src_0_s4_23(mac_src_0_s4_23);
		    cache_cycsim0->mac_src_0_s4_24(mac_src_0_s4_24);
		    cache_cycsim0->mac_src_0_s4_25(mac_src_0_s4_25);
		    cache_cycsim0->mac_src_0_s4_26(mac_src_0_s4_26);
		    cache_cycsim0->mac_src_0_s4_27(mac_src_0_s4_27);
		    cache_cycsim0->mac_src_0_s4_28(mac_src_0_s4_28);
		    cache_cycsim0->mac_src_0_s4_29(mac_src_0_s4_29);
		    cache_cycsim0->mac_src_0_s4_30(mac_src_0_s4_30);
		    cache_cycsim0->mac_src_0_s4_31(mac_src_0_s4_31);
		    cache_cycsim0->mac_src_0_s5_0(mac_src_0_s5_0);
		    cache_cycsim0->mac_src_0_s5_1(mac_src_0_s5_1);
		    cache_cycsim0->mac_src_0_s5_2(mac_src_0_s5_2);
		    cache_cycsim0->mac_src_0_s5_3(mac_src_0_s5_3);
		    cache_cycsim0->mac_src_0_s5_4(mac_src_0_s5_4);
		    cache_cycsim0->mac_src_0_s5_5(mac_src_0_s5_5);
		    cache_cycsim0->mac_src_0_s5_6(mac_src_0_s5_6);
		    cache_cycsim0->mac_src_0_s5_7(mac_src_0_s5_7);
		    cache_cycsim0->mac_src_0_s5_8(mac_src_0_s5_8);
		    cache_cycsim0->mac_src_0_s5_9(mac_src_0_s5_9);
		    cache_cycsim0->mac_src_0_s5_10(mac_src_0_s5_10);
		    cache_cycsim0->mac_src_0_s5_11(mac_src_0_s5_11);
		    cache_cycsim0->mac_src_0_s5_12(mac_src_0_s5_12);
		    cache_cycsim0->mac_src_0_s5_13(mac_src_0_s5_13);
		    cache_cycsim0->mac_src_0_s5_14(mac_src_0_s5_14);
		    cache_cycsim0->mac_src_0_s5_15(mac_src_0_s5_15);
		    cache_cycsim0->mac_src_0_s5_16(mac_src_0_s5_16);
		    cache_cycsim0->mac_src_0_s5_17(mac_src_0_s5_17);
		    cache_cycsim0->mac_src_0_s5_18(mac_src_0_s5_18);
		    cache_cycsim0->mac_src_0_s5_19(mac_src_0_s5_19);
		    cache_cycsim0->mac_src_0_s5_20(mac_src_0_s5_20);
		    cache_cycsim0->mac_src_0_s5_21(mac_src_0_s5_21);
		    cache_cycsim0->mac_src_0_s5_22(mac_src_0_s5_22);
		    cache_cycsim0->mac_src_0_s5_23(mac_src_0_s5_23);
		    cache_cycsim0->mac_src_0_s5_24(mac_src_0_s5_24);
		    cache_cycsim0->mac_src_0_s5_25(mac_src_0_s5_25);
		    cache_cycsim0->mac_src_0_s5_26(mac_src_0_s5_26);
		    cache_cycsim0->mac_src_0_s5_27(mac_src_0_s5_27);
		    cache_cycsim0->mac_src_0_s5_28(mac_src_0_s5_28);
		    cache_cycsim0->mac_src_0_s5_29(mac_src_0_s5_29);
		    cache_cycsim0->mac_src_0_s5_30(mac_src_0_s5_30);
		    cache_cycsim0->mac_src_0_s5_31(mac_src_0_s5_31);
		    cache_cycsim0->mac_src_0_s6_0(mac_src_0_s6_0);
		    cache_cycsim0->mac_src_0_s6_1(mac_src_0_s6_1);
		    cache_cycsim0->mac_src_0_s6_2(mac_src_0_s6_2);
		    cache_cycsim0->mac_src_0_s6_3(mac_src_0_s6_3);
		    cache_cycsim0->mac_src_0_s6_4(mac_src_0_s6_4);
		    cache_cycsim0->mac_src_0_s6_5(mac_src_0_s6_5);
		    cache_cycsim0->mac_src_0_s6_6(mac_src_0_s6_6);
		    cache_cycsim0->mac_src_0_s6_7(mac_src_0_s6_7);
		    cache_cycsim0->mac_src_0_s6_8(mac_src_0_s6_8);
		    cache_cycsim0->mac_src_0_s6_9(mac_src_0_s6_9);
		    cache_cycsim0->mac_src_0_s6_10(mac_src_0_s6_10);
		    cache_cycsim0->mac_src_0_s6_11(mac_src_0_s6_11);
		    cache_cycsim0->mac_src_0_s6_12(mac_src_0_s6_12);
		    cache_cycsim0->mac_src_0_s6_13(mac_src_0_s6_13);
		    cache_cycsim0->mac_src_0_s6_14(mac_src_0_s6_14);
		    cache_cycsim0->mac_src_0_s6_15(mac_src_0_s6_15);
		    cache_cycsim0->mac_src_0_s6_16(mac_src_0_s6_16);
		    cache_cycsim0->mac_src_0_s6_17(mac_src_0_s6_17);
		    cache_cycsim0->mac_src_0_s6_18(mac_src_0_s6_18);
		    cache_cycsim0->mac_src_0_s6_19(mac_src_0_s6_19);
		    cache_cycsim0->mac_src_0_s6_20(mac_src_0_s6_20);
		    cache_cycsim0->mac_src_0_s6_21(mac_src_0_s6_21);
		    cache_cycsim0->mac_src_0_s6_22(mac_src_0_s6_22);
		    cache_cycsim0->mac_src_0_s6_23(mac_src_0_s6_23);
		    cache_cycsim0->mac_src_0_s6_24(mac_src_0_s6_24);
		    cache_cycsim0->mac_src_0_s6_25(mac_src_0_s6_25);
		    cache_cycsim0->mac_src_0_s6_26(mac_src_0_s6_26);
		    cache_cycsim0->mac_src_0_s6_27(mac_src_0_s6_27);
		    cache_cycsim0->mac_src_0_s6_28(mac_src_0_s6_28);
		    cache_cycsim0->mac_src_0_s6_29(mac_src_0_s6_29);
		    cache_cycsim0->mac_src_0_s6_30(mac_src_0_s6_30);
		    cache_cycsim0->mac_src_0_s6_31(mac_src_0_s6_31);
		    cache_cycsim0->mac_src_1_0(mac_src_1_0);
		    cache_cycsim0->mac_src_1_1(mac_src_1_1);
		    cache_cycsim0->mac_src_1_2(mac_src_1_2);
		    cache_cycsim0->mac_src_1_3(mac_src_1_3);
		    cache_cycsim0->mac_src_1_4(mac_src_1_4);
		    cache_cycsim0->mac_src_1_5(mac_src_1_5);
		    cache_cycsim0->mac_src_1_6(mac_src_1_6);
		    cache_cycsim0->mac_src_1_7(mac_src_1_7);
		    cache_cycsim0->mac_src_1_8(mac_src_1_8);
		    cache_cycsim0->mac_src_1_9(mac_src_1_9);
		    cache_cycsim0->mac_src_1_10(mac_src_1_10);
		    cache_cycsim0->mac_src_1_11(mac_src_1_11);
		    cache_cycsim0->mac_src_1_12(mac_src_1_12);
		    cache_cycsim0->mac_src_1_13(mac_src_1_13);
		    cache_cycsim0->mac_src_1_14(mac_src_1_14);
		    cache_cycsim0->mac_src_1_15(mac_src_1_15);
		    cache_cycsim0->mac_src_1_16(mac_src_1_16);
		    cache_cycsim0->mac_src_1_17(mac_src_1_17);
		    cache_cycsim0->mac_src_1_18(mac_src_1_18);
		    cache_cycsim0->mac_src_1_19(mac_src_1_19);
		    cache_cycsim0->mac_src_1_20(mac_src_1_20);
		    cache_cycsim0->mac_src_1_21(mac_src_1_21);
		    cache_cycsim0->mac_src_1_22(mac_src_1_22);
		    cache_cycsim0->mac_src_1_23(mac_src_1_23);
		    cache_cycsim0->mac_src_1_24(mac_src_1_24);
		    cache_cycsim0->mac_src_1_25(mac_src_1_25);
		    cache_cycsim0->mac_src_1_26(mac_src_1_26);
		    cache_cycsim0->mac_src_1_27(mac_src_1_27);
		    cache_cycsim0->mac_src_1_28(mac_src_1_28);
		    cache_cycsim0->mac_src_1_29(mac_src_1_29);
		    cache_cycsim0->mac_src_1_30(mac_src_1_30);
		    cache_cycsim0->mac_src_1_31(mac_src_1_31);
		    cache_cycsim0->mac_src_valid(mac_src_valid);
		    cache_cycsim0->mac_clear(mac_clear);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_cache)
		case BDWRep_RTL_C:
		    cache_rtl0 = new cache_rtl( "cache" );

		    cache_rtl0->clk(clk);
		    cache_rtl0->rstn(rstn);
		    cache_rtl0->cache_en(cache_en);
		    cache_rtl0->systolic_en(systolic_en);
		    cache_rtl0->systolic_depth(systolic_depth);
		    cache_rtl0->addr_if_start(addr_if_start);
		    cache_rtl0->systolic_sel(systolic_sel);
		    cache_rtl0->feature_data(feature_data);
		    cache_rtl0->feature_share_en(feature_share_en);
		    cache_rtl0->feature_data_en(feature_data_en);
		    cache_rtl0->feature_data_sel(feature_data_sel);
		    cache_rtl0->weight_data(weight_data);
		    cache_rtl0->weight_data_en(weight_data_en);
		    cache_rtl0->mac_src_0_s0_0(mac_src_0_s0_0);
		    cache_rtl0->mac_src_0_s0_1(mac_src_0_s0_1);
		    cache_rtl0->mac_src_0_s0_2(mac_src_0_s0_2);
		    cache_rtl0->mac_src_0_s0_3(mac_src_0_s0_3);
		    cache_rtl0->mac_src_0_s0_4(mac_src_0_s0_4);
		    cache_rtl0->mac_src_0_s0_5(mac_src_0_s0_5);
		    cache_rtl0->mac_src_0_s0_6(mac_src_0_s0_6);
		    cache_rtl0->mac_src_0_s0_7(mac_src_0_s0_7);
		    cache_rtl0->mac_src_0_s0_8(mac_src_0_s0_8);
		    cache_rtl0->mac_src_0_s0_9(mac_src_0_s0_9);
		    cache_rtl0->mac_src_0_s0_10(mac_src_0_s0_10);
		    cache_rtl0->mac_src_0_s0_11(mac_src_0_s0_11);
		    cache_rtl0->mac_src_0_s0_12(mac_src_0_s0_12);
		    cache_rtl0->mac_src_0_s0_13(mac_src_0_s0_13);
		    cache_rtl0->mac_src_0_s0_14(mac_src_0_s0_14);
		    cache_rtl0->mac_src_0_s0_15(mac_src_0_s0_15);
		    cache_rtl0->mac_src_0_s0_16(mac_src_0_s0_16);
		    cache_rtl0->mac_src_0_s0_17(mac_src_0_s0_17);
		    cache_rtl0->mac_src_0_s0_18(mac_src_0_s0_18);
		    cache_rtl0->mac_src_0_s0_19(mac_src_0_s0_19);
		    cache_rtl0->mac_src_0_s0_20(mac_src_0_s0_20);
		    cache_rtl0->mac_src_0_s0_21(mac_src_0_s0_21);
		    cache_rtl0->mac_src_0_s0_22(mac_src_0_s0_22);
		    cache_rtl0->mac_src_0_s0_23(mac_src_0_s0_23);
		    cache_rtl0->mac_src_0_s0_24(mac_src_0_s0_24);
		    cache_rtl0->mac_src_0_s0_25(mac_src_0_s0_25);
		    cache_rtl0->mac_src_0_s0_26(mac_src_0_s0_26);
		    cache_rtl0->mac_src_0_s0_27(mac_src_0_s0_27);
		    cache_rtl0->mac_src_0_s0_28(mac_src_0_s0_28);
		    cache_rtl0->mac_src_0_s0_29(mac_src_0_s0_29);
		    cache_rtl0->mac_src_0_s0_30(mac_src_0_s0_30);
		    cache_rtl0->mac_src_0_s0_31(mac_src_0_s0_31);
		    cache_rtl0->mac_src_0_s1_0(mac_src_0_s1_0);
		    cache_rtl0->mac_src_0_s1_1(mac_src_0_s1_1);
		    cache_rtl0->mac_src_0_s1_2(mac_src_0_s1_2);
		    cache_rtl0->mac_src_0_s1_3(mac_src_0_s1_3);
		    cache_rtl0->mac_src_0_s1_4(mac_src_0_s1_4);
		    cache_rtl0->mac_src_0_s1_5(mac_src_0_s1_5);
		    cache_rtl0->mac_src_0_s1_6(mac_src_0_s1_6);
		    cache_rtl0->mac_src_0_s1_7(mac_src_0_s1_7);
		    cache_rtl0->mac_src_0_s1_8(mac_src_0_s1_8);
		    cache_rtl0->mac_src_0_s1_9(mac_src_0_s1_9);
		    cache_rtl0->mac_src_0_s1_10(mac_src_0_s1_10);
		    cache_rtl0->mac_src_0_s1_11(mac_src_0_s1_11);
		    cache_rtl0->mac_src_0_s1_12(mac_src_0_s1_12);
		    cache_rtl0->mac_src_0_s1_13(mac_src_0_s1_13);
		    cache_rtl0->mac_src_0_s1_14(mac_src_0_s1_14);
		    cache_rtl0->mac_src_0_s1_15(mac_src_0_s1_15);
		    cache_rtl0->mac_src_0_s1_16(mac_src_0_s1_16);
		    cache_rtl0->mac_src_0_s1_17(mac_src_0_s1_17);
		    cache_rtl0->mac_src_0_s1_18(mac_src_0_s1_18);
		    cache_rtl0->mac_src_0_s1_19(mac_src_0_s1_19);
		    cache_rtl0->mac_src_0_s1_20(mac_src_0_s1_20);
		    cache_rtl0->mac_src_0_s1_21(mac_src_0_s1_21);
		    cache_rtl0->mac_src_0_s1_22(mac_src_0_s1_22);
		    cache_rtl0->mac_src_0_s1_23(mac_src_0_s1_23);
		    cache_rtl0->mac_src_0_s1_24(mac_src_0_s1_24);
		    cache_rtl0->mac_src_0_s1_25(mac_src_0_s1_25);
		    cache_rtl0->mac_src_0_s1_26(mac_src_0_s1_26);
		    cache_rtl0->mac_src_0_s1_27(mac_src_0_s1_27);
		    cache_rtl0->mac_src_0_s1_28(mac_src_0_s1_28);
		    cache_rtl0->mac_src_0_s1_29(mac_src_0_s1_29);
		    cache_rtl0->mac_src_0_s1_30(mac_src_0_s1_30);
		    cache_rtl0->mac_src_0_s1_31(mac_src_0_s1_31);
		    cache_rtl0->mac_src_0_s2_0(mac_src_0_s2_0);
		    cache_rtl0->mac_src_0_s2_1(mac_src_0_s2_1);
		    cache_rtl0->mac_src_0_s2_2(mac_src_0_s2_2);
		    cache_rtl0->mac_src_0_s2_3(mac_src_0_s2_3);
		    cache_rtl0->mac_src_0_s2_4(mac_src_0_s2_4);
		    cache_rtl0->mac_src_0_s2_5(mac_src_0_s2_5);
		    cache_rtl0->mac_src_0_s2_6(mac_src_0_s2_6);
		    cache_rtl0->mac_src_0_s2_7(mac_src_0_s2_7);
		    cache_rtl0->mac_src_0_s2_8(mac_src_0_s2_8);
		    cache_rtl0->mac_src_0_s2_9(mac_src_0_s2_9);
		    cache_rtl0->mac_src_0_s2_10(mac_src_0_s2_10);
		    cache_rtl0->mac_src_0_s2_11(mac_src_0_s2_11);
		    cache_rtl0->mac_src_0_s2_12(mac_src_0_s2_12);
		    cache_rtl0->mac_src_0_s2_13(mac_src_0_s2_13);
		    cache_rtl0->mac_src_0_s2_14(mac_src_0_s2_14);
		    cache_rtl0->mac_src_0_s2_15(mac_src_0_s2_15);
		    cache_rtl0->mac_src_0_s2_16(mac_src_0_s2_16);
		    cache_rtl0->mac_src_0_s2_17(mac_src_0_s2_17);
		    cache_rtl0->mac_src_0_s2_18(mac_src_0_s2_18);
		    cache_rtl0->mac_src_0_s2_19(mac_src_0_s2_19);
		    cache_rtl0->mac_src_0_s2_20(mac_src_0_s2_20);
		    cache_rtl0->mac_src_0_s2_21(mac_src_0_s2_21);
		    cache_rtl0->mac_src_0_s2_22(mac_src_0_s2_22);
		    cache_rtl0->mac_src_0_s2_23(mac_src_0_s2_23);
		    cache_rtl0->mac_src_0_s2_24(mac_src_0_s2_24);
		    cache_rtl0->mac_src_0_s2_25(mac_src_0_s2_25);
		    cache_rtl0->mac_src_0_s2_26(mac_src_0_s2_26);
		    cache_rtl0->mac_src_0_s2_27(mac_src_0_s2_27);
		    cache_rtl0->mac_src_0_s2_28(mac_src_0_s2_28);
		    cache_rtl0->mac_src_0_s2_29(mac_src_0_s2_29);
		    cache_rtl0->mac_src_0_s2_30(mac_src_0_s2_30);
		    cache_rtl0->mac_src_0_s2_31(mac_src_0_s2_31);
		    cache_rtl0->mac_src_0_s3_0(mac_src_0_s3_0);
		    cache_rtl0->mac_src_0_s3_1(mac_src_0_s3_1);
		    cache_rtl0->mac_src_0_s3_2(mac_src_0_s3_2);
		    cache_rtl0->mac_src_0_s3_3(mac_src_0_s3_3);
		    cache_rtl0->mac_src_0_s3_4(mac_src_0_s3_4);
		    cache_rtl0->mac_src_0_s3_5(mac_src_0_s3_5);
		    cache_rtl0->mac_src_0_s3_6(mac_src_0_s3_6);
		    cache_rtl0->mac_src_0_s3_7(mac_src_0_s3_7);
		    cache_rtl0->mac_src_0_s3_8(mac_src_0_s3_8);
		    cache_rtl0->mac_src_0_s3_9(mac_src_0_s3_9);
		    cache_rtl0->mac_src_0_s3_10(mac_src_0_s3_10);
		    cache_rtl0->mac_src_0_s3_11(mac_src_0_s3_11);
		    cache_rtl0->mac_src_0_s3_12(mac_src_0_s3_12);
		    cache_rtl0->mac_src_0_s3_13(mac_src_0_s3_13);
		    cache_rtl0->mac_src_0_s3_14(mac_src_0_s3_14);
		    cache_rtl0->mac_src_0_s3_15(mac_src_0_s3_15);
		    cache_rtl0->mac_src_0_s3_16(mac_src_0_s3_16);
		    cache_rtl0->mac_src_0_s3_17(mac_src_0_s3_17);
		    cache_rtl0->mac_src_0_s3_18(mac_src_0_s3_18);
		    cache_rtl0->mac_src_0_s3_19(mac_src_0_s3_19);
		    cache_rtl0->mac_src_0_s3_20(mac_src_0_s3_20);
		    cache_rtl0->mac_src_0_s3_21(mac_src_0_s3_21);
		    cache_rtl0->mac_src_0_s3_22(mac_src_0_s3_22);
		    cache_rtl0->mac_src_0_s3_23(mac_src_0_s3_23);
		    cache_rtl0->mac_src_0_s3_24(mac_src_0_s3_24);
		    cache_rtl0->mac_src_0_s3_25(mac_src_0_s3_25);
		    cache_rtl0->mac_src_0_s3_26(mac_src_0_s3_26);
		    cache_rtl0->mac_src_0_s3_27(mac_src_0_s3_27);
		    cache_rtl0->mac_src_0_s3_28(mac_src_0_s3_28);
		    cache_rtl0->mac_src_0_s3_29(mac_src_0_s3_29);
		    cache_rtl0->mac_src_0_s3_30(mac_src_0_s3_30);
		    cache_rtl0->mac_src_0_s3_31(mac_src_0_s3_31);
		    cache_rtl0->mac_src_0_s4_0(mac_src_0_s4_0);
		    cache_rtl0->mac_src_0_s4_1(mac_src_0_s4_1);
		    cache_rtl0->mac_src_0_s4_2(mac_src_0_s4_2);
		    cache_rtl0->mac_src_0_s4_3(mac_src_0_s4_3);
		    cache_rtl0->mac_src_0_s4_4(mac_src_0_s4_4);
		    cache_rtl0->mac_src_0_s4_5(mac_src_0_s4_5);
		    cache_rtl0->mac_src_0_s4_6(mac_src_0_s4_6);
		    cache_rtl0->mac_src_0_s4_7(mac_src_0_s4_7);
		    cache_rtl0->mac_src_0_s4_8(mac_src_0_s4_8);
		    cache_rtl0->mac_src_0_s4_9(mac_src_0_s4_9);
		    cache_rtl0->mac_src_0_s4_10(mac_src_0_s4_10);
		    cache_rtl0->mac_src_0_s4_11(mac_src_0_s4_11);
		    cache_rtl0->mac_src_0_s4_12(mac_src_0_s4_12);
		    cache_rtl0->mac_src_0_s4_13(mac_src_0_s4_13);
		    cache_rtl0->mac_src_0_s4_14(mac_src_0_s4_14);
		    cache_rtl0->mac_src_0_s4_15(mac_src_0_s4_15);
		    cache_rtl0->mac_src_0_s4_16(mac_src_0_s4_16);
		    cache_rtl0->mac_src_0_s4_17(mac_src_0_s4_17);
		    cache_rtl0->mac_src_0_s4_18(mac_src_0_s4_18);
		    cache_rtl0->mac_src_0_s4_19(mac_src_0_s4_19);
		    cache_rtl0->mac_src_0_s4_20(mac_src_0_s4_20);
		    cache_rtl0->mac_src_0_s4_21(mac_src_0_s4_21);
		    cache_rtl0->mac_src_0_s4_22(mac_src_0_s4_22);
		    cache_rtl0->mac_src_0_s4_23(mac_src_0_s4_23);
		    cache_rtl0->mac_src_0_s4_24(mac_src_0_s4_24);
		    cache_rtl0->mac_src_0_s4_25(mac_src_0_s4_25);
		    cache_rtl0->mac_src_0_s4_26(mac_src_0_s4_26);
		    cache_rtl0->mac_src_0_s4_27(mac_src_0_s4_27);
		    cache_rtl0->mac_src_0_s4_28(mac_src_0_s4_28);
		    cache_rtl0->mac_src_0_s4_29(mac_src_0_s4_29);
		    cache_rtl0->mac_src_0_s4_30(mac_src_0_s4_30);
		    cache_rtl0->mac_src_0_s4_31(mac_src_0_s4_31);
		    cache_rtl0->mac_src_0_s5_0(mac_src_0_s5_0);
		    cache_rtl0->mac_src_0_s5_1(mac_src_0_s5_1);
		    cache_rtl0->mac_src_0_s5_2(mac_src_0_s5_2);
		    cache_rtl0->mac_src_0_s5_3(mac_src_0_s5_3);
		    cache_rtl0->mac_src_0_s5_4(mac_src_0_s5_4);
		    cache_rtl0->mac_src_0_s5_5(mac_src_0_s5_5);
		    cache_rtl0->mac_src_0_s5_6(mac_src_0_s5_6);
		    cache_rtl0->mac_src_0_s5_7(mac_src_0_s5_7);
		    cache_rtl0->mac_src_0_s5_8(mac_src_0_s5_8);
		    cache_rtl0->mac_src_0_s5_9(mac_src_0_s5_9);
		    cache_rtl0->mac_src_0_s5_10(mac_src_0_s5_10);
		    cache_rtl0->mac_src_0_s5_11(mac_src_0_s5_11);
		    cache_rtl0->mac_src_0_s5_12(mac_src_0_s5_12);
		    cache_rtl0->mac_src_0_s5_13(mac_src_0_s5_13);
		    cache_rtl0->mac_src_0_s5_14(mac_src_0_s5_14);
		    cache_rtl0->mac_src_0_s5_15(mac_src_0_s5_15);
		    cache_rtl0->mac_src_0_s5_16(mac_src_0_s5_16);
		    cache_rtl0->mac_src_0_s5_17(mac_src_0_s5_17);
		    cache_rtl0->mac_src_0_s5_18(mac_src_0_s5_18);
		    cache_rtl0->mac_src_0_s5_19(mac_src_0_s5_19);
		    cache_rtl0->mac_src_0_s5_20(mac_src_0_s5_20);
		    cache_rtl0->mac_src_0_s5_21(mac_src_0_s5_21);
		    cache_rtl0->mac_src_0_s5_22(mac_src_0_s5_22);
		    cache_rtl0->mac_src_0_s5_23(mac_src_0_s5_23);
		    cache_rtl0->mac_src_0_s5_24(mac_src_0_s5_24);
		    cache_rtl0->mac_src_0_s5_25(mac_src_0_s5_25);
		    cache_rtl0->mac_src_0_s5_26(mac_src_0_s5_26);
		    cache_rtl0->mac_src_0_s5_27(mac_src_0_s5_27);
		    cache_rtl0->mac_src_0_s5_28(mac_src_0_s5_28);
		    cache_rtl0->mac_src_0_s5_29(mac_src_0_s5_29);
		    cache_rtl0->mac_src_0_s5_30(mac_src_0_s5_30);
		    cache_rtl0->mac_src_0_s5_31(mac_src_0_s5_31);
		    cache_rtl0->mac_src_0_s6_0(mac_src_0_s6_0);
		    cache_rtl0->mac_src_0_s6_1(mac_src_0_s6_1);
		    cache_rtl0->mac_src_0_s6_2(mac_src_0_s6_2);
		    cache_rtl0->mac_src_0_s6_3(mac_src_0_s6_3);
		    cache_rtl0->mac_src_0_s6_4(mac_src_0_s6_4);
		    cache_rtl0->mac_src_0_s6_5(mac_src_0_s6_5);
		    cache_rtl0->mac_src_0_s6_6(mac_src_0_s6_6);
		    cache_rtl0->mac_src_0_s6_7(mac_src_0_s6_7);
		    cache_rtl0->mac_src_0_s6_8(mac_src_0_s6_8);
		    cache_rtl0->mac_src_0_s6_9(mac_src_0_s6_9);
		    cache_rtl0->mac_src_0_s6_10(mac_src_0_s6_10);
		    cache_rtl0->mac_src_0_s6_11(mac_src_0_s6_11);
		    cache_rtl0->mac_src_0_s6_12(mac_src_0_s6_12);
		    cache_rtl0->mac_src_0_s6_13(mac_src_0_s6_13);
		    cache_rtl0->mac_src_0_s6_14(mac_src_0_s6_14);
		    cache_rtl0->mac_src_0_s6_15(mac_src_0_s6_15);
		    cache_rtl0->mac_src_0_s6_16(mac_src_0_s6_16);
		    cache_rtl0->mac_src_0_s6_17(mac_src_0_s6_17);
		    cache_rtl0->mac_src_0_s6_18(mac_src_0_s6_18);
		    cache_rtl0->mac_src_0_s6_19(mac_src_0_s6_19);
		    cache_rtl0->mac_src_0_s6_20(mac_src_0_s6_20);
		    cache_rtl0->mac_src_0_s6_21(mac_src_0_s6_21);
		    cache_rtl0->mac_src_0_s6_22(mac_src_0_s6_22);
		    cache_rtl0->mac_src_0_s6_23(mac_src_0_s6_23);
		    cache_rtl0->mac_src_0_s6_24(mac_src_0_s6_24);
		    cache_rtl0->mac_src_0_s6_25(mac_src_0_s6_25);
		    cache_rtl0->mac_src_0_s6_26(mac_src_0_s6_26);
		    cache_rtl0->mac_src_0_s6_27(mac_src_0_s6_27);
		    cache_rtl0->mac_src_0_s6_28(mac_src_0_s6_28);
		    cache_rtl0->mac_src_0_s6_29(mac_src_0_s6_29);
		    cache_rtl0->mac_src_0_s6_30(mac_src_0_s6_30);
		    cache_rtl0->mac_src_0_s6_31(mac_src_0_s6_31);
		    cache_rtl0->mac_src_1_0(mac_src_1_0);
		    cache_rtl0->mac_src_1_1(mac_src_1_1);
		    cache_rtl0->mac_src_1_2(mac_src_1_2);
		    cache_rtl0->mac_src_1_3(mac_src_1_3);
		    cache_rtl0->mac_src_1_4(mac_src_1_4);
		    cache_rtl0->mac_src_1_5(mac_src_1_5);
		    cache_rtl0->mac_src_1_6(mac_src_1_6);
		    cache_rtl0->mac_src_1_7(mac_src_1_7);
		    cache_rtl0->mac_src_1_8(mac_src_1_8);
		    cache_rtl0->mac_src_1_9(mac_src_1_9);
		    cache_rtl0->mac_src_1_10(mac_src_1_10);
		    cache_rtl0->mac_src_1_11(mac_src_1_11);
		    cache_rtl0->mac_src_1_12(mac_src_1_12);
		    cache_rtl0->mac_src_1_13(mac_src_1_13);
		    cache_rtl0->mac_src_1_14(mac_src_1_14);
		    cache_rtl0->mac_src_1_15(mac_src_1_15);
		    cache_rtl0->mac_src_1_16(mac_src_1_16);
		    cache_rtl0->mac_src_1_17(mac_src_1_17);
		    cache_rtl0->mac_src_1_18(mac_src_1_18);
		    cache_rtl0->mac_src_1_19(mac_src_1_19);
		    cache_rtl0->mac_src_1_20(mac_src_1_20);
		    cache_rtl0->mac_src_1_21(mac_src_1_21);
		    cache_rtl0->mac_src_1_22(mac_src_1_22);
		    cache_rtl0->mac_src_1_23(mac_src_1_23);
		    cache_rtl0->mac_src_1_24(mac_src_1_24);
		    cache_rtl0->mac_src_1_25(mac_src_1_25);
		    cache_rtl0->mac_src_1_26(mac_src_1_26);
		    cache_rtl0->mac_src_1_27(mac_src_1_27);
		    cache_rtl0->mac_src_1_28(mac_src_1_28);
		    cache_rtl0->mac_src_1_29(mac_src_1_29);
		    cache_rtl0->mac_src_1_30(mac_src_1_30);
		    cache_rtl0->mac_src_1_31(mac_src_1_31);
		    cache_rtl0->mac_src_valid(mac_src_valid);
		    cache_rtl0->mac_clear(mac_clear);


			{
			const char *simConfig = cache_wrapper::simConfigName();
			
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
		    cache0 = new cache( "cache" );

		    cache0->clk(clk);
		    cache0->rstn(rstn);
		    cache0->cache_en(cache_en);
		    cache0->systolic_en(systolic_en);
		    cache0->systolic_depth(systolic_depth);
		    cache0->addr_if_start(addr_if_start);
		    cache0->systolic_sel(systolic_sel);
		    cache0->feature_data(feature_data);
		    cache0->feature_share_en(feature_share_en);
		    cache0->feature_data_en(feature_data_en);
		    cache0->feature_data_sel(feature_data_sel);
		    cache0->weight_data(weight_data);
		    cache0->weight_data_en(weight_data_en);
		    cache0->mac_src_0_s0[0](mac_src_0_s0[0]);
		    cache0->mac_src_0_s0[1](mac_src_0_s0[1]);
		    cache0->mac_src_0_s0[2](mac_src_0_s0[2]);
		    cache0->mac_src_0_s0[3](mac_src_0_s0[3]);
		    cache0->mac_src_0_s0[4](mac_src_0_s0[4]);
		    cache0->mac_src_0_s0[5](mac_src_0_s0[5]);
		    cache0->mac_src_0_s0[6](mac_src_0_s0[6]);
		    cache0->mac_src_0_s0[7](mac_src_0_s0[7]);
		    cache0->mac_src_0_s0[8](mac_src_0_s0[8]);
		    cache0->mac_src_0_s0[9](mac_src_0_s0[9]);
		    cache0->mac_src_0_s0[10](mac_src_0_s0[10]);
		    cache0->mac_src_0_s0[11](mac_src_0_s0[11]);
		    cache0->mac_src_0_s0[12](mac_src_0_s0[12]);
		    cache0->mac_src_0_s0[13](mac_src_0_s0[13]);
		    cache0->mac_src_0_s0[14](mac_src_0_s0[14]);
		    cache0->mac_src_0_s0[15](mac_src_0_s0[15]);
		    cache0->mac_src_0_s0[16](mac_src_0_s0[16]);
		    cache0->mac_src_0_s0[17](mac_src_0_s0[17]);
		    cache0->mac_src_0_s0[18](mac_src_0_s0[18]);
		    cache0->mac_src_0_s0[19](mac_src_0_s0[19]);
		    cache0->mac_src_0_s0[20](mac_src_0_s0[20]);
		    cache0->mac_src_0_s0[21](mac_src_0_s0[21]);
		    cache0->mac_src_0_s0[22](mac_src_0_s0[22]);
		    cache0->mac_src_0_s0[23](mac_src_0_s0[23]);
		    cache0->mac_src_0_s0[24](mac_src_0_s0[24]);
		    cache0->mac_src_0_s0[25](mac_src_0_s0[25]);
		    cache0->mac_src_0_s0[26](mac_src_0_s0[26]);
		    cache0->mac_src_0_s0[27](mac_src_0_s0[27]);
		    cache0->mac_src_0_s0[28](mac_src_0_s0[28]);
		    cache0->mac_src_0_s0[29](mac_src_0_s0[29]);
		    cache0->mac_src_0_s0[30](mac_src_0_s0[30]);
		    cache0->mac_src_0_s0[31](mac_src_0_s0[31]);
		    cache0->mac_src_0_s1[0](mac_src_0_s1[0]);
		    cache0->mac_src_0_s1[1](mac_src_0_s1[1]);
		    cache0->mac_src_0_s1[2](mac_src_0_s1[2]);
		    cache0->mac_src_0_s1[3](mac_src_0_s1[3]);
		    cache0->mac_src_0_s1[4](mac_src_0_s1[4]);
		    cache0->mac_src_0_s1[5](mac_src_0_s1[5]);
		    cache0->mac_src_0_s1[6](mac_src_0_s1[6]);
		    cache0->mac_src_0_s1[7](mac_src_0_s1[7]);
		    cache0->mac_src_0_s1[8](mac_src_0_s1[8]);
		    cache0->mac_src_0_s1[9](mac_src_0_s1[9]);
		    cache0->mac_src_0_s1[10](mac_src_0_s1[10]);
		    cache0->mac_src_0_s1[11](mac_src_0_s1[11]);
		    cache0->mac_src_0_s1[12](mac_src_0_s1[12]);
		    cache0->mac_src_0_s1[13](mac_src_0_s1[13]);
		    cache0->mac_src_0_s1[14](mac_src_0_s1[14]);
		    cache0->mac_src_0_s1[15](mac_src_0_s1[15]);
		    cache0->mac_src_0_s1[16](mac_src_0_s1[16]);
		    cache0->mac_src_0_s1[17](mac_src_0_s1[17]);
		    cache0->mac_src_0_s1[18](mac_src_0_s1[18]);
		    cache0->mac_src_0_s1[19](mac_src_0_s1[19]);
		    cache0->mac_src_0_s1[20](mac_src_0_s1[20]);
		    cache0->mac_src_0_s1[21](mac_src_0_s1[21]);
		    cache0->mac_src_0_s1[22](mac_src_0_s1[22]);
		    cache0->mac_src_0_s1[23](mac_src_0_s1[23]);
		    cache0->mac_src_0_s1[24](mac_src_0_s1[24]);
		    cache0->mac_src_0_s1[25](mac_src_0_s1[25]);
		    cache0->mac_src_0_s1[26](mac_src_0_s1[26]);
		    cache0->mac_src_0_s1[27](mac_src_0_s1[27]);
		    cache0->mac_src_0_s1[28](mac_src_0_s1[28]);
		    cache0->mac_src_0_s1[29](mac_src_0_s1[29]);
		    cache0->mac_src_0_s1[30](mac_src_0_s1[30]);
		    cache0->mac_src_0_s1[31](mac_src_0_s1[31]);
		    cache0->mac_src_0_s2[0](mac_src_0_s2[0]);
		    cache0->mac_src_0_s2[1](mac_src_0_s2[1]);
		    cache0->mac_src_0_s2[2](mac_src_0_s2[2]);
		    cache0->mac_src_0_s2[3](mac_src_0_s2[3]);
		    cache0->mac_src_0_s2[4](mac_src_0_s2[4]);
		    cache0->mac_src_0_s2[5](mac_src_0_s2[5]);
		    cache0->mac_src_0_s2[6](mac_src_0_s2[6]);
		    cache0->mac_src_0_s2[7](mac_src_0_s2[7]);
		    cache0->mac_src_0_s2[8](mac_src_0_s2[8]);
		    cache0->mac_src_0_s2[9](mac_src_0_s2[9]);
		    cache0->mac_src_0_s2[10](mac_src_0_s2[10]);
		    cache0->mac_src_0_s2[11](mac_src_0_s2[11]);
		    cache0->mac_src_0_s2[12](mac_src_0_s2[12]);
		    cache0->mac_src_0_s2[13](mac_src_0_s2[13]);
		    cache0->mac_src_0_s2[14](mac_src_0_s2[14]);
		    cache0->mac_src_0_s2[15](mac_src_0_s2[15]);
		    cache0->mac_src_0_s2[16](mac_src_0_s2[16]);
		    cache0->mac_src_0_s2[17](mac_src_0_s2[17]);
		    cache0->mac_src_0_s2[18](mac_src_0_s2[18]);
		    cache0->mac_src_0_s2[19](mac_src_0_s2[19]);
		    cache0->mac_src_0_s2[20](mac_src_0_s2[20]);
		    cache0->mac_src_0_s2[21](mac_src_0_s2[21]);
		    cache0->mac_src_0_s2[22](mac_src_0_s2[22]);
		    cache0->mac_src_0_s2[23](mac_src_0_s2[23]);
		    cache0->mac_src_0_s2[24](mac_src_0_s2[24]);
		    cache0->mac_src_0_s2[25](mac_src_0_s2[25]);
		    cache0->mac_src_0_s2[26](mac_src_0_s2[26]);
		    cache0->mac_src_0_s2[27](mac_src_0_s2[27]);
		    cache0->mac_src_0_s2[28](mac_src_0_s2[28]);
		    cache0->mac_src_0_s2[29](mac_src_0_s2[29]);
		    cache0->mac_src_0_s2[30](mac_src_0_s2[30]);
		    cache0->mac_src_0_s2[31](mac_src_0_s2[31]);
		    cache0->mac_src_0_s3[0](mac_src_0_s3[0]);
		    cache0->mac_src_0_s3[1](mac_src_0_s3[1]);
		    cache0->mac_src_0_s3[2](mac_src_0_s3[2]);
		    cache0->mac_src_0_s3[3](mac_src_0_s3[3]);
		    cache0->mac_src_0_s3[4](mac_src_0_s3[4]);
		    cache0->mac_src_0_s3[5](mac_src_0_s3[5]);
		    cache0->mac_src_0_s3[6](mac_src_0_s3[6]);
		    cache0->mac_src_0_s3[7](mac_src_0_s3[7]);
		    cache0->mac_src_0_s3[8](mac_src_0_s3[8]);
		    cache0->mac_src_0_s3[9](mac_src_0_s3[9]);
		    cache0->mac_src_0_s3[10](mac_src_0_s3[10]);
		    cache0->mac_src_0_s3[11](mac_src_0_s3[11]);
		    cache0->mac_src_0_s3[12](mac_src_0_s3[12]);
		    cache0->mac_src_0_s3[13](mac_src_0_s3[13]);
		    cache0->mac_src_0_s3[14](mac_src_0_s3[14]);
		    cache0->mac_src_0_s3[15](mac_src_0_s3[15]);
		    cache0->mac_src_0_s3[16](mac_src_0_s3[16]);
		    cache0->mac_src_0_s3[17](mac_src_0_s3[17]);
		    cache0->mac_src_0_s3[18](mac_src_0_s3[18]);
		    cache0->mac_src_0_s3[19](mac_src_0_s3[19]);
		    cache0->mac_src_0_s3[20](mac_src_0_s3[20]);
		    cache0->mac_src_0_s3[21](mac_src_0_s3[21]);
		    cache0->mac_src_0_s3[22](mac_src_0_s3[22]);
		    cache0->mac_src_0_s3[23](mac_src_0_s3[23]);
		    cache0->mac_src_0_s3[24](mac_src_0_s3[24]);
		    cache0->mac_src_0_s3[25](mac_src_0_s3[25]);
		    cache0->mac_src_0_s3[26](mac_src_0_s3[26]);
		    cache0->mac_src_0_s3[27](mac_src_0_s3[27]);
		    cache0->mac_src_0_s3[28](mac_src_0_s3[28]);
		    cache0->mac_src_0_s3[29](mac_src_0_s3[29]);
		    cache0->mac_src_0_s3[30](mac_src_0_s3[30]);
		    cache0->mac_src_0_s3[31](mac_src_0_s3[31]);
		    cache0->mac_src_0_s4[0](mac_src_0_s4[0]);
		    cache0->mac_src_0_s4[1](mac_src_0_s4[1]);
		    cache0->mac_src_0_s4[2](mac_src_0_s4[2]);
		    cache0->mac_src_0_s4[3](mac_src_0_s4[3]);
		    cache0->mac_src_0_s4[4](mac_src_0_s4[4]);
		    cache0->mac_src_0_s4[5](mac_src_0_s4[5]);
		    cache0->mac_src_0_s4[6](mac_src_0_s4[6]);
		    cache0->mac_src_0_s4[7](mac_src_0_s4[7]);
		    cache0->mac_src_0_s4[8](mac_src_0_s4[8]);
		    cache0->mac_src_0_s4[9](mac_src_0_s4[9]);
		    cache0->mac_src_0_s4[10](mac_src_0_s4[10]);
		    cache0->mac_src_0_s4[11](mac_src_0_s4[11]);
		    cache0->mac_src_0_s4[12](mac_src_0_s4[12]);
		    cache0->mac_src_0_s4[13](mac_src_0_s4[13]);
		    cache0->mac_src_0_s4[14](mac_src_0_s4[14]);
		    cache0->mac_src_0_s4[15](mac_src_0_s4[15]);
		    cache0->mac_src_0_s4[16](mac_src_0_s4[16]);
		    cache0->mac_src_0_s4[17](mac_src_0_s4[17]);
		    cache0->mac_src_0_s4[18](mac_src_0_s4[18]);
		    cache0->mac_src_0_s4[19](mac_src_0_s4[19]);
		    cache0->mac_src_0_s4[20](mac_src_0_s4[20]);
		    cache0->mac_src_0_s4[21](mac_src_0_s4[21]);
		    cache0->mac_src_0_s4[22](mac_src_0_s4[22]);
		    cache0->mac_src_0_s4[23](mac_src_0_s4[23]);
		    cache0->mac_src_0_s4[24](mac_src_0_s4[24]);
		    cache0->mac_src_0_s4[25](mac_src_0_s4[25]);
		    cache0->mac_src_0_s4[26](mac_src_0_s4[26]);
		    cache0->mac_src_0_s4[27](mac_src_0_s4[27]);
		    cache0->mac_src_0_s4[28](mac_src_0_s4[28]);
		    cache0->mac_src_0_s4[29](mac_src_0_s4[29]);
		    cache0->mac_src_0_s4[30](mac_src_0_s4[30]);
		    cache0->mac_src_0_s4[31](mac_src_0_s4[31]);
		    cache0->mac_src_0_s5[0](mac_src_0_s5[0]);
		    cache0->mac_src_0_s5[1](mac_src_0_s5[1]);
		    cache0->mac_src_0_s5[2](mac_src_0_s5[2]);
		    cache0->mac_src_0_s5[3](mac_src_0_s5[3]);
		    cache0->mac_src_0_s5[4](mac_src_0_s5[4]);
		    cache0->mac_src_0_s5[5](mac_src_0_s5[5]);
		    cache0->mac_src_0_s5[6](mac_src_0_s5[6]);
		    cache0->mac_src_0_s5[7](mac_src_0_s5[7]);
		    cache0->mac_src_0_s5[8](mac_src_0_s5[8]);
		    cache0->mac_src_0_s5[9](mac_src_0_s5[9]);
		    cache0->mac_src_0_s5[10](mac_src_0_s5[10]);
		    cache0->mac_src_0_s5[11](mac_src_0_s5[11]);
		    cache0->mac_src_0_s5[12](mac_src_0_s5[12]);
		    cache0->mac_src_0_s5[13](mac_src_0_s5[13]);
		    cache0->mac_src_0_s5[14](mac_src_0_s5[14]);
		    cache0->mac_src_0_s5[15](mac_src_0_s5[15]);
		    cache0->mac_src_0_s5[16](mac_src_0_s5[16]);
		    cache0->mac_src_0_s5[17](mac_src_0_s5[17]);
		    cache0->mac_src_0_s5[18](mac_src_0_s5[18]);
		    cache0->mac_src_0_s5[19](mac_src_0_s5[19]);
		    cache0->mac_src_0_s5[20](mac_src_0_s5[20]);
		    cache0->mac_src_0_s5[21](mac_src_0_s5[21]);
		    cache0->mac_src_0_s5[22](mac_src_0_s5[22]);
		    cache0->mac_src_0_s5[23](mac_src_0_s5[23]);
		    cache0->mac_src_0_s5[24](mac_src_0_s5[24]);
		    cache0->mac_src_0_s5[25](mac_src_0_s5[25]);
		    cache0->mac_src_0_s5[26](mac_src_0_s5[26]);
		    cache0->mac_src_0_s5[27](mac_src_0_s5[27]);
		    cache0->mac_src_0_s5[28](mac_src_0_s5[28]);
		    cache0->mac_src_0_s5[29](mac_src_0_s5[29]);
		    cache0->mac_src_0_s5[30](mac_src_0_s5[30]);
		    cache0->mac_src_0_s5[31](mac_src_0_s5[31]);
		    cache0->mac_src_0_s6[0](mac_src_0_s6[0]);
		    cache0->mac_src_0_s6[1](mac_src_0_s6[1]);
		    cache0->mac_src_0_s6[2](mac_src_0_s6[2]);
		    cache0->mac_src_0_s6[3](mac_src_0_s6[3]);
		    cache0->mac_src_0_s6[4](mac_src_0_s6[4]);
		    cache0->mac_src_0_s6[5](mac_src_0_s6[5]);
		    cache0->mac_src_0_s6[6](mac_src_0_s6[6]);
		    cache0->mac_src_0_s6[7](mac_src_0_s6[7]);
		    cache0->mac_src_0_s6[8](mac_src_0_s6[8]);
		    cache0->mac_src_0_s6[9](mac_src_0_s6[9]);
		    cache0->mac_src_0_s6[10](mac_src_0_s6[10]);
		    cache0->mac_src_0_s6[11](mac_src_0_s6[11]);
		    cache0->mac_src_0_s6[12](mac_src_0_s6[12]);
		    cache0->mac_src_0_s6[13](mac_src_0_s6[13]);
		    cache0->mac_src_0_s6[14](mac_src_0_s6[14]);
		    cache0->mac_src_0_s6[15](mac_src_0_s6[15]);
		    cache0->mac_src_0_s6[16](mac_src_0_s6[16]);
		    cache0->mac_src_0_s6[17](mac_src_0_s6[17]);
		    cache0->mac_src_0_s6[18](mac_src_0_s6[18]);
		    cache0->mac_src_0_s6[19](mac_src_0_s6[19]);
		    cache0->mac_src_0_s6[20](mac_src_0_s6[20]);
		    cache0->mac_src_0_s6[21](mac_src_0_s6[21]);
		    cache0->mac_src_0_s6[22](mac_src_0_s6[22]);
		    cache0->mac_src_0_s6[23](mac_src_0_s6[23]);
		    cache0->mac_src_0_s6[24](mac_src_0_s6[24]);
		    cache0->mac_src_0_s6[25](mac_src_0_s6[25]);
		    cache0->mac_src_0_s6[26](mac_src_0_s6[26]);
		    cache0->mac_src_0_s6[27](mac_src_0_s6[27]);
		    cache0->mac_src_0_s6[28](mac_src_0_s6[28]);
		    cache0->mac_src_0_s6[29](mac_src_0_s6[29]);
		    cache0->mac_src_0_s6[30](mac_src_0_s6[30]);
		    cache0->mac_src_0_s6[31](mac_src_0_s6[31]);
		    cache0->mac_src_1[0](mac_src_1[0]);
		    cache0->mac_src_1[1](mac_src_1[1]);
		    cache0->mac_src_1[2](mac_src_1[2]);
		    cache0->mac_src_1[3](mac_src_1[3]);
		    cache0->mac_src_1[4](mac_src_1[4]);
		    cache0->mac_src_1[5](mac_src_1[5]);
		    cache0->mac_src_1[6](mac_src_1[6]);
		    cache0->mac_src_1[7](mac_src_1[7]);
		    cache0->mac_src_1[8](mac_src_1[8]);
		    cache0->mac_src_1[9](mac_src_1[9]);
		    cache0->mac_src_1[10](mac_src_1[10]);
		    cache0->mac_src_1[11](mac_src_1[11]);
		    cache0->mac_src_1[12](mac_src_1[12]);
		    cache0->mac_src_1[13](mac_src_1[13]);
		    cache0->mac_src_1[14](mac_src_1[14]);
		    cache0->mac_src_1[15](mac_src_1[15]);
		    cache0->mac_src_1[16](mac_src_1[16]);
		    cache0->mac_src_1[17](mac_src_1[17]);
		    cache0->mac_src_1[18](mac_src_1[18]);
		    cache0->mac_src_1[19](mac_src_1[19]);
		    cache0->mac_src_1[20](mac_src_1[20]);
		    cache0->mac_src_1[21](mac_src_1[21]);
		    cache0->mac_src_1[22](mac_src_1[22]);
		    cache0->mac_src_1[23](mac_src_1[23]);
		    cache0->mac_src_1[24](mac_src_1[24]);
		    cache0->mac_src_1[25](mac_src_1[25]);
		    cache0->mac_src_1[26](mac_src_1[26]);
		    cache0->mac_src_1[27](mac_src_1[27]);
		    cache0->mac_src_1[28](mac_src_1[28]);
		    cache0->mac_src_1[29](mac_src_1[29]);
		    cache0->mac_src_1[30](mac_src_1[30]);
		    cache0->mac_src_1[31](mac_src_1[31]);
		    cache0->mac_src_valid(mac_src_valid);
		    cache0->mac_clear(mac_clear);


			{
			const char *simConfig = cache_wrapper::simConfigName();
			
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

void cache_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_mac_src_0_s0_0);
		  sensitive << mac_src_0_s0[0];
		SC_METHOD(thread_mac_src_0_s0_1);
		  sensitive << mac_src_0_s0[1];
		SC_METHOD(thread_mac_src_0_s0_2);
		  sensitive << mac_src_0_s0[2];
		SC_METHOD(thread_mac_src_0_s0_3);
		  sensitive << mac_src_0_s0[3];
		SC_METHOD(thread_mac_src_0_s0_4);
		  sensitive << mac_src_0_s0[4];
		SC_METHOD(thread_mac_src_0_s0_5);
		  sensitive << mac_src_0_s0[5];
		SC_METHOD(thread_mac_src_0_s0_6);
		  sensitive << mac_src_0_s0[6];
		SC_METHOD(thread_mac_src_0_s0_7);
		  sensitive << mac_src_0_s0[7];
		SC_METHOD(thread_mac_src_0_s0_8);
		  sensitive << mac_src_0_s0[8];
		SC_METHOD(thread_mac_src_0_s0_9);
		  sensitive << mac_src_0_s0[9];
		SC_METHOD(thread_mac_src_0_s0_10);
		  sensitive << mac_src_0_s0[10];
		SC_METHOD(thread_mac_src_0_s0_11);
		  sensitive << mac_src_0_s0[11];
		SC_METHOD(thread_mac_src_0_s0_12);
		  sensitive << mac_src_0_s0[12];
		SC_METHOD(thread_mac_src_0_s0_13);
		  sensitive << mac_src_0_s0[13];
		SC_METHOD(thread_mac_src_0_s0_14);
		  sensitive << mac_src_0_s0[14];
		SC_METHOD(thread_mac_src_0_s0_15);
		  sensitive << mac_src_0_s0[15];
		SC_METHOD(thread_mac_src_0_s0_16);
		  sensitive << mac_src_0_s0[16];
		SC_METHOD(thread_mac_src_0_s0_17);
		  sensitive << mac_src_0_s0[17];
		SC_METHOD(thread_mac_src_0_s0_18);
		  sensitive << mac_src_0_s0[18];
		SC_METHOD(thread_mac_src_0_s0_19);
		  sensitive << mac_src_0_s0[19];
		SC_METHOD(thread_mac_src_0_s0_20);
		  sensitive << mac_src_0_s0[20];
		SC_METHOD(thread_mac_src_0_s0_21);
		  sensitive << mac_src_0_s0[21];
		SC_METHOD(thread_mac_src_0_s0_22);
		  sensitive << mac_src_0_s0[22];
		SC_METHOD(thread_mac_src_0_s0_23);
		  sensitive << mac_src_0_s0[23];
		SC_METHOD(thread_mac_src_0_s0_24);
		  sensitive << mac_src_0_s0[24];
		SC_METHOD(thread_mac_src_0_s0_25);
		  sensitive << mac_src_0_s0[25];
		SC_METHOD(thread_mac_src_0_s0_26);
		  sensitive << mac_src_0_s0[26];
		SC_METHOD(thread_mac_src_0_s0_27);
		  sensitive << mac_src_0_s0[27];
		SC_METHOD(thread_mac_src_0_s0_28);
		  sensitive << mac_src_0_s0[28];
		SC_METHOD(thread_mac_src_0_s0_29);
		  sensitive << mac_src_0_s0[29];
		SC_METHOD(thread_mac_src_0_s0_30);
		  sensitive << mac_src_0_s0[30];
		SC_METHOD(thread_mac_src_0_s0_31);
		  sensitive << mac_src_0_s0[31];
		SC_METHOD(thread_mac_src_0_s1_0);
		  sensitive << mac_src_0_s1[0];
		SC_METHOD(thread_mac_src_0_s1_1);
		  sensitive << mac_src_0_s1[1];
		SC_METHOD(thread_mac_src_0_s1_2);
		  sensitive << mac_src_0_s1[2];
		SC_METHOD(thread_mac_src_0_s1_3);
		  sensitive << mac_src_0_s1[3];
		SC_METHOD(thread_mac_src_0_s1_4);
		  sensitive << mac_src_0_s1[4];
		SC_METHOD(thread_mac_src_0_s1_5);
		  sensitive << mac_src_0_s1[5];
		SC_METHOD(thread_mac_src_0_s1_6);
		  sensitive << mac_src_0_s1[6];
		SC_METHOD(thread_mac_src_0_s1_7);
		  sensitive << mac_src_0_s1[7];
		SC_METHOD(thread_mac_src_0_s1_8);
		  sensitive << mac_src_0_s1[8];
		SC_METHOD(thread_mac_src_0_s1_9);
		  sensitive << mac_src_0_s1[9];
		SC_METHOD(thread_mac_src_0_s1_10);
		  sensitive << mac_src_0_s1[10];
		SC_METHOD(thread_mac_src_0_s1_11);
		  sensitive << mac_src_0_s1[11];
		SC_METHOD(thread_mac_src_0_s1_12);
		  sensitive << mac_src_0_s1[12];
		SC_METHOD(thread_mac_src_0_s1_13);
		  sensitive << mac_src_0_s1[13];
		SC_METHOD(thread_mac_src_0_s1_14);
		  sensitive << mac_src_0_s1[14];
		SC_METHOD(thread_mac_src_0_s1_15);
		  sensitive << mac_src_0_s1[15];
		SC_METHOD(thread_mac_src_0_s1_16);
		  sensitive << mac_src_0_s1[16];
		SC_METHOD(thread_mac_src_0_s1_17);
		  sensitive << mac_src_0_s1[17];
		SC_METHOD(thread_mac_src_0_s1_18);
		  sensitive << mac_src_0_s1[18];
		SC_METHOD(thread_mac_src_0_s1_19);
		  sensitive << mac_src_0_s1[19];
		SC_METHOD(thread_mac_src_0_s1_20);
		  sensitive << mac_src_0_s1[20];
		SC_METHOD(thread_mac_src_0_s1_21);
		  sensitive << mac_src_0_s1[21];
		SC_METHOD(thread_mac_src_0_s1_22);
		  sensitive << mac_src_0_s1[22];
		SC_METHOD(thread_mac_src_0_s1_23);
		  sensitive << mac_src_0_s1[23];
		SC_METHOD(thread_mac_src_0_s1_24);
		  sensitive << mac_src_0_s1[24];
		SC_METHOD(thread_mac_src_0_s1_25);
		  sensitive << mac_src_0_s1[25];
		SC_METHOD(thread_mac_src_0_s1_26);
		  sensitive << mac_src_0_s1[26];
		SC_METHOD(thread_mac_src_0_s1_27);
		  sensitive << mac_src_0_s1[27];
		SC_METHOD(thread_mac_src_0_s1_28);
		  sensitive << mac_src_0_s1[28];
		SC_METHOD(thread_mac_src_0_s1_29);
		  sensitive << mac_src_0_s1[29];
		SC_METHOD(thread_mac_src_0_s1_30);
		  sensitive << mac_src_0_s1[30];
		SC_METHOD(thread_mac_src_0_s1_31);
		  sensitive << mac_src_0_s1[31];
		SC_METHOD(thread_mac_src_0_s2_0);
		  sensitive << mac_src_0_s2[0];
		SC_METHOD(thread_mac_src_0_s2_1);
		  sensitive << mac_src_0_s2[1];
		SC_METHOD(thread_mac_src_0_s2_2);
		  sensitive << mac_src_0_s2[2];
		SC_METHOD(thread_mac_src_0_s2_3);
		  sensitive << mac_src_0_s2[3];
		SC_METHOD(thread_mac_src_0_s2_4);
		  sensitive << mac_src_0_s2[4];
		SC_METHOD(thread_mac_src_0_s2_5);
		  sensitive << mac_src_0_s2[5];
		SC_METHOD(thread_mac_src_0_s2_6);
		  sensitive << mac_src_0_s2[6];
		SC_METHOD(thread_mac_src_0_s2_7);
		  sensitive << mac_src_0_s2[7];
		SC_METHOD(thread_mac_src_0_s2_8);
		  sensitive << mac_src_0_s2[8];
		SC_METHOD(thread_mac_src_0_s2_9);
		  sensitive << mac_src_0_s2[9];
		SC_METHOD(thread_mac_src_0_s2_10);
		  sensitive << mac_src_0_s2[10];
		SC_METHOD(thread_mac_src_0_s2_11);
		  sensitive << mac_src_0_s2[11];
		SC_METHOD(thread_mac_src_0_s2_12);
		  sensitive << mac_src_0_s2[12];
		SC_METHOD(thread_mac_src_0_s2_13);
		  sensitive << mac_src_0_s2[13];
		SC_METHOD(thread_mac_src_0_s2_14);
		  sensitive << mac_src_0_s2[14];
		SC_METHOD(thread_mac_src_0_s2_15);
		  sensitive << mac_src_0_s2[15];
		SC_METHOD(thread_mac_src_0_s2_16);
		  sensitive << mac_src_0_s2[16];
		SC_METHOD(thread_mac_src_0_s2_17);
		  sensitive << mac_src_0_s2[17];
		SC_METHOD(thread_mac_src_0_s2_18);
		  sensitive << mac_src_0_s2[18];
		SC_METHOD(thread_mac_src_0_s2_19);
		  sensitive << mac_src_0_s2[19];
		SC_METHOD(thread_mac_src_0_s2_20);
		  sensitive << mac_src_0_s2[20];
		SC_METHOD(thread_mac_src_0_s2_21);
		  sensitive << mac_src_0_s2[21];
		SC_METHOD(thread_mac_src_0_s2_22);
		  sensitive << mac_src_0_s2[22];
		SC_METHOD(thread_mac_src_0_s2_23);
		  sensitive << mac_src_0_s2[23];
		SC_METHOD(thread_mac_src_0_s2_24);
		  sensitive << mac_src_0_s2[24];
		SC_METHOD(thread_mac_src_0_s2_25);
		  sensitive << mac_src_0_s2[25];
		SC_METHOD(thread_mac_src_0_s2_26);
		  sensitive << mac_src_0_s2[26];
		SC_METHOD(thread_mac_src_0_s2_27);
		  sensitive << mac_src_0_s2[27];
		SC_METHOD(thread_mac_src_0_s2_28);
		  sensitive << mac_src_0_s2[28];
		SC_METHOD(thread_mac_src_0_s2_29);
		  sensitive << mac_src_0_s2[29];
		SC_METHOD(thread_mac_src_0_s2_30);
		  sensitive << mac_src_0_s2[30];
		SC_METHOD(thread_mac_src_0_s2_31);
		  sensitive << mac_src_0_s2[31];
		SC_METHOD(thread_mac_src_0_s3_0);
		  sensitive << mac_src_0_s3[0];
		SC_METHOD(thread_mac_src_0_s3_1);
		  sensitive << mac_src_0_s3[1];
		SC_METHOD(thread_mac_src_0_s3_2);
		  sensitive << mac_src_0_s3[2];
		SC_METHOD(thread_mac_src_0_s3_3);
		  sensitive << mac_src_0_s3[3];
		SC_METHOD(thread_mac_src_0_s3_4);
		  sensitive << mac_src_0_s3[4];
		SC_METHOD(thread_mac_src_0_s3_5);
		  sensitive << mac_src_0_s3[5];
		SC_METHOD(thread_mac_src_0_s3_6);
		  sensitive << mac_src_0_s3[6];
		SC_METHOD(thread_mac_src_0_s3_7);
		  sensitive << mac_src_0_s3[7];
		SC_METHOD(thread_mac_src_0_s3_8);
		  sensitive << mac_src_0_s3[8];
		SC_METHOD(thread_mac_src_0_s3_9);
		  sensitive << mac_src_0_s3[9];
		SC_METHOD(thread_mac_src_0_s3_10);
		  sensitive << mac_src_0_s3[10];
		SC_METHOD(thread_mac_src_0_s3_11);
		  sensitive << mac_src_0_s3[11];
		SC_METHOD(thread_mac_src_0_s3_12);
		  sensitive << mac_src_0_s3[12];
		SC_METHOD(thread_mac_src_0_s3_13);
		  sensitive << mac_src_0_s3[13];
		SC_METHOD(thread_mac_src_0_s3_14);
		  sensitive << mac_src_0_s3[14];
		SC_METHOD(thread_mac_src_0_s3_15);
		  sensitive << mac_src_0_s3[15];
		SC_METHOD(thread_mac_src_0_s3_16);
		  sensitive << mac_src_0_s3[16];
		SC_METHOD(thread_mac_src_0_s3_17);
		  sensitive << mac_src_0_s3[17];
		SC_METHOD(thread_mac_src_0_s3_18);
		  sensitive << mac_src_0_s3[18];
		SC_METHOD(thread_mac_src_0_s3_19);
		  sensitive << mac_src_0_s3[19];
		SC_METHOD(thread_mac_src_0_s3_20);
		  sensitive << mac_src_0_s3[20];
		SC_METHOD(thread_mac_src_0_s3_21);
		  sensitive << mac_src_0_s3[21];
		SC_METHOD(thread_mac_src_0_s3_22);
		  sensitive << mac_src_0_s3[22];
		SC_METHOD(thread_mac_src_0_s3_23);
		  sensitive << mac_src_0_s3[23];
		SC_METHOD(thread_mac_src_0_s3_24);
		  sensitive << mac_src_0_s3[24];
		SC_METHOD(thread_mac_src_0_s3_25);
		  sensitive << mac_src_0_s3[25];
		SC_METHOD(thread_mac_src_0_s3_26);
		  sensitive << mac_src_0_s3[26];
		SC_METHOD(thread_mac_src_0_s3_27);
		  sensitive << mac_src_0_s3[27];
		SC_METHOD(thread_mac_src_0_s3_28);
		  sensitive << mac_src_0_s3[28];
		SC_METHOD(thread_mac_src_0_s3_29);
		  sensitive << mac_src_0_s3[29];
		SC_METHOD(thread_mac_src_0_s3_30);
		  sensitive << mac_src_0_s3[30];
		SC_METHOD(thread_mac_src_0_s3_31);
		  sensitive << mac_src_0_s3[31];
		SC_METHOD(thread_mac_src_0_s4_0);
		  sensitive << mac_src_0_s4[0];
		SC_METHOD(thread_mac_src_0_s4_1);
		  sensitive << mac_src_0_s4[1];
		SC_METHOD(thread_mac_src_0_s4_2);
		  sensitive << mac_src_0_s4[2];
		SC_METHOD(thread_mac_src_0_s4_3);
		  sensitive << mac_src_0_s4[3];
		SC_METHOD(thread_mac_src_0_s4_4);
		  sensitive << mac_src_0_s4[4];
		SC_METHOD(thread_mac_src_0_s4_5);
		  sensitive << mac_src_0_s4[5];
		SC_METHOD(thread_mac_src_0_s4_6);
		  sensitive << mac_src_0_s4[6];
		SC_METHOD(thread_mac_src_0_s4_7);
		  sensitive << mac_src_0_s4[7];
		SC_METHOD(thread_mac_src_0_s4_8);
		  sensitive << mac_src_0_s4[8];
		SC_METHOD(thread_mac_src_0_s4_9);
		  sensitive << mac_src_0_s4[9];
		SC_METHOD(thread_mac_src_0_s4_10);
		  sensitive << mac_src_0_s4[10];
		SC_METHOD(thread_mac_src_0_s4_11);
		  sensitive << mac_src_0_s4[11];
		SC_METHOD(thread_mac_src_0_s4_12);
		  sensitive << mac_src_0_s4[12];
		SC_METHOD(thread_mac_src_0_s4_13);
		  sensitive << mac_src_0_s4[13];
		SC_METHOD(thread_mac_src_0_s4_14);
		  sensitive << mac_src_0_s4[14];
		SC_METHOD(thread_mac_src_0_s4_15);
		  sensitive << mac_src_0_s4[15];
		SC_METHOD(thread_mac_src_0_s4_16);
		  sensitive << mac_src_0_s4[16];
		SC_METHOD(thread_mac_src_0_s4_17);
		  sensitive << mac_src_0_s4[17];
		SC_METHOD(thread_mac_src_0_s4_18);
		  sensitive << mac_src_0_s4[18];
		SC_METHOD(thread_mac_src_0_s4_19);
		  sensitive << mac_src_0_s4[19];
		SC_METHOD(thread_mac_src_0_s4_20);
		  sensitive << mac_src_0_s4[20];
		SC_METHOD(thread_mac_src_0_s4_21);
		  sensitive << mac_src_0_s4[21];
		SC_METHOD(thread_mac_src_0_s4_22);
		  sensitive << mac_src_0_s4[22];
		SC_METHOD(thread_mac_src_0_s4_23);
		  sensitive << mac_src_0_s4[23];
		SC_METHOD(thread_mac_src_0_s4_24);
		  sensitive << mac_src_0_s4[24];
		SC_METHOD(thread_mac_src_0_s4_25);
		  sensitive << mac_src_0_s4[25];
		SC_METHOD(thread_mac_src_0_s4_26);
		  sensitive << mac_src_0_s4[26];
		SC_METHOD(thread_mac_src_0_s4_27);
		  sensitive << mac_src_0_s4[27];
		SC_METHOD(thread_mac_src_0_s4_28);
		  sensitive << mac_src_0_s4[28];
		SC_METHOD(thread_mac_src_0_s4_29);
		  sensitive << mac_src_0_s4[29];
		SC_METHOD(thread_mac_src_0_s4_30);
		  sensitive << mac_src_0_s4[30];
		SC_METHOD(thread_mac_src_0_s4_31);
		  sensitive << mac_src_0_s4[31];
		SC_METHOD(thread_mac_src_0_s5_0);
		  sensitive << mac_src_0_s5[0];
		SC_METHOD(thread_mac_src_0_s5_1);
		  sensitive << mac_src_0_s5[1];
		SC_METHOD(thread_mac_src_0_s5_2);
		  sensitive << mac_src_0_s5[2];
		SC_METHOD(thread_mac_src_0_s5_3);
		  sensitive << mac_src_0_s5[3];
		SC_METHOD(thread_mac_src_0_s5_4);
		  sensitive << mac_src_0_s5[4];
		SC_METHOD(thread_mac_src_0_s5_5);
		  sensitive << mac_src_0_s5[5];
		SC_METHOD(thread_mac_src_0_s5_6);
		  sensitive << mac_src_0_s5[6];
		SC_METHOD(thread_mac_src_0_s5_7);
		  sensitive << mac_src_0_s5[7];
		SC_METHOD(thread_mac_src_0_s5_8);
		  sensitive << mac_src_0_s5[8];
		SC_METHOD(thread_mac_src_0_s5_9);
		  sensitive << mac_src_0_s5[9];
		SC_METHOD(thread_mac_src_0_s5_10);
		  sensitive << mac_src_0_s5[10];
		SC_METHOD(thread_mac_src_0_s5_11);
		  sensitive << mac_src_0_s5[11];
		SC_METHOD(thread_mac_src_0_s5_12);
		  sensitive << mac_src_0_s5[12];
		SC_METHOD(thread_mac_src_0_s5_13);
		  sensitive << mac_src_0_s5[13];
		SC_METHOD(thread_mac_src_0_s5_14);
		  sensitive << mac_src_0_s5[14];
		SC_METHOD(thread_mac_src_0_s5_15);
		  sensitive << mac_src_0_s5[15];
		SC_METHOD(thread_mac_src_0_s5_16);
		  sensitive << mac_src_0_s5[16];
		SC_METHOD(thread_mac_src_0_s5_17);
		  sensitive << mac_src_0_s5[17];
		SC_METHOD(thread_mac_src_0_s5_18);
		  sensitive << mac_src_0_s5[18];
		SC_METHOD(thread_mac_src_0_s5_19);
		  sensitive << mac_src_0_s5[19];
		SC_METHOD(thread_mac_src_0_s5_20);
		  sensitive << mac_src_0_s5[20];
		SC_METHOD(thread_mac_src_0_s5_21);
		  sensitive << mac_src_0_s5[21];
		SC_METHOD(thread_mac_src_0_s5_22);
		  sensitive << mac_src_0_s5[22];
		SC_METHOD(thread_mac_src_0_s5_23);
		  sensitive << mac_src_0_s5[23];
		SC_METHOD(thread_mac_src_0_s5_24);
		  sensitive << mac_src_0_s5[24];
		SC_METHOD(thread_mac_src_0_s5_25);
		  sensitive << mac_src_0_s5[25];
		SC_METHOD(thread_mac_src_0_s5_26);
		  sensitive << mac_src_0_s5[26];
		SC_METHOD(thread_mac_src_0_s5_27);
		  sensitive << mac_src_0_s5[27];
		SC_METHOD(thread_mac_src_0_s5_28);
		  sensitive << mac_src_0_s5[28];
		SC_METHOD(thread_mac_src_0_s5_29);
		  sensitive << mac_src_0_s5[29];
		SC_METHOD(thread_mac_src_0_s5_30);
		  sensitive << mac_src_0_s5[30];
		SC_METHOD(thread_mac_src_0_s5_31);
		  sensitive << mac_src_0_s5[31];
		SC_METHOD(thread_mac_src_0_s6_0);
		  sensitive << mac_src_0_s6[0];
		SC_METHOD(thread_mac_src_0_s6_1);
		  sensitive << mac_src_0_s6[1];
		SC_METHOD(thread_mac_src_0_s6_2);
		  sensitive << mac_src_0_s6[2];
		SC_METHOD(thread_mac_src_0_s6_3);
		  sensitive << mac_src_0_s6[3];
		SC_METHOD(thread_mac_src_0_s6_4);
		  sensitive << mac_src_0_s6[4];
		SC_METHOD(thread_mac_src_0_s6_5);
		  sensitive << mac_src_0_s6[5];
		SC_METHOD(thread_mac_src_0_s6_6);
		  sensitive << mac_src_0_s6[6];
		SC_METHOD(thread_mac_src_0_s6_7);
		  sensitive << mac_src_0_s6[7];
		SC_METHOD(thread_mac_src_0_s6_8);
		  sensitive << mac_src_0_s6[8];
		SC_METHOD(thread_mac_src_0_s6_9);
		  sensitive << mac_src_0_s6[9];
		SC_METHOD(thread_mac_src_0_s6_10);
		  sensitive << mac_src_0_s6[10];
		SC_METHOD(thread_mac_src_0_s6_11);
		  sensitive << mac_src_0_s6[11];
		SC_METHOD(thread_mac_src_0_s6_12);
		  sensitive << mac_src_0_s6[12];
		SC_METHOD(thread_mac_src_0_s6_13);
		  sensitive << mac_src_0_s6[13];
		SC_METHOD(thread_mac_src_0_s6_14);
		  sensitive << mac_src_0_s6[14];
		SC_METHOD(thread_mac_src_0_s6_15);
		  sensitive << mac_src_0_s6[15];
		SC_METHOD(thread_mac_src_0_s6_16);
		  sensitive << mac_src_0_s6[16];
		SC_METHOD(thread_mac_src_0_s6_17);
		  sensitive << mac_src_0_s6[17];
		SC_METHOD(thread_mac_src_0_s6_18);
		  sensitive << mac_src_0_s6[18];
		SC_METHOD(thread_mac_src_0_s6_19);
		  sensitive << mac_src_0_s6[19];
		SC_METHOD(thread_mac_src_0_s6_20);
		  sensitive << mac_src_0_s6[20];
		SC_METHOD(thread_mac_src_0_s6_21);
		  sensitive << mac_src_0_s6[21];
		SC_METHOD(thread_mac_src_0_s6_22);
		  sensitive << mac_src_0_s6[22];
		SC_METHOD(thread_mac_src_0_s6_23);
		  sensitive << mac_src_0_s6[23];
		SC_METHOD(thread_mac_src_0_s6_24);
		  sensitive << mac_src_0_s6[24];
		SC_METHOD(thread_mac_src_0_s6_25);
		  sensitive << mac_src_0_s6[25];
		SC_METHOD(thread_mac_src_0_s6_26);
		  sensitive << mac_src_0_s6[26];
		SC_METHOD(thread_mac_src_0_s6_27);
		  sensitive << mac_src_0_s6[27];
		SC_METHOD(thread_mac_src_0_s6_28);
		  sensitive << mac_src_0_s6[28];
		SC_METHOD(thread_mac_src_0_s6_29);
		  sensitive << mac_src_0_s6[29];
		SC_METHOD(thread_mac_src_0_s6_30);
		  sensitive << mac_src_0_s6[30];
		SC_METHOD(thread_mac_src_0_s6_31);
		  sensitive << mac_src_0_s6[31];
		SC_METHOD(thread_mac_src_1_0);
		  sensitive << mac_src_1[0];
		SC_METHOD(thread_mac_src_1_1);
		  sensitive << mac_src_1[1];
		SC_METHOD(thread_mac_src_1_2);
		  sensitive << mac_src_1[2];
		SC_METHOD(thread_mac_src_1_3);
		  sensitive << mac_src_1[3];
		SC_METHOD(thread_mac_src_1_4);
		  sensitive << mac_src_1[4];
		SC_METHOD(thread_mac_src_1_5);
		  sensitive << mac_src_1[5];
		SC_METHOD(thread_mac_src_1_6);
		  sensitive << mac_src_1[6];
		SC_METHOD(thread_mac_src_1_7);
		  sensitive << mac_src_1[7];
		SC_METHOD(thread_mac_src_1_8);
		  sensitive << mac_src_1[8];
		SC_METHOD(thread_mac_src_1_9);
		  sensitive << mac_src_1[9];
		SC_METHOD(thread_mac_src_1_10);
		  sensitive << mac_src_1[10];
		SC_METHOD(thread_mac_src_1_11);
		  sensitive << mac_src_1[11];
		SC_METHOD(thread_mac_src_1_12);
		  sensitive << mac_src_1[12];
		SC_METHOD(thread_mac_src_1_13);
		  sensitive << mac_src_1[13];
		SC_METHOD(thread_mac_src_1_14);
		  sensitive << mac_src_1[14];
		SC_METHOD(thread_mac_src_1_15);
		  sensitive << mac_src_1[15];
		SC_METHOD(thread_mac_src_1_16);
		  sensitive << mac_src_1[16];
		SC_METHOD(thread_mac_src_1_17);
		  sensitive << mac_src_1[17];
		SC_METHOD(thread_mac_src_1_18);
		  sensitive << mac_src_1[18];
		SC_METHOD(thread_mac_src_1_19);
		  sensitive << mac_src_1[19];
		SC_METHOD(thread_mac_src_1_20);
		  sensitive << mac_src_1[20];
		SC_METHOD(thread_mac_src_1_21);
		  sensitive << mac_src_1[21];
		SC_METHOD(thread_mac_src_1_22);
		  sensitive << mac_src_1[22];
		SC_METHOD(thread_mac_src_1_23);
		  sensitive << mac_src_1[23];
		SC_METHOD(thread_mac_src_1_24);
		  sensitive << mac_src_1[24];
		SC_METHOD(thread_mac_src_1_25);
		  sensitive << mac_src_1[25];
		SC_METHOD(thread_mac_src_1_26);
		  sensitive << mac_src_1[26];
		SC_METHOD(thread_mac_src_1_27);
		  sensitive << mac_src_1[27];
		SC_METHOD(thread_mac_src_1_28);
		  sensitive << mac_src_1[28];
		SC_METHOD(thread_mac_src_1_29);
		  sensitive << mac_src_1[29];
		SC_METHOD(thread_mac_src_1_30);
		  sensitive << mac_src_1[30];
		SC_METHOD(thread_mac_src_1_31);
		  sensitive << mac_src_1[31];

	}
}

void cache_wrapper_r::start_of_simulation()
{

#include <cache_trace.h>

    esc_multiple_writers_warning();
}

void cache_wrapper_r::CloseTrace()
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

void cache_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void cache_wrapper_r::DeleteInstances()
{
    if (cache0)
    {
        delete cache0;
        cache0 = 0;
    }
    if (cache_cosim0)
    {
        delete cache_cosim0;
        cache_cosim0 = 0;
    }
    if (cache_cycsim0)
    {
        delete cache_cycsim0;
        cache_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_cache)
    if (cache_rtl0)
    {
        delete cache_rtl0;
        cache_rtl0 = 0;
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

class cache_wrapper_fsdb_opener {
public:
	cache_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static cache_wrapper_fsdb_opener
  cache_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"cache.cpp"

#define		cache_INTERNAL


#include	"cache_wrap.h"

const char * cache_wrapper::simConfigName()
{
  return "";
}

enum cache_wrapper::Representation cache_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void cache_wrapper::InitInstances( sc_core::sc_module_name  )
{
	cache0 = new cache( "cache" );

	cache0->clk(clk);
	cache0->rstn(rstn);
	cache0->cache_en(cache_en);
	cache0->systolic_en(systolic_en);
	cache0->systolic_depth(systolic_depth);
	cache0->addr_if_start(addr_if_start);
	cache0->systolic_sel(systolic_sel);
	cache0->feature_data(feature_data);
	cache0->feature_share_en(feature_share_en);
	cache0->feature_data_en(feature_data_en);
	cache0->feature_data_sel(feature_data_sel);
	cache0->weight_data(weight_data);
	cache0->weight_data_en(weight_data_en);
	cache0->mac_src_0_s0[0](mac_src_0_s0[0]);
	cache0->mac_src_0_s0[1](mac_src_0_s0[1]);
	cache0->mac_src_0_s0[2](mac_src_0_s0[2]);
	cache0->mac_src_0_s0[3](mac_src_0_s0[3]);
	cache0->mac_src_0_s0[4](mac_src_0_s0[4]);
	cache0->mac_src_0_s0[5](mac_src_0_s0[5]);
	cache0->mac_src_0_s0[6](mac_src_0_s0[6]);
	cache0->mac_src_0_s0[7](mac_src_0_s0[7]);
	cache0->mac_src_0_s0[8](mac_src_0_s0[8]);
	cache0->mac_src_0_s0[9](mac_src_0_s0[9]);
	cache0->mac_src_0_s0[10](mac_src_0_s0[10]);
	cache0->mac_src_0_s0[11](mac_src_0_s0[11]);
	cache0->mac_src_0_s0[12](mac_src_0_s0[12]);
	cache0->mac_src_0_s0[13](mac_src_0_s0[13]);
	cache0->mac_src_0_s0[14](mac_src_0_s0[14]);
	cache0->mac_src_0_s0[15](mac_src_0_s0[15]);
	cache0->mac_src_0_s0[16](mac_src_0_s0[16]);
	cache0->mac_src_0_s0[17](mac_src_0_s0[17]);
	cache0->mac_src_0_s0[18](mac_src_0_s0[18]);
	cache0->mac_src_0_s0[19](mac_src_0_s0[19]);
	cache0->mac_src_0_s0[20](mac_src_0_s0[20]);
	cache0->mac_src_0_s0[21](mac_src_0_s0[21]);
	cache0->mac_src_0_s0[22](mac_src_0_s0[22]);
	cache0->mac_src_0_s0[23](mac_src_0_s0[23]);
	cache0->mac_src_0_s0[24](mac_src_0_s0[24]);
	cache0->mac_src_0_s0[25](mac_src_0_s0[25]);
	cache0->mac_src_0_s0[26](mac_src_0_s0[26]);
	cache0->mac_src_0_s0[27](mac_src_0_s0[27]);
	cache0->mac_src_0_s0[28](mac_src_0_s0[28]);
	cache0->mac_src_0_s0[29](mac_src_0_s0[29]);
	cache0->mac_src_0_s0[30](mac_src_0_s0[30]);
	cache0->mac_src_0_s0[31](mac_src_0_s0[31]);
	cache0->mac_src_0_s1[0](mac_src_0_s1[0]);
	cache0->mac_src_0_s1[1](mac_src_0_s1[1]);
	cache0->mac_src_0_s1[2](mac_src_0_s1[2]);
	cache0->mac_src_0_s1[3](mac_src_0_s1[3]);
	cache0->mac_src_0_s1[4](mac_src_0_s1[4]);
	cache0->mac_src_0_s1[5](mac_src_0_s1[5]);
	cache0->mac_src_0_s1[6](mac_src_0_s1[6]);
	cache0->mac_src_0_s1[7](mac_src_0_s1[7]);
	cache0->mac_src_0_s1[8](mac_src_0_s1[8]);
	cache0->mac_src_0_s1[9](mac_src_0_s1[9]);
	cache0->mac_src_0_s1[10](mac_src_0_s1[10]);
	cache0->mac_src_0_s1[11](mac_src_0_s1[11]);
	cache0->mac_src_0_s1[12](mac_src_0_s1[12]);
	cache0->mac_src_0_s1[13](mac_src_0_s1[13]);
	cache0->mac_src_0_s1[14](mac_src_0_s1[14]);
	cache0->mac_src_0_s1[15](mac_src_0_s1[15]);
	cache0->mac_src_0_s1[16](mac_src_0_s1[16]);
	cache0->mac_src_0_s1[17](mac_src_0_s1[17]);
	cache0->mac_src_0_s1[18](mac_src_0_s1[18]);
	cache0->mac_src_0_s1[19](mac_src_0_s1[19]);
	cache0->mac_src_0_s1[20](mac_src_0_s1[20]);
	cache0->mac_src_0_s1[21](mac_src_0_s1[21]);
	cache0->mac_src_0_s1[22](mac_src_0_s1[22]);
	cache0->mac_src_0_s1[23](mac_src_0_s1[23]);
	cache0->mac_src_0_s1[24](mac_src_0_s1[24]);
	cache0->mac_src_0_s1[25](mac_src_0_s1[25]);
	cache0->mac_src_0_s1[26](mac_src_0_s1[26]);
	cache0->mac_src_0_s1[27](mac_src_0_s1[27]);
	cache0->mac_src_0_s1[28](mac_src_0_s1[28]);
	cache0->mac_src_0_s1[29](mac_src_0_s1[29]);
	cache0->mac_src_0_s1[30](mac_src_0_s1[30]);
	cache0->mac_src_0_s1[31](mac_src_0_s1[31]);
	cache0->mac_src_0_s2[0](mac_src_0_s2[0]);
	cache0->mac_src_0_s2[1](mac_src_0_s2[1]);
	cache0->mac_src_0_s2[2](mac_src_0_s2[2]);
	cache0->mac_src_0_s2[3](mac_src_0_s2[3]);
	cache0->mac_src_0_s2[4](mac_src_0_s2[4]);
	cache0->mac_src_0_s2[5](mac_src_0_s2[5]);
	cache0->mac_src_0_s2[6](mac_src_0_s2[6]);
	cache0->mac_src_0_s2[7](mac_src_0_s2[7]);
	cache0->mac_src_0_s2[8](mac_src_0_s2[8]);
	cache0->mac_src_0_s2[9](mac_src_0_s2[9]);
	cache0->mac_src_0_s2[10](mac_src_0_s2[10]);
	cache0->mac_src_0_s2[11](mac_src_0_s2[11]);
	cache0->mac_src_0_s2[12](mac_src_0_s2[12]);
	cache0->mac_src_0_s2[13](mac_src_0_s2[13]);
	cache0->mac_src_0_s2[14](mac_src_0_s2[14]);
	cache0->mac_src_0_s2[15](mac_src_0_s2[15]);
	cache0->mac_src_0_s2[16](mac_src_0_s2[16]);
	cache0->mac_src_0_s2[17](mac_src_0_s2[17]);
	cache0->mac_src_0_s2[18](mac_src_0_s2[18]);
	cache0->mac_src_0_s2[19](mac_src_0_s2[19]);
	cache0->mac_src_0_s2[20](mac_src_0_s2[20]);
	cache0->mac_src_0_s2[21](mac_src_0_s2[21]);
	cache0->mac_src_0_s2[22](mac_src_0_s2[22]);
	cache0->mac_src_0_s2[23](mac_src_0_s2[23]);
	cache0->mac_src_0_s2[24](mac_src_0_s2[24]);
	cache0->mac_src_0_s2[25](mac_src_0_s2[25]);
	cache0->mac_src_0_s2[26](mac_src_0_s2[26]);
	cache0->mac_src_0_s2[27](mac_src_0_s2[27]);
	cache0->mac_src_0_s2[28](mac_src_0_s2[28]);
	cache0->mac_src_0_s2[29](mac_src_0_s2[29]);
	cache0->mac_src_0_s2[30](mac_src_0_s2[30]);
	cache0->mac_src_0_s2[31](mac_src_0_s2[31]);
	cache0->mac_src_0_s3[0](mac_src_0_s3[0]);
	cache0->mac_src_0_s3[1](mac_src_0_s3[1]);
	cache0->mac_src_0_s3[2](mac_src_0_s3[2]);
	cache0->mac_src_0_s3[3](mac_src_0_s3[3]);
	cache0->mac_src_0_s3[4](mac_src_0_s3[4]);
	cache0->mac_src_0_s3[5](mac_src_0_s3[5]);
	cache0->mac_src_0_s3[6](mac_src_0_s3[6]);
	cache0->mac_src_0_s3[7](mac_src_0_s3[7]);
	cache0->mac_src_0_s3[8](mac_src_0_s3[8]);
	cache0->mac_src_0_s3[9](mac_src_0_s3[9]);
	cache0->mac_src_0_s3[10](mac_src_0_s3[10]);
	cache0->mac_src_0_s3[11](mac_src_0_s3[11]);
	cache0->mac_src_0_s3[12](mac_src_0_s3[12]);
	cache0->mac_src_0_s3[13](mac_src_0_s3[13]);
	cache0->mac_src_0_s3[14](mac_src_0_s3[14]);
	cache0->mac_src_0_s3[15](mac_src_0_s3[15]);
	cache0->mac_src_0_s3[16](mac_src_0_s3[16]);
	cache0->mac_src_0_s3[17](mac_src_0_s3[17]);
	cache0->mac_src_0_s3[18](mac_src_0_s3[18]);
	cache0->mac_src_0_s3[19](mac_src_0_s3[19]);
	cache0->mac_src_0_s3[20](mac_src_0_s3[20]);
	cache0->mac_src_0_s3[21](mac_src_0_s3[21]);
	cache0->mac_src_0_s3[22](mac_src_0_s3[22]);
	cache0->mac_src_0_s3[23](mac_src_0_s3[23]);
	cache0->mac_src_0_s3[24](mac_src_0_s3[24]);
	cache0->mac_src_0_s3[25](mac_src_0_s3[25]);
	cache0->mac_src_0_s3[26](mac_src_0_s3[26]);
	cache0->mac_src_0_s3[27](mac_src_0_s3[27]);
	cache0->mac_src_0_s3[28](mac_src_0_s3[28]);
	cache0->mac_src_0_s3[29](mac_src_0_s3[29]);
	cache0->mac_src_0_s3[30](mac_src_0_s3[30]);
	cache0->mac_src_0_s3[31](mac_src_0_s3[31]);
	cache0->mac_src_0_s4[0](mac_src_0_s4[0]);
	cache0->mac_src_0_s4[1](mac_src_0_s4[1]);
	cache0->mac_src_0_s4[2](mac_src_0_s4[2]);
	cache0->mac_src_0_s4[3](mac_src_0_s4[3]);
	cache0->mac_src_0_s4[4](mac_src_0_s4[4]);
	cache0->mac_src_0_s4[5](mac_src_0_s4[5]);
	cache0->mac_src_0_s4[6](mac_src_0_s4[6]);
	cache0->mac_src_0_s4[7](mac_src_0_s4[7]);
	cache0->mac_src_0_s4[8](mac_src_0_s4[8]);
	cache0->mac_src_0_s4[9](mac_src_0_s4[9]);
	cache0->mac_src_0_s4[10](mac_src_0_s4[10]);
	cache0->mac_src_0_s4[11](mac_src_0_s4[11]);
	cache0->mac_src_0_s4[12](mac_src_0_s4[12]);
	cache0->mac_src_0_s4[13](mac_src_0_s4[13]);
	cache0->mac_src_0_s4[14](mac_src_0_s4[14]);
	cache0->mac_src_0_s4[15](mac_src_0_s4[15]);
	cache0->mac_src_0_s4[16](mac_src_0_s4[16]);
	cache0->mac_src_0_s4[17](mac_src_0_s4[17]);
	cache0->mac_src_0_s4[18](mac_src_0_s4[18]);
	cache0->mac_src_0_s4[19](mac_src_0_s4[19]);
	cache0->mac_src_0_s4[20](mac_src_0_s4[20]);
	cache0->mac_src_0_s4[21](mac_src_0_s4[21]);
	cache0->mac_src_0_s4[22](mac_src_0_s4[22]);
	cache0->mac_src_0_s4[23](mac_src_0_s4[23]);
	cache0->mac_src_0_s4[24](mac_src_0_s4[24]);
	cache0->mac_src_0_s4[25](mac_src_0_s4[25]);
	cache0->mac_src_0_s4[26](mac_src_0_s4[26]);
	cache0->mac_src_0_s4[27](mac_src_0_s4[27]);
	cache0->mac_src_0_s4[28](mac_src_0_s4[28]);
	cache0->mac_src_0_s4[29](mac_src_0_s4[29]);
	cache0->mac_src_0_s4[30](mac_src_0_s4[30]);
	cache0->mac_src_0_s4[31](mac_src_0_s4[31]);
	cache0->mac_src_0_s5[0](mac_src_0_s5[0]);
	cache0->mac_src_0_s5[1](mac_src_0_s5[1]);
	cache0->mac_src_0_s5[2](mac_src_0_s5[2]);
	cache0->mac_src_0_s5[3](mac_src_0_s5[3]);
	cache0->mac_src_0_s5[4](mac_src_0_s5[4]);
	cache0->mac_src_0_s5[5](mac_src_0_s5[5]);
	cache0->mac_src_0_s5[6](mac_src_0_s5[6]);
	cache0->mac_src_0_s5[7](mac_src_0_s5[7]);
	cache0->mac_src_0_s5[8](mac_src_0_s5[8]);
	cache0->mac_src_0_s5[9](mac_src_0_s5[9]);
	cache0->mac_src_0_s5[10](mac_src_0_s5[10]);
	cache0->mac_src_0_s5[11](mac_src_0_s5[11]);
	cache0->mac_src_0_s5[12](mac_src_0_s5[12]);
	cache0->mac_src_0_s5[13](mac_src_0_s5[13]);
	cache0->mac_src_0_s5[14](mac_src_0_s5[14]);
	cache0->mac_src_0_s5[15](mac_src_0_s5[15]);
	cache0->mac_src_0_s5[16](mac_src_0_s5[16]);
	cache0->mac_src_0_s5[17](mac_src_0_s5[17]);
	cache0->mac_src_0_s5[18](mac_src_0_s5[18]);
	cache0->mac_src_0_s5[19](mac_src_0_s5[19]);
	cache0->mac_src_0_s5[20](mac_src_0_s5[20]);
	cache0->mac_src_0_s5[21](mac_src_0_s5[21]);
	cache0->mac_src_0_s5[22](mac_src_0_s5[22]);
	cache0->mac_src_0_s5[23](mac_src_0_s5[23]);
	cache0->mac_src_0_s5[24](mac_src_0_s5[24]);
	cache0->mac_src_0_s5[25](mac_src_0_s5[25]);
	cache0->mac_src_0_s5[26](mac_src_0_s5[26]);
	cache0->mac_src_0_s5[27](mac_src_0_s5[27]);
	cache0->mac_src_0_s5[28](mac_src_0_s5[28]);
	cache0->mac_src_0_s5[29](mac_src_0_s5[29]);
	cache0->mac_src_0_s5[30](mac_src_0_s5[30]);
	cache0->mac_src_0_s5[31](mac_src_0_s5[31]);
	cache0->mac_src_0_s6[0](mac_src_0_s6[0]);
	cache0->mac_src_0_s6[1](mac_src_0_s6[1]);
	cache0->mac_src_0_s6[2](mac_src_0_s6[2]);
	cache0->mac_src_0_s6[3](mac_src_0_s6[3]);
	cache0->mac_src_0_s6[4](mac_src_0_s6[4]);
	cache0->mac_src_0_s6[5](mac_src_0_s6[5]);
	cache0->mac_src_0_s6[6](mac_src_0_s6[6]);
	cache0->mac_src_0_s6[7](mac_src_0_s6[7]);
	cache0->mac_src_0_s6[8](mac_src_0_s6[8]);
	cache0->mac_src_0_s6[9](mac_src_0_s6[9]);
	cache0->mac_src_0_s6[10](mac_src_0_s6[10]);
	cache0->mac_src_0_s6[11](mac_src_0_s6[11]);
	cache0->mac_src_0_s6[12](mac_src_0_s6[12]);
	cache0->mac_src_0_s6[13](mac_src_0_s6[13]);
	cache0->mac_src_0_s6[14](mac_src_0_s6[14]);
	cache0->mac_src_0_s6[15](mac_src_0_s6[15]);
	cache0->mac_src_0_s6[16](mac_src_0_s6[16]);
	cache0->mac_src_0_s6[17](mac_src_0_s6[17]);
	cache0->mac_src_0_s6[18](mac_src_0_s6[18]);
	cache0->mac_src_0_s6[19](mac_src_0_s6[19]);
	cache0->mac_src_0_s6[20](mac_src_0_s6[20]);
	cache0->mac_src_0_s6[21](mac_src_0_s6[21]);
	cache0->mac_src_0_s6[22](mac_src_0_s6[22]);
	cache0->mac_src_0_s6[23](mac_src_0_s6[23]);
	cache0->mac_src_0_s6[24](mac_src_0_s6[24]);
	cache0->mac_src_0_s6[25](mac_src_0_s6[25]);
	cache0->mac_src_0_s6[26](mac_src_0_s6[26]);
	cache0->mac_src_0_s6[27](mac_src_0_s6[27]);
	cache0->mac_src_0_s6[28](mac_src_0_s6[28]);
	cache0->mac_src_0_s6[29](mac_src_0_s6[29]);
	cache0->mac_src_0_s6[30](mac_src_0_s6[30]);
	cache0->mac_src_0_s6[31](mac_src_0_s6[31]);
	cache0->mac_src_1[0](mac_src_1[0]);
	cache0->mac_src_1[1](mac_src_1[1]);
	cache0->mac_src_1[2](mac_src_1[2]);
	cache0->mac_src_1[3](mac_src_1[3]);
	cache0->mac_src_1[4](mac_src_1[4]);
	cache0->mac_src_1[5](mac_src_1[5]);
	cache0->mac_src_1[6](mac_src_1[6]);
	cache0->mac_src_1[7](mac_src_1[7]);
	cache0->mac_src_1[8](mac_src_1[8]);
	cache0->mac_src_1[9](mac_src_1[9]);
	cache0->mac_src_1[10](mac_src_1[10]);
	cache0->mac_src_1[11](mac_src_1[11]);
	cache0->mac_src_1[12](mac_src_1[12]);
	cache0->mac_src_1[13](mac_src_1[13]);
	cache0->mac_src_1[14](mac_src_1[14]);
	cache0->mac_src_1[15](mac_src_1[15]);
	cache0->mac_src_1[16](mac_src_1[16]);
	cache0->mac_src_1[17](mac_src_1[17]);
	cache0->mac_src_1[18](mac_src_1[18]);
	cache0->mac_src_1[19](mac_src_1[19]);
	cache0->mac_src_1[20](mac_src_1[20]);
	cache0->mac_src_1[21](mac_src_1[21]);
	cache0->mac_src_1[22](mac_src_1[22]);
	cache0->mac_src_1[23](mac_src_1[23]);
	cache0->mac_src_1[24](mac_src_1[24]);
	cache0->mac_src_1[25](mac_src_1[25]);
	cache0->mac_src_1[26](mac_src_1[26]);
	cache0->mac_src_1[27](mac_src_1[27]);
	cache0->mac_src_1[28](mac_src_1[28]);
	cache0->mac_src_1[29](mac_src_1[29]);
	cache0->mac_src_1[30](mac_src_1[30]);
	cache0->mac_src_1[31](mac_src_1[31]);
	cache0->mac_src_valid(mac_src_valid);
	cache0->mac_clear(mac_clear);

}

void cache_wrapper::InitThreads()
{
}

void cache_wrapper::CloseTrace()
{
}

void cache_wrapper::DeleteInstances()
{
    if (cache0)
    {
        delete cache0;
        cache0 = 0;
    }
}

void cache_wrapper::start_of_simulation()
{
}

void cache_wrapper::end_of_simulation()
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

class cache_wrapper_fsdb_opener {
public:
	cache_wrapper_fsdb_opener() {
	}
};

static cache_wrapper_fsdb_opener
  cache_wrapper_fsdb_opener_inst;

#endif

#endif
