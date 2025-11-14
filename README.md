# QtNoteBookProject

*本项目是一个基于Qt C++的GUI记事本程序*

*包含以QWidget类为基础的记事本主体以及以QDialog类为基础的登录窗口*

*使用QtCreator为开发工具，使用CMake构建*

## 项目目录层级

* **`Forms（Ui文件夹）`**
    + login.ui（登录窗口ui）
    + notebook.ui（记事本主体ui）

* **`Header Files（头文件文件夹）`**
    + headerFiles.h（项目头文件管理基地）
    + login.h（登录窗口头文件）
    + notebook.h（记事本主体头文件）
    + shortcut.h（记事本主体快捷键头文件）
    + tipswindows.h（记事本主体提示弹窗头文件）

* **`Resources（图片文件夹）`**
    + **Pictures.qrc**
        * /Pictures
            * Images
                * 132.bmp
                * tipsWindowPng.jpg
                * 背景图2.jpg

* **`Source Files（源文件文件夹）`**
    + **AboutLogin**
        * login.cpp（登录窗口构造函数与析构函数主体）
        * SetUi.cpp（登录窗口Ui代码化设计）
        * SignalSlot.cpp（登录窗口信号与槽设计）
    
    + **AboutNoteBook**
        * notebook.cpp（记事本主体构造函数与析构函数主体）
        * SetUi.cpp（记事本主体Ui代码化设计）
        * SignalSlot.cpp（记事本主体信号与槽设计）
        
    + **Document（QComboBox组件菜单下）（槽函数的具体内容）**
        * newFile.cpp（新建文件）
        * openFile.cpp（打开文件）
        * saveFile.cpp（保存文件）
        * saveFileAs.cpp（另存文件）
        * printFile.cpp（打印文件)
        * copyFile.cpp（复制文件）
        * throwFile.cpp（删除文件）
        * closeFile.cpp（关闭文件）
    
    + **Event**
        * Event.cpp（记事本主体事件处理）

    + **InterFace**
        * Interface.cpp（记事本主体接口槽函数）

    + **QPushButtonRealize（QPushButton按钮）（槽函数的具体内容）**
        * LoginQPushButton.cpp（登录窗口按钮）
        * NoteBookQPushButton.cpp（记事本主体按钮）

    + **Shortcut**
        * Shortcut.cpp（记事本主体快捷键）

    + **TestEdit（QComboBox组件菜单下）（槽函数的具体内容）**
        * TestEdit.cpp（记事本主体文本编辑）
    
    + **TestShow（QComboBox组件菜单下）（槽函数的具体内容）**
        * TestShow.cpp（记事本主体文本显示）
    
    + **TipsWindows**
        * tipswindows.cpp（记事本主体提示弹窗构造函数与析构函数）
        * openWindow.cpp（选择打开文件）
        * openWindows.cpp（选择打开多个文件）
        * saveWindow.cpp（选择新建文件）
        * errorTipsWindow.cpp（错误提示）
        * informationTipsWindow.cpp（信息提示）
        * writeWayTipsWindow.cpp（选择写入方式）
        * readWayTipsWindow.cpp（选择读取方式）

    + **main.cpp（启动程序主函数）**
---

[1]: https://www.qt.io
