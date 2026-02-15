#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QSlider>
#include<QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    //构建滑块
    QSlider *m_slidder;
    //构建选值框
    QSpinBox *m_spinBox;
};
#endif // DIALOG_H
