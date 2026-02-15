#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

//点击了OK
void LoginDialog::on_m_btnBox_accepted()
{

    if(ui->m_lineEdit_UserName->text() == "123" &&
        ui->m_lineEdit_PWD->text() == "123")
    {
        qDebug()<<"登录成功"<<Qt::endl;
        this->close();
    }
    else
    {
        QMessageBox::critical(this,this->windowTitle(),"用户名或者密码错误",QMessageBox::Ok);
    }
}

//点击了cancel
void LoginDialog::on_m_btnBox_rejected()
{
    if(QMessageBox::question(this,this->windowTitle(),"确定要取消吗？ Y/n",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        qDebug()<<"取消登录"<<Qt::endl;
        this->close();
    }
}

