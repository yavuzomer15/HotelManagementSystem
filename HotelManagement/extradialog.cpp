#include "extradialog.h"
#include "ui_extradialog.h"
#include "hotel.h"
#include "room.h"
#include <QMessageBox>

ExtraDialog::ExtraDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtraDialog)
{
    ui->setupUi(this);
}

ExtraDialog::~ExtraDialog()
{
    delete ui;
}

void ExtraDialog::on_pushButtonOk_clicked()
{
    bool okAmount;
    int amount=ui->lineEditAmount->text().toInt(&okAmount);

    bool okRoomNo;
    int roomNo=ui->lineEditRoomNo->text().toInt(&okRoomNo);

    if(okRoomNo && okAmount){
        //find room , charge it
        Hotel* hotel = Hotel::getInstance();
        Room* room = hotel->findRoom(roomNo);

        //if customer enter invalid room no , do not nothing
        if(room!=nullptr){

            if(!room->isRoomOccupied()){
                QMessageBox::critical(nullptr,"Error","No expense can be spent on a empty room!");
            }

            room->addExtraExpense(amount);
        }

        accept();
    }else{
        reject();
    }
}


void ExtraDialog::on_pushButtonCancel_clicked()
{
    reject();
}

