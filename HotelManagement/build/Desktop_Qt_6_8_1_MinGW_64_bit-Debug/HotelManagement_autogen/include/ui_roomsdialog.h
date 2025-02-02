/********************************************************************************
** Form generated from reading UI file 'roomsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMSDIALOG_H
#define UI_ROOMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RoomsDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton101;
    QPushButton *pushButton102;
    QPushButton *pushButton103;
    QGroupBox *groupBox_2;
    QPushButton *pushButton201;
    QPushButton *pushButton202;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *RoomsDialog)
    {
        if (RoomsDialog->objectName().isEmpty())
            RoomsDialog->setObjectName("RoomsDialog");
        RoomsDialog->resize(400, 347);
        groupBox = new QGroupBox(RoomsDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 381, 141));
        pushButton101 = new QPushButton(groupBox);
        pushButton101->setObjectName("pushButton101");
        pushButton101->setGeometry(QRect(10, 30, 111, 91));
        pushButton102 = new QPushButton(groupBox);
        pushButton102->setObjectName("pushButton102");
        pushButton102->setGeometry(QRect(130, 30, 111, 91));
        pushButton103 = new QPushButton(groupBox);
        pushButton103->setObjectName("pushButton103");
        pushButton103->setGeometry(QRect(250, 30, 111, 91));
        groupBox_2 = new QGroupBox(RoomsDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 150, 381, 141));
        pushButton201 = new QPushButton(groupBox_2);
        pushButton201->setObjectName("pushButton201");
        pushButton201->setGeometry(QRect(10, 30, 111, 91));
        pushButton202 = new QPushButton(groupBox_2);
        pushButton202->setObjectName("pushButton202");
        pushButton202->setGeometry(QRect(130, 30, 241, 91));
        pushButtonOk = new QPushButton(RoomsDialog);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setGeometry(QRect(300, 310, 75, 24));

        retranslateUi(RoomsDialog);

        QMetaObject::connectSlotsByName(RoomsDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomsDialog)
    {
        RoomsDialog->setWindowTitle(QCoreApplication::translate("RoomsDialog", "Room Management", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RoomsDialog", "Floor 1", nullptr));
        pushButton101->setText(QCoreApplication::translate("RoomsDialog", "101", nullptr));
        pushButton102->setText(QCoreApplication::translate("RoomsDialog", "102", nullptr));
        pushButton103->setText(QCoreApplication::translate("RoomsDialog", "103", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RoomsDialog", "Floor 2", nullptr));
        pushButton201->setText(QCoreApplication::translate("RoomsDialog", "201", nullptr));
        pushButton202->setText(QCoreApplication::translate("RoomsDialog", "202 (Suite)", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("RoomsDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomsDialog: public Ui_RoomsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSDIALOG_H
