#ifndef SHORTCUT_H
#define SHORTCUT_H

#include <QWidget>
#include "headerFiles.h"

class ShortCut : public QWidget{
    Q_OBJECT
public:
    explicit ShortCut(QWidget *parent = nullptr);
    QShortcut *newFileShortCut;
    QShortcut *openFileShortCut;
    QShortcut *saveFileShortCut;
    QShortcut *saveFileAsShortCut;
    QShortcut *printFileShortCut;
    QShortcut *copyFileShortCut;
    QShortcut *deleteFileShortCut;
    QShortcut *closeFileShortCut;
    QShortcut *textAlignmentLeftShortCut;
    QShortcut *textAlignmentCenterShortCut;
    QShortcut *textAlignmentRightShortCut;
    QShortcut *textBoldShortCut;
    QShortcut *textItalicShortCut;
    QShortcut *textUnderLineShortCut;
    QShortcut *fontAddShortCut;
    QShortcut *fontReduceShortCut;
    QShortcut *fontResetShortCut;

signals:
};

#endif // SHORTCUT_H
