#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_slidder = new QSlider(Qt::Horizontal,this);
    m_slidder->move(20,40);
    m_slidder->resize(150,25);
    m_slidder->setRange(0,100);

    m_spinBox = new QSpinBox(this);
    m_spinBox->move(190,40);
    m_spinBox->resize(90,25);
    m_spinBox->setRange(0,100);

    //滑块：值改变信号-》选值框-》值修改
    QObject::connect(m_slidder,SIGNAL(valueChanged(int)),m_spinBox,SLOT(setValue(int)));
    //选值：值改变信号-》滑块-》值修改
    QObject::connect(m_spinBox,SIGNAL(valueChanged(int)),m_slidder,SLOT(setValue(int)));
}

Dialog::~Dialog()
{
    delete ui;
}
