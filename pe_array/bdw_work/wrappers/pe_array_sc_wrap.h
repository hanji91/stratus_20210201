/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _PE_ARRAY_SC_WRAP_INCLUDED_
#define _PE_ARRAY_SC_WRAP_INCLUDED_

#include <systemc.h>

struct pe_array;


// Declaration of wrapper with BEH level ports

SC_MODULE(pe_array_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_vld;
	sc_in< bool > clear;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 8 > > mac_shift_len;
	sc_in< sc_int< 10 > > src_0_s0[32];
	sc_in< sc_int< 10 > > src_0_s1[32];
	sc_in< sc_int< 10 > > src_0_s2[32];
	sc_in< sc_int< 10 > > src_0_s3[32];
	sc_in< sc_int< 10 > > src_0_s4[32];
	sc_in< sc_int< 10 > > src_0_s5[32];
	sc_in< sc_int< 10 > > src_0_s6[32];
	sc_in< sc_int< 8 > > src_1[32];
	sc_out< sc_int< 32 > > pe_data[32];
	sc_out< bool > pe_data_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_int< 10 > > src_0_s0_0;
    sc_signal< sc_int< 10 > > src_0_s0_1;
    sc_signal< sc_int< 10 > > src_0_s0_2;
    sc_signal< sc_int< 10 > > src_0_s0_3;
    sc_signal< sc_int< 10 > > src_0_s0_4;
    sc_signal< sc_int< 10 > > src_0_s0_5;
    sc_signal< sc_int< 10 > > src_0_s0_6;
    sc_signal< sc_int< 10 > > src_0_s0_7;
    sc_signal< sc_int< 10 > > src_0_s0_8;
    sc_signal< sc_int< 10 > > src_0_s0_9;
    sc_signal< sc_int< 10 > > src_0_s0_10;
    sc_signal< sc_int< 10 > > src_0_s0_11;
    sc_signal< sc_int< 10 > > src_0_s0_12;
    sc_signal< sc_int< 10 > > src_0_s0_13;
    sc_signal< sc_int< 10 > > src_0_s0_14;
    sc_signal< sc_int< 10 > > src_0_s0_15;
    sc_signal< sc_int< 10 > > src_0_s0_16;
    sc_signal< sc_int< 10 > > src_0_s0_17;
    sc_signal< sc_int< 10 > > src_0_s0_18;
    sc_signal< sc_int< 10 > > src_0_s0_19;
    sc_signal< sc_int< 10 > > src_0_s0_20;
    sc_signal< sc_int< 10 > > src_0_s0_21;
    sc_signal< sc_int< 10 > > src_0_s0_22;
    sc_signal< sc_int< 10 > > src_0_s0_23;
    sc_signal< sc_int< 10 > > src_0_s0_24;
    sc_signal< sc_int< 10 > > src_0_s0_25;
    sc_signal< sc_int< 10 > > src_0_s0_26;
    sc_signal< sc_int< 10 > > src_0_s0_27;
    sc_signal< sc_int< 10 > > src_0_s0_28;
    sc_signal< sc_int< 10 > > src_0_s0_29;
    sc_signal< sc_int< 10 > > src_0_s0_30;
    sc_signal< sc_int< 10 > > src_0_s0_31;
    sc_signal< sc_int< 10 > > src_0_s1_0;
    sc_signal< sc_int< 10 > > src_0_s1_1;
    sc_signal< sc_int< 10 > > src_0_s1_2;
    sc_signal< sc_int< 10 > > src_0_s1_3;
    sc_signal< sc_int< 10 > > src_0_s1_4;
    sc_signal< sc_int< 10 > > src_0_s1_5;
    sc_signal< sc_int< 10 > > src_0_s1_6;
    sc_signal< sc_int< 10 > > src_0_s1_7;
    sc_signal< sc_int< 10 > > src_0_s1_8;
    sc_signal< sc_int< 10 > > src_0_s1_9;
    sc_signal< sc_int< 10 > > src_0_s1_10;
    sc_signal< sc_int< 10 > > src_0_s1_11;
    sc_signal< sc_int< 10 > > src_0_s1_12;
    sc_signal< sc_int< 10 > > src_0_s1_13;
    sc_signal< sc_int< 10 > > src_0_s1_14;
    sc_signal< sc_int< 10 > > src_0_s1_15;
    sc_signal< sc_int< 10 > > src_0_s1_16;
    sc_signal< sc_int< 10 > > src_0_s1_17;
    sc_signal< sc_int< 10 > > src_0_s1_18;
    sc_signal< sc_int< 10 > > src_0_s1_19;
    sc_signal< sc_int< 10 > > src_0_s1_20;
    sc_signal< sc_int< 10 > > src_0_s1_21;
    sc_signal< sc_int< 10 > > src_0_s1_22;
    sc_signal< sc_int< 10 > > src_0_s1_23;
    sc_signal< sc_int< 10 > > src_0_s1_24;
    sc_signal< sc_int< 10 > > src_0_s1_25;
    sc_signal< sc_int< 10 > > src_0_s1_26;
    sc_signal< sc_int< 10 > > src_0_s1_27;
    sc_signal< sc_int< 10 > > src_0_s1_28;
    sc_signal< sc_int< 10 > > src_0_s1_29;
    sc_signal< sc_int< 10 > > src_0_s1_30;
    sc_signal< sc_int< 10 > > src_0_s1_31;
    sc_signal< sc_int< 10 > > src_0_s2_0;
    sc_signal< sc_int< 10 > > src_0_s2_1;
    sc_signal< sc_int< 10 > > src_0_s2_2;
    sc_signal< sc_int< 10 > > src_0_s2_3;
    sc_signal< sc_int< 10 > > src_0_s2_4;
    sc_signal< sc_int< 10 > > src_0_s2_5;
    sc_signal< sc_int< 10 > > src_0_s2_6;
    sc_signal< sc_int< 10 > > src_0_s2_7;
    sc_signal< sc_int< 10 > > src_0_s2_8;
    sc_signal< sc_int< 10 > > src_0_s2_9;
    sc_signal< sc_int< 10 > > src_0_s2_10;
    sc_signal< sc_int< 10 > > src_0_s2_11;
    sc_signal< sc_int< 10 > > src_0_s2_12;
    sc_signal< sc_int< 10 > > src_0_s2_13;
    sc_signal< sc_int< 10 > > src_0_s2_14;
    sc_signal< sc_int< 10 > > src_0_s2_15;
    sc_signal< sc_int< 10 > > src_0_s2_16;
    sc_signal< sc_int< 10 > > src_0_s2_17;
    sc_signal< sc_int< 10 > > src_0_s2_18;
    sc_signal< sc_int< 10 > > src_0_s2_19;
    sc_signal< sc_int< 10 > > src_0_s2_20;
    sc_signal< sc_int< 10 > > src_0_s2_21;
    sc_signal< sc_int< 10 > > src_0_s2_22;
    sc_signal< sc_int< 10 > > src_0_s2_23;
    sc_signal< sc_int< 10 > > src_0_s2_24;
    sc_signal< sc_int< 10 > > src_0_s2_25;
    sc_signal< sc_int< 10 > > src_0_s2_26;
    sc_signal< sc_int< 10 > > src_0_s2_27;
    sc_signal< sc_int< 10 > > src_0_s2_28;
    sc_signal< sc_int< 10 > > src_0_s2_29;
    sc_signal< sc_int< 10 > > src_0_s2_30;
    sc_signal< sc_int< 10 > > src_0_s2_31;
    sc_signal< sc_int< 10 > > src_0_s3_0;
    sc_signal< sc_int< 10 > > src_0_s3_1;
    sc_signal< sc_int< 10 > > src_0_s3_2;
    sc_signal< sc_int< 10 > > src_0_s3_3;
    sc_signal< sc_int< 10 > > src_0_s3_4;
    sc_signal< sc_int< 10 > > src_0_s3_5;
    sc_signal< sc_int< 10 > > src_0_s3_6;
    sc_signal< sc_int< 10 > > src_0_s3_7;
    sc_signal< sc_int< 10 > > src_0_s3_8;
    sc_signal< sc_int< 10 > > src_0_s3_9;
    sc_signal< sc_int< 10 > > src_0_s3_10;
    sc_signal< sc_int< 10 > > src_0_s3_11;
    sc_signal< sc_int< 10 > > src_0_s3_12;
    sc_signal< sc_int< 10 > > src_0_s3_13;
    sc_signal< sc_int< 10 > > src_0_s3_14;
    sc_signal< sc_int< 10 > > src_0_s3_15;
    sc_signal< sc_int< 10 > > src_0_s3_16;
    sc_signal< sc_int< 10 > > src_0_s3_17;
    sc_signal< sc_int< 10 > > src_0_s3_18;
    sc_signal< sc_int< 10 > > src_0_s3_19;
    sc_signal< sc_int< 10 > > src_0_s3_20;
    sc_signal< sc_int< 10 > > src_0_s3_21;
    sc_signal< sc_int< 10 > > src_0_s3_22;
    sc_signal< sc_int< 10 > > src_0_s3_23;
    sc_signal< sc_int< 10 > > src_0_s3_24;
    sc_signal< sc_int< 10 > > src_0_s3_25;
    sc_signal< sc_int< 10 > > src_0_s3_26;
    sc_signal< sc_int< 10 > > src_0_s3_27;
    sc_signal< sc_int< 10 > > src_0_s3_28;
    sc_signal< sc_int< 10 > > src_0_s3_29;
    sc_signal< sc_int< 10 > > src_0_s3_30;
    sc_signal< sc_int< 10 > > src_0_s3_31;
    sc_signal< sc_int< 10 > > src_0_s4_0;
    sc_signal< sc_int< 10 > > src_0_s4_1;
    sc_signal< sc_int< 10 > > src_0_s4_2;
    sc_signal< sc_int< 10 > > src_0_s4_3;
    sc_signal< sc_int< 10 > > src_0_s4_4;
    sc_signal< sc_int< 10 > > src_0_s4_5;
    sc_signal< sc_int< 10 > > src_0_s4_6;
    sc_signal< sc_int< 10 > > src_0_s4_7;
    sc_signal< sc_int< 10 > > src_0_s4_8;
    sc_signal< sc_int< 10 > > src_0_s4_9;
    sc_signal< sc_int< 10 > > src_0_s4_10;
    sc_signal< sc_int< 10 > > src_0_s4_11;
    sc_signal< sc_int< 10 > > src_0_s4_12;
    sc_signal< sc_int< 10 > > src_0_s4_13;
    sc_signal< sc_int< 10 > > src_0_s4_14;
    sc_signal< sc_int< 10 > > src_0_s4_15;
    sc_signal< sc_int< 10 > > src_0_s4_16;
    sc_signal< sc_int< 10 > > src_0_s4_17;
    sc_signal< sc_int< 10 > > src_0_s4_18;
    sc_signal< sc_int< 10 > > src_0_s4_19;
    sc_signal< sc_int< 10 > > src_0_s4_20;
    sc_signal< sc_int< 10 > > src_0_s4_21;
    sc_signal< sc_int< 10 > > src_0_s4_22;
    sc_signal< sc_int< 10 > > src_0_s4_23;
    sc_signal< sc_int< 10 > > src_0_s4_24;
    sc_signal< sc_int< 10 > > src_0_s4_25;
    sc_signal< sc_int< 10 > > src_0_s4_26;
    sc_signal< sc_int< 10 > > src_0_s4_27;
    sc_signal< sc_int< 10 > > src_0_s4_28;
    sc_signal< sc_int< 10 > > src_0_s4_29;
    sc_signal< sc_int< 10 > > src_0_s4_30;
    sc_signal< sc_int< 10 > > src_0_s4_31;
    sc_signal< sc_int< 10 > > src_0_s5_0;
    sc_signal< sc_int< 10 > > src_0_s5_1;
    sc_signal< sc_int< 10 > > src_0_s5_2;
    sc_signal< sc_int< 10 > > src_0_s5_3;
    sc_signal< sc_int< 10 > > src_0_s5_4;
    sc_signal< sc_int< 10 > > src_0_s5_5;
    sc_signal< sc_int< 10 > > src_0_s5_6;
    sc_signal< sc_int< 10 > > src_0_s5_7;
    sc_signal< sc_int< 10 > > src_0_s5_8;
    sc_signal< sc_int< 10 > > src_0_s5_9;
    sc_signal< sc_int< 10 > > src_0_s5_10;
    sc_signal< sc_int< 10 > > src_0_s5_11;
    sc_signal< sc_int< 10 > > src_0_s5_12;
    sc_signal< sc_int< 10 > > src_0_s5_13;
    sc_signal< sc_int< 10 > > src_0_s5_14;
    sc_signal< sc_int< 10 > > src_0_s5_15;
    sc_signal< sc_int< 10 > > src_0_s5_16;
    sc_signal< sc_int< 10 > > src_0_s5_17;
    sc_signal< sc_int< 10 > > src_0_s5_18;
    sc_signal< sc_int< 10 > > src_0_s5_19;
    sc_signal< sc_int< 10 > > src_0_s5_20;
    sc_signal< sc_int< 10 > > src_0_s5_21;
    sc_signal< sc_int< 10 > > src_0_s5_22;
    sc_signal< sc_int< 10 > > src_0_s5_23;
    sc_signal< sc_int< 10 > > src_0_s5_24;
    sc_signal< sc_int< 10 > > src_0_s5_25;
    sc_signal< sc_int< 10 > > src_0_s5_26;
    sc_signal< sc_int< 10 > > src_0_s5_27;
    sc_signal< sc_int< 10 > > src_0_s5_28;
    sc_signal< sc_int< 10 > > src_0_s5_29;
    sc_signal< sc_int< 10 > > src_0_s5_30;
    sc_signal< sc_int< 10 > > src_0_s5_31;
    sc_signal< sc_int< 10 > > src_0_s6_0;
    sc_signal< sc_int< 10 > > src_0_s6_1;
    sc_signal< sc_int< 10 > > src_0_s6_2;
    sc_signal< sc_int< 10 > > src_0_s6_3;
    sc_signal< sc_int< 10 > > src_0_s6_4;
    sc_signal< sc_int< 10 > > src_0_s6_5;
    sc_signal< sc_int< 10 > > src_0_s6_6;
    sc_signal< sc_int< 10 > > src_0_s6_7;
    sc_signal< sc_int< 10 > > src_0_s6_8;
    sc_signal< sc_int< 10 > > src_0_s6_9;
    sc_signal< sc_int< 10 > > src_0_s6_10;
    sc_signal< sc_int< 10 > > src_0_s6_11;
    sc_signal< sc_int< 10 > > src_0_s6_12;
    sc_signal< sc_int< 10 > > src_0_s6_13;
    sc_signal< sc_int< 10 > > src_0_s6_14;
    sc_signal< sc_int< 10 > > src_0_s6_15;
    sc_signal< sc_int< 10 > > src_0_s6_16;
    sc_signal< sc_int< 10 > > src_0_s6_17;
    sc_signal< sc_int< 10 > > src_0_s6_18;
    sc_signal< sc_int< 10 > > src_0_s6_19;
    sc_signal< sc_int< 10 > > src_0_s6_20;
    sc_signal< sc_int< 10 > > src_0_s6_21;
    sc_signal< sc_int< 10 > > src_0_s6_22;
    sc_signal< sc_int< 10 > > src_0_s6_23;
    sc_signal< sc_int< 10 > > src_0_s6_24;
    sc_signal< sc_int< 10 > > src_0_s6_25;
    sc_signal< sc_int< 10 > > src_0_s6_26;
    sc_signal< sc_int< 10 > > src_0_s6_27;
    sc_signal< sc_int< 10 > > src_0_s6_28;
    sc_signal< sc_int< 10 > > src_0_s6_29;
    sc_signal< sc_int< 10 > > src_0_s6_30;
    sc_signal< sc_int< 10 > > src_0_s6_31;
    sc_signal< sc_int< 8 > > src_1_0;
    sc_signal< sc_int< 8 > > src_1_1;
    sc_signal< sc_int< 8 > > src_1_2;
    sc_signal< sc_int< 8 > > src_1_3;
    sc_signal< sc_int< 8 > > src_1_4;
    sc_signal< sc_int< 8 > > src_1_5;
    sc_signal< sc_int< 8 > > src_1_6;
    sc_signal< sc_int< 8 > > src_1_7;
    sc_signal< sc_int< 8 > > src_1_8;
    sc_signal< sc_int< 8 > > src_1_9;
    sc_signal< sc_int< 8 > > src_1_10;
    sc_signal< sc_int< 8 > > src_1_11;
    sc_signal< sc_int< 8 > > src_1_12;
    sc_signal< sc_int< 8 > > src_1_13;
    sc_signal< sc_int< 8 > > src_1_14;
    sc_signal< sc_int< 8 > > src_1_15;
    sc_signal< sc_int< 8 > > src_1_16;
    sc_signal< sc_int< 8 > > src_1_17;
    sc_signal< sc_int< 8 > > src_1_18;
    sc_signal< sc_int< 8 > > src_1_19;
    sc_signal< sc_int< 8 > > src_1_20;
    sc_signal< sc_int< 8 > > src_1_21;
    sc_signal< sc_int< 8 > > src_1_22;
    sc_signal< sc_int< 8 > > src_1_23;
    sc_signal< sc_int< 8 > > src_1_24;
    sc_signal< sc_int< 8 > > src_1_25;
    sc_signal< sc_int< 8 > > src_1_26;
    sc_signal< sc_int< 8 > > src_1_27;
    sc_signal< sc_int< 8 > > src_1_28;
    sc_signal< sc_int< 8 > > src_1_29;
    sc_signal< sc_int< 8 > > src_1_30;
    sc_signal< sc_int< 8 > > src_1_31;
    sc_signal< sc_int< 32 > > pe_data_0;
    sc_signal< sc_int< 32 > > pe_data_1;
    sc_signal< sc_int< 32 > > pe_data_2;
    sc_signal< sc_int< 32 > > pe_data_3;
    sc_signal< sc_int< 32 > > pe_data_4;
    sc_signal< sc_int< 32 > > pe_data_5;
    sc_signal< sc_int< 32 > > pe_data_6;
    sc_signal< sc_int< 32 > > pe_data_7;
    sc_signal< sc_int< 32 > > pe_data_8;
    sc_signal< sc_int< 32 > > pe_data_9;
    sc_signal< sc_int< 32 > > pe_data_10;
    sc_signal< sc_int< 32 > > pe_data_11;
    sc_signal< sc_int< 32 > > pe_data_12;
    sc_signal< sc_int< 32 > > pe_data_13;
    sc_signal< sc_int< 32 > > pe_data_14;
    sc_signal< sc_int< 32 > > pe_data_15;
    sc_signal< sc_int< 32 > > pe_data_16;
    sc_signal< sc_int< 32 > > pe_data_17;
    sc_signal< sc_int< 32 > > pe_data_18;
    sc_signal< sc_int< 32 > > pe_data_19;
    sc_signal< sc_int< 32 > > pe_data_20;
    sc_signal< sc_int< 32 > > pe_data_21;
    sc_signal< sc_int< 32 > > pe_data_22;
    sc_signal< sc_int< 32 > > pe_data_23;
    sc_signal< sc_int< 32 > > pe_data_24;
    sc_signal< sc_int< 32 > > pe_data_25;
    sc_signal< sc_int< 32 > > pe_data_26;
    sc_signal< sc_int< 32 > > pe_data_27;
    sc_signal< sc_int< 32 > > pe_data_28;
    sc_signal< sc_int< 32 > > pe_data_29;
    sc_signal< sc_int< 32 > > pe_data_30;
    sc_signal< sc_int< 32 > > pe_data_31;

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(pe_array_wrapper);

    	pe_array_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("pe_array")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_vld("src_vld")
		  	,clear("clear")
		  	,init("init")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,mac_shift_len("mac_shift_len")
		  	,src_0_s0()
		  	,src_0_s1()
		  	,src_0_s2()
		  	,src_0_s3()
		  	,src_0_s4()
		  	,src_0_s5()
		  	,src_0_s6()
		  	,src_1()
		  	,pe_data()
		  	,pe_data_valid("pe_data_valid")
		  	

		  ,pe_array0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~pe_array_wrapper()
    {
        DeleteInstances();
    }

	pe_array* pe_array0;
};

#endif /* _PE_ARRAY_SC_WRAP_INCLUDED_ */
