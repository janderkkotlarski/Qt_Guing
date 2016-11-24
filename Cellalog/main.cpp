#include "gotocelldialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GoToCellDialog wind;
    wind.show();

    return app.exec();
}
