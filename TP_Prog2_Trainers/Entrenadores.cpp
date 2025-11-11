#include <iostream>
#include "Entrenadores.h"
using namespace std;

void Entrenador::Cargar() {
    cout << "NOMBRE: ";
    cin.ignore();
    cin.getline(nombre, 30);
    cout << "APELLIDO: ";
    cin.getline(apellido, 30);
    cout << "ESPECIALIDAD: ";
    cin.getline(especialidad, 40);
    activo = true;
}

void Entrenador::Mostrar() {
    cout << "NOMBRE: " << nombre << endl;
    cout << "APELLIDO: " << apellido << endl;
    cout << "ESPECIALIDAD: " << especialidad << endl;
}
