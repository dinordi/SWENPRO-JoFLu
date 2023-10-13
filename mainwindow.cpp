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

void MainWindow::EMERGENCYSTOP()
{
    ui->lblStatus->setText("STOPPED");
}
void MainWindow::EMERGENCYSTOPRESET()
{
    ui->lblStatus->setText(" ");
}
