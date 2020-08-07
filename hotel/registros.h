#ifndef REGISTROS_H
#define REGISTROS_H

#include <QWidget>

namespace Ui {
class registros;
}

class registros : public QWidget
{
    Q_OBJECT

public:
    explicit registros(QWidget *parent = nullptr);
    ~registros();
    void cargarDataRegistros();
    void cargarDataHabs();
    void llenarTablaR();
    void actualizarRegistros();
    void actualizarHabitaciones();

private slots:
    void on_btnexit_clicked();

    void on_btncobrar_clicked();

private:
    Ui::registros *ui;
};

#endif // REGISTROS_H
