#################################################
# Stratus IDE project file generated;
#################################################
QT       += core

QT       -= gui

CONFIG   += console
CONFIG   -= app_bundle

STRATUSHOME = $$(STRATUS_HOME)
SYSTEMCHOME = $$(SYSTEMC)

TEMPLATE = app
INCLUDEPATH += $${SYSTEMCHOME}/include
INCLUDEPATH += $${SYSTEMCHOME}/include/tlm
INCLUDEPATH += $${STRATUSHOME}/share/stratus/include
INCLUDEPATH += ./bdw_work/wrappers
INCLUDEPATH += ./

SOURCES += \ 
		./avg_pool.cpp \ 
		./bias_add.cpp \ 
		./bn_float32.cpp \ 
		./finish_gen.cpp \ 
		./fix2float.cpp \ 
		./float2fix.cpp \ 
		./fp_add.cpp \ 
		./fp_cmp.cpp \ 
		./fp_div.cpp \ 
		./fp_mul.cpp \ 
		./in_buff.cpp \ 
		./learn_clip.cpp \ 
		./linear_dequant.cpp \ 
		./m_float2fix.cpp \ 
		./relu_offset_float.cpp \ 
		./sfu_out_buff.cpp \ 
		avg_pool.cpp \ 
		in_buff.cpp \ 
		fix2float.cpp \ 
		fp_div.cpp \ 
		linear_dequant.cpp \ 
		fp_mul.cpp \ 
		fp_add.cpp \ 
		bn_float32.cpp \ 
		fp_cmp.cpp \ 
		relu_offset_float.cpp \ 
		learn_clip.cpp \ 
		float2fix.cpp \ 
		m_float2fix.cpp \ 
		bias_add.cpp \ 
		sfu_out_buff.cpp \ 
		finish_gen.cpp \ 

HEADERS += \ 
		./avg_pool.h \ 
		./bias_add.h \ 
		./bn_float32.h \ 
		./bn_float32_int2float.h \ 
		./config.h \ 
		./finish_gen.h \ 
		./fix2float.h \ 
		./float2fix.h \ 
		./fp_add.h \ 
		./fp_cmp.h \ 
		./fp_div.h \ 
		./fp_mul.h \ 
		./in_buff.h \ 
		./learn_clip.h \ 
		./linear_dequant.h \ 
		./m_float2fix.h \ 
		./relu_offset_float.h \ 
		./sfu_out_buff.h \ 
		avg_pool.h \ 
		in_buff.h \ 
		fix2float.h \ 
		fp_div.h \ 
		linear_dequant.h \ 
		fp_mul.h \ 
		fp_add.h \ 
		bn_float32.h \ 
		fp_cmp.h \ 
		relu_offset_float.h \ 
		learn_clip.h \ 
		float2fix.h \ 
		m_float2fix.h \ 
		bias_add.h \ 
		sfu_out_buff.h \ 
		finish_gen.h \ 

OTHER_FILES += \ 
		Makefile \ 
		/home/hanji/stratus/mv1/train_npu/sfu/project.tcl \ 

