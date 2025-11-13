#include <iostream>
#include "Entrenadores.h"
using namespace std;

void Entrenador::Cargar() {
    Persona::Cargar();
    cout << "A�os de experiencia: ";
    cin >> aniosExperiencia;
    cout << "Valor de la clase dictada: ";
    cin >> valorClase;
}

void Entrenador::Mostrar() {
    Persona::Mostrar();
    cout << "A�os de experiencia: " << aniosExperiencia << endl;
    cout << "Valor de la clase dictada: " << valorClase << endl;
}

void Entrenador::setActivo(bool estado) {
    Persona::setActivo(estado);
    activo = estado;
    if (!estado) valorClase = 0;
}
