QT       += core gui
QT  +=multimedia
QT  +=multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    camera.cpp \
    login.cpp \
    main.cpp \
    middlecontrol.cpp \
    weather.cpp \
    widget.cpp

HEADERS += \
    camera.h \
    login.h \
    middlecontrol.h \
    weather.h \
    widget.h

FORMS += \
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
