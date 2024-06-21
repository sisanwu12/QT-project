#ifndef WEATHER_H
#define WEATHER_H
#include<middlecontrol.h>
#include <QWidget>
#include<QMenu>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<weatherDate.h>
#include<QLabel>
#include<QPainter>
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
protected:
    void contextMenuEvent(QContextMenuEvent*event);//重写菜单事件
    void getWeatherInfo(QString cityCode);
    void parseJson(QByteArray&byteArray);
private slots:
    void quit();
    void onReplied(QNetworkReply*reply);
private:
    QNetworkAccessManager*mNetAccessManager;
    Today today;
    Day day[6];
private:
    Ui::weather *ui;
};

#endif // WEATHER_H
