#ifndef CHECKOUTDETAILSDIALOG_H
#define CHECKOUTDETAILSDIALOG_H

#include <QDialog>

namespace Ui {
class CheckOutDetailsDialog;
}

class CheckOutDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckOutDetailsDialog(QWidget *parent = nullptr);
    ~CheckOutDetailsDialog();

    int getTotalDays() const;
    void setTotalDays(int newTotalDays);

    int getRoomNo() const;
    void setRoomNo(int newRoomNo);

private slots:
    void on_pushButton_clicked();

    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::CheckOutDetailsDialog *ui;
    int totalDays;
    int roomNo;
};

#endif // CHECKOUTDETAILSDIALOG_H
