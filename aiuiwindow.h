#ifndef AIUIWINDOW_H
#define AIUIWINDOW_H
#include "aiui/AIUI_V2.h"
#include <QDebug>

// AIUI监听器类,用于处理AIUI事件
class MyAIUIListener : public aiui_v2::IAIUIListener {
public:
    void onEvent(const aiui_v2::IAIUIEvent& event) {
        switch (event.getEventType()) {
        case aiui::AIUIConstant::EVENT_RESULT: {
            const char* result = event.getInfo();
            qDebug() << "AIUI Result:" << result;
            break;
        }
        case aiui::AIUIConstant::EVENT_ERROR: {
            int errorCode = event.getArg1();
            qDebug() << "AIUI Error:" << errorCode;
            break;
        }
        default:
            break;
        }
    }
};

class aiuiwindow
{
public:
    aiuiwindow();
};

#endif // AIUIWINDOW_H
