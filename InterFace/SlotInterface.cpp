#include "../notebook.h"

// 接口槽函数: 文件菜单栏
void NoteBook::documentComboBox(int index){
    switch(index){
    case 0:
        newFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 1:
        openFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 2:
        saveFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 3:
        saveFileAs();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 4:
        printFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 5:
        copyFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 6:
        throwFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 7:
        closeFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    default:
        break;
    }
}


// 接口槽函数: 文本编辑菜单栏
void NoteBook::editComboBox(int index){
    switch(index){
    case 0:
        clearEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 1:
        copyEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 2:
        pasteEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 3:
        cutEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 4:
        deleteEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 5:
        findEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 6:
        undoEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 7:
        selectAllEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    default:
        break;
    }
}

// 接口槽函数: 文本显示菜单栏
void NoteBook::textShowComboBox(int index){
    switch(index){
    case 0:
        textAlignmentLeft();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 1:
        textAlignmentCenter();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 2:
        textAlignmentRight();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 3:
        textBold();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 4:
        textItalic();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 5:
        textUnderLine();
        ui->TextShowComboBox->setCurrentIndex(-1);
    default:
        break;
    }
}

// 接口槽函数: 帮助按钮
void NoteBook::helpPushButton(){
    helpTipsWindow(this);
}

// 接口槽函数: 关于按钮
void NoteBook::aboutPushButton(){
    aboutTipsWindow();
}

// 接口槽函数: 退出按钮
void NoteBook::exitPushButton(){
    exitTipsWindow();
}

// 接口槽函数: 模式按钮
void NoteBook::testPushButton(){
    progressWindow(this);
    // sliderWindow(this);
}
