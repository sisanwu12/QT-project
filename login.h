#ifndef LOGIN_H
#define LOGIN_H
#include<QPainter>
#include <QWidget>
#include<QTimer>
#include<QTime>
#include<middlecontrol.h>
#include<QSoundEffect>
#pragma GCC diagnostic ignored "-Wunused-function"

#define tOut 1*100
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
     void paintEvent(QPaintEvent*event);
    QTimer*timer2=new QTimer();
     QTimer*timer3=new QTimer();
    QSoundEffect*sound=new QSoundEffect(this);

private slots:
     void updateTime();
    void closed();
     void updateDay();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
