#pragma once
#include "Persona.h"

class Entrenador : public Persona {
private:
    int id;
    int aniosExperiencia;
    float valorClase;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getAniosExperiencia() const { return aniosExperiencia; }
    float getvalorClase() const { return valorClase; }
    bool getActivo() const { return activo; }

    void setID(int nuevoID) {
        if (nuevoID <= 0) id = 1;    // nunca existe ID 0
        else id = nuevoID;
    }

    void setAniosExperiencia(int a) { aniosExperiencia = a; }
    void setvalorClase(float s) { valorClase = s; }

    // Declaraci�n (implementaci�n en .cpp)
    void setActivo(bool estado);
};
