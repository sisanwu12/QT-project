/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_weather
{
public:

    void setupUi(QWidget *weather)
    {
        if (weather->objectName().isEmpty())
            weather->setObjectName("weather");
        weather->resize(790, 675);

        retranslateUi(weather);

        QMetaObject::connectSlotsByName(weather);
    } // setupUi

    void retranslateUi(QWidget *weather)
    {
        weather->setWindowTitle(QCoreApplication::translate("weather", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class weather: public Ui_weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
