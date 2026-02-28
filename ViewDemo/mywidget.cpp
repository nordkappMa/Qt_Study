#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setRootPath(QDir::currentPath());
    ui->m_tableView->setModel(fileSystemModel);
    ui->listView->setModel(fileSystemModel);
    ui->treeView->setModel(fileSystemModel);
    ui->m_tableView->verticalHeader()->setVisible(false);
    //connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView, &QTreeView::clicked, ui->listView, &QListView::setRootIndex);
    connect(ui->treeView, &QTreeView::clicked, ui->m_tableView, &QTableView::setRootIndex);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_treeView_clicked(const QModelIndex &index)
{
    ui->labelName->setText(fileSystemModel->fileName(index));
    ui->labelPath->setText(fileSystemModel->filePath(index));
    ui->labelType->setText(fileSystemModel->type(index));
    unsigned fz = fileSystemModel->size(index)/1024;
    if(fz < 1024)
    {
        ui->labelSize->setText(QString::asprintf("%d KB",fz));
    }else
    {
        ui->labelSize->setText(QString::asprintf("%.2f MB",(float)fz/1024));
    }
    ui->checkBox->setChecked(fileSystemModel->isDir(index));
}

