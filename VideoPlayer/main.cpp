#include "vpwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VPWidget w;
    w.show();
    return a.exec();
}
