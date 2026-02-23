#ifndef ANIMAL_H
#define ANIMAL_H

#include <QWidget>

class Animal : public QWidget
{
    Q_OBJECT

public:
    Animal(QWidget *parent = nullptr);
    ~Animal();
};
#endif // ANIMAL_H
