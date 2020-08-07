#ifndef TIPO_HABITACION_H
#define TIPO_HABITACION_H
#include <QWidget>
class tipo_habitacion{
private:
    int id;
    QString des;
    double precio;
public:
    void setId(int);
    void setDes(QString);
    void setPrecio(double);
    int getId();
    QString getDes();
    double getPrecio();
};

#endif // TIPO_HABITACION_H
