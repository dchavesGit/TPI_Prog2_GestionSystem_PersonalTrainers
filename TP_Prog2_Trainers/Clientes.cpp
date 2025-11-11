#include <iostream>
#include "Clientes.h"
using namespace std;

void Cliente::Cargar() {
    cout << "NOMBRE: ";
    cin.ignore();
    cin.getline(nombre, 30);
    cout << "APELLIDO: ";
    cin.getline(apellido, 30);
    cout << "DNI: ";
    cin >> dni;
    cout << "ID ENTRENADOR: ";
    cin >> idEntrenador;
    cout << "CUOTA MENSUAL: ";
    cin >> cuotaMensual;
    activo = true;
}

void Cliente::Mostrar() {
    cout << "NOMBRE: " << nombre << endl;
    cout << "APELLIDO: " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "ID ENTRENADOR: " << idEntrenador << endl;
    cout << "CUOTA MENSUAL: $" << cuotaMensual << endl;
}
