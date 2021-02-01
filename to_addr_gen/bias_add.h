#ifndef BIAS_ADD_H
#define BIAS_ADD_H
#include "systemc.h"
#include "config.h"

SC_MODULE(bias_add)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid;
  sc_in<sc_uint<32>> src;
  sc_in<sc_uint<16>> bias_val;
  sc_in<sc_uint<8>> bias_shift_len;

  sc_out<bool> dst_valid;
  sc_out<sc_uint<32>> dst;

  sc_signal<sc_int<32>> add_result;

  void _add()
  {
    int16_t bias_to_int16;
    bias_to_int16 =  int16_t(bias_val.read());
    add_result = src.read().to_int() + bias_to_int16;
  }
  void _shift()
  {
    if(enable.read() == 1){
      //dst = add_result.read().to_uint() >> 16;
      uint16_t empty = 0;
      dst = (empty, add_result.read().to_uint());
    }
    else {
      uint16_t empty = 0;
      dst = (empty , uint16_t(src.read().range(15,0)));
    }
  }

  void _dst_valid()
  {
    dst_valid = src_valid.read();
  }

  SC_CTOR(bias_add)
  {
    SC_METHOD(_add);
    sensitive << src << bias_val ;
    SC_METHOD(_shift);
    sensitive << add_result<<enable<< src; 
    SC_METHOD(_dst_valid);
    sensitive << src_valid;
  };
};
#endif
