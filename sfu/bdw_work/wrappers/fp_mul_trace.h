	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( fp_mul0 != NULL ) {
			esc_trace_signal( &fp_mul0->clk, ( std::string(name()) + std::string( ".fp_mul.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->rstn, ( std::string(name()) + std::string( ".fp_mul.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->src_valid, ( std::string(name()) + std::string( ".fp_mul.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->a, ( std::string(name()) + std::string( ".fp_mul.a" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->b, ( std::string(name()) + std::string( ".fp_mul.b" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->r, ( std::string(name()) + std::string( ".fp_mul.r" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_mul0->dst_valid, ( std::string(name()) + std::string( ".fp_mul.dst_valid" ) ).c_str(), esc_trace_vcd );
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( fp_mul0 != NULL ) {
			esc_trace_signal( &fp_mul0->clk, ( std::string(name()) + std::string( ".fp_mul.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->rstn, ( std::string(name()) + std::string( ".fp_mul.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->src_valid, ( std::string(name()) + std::string( ".fp_mul.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->a, ( std::string(name()) + std::string( ".fp_mul.a" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->b, ( std::string(name()) + std::string( ".fp_mul.b" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->r, ( std::string(name()) + std::string( ".fp_mul.r" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_mul0->dst_valid, ( std::string(name()) + std::string( ".fp_mul.dst_valid" ) ).c_str(), esc_trace_fsdb );
		}
	}
