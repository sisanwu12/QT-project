#include "weather.h"
#include "ui_weather.h"
#include<QPainter>
#include<QIcon>
#include<QDebug>
#include<QMessageBox>
weather::weather(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::weather)
{
    ui->setupUi(this);
    QIcon ico1;
    ico1.addFile(":/s19.png",QSize(),QIcon::Normal,QIcon::Off);
    ui->foundButton->setIcon(ico1);
    ui->foundButton->setIconSize(QSize(ui->foundButton->width(),ui->foundButton->height()));
    mEXitMenu=new QMenu(this);
    mExitAct=new QAction();
    mExitAct->setText("退出");
    mEXitMenu->addAction(mExitAct);
    connect(mExitAct,&QAction::triggered,this,&weather::quit);
    mNetAccessManager=new QNetworkAccessManager(this);
    getWeatherInfo("101010100");
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&weather::onReplied);
}

void weather::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/weather.jpg"));
}

void weather::contextMenuEvent(QContextMenuEvent*event){
    mEXitMenu->exec(QCursor::pos());
}

void weather::quit(){
    this->close();
    middleControl*midC=new middleControl();
    midC->show();
}

void weather::onReplied(QNetworkReply*reply){

    int status=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    // qDebug()<<status;
    // qDebug()<<reply->rawHeaderList();
    if(reply->error()!=QNetworkReply::NoError||status!=200){
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
    }
    else{
        QByteArray byteArray=reply->readAll();
        qDebug()<<"read all"<<byteArray.data();
    }
    reply->deleteLater();//内存释放
};
void weather::getWeatherInfo(QString cityCode){
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);
    mNetAccessManager->get(QNetworkRequest(url));
};
weather::~weather()
{
    delete ui;
}
