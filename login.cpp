#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    QTimer*timer1=new QTimer();
    timer1->start(tOut);
    timer2->start(3000);
    connect(timer1,&QTimer::timeout,this,&login::updateTime);
    connect(timer2,&QTimer::timeout,this,&login::closed);
}

void login::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/R-C.jpg"));
}

void login::updateTime(){
    QTime currentTime=QTime::currentTime();
    QString timestr=currentTime.toString("hh:mm");
    ui->lcdN->display(timestr);

}

void login::closed(){
    timer2->stop();
    this->close();
    middleControl*midCon=new middleControl();
    midCon->show();
}
login::~login()
{
    delete ui;
}
