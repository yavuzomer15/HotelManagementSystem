#ifndef DETAILSDIALOG_H
#define DETAILSDIALOG_H

#include <QDialog>
#include"roomsdialog.h"
namespace Ui {
class DetailsDialog;
}

class DetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsDialog(QWidget *parent = nullptr);
    ~DetailsDialog();

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::DetailsDialog *ui;
    RoomsDialog* pDialog;
};

#endif // DETAILSDIALOG_H
