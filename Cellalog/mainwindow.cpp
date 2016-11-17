#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GoToCellDialog)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
