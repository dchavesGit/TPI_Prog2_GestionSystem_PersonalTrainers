#pragma once
#include "Persona.h"

class Cliente : public Persona {
private:
    int id;
    int idEntrenador;
    float cuotaMensual;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getIdEntrenador() const { return idEntrenador; }
    float getCuotaMensual() const { return cuotaMensual; }
    bool getActivo() const { return activo; }

    void setID(int nuevoID) {
        if (nuevoID <= 0) id = 1;
        else id = nuevoID;
    }

    void setIdEntrenador(int idE) { idEntrenador = idE; }
    void setCuotaMensual(float c) { cuotaMensual = c; }


    void setActivo(bool estado);
};
