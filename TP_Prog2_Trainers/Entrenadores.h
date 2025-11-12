#pragma once
#include "Persona.h"

class Entrenador : public Persona {
private:
    int id;
    int aniosExperiencia;
    float salarioMensual;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getAniosExperiencia() const { return aniosExperiencia; }
    float getSalarioMensual() const { return salarioMensual; }
    bool getActivo() const { return activo; }

    void setID(int nuevoID) {
        if (nuevoID <= 0) id = 1;    // nunca existe ID 0
        else id = nuevoID;
    }

    void setAniosExperiencia(int a) { aniosExperiencia = a; }
    void setSalarioMensual(float s) { salarioMensual = s; }

    // Declaración (implementación en .cpp)
    void setActivo(bool estado);
};
