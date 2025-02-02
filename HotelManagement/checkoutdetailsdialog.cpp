#include "checkoutdetailsdialog.h"
#include "ui_checkoutdetailsdialog.h"
#include "room.h"
#include "roomsdialog.h"
#include "hotel.h"
CheckOutDetailsDialog::CheckOutDetailsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CheckOutDetailsDialog)
{
    ui->setupUi(this);

    RoomsDialog* parentDialog=dynamic_cast<RoomsDialog*>(parent);
    int roomNo=parentDialog->getChosenRoom();
    QString str=QString::number(roomNo);
    setRoomNo(roomNo);
    ui->label_2->setText(str);

    Hotel* hotel = Hotel::getInstance();
    Room* room = hotel->findRoom(roomNo);

    QString strCustomerName=QString::fromStdString(room->getGuestName());
    ui->lineEdit->setText(strCustomerName);
}

CheckOutDetailsDialog::~CheckOutDetailsDialog()
{
    delete ui;
}

int CheckOutDetailsDialog::getTotalDays() const
{
    return totalDays;
}

void CheckOutDetailsDialog::setTotalDays(int newTotalDays)
{
    totalDays = newTotalDays;
}

void CheckOutDetailsDialog::on_pushButton_clicked()
{
    bool ok;
    int days=ui->lineEditDays->text().toInt(&ok);

    if(ok){

        Hotel* hotel = Hotel::getInstance();
        Room* room = hotel->findRoom(getRoomNo());
        int totalFee=days*room->getDailyRate()+room->getExtraExpenses();
        ui->lineEditFee->setText(QString::number(totalFee));

    }else{
        //text is not integer
    }
}

int CheckOutDetailsDialog::getRoomNo() const
{
    return roomNo;
}

void CheckOutDetailsDialog::setRoomNo(int newRoomNo)
{
    roomNo = newRoomNo;
}


void CheckOutDetailsDialog::on_pushButtonOk_clicked()
{
    bool ok;
    int days=ui->lineEditDays->text().toInt(&ok);

    if(ok){
        setTotalDays(days);
        accept();
    }else{
        // check out selected but days line is empty
        reject();
    }
}


void CheckOutDetailsDialog::on_pushButtonCancel_clicked()
{
    reject();
}

