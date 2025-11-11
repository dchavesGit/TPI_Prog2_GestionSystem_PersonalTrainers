#pragma once

class Entrenador {
private:
    int id;
    char nombre[30];
    char apellido[30];
    char especialidad[40];
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    bool getActivo() const { return activo; }
    void setActivo(bool estado) { activo = estado; }
};
