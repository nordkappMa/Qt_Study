#ifndef CALDIALOG_H
#define CALDIALOG_H

#include <QDialog>
#include<QDebug>
//输入的验证器
#include<QDoubleValidator>

QT_BEGIN_NAMESPACE
namespace Ui {
class CalDialog;
}
QT_END_NAMESPACE

class CalDialog : public QDialog
{
    Q_OBJECT

public:
    CalDialog(QWidget *parent = nullptr);
    ~CalDialog();

private slots:
    void on_pushButton_clicked();
    //使能按钮的槽函数
    void enableButton();
private:
    Ui::CalDialog *ui;

};
#endif // CALDIALOG_H
