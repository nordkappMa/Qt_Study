#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QListView>
#include <QStringListModel>
#include <QDebug>
#include <QVBoxLayout>
#include <QFileSystemModel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWidget;
}
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::MyWidget *ui;
    QFileSystemModel *fileSystemModel;
};
#endif // MYWIDGET_H
