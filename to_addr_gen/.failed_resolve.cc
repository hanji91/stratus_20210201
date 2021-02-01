/********************/
state0:;
/*HLS_DEFINE_PROTOCOL("_num_available_1d_method");*//* 17ULL */
fifo_write_data_m_size = 0LL;
fifo_write_data_m_free = 0LL;
fifo_write_data_m_ri = 0LL;
fifo_write_data_m_wi = 0LL;
fifo_write_data_m_num_readable = 0LL;
fifo_write_data_m_num_read = 0LL;
fifo_write_data_m_num_written = 0LL;
fifo_write_data_m_data_read_event_m_notify_type = 0ULL;
fifo_write_data_m_data_read_event_m_delta_event_index = 0LL;
fifo_write_data_m_data_written_event_m_notify_type = 0ULL;
fifo_write_data_m_data_written_event_m_delta_event_index = 0LL;
goto state1;
/********************/
state1:;
/*HLS_DEFINE_PROTOCOL("_num_available_1d_method");*//* 17ULL */
num_available_1d = (sc_uint<16> ) (0ULL);
goto state2;
/********************/
state2:;
/*HLS_DEFINE_PROTOCOL("_num_available_1d_method");*//* 17ULL */
wait( 1ULL ); // cycle_id 1
num_available_1d = (sc_uint<16> )(num_available(&( (sc_biguint<1508> )
                                                (sc_bv<1508>)((sc_bv<1444>)(
                                                (sc_bv<1218>)((sc_bv<992>)(
                                                (sc_bv<960>)((sc_bv<928>)(
                                                (sc_bv<896>)((sc_bv<832>)(
                                                (sc_bv<768>)((sc_bv<736>)(
                                                (sc_bv<704>)((sc_bv<672>)(
                                                (sc_bv<608>)((sc_bv<576>)(
                                                (sc_bv<512>)((sc_bv<448>)(
                                                (sc_bv<384>)((sc_bv<320>)(
                                                (sc_bv<256>)((sc_bv<192>)(
                                                (sc_bv<128>)((sc_bv<64>)(fifo_write_data__b_Q2_7sc_core62sc_fifo_in_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_b_Q2_7sc_core74sc_fifo_nonblocking_in_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_p_Q2_7sc_core12sc_interface
                                                ), 
                                                (sc_bv<64>)(fifo_write_data__b_Q2_7sc_core62sc_fifo_in_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_b_Q2_7sc_core71sc_fifo_blocking_in_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_p_Q2_7sc_core12sc_interface
                                                )), 
                                                (sc_bv<64>)(fifo_write_data__b_Q2_7sc_core63sc_fifo_out_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_b_Q2_7sc_core75sc_fifo_nonblocking_out_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_p_Q2_7sc_core12sc_interface
                                                )), 
                                                (sc_bv<64>)(fifo_write_data__b_Q2_7sc_core63sc_fifo_out_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_b_Q2_7sc_core72sc_fifo_blocking_out_if_tm_41_Q2_5sc_dt29sc_biguint_tm_11_XCiL_3_320_p_Q2_7sc_core12sc_interface
                                                )), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_attr_cltn_p))
                                                , 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_parent)), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_simc)), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_registry)), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_update_next_p)
                                                ), 
                                                (sc_bv<32>)(
                                                fifo_write_data_m_size)), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_buf)), 
                                                (sc_bv<32>)(
                                                fifo_write_data_m_free)), 
                                                (sc_bv<32>)(fifo_write_data_m_ri
                                                )), 
                                                (sc_bv<32>)(fifo_write_data_m_wi
                                                )), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_reader)), 
                                                (sc_bv<64>)(
                                                fifo_write_data_m_writer)), 
                                                (sc_bv<32>)(
                                                fifo_write_data_m_num_readable))
                                                , 
                                                (sc_bv<32>)(
                                                fifo_write_data_m_num_read)), 
                                                (sc_bv<32>)(
                                                fifo_write_data_m_num_written))
                                                , 
                                                (sc_bv<226>)((sc_bv<162>)(
                                                (sc_bv<130>)((sc_bv<128>)(
                                                (sc_bv<64>)(fifo_write_data_m_data_read_event_m_parent_p
                                                ), 
                                                (sc_bv<64>)(fifo_write_data_m_data_read_event_m_simc
                                                )), 
                                                (sc_bv<2>)(fifo_write_data_m_data_read_event_m_notify_type
                                                )), 
                                                (sc_bv<32>)(fifo_write_data_m_data_read_event_m_delta_event_index
                                                )), 
                                                (sc_bv<64>)(fifo_write_data_m_data_read_event_m_timed
                                                ))), 
                                                (sc_bv<226>)((sc_bv<162>)(
                                                (sc_bv<130>)((sc_bv<128>)(
                                                (sc_bv<64>)(fifo_write_data_m_data_written_event_m_parent_p
                                                ), 
                                                (sc_bv<64>)(fifo_write_data_m_data_written_event_m_simc
                                                )), 
                                                (sc_bv<2>)(fifo_write_data_m_data_written_event_m_notify_type
                                                )), 
                                                (sc_bv<32>)(fifo_write_data_m_data_written_event_m_delta_event_index
                                                )), 
                                                (sc_bv<64>)(fifo_write_data_m_data_written_event_m_timed
                                                ))), 
                                                (sc_bv<64>)((struct 
                                                sc_core::sc_interface )fifo_write_data__v_Q2_7sc_core12sc_interface
                                                )) )));
goto state2;
