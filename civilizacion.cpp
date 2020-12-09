#include "civilizacion.h"

Civilizacion::Civilizacion(){}

Civilizacion::Civilizacion(const string &nombre, const float ubicacion_x, const float ubicacion_y, float puntuacion){
    this->nombre = nombre;
    this->ubicacion_x = ubicacion_x;
    this->ubicacion_y = ubicacion_y;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &c){
    nombre = c;
}
string Civilizacion::getNombre(){
    return nombre;
}

void Civilizacion::setUbicacion_x(const float c){
    ubicacion_x = c;
}
float Civilizacion::getUbicacion_x(){
    return ubicacion_x;
}

void Civilizacion::setUbicacion_y(const float c){
    ubicacion_y =  c;
}
float Civilizacion::getUbicacion_y(){
    return ubicacion_y;
}

void Civilizacion::setPuntuacion(float c){
    puntuacion = c;
}
float Civilizacion::getPuntuacion(){
    return puntuacion;
}