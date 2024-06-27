/********************************************************************************
** Form generated from reading UI file 'middlecontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDDLECONTROL_H
#define UI_MIDDLECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_middleControl
{
public:
    QLabel *label;
    QPushButton *weatherButton;
    QLabel *label_2;
    QPushButton *cameraButton_2;
    QLabel *label_3;
    QPushButton *yuyingButton_2;
    QLabel *label_4;
    QPushButton *navigateButton_2;
    QLabel *label_5;

    void setupUi(QWidget *middleControl)
    {
        if (middleControl->objectName().isEmpty())
            middleControl->setObjectName("middleControl");
        middleControl->resize(888, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(middleControl->sizePolicy().hasHeightForWidth());
        middleControl->setSizePolicy(sizePolicy);
        middleControl->setAutoFillBackground(true);
        label = new QLabel(middleControl);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 3, 881, 691));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(792, 684));
        label->setAutoFillBackground(true);
        label->setAlignment(Qt::AlignCenter);
        weatherButton = new QPushButton(middleControl);
        weatherButton->setObjectName("weatherButton");
        weatherButton->setGeometry(QRect(670, 60, 121, 121));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(weatherButton->sizePolicy().hasHeightForWidth());
        weatherButton->setSizePolicy(sizePolicy2);
        weatherButton->setAutoFillBackground(false);
        label_2 = new QLabel(middleControl);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 220, 171, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        cameraButton_2 = new QPushButton(middleControl);
        cameraButton_2->setObjectName("cameraButton_2");
        cameraButton_2->setGeometry(QRect(210, 330, 111, 61));
        sizePolicy2.setHeightForWidth(cameraButton_2->sizePolicy().hasHeightForWidth());
        cameraButton_2->setSizePolicy(sizePolicy2);
        cameraButton_2->setAutoFillBackground(false);
        label_3 = new QLabel(middleControl);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 410, 141, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);
        yuyingButton_2 = new QPushButton(middleControl);
        yuyingButton_2->setObjectName("yuyingButton_2");
        yuyingButton_2->setGeometry(QRect(200, 70, 121, 121));
        sizePolicy2.setHeightForWidth(yuyingButton_2->sizePolicy().hasHeightForWidth());
        yuyingButton_2->setSizePolicy(sizePolicy2);
        yuyingButton_2->setAutoFillBackground(false);
        label_4 = new QLabel(middleControl);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 200, 141, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        navigateButton_2 = new QPushButton(middleControl);
        navigateButton_2->setObjectName("navigateButton_2");
        navigateButton_2->setGeometry(QRect(660, 290, 121, 101));
        sizePolicy2.setHeightForWidth(navigateButton_2->sizePolicy().hasHeightForWidth());
        navigateButton_2->setSizePolicy(sizePolicy2);
        navigateButton_2->setAutoFillBackground(false);
        label_5 = new QLabel(middleControl);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(650, 410, 141, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        retranslateUi(middleControl);

        QMetaObject::connectSlotsByName(middleControl);
    } // setupUi

    void retranslateUi(QWidget *middleControl)
    {
        middleControl->setWindowTitle(QCoreApplication::translate("middleControl", "Form", nullptr));
        label->setText(QString());
        weatherButton->setText(QString());
        label_2->setText(QCoreApplication::translate("middleControl", "\350\275\246\350\275\275\345\244\251\346\260\224\351\242\204\346\212\245\347\263\273\347\273\237", nullptr));
        cameraButton_2->setText(QString());
        label_3->setText(QCoreApplication::translate("middleControl", "\345\200\222\350\275\246\346\265\201\345\205\211", nullptr));
        yuyingButton_2->setText(QString());
        label_4->setText(QCoreApplication::translate("middleControl", "\346\231\272\350\203\275\350\257\255\351\237\263\345\212\251\346\211\213", nullptr));
        navigateButton_2->setText(QString());
        label_5->setText(QCoreApplication::translate("middleControl", "\345\234\260\345\233\276\345\257\274\350\210\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class middleControl: public Ui_middleControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDDLECONTROL_H
