#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Hello JOEY STINKT NAAR GRAS";

    connect(ui->btnEmergency, &QPushButton::clicked, this, &MainWindow::EMERGENCYSTOP);
    connect(ui->btnResetEmergency, &QPushButton::clicked, this, &MainWindow::EMERGENCYSTOPRESET);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Emergency Reset
void MainWindow::EMERGENCYSTOP()
{
    ui->lblStatus->setText("EMERGENCY");
}
void MainWindow::EMERGENCYSTOPRESET()
{
    ui->lblStatus->setText(" ");
}


void MainWindow::on_btn_go_UP_clicked()
{
    if (!ui->UP_LED ->styleSheet().contains("background-color: green;")) {
        // Activate the first LED
        ui->UP_LED->setStyleSheet("background-color: green;");
        // Deactivate the second LED
        ui->DOWN_LED->setStyleSheet("background-color: red;");
}
    else{
        ui->UP_LED->setStyleSheet("background-color: white;");
        ui->DOWN_LED->setStyleSheet("background-color: white;");
    }
    }


void MainWindow::on_btn_GO_DOWN_clicked()
{
if (!ui->DOWN_LED->styleSheet().contains("background-color: green;")) {
        // Activate the second LED
        ui->DOWN_LED->setStyleSheet("background-color: green;");
        // Deactivate the first LED
        ui->UP_LED->setStyleSheet("background-color: red;");
}
else{
        ui->UP_LED->setStyleSheet("background-color: white;");
        ui->DOWN_LED->setStyleSheet("background-color: white;");
}
}

