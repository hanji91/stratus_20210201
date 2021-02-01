	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( cache0 != NULL ) {
			esc_trace_signal( &cache0->clk, ( std::string(name()) + std::string( ".cache.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->rstn, ( std::string(name()) + std::string( ".cache.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->cache_en, ( std::string(name()) + std::string( ".cache.cache_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic_en, ( std::string(name()) + std::string( ".cache.systolic_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic_depth, ( std::string(name()) + std::string( ".cache.systolic_depth" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->addr_if_start, ( std::string(name()) + std::string( ".cache.addr_if_start" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic_sel, ( std::string(name()) + std::string( ".cache.systolic_sel" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data, ( std::string(name()) + std::string( ".cache.feature_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en, ( std::string(name()) + std::string( ".cache.feature_share_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en, ( std::string(name()) + std::string( ".cache.feature_data_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel, ( std::string(name()) + std::string( ".cache.feature_data_sel" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->weight_data, ( std::string(name()) + std::string( ".cache.weight_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->weight_data_en, ( std::string(name()) + std::string( ".cache.weight_data_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s0, ( std::string(name()) + std::string( ".cache.mac_src_0_s0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s1, ( std::string(name()) + std::string( ".cache.mac_src_0_s1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s2, ( std::string(name()) + std::string( ".cache.mac_src_0_s2" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s3, ( std::string(name()) + std::string( ".cache.mac_src_0_s3" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s4, ( std::string(name()) + std::string( ".cache.mac_src_0_s4" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s5, ( std::string(name()) + std::string( ".cache.mac_src_0_s5" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_0_s6, ( std::string(name()) + std::string( ".cache.mac_src_0_s6" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_1, ( std::string(name()) + std::string( ".cache.mac_src_1" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_src_valid, ( std::string(name()) + std::string( ".cache.mac_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->mac_clear, ( std::string(name()) + std::string( ".cache.mac_clear" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &cache0->addr_if_start_1d, ( std::string(name()) + std::string( ".cache.addr_if_start_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->cache_en_1d, ( std::string(name()) + std::string( ".cache.cache_en_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_1d, ( std::string(name()) + std::string( ".cache.feature_share_en_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_2d, ( std::string(name()) + std::string( ".cache.feature_share_en_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_3d, ( std::string(name()) + std::string( ".cache.feature_share_en_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_4d, ( std::string(name()) + std::string( ".cache.feature_share_en_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_5d, ( std::string(name()) + std::string( ".cache.feature_share_en_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_6d, ( std::string(name()) + std::string( ".cache.feature_share_en_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_share_en_7d, ( std::string(name()) + std::string( ".cache.feature_share_en_7d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_1d, ( std::string(name()) + std::string( ".cache.feature_data_en_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_2d, ( std::string(name()) + std::string( ".cache.feature_data_en_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_3d, ( std::string(name()) + std::string( ".cache.feature_data_en_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_4d, ( std::string(name()) + std::string( ".cache.feature_data_en_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_5d, ( std::string(name()) + std::string( ".cache.feature_data_en_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_6d, ( std::string(name()) + std::string( ".cache.feature_data_en_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_en_7d, ( std::string(name()) + std::string( ".cache.feature_data_en_7d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_1d, ( std::string(name()) + std::string( ".cache.feature_data_sel_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_2d, ( std::string(name()) + std::string( ".cache.feature_data_sel_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_3d, ( std::string(name()) + std::string( ".cache.feature_data_sel_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_4d, ( std::string(name()) + std::string( ".cache.feature_data_sel_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_5d, ( std::string(name()) + std::string( ".cache.feature_data_sel_5d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_6d, ( std::string(name()) + std::string( ".cache.feature_data_sel_6d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->feature_data_sel_7d, ( std::string(name()) + std::string( ".cache.feature_data_sel_7d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic0_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic0_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic1_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic1_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic2_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic2_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic3_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic3_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic4_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic4_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic5_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic5_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->systolic6_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic6_feature_data_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &cache0->weight_data_en_1d, ( std::string(name()) + std::string( ".cache.weight_data_en_1d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( cache0 != NULL ) {
			esc_trace_signal( &cache0->clk, ( std::string(name()) + std::string( ".cache.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->rstn, ( std::string(name()) + std::string( ".cache.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->cache_en, ( std::string(name()) + std::string( ".cache.cache_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic_en, ( std::string(name()) + std::string( ".cache.systolic_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic_depth, ( std::string(name()) + std::string( ".cache.systolic_depth" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->addr_if_start, ( std::string(name()) + std::string( ".cache.addr_if_start" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic_sel, ( std::string(name()) + std::string( ".cache.systolic_sel" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data, ( std::string(name()) + std::string( ".cache.feature_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en, ( std::string(name()) + std::string( ".cache.feature_share_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en, ( std::string(name()) + std::string( ".cache.feature_data_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel, ( std::string(name()) + std::string( ".cache.feature_data_sel" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->weight_data, ( std::string(name()) + std::string( ".cache.weight_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->weight_data_en, ( std::string(name()) + std::string( ".cache.weight_data_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s0, ( std::string(name()) + std::string( ".cache.mac_src_0_s0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s1, ( std::string(name()) + std::string( ".cache.mac_src_0_s1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s2, ( std::string(name()) + std::string( ".cache.mac_src_0_s2" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s3, ( std::string(name()) + std::string( ".cache.mac_src_0_s3" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s4, ( std::string(name()) + std::string( ".cache.mac_src_0_s4" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s5, ( std::string(name()) + std::string( ".cache.mac_src_0_s5" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_0_s6, ( std::string(name()) + std::string( ".cache.mac_src_0_s6" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_1, ( std::string(name()) + std::string( ".cache.mac_src_1" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_src_valid, ( std::string(name()) + std::string( ".cache.mac_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->mac_clear, ( std::string(name()) + std::string( ".cache.mac_clear" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &cache0->addr_if_start_1d, ( std::string(name()) + std::string( ".cache.addr_if_start_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->cache_en_1d, ( std::string(name()) + std::string( ".cache.cache_en_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_1d, ( std::string(name()) + std::string( ".cache.feature_share_en_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_2d, ( std::string(name()) + std::string( ".cache.feature_share_en_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_3d, ( std::string(name()) + std::string( ".cache.feature_share_en_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_4d, ( std::string(name()) + std::string( ".cache.feature_share_en_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_5d, ( std::string(name()) + std::string( ".cache.feature_share_en_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_6d, ( std::string(name()) + std::string( ".cache.feature_share_en_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_share_en_7d, ( std::string(name()) + std::string( ".cache.feature_share_en_7d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_1d, ( std::string(name()) + std::string( ".cache.feature_data_en_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_2d, ( std::string(name()) + std::string( ".cache.feature_data_en_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_3d, ( std::string(name()) + std::string( ".cache.feature_data_en_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_4d, ( std::string(name()) + std::string( ".cache.feature_data_en_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_5d, ( std::string(name()) + std::string( ".cache.feature_data_en_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_6d, ( std::string(name()) + std::string( ".cache.feature_data_en_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_en_7d, ( std::string(name()) + std::string( ".cache.feature_data_en_7d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_1d, ( std::string(name()) + std::string( ".cache.feature_data_sel_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_2d, ( std::string(name()) + std::string( ".cache.feature_data_sel_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_3d, ( std::string(name()) + std::string( ".cache.feature_data_sel_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_4d, ( std::string(name()) + std::string( ".cache.feature_data_sel_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_5d, ( std::string(name()) + std::string( ".cache.feature_data_sel_5d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_6d, ( std::string(name()) + std::string( ".cache.feature_data_sel_6d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->feature_data_sel_7d, ( std::string(name()) + std::string( ".cache.feature_data_sel_7d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic0_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic0_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic1_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic1_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic2_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic2_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic3_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic3_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic4_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic4_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic5_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic5_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->systolic6_feature_data_1d, ( std::string(name()) + std::string( ".cache.systolic6_feature_data_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &cache0->weight_data_en_1d, ( std::string(name()) + std::string( ".cache.weight_data_en_1d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
