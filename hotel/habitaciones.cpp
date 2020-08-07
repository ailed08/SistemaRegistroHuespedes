#include "habitaciones.h"
#include "ui_habitaciones.h"
#include "clase_habitacion.h"
#include <QFile>
#include <QTextStream>

QList<clase_habitacion> arr_habitaciones;

habitaciones::habitaciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::habitaciones)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Habitaciones");
    titulos <<"Numero" << "Tipo" << "Estado";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    ui->tableWidget->setColumnWidth(0,97);
    ui->tableWidget->setColumnWidth(1,422);
    ui->tableWidget->setColumnWidth(2,150);

    llenarDatos();
}

habitaciones::~habitaciones()
{
    delete ui;
}

void habitaciones::on_btn_editar_habitacion_clicked()
{
    close();
}

void habitaciones::llenarDatos(){
    cargarDatos();
    for(int i=0; i<arr_habitaciones.length(); ++i){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(QString::number(arr_habitaciones.value(i).getNumero())));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(arr_habitaciones.value(i).getDescripcion()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(arr_habitaciones.value(i).getEstado() ? "disponible" : "no disponible"));
    }
    arr_habitaciones.clear();
}
void habitaciones::cargarDatos(){
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

         arr_habitaciones.append(habitacion);

        }
        inputFile.close();
    }
}
