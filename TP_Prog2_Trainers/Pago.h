#pragma once
#include "Sede.h"
#include "Clientes.h"
#include "Entrenadores.h"
#include "Fecha.h"

enum Estado {
    pago,
    inpago,
};
/*
que la tabla clases sea pagos, con idPagos
me hago una clase clases, que contengan solo idClase y el nivel y los valores de cada nivel 
—--------------------------------------------------------------------------------------------------------------------


Hacer correcciones indicadas por Juan en el informe. 

Generar nuevas clases:
Lo que dijo el profe es que como mínimo son 3, pero como somos 3 en el grupo, tendríamos que hacer algunas más. 

Clases Persona que de ahí herededen personal trainers y clientes 
Clase Pago: idpago, idclase, idtrainers, dni, valor, fecha, abonado, estado.
Clase Clases: idclase, idsede, modalidad,motivo, clasedada, valor, estado, nivel.
clase Sede: idsede, nombre.

*/



class Pagos {
private:

    int idPago;
    int idClase;
    int idEntrenador;
    int dni;
    float valor;
    Fecha fecha;
    Estado estado;

public:
    void setIdPago(int id);
    void setIdClase(int id);
    void setIdEntrenador(int id);
    void setDni (int dni);
    void setValor(float valor);
    void setFecha(Fecha fecha);
    void setEstado (Estado estado);
    
    


    void setActivo(bool estado);
};
