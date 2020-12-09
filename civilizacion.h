#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <iomanip>

using namespace std;

class Civilizacion{
    private:
        string nombre;
        float ubicacion_x;
        float ubicacion_y;
        float puntuacion;
    public:
        Civilizacion();
        Civilizacion(const string &nombre, const float ubicacion_x, const float ubicacion_y, float puntuacion);
        void setNombre(const string &c);
        string getNombre();
        void setUbicacion_x(const float c);
        float getUbicacion_x();
        void setUbicacion_y(const float c);
        float getUbicacion_y();
        void setPuntuacion(float c);
        float getPuntuacion();

    friend ostream & operator<<(ostream &out, const Civilizacion &p){
        out << left;
        out << setw(20) << p.nombre;
        out << setw(20) << p.ubicacion_x;
        out << setw(20) << p.ubicacion_y;
        out << setw(5) << p.puntuacion;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &p){
        fflush(stdin);
        cout<< "Nombre: ";
        getline(cin, p.nombre);

        cout<< "Ubicacion en x: ";
        cin >> p.ubicacion_x;

        cout<< "Ubicacion en y: ";
        cin >> p.ubicacion_y;
        fflush(stdin);
        cout<< "Puntuacion: ";
        cin>>p.puntuacion;
    

        return in;
    }

    bool operator==(const Civilizacion& p){
        return (nombre == p.nombre);
    }

    bool operator==(const Civilizacion& p) const{
        return (nombre == p.nombre);
    }

    bool operator<(const Civilizacion& p){
        return nombre < p.nombre;
    }

    bool operator<(const Civilizacion& p) const{
        return nombre < p.nombre;
    }
   
};

#endif