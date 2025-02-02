/********************************************************************************
** Form generated from reading UI file 'detailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSDIALOG_H
#define UI_DETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DetailsDialog
{
public:
    QLabel *label;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *DetailsDialog)
    {
        if (DetailsDialog->objectName().isEmpty())
            DetailsDialog->setObjectName("DetailsDialog");
        DetailsDialog->resize(400, 300);
        label = new QLabel(DetailsDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 30, 221, 31));
        pushButtonOk = new QPushButton(DetailsDialog);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setGeometry(QRect(190, 260, 75, 24));
        pushButtonCancel = new QPushButton(DetailsDialog);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(290, 260, 75, 24));
        lineEdit = new QLineEdit(DetailsDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 100, 171, 41));
        label_2 = new QLabel(DetailsDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 110, 101, 20));
        label_3 = new QLabel(DetailsDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 91, 16));

        retranslateUi(DetailsDialog);

        QMetaObject::connectSlotsByName(DetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailsDialog)
    {
        DetailsDialog->setWindowTitle(QCoreApplication::translate("DetailsDialog", "Check In", nullptr));
        label->setText(QCoreApplication::translate("DetailsDialog", "TextLabel", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("DetailsDialog", "Ok", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DetailsDialog", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("DetailsDialog", "Customer Name:", nullptr));
        label_3->setText(QCoreApplication::translate("DetailsDialog", "Room number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsDialog: public Ui_DetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSDIALOG_H
