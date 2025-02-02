#include "mainwindow.h"

#include <QApplication>
#include "hotel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int result=a.exec();
    //delete Hotel object before ending the program
    delete Hotel::getInstance();

    return result;
}
