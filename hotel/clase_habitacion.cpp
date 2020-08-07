#include "clase_habitacion.h"

void clase_habitacion::setNumero(int n){
    numero = n;
}
void clase_habitacion::setDescripcion(QString d){
    descripcion = d;
}
void clase_habitacion::setEstado(bool e){
    estado = e;
}
int clase_habitacion::getNumero(){
    return numero;
}
QString clase_habitacion::getDescripcion(){
    return descripcion;
}
bool clase_habitacion::getEstado(){
    return estado;
}
