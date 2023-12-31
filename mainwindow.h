#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_push_clicked();
public slots:
    void EMERGENCYSTOP();
    void EMERGENCYSTOPRESET();
    void OpenDoors();
    void CloseDoors();
    void doorDelay();
private slots:
    void on_btn_go_UP_clicked();
    void on_btn_GO_DOWN_clicked();
    void on_buttonfloor1_clicked();
    void on_buttonfloor2_clicked();
    void on_buttonfloor3_clicked();
    void on_buttonfloor4_clicked();
private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
