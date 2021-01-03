#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_quitButton_clicked()
{
    MainWindow::close();
}

void MainWindow::on_filePickerButton_clicked()
{
    this->findChild<QLineEdit*>("romPathLineEdit")->
            setText(QFileDialog::getOpenFileName(this, ("Open File")));
}
