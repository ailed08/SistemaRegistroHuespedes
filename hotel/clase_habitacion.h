#ifndef CLASE_HABITACION_H
#define CLASE_HABITACION_H
#include <QWidget>
class clase_habitacion{
private:
    int numero;
    QString descripcion;
    bool estado;
public:
    void setNumero(int);
    void setDescripcion(QString);
    void setEstado(bool);
    int getNumero();
    QString getDescripcion();
    bool getEstado();
};

#endif // CLASE_HABITACION_H
