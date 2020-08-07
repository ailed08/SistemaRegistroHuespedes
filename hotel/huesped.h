#ifndef HUESPED_H
#define HUESPED_H
#include <QWidget>
class huesped{
private:
    int dni;
    QString nombres;
    QString apellidos;

public:
    void setDni(int);
    void setNombres(QString);
    void setApellidos(QString);
    int getDni();
    QString getNombres();
    QString getApellidos();
};
#endif // HUESPED_H
