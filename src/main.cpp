#include <QtWidgets/QApplication>
#include "QtWidgetsApplication1.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}