#pragma once

#include "Clientes.h"
#include <cstring>
#include <iostream>
using namespace std;

class ArchivoClientes {
private:
    char _nombre[30];
public:
    ArchivoClientes(const char* nombre = "clientes.dat");

    int ContarRegistros();
    int BuscarID(int id, bool todos = false);

    Cliente LeerRegistro(int pos);
    bool Guardar(Cliente reg);
    bool Guardar(Cliente reg, int pos);
};
