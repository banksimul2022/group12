QT       += core
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h
    dll_serialport.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../dll_serialport/build/debug/ -ldll_serialport


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-dll_serialport-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/release/ -ldll_serialport
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-dll_serialport-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/ -ldll_serialport
else:unix: LIBS += -L$$PWD/../build-dll_serialport-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/ -ldll_serialport

INCLUDEPATH += $$PWD/../rfid
DEPENDPATH += $$PWD/../rfid
