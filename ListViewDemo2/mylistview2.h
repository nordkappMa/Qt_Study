#ifndef MYLISTVIEW2_H
#define MYLISTVIEW2_H

#include <QWidget>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>
#include <QModelIndex>


QT_BEGIN_NAMESPACE
namespace Ui {
class MyListView2;
}
QT_END_NAMESPACE

class MyListView2 : public QWidget
{
    Q_OBJECT

public:
    MyListView2(QWidget *parent = nullptr);
    ~MyListView2();
private slots:
    void on_m_pushButton_Restore_2_clicked();

    void on_m_pushButton_Restore_3_clicked();

    void on_m_pushButton_Restore_clicked();

    void on_m_pushButton_Clear_clicked();

    void on_m_pushButton_Delete_clicked();

    void on_m_pushButton_Add_clicked();

    void on_m_pushButton_Insert_clicked();

    void on_m_listView_clicked(const QModelIndex &index);

private:
    QStringListModel *theModel;

private:
    Ui::MyListView2 *ui;
};
#endif // MYLISTVIEW2_H
