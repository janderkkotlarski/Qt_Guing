#include <QtGui>

#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);  //  WTF does this not work properly?

    /*

    D:\C++\Qt_Guing\Cellalog\gotocelldialog.cpp:-1: In constructor 'GoToCellDialog::GoToCellDialog(QWidget*)':

    D:\C++\Qt_Guing\Cellalog\gotocelldialog.cpp:8: error: no matching function for call to 'GoToCellDialog::setupUi(GoToCellDialog*)'
     setupUi(this);
                 ^
    D:\C++\Qt_Guing\Cellalog\gotocelldialog.h:6: In file included from ..\Cellalog\gotocelldialog.h:6:0,

    D:\C++\Qt_Guing\Cellalog\gotocelldialog.cpp:3: from ..\Cellalog\gotocelldialog.cpp:3:

    D:\C++\Qt_Guing\build-Cellalog-Desktop_Qt_6_1_0-Debug\ui_mainwindow.h:48: candidate: void Ui_GoToCellDialog::setupUi(QMainWindow*)
     void setupUi(QMainWindow *GoToCellDialog)
          ^~~~~~~

    D:\C++\Qt_Guing\build-Cellalog-Desktop_Qt_6_1_0-Debug\ui_mainwindow.h:48: note:   no known conversion for argument 1 from 'GoToCellDialog*' to 'QMainWindow*'

    */

    QRegExp regExp("[A-Za-z][1-9][0-9]{0, 2}");
    lineEdit->setValidator(new QRegExpValidator(regExp, this));

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void GotToCellDialog::on_lineEdit_textChanged()
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}
