#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H
#include<QMap>
#include<QFile>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonParseError>
#include<QJsonValue>
#include<QIODevice>
class weatherTool{
private:
    static QMap<QString ,QString>CityMap;
    static void initCityMap(){
        //1.读取json文件
        QString filePath=":/citycode.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray json=file.readAll();
        file.close();
        //2.解析
        QJsonParseError err;
        QJsonDocument doc=QJsonDocument::fromJson(json,&err);
        if(err.error!=QJsonParseError::NoError){
            return;
        }
        if(!doc.isArray()){
            return;
        }
        QJsonArray cities=doc.array();
        for(int i=0;i<cities.size();i++){
            QString city=cities[i].toObject().value("city_name").toString();
            QString code=cities[i].toObject().value("city_code").toString();
            if(code.size()>0){
            CityMap.insert(city,code);
            }
        }
    }
public:
    static QString getCityCode(QString cityName){
        if(CityMap.isEmpty()){
            initCityMap();
        }
        QMap<QString ,QString>::iterator it=CityMap.find(cityName);
        if(it==CityMap.end()){
            it=CityMap.find(cityName+"市");
        }
        if(it!=CityMap.end()){
            return it.value();
        }
        return "";
    }
};
// 静态成员变量 需要 在类外进行 初始化
QMap<QString,QString> weatherTool::CityMap={};
#endif // WEATHERTOOL_H
