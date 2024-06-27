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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_weather
{
public:
    QWidget *widget;
    QWidget *widget_24;
    QLabel *lbDate_4;
    QLineEdit *leCity_4;
    QPushButton *searchButton;
    QWidget *widget_25;
    QLabel *lbGaoMao_4;
    QWidget *widget_26;
    QLabel *lblQualityTitle_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lbPm25Title_4;
    QLabel *lbPm25_4;
    QLabel *lbWindFl_4;
    QLabel *lbWindFx_4;
    QLabel *lbShiDu_4;
    QLabel *lbShiDuTitle_4;
    QLabel *lblQuality_4;
    QLabel *label_4;
    QWidget *widget_27;
    QLabel *lbTypeIcon_4;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_17;
    QLabel *lbType_4;
    QLabel *lbLowHigh_4;
    QLabel *lbCity_4;
    QLabel *lbTemp_4;
    QWidget *widget_28;
    QVBoxLayout *verticalLayout_27;
    QWidget *widget_29;
    QGridLayout *gridLayout_18;
    QLabel *lblWeek0_4;
    QLabel *lblWeek1_4;
    QLabel *lblWeek2_4;
    QLabel *lblWeek3_4;
    QLabel *lblWeek4_4;
    QLabel *lblWeek5_4;
    QLabel *lblDate0_4;
    QLabel *lblDate1_4;
    QLabel *lblDate2_4;
    QLabel *lblDate3_4;
    QLabel *lblDate4_4;
    QLabel *lblDate5_4;
    QWidget *widget_30;
    QGridLayout *gridLayout_19;
    QLabel *lblType5_4;
    QLabel *lblType1_4;
    QLabel *lblType4_4;
    QLabel *lblType3_4;
    QLabel *lblTypeIcon0_4;
    QLabel *lblType0_4;
    QLabel *lblTypeIcon1_4;
    QLabel *lblType2_4;
    QLabel *lblTypeIcon3_4;
    QLabel *lblTypeIcon2_4;
    QLabel *lblTypeIcon4_4;
    QLabel *lblTypeIcon5_4;
    QWidget *widget_31;
    QHBoxLayout *horizontalLayout_23;
    QLabel *lblQuality0_4;
    QLabel *lblQuality1_4;
    QLabel *lblQuality2_4;
    QLabel *lblQuality3_4;
    QLabel *lblQuality4_4;
    QLabel *lblQuality5_4;
    QWidget *widget_33;
    QGridLayout *gridLayout_20;
    QLabel *lblFx0_4;
    QLabel *lblFx1_4;
    QLabel *lblFx2_4;
    QLabel *lblFx3_4;
    QLabel *lblFx4_4;
    QLabel *lblFx5_4;
    QLabel *lblFl0_4;
    QLabel *lblFl1_4;
    QLabel *lblFl2_4;
    QLabel *lblFl3_4;
    QLabel *lblFl4_4;
    QLabel *lblFl5_4;

    void setupUi(QWidget *weather)
    {
        if (weather->objectName().isEmpty())
            weather->setObjectName("weather");
        weather->resize(819, 675);
        widget = new QWidget(weather);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, 0, 831, 701));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
