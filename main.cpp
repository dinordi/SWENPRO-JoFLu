#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{//DIT IS EEN VERANDERING IN DE CODE ALJEBLIEFT IK HOOP DAT DIT WERKT
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
