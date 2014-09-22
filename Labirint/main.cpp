#include "Labirint.h"

#include <iostream>
//#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //return a.exec();

    Labirint a(10, 10);

    a.draw();

    return 0;
}
