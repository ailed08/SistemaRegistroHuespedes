#include "crear_habitacion.h"
#include "clase_habitacion.h"
#include "tipo_habitacion.h"
#include "ui_crear_habitacion.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

QList<clase_habitacion> arr_hab;
QList<tipo_habitacion> arr_thabitaciones;

crear_habitacion::crear_habitacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crear_habitacion)
{
    ui->setupUi(this);
    llenarDatos();
}

crear_habitacion::~crear_habitacion()
{
    delete ui;
}

void crear_habitacion::llenarDatos(){
    cargarDatosTiposHabitaciones();
    for(int i=0; i<arr_thabitaciones.length(); ++i)
        ui->comboBox->addItem(arr_thabitaciones.value(i).getDes());
    arr_thabitaciones.clear();
}

void crear_habitacion::cargarDatosHabitaciones(){
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

         arr_hab.append(habitacion);

        }
        inputFile.close();
    }
}

void crear_habitacion::cargarDatosTiposHabitaciones(){
    QString nombreArch = "D:/PS/hotel/hotel/data/t.txt";
    QFile inputFile(nombreArch);
    QString line = "";
    if (inputFile.open(QIODevice::ReadOnly)){
        QTextStream in(&inputFile);

        while (!in.atEnd()){
         line = in.readLine();
         QStringList data = line.split( "," );

         tipo_habitacion tipo_hab;
         tipo_hab.setId(data.value(0).toUInt());
         tipo_hab.setDes(data.value(1));
         tipo_hab.setPrecio(data.value(2).toDouble());

         arr_thabitaciones.append(tipo_hab);

        }
        inputFile.close();
    }
}

void crear_habitacion::on_btn_crear_h_clicked()
{
    bool existe = false;
    cargarDatosHabitaciones();
    for(int i=0; i<arr_hab.length(); ++i){
        if(arr_hab.value(i).getNumero() == obtenerNumero())
            existe=true;
    }
    arr_hab.clear();
    if(existe) ui->lblerror->setText("Ya existe una habitación con ese numero");
    else{
        QFile arch;
        QTextStream io;
        QString nombreArch = "D:/PS/hotel/hotel/data/h.txt";
        arch.setFileName(nombreArch);
        arch.open(QIODevice::Append | QIODevice::Text);
        if(!arch.isOpen()){
            QMessageBox::critical(this, "error", arch.errorString());
            return;
        }
        io.setDevice(&arch);
        QString tipo = ui->comboBox->currentText();
        io<<ui->numero->toPlainText()<<","<<tipo<<","<<"1"<<endl;
        QMessageBox msgBox;
        msgBox.setText("La habitacion se ha creado correctamente");
        msgBox.exec();
        arch.flush();
        arch.close();
        close();
    }
}

void crear_habitacion::on_btn_c_h_clicked()
{
    close();
}

int crear_habitacion::obtenerNumero(){
    int a = ui->numero->toPlainText().toInt();
    return a;
}
