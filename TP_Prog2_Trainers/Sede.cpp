#include <iostream>
#include "Sede.h"
using namespace std;

void Sede::Cargar() {
    cout << "NOMBRE: ";
    cin.ignore();
    cin.getline(nombre, 40);
    cout << "DIRECCION: ";
    cin.getline(direccion, 60);
    activo = true;
}

void Sede::Mostrar() {
    cout << "NOMBRE: " << nombre << endl;
    cout << "DIRECCION: " << direccion << endl;
}

