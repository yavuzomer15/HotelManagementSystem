/********************************************************************************
** Form generated from reading UI file 'extradialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRADIALOG_H
#define UI_EXTRADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExtraDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditRoomNo;
    QLineEdit *lineEditAmount;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ExtraDialog)
    {
        if (ExtraDialog->objectName().isEmpty())
            ExtraDialog->setObjectName("ExtraDialog");
        ExtraDialog->resize(400, 300);
        label = new QLabel(ExtraDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(142, 100, 61, 20));
        label_2 = new QLabel(ExtraDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(86, 140, 121, 20));
        lineEditRoomNo = new QLineEdit(ExtraDialog);
        lineEditRoomNo->setObjectName("lineEditRoomNo");
        lineEditRoomNo->setGeometry(QRect(220, 100, 113, 22));
        lineEditAmount = new QLineEdit(ExtraDialog);
        lineEditAmount->setObjectName("lineEditAmount");
        lineEditAmount->setGeometry(QRect(220, 140, 113, 22));
        pushButtonOk = new QPushButton(ExtraDialog);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setGeometry(QRect(210, 260, 75, 24));
        pushButtonCancel = new QPushButton(ExtraDialog);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(300, 260, 75, 24));

        retranslateUi(ExtraDialog);

        QMetaObject::connectSlotsByName(ExtraDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtraDialog)
    {
        ExtraDialog->setWindowTitle(QCoreApplication::translate("ExtraDialog", "Extra", nullptr));
        label->setText(QCoreApplication::translate("ExtraDialog", "Room No :", nullptr));
        label_2->setText(QCoreApplication::translate("ExtraDialog", "Amount of Spending :", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ExtraDialog", "Ok", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ExtraDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtraDialog: public Ui_ExtraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRADIALOG_H
