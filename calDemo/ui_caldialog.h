/********************************************************************************
** Form generated from reading UI file 'caldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALDIALOG_H
#define UI_CALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *m_LineEdit_OP1;
    QLabel *label;
    QLineEdit *m_LineEdit_OP2;
    QPushButton *pushButton;
    QLineEdit *m_LineEdit_Res;

    void setupUi(QDialog *CalDialog)
    {
        if (CalDialog->objectName().isEmpty())
            CalDialog->setObjectName("CalDialog");
        CalDialog->resize(800, 600);
        horizontalLayout_2 = new QHBoxLayout(CalDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        m_LineEdit_OP1 = new QLineEdit(CalDialog);
        m_LineEdit_OP1->setObjectName("m_LineEdit_OP1");
        m_LineEdit_OP1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(m_LineEdit_OP1);

        label = new QLabel(CalDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        m_LineEdit_OP2 = new QLineEdit(CalDialog);
        m_LineEdit_OP2->setObjectName("m_LineEdit_OP2");
        m_LineEdit_OP2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(m_LineEdit_OP2);

        pushButton = new QPushButton(CalDialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        m_LineEdit_Res = new QLineEdit(CalDialog);
        m_LineEdit_Res->setObjectName("m_LineEdit_Res");
        m_LineEdit_Res->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        m_LineEdit_Res->setReadOnly(true);

        horizontalLayout->addWidget(m_LineEdit_Res);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CalDialog);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(CalDialog);
    } // setupUi

    void retranslateUi(QDialog *CalDialog)
    {
        CalDialog->setWindowTitle(QCoreApplication::translate("CalDialog", "CalDialog", nullptr));
        label->setText(QCoreApplication::translate("CalDialog", "+", nullptr));
        pushButton->setText(QCoreApplication::translate("CalDialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalDialog: public Ui_CalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALDIALOG_H
