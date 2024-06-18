#include "camera.h"
#include "ui_camera.h"
#include<QCameraDevice>
#include<QMediaCaptureSession>
camera::camera(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::camera)
{
    ui->setupUi(this);
    QVideoWidget*shoWid=new QVideoWidget;
    ui->verticalLayout->addWidget(shoWid);
    openCamera(shoWid);
}

void camera::openCamera(QVideoWidget*showWidget){
    QMediaCaptureSession*videoSession=new QMediaCaptureSession;
    videoSession->setCamera(cam);
    videoSession->setVideoOutput(showWidget);
    cam->start();

}
camera::~camera()
{
    delete ui;
}



void camera::on_closeButton_2_clicked()
{
    cam->stop();

}


void camera::on_startButton_clicked()
{
    cam->start();
}

