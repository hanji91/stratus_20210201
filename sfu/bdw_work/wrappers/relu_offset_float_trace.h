	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( relu_offset_float0 != NULL ) {
			esc_trace_signal( &relu_offset_float0->clk, ( std::string(name()) + std::string( ".relu_offset_float.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->rstn, ( std::string(name()) + std::string( ".relu_offset_float.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->enable, ( std::string(name()) + std::string( ".relu_offset_float.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->src_valid, ( std::string(name()) + std::string( ".relu_offset_float.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->src, ( std::string(name()) + std::string( ".relu_offset_float.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->offset, ( std::string(name()) + std::string( ".relu_offset_float.offset" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->dst_valid, ( std::string(name()) + std::string( ".relu_offset_float.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->dst, ( std::string(name()) + std::string( ".relu_offset_float.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &relu_offset_float0->cmp_result, ( std::string(name()) + std::string( ".relu_offset_float.cmp_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &relu_offset_float0->cmp_valid, ( std::string(name()) + std::string( ".relu_offset_float.cmp_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( relu_offset_float0 != NULL ) {
			esc_trace_signal( &relu_offset_float0->clk, ( std::string(name()) + std::string( ".relu_offset_float.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->rstn, ( std::string(name()) + std::string( ".relu_offset_float.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->enable, ( std::string(name()) + std::string( ".relu_offset_float.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->src_valid, ( std::string(name()) + std::string( ".relu_offset_float.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->src, ( std::string(name()) + std::string( ".relu_offset_float.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->offset, ( std::string(name()) + std::string( ".relu_offset_float.offset" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->dst_valid, ( std::string(name()) + std::string( ".relu_offset_float.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->dst, ( std::string(name()) + std::string( ".relu_offset_float.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &relu_offset_float0->cmp_result, ( std::string(name()) + std::string( ".relu_offset_float.cmp_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &relu_offset_float0->cmp_valid, ( std::string(name()) + std::string( ".relu_offset_float.cmp_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
