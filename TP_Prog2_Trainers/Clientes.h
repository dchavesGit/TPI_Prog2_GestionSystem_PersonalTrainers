#pragma once
#include "Clientes.h"

class Cliente {
private:
    int id;
    char nombre[30];
    char apellido[30];
    int dni;
    int idEntrenador; ///PARA RELACIONARLO CON SU ENTRENADOR
    float cuotaMensual;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getIdEntrenador() const { return idEntrenador; }
    float getCuotaMensual() const { return cuotaMensual; }
    bool getActivo() const { return activo; }

    void setActivo(bool estado) { activo = estado; }
    void setCuotaMensual(float c) { cuotaMensual = c; }
};

