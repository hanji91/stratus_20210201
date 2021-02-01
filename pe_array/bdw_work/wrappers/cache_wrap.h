/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _CACHE_WRAP_INCLUDED_
#define _CACHE_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define cache_wrapper cache

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(cache)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > cache_en;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< bool > addr_if_start;
	sc_in< sc_uint< 8 > > systolic_sel;
	sc_in< sc_biguint< 320 > > feature_data;
	sc_in< bool > feature_share_en;
	sc_in< bool > feature_data_en;
	sc_in< sc_uint< 16 > > feature_data_sel;
	sc_in< sc_biguint< 256 > > weight_data;
	sc_in< bool > weight_data_en;
	sc_out< sc_int< 10 > > mac_src_0_s0_0;
	sc_out< sc_int< 10 > > mac_src_0_s0_1;
	sc_out< sc_int< 10 > > mac_src_0_s0_2;
	sc_out< sc_int< 10 > > mac_src_0_s0_3;
	sc_out< sc_int< 10 > > mac_src_0_s0_4;
	sc_out< sc_int< 10 > > mac_src_0_s0_5;
	sc_out< sc_int< 10 > > mac_src_0_s0_6;
	sc_out< sc_int< 10 > > mac_src_0_s0_7;
	sc_out< sc_int< 10 > > mac_src_0_s0_8;
	sc_out< sc_int< 10 > > mac_src_0_s0_9;
	sc_out< sc_int< 10 > > mac_src_0_s0_10;
	sc_out< sc_int< 10 > > mac_src_0_s0_11;
	sc_out< sc_int< 10 > > mac_src_0_s0_12;
	sc_out< sc_int< 10 > > mac_src_0_s0_13;
	sc_out< sc_int< 10 > > mac_src_0_s0_14;
	sc_out< sc_int< 10 > > mac_src_0_s0_15;
	sc_out< sc_int< 10 > > mac_src_0_s0_16;
	sc_out< sc_int< 10 > > mac_src_0_s0_17;
	sc_out< sc_int< 10 > > mac_src_0_s0_18;
	sc_out< sc_int< 10 > > mac_src_0_s0_19;
	sc_out< sc_int< 10 > > mac_src_0_s0_20;
	sc_out< sc_int< 10 > > mac_src_0_s0_21;
	sc_out< sc_int< 10 > > mac_src_0_s0_22;
	sc_out< sc_int< 10 > > mac_src_0_s0_23;
	sc_out< sc_int< 10 > > mac_src_0_s0_24;
	sc_out< sc_int< 10 > > mac_src_0_s0_25;
	sc_out< sc_int< 10 > > mac_src_0_s0_26;
	sc_out< sc_int< 10 > > mac_src_0_s0_27;
	sc_out< sc_int< 10 > > mac_src_0_s0_28;
	sc_out< sc_int< 10 > > mac_src_0_s0_29;
	sc_out< sc_int< 10 > > mac_src_0_s0_30;
	sc_out< sc_int< 10 > > mac_src_0_s0_31;
	sc_out< sc_int< 10 > > mac_src_0_s1_0;
	sc_out< sc_int< 10 > > mac_src_0_s1_1;
	sc_out< sc_int< 10 > > mac_src_0_s1_2;
	sc_out< sc_int< 10 > > mac_src_0_s1_3;
	sc_out< sc_int< 10 > > mac_src_0_s1_4;
	sc_out< sc_int< 10 > > mac_src_0_s1_5;
	sc_out< sc_int< 10 > > mac_src_0_s1_6;
	sc_out< sc_int< 10 > > mac_src_0_s1_7;
	sc_out< sc_int< 10 > > mac_src_0_s1_8;
	sc_out< sc_int< 10 > > mac_src_0_s1_9;
	sc_out< sc_int< 10 > > mac_src_0_s1_10;
	sc_out< sc_int< 10 > > mac_src_0_s1_11;
	sc_out< sc_int< 10 > > mac_src_0_s1_12;
	sc_out< sc_int< 10 > > mac_src_0_s1_13;
	sc_out< sc_int< 10 > > mac_src_0_s1_14;
	sc_out< sc_int< 10 > > mac_src_0_s1_15;
	sc_out< sc_int< 10 > > mac_src_0_s1_16;
	sc_out< sc_int< 10 > > mac_src_0_s1_17;
	sc_out< sc_int< 10 > > mac_src_0_s1_18;
	sc_out< sc_int< 10 > > mac_src_0_s1_19;
	sc_out< sc_int< 10 > > mac_src_0_s1_20;
	sc_out< sc_int< 10 > > mac_src_0_s1_21;
	sc_out< sc_int< 10 > > mac_src_0_s1_22;
	sc_out< sc_int< 10 > > mac_src_0_s1_23;
	sc_out< sc_int< 10 > > mac_src_0_s1_24;
	sc_out< sc_int< 10 > > mac_src_0_s1_25;
	sc_out< sc_int< 10 > > mac_src_0_s1_26;
	sc_out< sc_int< 10 > > mac_src_0_s1_27;
	sc_out< sc_int< 10 > > mac_src_0_s1_28;
	sc_out< sc_int< 10 > > mac_src_0_s1_29;
	sc_out< sc_int< 10 > > mac_src_0_s1_30;
	sc_out< sc_int< 10 > > mac_src_0_s1_31;
	sc_out< sc_int< 10 > > mac_src_0_s2_0;
	sc_out< sc_int< 10 > > mac_src_0_s2_1;
	sc_out< sc_int< 10 > > mac_src_0_s2_2;
	sc_out< sc_int< 10 > > mac_src_0_s2_3;
	sc_out< sc_int< 10 > > mac_src_0_s2_4;
	sc_out< sc_int< 10 > > mac_src_0_s2_5;
	sc_out< sc_int< 10 > > mac_src_0_s2_6;
	sc_out< sc_int< 10 > > mac_src_0_s2_7;
	sc_out< sc_int< 10 > > mac_src_0_s2_8;
	sc_out< sc_int< 10 > > mac_src_0_s2_9;
	sc_out< sc_int< 10 > > mac_src_0_s2_10;
	sc_out< sc_int< 10 > > mac_src_0_s2_11;
	sc_out< sc_int< 10 > > mac_src_0_s2_12;
	sc_out< sc_int< 10 > > mac_src_0_s2_13;
	sc_out< sc_int< 10 > > mac_src_0_s2_14;
	sc_out< sc_int< 10 > > mac_src_0_s2_15;
	sc_out< sc_int< 10 > > mac_src_0_s2_16;
	sc_out< sc_int< 10 > > mac_src_0_s2_17;
	sc_out< sc_int< 10 > > mac_src_0_s2_18;
	sc_out< sc_int< 10 > > mac_src_0_s2_19;
	sc_out< sc_int< 10 > > mac_src_0_s2_20;
	sc_out< sc_int< 10 > > mac_src_0_s2_21;
	sc_out< sc_int< 10 > > mac_src_0_s2_22;
	sc_out< sc_int< 10 > > mac_src_0_s2_23;
	sc_out< sc_int< 10 > > mac_src_0_s2_24;
	sc_out< sc_int< 10 > > mac_src_0_s2_25;
	sc_out< sc_int< 10 > > mac_src_0_s2_26;
	sc_out< sc_int< 10 > > mac_src_0_s2_27;
	sc_out< sc_int< 10 > > mac_src_0_s2_28;
	sc_out< sc_int< 10 > > mac_src_0_s2_29;
	sc_out< sc_int< 10 > > mac_src_0_s2_30;
	sc_out< sc_int< 10 > > mac_src_0_s2_31;
	sc_out< sc_int< 10 > > mac_src_0_s3_0;
	sc_out< sc_int< 10 > > mac_src_0_s3_1;
	sc_out< sc_int< 10 > > mac_src_0_s3_2;
	sc_out< sc_int< 10 > > mac_src_0_s3_3;
	sc_out< sc_int< 10 > > mac_src_0_s3_4;
	sc_out< sc_int< 10 > > mac_src_0_s3_5;
	sc_out< sc_int< 10 > > mac_src_0_s3_6;
	sc_out< sc_int< 10 > > mac_src_0_s3_7;
	sc_out< sc_int< 10 > > mac_src_0_s3_8;
	sc_out< sc_int< 10 > > mac_src_0_s3_9;
	sc_out< sc_int< 10 > > mac_src_0_s3_10;
	sc_out< sc_int< 10 > > mac_src_0_s3_11;
	sc_out< sc_int< 10 > > mac_src_0_s3_12;
	sc_out< sc_int< 10 > > mac_src_0_s3_13;
	sc_out< sc_int< 10 > > mac_src_0_s3_14;
	sc_out< sc_int< 10 > > mac_src_0_s3_15;
	sc_out< sc_int< 10 > > mac_src_0_s3_16;
	sc_out< sc_int< 10 > > mac_src_0_s3_17;
	sc_out< sc_int< 10 > > mac_src_0_s3_18;
	sc_out< sc_int< 10 > > mac_src_0_s3_19;
	sc_out< sc_int< 10 > > mac_src_0_s3_20;
	sc_out< sc_int< 10 > > mac_src_0_s3_21;
	sc_out< sc_int< 10 > > mac_src_0_s3_22;
	sc_out< sc_int< 10 > > mac_src_0_s3_23;
	sc_out< sc_int< 10 > > mac_src_0_s3_24;
	sc_out< sc_int< 10 > > mac_src_0_s3_25;
	sc_out< sc_int< 10 > > mac_src_0_s3_26;
	sc_out< sc_int< 10 > > mac_src_0_s3_27;
	sc_out< sc_int< 10 > > mac_src_0_s3_28;
	sc_out< sc_int< 10 > > mac_src_0_s3_29;
	sc_out< sc_int< 10 > > mac_src_0_s3_30;
	sc_out< sc_int< 10 > > mac_src_0_s3_31;
	sc_out< sc_int< 10 > > mac_src_0_s4_0;
	sc_out< sc_int< 10 > > mac_src_0_s4_1;
	sc_out< sc_int< 10 > > mac_src_0_s4_2;
	sc_out< sc_int< 10 > > mac_src_0_s4_3;
	sc_out< sc_int< 10 > > mac_src_0_s4_4;
	sc_out< sc_int< 10 > > mac_src_0_s4_5;
	sc_out< sc_int< 10 > > mac_src_0_s4_6;
	sc_out< sc_int< 10 > > mac_src_0_s4_7;
	sc_out< sc_int< 10 > > mac_src_0_s4_8;
	sc_out< sc_int< 10 > > mac_src_0_s4_9;
	sc_out< sc_int< 10 > > mac_src_0_s4_10;
	sc_out< sc_int< 10 > > mac_src_0_s4_11;
	sc_out< sc_int< 10 > > mac_src_0_s4_12;
	sc_out< sc_int< 10 > > mac_src_0_s4_13;
	sc_out< sc_int< 10 > > mac_src_0_s4_14;
	sc_out< sc_int< 10 > > mac_src_0_s4_15;
	sc_out< sc_int< 10 > > mac_src_0_s4_16;
	sc_out< sc_int< 10 > > mac_src_0_s4_17;
	sc_out< sc_int< 10 > > mac_src_0_s4_18;
	sc_out< sc_int< 10 > > mac_src_0_s4_19;
	sc_out< sc_int< 10 > > mac_src_0_s4_20;
	sc_out< sc_int< 10 > > mac_src_0_s4_21;
	sc_out< sc_int< 10 > > mac_src_0_s4_22;
	sc_out< sc_int< 10 > > mac_src_0_s4_23;
	sc_out< sc_int< 10 > > mac_src_0_s4_24;
	sc_out< sc_int< 10 > > mac_src_0_s4_25;
	sc_out< sc_int< 10 > > mac_src_0_s4_26;
	sc_out< sc_int< 10 > > mac_src_0_s4_27;
	sc_out< sc_int< 10 > > mac_src_0_s4_28;
	sc_out< sc_int< 10 > > mac_src_0_s4_29;
	sc_out< sc_int< 10 > > mac_src_0_s4_30;
	sc_out< sc_int< 10 > > mac_src_0_s4_31;
	sc_out< sc_int< 10 > > mac_src_0_s5_0;
	sc_out< sc_int< 10 > > mac_src_0_s5_1;
	sc_out< sc_int< 10 > > mac_src_0_s5_2;
	sc_out< sc_int< 10 > > mac_src_0_s5_3;
	sc_out< sc_int< 10 > > mac_src_0_s5_4;
	sc_out< sc_int< 10 > > mac_src_0_s5_5;
	sc_out< sc_int< 10 > > mac_src_0_s5_6;
	sc_out< sc_int< 10 > > mac_src_0_s5_7;
	sc_out< sc_int< 10 > > mac_src_0_s5_8;
	sc_out< sc_int< 10 > > mac_src_0_s5_9;
	sc_out< sc_int< 10 > > mac_src_0_s5_10;
	sc_out< sc_int< 10 > > mac_src_0_s5_11;
	sc_out< sc_int< 10 > > mac_src_0_s5_12;
	sc_out< sc_int< 10 > > mac_src_0_s5_13;
	sc_out< sc_int< 10 > > mac_src_0_s5_14;
	sc_out< sc_int< 10 > > mac_src_0_s5_15;
	sc_out< sc_int< 10 > > mac_src_0_s5_16;
	sc_out< sc_int< 10 > > mac_src_0_s5_17;
	sc_out< sc_int< 10 > > mac_src_0_s5_18;
	sc_out< sc_int< 10 > > mac_src_0_s5_19;
	sc_out< sc_int< 10 > > mac_src_0_s5_20;
	sc_out< sc_int< 10 > > mac_src_0_s5_21;
	sc_out< sc_int< 10 > > mac_src_0_s5_22;
	sc_out< sc_int< 10 > > mac_src_0_s5_23;
	sc_out< sc_int< 10 > > mac_src_0_s5_24;
	sc_out< sc_int< 10 > > mac_src_0_s5_25;
	sc_out< sc_int< 10 > > mac_src_0_s5_26;
	sc_out< sc_int< 10 > > mac_src_0_s5_27;
	sc_out< sc_int< 10 > > mac_src_0_s5_28;
	sc_out< sc_int< 10 > > mac_src_0_s5_29;
	sc_out< sc_int< 10 > > mac_src_0_s5_30;
	sc_out< sc_int< 10 > > mac_src_0_s5_31;
	sc_out< sc_int< 10 > > mac_src_0_s6_0;
	sc_out< sc_int< 10 > > mac_src_0_s6_1;
	sc_out< sc_int< 10 > > mac_src_0_s6_2;
	sc_out< sc_int< 10 > > mac_src_0_s6_3;
	sc_out< sc_int< 10 > > mac_src_0_s6_4;
	sc_out< sc_int< 10 > > mac_src_0_s6_5;
	sc_out< sc_int< 10 > > mac_src_0_s6_6;
	sc_out< sc_int< 10 > > mac_src_0_s6_7;
	sc_out< sc_int< 10 > > mac_src_0_s6_8;
	sc_out< sc_int< 10 > > mac_src_0_s6_9;
	sc_out< sc_int< 10 > > mac_src_0_s6_10;
	sc_out< sc_int< 10 > > mac_src_0_s6_11;
	sc_out< sc_int< 10 > > mac_src_0_s6_12;
	sc_out< sc_int< 10 > > mac_src_0_s6_13;
	sc_out< sc_int< 10 > > mac_src_0_s6_14;
	sc_out< sc_int< 10 > > mac_src_0_s6_15;
	sc_out< sc_int< 10 > > mac_src_0_s6_16;
	sc_out< sc_int< 10 > > mac_src_0_s6_17;
	sc_out< sc_int< 10 > > mac_src_0_s6_18;
	sc_out< sc_int< 10 > > mac_src_0_s6_19;
	sc_out< sc_int< 10 > > mac_src_0_s6_20;
	sc_out< sc_int< 10 > > mac_src_0_s6_21;
	sc_out< sc_int< 10 > > mac_src_0_s6_22;
	sc_out< sc_int< 10 > > mac_src_0_s6_23;
	sc_out< sc_int< 10 > > mac_src_0_s6_24;
	sc_out< sc_int< 10 > > mac_src_0_s6_25;
	sc_out< sc_int< 10 > > mac_src_0_s6_26;
	sc_out< sc_int< 10 > > mac_src_0_s6_27;
	sc_out< sc_int< 10 > > mac_src_0_s6_28;
	sc_out< sc_int< 10 > > mac_src_0_s6_29;
	sc_out< sc_int< 10 > > mac_src_0_s6_30;
	sc_out< sc_int< 10 > > mac_src_0_s6_31;
	sc_out< sc_int< 8 > > mac_src_1_0;
	sc_out< sc_int< 8 > > mac_src_1_1;
	sc_out< sc_int< 8 > > mac_src_1_2;
	sc_out< sc_int< 8 > > mac_src_1_3;
	sc_out< sc_int< 8 > > mac_src_1_4;
	sc_out< sc_int< 8 > > mac_src_1_5;
	sc_out< sc_int< 8 > > mac_src_1_6;
	sc_out< sc_int< 8 > > mac_src_1_7;
	sc_out< sc_int< 8 > > mac_src_1_8;
	sc_out< sc_int< 8 > > mac_src_1_9;
	sc_out< sc_int< 8 > > mac_src_1_10;
	sc_out< sc_int< 8 > > mac_src_1_11;
	sc_out< sc_int< 8 > > mac_src_1_12;
	sc_out< sc_int< 8 > > mac_src_1_13;
	sc_out< sc_int< 8 > > mac_src_1_14;
	sc_out< sc_int< 8 > > mac_src_1_15;
	sc_out< sc_int< 8 > > mac_src_1_16;
	sc_out< sc_int< 8 > > mac_src_1_17;
	sc_out< sc_int< 8 > > mac_src_1_18;
	sc_out< sc_int< 8 > > mac_src_1_19;
	sc_out< sc_int< 8 > > mac_src_1_20;
	sc_out< sc_int< 8 > > mac_src_1_21;
	sc_out< sc_int< 8 > > mac_src_1_22;
	sc_out< sc_int< 8 > > mac_src_1_23;
	sc_out< sc_int< 8 > > mac_src_1_24;
	sc_out< sc_int< 8 > > mac_src_1_25;
	sc_out< sc_int< 8 > > mac_src_1_26;
	sc_out< sc_int< 8 > > mac_src_1_27;
	sc_out< sc_int< 8 > > mac_src_1_28;
	sc_out< sc_int< 8 > > mac_src_1_29;
	sc_out< sc_int< 8 > > mac_src_1_30;
	sc_out< sc_int< 8 > > mac_src_1_31;
	sc_out< bool > mac_src_valid;
	sc_out< bool > mac_clear;

	SC_CTOR(cache);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>


