#include "registros.h"
#include "ui_registros.h"
#include "clase_habitacion.h"
#include "registro.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

QList<clase_habitacion> arr_habt;
QList<registro> arr_regs;


registros::registros(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registros)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Lista de registros");
    titulos <<"N° Habitación" << "Dni" << "Nombres" << "Apellidos" <<"Monto";
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    ui->tableWidget->setColumnWidth(0,195);
    ui->tableWidget->setColumnWidth(1,195);
    ui->tableWidget->setColumnWidth(2,195);
    ui->tableWidget->setColumnWidth(3,195);
    ui->tableWidget->setColumnWidth(4,195);

    llenarTablaR();

}

registros::~registros()
{
    delete ui;
}

void registros::on_btnexit_clicked()
{
    close();
}

void registros::llenarTablaR(){
    cargarDataHabs();
    cargarDataRegistros();
    for(int i=0; i<arr_regs.length(); ++i){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(QString::number(arr_regs.value(i).getNumeroHab())));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(QString::number(arr_regs.value(i).getDniH())));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(arr_regs.value(i).getNombres_h()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, new QTableWidgetItem(arr_regs.value(i).getApellidos_h()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 4, new QTableWidgetItem(QString::number(arr_regs.value(i).getMonto())));
    }
    arr_habt.clear();
    arr_regs.clear();
}

void registros::cargarDataRegistros(){
    QString nombreArch = "D:/PS/hotel/hotel/data/r.txt";
    QFile inputFile(nombreArch);

    QString line = "";
    if (inputFile.open(QIODevice::ReadOnly)){
        QTextStream in(&inputFile);

        while (!in.atEnd()){
         line = in.readLine();
         QStringList data = line.split( "," );

         registro rg;
         rg.setNumeroHab(data.value(0).toInt());
         rg.setDniH(data.value(1).toInt());
         rg.setNombresH(data.value(2));
         rg.setApellidos(data.value(3));
         rg.setMonto(data.value(4).toInt());

         arr_regs.append(rg);

        }
        inputFile.close();
    }
}

void registros::cargarDataHabs(){
    QString nombreArch = "D:/PS/hotel/hotel/data/h.txt";
    QFile inputFile(nombreArch);

    QString line = "";
    if (inputFile.open(QIODevice::ReadOnly)){
        QTextStream in(&inputFile);

        while (!in.atEnd()){
         line = in.readLine();
         QStringList data = line.split( "," );

         clase_habitacion habitacion;
         habitacion.setNumero(data.value(0).toUInt());
         habitacion.setDescripcion(data.value(1));
         habitacion.setEstado(data.value(2) == "1" ? true : false);

         arr_habt.append(habitacion);

        }
        inputFile.close();
    }
}

void registros::on_btncobrar_clicked()
{
    cargarDataRegistros();
    cargarDataHabs();
    int fila = ui->tableWidget->currentRow();
    int numero_h = ui->tableWidget->item(fila, 0)->text().toInt();

    for(int i=0; i<arr_regs.length(); ++i){
        if(arr_regs.value(i).getNumeroHab() == numero_h)
            arr_regs.removeAt(i);
    }
    for(int i=0; i<arr_habt.length(); ++i){
        if(arr_habt.value(i).getNumero() == numero_h){
            clase_habitacion aux;
            aux.setNumero(arr_habt.value(i).getNumero());
            aux.setDescripcion(arr_habt.value(i).getDescripcion());
            aux.setEstado(true);
            arr_habt.replace(i, aux);
        }
    }
    actualizarRegistros();
    actualizarHabitaciones();
    QMessageBox msgBox;
    msgBox.setText("Se ha realizado el cobro satisfactoriamiente");
    msgBox.exec();
    close();
}

void registros::actualizarRegistros(){
    QFile arch;
    QTextStream io;
    QString nombreArch = "D:/PS/hotel/hotel/data/r.txt";
    arch.setFileName(nombreArch);
    arch.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!arch.isOpen()){
        QMessageBox::critical(this, "error", arch.errorString());
        return;
    }
    io.setDevice(&arch);
    for(int i=0; i<arr_regs.length(); ++i){
        io<<arr_regs.value(i).getNumeroHab()<<","<<arr_regs.value(i).getDniH()<<","<<arr_regs.value(i).getNombres_h()<<","<<arr_regs.value(i).getApellidos_h()<<","<<arr_regs.value(i).getMonto()<<endl;
    }

    arch.flush();
    arch.close();
    arr_regs.clear();
}

void registros::actualizarHabitaciones(){
    QFile arch;
    QTextStream io;
    QString nombreArch = "D:/PS/hotel/hotel/data/h.txt";
    arch.setFileName(nombreArch);
    arch.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!arch.isOpen()){
        QMessageBox::critical(this, "error", arch.errorString());
        return;
    }
    io.setDevice(&arch);
    for(int i=0; i<arr_habt.length(); ++i){
        io<<arr_habt.value(i).getNumero()<<","<<arr_habt.value(i).getDescripcion()<<","<<arr_habt.value(i).getEstado()<<endl;
    }

    arch.flush();
    arch.close();
    arr_habt.clear();
}
