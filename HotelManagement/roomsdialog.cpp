#include "roomsdialog.h"
#include "hotel.h"
#include "ui_roomsdialog.h"
#include "hotel.h"
#include "detailsdialog.h"
#include "checkoutdetailsdialog.h"

RoomsDialog::RoomsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RoomsDialog)
{
    ui->setupUi(this);
    //check rooms situation ,color them

    colorRoomButtons(101, ui->pushButton101);
    colorRoomButtons(102, ui->pushButton102);
    colorRoomButtons(103, ui->pushButton103);
    colorRoomButtons(201, ui->pushButton201);
    colorRoomButtons(202, ui->pushButton202);
}

void RoomsDialog::colorRoomButtons(int roomNo, QPushButton* button) {
    Hotel* hotel = Hotel::getInstance();
    Room* room = hotel->findRoom(roomNo);
    if (room->isRoomOccupied()) {
        // room is occupied, red color
        button->setStyleSheet(
            "QPushButton { background-color: red; color: white; font-weight: bold;"
            " border-radius: 10px; font-size: 18 px }"

            "QPushButton:hover { background-color: darkblue; }"
            );
    } else {
        // room is not occupied, red green
        button->setStyleSheet(
            "QPushButton { background-color: green; color: white; font-weight: bold;"
            " border-radius: 10px; font-size: 18 px }"

            "QPushButton:hover { background-color: darkblue; }"
            );
    }
}

void RoomsDialog::processButtonClicks(int roomNo, QPushButton* button){
    Hotel* hotel = Hotel::getInstance();
    Room* room = hotel->findRoom(roomNo);

    if(getIsCheckinPressed()){ //Check In process
    if(!room->isRoomOccupied()){
        setChosenRoom(roomNo);
        DetailsDialog* detailsDialog = new DetailsDialog(this);
        auto ret = detailsDialog->exec();   // dialog window opened

        if (ret == QDialog::Accepted)
        {
            qDebug() << "Ok selected!";
            room->checkIn(getCustomerName().toStdString());
            colorRoomButtons(roomNo, button);
        } else {
            qDebug() << "Cancel selected!";
        }
        detailsDialog->deleteLater();
    }
    }else{ //Check Out process
        if (room->isRoomOccupied()){    //check room situation
        setChosenRoom(roomNo);
        CheckOutDetailsDialog* checkoutDetailsDialog = new CheckOutDetailsDialog(this);
        auto ret = checkoutDetailsDialog->exec();   // dialog window opened

        if (ret == QDialog::Accepted)
        {
            qDebug() << "Check out selected!";
            room->checkOut(checkoutDetailsDialog->getTotalDays());
            colorRoomButtons(roomNo, button);
        } else {
            qDebug() << "Cancel selected!";
        }
        checkoutDetailsDialog->deleteLater();
        }
    }

}


RoomsDialog::~RoomsDialog()
{
    delete ui;
}

void RoomsDialog::on_pushButtonOk_clicked()
{
    accept();
}


void RoomsDialog::on_pushButton101_clicked()
{
    processButtonClicks(101,ui->pushButton101);
}

QString RoomsDialog::getCustomerName() const
{
    return customerName;
}

void RoomsDialog::setCustomerName(const QString &newCustomerName)
{
    customerName = newCustomerName;
}

int RoomsDialog::getChosenRoom() const
{
    return chosenRoom;
}

void RoomsDialog::setChosenRoom(int newChosenRoom)
{
    chosenRoom = newChosenRoom;
}


void RoomsDialog::on_pushButton102_clicked()
{
    processButtonClicks(102,ui->pushButton102);

}


void RoomsDialog::on_pushButton103_clicked()
{
    processButtonClicks(103,ui->pushButton103);

}


void RoomsDialog::on_pushButton201_clicked()
{
    processButtonClicks(201,ui->pushButton201);

}


void RoomsDialog::on_pushButton202_clicked()
{
    processButtonClicks(202,ui->pushButton202);

}

bool RoomsDialog::getIsCheckinPressed() const
{
    return isCheckinPressed;
}

void RoomsDialog::setIsCheckinPressed(bool newIsCheckinPressed)
{
    isCheckinPressed = newIsCheckinPressed;
}

