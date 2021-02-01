	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( linear_dequant0 != NULL ) {
			esc_trace_signal( &linear_dequant0->clk, ( std::string(name()) + std::string( ".linear_dequant.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->rstn, ( std::string(name()) + std::string( ".linear_dequant.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->enable, ( std::string(name()) + std::string( ".linear_dequant.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->src_valid, ( std::string(name()) + std::string( ".linear_dequant.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->src, ( std::string(name()) + std::string( ".linear_dequant.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->divisor, ( std::string(name()) + std::string( ".linear_dequant.divisor" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->dst_valid, ( std::string(name()) + std::string( ".linear_dequant.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->dst, ( std::string(name()) + std::string( ".linear_dequant.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &linear_dequant0->div_result, ( std::string(name()) + std::string( ".linear_dequant.div_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &linear_dequant0->div_valid, ( std::string(name()) + std::string( ".linear_dequant.div_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( linear_dequant0 != NULL ) {
			esc_trace_signal( &linear_dequant0->clk, ( std::string(name()) + std::string( ".linear_dequant.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->rstn, ( std::string(name()) + std::string( ".linear_dequant.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->enable, ( std::string(name()) + std::string( ".linear_dequant.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->src_valid, ( std::string(name()) + std::string( ".linear_dequant.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->src, ( std::string(name()) + std::string( ".linear_dequant.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->divisor, ( std::string(name()) + std::string( ".linear_dequant.divisor" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->dst_valid, ( std::string(name()) + std::string( ".linear_dequant.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->dst, ( std::string(name()) + std::string( ".linear_dequant.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &linear_dequant0->div_result, ( std::string(name()) + std::string( ".linear_dequant.div_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &linear_dequant0->div_valid, ( std::string(name()) + std::string( ".linear_dequant.div_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
