#include "weather.h"
#include "ui_weather.h"
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
    ui->searchButton->setIcon(ico1);
    ui->searchButton->setIconSize(QSize(ui->searchButton->height(),ui->searchButton->width()));
    mEXitMenu=new QMenu(this);
    mExitAct=new QAction();
    mExitAct->setText("退出");
    mEXitMenu->addAction(mExitAct);
    connect(mExitAct,&QAction::triggered,this,&weather::quit);
    mNetAccessManager=new QNetworkAccessManager(this);
    getWeatherInfo("漳州");
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&weather::onReplied);
    // 天气类型图标路径
    //根据keys,设置icon的路径
    mTypeMap.insert("暴雪",":/baoxueblue.png");
    mTypeMap.insert("暴雨",":/baoyu.png");
    mTypeMap.insert("暴雨到大暴雨",":/baoyudaodabaoyu.png");
    mTypeMap.insert("大暴雨",":/dabaoyu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/dabaoyudaotedabaoyu.png");
    mTypeMap.insert("大到暴雪",":/baoxue.png");
    mTypeMap.insert("大雪",":/daxue.png");
    mTypeMap.insert("大雨",":/dayu.png");
    mTypeMap.insert("冻雨",":/dongyu.png");
    mTypeMap.insert("多云",":/duoyun.png");
    mTypeMap.insert("浮沉",":/fuchen.png");
    mTypeMap.insert("雷阵雨",":/leizhengyu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/leizhengyubanyoubingbao.png");
    mTypeMap.insert("霾",":/mai.png");
    mTypeMap.insert("沙尘暴",":/shachengbao.png");
    mTypeMap.insert("晴",":/qing.png");
    mTypeMap.insert("特大暴雨",":/dabaoyudaotedabaoyu.png");
    // mTypeMap.insert("undefined",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/wu.png");
    mTypeMap.insert("小到中雪",":/xiaodaozhongxue.png");
    mTypeMap.insert("小到中雨",":/xiaodaozhongyu.png");
    mTypeMap.insert("小雪",":/xiaoxue.png");
    mTypeMap.insert("小雨",":/xiaoyu.png");
    mTypeMap.insert("雪",":/daxue.png");
    mTypeMap.insert("扬沙",":/yangsha.png");
    mTypeMap.insert("阴",":/ying.png");
    mTypeMap.insert("雨",":/yu.png");
    mTypeMap.insert("雨夹雪",":/yujiaxue.png");
    mTypeMap.insert("阵雪",":/baoxue.png");
    mTypeMap.insert("阵雨",":/zhenyu.png");
    mTypeMap.insert("中到大雪",":/daxue.png");
    mTypeMap.insert("中到大雨",":/zhongdaodayu.png");
    mTypeMap.insert("中雪",":/daxue.png");
    mTypeMap.insert("中雨",":/zhongyu.png");
    mAqiList<<ui->lblQuality0_4<<ui->lblQuality1_4<<ui->lblQuality2_4<<ui->lblQuality3_4<<ui->lblQuality4_4<<ui->lblQuality5_4;
    //天气污染指数
    mWeekList<<ui->lblWeek0_4<<ui->lblWeek1_4<<ui->lblWeek2_4<<ui->lblWeek3_4<<ui->lblWeek4_4<<ui->lblWeek5_4;
    //星期
    DateList<<ui->lblDate0_4<<ui->lblDate1_4<<ui->lblDate2_4<<ui->lblDate3_4<<ui->lblDate4_4<<ui->lblDate5_4;
    // 天气类型
    mTypeList<<ui->lblType0_4<<ui->lblType1_4<<ui->lblType2_4<<ui->lblType3_4<<ui->lblType4_4<<ui->lblType5_4;
    // 天气类型图标
    mTypeIconList<<ui->lblTypeIcon0_4<<ui->lblTypeIcon1_4<<ui->lblTypeIcon2_4<<ui->lblTypeIcon3_4<<ui->lblTypeIcon4_4<<ui->lblTypeIcon5_4;
    // 风向
    mFxList<<ui->lblFx0_4<<ui->lblFx1_4<<ui->lblFx2_4<<ui->lblFx3_4<<ui->lblFx4_4<<ui->lblFx5_4;
    // 风力
    mFlList<<ui->lblFl0_4<<ui->lblFl1_4<<ui->lblFl2_4<<ui->lblFl3_4<<ui->lblFl4_4<<ui->lblFl5_4;

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
#include"weatherTool.h"
// 在头文件中定义了静态变量，然后在多个源文件中包含了这个头文件，
// 就会出现同一个变量被多次定义的情况，从而导致链接错误,所以放在.cpp中
void weather::getWeatherInfo(QString cityName){
    QString cityCode=weatherTool::getCityCode(cityName);
    if(cityCode.isEmpty()){
        QMessageBox::warning(this,"亚比车载天气预报","宝，请检查城市是否输入正确!",QMessageBox::Ok);
        return;
    }
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
    today.wendu=objData.value("wendu").toString().toDouble();
    qDebug()<<today.wendu;
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
    ui->lbTypeIcon_4->setPixmap(mTypeMap[today.type]);// 天气类型图标
    ui->lbLowHigh_4->setText(QString::number(today.low)+"~"+QString::number(today.high)+"°C");
    ui->lbGaoMao_4->setText("感冒指数："+today.ganmao);
    ui->lbWindFx_4->setText(today.fx);
    ui->lbWindFl_4->setText(today.fl);
    ui->lbPm25_4->setText(QString::number(today.pm25));
    ui->lbShiDu_4->setText(today.shidu);
    ui->lblQuality_4->setText(today.quality);// 空气质量

    for (int i=0;i<6;i++) {
        // 日期
        mWeekList[i]->setText("周"+day[i].week.right(1));// mDay[i].week="星期x"
        ui->lblWeek0_4->setText("昨天");
        ui->lblWeek1_4->setText("今天");
        ui->lblWeek2_4->setText("明天");
        // 时间
        QStringList ymdList=day[i].date.split("-");// day[i].date="2023-03-26"
        DateList[i]->setText(ymdList[1]+"/"+ymdList[2]);
         //天气类型
         mTypeList[i]->setText(day[i].type);
        mTypeIconList[i]->setPixmap(mTypeMap[day[i].type]);
        //空气质量
        if(day[i].aqi >= 0 && day[i].aqi <= 50){
            mAqiList[i]->setText("优秀");
            mAqiList[i]->setStyleSheet("background-color:rgb(121,184,0);");
        }else if(day[i].aqi > 50 && day[i].aqi <= 100){
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,187,23);");
        }else if(day[i].aqi > 100 && day[i].aqi <= 150){
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,87,97);");
        }else if(day[i].aqi > 150 && day[i].aqi <= 200){
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color:rgb(235,17,27);");
        }else if(day[i].aqi > 200 && day[i].aqi <= 250){
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color:rgb(170,0,0);");
        }else {
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color:rgb(110,0,0);");
        }
        mFxList[i]->setText(day[i].fx);//风向
        mFlList[i]->setText(day[i].fl);//风力
     }
}

weather::~weather()
{
    delete ui;
}




void weather::on_searchButton_clicked()
{
    QString cityName=ui->leCity_4->text();
    getWeatherInfo(cityName);
}

