#ifndef CACHE_U
#define CACHE_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(cache)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> cache_en;
  sc_in< sc_uint<8> > systolic_en;
  sc_in< sc_uint<8> > systolic_depth;
  sc_in<bool> addr_if_start;
  sc_in< sc_uint<8> > systolic_sel;
  sc_in< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > feature_data;
  sc_in<bool> feature_share_en;
  sc_in<bool> feature_data_en;
  sc_in< sc_uint<16> > feature_data_sel;
 
  sc_in< sc_biguint<WEIGHT_BUFFER_DATA_WIDTH> > weight_data;
  sc_in<bool> weight_data_en;

#ifdef GEN_WRAP
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s0[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s1[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s2[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s3[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s4[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s5[32];
  sc_out< sc_int<FEATURE_BIT_WIDTH> > mac_src_0_s6[32];

  sc_out< sc_int<WEIGHT_BIT_WIDTH> >  mac_src_1[32];
#else
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s0; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s1; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s2; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s3; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s4; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s5; //[32];
  sc_vector< sc_out< sc_int<FEATURE_BIT_WIDTH> > >mac_src_0_s6; //[32];

  sc_vector< sc_out< sc_int<WEIGHT_BIT_WIDTH> > > mac_src_1; //[32];

#endif

  sc_out<bool> mac_src_valid;
  sc_out<bool> mac_clear;

  sc_signal<bool> addr_if_start_1d; // Added on 2021/01/27 by hanji
  sc_signal<bool> cache_en_1d;
  sc_signal<bool> feature_share_en_1d;
  sc_signal<bool> feature_share_en_2d;
  sc_signal<bool> feature_share_en_3d;
  sc_signal<bool> feature_share_en_4d;
  sc_signal<bool> feature_share_en_5d;
  sc_signal<bool> feature_share_en_6d;
  sc_signal<bool> feature_share_en_7d;

  sc_signal<bool> feature_data_en_1d;
  sc_signal<bool> feature_data_en_2d;
  sc_signal<bool> feature_data_en_3d;
  sc_signal<bool> feature_data_en_4d;
  sc_signal<bool> feature_data_en_5d;
  sc_signal<bool> feature_data_en_6d;
  sc_signal<bool> feature_data_en_7d;

/*
  sc_signal< sc_uint<16> > feature_data_sel_1d;
  sc_signal< sc_uint<16> > feature_data_sel_2d;
  sc_signal< sc_uint<16> > feature_data_sel_3d;
  sc_signal< sc_uint<16> > feature_data_sel_4d;
  sc_signal< sc_uint<16> > feature_data_sel_5d;
  sc_signal< sc_uint<16> > feature_data_sel_6d;
  sc_signal< sc_uint<16> > feature_data_sel_7d;
*/

  sc_signal< sc_uint<5> > feature_data_sel_1d;
  sc_signal< sc_uint<5> > feature_data_sel_2d;
  sc_signal< sc_uint<5> > feature_data_sel_3d;
  sc_signal< sc_uint<5> > feature_data_sel_4d;
  sc_signal< sc_uint<5> > feature_data_sel_5d;
  sc_signal< sc_uint<5> > feature_data_sel_6d;
  sc_signal< sc_uint<5> > feature_data_sel_7d;

/*
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic0_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic1_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic2_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic3_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic4_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic5_feature_data_1d;
  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > systolic6_feature_data_1d;
*/

  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic0_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic1_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic2_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic3_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic4_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic5_feature_data_1d[32];
  sc_signal< sc_uint<FEATURE_BIT_WIDTH> > systolic6_feature_data_1d[32];

  sc_signal< sc_biguint<WEIGHT_BUFFER_DATA_WIDTH> > weight_data_1d;
  sc_signal<bool> weight_data_en_1d;

  void _mac_src_valid()
  {
    if (!rstn.read())  // Added on 2021/01/27 by hanji
        mac_src_valid.write(0);
    else
        mac_src_valid = cache_en_1d.read();
  }
  void _systolic0_feature_data() // Modified on 2021/01/27 by hanji
  {
    if (!rstn.read()) {  // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic0_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en.read() == 1) { 
      if (systolic_sel.read() == 0) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic0_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic1_feature_data() // Modified on 2021/01/27 by hanji)
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic1_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_1d.read() == 1) {
      if (systolic_sel.read() == 1) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic1_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic2_feature_data()
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic2_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_2d.read() == 1) {
      if (systolic_sel.read() == 2) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic2_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic3_feature_data()
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic3_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_3d.read() == 1) {
      if (systolic_sel.read() == 3) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic3_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic4_feature_data()
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic4_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_4d.read() == 1) {
      if (systolic_sel.read() == 4) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic4_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic5_feature_data()
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic5_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_5d.read() == 1) {
      if (systolic_sel.read() == 5) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic5_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }
  void _systolic6_feature_data()
  {
    if (!rstn.read()) { // Added on 2020/12/17 by hanji
       for (size_t i = 0; i < 32; i++) {
        systolic6_feature_data_1d[i].write(0);
       }
    }
    else if (feature_data_en_6d.read() == 1) {
      if (systolic_sel.read() == 6) {
       for (size_t i = 0; i < 32; i++) {
        int pos = (i * FEATURE_BIT_WIDTH);
        systolic6_feature_data_1d[i] = feature_data.read().range(pos + (FEATURE_BIT_WIDTH-1), pos).to_uint();
       }
      }
    }
  }

  void _feature_split_src_data0()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s0[i].write(0);
     }
    }
    else if (feature_data_en_1d.read() == 1) {
      if (feature_share_en_1d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_1d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s0[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic0_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s0[i] = systolic0_feature_data_1d[feature_data_sel_1d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s0[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic0_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s0[i] = systolic0_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s0[i] = 0;
      }
    }
  }
  void _feature_split_src_data1()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s1[i].write(0);
     }
    }
    else if (feature_data_en_2d.read() == 1) {
      if (feature_share_en_2d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_2d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s1[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic1_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s1[i] = systolic1_feature_data_1d[feature_data_sel_2d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s1[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic1_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s1[i] = systolic1_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s1[i] = 0;
      }
    }
  }
  void _feature_split_src_data2()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s2[i].write(0);
     }
    }
    else if (feature_data_en_3d.read() == 1) {
      if (feature_share_en_3d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_3d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s2[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic2_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s2[i] = systolic2_feature_data_1d[feature_data_sel_3d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s2[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic2_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s2[i] = systolic2_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s2[i] = 0;
      }
    }
  }
  void _feature_split_src_data3()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s3[i].write(0);
     }
    }
    else if (feature_data_en_4d.read() == 1) {
      if (feature_share_en_4d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_4d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s3[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic3_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s3[i] = systolic3_feature_data_1d[feature_data_sel_4d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s3[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic3_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s3[i] = systolic3_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s3[i] = 0;
      }
    }
  }
  void _feature_split_src_data4()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s4[i].write(0);
     }
    }
    else if (feature_data_en_5d.read() == 1) {
      if (feature_share_en_5d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_5d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s4[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic4_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s4[i] = systolic4_feature_data_1d[feature_data_sel_5d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s4[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic4_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s4[i] = systolic4_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s4[i] = 0;
      }
    }
  }
  void _feature_split_src_data5()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s5[i].write(0);
     }
    }
    else if (feature_data_en_6d.read() == 1) {
      if (feature_share_en_6d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_6d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s5[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic5_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s5[i] = systolic5_feature_data_1d[feature_data_sel_6d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s5[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic5_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s5[i] = systolic5_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s5[i] = 0;
      }
    }
  }
  void _feature_split_src_data6()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
	  mac_src_0_s6[i].write(0);
     }
    }
    else if (feature_data_en_7d.read() == 1) {
      if (feature_share_en_7d.read() == 1) {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (feature_data_sel_7d.read() * FEATURE_BIT_WIDTH);
          //mac_src_0_s6[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic6_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s6[i] = systolic6_feature_data_1d[feature_data_sel_7d.read()].read().to_uint();
        }
      }
      else {
        for (size_t i = 0; i < 32; i++)
        {
          //int pos = (i * FEATURE_BIT_WIDTH);
          //mac_src_0_s6[i] = (sc_int<FEATURE_BIT_WIDTH>)systolic6_feature_data_1d.read().range(pos + (FEATURE_BIT_WIDTH-1), pos);
          mac_src_0_s6[i] = systolic6_feature_data_1d[i].read().to_uint();
        }
      }
    }
    else {
      for (size_t i = 0; i < 32; i++)
      {
        mac_src_0_s6[i] = 0;
      }
    }
  }

  void _weight_split_data()
  {
    if (!rstn.read()) {   // Added on 2021/01/27 by hanji
     for (size_t i = 0; i < 32; i++)
     {
      mac_src_1[i].write(0);
     }
    }
    else {
     for (size_t i = 0; i < 32; i++)
     {
      //mac_src_1[i] = (sc_int<16>)weight_data_1d.read().range((i * 16) + 15, i * 16);
      mac_src_1[i] = (sc_int<WEIGHT_BIT_WIDTH>)weight_data_1d.read().range((i * WEIGHT_BIT_WIDTH) + (WEIGHT_BIT_WIDTH-1), i * WEIGHT_BIT_WIDTH);
      //mac_src_1[i] = (sc_int<16>)weight_data.read().range(15,0);
     }
    }
  }
  void _mac_clear()
  {
    if (!rstn.read())   // Added on 2020/12/17 by hanji
      mac_clear.write(0);
    else	
      //mac_clear = addr_if_start.read();
      mac_clear = addr_if_start_1d.read(); // Modified on 2021/01/27 by hanji
  }
  void _delays()
  {
    if (!rstn.read()) {  // Added on 2020/12/17 by hanji
      addr_if_start_1d.write(0);
      cache_en_1d.write(0);
      feature_share_en_1d.write(0);
      weight_data_1d.write(0);
      weight_data_en_1d.write(0);
      feature_data_en_1d.write(0);
      feature_data_en_2d.write(0);
      feature_data_en_3d.write(0);
      feature_data_en_4d.write(0);
      feature_data_en_5d.write(0);
      feature_data_en_6d.write(0);
      feature_data_en_7d.write(0);

      feature_share_en_1d.write(0);
      feature_share_en_2d.write(0);
      feature_share_en_3d.write(0);
      feature_share_en_4d.write(0);
      feature_share_en_5d.write(0);
      feature_share_en_6d.write(0);
      feature_share_en_7d.write(0);

      feature_data_sel_1d.write(0);
      feature_data_sel_2d.write(0);
      feature_data_sel_3d.write(0);
      feature_data_sel_4d.write(0);
      feature_data_sel_5d.write(0);
      feature_data_sel_6d.write(0);
      feature_data_sel_7d.write(0);
    }
    else {
      addr_if_start_1d = addr_if_start.read();
      cache_en_1d = cache_en.read();
      feature_share_en_1d = feature_share_en.read();
      weight_data_1d = weight_data.read();
      weight_data_en_1d = weight_data_en.read();

      feature_data_en_1d = feature_data_en.read();
      feature_data_en_2d = feature_data_en_1d.read();
      feature_data_en_3d = feature_data_en_2d.read();
      feature_data_en_4d = feature_data_en_3d.read();
      feature_data_en_5d = feature_data_en_4d.read();
      feature_data_en_6d = feature_data_en_5d.read();
      feature_data_en_7d = feature_data_en_6d.read();

      feature_share_en_1d = feature_share_en.read();
      feature_share_en_2d = feature_share_en_1d.read();
      feature_share_en_3d = feature_share_en_2d.read();
      feature_share_en_4d = feature_share_en_3d.read();
      feature_share_en_5d = feature_share_en_4d.read();
      feature_share_en_6d = feature_share_en_5d.read();
      feature_share_en_7d = feature_share_en_6d.read();

      //feature_data_sel_1d = feature_data_sel.read();
      feature_data_sel_1d = feature_data_sel.read().range(4, 0); // Modified on 2021/01/27 by hanji
      feature_data_sel_2d = feature_data_sel_1d.read();
      feature_data_sel_3d = feature_data_sel_2d.read();
      feature_data_sel_4d = feature_data_sel_3d.read();
      feature_data_sel_5d = feature_data_sel_4d.read();
      feature_data_sel_6d = feature_data_sel_5d.read();
      feature_data_sel_7d = feature_data_sel_6d.read();
    }
  }

  SC_CTOR(cache) : clk("clk"),
                   rstn("rstn"),
                   cache_en("cache_en"),
                   systolic_en("systolic_en"),
                   systolic_depth("systolic_depth"),
                   addr_if_start("addr_if_start"),
                   systolic_sel("systolic_sel"),
                   feature_data("feature_data"),
                   feature_share_en("feature_share_en"),
                   feature_data_en("feature_data_en"),
                   feature_data_sel("feature_data_sel"),
                   weight_data("weight_data"),
                   weight_data_en("weight_data_en"),
                  #ifndef GEN_WRAP
                   mac_src_0_s0("mac_src_0_s0", 32),
                   mac_src_0_s1("mac_src_0_s1", 32),
                   mac_src_0_s2("mac_src_0_s2", 32),
                   mac_src_0_s3("mac_src_0_s3", 32),
                   mac_src_0_s4("mac_src_0_s4", 32),
                   mac_src_0_s5("mac_src_0_s5", 32),
                   mac_src_0_s6("mac_src_0_s6", 32),
                   mac_src_1("mac_src_1", 32),
                  #endif
                   mac_src_valid("mac_src_valid"),
                   mac_clear("mac_clear")

  {
    SC_METHOD(_mac_src_valid);
    //sensitive << cache_en_1d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji

    SC_METHOD(_systolic0_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic1_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic2_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic3_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic4_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic5_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_systolic6_feature_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    //sensitive << feature_data_en << feature_data;
    //SC_METHOD(_ff_weight_data);

    SC_METHOD(_feature_split_src_data0);
    //sensitive << systolic0_feature_data_1d << feature_data_en_1d << feature_data_sel_1d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data1);
    //sensitive << systolic1_feature_data_1d << feature_data_en_2d << feature_data_sel_2d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data2);
    //sensitive << systolic2_feature_data_1d << feature_data_en_3d << feature_data_sel_3d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data3);
    //sensitive << systolic3_feature_data_1d << feature_data_en_4d << feature_data_sel_4d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data4);
    //sensitive << systolic4_feature_data_1d << feature_data_en_5d << feature_data_sel_5d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data5);
    //sensitive << systolic5_feature_data_1d << feature_data_en_6d << feature_data_sel_6d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_feature_split_src_data6);
    //sensitive << systolic6_feature_data_1d << feature_data_en_7d << feature_data_sel_7d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji

    SC_METHOD(_weight_split_data);
    //sensitive << weight_data_1d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji

    SC_METHOD(_mac_clear);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
    SC_METHOD(_delays);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/17 by hanji
  };
};
#endif
