#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include<QCamera>
#include<QVideoWidget>
#include<QMediaDevices>
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

private slots:

    void on_closeButton_2_clicked();

    void on_startButton_clicked();

private:
    Ui::camera *ui;
    QCamera *ca;
};

#endif // CAMERA_H
