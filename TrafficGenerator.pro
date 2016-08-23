TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/Cli.cpp \
    src/Configurator.cpp \
    src/main.cpp \
    src/PacketGenerator.cpp \
    src/ThreadManager.cpp

HEADERS += \
    src/Cli.hpp \
    src/Configurator.hpp \
    src/GlobalDefs.hpp \
    src/main.hpp \
    src/PacketGenerator.hpp \
    src/ThreadManager.hpp \
    UT/ut_Cli.hpp \
    UT/ut_Configurator.hpp \
    UT/ut_PacketGenerataor.hpp \
    UT/ut_ThreadManager.hpp \
    src/Logger.hpp

