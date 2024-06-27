QT       += core gui
QT  +=multimedia
QT  +=multimediawidgets
QT  +=network


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
    weatherTool.h \
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


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/x64/ -laiui
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/x64/ -laiui

INCLUDEPATH += $$PWD/include/aiui
DEPENDPATH += $$PWD/include/aiui

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/x64/libaiui.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/x64/libaiui.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/x64/aiui.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/x64/aiui.lib
