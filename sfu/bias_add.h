#ifndef BIAS_ADD_H
#define BIAS_ADD_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"

SC_MODULE(bias_add)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid;
  sc_in< sc_uint<32> > src[8];
  //sc_in<sc_uint<16>> bias_val;
  sc_in< sc_biguint<512> > bias_data;

  sc_out<bool> dst_valid;
  sc_out< sc_uint<32> > dst[8];

  sc_signal< sc_biguint<512> > r_bias_data;
  sc_signal< sc_uint<32> > r_src[8];
  sc_signal<bool> r_src_valid, r2_src_valid, r3_src_valid;
  sc_signal< sc_uint<2> > bias_mux_cnt;
  sc_signal< sc_uint<16> > separated_bias_data[8];
  sc_signal< sc_int<32> > add_result[8];
  int16_t bias_to_int16[8];
  
  void _delay() // Added on 2021/01/07 by hanji
  {
   if (!rstn.read()) {
    for (int i = 0; i < 8; i++) {
        r_src[i].write(0);
    }
      r_src_valid.write(0);
      r2_src_valid.write(0);
      r3_src_valid.write(0);
      r_bias_data.write(0);
   }
   else {
    for (int i = 0; i < 8; i++) {
        r_src[i] = src[i].read();
    }
      r_src_valid = src_valid.read();
      r2_src_valid = r_src_valid.read();
      r3_src_valid = r2_src_valid.read();
      r_bias_data = bias_data.read();
   }
  }

  void _bias_mux_cnt()
  {
   if (!rstn.read()) {
      bias_mux_cnt.write(0);
   }
   //else if (src_valid.read()) {
   else if (r_src_valid.read()) { // Modified on 2021/01/15 by hanji
      bias_mux_cnt = bias_mux_cnt.read() + 1;
   }
  }

  void _separate_bias()
  {
    if (bias_mux_cnt.read() == 0) {
      separated_bias_data[0].write(r_bias_data.read().range((16 * 0) + 15, 16 * 0).to_uint());
      separated_bias_data[1].write(r_bias_data.read().range((16 * 1) + 15, 16 * 1).to_uint());
      separated_bias_data[2].write(r_bias_data.read().range((16 * 2) + 15, 16 * 2).to_uint());
      separated_bias_data[3].write(r_bias_data.read().range((16 * 3) + 15, 16 * 3).to_uint());
      separated_bias_data[4].write(r_bias_data.read().range((16 * 4) + 15, 16 * 4).to_uint());
      separated_bias_data[5].write(r_bias_data.read().range((16 * 5) + 15, 16 * 5).to_uint());
      separated_bias_data[6].write(r_bias_data.read().range((16 * 6) + 15, 16 * 6).to_uint());
      separated_bias_data[7].write(r_bias_data.read().range((16 * 7) + 15, 16 * 7).to_uint());
    }
    else if (bias_mux_cnt.read() == 1) {
      separated_bias_data[0].write(r_bias_data.read().range((16 * 8) + 15, 16 * 8).to_uint());
      separated_bias_data[1].write(r_bias_data.read().range((16 * 9) + 15, 16 * 9).to_uint());
      separated_bias_data[2].write(r_bias_data.read().range((16 * 10) + 15, 16 * 10).to_uint());
      separated_bias_data[3].write(r_bias_data.read().range((16 * 11) + 15, 16 * 11).to_uint());
      separated_bias_data[4].write(r_bias_data.read().range((16 * 12) + 15, 16 * 12).to_uint());
      separated_bias_data[5].write(r_bias_data.read().range((16 * 13) + 15, 16 * 13).to_uint());
      separated_bias_data[6].write(r_bias_data.read().range((16 * 14) + 15, 16 * 14).to_uint());
      separated_bias_data[7].write(r_bias_data.read().range((16 * 15) + 15, 16 * 15).to_uint());
    }
    else if (bias_mux_cnt.read() == 2) {
      separated_bias_data[0].write(r_bias_data.read().range((16 * 16) + 15, 16 * 16).to_uint());
      separated_bias_data[1].write(r_bias_data.read().range((16 * 17) + 15, 16 * 17).to_uint());
      separated_bias_data[2].write(r_bias_data.read().range((16 * 18) + 15, 16 * 18).to_uint());
      separated_bias_data[3].write(r_bias_data.read().range((16 * 19) + 15, 16 * 19).to_uint());
      separated_bias_data[4].write(r_bias_data.read().range((16 * 20) + 15, 16 * 20).to_uint());
      separated_bias_data[5].write(r_bias_data.read().range((16 * 21) + 15, 16 * 21).to_uint());
      separated_bias_data[6].write(r_bias_data.read().range((16 * 22) + 15, 16 * 22).to_uint());
      separated_bias_data[7].write(r_bias_data.read().range((16 * 23) + 15, 16 * 23).to_uint());
    }
    else {
      separated_bias_data[0].write(r_bias_data.read().range((16 * 24) + 15, 16 * 24).to_uint());
      separated_bias_data[1].write(r_bias_data.read().range((16 * 25) + 15, 16 * 25).to_uint());
      separated_bias_data[2].write(r_bias_data.read().range((16 * 26) + 15, 16 * 26).to_uint());
      separated_bias_data[3].write(r_bias_data.read().range((16 * 27) + 15, 16 * 27).to_uint());
      separated_bias_data[4].write(r_bias_data.read().range((16 * 28) + 15, 16 * 28).to_uint());
      separated_bias_data[5].write(r_bias_data.read().range((16 * 29) + 15, 16 * 29).to_uint());
      separated_bias_data[6].write(r_bias_data.read().range((16 * 30) + 15, 16 * 30).to_uint());
      separated_bias_data[7].write(r_bias_data.read().range((16 * 31) + 15, 16 * 31).to_uint());
    }
  }

  void _bias()
  {
    //  int16_t bias_to_int16[8];
    for (int i = 0; i < 8; i++) {
      bias_to_int16[i] = int16_t(separated_bias_data[i].read());
    }
  }
  
  void _add()
  {
   if (!rstn.read()) {
    for (int i = 0; i < 8; i++) {
      add_result[i].write(0);
    }
   }
   else if(!enable.read()) {
    for (int i = 0; i < 8; i++) {
      add_result[i].write(0);
    }
   }
   else {
    for (int i = 0; i < 8; i++) {
      add_result[i] = r_src[i].read().to_int() + bias_to_int16[i];
    }
   }
  }

  void _dst()
  {
   if (!rstn.read()) {
    for (int i = 0; i < 8; i++) 
      dst[i].write(0);
   }
   else if(!enable.read()) {
      uint16_t empty = 0;
    for (int i = 0; i < 8; i++) 
      dst[i] = (empty , uint16_t(src[i].read().range(15,0)));
   }
   else if(r2_src_valid.read()) {
      //dst = add_result.read().to_uint() >> 16;
      //uint16_t empty = 0;
    for (int i = 0; i < 8; i++) 
      //dst[i] = (empty, add_result[i].read().to_uint());
      dst[i] = add_result[i].read().to_uint();
   }
  }

  void _dst_valid()
  {
   if (!rstn.read()) 
    dst_valid.write(0);
   else if (!enable.read()) 
    dst_valid = src_valid.read();
   else
    dst_valid = r2_src_valid.read();
  }

  SC_CTOR(bias_add)
  {
    SC_METHOD(_delay);
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_bias_mux_cnt);
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_separate_bias);
    sensitive << r_bias_data << bias_mux_cnt;

    SC_METHOD(_bias);
    sensitive << separated_bias_data[0] << separated_bias_data[1] << separated_bias_data[2] << separated_bias_data[3] << separated_bias_data[4] << separated_bias_data[5] << separated_bias_data[6] << separated_bias_data[7];

    SC_METHOD(_add);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << src << bias_val ;
    SC_METHOD(_dst);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << add_result<<enable<< src; 
    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << src_valid;
  };
};
#endif
