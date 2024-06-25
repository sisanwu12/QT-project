#include "middlecontrol.h"
#include "ui_middlecontrol.h"
#include<weather.h>
#include<QIcon>
#include<QMovie>
#include<QLabel>
middleControl::middleControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::middleControl)
{
    ui->setupUi(this);
    QIcon ico;
    ico.addFile(":/weather.png",QSize(),QIcon::Normal,QIcon::Off);
    ui->weatherButton->setIcon(ico);
    ui->weatherButton->setIconSize(QSize(ui->weatherButton->width(),ui->weatherButton->height()));
    QIcon ico2;
    ico2.addFile(":/camera.jpg",QSize(),QIcon::Normal,QIcon::Off);
    ui->cameraButton_2->setIcon(ico2);
    ui->cameraButton_2->setIconSize(QSize(ui->cameraButton_2->width(),ui->cameraButton_2->height()));
    QIcon ico3;
    ico3.addFile(":/assistant.png",QSize(),QIcon::Normal,QIcon::Off);
    ui->yuyingButton_2->setIcon(ico3);
    ui->yuyingButton_2->setIconSize(QSize(ui->yuyingButton_2->width(),ui->yuyingButton_2->height()));
    QIcon ico4;
    ico4.addFile(":/ditu.png",QSize(),QIcon::Normal,QIcon::Off);
    ui->navigateButton_2->setIcon(ico4);
    ui->navigateButton_2->setIconSize(QSize(ui->navigateButton_2->width(),ui->navigateButton_2->height()));
    ui->label->setStyleSheet("background-color: transparent;");
    ui->label->setFixedSize(this->width(),this->height());
    QMovie *movie=new QMovie(":/R-C(1)_888x500.gif",QByteArray(),ui->label);
    ui->label->setMovie(movie);
    movie->start();
}

middleControl::~middleControl()
{
    delete ui;
}

void middleControl::on_cameraButton_2_clicked()
{
    this->close();
    camera*cam=new camera();
    cam->show();
}

void middleControl::on_weatherButton_clicked()
{
    this->close();
    weather*we=new weather();
    we->show();
}

