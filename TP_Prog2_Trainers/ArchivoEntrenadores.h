#pragma once

#include "Entrenadores.h"
#include <cstring>
#include <iostream>
using namespace std;

class ArchivoEntrenadores {
private:
    char _nombre[30];
public:
    ArchivoEntrenadores(const char* nombre = "entrenadores.dat");

    int ContarRegistros();
    int BuscarID(int id, bool todos = false);

    Entrenador LeerRegistro(int pos);
    bool Guardar(Entrenador reg);
    bool Guardar(Entrenador reg, int pos);
};

