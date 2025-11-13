#pragma once

class Fecha {
    private:
    int dia, mes, anio;
    public:
    
    void Cargar();
    void Mostrar();
    
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    
    
    int getDia() {return dia;}
    int getMes() {return mes;}
    int getAnio() {return anio;}
    bool esCorrecta();
};