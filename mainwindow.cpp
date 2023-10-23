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

//Emergency Reset
void MainWindow::EMERGENCYSTOP()
{
    ui->lblStatus->setText("EMERGENCY");
}
void MainWindow::EMERGENCYSTOPRESET()
{
    ui->lblStatus->setText(" ");
}

void mainwindow::on_buttonfloor1_clicked()
{
        ui->floorLED1->setStyleSheet("background-color: white;");
        ui->floorLED2->setStyleSheet("background-color: black;");
        ui->floorLED3->setStyleSheet("background-color: black;");
        ui->floorLED4->setStyleSheet("background-color: black;");

}

void mainwindow::on_buttonfloor2_clicked()
{

        ui->floorLED2->setStyleSheet("background-color: white;");
        ui->floorLED1->setStyleSheet("background-color: black;");
        ui->floorLED3->setStyleSheet("background-color: black;");
        ui->floorLED4->setStyleSheet("background-color: black;");
}

void mainwindow::on_buttonfloor3_clicked()
{

        ui->floorLED3->setStyleSheet("background-color: white;");
        ui->floorLED1->setStyleSheet("background-color: black;");
        ui->floorLED2->setStyleSheet("background-color: black;");
        ui->floorLED4->setStyleSheet("background-color: black;");
}

void mainwindow::on_buttonfloor4_clicked()
{


        ui->floorLED4->setStyleSheet("background-color: white;");
        ui->floorLED1->setStyleSheet("background-color: black;");
        ui->floorLED2->setStyleSheet("background-color: black;");
        ui->floorLED3->setStyleSheet("background-color: black;");
}
//dikke
