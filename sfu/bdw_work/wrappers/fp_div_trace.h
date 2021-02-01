	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( fp_div0 != NULL ) {
			esc_trace_signal( &fp_div0->clk, ( std::string(name()) + std::string( ".fp_div.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->rstn, ( std::string(name()) + std::string( ".fp_div.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->src_valid, ( std::string(name()) + std::string( ".fp_div.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->a, ( std::string(name()) + std::string( ".fp_div.a" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->b, ( std::string(name()) + std::string( ".fp_div.b" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->r, ( std::string(name()) + std::string( ".fp_div.r" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_div0->dst_valid, ( std::string(name()) + std::string( ".fp_div.dst_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &fp_div0->src_valid_1d, ( std::string(name()) + std::string( ".fp_div.src_valid_1d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( fp_div0 != NULL ) {
			esc_trace_signal( &fp_div0->clk, ( std::string(name()) + std::string( ".fp_div.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->rstn, ( std::string(name()) + std::string( ".fp_div.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->src_valid, ( std::string(name()) + std::string( ".fp_div.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->a, ( std::string(name()) + std::string( ".fp_div.a" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->b, ( std::string(name()) + std::string( ".fp_div.b" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->r, ( std::string(name()) + std::string( ".fp_div.r" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_div0->dst_valid, ( std::string(name()) + std::string( ".fp_div.dst_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &fp_div0->src_valid_1d, ( std::string(name()) + std::string( ".fp_div.src_valid_1d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
