#pragma once
#include <cstring>
#include "Clientes.h"

class ArchivoClientes {
private:
    char _nombre[30];

public:
    ArchivoClientes(const char* n = "clientes.dat");
    bool Guardar(Cliente reg);
    bool Guardar(Cliente reg, int pos);
    Cliente LeerRegistro(int pos);
    int ContarRegistros();
    int BuscarID(int id, bool todos);
    int BuscarDni(int dni, bool todos);
};
