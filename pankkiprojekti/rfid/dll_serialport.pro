QT -= gui
QT += serialport
QT += core

TEMPLATE = lib
DEFINES += DLL_SERIALPORT_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dll_serialport.cpp \
    engine.cpp


HEADERS += \
    dll_serialport_global.h \
    dll_serialport.h \
    engine.h


# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
