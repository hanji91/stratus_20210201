	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( fp_cmp0 != NULL ) {
			esc_trace_signal( &fp_cmp0->clk, ( std::string(name()) + std::string( ".fp_cmp.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->rstn, ( std::string(name()) + std::string( ".fp_cmp.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->enable, ( std::string(name()) + std::string( ".fp_cmp.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->src_valid, ( std::string(name()) + std::string( ".fp_cmp.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->a, ( std::string(name()) + std::string( ".fp_cmp.a" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->b, ( std::string(name()) + std::string( ".fp_cmp.b" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->r, ( std::string(name()) + std::string( ".fp_cmp.r" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fp_cmp0->dst_valid, ( std::string(name()) + std::string( ".fp_cmp.dst_valid" ) ).c_str(), esc_trace_vcd );
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( fp_cmp0 != NULL ) {
			esc_trace_signal( &fp_cmp0->clk, ( std::string(name()) + std::string( ".fp_cmp.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->rstn, ( std::string(name()) + std::string( ".fp_cmp.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->enable, ( std::string(name()) + std::string( ".fp_cmp.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->src_valid, ( std::string(name()) + std::string( ".fp_cmp.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->a, ( std::string(name()) + std::string( ".fp_cmp.a" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->b, ( std::string(name()) + std::string( ".fp_cmp.b" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->r, ( std::string(name()) + std::string( ".fp_cmp.r" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fp_cmp0->dst_valid, ( std::string(name()) + std::string( ".fp_cmp.dst_valid" ) ).c_str(), esc_trace_fsdb );
		}
	}
