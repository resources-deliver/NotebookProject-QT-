#include "../login.h"

Login::Login(QWidget *parent):QDialog(parent),LoginUi(new Ui::Login){
    LoginUi->setupUi(this);
    tipswindows = new TipsWindows(this);
    setUi();
    uiSignalSlot();
    QApplication::setOrganizationName("YYLogin");  // 设置当前应用程序(登录窗口)组织名称
    QApplication::setApplicationName("登录");  // 设置当前应用程序(登录窗口)名称
    readSettings();
}

Login::~Login(){
    delete LoginUi;
}


void Login::readSettings(){
    QSettings settings;
    bool saved = settings.value("saved", false).toBool();
    userName = settings.value("Username", "yang").toString();
    QString defaultPSWD = encrypt("yang");
    passWard = settings.value("PSWD", defaultPSWD).toString();
    if (saved)
        LoginUi->UserNameLineEdit->setText(userName);
    LoginUi->RememberCheckBox->setChecked(saved);
}


void Login::writeSettings(){
    QSettings settings;
    settings.setValue("Username", userName);
    settings.setValue("PSWD", passWard);
    settings.setValue("saved", LoginUi->RememberCheckBox->isChecked());
}

QString Login::encrypt(const QString &str){
    QByteArray btArray = str.toLocal8Bit();  // 将QString类型转换为QByteArray类型
    QCryptographicHash hash(QCryptographicHash::Md5);  // 定义QCryptographicHash类对象，并指定使用MD5算法
    hash.addData(btArray);  // 将要计算哈希的数据添加到QCryptographicHash对象中
    QByteArray resultArray = hash.result();  //  获取哈希计算的结果
    QString md5 = resultArray.toHex();  // 将二进制的哈希结果转换为十六进制表示的字符串
    return md5;
}
