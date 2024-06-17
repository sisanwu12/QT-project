#include "middlecontrol.h"
#include "ui_middlecontrol.h"
#include<QIcon>
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

}

middleControl::~middleControl()
{
    delete ui;
}

void middleControl::on_cameraButton_2_clicked()
{

}


void middleControl::on_weatherButton_clicked()
{

}

