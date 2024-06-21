#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // QLabel*label=new QLabel(this);
    QMovie *movie=new QMovie(":/R-C.gif",QByteArray(),ui->label_2);
     connect(timer,&QTimer::timeout,this,&Widget::closed);
    ui->label_2->setMovie(movie);
    movie->start();
    timer->start(Timeout);
}

void Widget::closed(){
    timer->stop();
    this->close();
    login *lo=new login();
    lo->show();
}
Widget::~Widget()
{
    delete ui;
}



