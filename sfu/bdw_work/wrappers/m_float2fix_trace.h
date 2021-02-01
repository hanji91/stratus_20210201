	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( m_float2fix0 != NULL ) {
			esc_trace_signal( &m_float2fix0->clk, ( std::string(name()) + std::string( ".m_float2fix.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &m_float2fix0->rstn, ( std::string(name()) + std::string( ".m_float2fix.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &m_float2fix0->src_valid, ( std::string(name()) + std::string( ".m_float2fix.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &m_float2fix0->src, ( std::string(name()) + std::string( ".m_float2fix.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &m_float2fix0->dst_valid, ( std::string(name()) + std::string( ".m_float2fix.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &m_float2fix0->dst, ( std::string(name()) + std::string( ".m_float2fix.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &m_float2fix0->m_dst_valid, ( std::string(name()) + std::string( ".m_float2fix.m_dst_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( m_float2fix0 != NULL ) {
			esc_trace_signal( &m_float2fix0->clk, ( std::string(name()) + std::string( ".m_float2fix.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &m_float2fix0->rstn, ( std::string(name()) + std::string( ".m_float2fix.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &m_float2fix0->src_valid, ( std::string(name()) + std::string( ".m_float2fix.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &m_float2fix0->src, ( std::string(name()) + std::string( ".m_float2fix.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &m_float2fix0->dst_valid, ( std::string(name()) + std::string( ".m_float2fix.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &m_float2fix0->dst, ( std::string(name()) + std::string( ".m_float2fix.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &m_float2fix0->m_dst_valid, ( std::string(name()) + std::string( ".m_float2fix.m_dst_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
