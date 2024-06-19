#include "login.h"
#include "ui_login.h"
#include<QDateTime>
login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    sound->setSource(QUrl::fromLocalFile(":/ys.wav"));
    sound->play();
    QTimer*timer1=new QTimer();
    timer1->start(tOut);
    timer2->start(5000);
    timer3->start(1000);
    connect(timer1,&QTimer::timeout,this,&login::updateTime);
    connect(timer2,&QTimer::timeout,this,&login::closed);
    connect(timer3,&QTimer::timeout,this,&login::updateDay);
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

void login::updateDay(){
    // QFont t_font;
    // t_font.setPointSize(19);
    QDateTime t_time=QDateTime::currentDateTime();
    QString tStr=t_time.toString("ddd yyy-MM-dd");
    ui->label->setText(tStr);

}

void login::closed(){
    timer2->stop();
    this->close();
    sound->stop();
    middleControl*midCon=new middleControl();
    midCon->show();
}
login::~login()
{
    delete ui;
}
