QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account_view.cpp \
    drawmoney.cpp \
    main.cpp \
    mainwindow.cpp \
    transactions_window.cpp

HEADERS += \
    account_view.h \
    drawmoney.h \
    mainwindow.h \
    transactions_window.h

FORMS += \
    account_view.ui \
    drawmoney.ui \
    mainwindow.ui \
    transactions_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/restapidll/build/release/ -lrestapidll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/restapidll/build/debug/ -lrestapidll


win32: LIBS += -L$$PWD/restapidll/build/debug/ -lrestapidll

INCLUDEPATH += $$PWD/restapidll
DEPENDPATH += $$PWD/restapidll

win32: LIBS += -L$$PWD/dll_pinui/pinui/build/debug/ -lpinui

INCLUDEPATH += $$PWD/dll_pinui/pinui
DEPENDPATH += $$PWD/dll_pinui/pinui
