	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( fp_add0 != NULL ) {
			esc_trace_signal( &fp_add0->clk, ( std::string(name()) + std::string( ".fp_add.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->rstn, ( std::string(name()) + std::string( ".fp_add.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->src_valid, ( std::string(name()) + std::string( ".fp_add.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->a, ( std::string(name()) + std::string( ".fp_add.a" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->b, ( std::string(name()) + std::string( ".fp_add.b" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->r, ( std::string(name()) + std::string( ".fp_add.r" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_add0->dst_valid, ( std::string(name()) + std::string( ".fp_add.dst_valid" ) ).c_str(), esc_trace_vcd );
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( fp_add0 != NULL ) {
			esc_trace_signal( &fp_add0->clk, ( std::string(name()) + std::string( ".fp_add.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->rstn, ( std::string(name()) + std::string( ".fp_add.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->src_valid, ( std::string(name()) + std::string( ".fp_add.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->a, ( std::string(name()) + std::string( ".fp_add.a" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->b, ( std::string(name()) + std::string( ".fp_add.b" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->r, ( std::string(name()) + std::string( ".fp_add.r" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_add0->dst_valid, ( std::string(name()) + std::string( ".fp_add.dst_valid" ) ).c_str(), esc_trace_fsdb );
		}
	}
