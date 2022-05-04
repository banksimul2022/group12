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
    pin_window.cpp \
    transactions_window.cpp

HEADERS += \
    account_view.h \
    drawmoney.h \
    mainwindow.h \
    pin_window.h \
    transactions_window.h

FORMS += \
    account_view.ui \
    drawmoney.ui \
    mainwindow.ui \
    pin_window.ui \
    transactions_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/RestApi1/build/release/ -lRestApi1
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/RestApi1/build/debug/ -lRestApi1

INCLUDEPATH += $$PWD/RestApi1
DEPENDPATH += $$PWD/RestApi1
