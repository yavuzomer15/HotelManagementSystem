/********************************************************************************
** Form generated from reading UI file 'checkoutdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTDETAILSDIALOG_H
#define UI_CHECKOUTDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckOutDetailsDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEditDays;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEditFee;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *CheckOutDetailsDialog)
    {
        if (CheckOutDetailsDialog->objectName().isEmpty())
            CheckOutDetailsDialog->setObjectName("CheckOutDetailsDialog");
        CheckOutDetailsDialog->resize(400, 300);
        label = new QLabel(CheckOutDetailsDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 38, 71, 20));
        label_2 = new QLabel(CheckOutDetailsDialog);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(190, 40, 49, 16));
        label_3 = new QLabel(CheckOutDetailsDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 80, 101, 20));
        lineEdit = new QLineEdit(CheckOutDetailsDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(180, 80, 181, 22));
        label_4 = new QLabel(CheckOutDetailsDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 120, 71, 20));
        lineEditDays = new QLineEdit(CheckOutDetailsDialog);
        lineEditDays->setObjectName("lineEditDays");
        lineEditDays->setGeometry(QRect(180, 120, 181, 22));
        pushButton = new QPushButton(CheckOutDetailsDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 170, 241, 24));
        label_5 = new QLabel(CheckOutDetailsDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 210, 61, 20));
        lineEditFee = new QLineEdit(CheckOutDetailsDialog);
        lineEditFee->setObjectName("lineEditFee");
        lineEditFee->setEnabled(false);
        lineEditFee->setGeometry(QRect(140, 210, 141, 22));
        pushButtonOk = new QPushButton(CheckOutDetailsDialog);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setGeometry(QRect(210, 260, 75, 24));
        pushButtonCancel = new QPushButton(CheckOutDetailsDialog);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(300, 260, 75, 24));

        retranslateUi(CheckOutDetailsDialog);

        QMetaObject::connectSlotsByName(CheckOutDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckOutDetailsDialog)
    {
        CheckOutDetailsDialog->setWindowTitle(QCoreApplication::translate("CheckOutDetailsDialog", "Check Out", nullptr));
        label->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Room No :", nullptr));
        label_2->setText(QCoreApplication::translate("CheckOutDetailsDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Customer Name :", nullptr));
        label_4->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Total Days :", nullptr));
        pushButton->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Calculate Fee", nullptr));
        label_5->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Total Fee :", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Check Out", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("CheckOutDetailsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckOutDetailsDialog: public Ui_CheckOutDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTDETAILSDIALOG_H
