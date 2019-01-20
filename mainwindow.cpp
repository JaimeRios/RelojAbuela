#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int hour=ui->horaUsuario->text().toInt();

       if(hour>-1 && hour<24){
           if(hour!=6){
               ui->Resultado->setText("Aun no es hora de despertar!!");
           }else{
               ui->Resultado->setText("Abue, ya son los 6 ring ring!!");
           }
       }else{
           QString mensaje="";
           mensaje.append(hour);
           mensaje.append(" No es una hora valida para el formato dado  0-23");
           ui->Resultado->setText(mensaje);
       }



}
