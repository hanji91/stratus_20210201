	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( finish_gen0 != NULL ) {
			esc_trace_signal( &finish_gen0->clk, ( std::string(name()) + std::string( ".finish_gen.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->rstn, ( std::string(name()) + std::string( ".finish_gen.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->enable, ( std::string(name()) + std::string( ".finish_gen.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->clear, ( std::string(name()) + std::string( ".finish_gen.clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->cnt_enable, ( std::string(name()) + std::string( ".finish_gen.cnt_enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->total_num, ( std::string(name()) + std::string( ".finish_gen.total_num" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->finish, ( std::string(name()) + std::string( ".finish_gen.finish" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &finish_gen0->cnt, ( std::string(name()) + std::string( ".finish_gen.cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->last_en, ( std::string(name()) + std::string( ".finish_gen.last_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &finish_gen0->internal_cnt, ( std::string(name()) + std::string( ".finish_gen.internal_cnt" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( finish_gen0 != NULL ) {
			esc_trace_signal( &finish_gen0->clk, ( std::string(name()) + std::string( ".finish_gen.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->rstn, ( std::string(name()) + std::string( ".finish_gen.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->enable, ( std::string(name()) + std::string( ".finish_gen.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->clear, ( std::string(name()) + std::string( ".finish_gen.clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->cnt_enable, ( std::string(name()) + std::string( ".finish_gen.cnt_enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->total_num, ( std::string(name()) + std::string( ".finish_gen.total_num" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->finish, ( std::string(name()) + std::string( ".finish_gen.finish" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &finish_gen0->cnt, ( std::string(name()) + std::string( ".finish_gen.cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->last_en, ( std::string(name()) + std::string( ".finish_gen.last_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &finish_gen0->internal_cnt, ( std::string(name()) + std::string( ".finish_gen.internal_cnt" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
