#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton *button = new QPushButton("Click to commit Sudoku!");

    QObject::connect(button, SIGNAL(clicked()),
                     &app, SLOT(quit()));

    button->show();

    // QLabel *label = new QLabel("<h2><i>Tadaima</i> " "<font color=red>Choukai!</font></h2>");
    // label->show();

    return app.exec();
}
