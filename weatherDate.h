#ifndef WEATHERDATE_H
#define WEATHERDATE_H
#include<QString>
#endif // WEATHERDATE_H
class Today{
public:
    QString date;
    QString city;
    QString ganmao;
    QString quality;
    QString fl;
    QString fx;
    QString type;
    QString shidu;
    int high;
    int low;
    int wendu;
    int pm25;
    Today(){
        date="2024-6-19";
        city="漳州";
        ganmao="感冒指数";
        wendu=0;
        shidu=0;
        quality="无数据";
        type="多云";
        fl="2级";
        fx="南风";
        high=30;
        low=18;
    }

};
class Day{
public:
    QString date;
    QString week;
    QString type;
    int high;
    int low;
    QString fx;
    QString fl;
    int aqi;

    Day(){
        date="2024-6-18";
        week="周三";
        type="多云";
        high=0;
        low=0;
        fx="南风";
        fl="2级";
        aqi=0;
    }
};
