#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Hello JOEY STINKT NAAR GRAS";

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_push_clicked()
{
    QString currentColor = ui->ledLabel->styleSheet();

    // Toggle between red and green
    if (currentColor.contains("red")) {
        ui->ledLabel->setStyleSheet("background-color: green;");
    } else {
        ui->ledLabel->setStyleSheet("background-color: red;");
    }
}

