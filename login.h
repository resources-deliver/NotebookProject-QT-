#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "headerFiles.h"
#include "tipswindows.h"

namespace Ui {class Login;}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private:
    void setUi();
    void uiSignalSlot();

private:
    bool m_moving = false;  // 表示窗口是否在鼠标操作下移动
    QPoint m_lastPos;  // 上一次的鼠标位置
    QString userName = "yang";
    QString passWard = "12345";
    void readSettings();  // 读取设置,从注册表
    void writeSettings();  // 写入设置，从注册表
    QString encrypt(const QString& str);  // 字符串加密
    TipsWindows *tipswindows;

protected:
    //鼠标事件处理函数，用于拖动窗口
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private slots:
    void acceptedLogin();
    void cancelLogin();

private:
    Ui::Login *LoginUi;
};

#endif // LOGIN_H
