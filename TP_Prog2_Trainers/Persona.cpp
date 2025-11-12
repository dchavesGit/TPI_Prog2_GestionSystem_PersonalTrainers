#include <iostream>
#include <cstring>
#include "Persona.h"
using namespace std;

void Persona::Cargar() {
    cout << "Nombre: ";
    cin.ignore();
    cin.getline(nombre, 30);
    cout << "Apellido: ";
    cin.getline(apellido, 30);
    cout << "DNI: ";
    cin >> dni;
    activo = true;
}

void Persona::Mostrar() {
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Activo: " << (activo ? "Si" : "No") << endl;
}
