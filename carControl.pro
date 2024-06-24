QT       += core gui
QT  +=multimedia
QT  +=multimediawidgets
QT  +=network
INCLUDEPATH += $$PWD/AIUI/include/aiui
LIBS += -L$$PWD/AIUI/libs/x64 -laiui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aiuiwindow.cpp \
    camera.cpp \
    login.cpp \
    main.cpp \
    middlecontrol.cpp \
    weather.cpp \
    widget.cpp

HEADERS += \
    aiuiwindow.h \
    camera.h \
    login.h \
    middlecontrol.h \
    weather.h \
    weatherDate.h \
    widget.h

FORMS += \
    aiuiwindow.ui \
    camera.ui \
    login.ui \
    middlecontrol.ui \
    weather.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    IMg.qrc

DISTFILES +=

win32: LIBS += -L$$PWD/libs/x64/ -laiui

INCLUDEPATH += $$PWD/libs/x64
DEPENDPATH += $$PWD/libs/x64

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/libs/x64/aiui.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/libs/x64/libaiui.a
