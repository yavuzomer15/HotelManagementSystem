#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"roomsdialog.h"
#include "extradialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCheckIn_clicked()   // Slot
{
    RoomsDialog* roomsDialog = new RoomsDialog(this);
    roomsDialog->setIsCheckinPressed(true);
    auto ret = roomsDialog->exec();   // dialog window opened

    if (ret == QDialog::Accepted)
    {
        qDebug() << "Ok selected!";
    } else {
        qDebug() << "Cancel selected!";
    }

    roomsDialog->deleteLater();
}


void MainWindow::on_pushButtonCheckOut_clicked()
{
    RoomsDialog* roomsDialog = new RoomsDialog(this);
    roomsDialog->setIsCheckinPressed(false);
    auto ret = roomsDialog->exec();   // dialog window opened

    if (ret == QDialog::Accepted)
    {
        qDebug() << "Check out Ok selected!";
    } else {
        qDebug() << "Check out Cancel selected!";
    }
    roomsDialog->deleteLater();
}


void MainWindow::on_pushButtonExtra_clicked()
{
    ExtraDialog* extraDialog = new ExtraDialog(this);
    auto ret = extraDialog->exec();   // dialog window opened

    if (ret == QDialog::Accepted)
    {
        qDebug() << "Extra Ok selected!";
    } else {
        qDebug() << "Extra Cancel selected!";
    }
    extraDialog->deleteLater();
}

