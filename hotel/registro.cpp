#include "registro.h"

void registro::setNumeroHab(int nh){
    numero_hab = nh;
}
void registro::setDniH(int _d){
    dni_h = _d;
}
void registro::setNombresH(QString nm){
    nombres_h = nm;
}
void registro::setApellidos(QString ap){
    apellidos_h = ap;
}
void registro::setMonto(int m){
    monto = m;
}
int registro::getNumeroHab(){
    return numero_hab;
}
int registro::getDniH(){
    return dni_h;
}
QString registro::getNombres_h(){
    return nombres_h;
}
QString registro::getApellidos_h(){
    return apellidos_h;
}
int registro::getMonto(){
    return monto;
}
