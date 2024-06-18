#ifndef MIDDLECONTROL_H
#define MIDDLECONTROL_H
#include <QWidget>
#include <camera.h>
namespace Ui {
class middleControl;
}

class middleControl : public QWidget
{
    Q_OBJECT

public:
    explicit middleControl(QWidget *parent = nullptr);
    ~middleControl();

private slots:
    void on_cameraButton_2_clicked();

    void on_weatherButton_clicked();

private:
    Ui::middleControl *ui;
};

#endif // MIDDLECONTROL_H
