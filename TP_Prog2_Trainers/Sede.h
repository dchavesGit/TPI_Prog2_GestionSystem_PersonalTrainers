#pragma once

class Sede {
private:
    int id;
    char nombre[40];
    char direccion[60];
    bool activo;

public:
    void Cargar();
    void Mostrar();

    int getID() const { return id; }
    bool getActivo() const { return activo; }
    void setActivo(bool estado) { activo = estado; }
};
