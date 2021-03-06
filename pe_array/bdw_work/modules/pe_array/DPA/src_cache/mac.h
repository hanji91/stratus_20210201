#ifndef MAC_H
#define MAC_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
SC_MODULE(mac)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> init;
  sc_in<bool> clear;
  sc_in<bool> src_vld;
  sc_in< sc_int<FEATURE_BIT_WIDTH> > src_0;
  sc_in< sc_int<WEIGHT_BIT_WIDTH> > src_1;
  sc_out< sc_int<ACCUMULATOR_BIT_WIDTH> > acc;

  sc_out< sc_int<WEIGHT_BIT_WIDTH> > src_1_1d;

  sc_signal< sc_int<FEATURE_BIT_WIDTH + WEIGHT_BIT_WIDTH> > mul;
  //Added on 2021/01/26 by hanji
  sc_signal<bool> src_vld_1d;  
  sc_signal<bool> clear_1d;

  void _delays()
  {
    if (!rstn.read()) { // Added on 2020/12/02 by hanji
	src_1_1d.write(0);
        src_vld_1d.write(0);
        clear_1d.write(0);
    }
    else {
	src_1_1d = src_1.read();
        src_vld_1d = src_vld.read(); 
        clear_1d = clear.read(); 
    }
  }
  void _multiplier()
  {
    if (!rstn.read()) { // Added on 2021/01/27 by hanji
      mul.write(0);
    } 
    else {
     if (src_vld)
      mul = src_0.read() * src_1.read();
    }
  }
  void _accumulator()
  {
    if (!rstn.read())  // Added on 2020/12/02 by hanji
      acc.write(0);
    else if (init)
      acc = 0;
    //else if (clear)
    else if (clear_1d) // Modified on 2021/01/27 by hanji
      acc = mul.read();
    //else if (src_vld)
    else if (src_vld_1d) // Modified on 2021/01/27 by hanji
      acc = mul.read() + acc.read();
  }
  SC_CTOR(mac)
  {

    SC_METHOD(_multiplier);
    //sensitive << src_0 << src_1 << src_vld;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji

    SC_METHOD(_accumulator);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/02 by hanji

    SC_METHOD(_delays);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/02 by hanji

  };
};
#endif
