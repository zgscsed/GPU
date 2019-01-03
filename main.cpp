#include "gpuprogramming.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GPUprogramming w;
    w.show();

    return a.exec();
}
