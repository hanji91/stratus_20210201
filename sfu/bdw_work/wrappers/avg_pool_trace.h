	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( avg_pool0 != NULL ) {
			esc_trace_signal( &avg_pool0->clk, ( std::string(name()) + std::string( ".avg_pool.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->rstn, ( std::string(name()) + std::string( ".avg_pool.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->enable, ( std::string(name()) + std::string( ".avg_pool.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->init, ( std::string(name()) + std::string( ".avg_pool.init" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->in_data, ( std::string(name()) + std::string( ".avg_pool.in_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->in_data_valid, ( std::string(name()) + std::string( ".avg_pool.in_data_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->out_data, ( std::string(name()) + std::string( ".avg_pool.out_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->out_data_valid, ( std::string(name()) + std::string( ".avg_pool.out_data_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &avg_pool0->acc_data_enable, ( std::string(name()) + std::string( ".avg_pool.acc_data_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_data_clear, ( std::string(name()) + std::string( ".avg_pool.acc_data_clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_data, ( std::string(name()) + std::string( ".avg_pool.acc_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_cnt_enable, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_cnt_clear, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_cnt, ( std::string(name()) + std::string( ".avg_pool.acc_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_data_enable_1d, ( std::string(name()) + std::string( ".avg_pool.acc_data_enable_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_data_clear_1d, ( std::string(name()) + std::string( ".avg_pool.acc_data_clear_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_cnt_clear_1d, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &avg_pool0->acc_cnt_clear_2d, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear_2d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( avg_pool0 != NULL ) {
			esc_trace_signal( &avg_pool0->clk, ( std::string(name()) + std::string( ".avg_pool.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->rstn, ( std::string(name()) + std::string( ".avg_pool.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->enable, ( std::string(name()) + std::string( ".avg_pool.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->init, ( std::string(name()) + std::string( ".avg_pool.init" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->in_data, ( std::string(name()) + std::string( ".avg_pool.in_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->in_data_valid, ( std::string(name()) + std::string( ".avg_pool.in_data_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->out_data, ( std::string(name()) + std::string( ".avg_pool.out_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->out_data_valid, ( std::string(name()) + std::string( ".avg_pool.out_data_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &avg_pool0->acc_data_enable, ( std::string(name()) + std::string( ".avg_pool.acc_data_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_data_clear, ( std::string(name()) + std::string( ".avg_pool.acc_data_clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_data, ( std::string(name()) + std::string( ".avg_pool.acc_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_cnt_enable, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_cnt_clear, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_cnt, ( std::string(name()) + std::string( ".avg_pool.acc_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_data_enable_1d, ( std::string(name()) + std::string( ".avg_pool.acc_data_enable_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_data_clear_1d, ( std::string(name()) + std::string( ".avg_pool.acc_data_clear_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_cnt_clear_1d, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &avg_pool0->acc_cnt_clear_2d, ( std::string(name()) + std::string( ".avg_pool.acc_cnt_clear_2d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
