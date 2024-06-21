#include "aiuiwindow.h"

// 获取本机SN码
QString getWindowsSerialNumber() {
    QString command = "wmic bios get serialnumber";
    QProcess process;
    process.start(command);
    process.waitForFinished();
    QString output = process.readAllStandardOutput();
    QStringList lines = output.split("\n");
    if (lines.size() > 1) {
        return lines[1].trimmed();
    }
    return QString();
}

// aiui_v2::AIUISetting::setSystemInfo(AIUI_KEY_SERIAL_NUM, getWindowsSerialNumber());

aiuiwindow::aiuiwindow() {
}

