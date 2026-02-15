#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QLineEdit>
#include<QDebug>
//消息提示框
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginDialog;
}
QT_END_NAMESPACE

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_m_btnBox_accepted();

    void on_m_btnBox_rejected();

private:
    Ui::LoginDialog *ui;
};
#endif // LOGINDIALOG_H
