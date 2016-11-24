#ifndef TEMP_H
#define TEMP_H

#include <QDialog>

namespace Ui {
class Temp;
}

class Temp : public QDialog
{
    Q_OBJECT

public:
    explicit Temp(QWidget *parent = 0);
    ~Temp();

private:
    Ui::Temp *ui;
};

#endif // TEMP_H
