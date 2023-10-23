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
    connect(ui->btnOpenDoors, &QPushButton::clicked, this, &MainWindow::OpenDoors);
    connect(ui->btnCloseDoors, &QPushButton::clicked, this, &MainWindow::CloseDoors);

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

void MainWindow::OpenDoors()
{
    ui->lblStatus->setText("Doors opened");
}

void MainWindow::CloseDoors()
{
    ui->lblStatus->setText("Doors Closing...");
    doorDelay();
}

void MainWindow::doorDelay()
{
    //Waiting for 3 seconds
}

void MainWindow::on_btn_go_UP_clicked()
{
    if (!ui->UP_LED->styleSheet().contains("background-color: green;"))
    {
        // Activate the first LED
        ui->UP_LED->setStyleSheet("background-color: green;");
        // Deactivate the second LED
        ui->DOWN_LED->setStyleSheet("background-color: red;");
    }
    else
    {
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
  else
  {
          ui->UP_LED->setStyleSheet("background-color: white;");
          ui->DOWN_LED->setStyleSheet("background-color: white;");
  }
}

