TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bus.cpp \
        cpu6502.cpp \
        main.cpp

HEADERS += \
    bus.h \
    cpu6502.h
