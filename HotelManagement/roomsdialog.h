#ifndef ROOMSDIALOG_H
#define ROOMSDIALOG_H

#include <QDialog>

namespace Ui {
class RoomsDialog;
}

class RoomsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoomsDialog(QWidget *parent = nullptr);
    ~RoomsDialog();

    int getChosenRoom() const;
    void setChosenRoom(int newChosenRoom);

    QString getCustomerName() const;
    void setCustomerName(const QString &newCustomerName);

    bool getIsCheckinPressed() const;
    void setIsCheckinPressed(bool newIsCheckinPressed);

private slots:
    void on_pushButtonOk_clicked();

    void colorRoomButtons(int roomNo,QPushButton* button);

    void processButtonClicks(int roomNo,QPushButton* button);

    void on_pushButton101_clicked();

    void on_pushButton102_clicked();

    void on_pushButton103_clicked();

    void on_pushButton201_clicked();

    void on_pushButton202_clicked();

private:
    Ui::RoomsDialog *ui;
    int chosenRoom;
    QString customerName;
    bool isCheckinPressed;
};

#endif // ROOMSDIALOG_H
