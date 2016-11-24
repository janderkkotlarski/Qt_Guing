#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QMainWindow>

namespace Ui {
  class GoToCellDialog;
}

class GoToCellDialog : public QMainWindow
{
    Q_OBJECT

public:
    GoToCellDialog(QWidget *parent = 0);

private slots:
    void on_lineEdit_textChanged();

private:
    Ui::GoToCellDialog *ui;
};

#endif // GOTOCELLDIALOG_H
