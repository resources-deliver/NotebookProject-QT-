#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QWidget>
#include "headerFiles.h"
#include "shortcut.h"
#include "tipswindows.h"

// 命名空间
QT_BEGIN_NAMESPACE
namespace Ui {class NoteBook;}
QT_END_NAMESPACE


// 类NoteBook公有制继承于QWidget类
class NoteBook : public QWidget{
    Q_OBJECT

public:
    NoteBook(QWidget *parent = nullptr);
    ~NoteBook();

// notebook.cpp文件相关的ui代码化设计以及信号与槽连接
private:
    void setUi();
    void uiSignalSlot();
    void notUiSignalSlot();

private:
    QFile fs[1000];  // 定义QFile类对象数组，用来设置文件
    int fssize = 0;  // 记录设置的文件个数
    ShortCut *shortcut;  // 自定义ShortCut类，定义类指针对象调用该类公有成员
    TipsWindows *tipswindows;  // 自定义TipsWindows类，定义类指针对象调用本该类公有成员
    writeStruct writeChoicedButton;  // 自定义writeStruct结构体，定义结构体对象调用该结构体成员
    readStruct readChoicedButton;  // 自定义readStruct结构体，定义结构体对象调用该结构体成员
    runTimesStruct runTimes;  // 自定义runTimesStruct结构体，定义结构体对象调用该结构体成员

// InterFace/interface.cpp文件内槽函数内容的具体实现
private:  // documentComboBox槽函数内容的实现
    void newFile();
    void openFile();
    void saveFile();
    void saveFileAs();
    void printFile();
    void copyFile();
    void throwFile();
    void closeFile();
private:  // editComboBox槽函数内容的实现
    void clearEdit();
    void copyEdit();
    void pasteEdit();
    void cutEdit();
    void deleteEdit();
    void findEdit();
    void undoEdit();
    void selectAllEdit();
private:  // textShowComboBox槽函数内容的实现
    void textAlignmentLeft();
    void textAlignmentCenter();
    void textAlignmentRight();
    void textBold();
    void textItalic();
    void textUnderLine();
private:  // 各个QPushButton槽函数内容的实现
    void helpTipsWindow(QWidget *parent);
    void aboutTipsWindow();
    void exitTipsWindow();
    void progressWindow(QWidget *parent);
private:
    void fontAdd();
    void fontReduce();
    void fontReset();

// InterFace/interface.cpp文件内槽函数
private slots:
    void documentComboBox(int index);
    void editComboBox(int index);
    void textShowComboBox(int index);
    void helpPushButton();
    void aboutPushButton();
    void exitPushButton();
    void testPushButton();

// Event/eventrealize.cpp文件内事件处理
protected:
    void closeEvent(QCloseEvent *event);
    void paintEvent(QPaintEvent *event);

private:  // UI作用域下的NoteBook类指针对象(访问ui组件指针)
    Ui::NoteBook *ui;
};
#endif // NOTEBOOK_H