#define cache_wrapper cache

/* Only port declarations are required for nested modules.
 */
SC_MODULE(cache)
{
public:
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > cache_en;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< bool > addr_if_start;
	sc_in< sc_uint< 8 > > systolic_sel;
	sc_in< sc_biguint< 320 > > feature_data;
	sc_in< bool > feature_share_en;
	sc_in< bool > feature_data_en;
	sc_in< sc_uint< 16 > > feature_data_sel;
	sc_in< sc_biguint< 256 > > weight_data;
	sc_in< bool > weight_data_en;
	sc_out< sc_int< 10 > > mac_src_0_s0[32];
	sc_out< sc_int< 10 > > mac_src_0_s1[32];
	sc_out< sc_int< 10 > > mac_src_0_s2[32];
	sc_out< sc_int< 10 > > mac_src_0_s3[32];
	sc_out< sc_int< 10 > > mac_src_0_s4[32];
	sc_out< sc_int< 10 > > mac_src_0_s5[32];
	sc_out< sc_int< 10 > > mac_src_0_s6[32];
	sc_out< sc_int< 8 > > mac_src_1[32];
	sc_out< bool > mac_src_valid;
	sc_out< bool > mac_clear;


	SC_HAS_PROCESS(cache);
    	cache_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("cache")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct cache;
struct cache_cosim;
struct cache_cycsim;
struct cache_rtl;

#ifdef BDW_COWARE
#include	"cache_coware.h"
#endif


// Declaration of wrapper with BEH level ports

SC_MODULE(cache_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > cache_en;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< bool > addr_if_start;
	sc_in< sc_uint< 8 > > systolic_sel;
	sc_in< sc_biguint< 320 > > feature_data;
	sc_in< bool > feature_share_en;
	sc_in< bool > feature_data_en;
	sc_in< sc_uint< 16 > > feature_data_sel;
	sc_in< sc_biguint< 256 > > weight_data;
	sc_in< bool > weight_data_en;
	sc_out< sc_int< 10 > > mac_src_0_s0[32];
	sc_out< sc_int< 10 > > mac_src_0_s1[32];
	sc_out< sc_int< 10 > > mac_src_0_s2[32];
	sc_out< sc_int< 10 > > mac_src_0_s3[32];
	sc_out< sc_int< 10 > > mac_src_0_s4[32];
	sc_out< sc_int< 10 > > mac_src_0_s5[32];
	sc_out< sc_int< 10 > > mac_src_0_s6[32];
	sc_out< sc_int< 8 > > mac_src_1[32];
	sc_out< bool > mac_src_valid;
	sc_out< bool > mac_clear;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 10 > > mac_src_0_s0_0;
    sc_signal< sc_int< 10 > > mac_src_0_s0_1;
    sc_signal< sc_int< 10 > > mac_src_0_s0_2;
    sc_signal< sc_int< 10 > > mac_src_0_s0_3;
    sc_signal< sc_int< 10 > > mac_src_0_s0_4;
    sc_signal< sc_int< 10 > > mac_src_0_s0_5;
    sc_signal< sc_int< 10 > > mac_src_0_s0_6;
    sc_signal< sc_int< 10 > > mac_src_0_s0_7;
    sc_signal< sc_int< 10 > > mac_src_0_s0_8;
    sc_signal< sc_int< 10 > > mac_src_0_s0_9;
    sc_signal< sc_int< 10 > > mac_src_0_s0_10;
    sc_signal< sc_int< 10 > > mac_src_0_s0_11;
    sc_signal< sc_int< 10 > > mac_src_0_s0_12;
    sc_signal< sc_int< 10 > > mac_src_0_s0_13;
    sc_signal< sc_int< 10 > > mac_src_0_s0_14;
    sc_signal< sc_int< 10 > > mac_src_0_s0_15;
    sc_signal< sc_int< 10 > > mac_src_0_s0_16;
    sc_signal< sc_int< 10 > > mac_src_0_s0_17;
    sc_signal< sc_int< 10 > > mac_src_0_s0_18;
    sc_signal< sc_int< 10 > > mac_src_0_s0_19;
    sc_signal< sc_int< 10 > > mac_src_0_s0_20;
    sc_signal< sc_int< 10 > > mac_src_0_s0_21;
    sc_signal< sc_int< 10 > > mac_src_0_s0_22;
    sc_signal< sc_int< 10 > > mac_src_0_s0_23;
    sc_signal< sc_int< 10 > > mac_src_0_s0_24;
    sc_signal< sc_int< 10 > > mac_src_0_s0_25;
    sc_signal< sc_int< 10 > > mac_src_0_s0_26;
    sc_signal< sc_int< 10 > > mac_src_0_s0_27;
    sc_signal< sc_int< 10 > > mac_src_0_s0_28;
    sc_signal< sc_int< 10 > > mac_src_0_s0_29;
    sc_signal< sc_int< 10 > > mac_src_0_s0_30;
    sc_signal< sc_int< 10 > > mac_src_0_s0_31;
    sc_signal< sc_int< 10 > > mac_src_0_s1_0;
    sc_signal< sc_int< 10 > > mac_src_0_s1_1;
    sc_signal< sc_int< 10 > > mac_src_0_s1_2;
    sc_signal< sc_int< 10 > > mac_src_0_s1_3;
    sc_signal< sc_int< 10 > > mac_src_0_s1_4;
    sc_signal< sc_int< 10 > > mac_src_0_s1_5;
    sc_signal< sc_int< 10 > > mac_src_0_s1_6;
    sc_signal< sc_int< 10 > > mac_src_0_s1_7;
    sc_signal< sc_int< 10 > > mac_src_0_s1_8;
    sc_signal< sc_int< 10 > > mac_src_0_s1_9;
    sc_signal< sc_int< 10 > > mac_src_0_s1_10;
    sc_signal< sc_int< 10 > > mac_src_0_s1_11;
    sc_signal< sc_int< 10 > > mac_src_0_s1_12;
    sc_signal< sc_int< 10 > > mac_src_0_s1_13;
    sc_signal< sc_int< 10 > > mac_src_0_s1_14;
    sc_signal< sc_int< 10 > > mac_src_0_s1_15;
    sc_signal< sc_int< 10 > > mac_src_0_s1_16;
    sc_signal< sc_int< 10 > > mac_src_0_s1_17;
    sc_signal< sc_int< 10 > > mac_src_0_s1_18;
    sc_signal< sc_int< 10 > > mac_src_0_s1_19;
    sc_signal< sc_int< 10 > > mac_src_0_s1_20;
    sc_signal< sc_int< 10 > > mac_src_0_s1_21;
    sc_signal< sc_int< 10 > > mac_src_0_s1_22;
    sc_signal< sc_int< 10 > > mac_src_0_s1_23;
    sc_signal< sc_int< 10 > > mac_src_0_s1_24;
    sc_signal< sc_int< 10 > > mac_src_0_s1_25;
    sc_signal< sc_int< 10 > > mac_src_0_s1_26;
    sc_signal< sc_int< 10 > > mac_src_0_s1_27;
    sc_signal< sc_int< 10 > > mac_src_0_s1_28;
    sc_signal< sc_int< 10 > > mac_src_0_s1_29;
    sc_signal< sc_int< 10 > > mac_src_0_s1_30;
    sc_signal< sc_int< 10 > > mac_src_0_s1_31;
    sc_signal< sc_int< 10 > > mac_src_0_s2_0;
    sc_signal< sc_int< 10 > > mac_src_0_s2_1;
    sc_signal< sc_int< 10 > > mac_src_0_s2_2;
    sc_signal< sc_int< 10 > > mac_src_0_s2_3;
    sc_signal< sc_int< 10 > > mac_src_0_s2_4;
    sc_signal< sc_int< 10 > > mac_src_0_s2_5;
    sc_signal< sc_int< 10 > > mac_src_0_s2_6;
    sc_signal< sc_int< 10 > > mac_src_0_s2_7;
    sc_signal< sc_int< 10 > > mac_src_0_s2_8;
    sc_signal< sc_int< 10 > > mac_src_0_s2_9;
    sc_signal< sc_int< 10 > > mac_src_0_s2_10;
    sc_signal< sc_int< 10 > > mac_src_0_s2_11;
    sc_signal< sc_int< 10 > > mac_src_0_s2_12;
    sc_signal< sc_int< 10 > > mac_src_0_s2_13;
    sc_signal< sc_int< 10 > > mac_src_0_s2_14;
    sc_signal< sc_int< 10 > > mac_src_0_s2_15;
    sc_signal< sc_int< 10 > > mac_src_0_s2_16;
    sc_signal< sc_int< 10 > > mac_src_0_s2_17;
    sc_signal< sc_int< 10 > > mac_src_0_s2_18;
    sc_signal< sc_int< 10 > > mac_src_0_s2_19;
    sc_signal< sc_int< 10 > > mac_src_0_s2_20;
    sc_signal< sc_int< 10 > > mac_src_0_s2_21;
    sc_signal< sc_int< 10 > > mac_src_0_s2_22;
    sc_signal< sc_int< 10 > > mac_src_0_s2_23;
    sc_signal< sc_int< 10 > > mac_src_0_s2_24;
    sc_signal< sc_int< 10 > > mac_src_0_s2_25;
    sc_signal< sc_int< 10 > > mac_src_0_s2_26;
    sc_signal< sc_int< 10 > > mac_src_0_s2_27;
    sc_signal< sc_int< 10 > > mac_src_0_s2_28;
    sc_signal< sc_int< 10 > > mac_src_0_s2_29;
    sc_signal< sc_int< 10 > > mac_src_0_s2_30;
    sc_signal< sc_int< 10 > > mac_src_0_s2_31;
    sc_signal< sc_int< 10 > > mac_src_0_s3_0;
    sc_signal< sc_int< 10 > > mac_src_0_s3_1;
    sc_signal< sc_int< 10 > > mac_src_0_s3_2;
    sc_signal< sc_int< 10 > > mac_src_0_s3_3;
    sc_signal< sc_int< 10 > > mac_src_0_s3_4;
    sc_signal< sc_int< 10 > > mac_src_0_s3_5;
    sc_signal< sc_int< 10 > > mac_src_0_s3_6;
    sc_signal< sc_int< 10 > > mac_src_0_s3_7;
    sc_signal< sc_int< 10 > > mac_src_0_s3_8;
    sc_signal< sc_int< 10 > > mac_src_0_s3_9;
    sc_signal< sc_int< 10 > > mac_src_0_s3_10;
    sc_signal< sc_int< 10 > > mac_src_0_s3_11;
    sc_signal< sc_int< 10 > > mac_src_0_s3_12;
    sc_signal< sc_int< 10 > > mac_src_0_s3_13;
    sc_signal< sc_int< 10 > > mac_src_0_s3_14;
    sc_signal< sc_int< 10 > > mac_src_0_s3_15;
    sc_signal< sc_int< 10 > > mac_src_0_s3_16;
    sc_signal< sc_int< 10 > > mac_src_0_s3_17;
    sc_signal< sc_int< 10 > > mac_src_0_s3_18;
    sc_signal< sc_int< 10 > > mac_src_0_s3_19;
    sc_signal< sc_int< 10 > > mac_src_0_s3_20;
    sc_signal< sc_int< 10 > > mac_src_0_s3_21;
    sc_signal< sc_int< 10 > > mac_src_0_s3_22;
    sc_signal< sc_int< 10 > > mac_src_0_s3_23;
    sc_signal< sc_int< 10 > > mac_src_0_s3_24;
    sc_signal< sc_int< 10 > > mac_src_0_s3_25;
    sc_signal< sc_int< 10 > > mac_src_0_s3_26;
    sc_signal< sc_int< 10 > > mac_src_0_s3_27;
    sc_signal< sc_int< 10 > > mac_src_0_s3_28;
    sc_signal< sc_int< 10 > > mac_src_0_s3_29;
    sc_signal< sc_int< 10 > > mac_src_0_s3_30;
    sc_signal< sc_int< 10 > > mac_src_0_s3_31;
    sc_signal< sc_int< 10 > > mac_src_0_s4_0;
    sc_signal< sc_int< 10 > > mac_src_0_s4_1;
    sc_signal< sc_int< 10 > > mac_src_0_s4_2;
    sc_signal< sc_int< 10 > > mac_src_0_s4_3;
    sc_signal< sc_int< 10 > > mac_src_0_s4_4;
    sc_signal< sc_int< 10 > > mac_src_0_s4_5;
    sc_signal< sc_int< 10 > > mac_src_0_s4_6;
    sc_signal< sc_int< 10 > > mac_src_0_s4_7;
    sc_signal< sc_int< 10 > > mac_src_0_s4_8;
    sc_signal< sc_int< 10 > > mac_src_0_s4_9;
    sc_signal< sc_int< 10 > > mac_src_0_s4_10;
    sc_signal< sc_int< 10 > > mac_src_0_s4_11;
    sc_signal< sc_int< 10 > > mac_src_0_s4_12;
    sc_signal< sc_int< 10 > > mac_src_0_s4_13;
    sc_signal< sc_int< 10 > > mac_src_0_s4_14;
    sc_signal< sc_int< 10 > > mac_src_0_s4_15;
    sc_signal< sc_int< 10 > > mac_src_0_s4_16;
    sc_signal< sc_int< 10 > > mac_src_0_s4_17;
    sc_signal< sc_int< 10 > > mac_src_0_s4_18;
    sc_signal< sc_int< 10 > > mac_src_0_s4_19;
    sc_signal< sc_int< 10 > > mac_src_0_s4_20;
    sc_signal< sc_int< 10 > > mac_src_0_s4_21;
    sc_signal< sc_int< 10 > > mac_src_0_s4_22;
    sc_signal< sc_int< 10 > > mac_src_0_s4_23;
    sc_signal< sc_int< 10 > > mac_src_0_s4_24;
    sc_signal< sc_int< 10 > > mac_src_0_s4_25;
    sc_signal< sc_int< 10 > > mac_src_0_s4_26;
    sc_signal< sc_int< 10 > > mac_src_0_s4_27;
    sc_signal< sc_int< 10 > > mac_src_0_s4_28;
    sc_signal< sc_int< 10 > > mac_src_0_s4_29;
    sc_signal< sc_int< 10 > > mac_src_0_s4_30;
    sc_signal< sc_int< 10 > > mac_src_0_s4_31;
    sc_signal< sc_int< 10 > > mac_src_0_s5_0;
    sc_signal< sc_int< 10 > > mac_src_0_s5_1;
    sc_signal< sc_int< 10 > > mac_src_0_s5_2;
    sc_signal< sc_int< 10 > > mac_src_0_s5_3;
    sc_signal< sc_int< 10 > > mac_src_0_s5_4;
    sc_signal< sc_int< 10 > > mac_src_0_s5_5;
    sc_signal< sc_int< 10 > > mac_src_0_s5_6;
    sc_signal< sc_int< 10 > > mac_src_0_s5_7;
    sc_signal< sc_int< 10 > > mac_src_0_s5_8;
    sc_signal< sc_int< 10 > > mac_src_0_s5_9;
    sc_signal< sc_int< 10 > > mac_src_0_s5_10;
    sc_signal< sc_int< 10 > > mac_src_0_s5_11;
    sc_signal< sc_int< 10 > > mac_src_0_s5_12;
    sc_signal< sc_int< 10 > > mac_src_0_s5_13;
    sc_signal< sc_int< 10 > > mac_src_0_s5_14;
    sc_signal< sc_int< 10 > > mac_src_0_s5_15;
    sc_signal< sc_int< 10 > > mac_src_0_s5_16;
    sc_signal< sc_int< 10 > > mac_src_0_s5_17;
    sc_signal< sc_int< 10 > > mac_src_0_s5_18;
    sc_signal< sc_int< 10 > > mac_src_0_s5_19;
    sc_signal< sc_int< 10 > > mac_src_0_s5_20;
    sc_signal< sc_int< 10 > > mac_src_0_s5_21;
    sc_signal< sc_int< 10 > > mac_src_0_s5_22;
    sc_signal< sc_int< 10 > > mac_src_0_s5_23;
    sc_signal< sc_int< 10 > > mac_src_0_s5_24;
    sc_signal< sc_int< 10 > > mac_src_0_s5_25;
    sc_signal< sc_int< 10 > > mac_src_0_s5_26;
    sc_signal< sc_int< 10 > > mac_src_0_s5_27;
    sc_signal< sc_int< 10 > > mac_src_0_s5_28;
    sc_signal< sc_int< 10 > > mac_src_0_s5_29;
    sc_signal< sc_int< 10 > > mac_src_0_s5_30;
    sc_signal< sc_int< 10 > > mac_src_0_s5_31;
    sc_signal< sc_int< 10 > > mac_src_0_s6_0;
    sc_signal< sc_int< 10 > > mac_src_0_s6_1;
    sc_signal< sc_int< 10 > > mac_src_0_s6_2;
    sc_signal< sc_int< 10 > > mac_src_0_s6_3;
    sc_signal< sc_int< 10 > > mac_src_0_s6_4;
    sc_signal< sc_int< 10 > > mac_src_0_s6_5;
    sc_signal< sc_int< 10 > > mac_src_0_s6_6;
    sc_signal< sc_int< 10 > > mac_src_0_s6_7;
    sc_signal< sc_int< 10 > > mac_src_0_s6_8;
    sc_signal< sc_int< 10 > > mac_src_0_s6_9;
    sc_signal< sc_int< 10 > > mac_src_0_s6_10;
    sc_signal< sc_int< 10 > > mac_src_0_s6_11;
    sc_signal< sc_int< 10 > > mac_src_0_s6_12;
    sc_signal< sc_int< 10 > > mac_src_0_s6_13;
    sc_signal< sc_int< 10 > > mac_src_0_s6_14;
    sc_signal< sc_int< 10 > > mac_src_0_s6_15;
    sc_signal< sc_int< 10 > > mac_src_0_s6_16;
    sc_signal< sc_int< 10 > > mac_src_0_s6_17;
    sc_signal< sc_int< 10 > > mac_src_0_s6_18;
    sc_signal< sc_int< 10 > > mac_src_0_s6_19;
    sc_signal< sc_int< 10 > > mac_src_0_s6_20;
    sc_signal< sc_int< 10 > > mac_src_0_s6_21;
    sc_signal< sc_int< 10 > > mac_src_0_s6_22;
    sc_signal< sc_int< 10 > > mac_src_0_s6_23;
    sc_signal< sc_int< 10 > > mac_src_0_s6_24;
    sc_signal< sc_int< 10 > > mac_src_0_s6_25;
    sc_signal< sc_int< 10 > > mac_src_0_s6_26;
    sc_signal< sc_int< 10 > > mac_src_0_s6_27;
    sc_signal< sc_int< 10 > > mac_src_0_s6_28;
    sc_signal< sc_int< 10 > > mac_src_0_s6_29;
    sc_signal< sc_int< 10 > > mac_src_0_s6_30;
    sc_signal< sc_int< 10 > > mac_src_0_s6_31;
    sc_signal< sc_int< 8 > > mac_src_1_0;
    sc_signal< sc_int< 8 > > mac_src_1_1;
    sc_signal< sc_int< 8 > > mac_src_1_2;
    sc_signal< sc_int< 8 > > mac_src_1_3;
    sc_signal< sc_int< 8 > > mac_src_1_4;
    sc_signal< sc_int< 8 > > mac_src_1_5;
    sc_signal< sc_int< 8 > > mac_src_1_6;
    sc_signal< sc_int< 8 > > mac_src_1_7;
    sc_signal< sc_int< 8 > > mac_src_1_8;
    sc_signal< sc_int< 8 > > mac_src_1_9;
    sc_signal< sc_int< 8 > > mac_src_1_10;
    sc_signal< sc_int< 8 > > mac_src_1_11;
    sc_signal< sc_int< 8 > > mac_src_1_12;
    sc_signal< sc_int< 8 > > mac_src_1_13;
    sc_signal< sc_int< 8 > > mac_src_1_14;
    sc_signal< sc_int< 8 > > mac_src_1_15;
    sc_signal< sc_int< 8 > > mac_src_1_16;
    sc_signal< sc_int< 8 > > mac_src_1_17;
    sc_signal< sc_int< 8 > > mac_src_1_18;
    sc_signal< sc_int< 8 > > mac_src_1_19;
    sc_signal< sc_int< 8 > > mac_src_1_20;
    sc_signal< sc_int< 8 > > mac_src_1_21;
    sc_signal< sc_int< 8 > > mac_src_1_22;
    sc_signal< sc_int< 8 > > mac_src_1_23;
    sc_signal< sc_int< 8 > > mac_src_1_24;
    sc_signal< sc_int< 8 > > mac_src_1_25;
    sc_signal< sc_int< 8 > > mac_src_1_26;
    sc_signal< sc_int< 8 > > mac_src_1_27;
    sc_signal< sc_int< 8 > > mac_src_1_28;
    sc_signal< sc_int< 8 > > mac_src_1_29;
    sc_signal< sc_int< 8 > > mac_src_1_30;
    sc_signal< sc_int< 8 > > mac_src_1_31;

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };
	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(cache_wrapper);

    	cache_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("cache")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,cache_en("cache_en")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,addr_if_start("addr_if_start")
		  	,systolic_sel("systolic_sel")
		  	,feature_data("feature_data")
		  	,feature_share_en("feature_share_en")
		  	,feature_data_en("feature_data_en")
		  	,feature_data_sel("feature_data_sel")
		  	,weight_data("weight_data")
		  	,weight_data_en("weight_data_en")
		  	,mac_src_0_s0()
		  	,mac_src_0_s1()
		  	,mac_src_0_s2()
		  	,mac_src_0_s3()
		  	,mac_src_0_s4()
		  	,mac_src_0_s5()
		  	,mac_src_0_s6()
		  	,mac_src_1()
		  	,mac_src_valid("mac_src_valid")
		  	,mac_clear("mac_clear")
		  	

		  ,cache0(0), cache_cosim0(0), cache_rtl0(0), cache_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~cache_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( cache_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( cache_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( cache_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( cache_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( cache_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	cache* behModule() { return cache0; }
	cache_cosim* cosimModule() { return cache_cosim0; }
	cache_cycsim* cycsimModule() { return cache_cycsim0; }
	cache_rtl* rtlModule() { return cache_rtl0; }

	cache* cache0;
	cache_cosim* cache_cosim0;
	cache_rtl* cache_rtl0;
	cache_cycsim* cache_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(cache_wrapper_r)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > cache_en;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< bool > addr_if_start;
	sc_in< sc_uint< 8 > > systolic_sel;
	sc_in< sc_biguint< 320 > > feature_data;
	sc_in< bool > feature_share_en;
	sc_in< bool > feature_data_en;
	sc_in< sc_uint< 16 > > feature_data_sel;
	sc_in< sc_biguint< 256 > > weight_data;
	sc_in< bool > weight_data_en;
	sc_out< sc_int< 10 > > mac_src_0_s0_0;
	sc_out< sc_int< 10 > > mac_src_0_s0_1;
	sc_out< sc_int< 10 > > mac_src_0_s0_2;
	sc_out< sc_int< 10 > > mac_src_0_s0_3;
	sc_out< sc_int< 10 > > mac_src_0_s0_4;
	sc_out< sc_int< 10 > > mac_src_0_s0_5;
	sc_out< sc_int< 10 > > mac_src_0_s0_6;
	sc_out< sc_int< 10 > > mac_src_0_s0_7;
	sc_out< sc_int< 10 > > mac_src_0_s0_8;
	sc_out< sc_int< 10 > > mac_src_0_s0_9;
	sc_out< sc_int< 10 > > mac_src_0_s0_10;
	sc_out< sc_int< 10 > > mac_src_0_s0_11;
	sc_out< sc_int< 10 > > mac_src_0_s0_12;
	sc_out< sc_int< 10 > > mac_src_0_s0_13;
	sc_out< sc_int< 10 > > mac_src_0_s0_14;
	sc_out< sc_int< 10 > > mac_src_0_s0_15;
	sc_out< sc_int< 10 > > mac_src_0_s0_16;
	sc_out< sc_int< 10 > > mac_src_0_s0_17;
	sc_out< sc_int< 10 > > mac_src_0_s0_18;
	sc_out< sc_int< 10 > > mac_src_0_s0_19;
	sc_out< sc_int< 10 > > mac_src_0_s0_20;
	sc_out< sc_int< 10 > > mac_src_0_s0_21;
	sc_out< sc_int< 10 > > mac_src_0_s0_22;
	sc_out< sc_int< 10 > > mac_src_0_s0_23;
	sc_out< sc_int< 10 > > mac_src_0_s0_24;
	sc_out< sc_int< 10 > > mac_src_0_s0_25;
	sc_out< sc_int< 10 > > mac_src_0_s0_26;
	sc_out< sc_int< 10 > > mac_src_0_s0_27;
	sc_out< sc_int< 10 > > mac_src_0_s0_28;
	sc_out< sc_int< 10 > > mac_src_0_s0_29;
	sc_out< sc_int< 10 > > mac_src_0_s0_30;
	sc_out< sc_int< 10 > > mac_src_0_s0_31;
	sc_out< sc_int< 10 > > mac_src_0_s1_0;
	sc_out< sc_int< 10 > > mac_src_0_s1_1;
	sc_out< sc_int< 10 > > mac_src_0_s1_2;
	sc_out< sc_int< 10 > > mac_src_0_s1_3;
	sc_out< sc_int< 10 > > mac_src_0_s1_4;
	sc_out< sc_int< 10 > > mac_src_0_s1_5;
	sc_out< sc_int< 10 > > mac_src_0_s1_6;
	sc_out< sc_int< 10 > > mac_src_0_s1_7;
	sc_out< sc_int< 10 > > mac_src_0_s1_8;
	sc_out< sc_int< 10 > > mac_src_0_s1_9;
	sc_out< sc_int< 10 > > mac_src_0_s1_10;
	sc_out< sc_int< 10 > > mac_src_0_s1_11;
	sc_out< sc_int< 10 > > mac_src_0_s1_12;
	sc_out< sc_int< 10 > > mac_src_0_s1_13;
	sc_out< sc_int< 10 > > mac_src_0_s1_14;
	sc_out< sc_int< 10 > > mac_src_0_s1_15;
	sc_out< sc_int< 10 > > mac_src_0_s1_16;
	sc_out< sc_int< 10 > > mac_src_0_s1_17;
	sc_out< sc_int< 10 > > mac_src_0_s1_18;
	sc_out< sc_int< 10 > > mac_src_0_s1_19;
	sc_out< sc_int< 10 > > mac_src_0_s1_20;
	sc_out< sc_int< 10 > > mac_src_0_s1_21;
	sc_out< sc_int< 10 > > mac_src_0_s1_22;
	sc_out< sc_int< 10 > > mac_src_0_s1_23;
	sc_out< sc_int< 10 > > mac_src_0_s1_24;
	sc_out< sc_int< 10 > > mac_src_0_s1_25;
	sc_out< sc_int< 10 > > mac_src_0_s1_26;
	sc_out< sc_int< 10 > > mac_src_0_s1_27;
	sc_out< sc_int< 10 > > mac_src_0_s1_28;
	sc_out< sc_int< 10 > > mac_src_0_s1_29;
	sc_out< sc_int< 10 > > mac_src_0_s1_30;
	sc_out< sc_int< 10 > > mac_src_0_s1_31;
	sc_out< sc_int< 10 > > mac_src_0_s2_0;
	sc_out< sc_int< 10 > > mac_src_0_s2_1;
	sc_out< sc_int< 10 > > mac_src_0_s2_2;
	sc_out< sc_int< 10 > > mac_src_0_s2_3;
	sc_out< sc_int< 10 > > mac_src_0_s2_4;
	sc_out< sc_int< 10 > > mac_src_0_s2_5;
	sc_out< sc_int< 10 > > mac_src_0_s2_6;
	sc_out< sc_int< 10 > > mac_src_0_s2_7;
	sc_out< sc_int< 10 > > mac_src_0_s2_8;
	sc_out< sc_int< 10 > > mac_src_0_s2_9;
	sc_out< sc_int< 10 > > mac_src_0_s2_10;
	sc_out< sc_int< 10 > > mac_src_0_s2_11;
	sc_out< sc_int< 10 > > mac_src_0_s2_12;
	sc_out< sc_int< 10 > > mac_src_0_s2_13;
	sc_out< sc_int< 10 > > mac_src_0_s2_14;
	sc_out< sc_int< 10 > > mac_src_0_s2_15;
	sc_out< sc_int< 10 > > mac_src_0_s2_16;
	sc_out< sc_int< 10 > > mac_src_0_s2_17;
	sc_out< sc_int< 10 > > mac_src_0_s2_18;
	sc_out< sc_int< 10 > > mac_src_0_s2_19;
	sc_out< sc_int< 10 > > mac_src_0_s2_20;
	sc_out< sc_int< 10 > > mac_src_0_s2_21;
	sc_out< sc_int< 10 > > mac_src_0_s2_22;
	sc_out< sc_int< 10 > > mac_src_0_s2_23;
	sc_out< sc_int< 10 > > mac_src_0_s2_24;
	sc_out< sc_int< 10 > > mac_src_0_s2_25;
	sc_out< sc_int< 10 > > mac_src_0_s2_26;
	sc_out< sc_int< 10 > > mac_src_0_s2_27;
	sc_out< sc_int< 10 > > mac_src_0_s2_28;
	sc_out< sc_int< 10 > > mac_src_0_s2_29;
	sc_out< sc_int< 10 > > mac_src_0_s2_30;
	sc_out< sc_int< 10 > > mac_src_0_s2_31;
	sc_out< sc_int< 10 > > mac_src_0_s3_0;
	sc_out< sc_int< 10 > > mac_src_0_s3_1;
	sc_out< sc_int< 10 > > mac_src_0_s3_2;
	sc_out< sc_int< 10 > > mac_src_0_s3_3;
	sc_out< sc_int< 10 > > mac_src_0_s3_4;
	sc_out< sc_int< 10 > > mac_src_0_s3_5;
	sc_out< sc_int< 10 > > mac_src_0_s3_6;
	sc_out< sc_int< 10 > > mac_src_0_s3_7;
	sc_out< sc_int< 10 > > mac_src_0_s3_8;
	sc_out< sc_int< 10 > > mac_src_0_s3_9;
	sc_out< sc_int< 10 > > mac_src_0_s3_10;
	sc_out< sc_int< 10 > > mac_src_0_s3_11;
	sc_out< sc_int< 10 > > mac_src_0_s3_12;
	sc_out< sc_int< 10 > > mac_src_0_s3_13;
	sc_out< sc_int< 10 > > mac_src_0_s3_14;
	sc_out< sc_int< 10 > > mac_src_0_s3_15;
	sc_out< sc_int< 10 > > mac_src_0_s3_16;
	sc_out< sc_int< 10 > > mac_src_0_s3_17;
	sc_out< sc_int< 10 > > mac_src_0_s3_18;
	sc_out< sc_int< 10 > > mac_src_0_s3_19;
	sc_out< sc_int< 10 > > mac_src_0_s3_20;
	sc_out< sc_int< 10 > > mac_src_0_s3_21;
	sc_out< sc_int< 10 > > mac_src_0_s3_22;
	sc_out< sc_int< 10 > > mac_src_0_s3_23;
	sc_out< sc_int< 10 > > mac_src_0_s3_24;
	sc_out< sc_int< 10 > > mac_src_0_s3_25;
	sc_out< sc_int< 10 > > mac_src_0_s3_26;
	sc_out< sc_int< 10 > > mac_src_0_s3_27;
	sc_out< sc_int< 10 > > mac_src_0_s3_28;
	sc_out< sc_int< 10 > > mac_src_0_s3_29;
	sc_out< sc_int< 10 > > mac_src_0_s3_30;
	sc_out< sc_int< 10 > > mac_src_0_s3_31;
	sc_out< sc_int< 10 > > mac_src_0_s4_0;
	sc_out< sc_int< 10 > > mac_src_0_s4_1;
	sc_out< sc_int< 10 > > mac_src_0_s4_2;
	sc_out< sc_int< 10 > > mac_src_0_s4_3;
	sc_out< sc_int< 10 > > mac_src_0_s4_4;
	sc_out< sc_int< 10 > > mac_src_0_s4_5;
	sc_out< sc_int< 10 > > mac_src_0_s4_6;
	sc_out< sc_int< 10 > > mac_src_0_s4_7;
	sc_out< sc_int< 10 > > mac_src_0_s4_8;
	sc_out< sc_int< 10 > > mac_src_0_s4_9;
	sc_out< sc_int< 10 > > mac_src_0_s4_10;
	sc_out< sc_int< 10 > > mac_src_0_s4_11;
	sc_out< sc_int< 10 > > mac_src_0_s4_12;
	sc_out< sc_int< 10 > > mac_src_0_s4_13;
	sc_out< sc_int< 10 > > mac_src_0_s4_14;
	sc_out< sc_int< 10 > > mac_src_0_s4_15;
	sc_out< sc_int< 10 > > mac_src_0_s4_16;
	sc_out< sc_int< 10 > > mac_src_0_s4_17;
	sc_out< sc_int< 10 > > mac_src_0_s4_18;
	sc_out< sc_int< 10 > > mac_src_0_s4_19;
	sc_out< sc_int< 10 > > mac_src_0_s4_20;
	sc_out< sc_int< 10 > > mac_src_0_s4_21;
	sc_out< sc_int< 10 > > mac_src_0_s4_22;
	sc_out< sc_int< 10 > > mac_src_0_s4_23;
	sc_out< sc_int< 10 > > mac_src_0_s4_24;
	sc_out< sc_int< 10 > > mac_src_0_s4_25;
	sc_out< sc_int< 10 > > mac_src_0_s4_26;
	sc_out< sc_int< 10 > > mac_src_0_s4_27;
	sc_out< sc_int< 10 > > mac_src_0_s4_28;
	sc_out< sc_int< 10 > > mac_src_0_s4_29;
	sc_out< sc_int< 10 > > mac_src_0_s4_30;
	sc_out< sc_int< 10 > > mac_src_0_s4_31;
	sc_out< sc_int< 10 > > mac_src_0_s5_0;
	sc_out< sc_int< 10 > > mac_src_0_s5_1;
	sc_out< sc_int< 10 > > mac_src_0_s5_2;
	sc_out< sc_int< 10 > > mac_src_0_s5_3;
	sc_out< sc_int< 10 > > mac_src_0_s5_4;
	sc_out< sc_int< 10 > > mac_src_0_s5_5;
	sc_out< sc_int< 10 > > mac_src_0_s5_6;
	sc_out< sc_int< 10 > > mac_src_0_s5_7;
	sc_out< sc_int< 10 > > mac_src_0_s5_8;
	sc_out< sc_int< 10 > > mac_src_0_s5_9;
	sc_out< sc_int< 10 > > mac_src_0_s5_10;
	sc_out< sc_int< 10 > > mac_src_0_s5_11;
	sc_out< sc_int< 10 > > mac_src_0_s5_12;
	sc_out< sc_int< 10 > > mac_src_0_s5_13;
	sc_out< sc_int< 10 > > mac_src_0_s5_14;
	sc_out< sc_int< 10 > > mac_src_0_s5_15;
	sc_out< sc_int< 10 > > mac_src_0_s5_16;
	sc_out< sc_int< 10 > > mac_src_0_s5_17;
	sc_out< sc_int< 10 > > mac_src_0_s5_18;
	sc_out< sc_int< 10 > > mac_src_0_s5_19;
	sc_out< sc_int< 10 > > mac_src_0_s5_20;
	sc_out< sc_int< 10 > > mac_src_0_s5_21;
	sc_out< sc_int< 10 > > mac_src_0_s5_22;
	sc_out< sc_int< 10 > > mac_src_0_s5_23;
	sc_out< sc_int< 10 > > mac_src_0_s5_24;
	sc_out< sc_int< 10 > > mac_src_0_s5_25;
	sc_out< sc_int< 10 > > mac_src_0_s5_26;
	sc_out< sc_int< 10 > > mac_src_0_s5_27;
	sc_out< sc_int< 10 > > mac_src_0_s5_28;
	sc_out< sc_int< 10 > > mac_src_0_s5_29;
	sc_out< sc_int< 10 > > mac_src_0_s5_30;
	sc_out< sc_int< 10 > > mac_src_0_s5_31;
	sc_out< sc_int< 10 > > mac_src_0_s6_0;
	sc_out< sc_int< 10 > > mac_src_0_s6_1;
	sc_out< sc_int< 10 > > mac_src_0_s6_2;
	sc_out< sc_int< 10 > > mac_src_0_s6_3;
	sc_out< sc_int< 10 > > mac_src_0_s6_4;
	sc_out< sc_int< 10 > > mac_src_0_s6_5;
	sc_out< sc_int< 10 > > mac_src_0_s6_6;
	sc_out< sc_int< 10 > > mac_src_0_s6_7;
	sc_out< sc_int< 10 > > mac_src_0_s6_8;
	sc_out< sc_int< 10 > > mac_src_0_s6_9;
	sc_out< sc_int< 10 > > mac_src_0_s6_10;
	sc_out< sc_int< 10 > > mac_src_0_s6_11;
	sc_out< sc_int< 10 > > mac_src_0_s6_12;
	sc_out< sc_int< 10 > > mac_src_0_s6_13;
	sc_out< sc_int< 10 > > mac_src_0_s6_14;
	sc_out< sc_int< 10 > > mac_src_0_s6_15;
	sc_out< sc_int< 10 > > mac_src_0_s6_16;
	sc_out< sc_int< 10 > > mac_src_0_s6_17;
	sc_out< sc_int< 10 > > mac_src_0_s6_18;
	sc_out< sc_int< 10 > > mac_src_0_s6_19;
	sc_out< sc_int< 10 > > mac_src_0_s6_20;
	sc_out< sc_int< 10 > > mac_src_0_s6_21;
	sc_out< sc_int< 10 > > mac_src_0_s6_22;
	sc_out< sc_int< 10 > > mac_src_0_s6_23;
	sc_out< sc_int< 10 > > mac_src_0_s6_24;
	sc_out< sc_int< 10 > > mac_src_0_s6_25;
	sc_out< sc_int< 10 > > mac_src_0_s6_26;
	sc_out< sc_int< 10 > > mac_src_0_s6_27;
	sc_out< sc_int< 10 > > mac_src_0_s6_28;
	sc_out< sc_int< 10 > > mac_src_0_s6_29;
	sc_out< sc_int< 10 > > mac_src_0_s6_30;
	sc_out< sc_int< 10 > > mac_src_0_s6_31;
	sc_out< sc_int< 8 > > mac_src_1_0;
	sc_out< sc_int< 8 > > mac_src_1_1;
	sc_out< sc_int< 8 > > mac_src_1_2;
	sc_out< sc_int< 8 > > mac_src_1_3;
	sc_out< sc_int< 8 > > mac_src_1_4;
	sc_out< sc_int< 8 > > mac_src_1_5;
	sc_out< sc_int< 8 > > mac_src_1_6;
	sc_out< sc_int< 8 > > mac_src_1_7;
	sc_out< sc_int< 8 > > mac_src_1_8;
	sc_out< sc_int< 8 > > mac_src_1_9;
	sc_out< sc_int< 8 > > mac_src_1_10;
	sc_out< sc_int< 8 > > mac_src_1_11;
	sc_out< sc_int< 8 > > mac_src_1_12;
	sc_out< sc_int< 8 > > mac_src_1_13;
	sc_out< sc_int< 8 > > mac_src_1_14;
	sc_out< sc_int< 8 > > mac_src_1_15;
	sc_out< sc_int< 8 > > mac_src_1_16;
	sc_out< sc_int< 8 > > mac_src_1_17;
	sc_out< sc_int< 8 > > mac_src_1_18;
	sc_out< sc_int< 8 > > mac_src_1_19;
	sc_out< sc_int< 8 > > mac_src_1_20;
	sc_out< sc_int< 8 > > mac_src_1_21;
	sc_out< sc_int< 8 > > mac_src_1_22;
	sc_out< sc_int< 8 > > mac_src_1_23;
	sc_out< sc_int< 8 > > mac_src_1_24;
	sc_out< sc_int< 8 > > mac_src_1_25;
	sc_out< sc_int< 8 > > mac_src_1_26;
	sc_out< sc_int< 8 > > mac_src_1_27;
	sc_out< sc_int< 8 > > mac_src_1_28;
	sc_out< sc_int< 8 > > mac_src_1_29;
	sc_out< sc_int< 8 > > mac_src_1_30;
	sc_out< sc_int< 8 > > mac_src_1_31;
	sc_out< bool > mac_src_valid;
	sc_out< bool > mac_clear;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 10 > > mac_src_0_s0[32];
    sc_signal< sc_int< 10 > > mac_src_0_s1[32];
    sc_signal< sc_int< 10 > > mac_src_0_s2[32];
    sc_signal< sc_int< 10 > > mac_src_0_s3[32];
    sc_signal< sc_int< 10 > > mac_src_0_s4[32];
    sc_signal< sc_int< 10 > > mac_src_0_s5[32];
    sc_signal< sc_int< 10 > > mac_src_0_s6[32];
    sc_signal< sc_int< 8 > > mac_src_1[32];

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };

	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_mac_src_0_s0_0();
    void thread_mac_src_0_s0_1();
    void thread_mac_src_0_s0_2();
    void thread_mac_src_0_s0_3();
    void thread_mac_src_0_s0_4();
    void thread_mac_src_0_s0_5();
    void thread_mac_src_0_s0_6();
    void thread_mac_src_0_s0_7();
    void thread_mac_src_0_s0_8();
    void thread_mac_src_0_s0_9();
    void thread_mac_src_0_s0_10();
    void thread_mac_src_0_s0_11();
    void thread_mac_src_0_s0_12();
    void thread_mac_src_0_s0_13();
    void thread_mac_src_0_s0_14();
    void thread_mac_src_0_s0_15();
    void thread_mac_src_0_s0_16();
    void thread_mac_src_0_s0_17();
    void thread_mac_src_0_s0_18();
    void thread_mac_src_0_s0_19();
    void thread_mac_src_0_s0_20();
    void thread_mac_src_0_s0_21();
    void thread_mac_src_0_s0_22();
    void thread_mac_src_0_s0_23();
    void thread_mac_src_0_s0_24();
    void thread_mac_src_0_s0_25();
    void thread_mac_src_0_s0_26();
    void thread_mac_src_0_s0_27();
    void thread_mac_src_0_s0_28();
    void thread_mac_src_0_s0_29();
    void thread_mac_src_0_s0_30();
    void thread_mac_src_0_s0_31();
    void thread_mac_src_0_s1_0();
    void thread_mac_src_0_s1_1();
    void thread_mac_src_0_s1_2();
    void thread_mac_src_0_s1_3();
    void thread_mac_src_0_s1_4();
    void thread_mac_src_0_s1_5();
    void thread_mac_src_0_s1_6();
    void thread_mac_src_0_s1_7();
    void thread_mac_src_0_s1_8();
    void thread_mac_src_0_s1_9();
    void thread_mac_src_0_s1_10();
    void thread_mac_src_0_s1_11();
    void thread_mac_src_0_s1_12();
    void thread_mac_src_0_s1_13();
    void thread_mac_src_0_s1_14();
    void thread_mac_src_0_s1_15();
    void thread_mac_src_0_s1_16();
    void thread_mac_src_0_s1_17();
    void thread_mac_src_0_s1_18();
    void thread_mac_src_0_s1_19();
    void thread_mac_src_0_s1_20();
    void thread_mac_src_0_s1_21();
    void thread_mac_src_0_s1_22();
    void thread_mac_src_0_s1_23();
    void thread_mac_src_0_s1_24();
    void thread_mac_src_0_s1_25();
    void thread_mac_src_0_s1_26();
    void thread_mac_src_0_s1_27();
    void thread_mac_src_0_s1_28();
    void thread_mac_src_0_s1_29();
    void thread_mac_src_0_s1_30();
    void thread_mac_src_0_s1_31();
    void thread_mac_src_0_s2_0();
    void thread_mac_src_0_s2_1();
    void thread_mac_src_0_s2_2();
    void thread_mac_src_0_s2_3();
    void thread_mac_src_0_s2_4();
    void thread_mac_src_0_s2_5();
    void thread_mac_src_0_s2_6();
    void thread_mac_src_0_s2_7();
    void thread_mac_src_0_s2_8();
    void thread_mac_src_0_s2_9();
    void thread_mac_src_0_s2_10();
    void thread_mac_src_0_s2_11();
    void thread_mac_src_0_s2_12();
    void thread_mac_src_0_s2_13();
    void thread_mac_src_0_s2_14();
    void thread_mac_src_0_s2_15();
    void thread_mac_src_0_s2_16();
    void thread_mac_src_0_s2_17();
    void thread_mac_src_0_s2_18();
    void thread_mac_src_0_s2_19();
    void thread_mac_src_0_s2_20();
    void thread_mac_src_0_s2_21();
    void thread_mac_src_0_s2_22();
    void thread_mac_src_0_s2_23();
    void thread_mac_src_0_s2_24();
    void thread_mac_src_0_s2_25();
    void thread_mac_src_0_s2_26();
    void thread_mac_src_0_s2_27();
    void thread_mac_src_0_s2_28();
    void thread_mac_src_0_s2_29();
    void thread_mac_src_0_s2_30();
    void thread_mac_src_0_s2_31();
    void thread_mac_src_0_s3_0();
    void thread_mac_src_0_s3_1();
    void thread_mac_src_0_s3_2();
    void thread_mac_src_0_s3_3();
    void thread_mac_src_0_s3_4();
    void thread_mac_src_0_s3_5();
    void thread_mac_src_0_s3_6();
    void thread_mac_src_0_s3_7();
    void thread_mac_src_0_s3_8();
    void thread_mac_src_0_s3_9();
    void thread_mac_src_0_s3_10();
    void thread_mac_src_0_s3_11();
    void thread_mac_src_0_s3_12();
    void thread_mac_src_0_s3_13();
    void thread_mac_src_0_s3_14();
    void thread_mac_src_0_s3_15();
    void thread_mac_src_0_s3_16();
    void thread_mac_src_0_s3_17();
    void thread_mac_src_0_s3_18();
    void thread_mac_src_0_s3_19();
    void thread_mac_src_0_s3_20();
    void thread_mac_src_0_s3_21();
    void thread_mac_src_0_s3_22();
    void thread_mac_src_0_s3_23();
    void thread_mac_src_0_s3_24();
    void thread_mac_src_0_s3_25();
    void thread_mac_src_0_s3_26();
    void thread_mac_src_0_s3_27();
    void thread_mac_src_0_s3_28();
    void thread_mac_src_0_s3_29();
    void thread_mac_src_0_s3_30();
    void thread_mac_src_0_s3_31();
    void thread_mac_src_0_s4_0();
    void thread_mac_src_0_s4_1();
    void thread_mac_src_0_s4_2();
    void thread_mac_src_0_s4_3();
    void thread_mac_src_0_s4_4();
    void thread_mac_src_0_s4_5();
    void thread_mac_src_0_s4_6();
    void thread_mac_src_0_s4_7();
    void thread_mac_src_0_s4_8();
    void thread_mac_src_0_s4_9();
    void thread_mac_src_0_s4_10();
    void thread_mac_src_0_s4_11();
    void thread_mac_src_0_s4_12();
    void thread_mac_src_0_s4_13();
    void thread_mac_src_0_s4_14();
    void thread_mac_src_0_s4_15();
    void thread_mac_src_0_s4_16();
    void thread_mac_src_0_s4_17();
    void thread_mac_src_0_s4_18();
    void thread_mac_src_0_s4_19();
    void thread_mac_src_0_s4_20();
    void thread_mac_src_0_s4_21();
    void thread_mac_src_0_s4_22();
    void thread_mac_src_0_s4_23();
    void thread_mac_src_0_s4_24();
    void thread_mac_src_0_s4_25();
    void thread_mac_src_0_s4_26();
    void thread_mac_src_0_s4_27();
    void thread_mac_src_0_s4_28();
    void thread_mac_src_0_s4_29();
    void thread_mac_src_0_s4_30();
    void thread_mac_src_0_s4_31();
    void thread_mac_src_0_s5_0();
    void thread_mac_src_0_s5_1();
    void thread_mac_src_0_s5_2();
    void thread_mac_src_0_s5_3();
    void thread_mac_src_0_s5_4();
    void thread_mac_src_0_s5_5();
    void thread_mac_src_0_s5_6();
    void thread_mac_src_0_s5_7();
    void thread_mac_src_0_s5_8();
    void thread_mac_src_0_s5_9();
    void thread_mac_src_0_s5_10();
    void thread_mac_src_0_s5_11();
    void thread_mac_src_0_s5_12();
    void thread_mac_src_0_s5_13();
    void thread_mac_src_0_s5_14();
    void thread_mac_src_0_s5_15();
    void thread_mac_src_0_s5_16();
    void thread_mac_src_0_s5_17();
    void thread_mac_src_0_s5_18();
    void thread_mac_src_0_s5_19();
    void thread_mac_src_0_s5_20();
    void thread_mac_src_0_s5_21();
    void thread_mac_src_0_s5_22();
    void thread_mac_src_0_s5_23();
    void thread_mac_src_0_s5_24();
    void thread_mac_src_0_s5_25();
    void thread_mac_src_0_s5_26();
    void thread_mac_src_0_s5_27();
    void thread_mac_src_0_s5_28();
    void thread_mac_src_0_s5_29();
    void thread_mac_src_0_s5_30();
    void thread_mac_src_0_s5_31();
    void thread_mac_src_0_s6_0();
    void thread_mac_src_0_s6_1();
    void thread_mac_src_0_s6_2();
    void thread_mac_src_0_s6_3();
    void thread_mac_src_0_s6_4();
    void thread_mac_src_0_s6_5();
    void thread_mac_src_0_s6_6();
    void thread_mac_src_0_s6_7();
    void thread_mac_src_0_s6_8();
    void thread_mac_src_0_s6_9();
    void thread_mac_src_0_s6_10();
    void thread_mac_src_0_s6_11();
    void thread_mac_src_0_s6_12();
    void thread_mac_src_0_s6_13();
    void thread_mac_src_0_s6_14();
    void thread_mac_src_0_s6_15();
    void thread_mac_src_0_s6_16();
    void thread_mac_src_0_s6_17();
    void thread_mac_src_0_s6_18();
    void thread_mac_src_0_s6_19();
    void thread_mac_src_0_s6_20();
    void thread_mac_src_0_s6_21();
    void thread_mac_src_0_s6_22();
    void thread_mac_src_0_s6_23();
    void thread_mac_src_0_s6_24();
    void thread_mac_src_0_s6_25();
    void thread_mac_src_0_s6_26();
    void thread_mac_src_0_s6_27();
    void thread_mac_src_0_s6_28();
    void thread_mac_src_0_s6_29();
    void thread_mac_src_0_s6_30();
    void thread_mac_src_0_s6_31();
    void thread_mac_src_1_0();
    void thread_mac_src_1_1();
    void thread_mac_src_1_2();
    void thread_mac_src_1_3();
    void thread_mac_src_1_4();
    void thread_mac_src_1_5();
    void thread_mac_src_1_6();
    void thread_mac_src_1_7();
    void thread_mac_src_1_8();
    void thread_mac_src_1_9();
    void thread_mac_src_1_10();
    void thread_mac_src_1_11();
    void thread_mac_src_1_12();
    void thread_mac_src_1_13();
    void thread_mac_src_1_14();
    void thread_mac_src_1_15();
    void thread_mac_src_1_16();
    void thread_mac_src_1_17();
    void thread_mac_src_1_18();
    void thread_mac_src_1_19();
    void thread_mac_src_1_20();
    void thread_mac_src_1_21();
    void thread_mac_src_1_22();
    void thread_mac_src_1_23();
    void thread_mac_src_1_24();
    void thread_mac_src_1_25();
    void thread_mac_src_1_26();
    void thread_mac_src_1_27();
    void thread_mac_src_1_28();
    void thread_mac_src_1_29();
    void thread_mac_src_1_30();
    void thread_mac_src_1_31();


	SC_HAS_PROCESS(cache_wrapper_r);

	cache_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("cache")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,cache_en("cache_en")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,addr_if_start("addr_if_start")
		  	,systolic_sel("systolic_sel")
		  	,feature_data("feature_data")
		  	,feature_share_en("feature_share_en")
		  	,feature_data_en("feature_data_en")
		  	,feature_data_sel("feature_data_sel")
		  	,weight_data("weight_data")
		  	,weight_data_en("weight_data_en")
		  	,mac_src_0_s0_0("mac_src_0_s0_0"),
		  mac_src_0_s0_1("mac_src_0_s0_1"),
		  mac_src_0_s0_2("mac_src_0_s0_2"),
		  mac_src_0_s0_3("mac_src_0_s0_3"),
		  mac_src_0_s0_4("mac_src_0_s0_4"),
		  mac_src_0_s0_5("mac_src_0_s0_5"),
		  mac_src_0_s0_6("mac_src_0_s0_6"),
		  mac_src_0_s0_7("mac_src_0_s0_7"),
		  mac_src_0_s0_8("mac_src_0_s0_8"),
		  mac_src_0_s0_9("mac_src_0_s0_9"),
		  mac_src_0_s0_10("mac_src_0_s0_10"),
		  mac_src_0_s0_11("mac_src_0_s0_11"),
		  mac_src_0_s0_12("mac_src_0_s0_12"),
		  mac_src_0_s0_13("mac_src_0_s0_13"),
		  mac_src_0_s0_14("mac_src_0_s0_14"),
		  mac_src_0_s0_15("mac_src_0_s0_15"),
		  mac_src_0_s0_16("mac_src_0_s0_16"),
		  mac_src_0_s0_17("mac_src_0_s0_17"),
		  mac_src_0_s0_18("mac_src_0_s0_18"),
		  mac_src_0_s0_19("mac_src_0_s0_19"),
		  mac_src_0_s0_20("mac_src_0_s0_20"),
		  mac_src_0_s0_21("mac_src_0_s0_21"),
		  mac_src_0_s0_22("mac_src_0_s0_22"),
		  mac_src_0_s0_23("mac_src_0_s0_23"),
		  mac_src_0_s0_24("mac_src_0_s0_24"),
		  mac_src_0_s0_25("mac_src_0_s0_25"),
		  mac_src_0_s0_26("mac_src_0_s0_26"),
		  mac_src_0_s0_27("mac_src_0_s0_27"),
		  mac_src_0_s0_28("mac_src_0_s0_28"),
		  mac_src_0_s0_29("mac_src_0_s0_29"),
		  mac_src_0_s0_30("mac_src_0_s0_30"),
		  mac_src_0_s0_31("mac_src_0_s0_31")
		  	,mac_src_0_s1_0("mac_src_0_s1_0"),
		  mac_src_0_s1_1("mac_src_0_s1_1"),
		  mac_src_0_s1_2("mac_src_0_s1_2"),
		  mac_src_0_s1_3("mac_src_0_s1_3"),
		  mac_src_0_s1_4("mac_src_0_s1_4"),
		  mac_src_0_s1_5("mac_src_0_s1_5"),
		  mac_src_0_s1_6("mac_src_0_s1_6"),
		  mac_src_0_s1_7("mac_src_0_s1_7"),
		  mac_src_0_s1_8("mac_src_0_s1_8"),
		  mac_src_0_s1_9("mac_src_0_s1_9"),
		  mac_src_0_s1_10("mac_src_0_s1_10"),
		  mac_src_0_s1_11("mac_src_0_s1_11"),
		  mac_src_0_s1_12("mac_src_0_s1_12"),
		  mac_src_0_s1_13("mac_src_0_s1_13"),
		  mac_src_0_s1_14("mac_src_0_s1_14"),
		  mac_src_0_s1_15("mac_src_0_s1_15"),
		  mac_src_0_s1_16("mac_src_0_s1_16"),
		  mac_src_0_s1_17("mac_src_0_s1_17"),
		  mac_src_0_s1_18("mac_src_0_s1_18"),
		  mac_src_0_s1_19("mac_src_0_s1_19"),
		  mac_src_0_s1_20("mac_src_0_s1_20"),
		  mac_src_0_s1_21("mac_src_0_s1_21"),
		  mac_src_0_s1_22("mac_src_0_s1_22"),
		  mac_src_0_s1_23("mac_src_0_s1_23"),
		  mac_src_0_s1_24("mac_src_0_s1_24"),
		  mac_src_0_s1_25("mac_src_0_s1_25"),
		  mac_src_0_s1_26("mac_src_0_s1_26"),
		  mac_src_0_s1_27("mac_src_0_s1_27"),
		  mac_src_0_s1_28("mac_src_0_s1_28"),
		  mac_src_0_s1_29("mac_src_0_s1_29"),
		  mac_src_0_s1_30("mac_src_0_s1_30"),
		  mac_src_0_s1_31("mac_src_0_s1_31")
		  	,mac_src_0_s2_0("mac_src_0_s2_0"),
		  mac_src_0_s2_1("mac_src_0_s2_1"),
		  mac_src_0_s2_2("mac_src_0_s2_2"),
		  mac_src_0_s2_3("mac_src_0_s2_3"),
		  mac_src_0_s2_4("mac_src_0_s2_4"),
		  mac_src_0_s2_5("mac_src_0_s2_5"),
		  mac_src_0_s2_6("mac_src_0_s2_6"),
		  mac_src_0_s2_7("mac_src_0_s2_7"),
		  mac_src_0_s2_8("mac_src_0_s2_8"),
		  mac_src_0_s2_9("mac_src_0_s2_9"),
		  mac_src_0_s2_10("mac_src_0_s2_10"),
		  mac_src_0_s2_11("mac_src_0_s2_11"),
		  mac_src_0_s2_12("mac_src_0_s2_12"),
		  mac_src_0_s2_13("mac_src_0_s2_13"),
		  mac_src_0_s2_14("mac_src_0_s2_14"),
		  mac_src_0_s2_15("mac_src_0_s2_15"),
		  mac_src_0_s2_16("mac_src_0_s2_16"),
		  mac_src_0_s2_17("mac_src_0_s2_17"),
		  mac_src_0_s2_18("mac_src_0_s2_18"),
		  mac_src_0_s2_19("mac_src_0_s2_19"),
		  mac_src_0_s2_20("mac_src_0_s2_20"),
		  mac_src_0_s2_21("mac_src_0_s2_21"),
		  mac_src_0_s2_22("mac_src_0_s2_22"),
		  mac_src_0_s2_23("mac_src_0_s2_23"),
		  mac_src_0_s2_24("mac_src_0_s2_24"),
		  mac_src_0_s2_25("mac_src_0_s2_25"),
		  mac_src_0_s2_26("mac_src_0_s2_26"),
		  mac_src_0_s2_27("mac_src_0_s2_27"),
		  mac_src_0_s2_28("mac_src_0_s2_28"),
		  mac_src_0_s2_29("mac_src_0_s2_29"),
		  mac_src_0_s2_30("mac_src_0_s2_30"),
		  mac_src_0_s2_31("mac_src_0_s2_31")
		  	,mac_src_0_s3_0("mac_src_0_s3_0"),
		  mac_src_0_s3_1("mac_src_0_s3_1"),
		  mac_src_0_s3_2("mac_src_0_s3_2"),
		  mac_src_0_s3_3("mac_src_0_s3_3"),
		  mac_src_0_s3_4("mac_src_0_s3_4"),
		  mac_src_0_s3_5("mac_src_0_s3_5"),
		  mac_src_0_s3_6("mac_src_0_s3_6"),
		  mac_src_0_s3_7("mac_src_0_s3_7"),
		  mac_src_0_s3_8("mac_src_0_s3_8"),
		  mac_src_0_s3_9("mac_src_0_s3_9"),
		  mac_src_0_s3_10("mac_src_0_s3_10"),
		  mac_src_0_s3_11("mac_src_0_s3_11"),
		  mac_src_0_s3_12("mac_src_0_s3_12"),
		  mac_src_0_s3_13("mac_src_0_s3_13"),
		  mac_src_0_s3_14("mac_src_0_s3_14"),
		  mac_src_0_s3_15("mac_src_0_s3_15"),
		  mac_src_0_s3_16("mac_src_0_s3_16"),
		  mac_src_0_s3_17("mac_src_0_s3_17"),
		  mac_src_0_s3_18("mac_src_0_s3_18"),
		  mac_src_0_s3_19("mac_src_0_s3_19"),
		  mac_src_0_s3_20("mac_src_0_s3_20"),
		  mac_src_0_s3_21("mac_src_0_s3_21"),
		  mac_src_0_s3_22("mac_src_0_s3_22"),
		  mac_src_0_s3_23("mac_src_0_s3_23"),
		  mac_src_0_s3_24("mac_src_0_s3_24"),
		  mac_src_0_s3_25("mac_src_0_s3_25"),
		  mac_src_0_s3_26("mac_src_0_s3_26"),
		  mac_src_0_s3_27("mac_src_0_s3_27"),
		  mac_src_0_s3_28("mac_src_0_s3_28"),
		  mac_src_0_s3_29("mac_src_0_s3_29"),
		  mac_src_0_s3_30("mac_src_0_s3_30"),
		  mac_src_0_s3_31("mac_src_0_s3_31")
		  	,mac_src_0_s4_0("mac_src_0_s4_0"),
		  mac_src_0_s4_1("mac_src_0_s4_1"),
		  mac_src_0_s4_2("mac_src_0_s4_2"),
		  mac_src_0_s4_3("mac_src_0_s4_3"),
		  mac_src_0_s4_4("mac_src_0_s4_4"),
		  mac_src_0_s4_5("mac_src_0_s4_5"),
		  mac_src_0_s4_6("mac_src_0_s4_6"),
		  mac_src_0_s4_7("mac_src_0_s4_7"),
		  mac_src_0_s4_8("mac_src_0_s4_8"),
		  mac_src_0_s4_9("mac_src_0_s4_9"),
		  mac_src_0_s4_10("mac_src_0_s4_10"),
		  mac_src_0_s4_11("mac_src_0_s4_11"),
		  mac_src_0_s4_12("mac_src_0_s4_12"),
		  mac_src_0_s4_13("mac_src_0_s4_13"),
		  mac_src_0_s4_14("mac_src_0_s4_14"),
		  mac_src_0_s4_15("mac_src_0_s4_15"),
		  mac_src_0_s4_16("mac_src_0_s4_16"),
		  mac_src_0_s4_17("mac_src_0_s4_17"),
		  mac_src_0_s4_18("mac_src_0_s4_18"),
		  mac_src_0_s4_19("mac_src_0_s4_19"),
		  mac_src_0_s4_20("mac_src_0_s4_20"),
		  mac_src_0_s4_21("mac_src_0_s4_21"),
		  mac_src_0_s4_22("mac_src_0_s4_22"),
		  mac_src_0_s4_23("mac_src_0_s4_23"),
		  mac_src_0_s4_24("mac_src_0_s4_24"),
		  mac_src_0_s4_25("mac_src_0_s4_25"),
		  mac_src_0_s4_26("mac_src_0_s4_26"),
		  mac_src_0_s4_27("mac_src_0_s4_27"),
		  mac_src_0_s4_28("mac_src_0_s4_28"),
		  mac_src_0_s4_29("mac_src_0_s4_29"),
		  mac_src_0_s4_30("mac_src_0_s4_30"),
		  mac_src_0_s4_31("mac_src_0_s4_31")
		  	,mac_src_0_s5_0("mac_src_0_s5_0"),
		  mac_src_0_s5_1("mac_src_0_s5_1"),
		  mac_src_0_s5_2("mac_src_0_s5_2"),
		  mac_src_0_s5_3("mac_src_0_s5_3"),
		  mac_src_0_s5_4("mac_src_0_s5_4"),
		  mac_src_0_s5_5("mac_src_0_s5_5"),
		  mac_src_0_s5_6("mac_src_0_s5_6"),
		  mac_src_0_s5_7("mac_src_0_s5_7"),
		  mac_src_0_s5_8("mac_src_0_s5_8"),
		  mac_src_0_s5_9("mac_src_0_s5_9"),
		  mac_src_0_s5_10("mac_src_0_s5_10"),
		  mac_src_0_s5_11("mac_src_0_s5_11"),
		  mac_src_0_s5_12("mac_src_0_s5_12"),
		  mac_src_0_s5_13("mac_src_0_s5_13"),
		  mac_src_0_s5_14("mac_src_0_s5_14"),
		  mac_src_0_s5_15("mac_src_0_s5_15"),
		  mac_src_0_s5_16("mac_src_0_s5_16"),
		  mac_src_0_s5_17("mac_src_0_s5_17"),
		  mac_src_0_s5_18("mac_src_0_s5_18"),
		  mac_src_0_s5_19("mac_src_0_s5_19"),
		  mac_src_0_s5_20("mac_src_0_s5_20"),
		  mac_src_0_s5_21("mac_src_0_s5_21"),
		  mac_src_0_s5_22("mac_src_0_s5_22"),
		  mac_src_0_s5_23("mac_src_0_s5_23"),
		  mac_src_0_s5_24("mac_src_0_s5_24"),
		  mac_src_0_s5_25("mac_src_0_s5_25"),
		  mac_src_0_s5_26("mac_src_0_s5_26"),
		  mac_src_0_s5_27("mac_src_0_s5_27"),
		  mac_src_0_s5_28("mac_src_0_s5_28"),
		  mac_src_0_s5_29("mac_src_0_s5_29"),
		  mac_src_0_s5_30("mac_src_0_s5_30"),
		  mac_src_0_s5_31("mac_src_0_s5_31")
		  	,mac_src_0_s6_0("mac_src_0_s6_0"),
		  mac_src_0_s6_1("mac_src_0_s6_1"),
		  mac_src_0_s6_2("mac_src_0_s6_2"),
		  mac_src_0_s6_3("mac_src_0_s6_3"),
		  mac_src_0_s6_4("mac_src_0_s6_4"),
		  mac_src_0_s6_5("mac_src_0_s6_5"),
		  mac_src_0_s6_6("mac_src_0_s6_6"),
		  mac_src_0_s6_7("mac_src_0_s6_7"),
		  mac_src_0_s6_8("mac_src_0_s6_8"),
		  mac_src_0_s6_9("mac_src_0_s6_9"),
		  mac_src_0_s6_10("mac_src_0_s6_10"),
		  mac_src_0_s6_11("mac_src_0_s6_11"),
		  mac_src_0_s6_12("mac_src_0_s6_12"),
		  mac_src_0_s6_13("mac_src_0_s6_13"),
		  mac_src_0_s6_14("mac_src_0_s6_14"),
		  mac_src_0_s6_15("mac_src_0_s6_15"),
		  mac_src_0_s6_16("mac_src_0_s6_16"),
		  mac_src_0_s6_17("mac_src_0_s6_17"),
		  mac_src_0_s6_18("mac_src_0_s6_18"),
		  mac_src_0_s6_19("mac_src_0_s6_19"),
		  mac_src_0_s6_20("mac_src_0_s6_20"),
		  mac_src_0_s6_21("mac_src_0_s6_21"),
		  mac_src_0_s6_22("mac_src_0_s6_22"),
		  mac_src_0_s6_23("mac_src_0_s6_23"),
		  mac_src_0_s6_24("mac_src_0_s6_24"),
		  mac_src_0_s6_25("mac_src_0_s6_25"),
		  mac_src_0_s6_26("mac_src_0_s6_26"),
		  mac_src_0_s6_27("mac_src_0_s6_27"),
		  mac_src_0_s6_28("mac_src_0_s6_28"),
		  mac_src_0_s6_29("mac_src_0_s6_29"),
		  mac_src_0_s6_30("mac_src_0_s6_30"),
		  mac_src_0_s6_31("mac_src_0_s6_31")
		  	,mac_src_1_0("mac_src_1_0"),
		  mac_src_1_1("mac_src_1_1"),
		  mac_src_1_2("mac_src_1_2"),
		  mac_src_1_3("mac_src_1_3"),
		  mac_src_1_4("mac_src_1_4"),
		  mac_src_1_5("mac_src_1_5"),
		  mac_src_1_6("mac_src_1_6"),
		  mac_src_1_7("mac_src_1_7"),
		  mac_src_1_8("mac_src_1_8"),
		  mac_src_1_9("mac_src_1_9"),
		  mac_src_1_10("mac_src_1_10"),
		  mac_src_1_11("mac_src_1_11"),
		  mac_src_1_12("mac_src_1_12"),
		  mac_src_1_13("mac_src_1_13"),
		  mac_src_1_14("mac_src_1_14"),
		  mac_src_1_15("mac_src_1_15"),
		  mac_src_1_16("mac_src_1_16"),
		  mac_src_1_17("mac_src_1_17"),
		  mac_src_1_18("mac_src_1_18"),
		  mac_src_1_19("mac_src_1_19"),
		  mac_src_1_20("mac_src_1_20"),
		  mac_src_1_21("mac_src_1_21"),
		  mac_src_1_22("mac_src_1_22"),
		  mac_src_1_23("mac_src_1_23"),
		  mac_src_1_24("mac_src_1_24"),
		  mac_src_1_25("mac_src_1_25"),
		  mac_src_1_26("mac_src_1_26"),
		  mac_src_1_27("mac_src_1_27"),
		  mac_src_1_28("mac_src_1_28"),
		  mac_src_1_29("mac_src_1_29"),
		  mac_src_1_30("mac_src_1_30"),
		  mac_src_1_31("mac_src_1_31")
		  	,mac_src_valid("mac_src_valid")
		  	,mac_clear("mac_clear")
		  	

		  ,cache0(0), cache_cosim0(0), cache_rtl0(0), cache_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~cache_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( cache_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( cache_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( cache_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( cache_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( cache_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	cache* behModule() { return cache0; }
	cache_cosim* cosimModule() { return cache_cosim0; }
	cache_cycsim* cycsimModule() { return cache_cycsim0; }
	cache_rtl* rtlModule() { return cache_rtl0; }

protected:
	cache* cache0;
	cache_cosim* cache_cosim0;
	cache_rtl* cache_rtl0;
	cache_cycsim* cache_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
