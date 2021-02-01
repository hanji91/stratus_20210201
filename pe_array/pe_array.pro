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
		./cache.cpp \ 
		./mac.cpp \ 
		./pe_array.cpp \ 
		pe_array.cpp \ 
		mac.cpp \ 
		cache.cpp \ 

HEADERS += \ 
		./cache.h \ 
		./config.h \ 
		./mac.h \ 
		./pe_array.h \ 
		pe_array.h \ 
		mac.h \ 
		cache.h \ 

OTHER_FILES += \ 
		Makefile \ 
		/home/hanji/stratus/mv1/train_npu/pe_array/project.tcl \ 

