#ifndef CREAR_HABITACION_H
#define CREAR_HABITACION_H

#include <QWidget>

namespace Ui {
class crear_habitacion;
}

class crear_habitacion : public QWidget
{
    Q_OBJECT

public:
    explicit crear_habitacion(QWidget *parent = nullptr);
    ~crear_habitacion();
    int obtenerNumero();
    void llenarDatos();
    void cargarDatosHabitaciones();
    void cargarDatosTiposHabitaciones();

private slots:
    void on_btn_crear_h_clicked();

    void on_btn_c_h_clicked();

private:
    Ui::crear_habitacion *ui;
};

#endif // CREAR_HABITACION_H