""));
        widget_24 = new QWidget(widget);
        widget_24->setObjectName("widget_24");
        widget_24->setGeometry(QRect(0, 0, 811, 51));
        lbDate_4 = new QLabel(widget_24);
        lbDate_4->setObjectName("lbDate_4");
        lbDate_4->setGeometry(QRect(380, 5, 411, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(false);
        font.setKerning(true);
        lbDate_4->setFont(font);
        lbDate_4->setAlignment(Qt::AlignCenter);
        lbDate_4->setOpenExternalLinks(false);
        leCity_4 = new QLineEdit(widget_24);
        leCity_4->setObjectName("leCity_4");
        leCity_4->setGeometry(QRect(5, 15, 231, 31));
        leCity_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-radius:10px;\n"
"padding:2px 4px"));
        searchButton = new QPushButton(widget_24);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(250, 10, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        widget_25 = new QWidget(widget);
        widget_25->setObjectName("widget_25");
        widget_25->setGeometry(QRect(40, 200, 342, 251));
        lbGaoMao_4 = new QLabel(widget_25);
        lbGaoMao_4->setObjectName("lbGaoMao_4");
        lbGaoMao_4->setGeometry(QRect(17, 43, 241, 31));
        lbGaoMao_4->setWordWrap(true);
        widget_26 = new QWidget(widget_25);
        widget_26->setObjectName("widget_26");
        widget_26->setGeometry(QRect(0, 123, 281, 131));
        widget_26->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-radius: 15px"));
        lblQualityTitle_4 = new QLabel(widget_26);
        lblQualityTitle_4->setObjectName("lblQualityTitle_4");
        lblQualityTitle_4->setGeometry(QRect(210, 73, 61, 20));
        QFont font1;
        font1.setPointSize(10);
        lblQualityTitle_4->setFont(font1);
        lblQualityTitle_4->setAlignment(Qt::AlignCenter);
        label = new QLabel(widget_26);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 51, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("image: url(:/pm25.png);"));
        label_2 = new QLabel(widget_26);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/shidu.png);"));
        label_3 = new QLabel(widget_26);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 40, 41));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/wind.png);"));
        lbPm25Title_4 = new QLabel(widget_26);
        lbPm25Title_4->setObjectName("lbPm25Title_4");
        lbPm25Title_4->setGeometry(QRect(220, 20, 41, 20));
        lbPm25Title_4->setFont(font1);
        lbPm25Title_4->setAlignment(Qt::AlignCenter);
        lbPm25_4 = new QLabel(widget_26);
        lbPm25_4->setObjectName("lbPm25_4");
        lbPm25_4->setGeometry(QRect(220, 46, 21, 20));
        lbPm25_4->setFont(font1);
        lbPm25_4->setAlignment(Qt::AlignCenter);
        lbWindFl_4 = new QLabel(widget_26);
        lbWindFl_4->setObjectName("lbWindFl_4");
        lbWindFl_4->setGeometry(QRect(70, 40, 21, 21));
        lbWindFl_4->setFont(font1);
        lbWindFl_4->setAlignment(Qt::AlignCenter);
        lbWindFx_4 = new QLabel(widget_26);
        lbWindFx_4->setObjectName("lbWindFx_4");
        lbWindFx_4->setGeometry(QRect(60, 10, 51, 31));
        lbWindFx_4->setFont(font1);
        lbWindFx_4->setAlignment(Qt::AlignCenter);
        lbShiDu_4 = new QLabel(widget_26);
        lbShiDu_4->setObjectName("lbShiDu_4");
        lbShiDu_4->setGeometry(QRect(50, 100, 31, 21));
        lbShiDu_4->setFont(font1);
        lbShiDu_4->setAlignment(Qt::AlignCenter);
        lbShiDuTitle_4 = new QLabel(widget_26);
        lbShiDuTitle_4->setObjectName("lbShiDuTitle_4");
        lbShiDuTitle_4->setGeometry(QRect(50, 76, 41, 20));
        lbShiDuTitle_4->setFont(font1);
        lbShiDuTitle_4->setAlignment(Qt::AlignCenter);
        lblQuality_4 = new QLabel(widget_26);
        lblQuality_4->setObjectName("lblQuality_4");
        lblQuality_4->setGeometry(QRect(220, 100, 31, 20));
        lblQuality_4->setFont(font1);
        lblQuality_4->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget_26);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 80, 51, 51));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/aqi.png);"));
        label_4->setScaledContents(true);
        widget_27 = new QWidget(widget);
        widget_27->setObjectName("widget_27");
        widget_27->setGeometry(QRect(20, 60, 320, 120));
        lbTypeIcon_4 = new QLabel(widget_27);
        lbTypeIcon_4->setObjectName("lbTypeIcon_4");
        lbTypeIcon_4->setGeometry(QRect(10, 10, 81, 81));
        lbTypeIcon_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lbTypeIcon_4->setScaledContents(true);
        lbTypeIcon_4->setAlignment(Qt::AlignCenter);
        layoutWidget_4 = new QWidget(widget_27);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(100, 0, 221, 115));
        gridLayout_17 = new QGridLayout(layoutWidget_4);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_17->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_17->setVerticalSpacing(1);
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        lbType_4 = new QLabel(layoutWidget_4);
        lbType_4->setObjectName("lbType_4");
        lbType_4->setLayoutDirection(Qt::LeftToRight);
        lbType_4->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(lbType_4, 1, 0, 1, 1);

        lbLowHigh_4 = new QLabel(layoutWidget_4);
        lbLowHigh_4->setObjectName("lbLowHigh_4");
        lbLowHigh_4->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(lbLowHigh_4, 1, 1, 1, 2);

        lbCity_4 = new QLabel(layoutWidget_4);
        lbCity_4->setObjectName("lbCity_4");
        lbCity_4->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(lbCity_4, 0, 2, 1, 1);

        lbTemp_4 = new QLabel(layoutWidget_4);
        lbTemp_4->setObjectName("lbTemp_4");
        QFont font2;
        font2.setPointSize(32);
        lbTemp_4->setFont(font2);
        lbTemp_4->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(lbTemp_4, 0, 0, 1, 2);

        widget_28 = new QWidget(widget);
        widget_28->setObjectName("widget_28");
        widget_28->setGeometry(QRect(380, 60, 441, 431));
        verticalLayout_27 = new QVBoxLayout(widget_28);
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName("verticalLayout_27");
        widget_29 = new QWidget(widget_28);
        widget_29->setObjectName("widget_29");
        widget_29->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_18 = new QGridLayout(widget_29);
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setHorizontalSpacing(6);
        gridLayout_18->setVerticalSpacing(0);
        lblWeek0_4 = new QLabel(widget_29);
        lblWeek0_4->setObjectName("lblWeek0_4");
        lblWeek0_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek0_4, 0, 0, 1, 1);

        lblWeek1_4 = new QLabel(widget_29);
        lblWeek1_4->setObjectName("lblWeek1_4");
        lblWeek1_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek1_4, 0, 1, 1, 1);

        lblWeek2_4 = new QLabel(widget_29);
        lblWeek2_4->setObjectName("lblWeek2_4");
        lblWeek2_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek2_4, 0, 2, 1, 1);

        lblWeek3_4 = new QLabel(widget_29);
        lblWeek3_4->setObjectName("lblWeek3_4");
        lblWeek3_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek3_4, 0, 3, 1, 1);

        lblWeek4_4 = new QLabel(widget_29);
        lblWeek4_4->setObjectName("lblWeek4_4");
        lblWeek4_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek4_4, 0, 4, 1, 1);

        lblWeek5_4 = new QLabel(widget_29);
        lblWeek5_4->setObjectName("lblWeek5_4");
        lblWeek5_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblWeek5_4, 0, 5, 1, 1);

        lblDate0_4 = new QLabel(widget_29);
        lblDate0_4->setObjectName("lblDate0_4");
        lblDate0_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate0_4, 1, 0, 1, 1);

        lblDate1_4 = new QLabel(widget_29);
        lblDate1_4->setObjectName("lblDate1_4");
        lblDate1_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate1_4, 1, 1, 1, 1);

        lblDate2_4 = new QLabel(widget_29);
        lblDate2_4->setObjectName("lblDate2_4");
        lblDate2_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate2_4, 1, 2, 1, 1);

        lblDate3_4 = new QLabel(widget_29);
        lblDate3_4->setObjectName("lblDate3_4");
        lblDate3_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate3_4, 1, 3, 1, 1);

        lblDate4_4 = new QLabel(widget_29);
        lblDate4_4->setObjectName("lblDate4_4");
        lblDate4_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate4_4, 1, 4, 1, 1);

        lblDate5_4 = new QLabel(widget_29);
        lblDate5_4->setObjectName("lblDate5_4");
        lblDate5_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5_4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(lblDate5_4, 1, 5, 1, 1);


        verticalLayout_27->addWidget(widget_29);

        widget_30 = new QWidget(widget_28);
        widget_30->setObjectName("widget_30");
        sizePolicy.setHeightForWidth(widget_30->sizePolicy().hasHeightForWidth());
        widget_30->setSizePolicy(sizePolicy);
        widget_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_19 = new QGridLayout(widget_30);
        gridLayout_19->setObjectName("gridLayout_19");
        gridLayout_19->setVerticalSpacing(0);
        gridLayout_19->setContentsMargins(-1, 5, -1, 5);
        lblType5_4 = new QLabel(widget_30);
        lblType5_4->setObjectName("lblType5_4");
        lblType5_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType5_4, 3, 5, 1, 1);

        lblType1_4 = new QLabel(widget_30);
        lblType1_4->setObjectName("lblType1_4");
        sizePolicy.setHeightForWidth(lblType1_4->sizePolicy().hasHeightForWidth());
        lblType1_4->setSizePolicy(sizePolicy);
        lblType1_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType1_4, 3, 1, 1, 1);

        lblType4_4 = new QLabel(widget_30);
        lblType4_4->setObjectName("lblType4_4");
        sizePolicy.setHeightForWidth(lblType4_4->sizePolicy().hasHeightForWidth());
        lblType4_4->setSizePolicy(sizePolicy);
        lblType4_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType4_4, 3, 4, 1, 1);

        lblType3_4 = new QLabel(widget_30);
        lblType3_4->setObjectName("lblType3_4");
        sizePolicy.setHeightForWidth(lblType3_4->sizePolicy().hasHeightForWidth());
        lblType3_4->setSizePolicy(sizePolicy);
        lblType3_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType3_4, 3, 3, 1, 1);

        lblTypeIcon0_4 = new QLabel(widget_30);
        lblTypeIcon0_4->setObjectName("lblTypeIcon0_4");
        sizePolicy.setHeightForWidth(lblTypeIcon0_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon0_4->setSizePolicy(sizePolicy);
        lblTypeIcon0_4->setMinimumSize(QSize(0, 0));
        lblTypeIcon0_4->setMaximumSize(QSize(1000, 1000));
        lblTypeIcon0_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblTypeIcon0_4->setScaledContents(true);
        lblTypeIcon0_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon0_4, 0, 0, 2, 1);

        lblType0_4 = new QLabel(widget_30);
        lblType0_4->setObjectName("lblType0_4");
        sizePolicy.setHeightForWidth(lblType0_4->sizePolicy().hasHeightForWidth());
        lblType0_4->setSizePolicy(sizePolicy);
        lblType0_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType0_4, 3, 0, 1, 1);

        lblTypeIcon1_4 = new QLabel(widget_30);
        lblTypeIcon1_4->setObjectName("lblTypeIcon1_4");
        sizePolicy.setHeightForWidth(lblTypeIcon1_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon1_4->setSizePolicy(sizePolicy);
        lblTypeIcon1_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoYu.png")));
        lblTypeIcon1_4->setScaledContents(true);
        lblTypeIcon1_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon1_4, 0, 1, 2, 1);

        lblType2_4 = new QLabel(widget_30);
        lblType2_4->setObjectName("lblType2_4");
        sizePolicy.setHeightForWidth(lblType2_4->sizePolicy().hasHeightForWidth());
        lblType2_4->setSizePolicy(sizePolicy);
        lblType2_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblType2_4, 3, 2, 1, 1);

        lblTypeIcon3_4 = new QLabel(widget_30);
        lblTypeIcon3_4->setObjectName("lblTypeIcon3_4");
        sizePolicy.setHeightForWidth(lblTypeIcon3_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon3_4->setSizePolicy(sizePolicy);
        lblTypeIcon3_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3_4->setScaledContents(true);
        lblTypeIcon3_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon3_4, 0, 3, 2, 1);

        lblTypeIcon2_4 = new QLabel(widget_30);
        lblTypeIcon2_4->setObjectName("lblTypeIcon2_4");
        sizePolicy.setHeightForWidth(lblTypeIcon2_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon2_4->setSizePolicy(sizePolicy);
        lblTypeIcon2_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2_4->setScaledContents(true);
        lblTypeIcon2_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon2_4, 0, 2, 2, 1);

        lblTypeIcon4_4 = new QLabel(widget_30);
        lblTypeIcon4_4->setObjectName("lblTypeIcon4_4");
        sizePolicy.setHeightForWidth(lblTypeIcon4_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon4_4->setSizePolicy(sizePolicy);
        lblTypeIcon4_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4_4->setScaledContents(true);
        lblTypeIcon4_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon4_4, 0, 4, 2, 1);

        lblTypeIcon5_4 = new QLabel(widget_30);
        lblTypeIcon5_4->setObjectName("lblTypeIcon5_4");
        sizePolicy.setHeightForWidth(lblTypeIcon5_4->sizePolicy().hasHeightForWidth());
        lblTypeIcon5_4->setSizePolicy(sizePolicy);
        lblTypeIcon5_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5_4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5_4->setScaledContents(true);
        lblTypeIcon5_4->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(lblTypeIcon5_4, 0, 5, 2, 1);


        verticalLayout_27->addWidget(widget_30);

        widget_31 = new QWidget(widget_28);
        widget_31->setObjectName("widget_31");
        widget_31->setStyleSheet(QString::fromUtf8("border-radius: 4px"));
        horizontalLayout_23 = new QHBoxLayout(widget_31);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(-1, 5, -1, 5);
        lblQuality0_4 = new QLabel(widget_31);
        lblQuality0_4->setObjectName("lblQuality0_4");
        lblQuality0_4->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;"));
        lblQuality0_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality0_4);

        lblQuality1_4 = new QLabel(widget_31);
        lblQuality1_4->setObjectName("lblQuality1_4");
        lblQuality1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        lblQuality1_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality1_4);

        lblQuality2_4 = new QLabel(widget_31);
        lblQuality2_4->setObjectName("lblQuality2_4");
        lblQuality2_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        lblQuality2_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality2_4);

        lblQuality3_4 = new QLabel(widget_31);
        lblQuality3_4->setObjectName("lblQuality3_4");
        lblQuality3_4->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        lblQuality3_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality3_4);

        lblQuality4_4 = new QLabel(widget_31);
        lblQuality4_4->setObjectName("lblQuality4_4");
        lblQuality4_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lblQuality4_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality4_4);

        lblQuality5_4 = new QLabel(widget_31);
        lblQuality5_4->setObjectName("lblQuality5_4");
        lblQuality5_4->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        lblQuality5_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lblQuality5_4);


        verticalLayout_27->addWidget(widget_31);

        widget_33 = new QWidget(widget_28);
        widget_33->setObjectName("widget_33");
        widget_33->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_20 = new QGridLayout(widget_33);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setVerticalSpacing(0);
        lblFx0_4 = new QLabel(widget_33);
        lblFx0_4->setObjectName("lblFx0_4");
        lblFx0_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx0_4, 0, 0, 1, 1);

        lblFx1_4 = new QLabel(widget_33);
        lblFx1_4->setObjectName("lblFx1_4");
        lblFx1_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx1_4, 0, 1, 1, 1);

        lblFx2_4 = new QLabel(widget_33);
        lblFx2_4->setObjectName("lblFx2_4");
        lblFx2_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx2_4, 0, 2, 1, 1);

        lblFx3_4 = new QLabel(widget_33);
        lblFx3_4->setObjectName("lblFx3_4");
        lblFx3_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx3_4, 0, 3, 1, 1);

        lblFx4_4 = new QLabel(widget_33);
        lblFx4_4->setObjectName("lblFx4_4");
        lblFx4_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx4_4, 0, 4, 1, 1);

        lblFx5_4 = new QLabel(widget_33);
        lblFx5_4->setObjectName("lblFx5_4");
        lblFx5_4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFx5_4, 0, 5, 1, 1);

        lblFl0_4 = new QLabel(widget_33);
        lblFl0_4->setObjectName("lblFl0_4");
        lblFl0_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl0_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl0_4, 1, 0, 1, 1);

        lblFl1_4 = new QLabel(widget_33);
        lblFl1_4->setObjectName("lblFl1_4");
        lblFl1_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl1_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl1_4, 1, 1, 1, 1);

        lblFl2_4 = new QLabel(widget_33);
        lblFl2_4->setObjectName("lblFl2_4");
        lblFl2_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl2_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl2_4, 1, 2, 1, 1);

        lblFl3_4 = new QLabel(widget_33);
        lblFl3_4->setObjectName("lblFl3_4");
        lblFl3_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl3_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl3_4, 1, 3, 1, 1);

        lblFl4_4 = new QLabel(widget_33);
        lblFl4_4->setObjectName("lblFl4_4");
        lblFl4_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl4_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl4_4, 1, 4, 1, 1);

        lblFl5_4 = new QLabel(widget_33);
        lblFl5_4->setObjectName("lblFl5_4");
        lblFl5_4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl5_4->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(lblFl5_4, 1, 5, 1, 1);


        verticalLayout_27->addWidget(widget_33);


        retranslateUi(weather);

        QMetaObject::connectSlotsByName(weather);
    } // setupUi

    void retranslateUi(QWidget *weather)
    {
        weather->setWindowTitle(QCoreApplication::translate("weather", "Form", nullptr));
        lbDate_4->setText(QCoreApplication::translate("weather", "2024/6/18 \346\230\237\346\234\237\345\205\255", nullptr));
        leCity_4->setPlaceholderText(QCoreApplication::translate("weather", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\237\216\345\270\202", nullptr));
        searchButton->setText(QString());
        lbGaoMao_4->setText(QCoreApplication::translate("weather", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblQualityTitle_4->setText(QCoreApplication::translate("weather", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        lbPm25Title_4->setText(QCoreApplication::translate("weather", "PM2.5", nullptr));
        lbPm25_4->setText(QCoreApplication::translate("weather", "10", nullptr));
        lbWindFl_4->setText(QCoreApplication::translate("weather", "3\347\272\247", nullptr));
        lbWindFx_4->setText(QCoreApplication::translate("weather", "\350\245\277\345\214\227\351\243\216", nullptr));
        lbShiDu_4->setText(QCoreApplication::translate("weather", "3\347\272\247", nullptr));
        lbShiDuTitle_4->setText(QCoreApplication::translate("weather", "\346\271\277\345\272\246", nullptr));
        lblQuality_4->setText(QCoreApplication::translate("weather", "3\347\272\247", nullptr));
        label_4->setText(QString());
        lbTypeIcon_4->setText(QString());
        lbType_4->setText(QCoreApplication::translate("weather", "\346\231\264\345\244\251", nullptr));
        lbLowHigh_4->setText(QCoreApplication::translate("weather", "19\342\204\203~32\342\204\203", nullptr));
        lbCity_4->setText(QCoreApplication::translate("weather", "\345\214\227\344\272\254", nullptr));
        lbTemp_4->setText(QCoreApplication::translate("weather", "32\302\260", nullptr));
        lblWeek0_4->setText(QCoreApplication::translate("weather", "\346\230\250\345\244\251", nullptr));
        lblWeek1_4->setText(QCoreApplication::translate("weather", "\344\273\212\345\244\251", nullptr));
        lblWeek2_4->setText(QCoreApplication::translate("weather", "\346\230\216\345\244\251", nullptr));
        lblWeek3_4->setText(QCoreApplication::translate("weather", "\345\221\250\345\233\233", nullptr));
        lblWeek4_4->setText(QCoreApplication::translate("weather", "\345\221\250\344\272\224", nullptr));
        lblWeek5_4->setText(QCoreApplication::translate("weather", "\345\221\250\345\205\255", nullptr));
        lblDate0_4->setText(QCoreApplication::translate("weather", "01/01", nullptr));
        lblDate1_4->setText(QCoreApplication::translate("weather", "01/02", nullptr));
        lblDate2_4->setText(QCoreApplication::translate("weather", "01/03", nullptr));
        lblDate3_4->setText(QCoreApplication::translate("weather", "01/04", nullptr));
        lblDate4_4->setText(QCoreApplication::translate("weather", "01/05", nullptr));
        lblDate5_4->setText(QCoreApplication::translate("weather", "01/06", nullptr));
        lblType5_4->setText(QCoreApplication::translate("weather", "\346\232\264\351\233\250", nullptr));
        lblType1_4->setText(QCoreApplication::translate("weather", "\345\260\217\351\233\250", nullptr));
        lblType4_4->setText(QCoreApplication::translate("weather", "\344\270\255\351\233\250", nullptr));
        lblType3_4->setText(QCoreApplication::translate("weather", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon0_4->setText(QString());
        lblType0_4->setText(QCoreApplication::translate("weather", "\346\231\264", nullptr));
        lblTypeIcon1_4->setText(QString());
        lblType2_4->setText(QCoreApplication::translate("weather", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon3_4->setText(QString());
        lblTypeIcon2_4->setText(QString());
        lblTypeIcon4_4->setText(QString());
        lblTypeIcon5_4->setText(QString());
        lblQuality0_4->setText(QCoreApplication::translate("weather", "\344\274\230", nullptr));
        lblQuality1_4->setText(QCoreApplication::translate("weather", "\350\211\257", nullptr));
        lblQuality2_4->setText(QCoreApplication::translate("weather", "\350\275\273\345\272\246", nullptr));
        lblQuality3_4->setText(QCoreApplication::translate("weather", "\344\270\255\345\272\246", nullptr));
        lblQuality4_4->setText(QCoreApplication::translate("weather", "\351\207\215\345\272\246", nullptr));
        lblQuality5_4->setText(QCoreApplication::translate("weather", "\344\270\245\351\207\215", nullptr));
        lblFx0_4->setText(QCoreApplication::translate("weather", "\344\270\234\351\243\216", nullptr));
        lblFx1_4->setText(QCoreApplication::translate("weather", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblFx2_4->setText(QCoreApplication::translate("weather", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx3_4->setText(QCoreApplication::translate("weather", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx4_4->setText(QCoreApplication::translate("weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx5_4->setText(QCoreApplication::translate("weather", "\350\245\277\351\243\216", nullptr));
        lblFl0_4->setText(QCoreApplication::translate("weather", "2\347\272\247", nullptr));
        lblFl1_4->setText(QCoreApplication::translate("weather", "3\347\272\247", nullptr));
        lblFl2_4->setText(QCoreApplication::translate("weather", "2\347\272\247", nullptr));
        lblFl3_4->setText(QCoreApplication::translate("weather", "1\347\272\247", nullptr));
        lblFl4_4->setText(QCoreApplication::translate("weather", "2\347\272\247", nullptr));
        lblFl5_4->setText(QCoreApplication::translate("weather", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class weather: public Ui_weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
