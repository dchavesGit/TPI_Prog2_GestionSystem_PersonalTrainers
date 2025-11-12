#pragma once

class Persona {
protected:
    int id;
    char nombre[30];
    char apellido[30];
    int dni;
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    int getDNI() const { return dni; }
    bool getActivo() const { return activo; }

    void setActivo(bool estado) { activo = estado; }
};

