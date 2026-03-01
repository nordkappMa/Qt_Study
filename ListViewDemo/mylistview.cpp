#include "mylistview.h"
#include "ui_mylistview.h"

MyListView::MyListView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyListView)
{
    ui->setupUi(this);
    data<<"Letter A"<<"Letter B"<<"Letter C";
    data.append("Letter D");
    stringListModel = new QStringListModel(this);
    stringListModel->setStringList(data);
    ui->listView->setModel(stringListModel);
    ui->m_listView_2->setModel(stringListModel);
    //connect(ui->m_pushButton_add,&QPushButton::clicked,this,&MyListView::on_m_pushButton_add_clicked);
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MyListView::~MyListView()
{
    delete ui;
}

void MyListView::on_m_pushButton_add_clicked()
{
    bool isOK;
    //Qt 的标准对话框，用于获取用户输入的字符串
    QString text =  QInputDialog::getText(this,"添加项目","项目名称",QLineEdit::Normal,"New Item",&isOK);
    if(!isOK || text.isEmpty())
    {
        return;
    }
    // 获取当前选中项的索引
    QModelIndex currIndex = ui->listView->currentIndex();

    // 确定插入位置：如果有选中项，在其后面插入；否则在末尾插入
    int row = currIndex.isValid() ? currIndex.row() + 1 : stringListModel->rowCount();
    // 插入新行
    if (stringListModel->insertRows(row, 1)) {
        // 获取新插入项的索引
        QModelIndex newIndex = stringListModel->index(row, 0);

        // 设置新项的数据
        stringListModel->setData(newIndex, text);

        // 设置当前索引为新项并开始编辑
        ui->listView->setCurrentIndex(newIndex);
        ui->listView->edit(newIndex);

        qDebug() << "添加成功:";
    } else {
        qDebug() << "添加失败";
    }

}


void MyListView::on_pushButton_2_clicked()
{
    qDebug()<<"hello"<<Qt::endl;
    QModelIndex currIndex = ui->listView->currentIndex();
    if(currIndex.isValid())
    {
        stringListModel->removeRows(currIndex.row(),1);
        qDebug()<<currIndex.row()<<Qt::endl;
        //stringListModel->setData()
    }
}

