#pragma once
#include "Clientes.h"

class Entrenador {
private:
    int id;
    char nombre[30];
    char apellido[30];
    int dni;
    char especialidad[30];  ///  FUERZA, RESISTENCIA, ETC
    int idSede;             /// SEDE QUE PERTENECE
    float sueldoBase;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getIdSede() const { return idSede; }
    float getSueldoBase() const { return sueldoBase; }
    bool getActivo() const { return activo; }

    void setActivo(bool estado) { activo = estado; }
    void setSueldoBase(float s) { sueldoBase = s; }
};
