#pragma once

#include "Sede.h"
#include <cstring>
#include <iostream>
using namespace std;

class ArchivoSedes {
private:
    char _nombre[30];
public:
    ArchivoSedes(const char* nombre = "sedes.dat");

    int ContarRegistros();
    int BuscarID(int id, bool todos = false);

    Sede LeerRegistro(int pos);
    bool Guardar(Sede reg);
    bool Guardar(Sede reg, int pos);
};
