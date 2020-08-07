#ifndef HABITACIONES_H
#define HABITACIONES_H

#include <QWidget>

namespace Ui {
class habitaciones;
}

class habitaciones : public QWidget
{
    Q_OBJECT

public:
    explicit habitaciones(QWidget *parent = nullptr);
    ~habitaciones();
    void llenarDatos();
    void cargarDatos();

private slots:
    void on_btn_editar_habitacion_clicked();

private:
    Ui::habitaciones *ui;
};

#endif // HABITACIONES_H
