#ifndef TIPSWINDOWS_H
#define TIPSWINDOWS_H

#include <QWidget>
#include "headerFiles.h"

// 写入方式返回结构体
struct writeStruct{
    QString checkBoxReturn;
    int pushButtonReturn;
};

// 读取方式返回结构体
struct readStruct{
    QString checkBoxReturn;
    int pushButtonReturn;
};

// 运行次数返回结构体
struct runTimesStruct{
    bool writeRunTimes = true;
    bool readRunTims = true;
};

class TipsWindows : public QWidget
{
    Q_OBJECT
public:
    explicit TipsWindows(QWidget *parent = nullptr);
    QString openWindow(QString title, QString choicetipstext, QString choicetipsbutton);
    QStringList openWindows(QString title, QString choicetipstext, QString choicetipsbutton);
    QString saveWindow(QString title, QString choicetipstext, QString choicetipsbutton);
    void errorTipsWindow(QWidget *parent, QString title, QString text);
    void informationTipsWindow(QWidget *parent, QString text);
    writeStruct writeWayTipsWindow(QWidget *parent);
    readStruct readWayTipsWindow(QWidget *parent);
signals:
};
#endif // TIPSWINDOWS_H
