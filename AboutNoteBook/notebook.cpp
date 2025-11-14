#include "../notebook.h"

NoteBook::NoteBook(QWidget *parent):QWidget(parent),ui(new Ui::NoteBook){
    ui->setupUi(this);
    shortcut = new ShortCut(this);
    tipswindows = new TipsWindows(this);
    setUi();
    notUiSignalSlot();
    uiSignalSlot();
}

NoteBook::~NoteBook(){
    delete ui;
}
