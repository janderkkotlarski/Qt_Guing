#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel("<h2><i>Tadaima</i> " "<font color=red>Choukai!</font></h2>");
    label->show();
    return a.exec();
}
