/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QPushButton *closeButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;

    void setupUi(QWidget *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName("camera");
        camera->resize(792, 661);
        closeButton_2 = new QPushButton(camera);
        closeButton_2->setObjectName("closeButton_2");
        closeButton_2->setGeometry(QRect(500, 550, 80, 18));
        verticalLayoutWidget = new QWidget(camera);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(140, 130, 531, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(camera);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(280, 550, 80, 18));

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QWidget *camera)
    {
        camera->setWindowTitle(QCoreApplication::translate("camera", "Form", nullptr));
        closeButton_2->setText(QCoreApplication::translate("camera", "\346\232\202\345\201\234", nullptr));
        startButton->setText(QCoreApplication::translate("camera", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
