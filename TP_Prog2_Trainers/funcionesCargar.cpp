#include <iostream>
#include <cstdlib>
#include "Clientes.h"
#include "Entrenadores.h"
#include "Sede.h"
#include "ArchivoClientes.h"
#include "ArchivoEntrenadores.h"
#include "ArchivoSedes.h"
using namespace std;

void CargarCliente() {
    system("cls");
    Cliente reg;
    reg.Cargar();

    ArchivoClientes arc("clientes.dat");
    if (arc.Guardar(reg))
        cout << "Cliente guardado correctamente." << endl;
    else
        cout << "Error al guardar el cliente." << endl;

    system("pause");
}

void CargarEntrenador() {
    system("cls");
    Entrenador reg;
    reg.Cargar();

    ArchivoEntrenadores arc("entrenadores.dat");
    if (arc.Guardar(reg))
        cout << "Entrenador guardado correctamente." << endl;
    else
        cout << "Error al guardar el entrenador." << endl;

    system("pause");
}

void CargarSede() {
    system("cls");
    Sede reg;
    reg.Cargar();

    ArchivoSedes arc("sedes.dat");
    if (arc.Guardar(reg))
        cout << "Sede guardada correctamente." << endl;
    else
        cout << "Error al guardar la sede." << endl;

    system("pause");
}
