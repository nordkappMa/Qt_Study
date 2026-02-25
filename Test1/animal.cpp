#include "animal.h"

Animal::Animal(QWidget *parent)
    : QWidget(parent)
{
    //创建按钮
    QPushButton *btn = new QPushButton;
    //设置按钮的父对象为窗口
    btn->setParent(this);
    btn->setText("点击我");

    connect(btn,&QPushButton::clicked,this,&Animal::classOver);
    this->tea = new Teacher();
    this->stu = new Student();
    connect(tea,&Teacher::hungry,stu,&Student::treat);

}

Animal::~Animal() {}

void Animal::classOver()
{
    emit tea->hungry();
}
