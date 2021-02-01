	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( bias_add0 != NULL ) {
			esc_trace_signal( &bias_add0->clk, ( std::string(name()) + std::string( ".bias_add.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->rstn, ( std::string(name()) + std::string( ".bias_add.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->enable, ( std::string(name()) + std::string( ".bias_add.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->src_valid, ( std::string(name()) + std::string( ".bias_add.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->src, ( std::string(name()) + std::string( ".bias_add.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->bias_data, ( std::string(name()) + std::string( ".bias_add.bias_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->dst_valid, ( std::string(name()) + std::string( ".bias_add.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->dst, ( std::string(name()) + std::string( ".bias_add.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bias_add0->r_src, ( std::string(name()) + std::string( ".bias_add.r_src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->r_src_valid, ( std::string(name()) + std::string( ".bias_add.r_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->r2_src_valid, ( std::string(name()) + std::string( ".bias_add.r2_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->r3_src_valid, ( std::string(name()) + std::string( ".bias_add.r3_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->bias_mux_cnt, ( std::string(name()) + std::string( ".bias_add.bias_mux_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->separated_bias_data, ( std::string(name()) + std::string( ".bias_add.separated_bias_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bias_add0->add_result, ( std::string(name()) + std::string( ".bias_add.add_result" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( bias_add0 != NULL ) {
			esc_trace_signal( &bias_add0->clk, ( std::string(name()) + std::string( ".bias_add.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->rstn, ( std::string(name()) + std::string( ".bias_add.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->enable, ( std::string(name()) + std::string( ".bias_add.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->src_valid, ( std::string(name()) + std::string( ".bias_add.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->src, ( std::string(name()) + std::string( ".bias_add.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->bias_data, ( std::string(name()) + std::string( ".bias_add.bias_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->dst_valid, ( std::string(name()) + std::string( ".bias_add.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->dst, ( std::string(name()) + std::string( ".bias_add.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bias_add0->r_src, ( std::string(name()) + std::string( ".bias_add.r_src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->r_src_valid, ( std::string(name()) + std::string( ".bias_add.r_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->r2_src_valid, ( std::string(name()) + std::string( ".bias_add.r2_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->r3_src_valid, ( std::string(name()) + std::string( ".bias_add.r3_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->bias_mux_cnt, ( std::string(name()) + std::string( ".bias_add.bias_mux_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->separated_bias_data, ( std::string(name()) + std::string( ".bias_add.separated_bias_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bias_add0->add_result, ( std::string(name()) + std::string( ".bias_add.add_result" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
