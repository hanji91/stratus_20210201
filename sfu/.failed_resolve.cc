/********************/
state0:;
/*HLS_DEFINE_PROTOCOL("_fix2float_method");*//* 3ULL */
id_m_if = 0ULL;
goto state1;
/********************/
state1:;
/*HLS_DEFINE_PROTOCOL("_fix2float_method");*//* 3ULL */
dst = (sc_uint<32> ) (0ULL);
goto state2;
/********************/
state2:;
/*HLS_DEFINE_PROTOCOL("_fix2float_method");*//* 3ULL */
wait( 1ULL ); // cycle_id 1
_fix2float_dst_next = dst;
amtmp002 = enable;
amtmp001 = src_valid;
tmp0 = src;
dst = (amtmp002 ? (sc_uint<32> )
        ((amtmp001 ? (sc_uint<32> )
           ((sc_biguint<32> )(sc_bv<32>)((sc_bv<9>)((sc_bv<1>)((sc_uint<1> )(
            negative(&id_m_if))), 
            (sc_bv<8>)((sc_uint<8> )(( (/*cliff*/sc_int<32>)(exponent(&id_m_if)
             + 127LL) )))), 
            (sc_bv<23>)((sc_uint<23> )(mantissa(&id_m_if))))) : (sc_uint<32> )
           (_fix2float_dst_next))) : (sc_uint<32> )
        ((sc_uint<32> )tmp0));
goto state2;
