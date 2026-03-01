#include "mylistview2.h"
#include "ui_mylistview2.h"

MyListView2::MyListView2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyListView2)
{
    ui->setupUi(this);
    theModel = new QStringListModel(this);
    QStringList strList;
    strList<<"Item 1"<<"Item 2"<<"Item 3"<<"Item 4";
    //把数据(stringList)和Model绑定在一块
    theModel->setStringList(strList);

    //把stringList和Model绑定在一块
    ui->m_listView->setModel(theModel);

    //设定在界面上可以编辑列表
    ui->m_listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

MyListView2::~MyListView2()
{
    delete ui;
}

void MyListView2::on_m_pushButton_Restore_2_clicked()
{
    ui->plainTextEdit->clear();
}


void MyListView2::on_m_pushButton_Restore_3_clicked()
{
    ui->plainTextEdit->clear();
    QStringList strList = theModel->stringList();
    foreach(auto str,strList)
    {
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MyListView2::on_m_pushButton_Restore_clicked()
{
    QStringList strList;
    strList<<"Item 1"<<"Item 2"<<"Item 3"<<"Item 4";
    theModel->setStringList(strList);
    ui->m_listView->setModel(theModel);
}


void MyListView2::on_m_pushButton_Clear_clicked()
{
    theModel->removeRows(0,theModel->rowCount());
}


void MyListView2::on_m_pushButton_Delete_clicked()
{
    //获取当前行
    int row = ui->m_listView->currentIndex().row();
    theModel->removeRows(row,1);

}


void MyListView2::on_m_pushButton_Add_clicked()
{
    //
    //获取Model中的最大项
    int rowCnt = theModel->rowCount();
    //插入
    theModel->insertRows(rowCnt,1);

    //返回最后追加行的index
    QModelIndex index = theModel->index(rowCnt,0);
    theModel->setData(index,"New Items",Qt::DisplayRole);
    ui->m_listView->setCurrentIndex(index);
}


void MyListView2::on_m_pushButton_Insert_clicked()
{
    //返回在listview选中的当前项
    QModelIndex index = ui->m_listView->currentIndex();

    //返回选中的当前项目的当前行
    int currRow = index.row();

    //在模型中插入
    theModel->insertRows(currRow+1,1);

    //获取新插入项的索引
    QModelIndex idx = theModel->index(currRow+1,0);
    //设置新项的数据
    theModel->setData(idx,"maxianzhi",Qt::DisplayRole);
}


void MyListView2::on_m_listView_clicked(const QModelIndex &index)
{
    ui->label->setText(QString::asprintf("行: %d,列: %d",
                                         index.row(),index.column()));
}

