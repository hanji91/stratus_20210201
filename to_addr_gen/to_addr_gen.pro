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
		./bias_add.cpp \ 
		./bias_addr_gen.cpp \ 
		./bn_addr_gen.cpp \ 
		./feature_write_addr_gen.cpp \ 
		./org_bn_addr_gen.cpp \ 
		./pw_feature_addr_gen.cpp \ 
		./pw_weight_addr_gen.cpp \ 
		./st_feature_addr_gen.cpp \ 
		./st_weight_addr_gen.cpp \ 
		st_feature_addr_gen.cpp \ 
		st_weight_addr_gen.cpp \ 
		pw_feature_addr_gen.cpp \ 
		pw_weight_addr_gen.cpp \ 
		bias_addr_gen.cpp \ 
		bn_addr_gen.cpp \ 
		org_bn_addr_gen.cpp \ 
		feature_write_addr_gen.cpp \ 

HEADERS += \ 
		./bias_add.h \ 
		./bias_addr_gen.h \ 
		./bn_addr_gen.h \ 
		./config.h \ 
		./feature_write_addr_gen.h \ 
		./org_bn_addr_gen.h \ 
		./pw_feature_addr_gen.h \ 
		./pw_weight_addr_gen.h \ 
		./st_feature_addr_gen.h \ 
		./st_weight_addr_gen.h \ 
		st_feature_addr_gen.h \ 
		st_weight_addr_gen.h \ 
		pw_feature_addr_gen.h \ 
		pw_weight_addr_gen.h \ 
		bias_addr_gen.h \ 
		bn_addr_gen.h \ 
		org_bn_addr_gen.h \ 
		feature_write_addr_gen.h \ 

OTHER_FILES += \ 
		Makefile \ 
		/home/hanji/stratus/mv1/train_npu/to_addr_gen/project.tcl \ 

