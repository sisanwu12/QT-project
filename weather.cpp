#include "weather.h"
#include "ui_weather.h"
#include<QPainter>
#include<QIcon>
#include<QDebug>
#include<QMessageBox>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
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
        parseJson(byteArray);
    }
    reply->deleteLater();//内存释放
};
void weather::getWeatherInfo(QString cityCode){
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);
    mNetAccessManager->get(QNetworkRequest(url));
};

void weather::parseJson(QByteArray&byteArray){
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;//如果解析json出错返回
    }
    QJsonObject rootObj=doc.object();
    qDebug()<<rootObj.value("message").toString();
    //1解析日期和城市
    today.date=rootObj.value("date").toString();
    today.city=rootObj.value("cityInfo").toObject().value("city").toString();
    //2解析yeaserday
    QJsonObject objData=rootObj.value("data").toObject();
    QJsonObject objYesterday=objData.value("yesterday").toObject();
    day[0].week=objYesterday.value("week").toString();
    day[0].date=objYesterday.value("ymd").toString();
    day[0].type=objYesterday.value("type").toString();
    //解析高低温
    qDebug()<<"high :"<<objYesterday.value("high").toString();
    // "high":"高温  18°","low":"低温  6°"
    QString s;
    s=objYesterday.value("high").toString().split(" ").at(1);// 18°
    s=s.left(s.length()-1);// 18
    day[0].high=s.toInt();
    s=objYesterday.value("low").toString().split(" ").at(1);
    s=s.left(s.length()-1);
    day[0].low=s.toInt();
    //风向，风力
    day[0].fx=objYesterday.value("fx").toString();
    day[0].fl=objYesterday.value("fl").toString();
    //污染指数
    day[0].aqi=objYesterday.value("aqi").toDouble();
    //3.解析五天的数据
    QJsonArray forecastArr=objData.value("forecast").toArray();
    for(int i=0;i<5;i++){
        QJsonObject objForecast=forecastArr[i].toObject();
        day[i+1].date=objForecast.value("ymd").toString();
        day[i+1].week=objForecast.value("week").toString();
        day[i+1].type=objForecast.value("type").toString();
        QString s;
        s=objForecast.value("high").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        day[i+1].high=s.toInt();
        s=objForecast.value("low").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        day[i+1].low=s.toInt();
        day[i+1].fx=objForecast.value("fx").toString();
        day[i+1].fl=objForecast.value("fl").toString();
        day[i+1].aqi=objForecast.value("aqi").toDouble();
    }
    //解析今天的天气数据
    today.ganmao=objData.value("ganmao").toString();
    today.wendu=objData.value("wendu").toString().toInt();
    today.shidu=objData.value("shidu").toString();
    today.quality=objData.value("quality").toString();
    today.pm25=objData.value("pm25").toDouble();
    today.type=day[1].type;
    today.fl=day[1].fl;
    today.fx=day[1].fx;
    today.high=day[0].high;
    today.low=day[0].low;
    qDebug()<<today.high<<today.low;
    updateUi();
}

void weather::updateUi(){
    // 日期
    ui->lbDate_4->setText(QDateTime::fromString(today.date,"yyyyMMdd").toString("yyyy/MM/dd")+" "+day[1].week);
    ui->lbCity_4->setText(today.city);// 城市

    //1. 更新今天
    ui->lbTemp_4->setText(QString::number(today.wendu)+"°");
    ui->lbType_4->setText(today.type);
    // ui->lbTypeIcon_4->setPixmap(mTypeMap[today.type]);// 天气类型图标
    ui->lbLowHigh_4->setText(QString::number(today.low)+"~"+QString::number(today.high)+"°C");
    ui->lbGaoMao_4->setText("感冒指数："+today.ganmao);
    ui->lbWindFx_4->setText(today.fx);
    ui->lbWindFl_4->setText(today.fl);
    ui->lbPm25_4->setText(QString::number(today.pm25));
    ui->lbShiDu_4->setText(today.shidu);
    ui->lblQuality_4->setText(today.quality);// 空气质量
}

weather::~weather()
{
    delete ui;
}
