#ifndef WIDGET_H
#define WIDGET_H
#include<QMovie>
#include <QWidget>
#include<QLabel>
#include<QTimer>
#include<login.h>
#define Timeout 2*1200
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
     QTimer *timer=new QTimer();
    ~Widget();
 private slots:
     void closed();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
