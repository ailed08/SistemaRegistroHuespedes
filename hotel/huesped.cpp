#include "huesped.h"

void huesped::setDni(int d){
    dni = d;
}
void huesped::setNombres(QString n){
    nombres = n;
}
void huesped::setApellidos(QString a){
    apellidos = a;
}
int huesped::getDni(){
    return dni;
}
QString huesped::getNombres(){
    return nombres;
}
QString huesped::getApellidos(){
    return apellidos;
}
