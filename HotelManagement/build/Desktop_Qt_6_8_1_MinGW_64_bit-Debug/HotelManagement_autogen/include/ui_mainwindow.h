/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonCheckIn;
    QPushButton *pushButtonCheckOut;
    QPushButton *pushButtonExtra;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(805, 561);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        pushButtonCheckIn = new QPushButton(frame);
        pushButtonCheckIn->setObjectName("pushButtonCheckIn");
        sizePolicy.setHeightForWidth(pushButtonCheckIn->sizePolicy().hasHeightForWidth());
        pushButtonCheckIn->setSizePolicy(sizePolicy);
        pushButtonCheckIn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    color: white;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"}"));

        verticalLayout->addWidget(pushButtonCheckIn);

        pushButtonCheckOut = new QPushButton(frame);
        pushButtonCheckOut->setObjectName("pushButtonCheckOut");
        sizePolicy.setHeightForWidth(pushButtonCheckOut->sizePolicy().hasHeightForWidth());
        pushButtonCheckOut->setSizePolicy(sizePolicy);
        pushButtonCheckOut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    color: white;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"}"));

        verticalLayout->addWidget(pushButtonCheckOut);

        pushButtonExtra = new QPushButton(frame);
        pushButtonExtra->setObjectName("pushButtonExtra");
        sizePolicy.setHeightForWidth(pushButtonExtra->sizePolicy().hasHeightForWidth());
        pushButtonExtra->setSizePolicy(sizePolicy);
        pushButtonExtra->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    color: white;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"}"));

        verticalLayout->addWidget(pushButtonExtra);


        horizontalLayout_2->addWidget(frame);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/hotellogo.png")));

        horizontalLayout_2->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 805, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hotel Management", nullptr));
        pushButtonCheckIn->setText(QCoreApplication::translate("MainWindow", "Check In", nullptr));
        pushButtonCheckOut->setText(QCoreApplication::translate("MainWindow", "Check Out", nullptr));
        pushButtonExtra->setText(QCoreApplication::translate("MainWindow", "Extra", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
