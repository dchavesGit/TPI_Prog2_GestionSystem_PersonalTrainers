#include <iostream>
#include <cstring>
#include "Clientes.h"
using namespace std;

void Cliente::Cargar() {
    Persona::Cargar();

    cout << "ID del entrenador: ";
    cin >> idEntrenador;
    cout << "Cuota mensual: ";
    cin >> cuotaMensual;
    activo = true;
}

void Cliente::Mostrar() {
    cout << "ID Cliente: " << id << endl;
    cout << "Entrenador ID: " << idEntrenador << endl;
    cout << "Cuota Mensual: " << cuotaMensual << endl;
    cout << "Activo: " << (activo ? "Si" : "No") << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "-----------------------------------\n";
}

void Cliente::setActivo(bool estado) {
    activo = estado;
}


