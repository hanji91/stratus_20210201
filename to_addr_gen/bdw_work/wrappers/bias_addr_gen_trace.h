	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( bias_addr_gen0 != NULL ) {
			esc_trace_signal( &bias_addr_gen0->clk, ( std::string(name()) + std::string( ".bias_addr_gen.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->rstn, ( std::string(name()) + std::string( ".bias_addr_gen.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->init, ( std::string(name()) + std::string( ".bias_addr_gen.init" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->out_feature_width, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_width" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->out_feature_height, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_height" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->out_feature_channel, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_channel" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->bias_read_base_addr, ( std::string(name()) + std::string( ".bias_addr_gen.bias_read_base_addr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->bias_en, ( std::string(name()) + std::string( ".bias_addr_gen.bias_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->start_rising, ( std::string(name()) + std::string( ".bias_addr_gen.start_rising" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->data_en, ( std::string(name()) + std::string( ".bias_addr_gen.data_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->bias_addr, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->bias_addr_valid, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bias_addr_gen0->ox_enable, ( std::string(name()) + std::string( ".bias_addr_gen.ox_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->ox_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.ox_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->ox_clear, ( std::string(name()) + std::string( ".bias_addr_gen.ox_clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->ox_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.ox_cnt_max" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->oy_enable, ( std::string(name()) + std::string( ".bias_addr_gen.oy_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->oy_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.oy_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->oy_clear, ( std::string(name()) + std::string( ".bias_addr_gen.oy_clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->oy_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.oy_cnt_max" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.of_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_clear, ( std::string(name()) + std::string( ".bias_addr_gen.of_clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_1d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_2d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_3d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_4d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_5d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_enable_6d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->of_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.of_cnt_max" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->relu_data, ( std::string(name()) + std::string( ".bias_addr_gen.relu_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->relu_valid, ( std::string(name()) + std::string( ".bias_addr_gen.relu_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_addr_gen0->bias_addr_update, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr_update" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( bias_addr_gen0 != NULL ) {
			esc_trace_signal( &bias_addr_gen0->clk, ( std::string(name()) + std::string( ".bias_addr_gen.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->rstn, ( std::string(name()) + std::string( ".bias_addr_gen.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->init, ( std::string(name()) + std::string( ".bias_addr_gen.init" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->out_feature_width, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_width" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->out_feature_height, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_height" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->out_feature_channel, ( std::string(name()) + std::string( ".bias_addr_gen.out_feature_channel" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->bias_read_base_addr, ( std::string(name()) + std::string( ".bias_addr_gen.bias_read_base_addr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->bias_en, ( std::string(name()) + std::string( ".bias_addr_gen.bias_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->start_rising, ( std::string(name()) + std::string( ".bias_addr_gen.start_rising" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->data_en, ( std::string(name()) + std::string( ".bias_addr_gen.data_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->bias_addr, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->bias_addr_valid, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bias_addr_gen0->ox_enable, ( std::string(name()) + std::string( ".bias_addr_gen.ox_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->ox_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.ox_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->ox_clear, ( std::string(name()) + std::string( ".bias_addr_gen.ox_clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->ox_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.ox_cnt_max" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->oy_enable, ( std::string(name()) + std::string( ".bias_addr_gen.oy_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->oy_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.oy_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->oy_clear, ( std::string(name()) + std::string( ".bias_addr_gen.oy_clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->oy_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.oy_cnt_max" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_cnt, ( std::string(name()) + std::string( ".bias_addr_gen.of_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_clear, ( std::string(name()) + std::string( ".bias_addr_gen.of_clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_1d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_2d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_3d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_4d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_5d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_enable_6d, ( std::string(name()) + std::string( ".bias_addr_gen.of_enable_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->of_cnt_max, ( std::string(name()) + std::string( ".bias_addr_gen.of_cnt_max" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->relu_data, ( std::string(name()) + std::string( ".bias_addr_gen.relu_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->relu_valid, ( std::string(name()) + std::string( ".bias_addr_gen.relu_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_addr_gen0->bias_addr_update, ( std::string(name()) + std::string( ".bias_addr_gen.bias_addr_update" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
