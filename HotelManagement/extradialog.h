#ifndef EXTRADIALOG_H
#define EXTRADIALOG_H

#include <QDialog>

namespace Ui {
class ExtraDialog;
}

class ExtraDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExtraDialog(QWidget *parent = nullptr);
    ~ExtraDialog();

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::ExtraDialog *ui;
};

#endif // EXTRADIALOG_H
