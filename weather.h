#ifndef WEATHER_H
#define WEATHER_H
#include <middlecontrol.h>
#include <QWidget>
#include<QMenu>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include"weatherDate.h"
#include<QLabel>
#include<QAction>
#include<QPainter>
#include<QString>
namespace Ui {
class weather;
}

class weather : public QWidget
{
    Q_OBJECT

public:
    explicit weather(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*event);
    ~weather();
    QMenu*mEXitMenu;//右键退出的菜单
    QAction*mExitAct;//退出的行为
    void updateUi();
    QMap<QString,QString> mTypeMap;// 天气类型图标路径
    QList<QLabel*> mAqiList;//天气污染指数
    QList<QLabel*> mFxList;   // 风向
    QList<QLabel*> mFlList;   // 风力
    QList<QLabel*> mWeekList;   // 星期
    QList<QLabel*> DateList;    //日期
    QList<QLabel*> mTypeList;   // 天气类型
    QList<QLabel*> mTypeIconList;   // 天气类型图标
protected:
    void contextMenuEvent(QContextMenuEvent*event);//重写菜单事件
    void getWeatherInfo(QString cityName);
    void parseJson(QByteArray&byteArray);
private slots:
    void quit();
    void onReplied(QNetworkReply*reply);

    void on_searchButton_clicked();

private:
    QNetworkAccessManager*mNetAccessManager;
    Today today;
    Day day[6];
private:
    Ui::weather *ui;
};

#endif // WEATHER_H
