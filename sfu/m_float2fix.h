#ifndef M_FLOAT2FIX_H
#define M_FLOAT2FIX_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
#include "float2fix.h"
SC_MODULE(m_float2fix)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> src_valid;
  sc_in< sc_uint<32> > src[8];
  sc_out<bool> dst_valid;
  sc_out< sc_uint<32> > dst[8];

  sc_signal<bool> m_dst_valid[8];

  void _dst_valid()
  {
      dst_valid = m_dst_valid[0].read();
  }

  float2fix *u_float2fix[8];

  SC_CTOR(m_float2fix)
  {
    u_float2fix[0] = new float2fix("u_float2fix_0");
    u_float2fix[1] = new float2fix("u_float2fix_1");
    u_float2fix[2] = new float2fix("u_float2fix_2");
    u_float2fix[3] = new float2fix("u_float2fix_3");
    u_float2fix[4] = new float2fix("u_float2fix_4");
    u_float2fix[5] = new float2fix("u_float2fix_5");
    u_float2fix[6] = new float2fix("u_float2fix_6");
    u_float2fix[7] = new float2fix("u_float2fix_7");

    for (size_t i = 0; i < 8; i++)
    {
    u_float2fix[i]->clk(clk);
    u_float2fix[i]->rstn(rstn);
    u_float2fix[i]->src(src[i]);
    u_float2fix[i]->src_valid(src_valid);
    u_float2fix[i]->dst(dst[i]);
    u_float2fix[i]->dst_valid(m_dst_valid[i]);
    }

    SC_METHOD(_dst_valid);
    sensitive << m_dst_valid[0];

  };
};

#endif
