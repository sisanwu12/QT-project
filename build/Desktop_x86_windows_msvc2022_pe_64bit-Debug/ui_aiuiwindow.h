/********************************************************************************
** Form generated from reading UI file 'aiuiwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIUIWINDOW_H
#define UI_AIUIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_aiuiwindow
{
public:

    void setupUi(QDialog *aiuiwindow)
    {
        if (aiuiwindow->objectName().isEmpty())
            aiuiwindow->setObjectName("aiuiwindow");
        aiuiwindow->resize(673, 308);

        retranslateUi(aiuiwindow);

        QMetaObject::connectSlotsByName(aiuiwindow);
    } // setupUi

    void retranslateUi(QDialog *aiuiwindow)
    {
        aiuiwindow->setWindowTitle(QCoreApplication::translate("aiuiwindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aiuiwindow: public Ui_aiuiwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIUIWINDOW_H
