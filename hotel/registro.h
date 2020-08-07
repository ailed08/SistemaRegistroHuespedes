#ifndef REGISTRO_H
#define REGISTRO_H
#include <QWidget>
class registro{
private:
    int numero_hab;
    int dni_h;
    QString nombres_h;
    QString apellidos_h;
    int monto;

public:
    void setNumeroHab(int);
    void setDniH(int);
    void setNombresH(QString);
    void setApellidos(QString);
    void setMonto(int);
    int getNumeroHab();
    int getDniH();
    QString getNombres_h();
    QString getApellidos_h();
    int getMonto();
};
#endif // REGISTRO_H
