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
    mEXitMenu=new QMenu(this);
    mExitAct=new QAction();
    mExitAct->setText("退出");
    mEXitMenu->addAction(mExitAct);
    connect(mExitAct,&QAction::triggered,this,&camera::quit);
}

void camera::openCamera(QVideoWidget*showWidget){
    QMediaCaptureSession*videoSession=new QMediaCaptureSession;
    videoSession->setCamera(cam);
    videoSession->setVideoOutput(showWidget);
    cam->start();
}
void camera::quit(){
    this->close();
    middleControl*midC=new middleControl();
    midC->show();
}

void camera::contextMenuEvent(QContextMenuEvent*event){
    //  弹出右键菜单事件
    mEXitMenu->exec(QCursor::pos());
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

