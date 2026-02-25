#ifndef ANIMAL_H
#define ANIMAL_H

#include <QWidget>
#include <QPushButton>
#include <student.h>
#include <teacher.h>

class Animal : public QWidget
{
    Q_OBJECT

public:
    Animal(QWidget *parent = nullptr);
    ~Animal();
    void classOver();
    Teacher *tea;
    Student *stu;
};
#endif // ANIMAL_H
