#include "tipo_habitacion.h"

void tipo_habitacion::setId(int i){
    id = i;
}
void tipo_habitacion::setDes(QString de){
   des = de;
}
void tipo_habitacion::setPrecio(double p){
    precio = p;
}
int tipo_habitacion::getId(){
    return id;
}
QString tipo_habitacion::getDes(){
    return des;
}
double tipo_habitacion::getPrecio(){
    return precio;
}
