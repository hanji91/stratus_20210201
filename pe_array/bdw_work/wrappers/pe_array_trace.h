	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( pe_array0 != NULL ) {
			esc_trace_signal( &pe_array0->clk, ( std::string(name()) + std::string( ".pe_array.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->rstn, ( std::string(name()) + std::string( ".pe_array.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->enable, ( std::string(name()) + std::string( ".pe_array.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld, ( std::string(name()) + std::string( ".pe_array.src_vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear, ( std::string(name()) + std::string( ".pe_array.clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->init, ( std::string(name()) + std::string( ".pe_array.init" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->systolic_en, ( std::string(name()) + std::string( ".pe_array.systolic_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->systolic_depth, ( std::string(name()) + std::string( ".pe_array.systolic_depth" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_shift_len, ( std::string(name()) + std::string( ".pe_array.mac_shift_len" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s0, ( std::string(name()) + std::string( ".pe_array.src_0_s0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s1, ( std::string(name()) + std::string( ".pe_array.src_0_s1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s2, ( std::string(name()) + std::string( ".pe_array.src_0_s2" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s3, ( std::string(name()) + std::string( ".pe_array.src_0_s3" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s4, ( std::string(name()) + std::string( ".pe_array.src_0_s4" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s5, ( std::string(name()) + std::string( ".pe_array.src_0_s5" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s6, ( std::string(name()) + std::string( ".pe_array.src_0_s6" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1, ( std::string(name()) + std::string( ".pe_array.src_1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->pe_data, ( std::string(name()) + std::string( ".pe_array.pe_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->pe_data_valid, ( std::string(name()) + std::string( ".pe_array.pe_data_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &pe_array0->check_overflow_en, ( std::string(name()) + std::string( ".pe_array.check_overflow_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->check_overflow_en_1d, ( std::string(name()) + std::string( ".pe_array.check_overflow_en_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_0, ( std::string(name()) + std::string( ".pe_array.mac_acc_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_1, ( std::string(name()) + std::string( ".pe_array.mac_acc_1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_2, ( std::string(name()) + std::string( ".pe_array.mac_acc_2" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_3, ( std::string(name()) + std::string( ".pe_array.mac_acc_3" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_4, ( std::string(name()) + std::string( ".pe_array.mac_acc_4" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_5, ( std::string(name()) + std::string( ".pe_array.mac_acc_5" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_acc_6, ( std::string(name()) + std::string( ".pe_array.mac_acc_6" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->mac_shifted_data, ( std::string(name()) + std::string( ".pe_array.mac_shifted_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_1d, ( std::string(name()) + std::string( ".pe_array.clear_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_2d, ( std::string(name()) + std::string( ".pe_array.clear_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_3d, ( std::string(name()) + std::string( ".pe_array.clear_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_4d, ( std::string(name()) + std::string( ".pe_array.clear_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_5d, ( std::string(name()) + std::string( ".pe_array.clear_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_6d, ( std::string(name()) + std::string( ".pe_array.clear_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_7d, ( std::string(name()) + std::string( ".pe_array.clear_7d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->clear_8d, ( std::string(name()) + std::string( ".pe_array.clear_8d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_1d, ( std::string(name()) + std::string( ".pe_array.src_1_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_2d, ( std::string(name()) + std::string( ".pe_array.src_1_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_3d, ( std::string(name()) + std::string( ".pe_array.src_1_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_4d, ( std::string(name()) + std::string( ".pe_array.src_1_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_5d, ( std::string(name()) + std::string( ".pe_array.src_1_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_6d, ( std::string(name()) + std::string( ".pe_array.src_1_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_1_7d, ( std::string(name()) + std::string( ".pe_array.src_1_7d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_1d, ( std::string(name()) + std::string( ".pe_array.src_vld_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_2d, ( std::string(name()) + std::string( ".pe_array.src_vld_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_3d, ( std::string(name()) + std::string( ".pe_array.src_vld_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_4d, ( std::string(name()) + std::string( ".pe_array.src_vld_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_5d, ( std::string(name()) + std::string( ".pe_array.src_vld_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_vld_6d, ( std::string(name()) + std::string( ".pe_array.src_vld_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &pe_array0->src_0_s0_1d, ( std::string(name()) + std::string( ".pe_array.src_0_s0_1d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( pe_array0 != NULL ) {
			esc_trace_signal( &pe_array0->clk, ( std::string(name()) + std::string( ".pe_array.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->rstn, ( std::string(name()) + std::string( ".pe_array.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->enable, ( std::string(name()) + std::string( ".pe_array.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld, ( std::string(name()) + std::string( ".pe_array.src_vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear, ( std::string(name()) + std::string( ".pe_array.clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->init, ( std::string(name()) + std::string( ".pe_array.init" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->systolic_en, ( std::string(name()) + std::string( ".pe_array.systolic_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->systolic_depth, ( std::string(name()) + std::string( ".pe_array.systolic_depth" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_shift_len, ( std::string(name()) + std::string( ".pe_array.mac_shift_len" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s0, ( std::string(name()) + std::string( ".pe_array.src_0_s0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s1, ( std::string(name()) + std::string( ".pe_array.src_0_s1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s2, ( std::string(name()) + std::string( ".pe_array.src_0_s2" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s3, ( std::string(name()) + std::string( ".pe_array.src_0_s3" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s4, ( std::string(name()) + std::string( ".pe_array.src_0_s4" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s5, ( std::string(name()) + std::string( ".pe_array.src_0_s5" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s6, ( std::string(name()) + std::string( ".pe_array.src_0_s6" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1, ( std::string(name()) + std::string( ".pe_array.src_1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->pe_data, ( std::string(name()) + std::string( ".pe_array.pe_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->pe_data_valid, ( std::string(name()) + std::string( ".pe_array.pe_data_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &pe_array0->check_overflow_en, ( std::string(name()) + std::string( ".pe_array.check_overflow_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->check_overflow_en_1d, ( std::string(name()) + std::string( ".pe_array.check_overflow_en_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_0, ( std::string(name()) + std::string( ".pe_array.mac_acc_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_1, ( std::string(name()) + std::string( ".pe_array.mac_acc_1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_2, ( std::string(name()) + std::string( ".pe_array.mac_acc_2" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_3, ( std::string(name()) + std::string( ".pe_array.mac_acc_3" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_4, ( std::string(name()) + std::string( ".pe_array.mac_acc_4" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_5, ( std::string(name()) + std::string( ".pe_array.mac_acc_5" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_acc_6, ( std::string(name()) + std::string( ".pe_array.mac_acc_6" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->mac_shifted_data, ( std::string(name()) + std::string( ".pe_array.mac_shifted_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_1d, ( std::string(name()) + std::string( ".pe_array.clear_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_2d, ( std::string(name()) + std::string( ".pe_array.clear_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_3d, ( std::string(name()) + std::string( ".pe_array.clear_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_4d, ( std::string(name()) + std::string( ".pe_array.clear_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_5d, ( std::string(name()) + std::string( ".pe_array.clear_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_6d, ( std::string(name()) + std::string( ".pe_array.clear_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_7d, ( std::string(name()) + std::string( ".pe_array.clear_7d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->clear_8d, ( std::string(name()) + std::string( ".pe_array.clear_8d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_1d, ( std::string(name()) + std::string( ".pe_array.src_1_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_2d, ( std::string(name()) + std::string( ".pe_array.src_1_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_3d, ( std::string(name()) + std::string( ".pe_array.src_1_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_4d, ( std::string(name()) + std::string( ".pe_array.src_1_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_5d, ( std::string(name()) + std::string( ".pe_array.src_1_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_6d, ( std::string(name()) + std::string( ".pe_array.src_1_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_1_7d, ( std::string(name()) + std::string( ".pe_array.src_1_7d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_1d, ( std::string(name()) + std::string( ".pe_array.src_vld_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_2d, ( std::string(name()) + std::string( ".pe_array.src_vld_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_3d, ( std::string(name()) + std::string( ".pe_array.src_vld_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_4d, ( std::string(name()) + std::string( ".pe_array.src_vld_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_5d, ( std::string(name()) + std::string( ".pe_array.src_vld_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_vld_6d, ( std::string(name()) + std::string( ".pe_array.src_vld_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &pe_array0->src_0_s0_1d, ( std::string(name()) + std::string( ".pe_array.src_0_s0_1d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
