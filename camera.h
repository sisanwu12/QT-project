#ifndef CAMERA_H
#define CAMERA_H
#pragma GCC diagnostic ignored "-Wunused-function"
#include <QWidget>
#include<QCamera>
#include<QVideoWidget>
#include<QMediaDevices>
#include<QMenu>
#include"middlecontrol.h"
namespace Ui {
class camera;
}

class camera : public QWidget
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = nullptr);
    ~camera();
    QCamera *cam=new QCamera(QMediaDevices::defaultVideoInput());
    void openCamera(QVideoWidget*showWidget);
    QMenu*mEXitMenu;//右键退出的菜单
    QAction*mExitAct;//退出的行为
protected:
    void contextMenuEvent(QContextMenuEvent*event);//重写菜单事件
private slots:
    void quit();
    void on_closeButton_2_clicked();

    void on_startButton_clicked();

private:
    Ui::camera *ui;
    QCamera *ca;
};

#endif // CAMERA_H
