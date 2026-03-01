#ifndef MYLISTVIEW_H
#define MYLISTVIEW_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QStringListModel>
#include <QDebug>
#include <QPushButton>
#include <QListView>
#include <QInputDialog>
#include <QLineEdit>
#include <QModelIndex>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyListView;
}
QT_END_NAMESPACE

class MyListView : public QWidget
{
    Q_OBJECT

public:
    MyListView(QWidget *parent = nullptr);
    ~MyListView();

private slots:
    void on_m_pushButton_add_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyListView *ui;
    QStringListModel *stringListModel;
    QStringList data;
};
#endif // MYLISTVIEW_H
