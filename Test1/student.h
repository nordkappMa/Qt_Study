#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
    //槽函数：返回值是void, 可以有参数，需要声明并实现,可以被重载
public slots:
    void treat();
};

#endif // STUDENT_H
