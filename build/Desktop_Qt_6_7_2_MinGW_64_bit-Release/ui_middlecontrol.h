/********************************************************************************
** Form generated from reading UI file 'middlecontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDDLECONTROL_H
#define UI_MIDDLECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_middleControl
{
public:
    QPushButton *weatherButton;
    QPushButton *cameraButton_2;

    void setupUi(QWidget *middleControl)
    {
        if (middleControl->objectName().isEmpty())
            middleControl->setObjectName("middleControl");
        middleControl->resize(794, 684);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(middleControl->sizePolicy().hasHeightForWidth());
        middleControl->setSizePolicy(sizePolicy);
        middleControl->setAutoFillBackground(true);
        weatherButton = new QPushButton(middleControl);
        weatherButton->setObjectName("weatherButton");
        weatherButton->setGeometry(QRect(510, 150, 121, 121));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(weatherButton->sizePolicy().hasHeightForWidth());
        weatherButton->setSizePolicy(sizePolicy1);
        weatherButton->setAutoFillBackground(false);
        cameraButton_2 = new QPushButton(middleControl);
        cameraButton_2->setObjectName("cameraButton_2");
        cameraButton_2->setGeometry(QRect(130, 400, 121, 61));
        sizePolicy1.setHeightForWidth(cameraButton_2->sizePolicy().hasHeightForWidth());
        cameraButton_2->setSizePolicy(sizePolicy1);
        cameraButton_2->setAutoFillBackground(false);

        retranslateUi(middleControl);

        QMetaObject::connectSlotsByName(middleControl);
    } // setupUi

    void retranslateUi(QWidget *middleControl)
    {
        middleControl->setWindowTitle(QCoreApplication::translate("middleControl", "Form", nullptr));
        weatherButton->setText(QString());
        cameraButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class middleControl: public Ui_middleControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDDLECONTROL_H
