#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "habitaciones.h"
#include "crear_habitacion.h"
#include "registrar_huesped.h"
#include "registros.h"

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


void MainWindow::on_btn_ver_habitaciones_clicked()
{
    habitaciones *hab = new habitaciones();
    hab -> show();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_btn_agregar_habitacion_clicked()
{
    crear_habitacion *chab = new crear_habitacion();
    chab -> show();
}

void MainWindow::on_btn_registrar_huesped_clicked()
{
    registrar_huesped *reg = new registrar_huesped();
    reg->show();
}

void MainWindow::on_btn_ver_registros_clicked()
{
    registros *r = new registros();
    r->show();
}
