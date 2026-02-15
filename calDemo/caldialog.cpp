#include "caldialog.h"
#include "ui_caldialog.h"

CalDialog::CalDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CalDialog)
{
    ui->setupUi(this);
    //访问控件的方式
    //1. 设置浮点型验证器
    ui->m_LineEdit_OP1->setValidator(new QDoubleValidator(this));
    ui->m_LineEdit_OP2->setValidator(new QDoubleValidator(this));
    ui->pushButton->setDisabled(1);
    //手动建立信号和槽的关系
    QObject::connect(ui->m_LineEdit_OP1,SIGNAL(textChanged(QString)),this,SLOT(enableButton()));
    QObject::connect(ui->m_LineEdit_OP2,SIGNAL(textChanged(QString)),this,SLOT(enableButton()));

}

CalDialog::~CalDialog()
{
    delete ui;
}

void CalDialog::on_pushButton_clicked()
{
    ui->m_LineEdit_Res->setText(QString::number(ui->m_LineEdit_OP1->text().toDouble()+
                                                ui->m_LineEdit_OP2->text().toDouble()));
}

void CalDialog::enableButton()
{
    bool xOK,yOK;
    ui->m_LineEdit_OP1->text().toDouble(&xOK);
    ui->m_LineEdit_OP2->text().toDouble(&yOK);
    ui->pushButton->setEnabled(xOK && yOK);

}

