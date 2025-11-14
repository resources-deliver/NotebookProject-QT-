#include "notebook.h"
#include <QApplication>
#include "login.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Login *login = new Login;
    if (login->exec()==QDialog::Accepted){
        NoteBook w;
        w.show();
        return a.exec();
    }
    else
        return 0;
    // NoteBook w;
    // w.show();
    // return a.exec();
}
