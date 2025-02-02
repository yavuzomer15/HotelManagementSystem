#include "detailsdialog.h"
#include "ui_detailsdialog.h"
#include"roomsdialog.h"

DetailsDialog::DetailsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DetailsDialog)
{
    ui->setupUi(this);

    RoomsDialog* parentDialog=dynamic_cast<RoomsDialog*>(parent);
    pDialog=parentDialog;
    int roomNo=parentDialog->getChosenRoom();
    QString str=QString::number(roomNo);
    ui->label->setText(str);
}

DetailsDialog::~DetailsDialog()
{
    delete ui;
}

void DetailsDialog::on_pushButtonOk_clicked()
{
    QString name=ui->lineEdit->text();

    if(!name.isEmpty()){
        pDialog->setCustomerName(name);
        accept();
    }else{
      // ok clicked but customer name is empty
        reject();
    }
}


void DetailsDialog::on_pushButtonCancel_clicked()
{
    reject();
}

