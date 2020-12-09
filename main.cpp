#include <iostream>
#include "videogame.h"
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    Videogame v;
    string op;
    string nombre_usuario;

    do{
        cout<<"01.- Nombre de usuario"<<endl;
        cout<<"02.- Agregar civilizacion"<<endl;
        cout<<"03.- Insertar civilizacion"<<endl;
        cout<<"04.- Crear civilizacion"<<endl;
        cout<<"05.- Primera civilizacion"<<endl;
        cout<<"06.- Ultima civilizacion"<<endl;
        cout<<"07.- Ordenar"<<endl;
        cout<<"08.- Eliminar civilizacion"<<endl;
        cout<<"09.- Buscar"<<endl;
        cout<<"10.- Modificar"<<endl;
        cout<<"11.- Resumen"<<endl;
        cout<<"12.- Salir"<<endl<<endl;
        cout<<"Opcion: ";
        getline(cin,op);

        if(op == "1" || op == "01"){
            cout<<"Esta en la opccion: "<<op<<endl;
            cout<<"Nombre de usuario: ";
            getline(cin,nombre_usuario);
            system("pause");
            //---------------------------------------------------------1
        }else if (op == "2" || op == "02"){
            cout<<"Esta en la opccion: "<<op<<endl;
            Civilizacion c;
            cin>>c; cin.ignore();
            v.agregar(c);
            system("pause");
            //---------------------------------------------------------2
        }else if (op == "3" || op == "03"){
            cout<<"Esta en la opccion: "<<op<<endl;
            Civilizacion c;
            cin>>c;
            size_t pos;
            cout<<"Posicion a insertar: ";
            cin>>pos; cin.ignore();
            if(pos >= v.size()){
                cout<<"Posicion invalida"<<endl;
            }else{
                v.insertar(c,pos);
            }
            system("pause");
            //---------------------------------------------------------3
        }else if (op == "4" || op == "04"){
            cout<<"Esta en la opccion: "<<op<<endl;
            Civilizacion c;
            cin>>c;
            size_t n;
            cout<<"n: ";
            cin>>n; cin.ignore();
            v.inicializar(c,n);
            system("pause");
            //---------------------------------------------------------4
        }else if (op == "5" || op == "05"){
            cout<<"Esta en la opccion: "<<op<<endl;
            v.primero();
            system("pause");
            //---------------------------------------------------------5
        }else if (op == "6" || op == "06"){
            cout<<"Esta en la opccion: "<<op<<endl;
            v.ultimo();
            system("pause");
            //---------------------------------------------------------6
        }else if (op == "7" || op == "07"){
            cout<<"Esta en la opccion: "<<op<<endl;
            cout<<"Ordenar por: "<<endl<<"1.- Nombre."<<endl<<"2.- Ubicacion en x."<<endl<<"3.- Ubicacion en y"<<endl<<"4.- Puntuacion"<<endl;
            string opc;
            cout<<"Opcion: ";
            getline(cin,opc); //cin.ignore();
            if(opc == "1" || opc == "01"){
                v.ordenar_nombre();
            }else if(opc == "2" || opc == "02"){
                v.ordenar_ubicacion_x();
            }else if(opc == "3" || opc == "03"){
                v.ordenar_ubicacion_y();
            }else if(opc == "4" || opc == "04"){
                v.ordenar_puntacion();
            }else{
                cout<<"opccion no valida.";
            }
            
            //---------------------------------------------------------7
        }else if (op == "8" || op == "08"){
            cout<<"Esta en la opccion: "<<op<<endl;
            string nombre;
            cout<<"Civilizacion: ";
            getline(cin,nombre);
            v.eliminar(nombre);
            system("pause");
            //---------------------------------------------------------8
        }else if (op == "9" || op == "09"){
            cout<<"Esta en la opccion: "<<op<<endl;
            Civilizacion c;
            cin>>c;
            Civilizacion *ptr = v.buscar(c);
            if(ptr == nullptr){
                cout<<"No encontrado"<<endl;
            }else{
                cout<<*ptr<<endl;
            }
            system("pause");
            //---------------------------------------------------------9
        }else if (op == "10"){
            cout<<"Esta en la opccion: "<<op<<endl;
            string nombre;
            cout<<"Civilizacion: ";
            getline(cin,nombre);
            v.modificar(nombre);
            system("pause");
            //---------------------------------------------------------10
        }else if (op == "11"){
            cout<<"Esta en la opccion: "<<op<<endl;
            cout<<"Usuario: "<<nombre_usuario<<endl<<endl;
            v.mostrar();
            system("pause");
            //---------------------------------------------------------11
            v.mostrar();
        }else if (op == "12"){
            cout<<"Esta en la opccion: "<<op<<endl;
            //---------------------------------------------------------12
        }else{
            cout<<"No es una opccion valida . . ."<<endl;
        }
    }while(op != "12");
    
    
    

    return 0;
}