#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.setFixedSize(738,537);
    w.show();
    return a.exec();
}
