/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_weather
{
public:
    QLineEdit *lineEdit;
    QPushButton *foundButton;

    void setupUi(QWidget *weather)
    {
        if (weather->objectName().isEmpty())
            weather->setObjectName("weather");
        weather->resize(811, 675);
        lineEdit = new QLineEdit(weather);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 20, 161, 21));
        foundButton = new QPushButton(weather);
        foundButton->setObjectName("foundButton");
        foundButton->setGeometry(QRect(220, 10, 41, 41));

        retranslateUi(weather);

        QMetaObject::connectSlotsByName(weather);
    } // setupUi

    void retranslateUi(QWidget *weather)
    {
        weather->setWindowTitle(QCoreApplication::translate("weather", "Form", nullptr));
        foundButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class weather: public Ui_weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
