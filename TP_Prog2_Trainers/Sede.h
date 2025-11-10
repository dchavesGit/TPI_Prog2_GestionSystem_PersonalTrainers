#pragma once

#include "Sede.h"

class Sede {
private:
    int id;
    char nombre[30];
    char direccion[50];
    char telefono[20];
    bool activa;

public:

    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    const char* getNombre() const { return nombre; }
    bool getActiva() const { return activa; }

    void setActiva(bool estado) { activa = estado; }
};
