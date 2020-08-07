#ifndef REGISTRAR_HUESPED_H
#define REGISTRAR_HUESPED_H

#include <QWidget>

namespace Ui {
class registrar_huesped;
}

class registrar_huesped : public QWidget
{
    Q_OBJECT

public:
    explicit registrar_huesped(QWidget *parent = nullptr);
    ~registrar_huesped();
    void cargarDatosHab();
    void llenarTabla();
    void cargarDatosTH();
    //void obtenerMonto();
    //void actualizarR();
    void actualizarH();

private slots:
    void on_btnseleccionar_clicked();

    void on_btnregistrar_clicked();

    void on_btncancelar_clicked();

private:
    Ui::registrar_huesped *ui;
};

#endif // REGISTRAR_HUESPED_H
