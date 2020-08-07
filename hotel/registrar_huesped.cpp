#include "registrar_huesped.h"
#include "ui_registrar_huesped.h"
#include "huesped.h"
#include <clase_habitacion.h>
#include <tipo_habitacion.h>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

QList<clase_habitacion> arr_h;
QList<tipo_habitacion> arr_t;


registrar_huesped::registrar_huesped(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registrar_huesped)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Habitaciones");
    titulos <<"Numero" << "Tipo" << "Estado";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    ui->tableWidget->setColumnWidth(0,138);
    ui->tableWidget->setColumnWidth(1,138);
    ui->tableWidget->setColumnWidth(2,138);
    llenarTabla();
}

registrar_huesped::~registrar_huesped()
{
    delete ui;
}

void registrar_huesped::on_btnseleccionar_clicked()
{
    cargarDatosTH();
    ui->error1->setText("");
    ui->error2->setText("");
    ui->error3->setText("");
    int columna = ui->tableWidget->currentRow();
    QString numero_h = ui->tableWidget->item(columna, 0)->text();
    QString monto_h = ui->tableWidget->item(columna, 1)->text();
    for(int i=0; i<arr_t.length(); ++i){
        if(arr_t.value(i).getDes() == monto_h)
            monto_h = QString::number(arr_t.value(i).getPrecio());
    }
    ui->txthabitacion->setText(numero_h);
    ui->txtmonto->setText(monto_h);
    arr_t.clear();
}

void registrar_huesped::on_btnregistrar_clicked()
{
    cargarDatosHab();
    ui->error1->setText("");
    ui->error2->setText("");
    ui->error3->setText("");
    if(ui->txtdni->toPlainText().isEmpty()){
        ui->error1->setText("Campo vacío");
    }else
    if(ui->txtapellidos->toPlainText().isEmpty()){
        ui->error2->setText("Campo vacío");
    }else
    if(ui->txtnombres->toPlainText().isEmpty()){
        ui->error3->setText("Campo vacío");
    }else if(ui->txtmonto->toPlainText().isEmpty()){
        ui->error4->setText("Eliga una\nhabitacion");
    }else{
        QString dni = ui->txtdni->toPlainText();
        QString nombres = ui->txtnombres->toPlainText();
        QString apellidos = ui->txtapellidos->toPlainText();
        int nhab = ui->txthabitacion->toPlainText().toInt();
        QString mhab = ui->txtmonto->toPlainText();
        QFile arch;
        QTextStream io;
        QString nombreArch = "D:/PS/hotel/hotel/data/r.txt";
        arch.setFileName(nombreArch);
        arch.open(QIODevice::Append | QIODevice::Text);
        if(!arch.isOpen()){
            QMessageBox::critical(this, "error", arch.errorString());
            return;
        }
        io.setDevice(&arch);
        io<<nhab<<","<<dni<<","<<nombres<<","<<apellidos<<","<<mhab<<endl;

        for(int i=0; i<arr_h.length(); ++i){
            if(arr_h.value(i).getNumero() == nhab){
                clase_habitacion aux;
                int nn = arr_h.value(i).getNumero();
                QString dd = arr_h.value(i).getDescripcion();
                bool ss = false;
                aux.setNumero(nn);
                aux.setDescripcion(dd);
                aux.setEstado(ss);
                arr_h.replace(i,aux);
            }
        }

        actualizarH();
        QMessageBox msgBox;
        msgBox.setText("Registro exitoso");
        msgBox.exec();
        arch.flush();
        arch.close();
        close();
    }
}

void registrar_huesped::cargarDatosHab(){
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
             habitacion.setEstado(data.value(2).toInt());
             arr_h.append(habitacion);
        }
        inputFile.close();
    }
}

void registrar_huesped::cargarDatosTH(){
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

         arr_t.append(tipo_hab);

        }
        inputFile.close();
    }
}

void registrar_huesped::llenarTabla(){
    cargarDatosHab();
    for(int i=0; i<arr_h.length(); ++i){
        if(arr_h.value(i).getEstado()==true){
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(QString::number(arr_h.value(i).getNumero())));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(arr_h.value(i).getDescripcion()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(arr_h.value(i).getEstado() ? "disponible" : "no disponible"));
        }
    }
    arr_h.clear();
}

void registrar_huesped::on_btncancelar_clicked()
{
    close();
}

void registrar_huesped::actualizarH(){
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
    for(int i=0; i<arr_h.length(); ++i){
        io<<arr_h.value(i).getNumero()<<","<<arr_h.value(i).getDescripcion()<<","<<arr_h.value(i).getEstado()<<endl;
    }

    arch.flush();
    arch.close();
    arr_h.clear();
}
