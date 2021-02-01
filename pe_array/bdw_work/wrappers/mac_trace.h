	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( mac0 != NULL ) {
			esc_trace_signal( &mac0->clk, ( std::string(name()) + std::string( ".mac.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->rstn, ( std::string(name()) + std::string( ".mac.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->init, ( std::string(name()) + std::string( ".mac.init" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->clear, ( std::string(name()) + std::string( ".mac.clear" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->src_vld, ( std::string(name()) + std::string( ".mac.src_vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->src_0, ( std::string(name()) + std::string( ".mac.src_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->src_1, ( std::string(name()) + std::string( ".mac.src_1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->acc, ( std::string(name()) + std::string( ".mac.acc" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->src_1_1d, ( std::string(name()) + std::string( ".mac.src_1_1d" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &mac0->mul, ( std::string(name()) + std::string( ".mac.mul" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->src_vld_1d, ( std::string(name()) + std::string( ".mac.src_vld_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &mac0->clear_1d, ( std::string(name()) + std::string( ".mac.clear_1d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( mac0 != NULL ) {
			esc_trace_signal( &mac0->clk, ( std::string(name()) + std::string( ".mac.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->rstn, ( std::string(name()) + std::string( ".mac.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->init, ( std::string(name()) + std::string( ".mac.init" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->clear, ( std::string(name()) + std::string( ".mac.clear" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->src_vld, ( std::string(name()) + std::string( ".mac.src_vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->src_0, ( std::string(name()) + std::string( ".mac.src_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->src_1, ( std::string(name()) + std::string( ".mac.src_1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->acc, ( std::string(name()) + std::string( ".mac.acc" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->src_1_1d, ( std::string(name()) + std::string( ".mac.src_1_1d" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &mac0->mul, ( std::string(name()) + std::string( ".mac.mul" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->src_vld_1d, ( std::string(name()) + std::string( ".mac.src_vld_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &mac0->clear_1d, ( std::string(name()) + std::string( ".mac.clear_1d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
