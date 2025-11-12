#include <iostream>
#include "Entrenadores.h"
using namespace std;

void Entrenador::Cargar() {
    Persona::Cargar();
    cout << "Años de experiencia: ";
    cin >> aniosExperiencia;
    cout << "Salario mensual: ";
    cin >> salarioMensual;
}

void Entrenador::Mostrar() {
    Persona::Mostrar();
    cout << "Años de experiencia: " << aniosExperiencia << endl;
    cout << "Salario mensual: " << salarioMensual << endl;
}

void Entrenador::setActivo(bool estado) {
    Persona::setActivo(estado);
    activo = estado;
    if (!estado) salarioMensual = 0;
}
