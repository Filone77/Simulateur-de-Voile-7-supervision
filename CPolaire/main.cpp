#include "cvue.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CVue w;
    w.show();
    return a.exec();
}
