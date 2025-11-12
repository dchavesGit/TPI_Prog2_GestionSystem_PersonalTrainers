#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Clientes.h"
#include "Entrenadores.h"
#include "Sede.h"
#include "funcionesListar.h"
using namespace std;

void listarClientes() {
    system("cls");
    FILE* p = fopen("clientes.dat", "rb");
    if (p == NULL) {
        cout << "No se pudo abrir el archivo de clientes.\n";
        system("pause");
        return;
    }

    int opcion;
    cout << "===== LISTAR CLIENTES =====\n";
    cout << "1. Listar clientes activos\n";
    cout << "2. Listar clientes inactivos\n";
    cout << "3. Listar todos los clientes\n";
    cout << "===========================\n";
    cout << "Opcion: ";
    cin >> opcion;

    system("cls");

    Cliente reg;
    bool hayClientes = false;

    while (fread(&reg, sizeof(Cliente), 1, p)) {
        bool mostrar = false;

        switch (opcion) {
            case 1: /// ACTIVO
                if (reg.getActivo()) mostrar = true;
                break;
            case 2: /// INACTIVO
                if (!reg.getActivo()) mostrar = true;
                break;
            case 3: /// AMBOS
                mostrar = true;
                break;
            default:
                cout << "Opcion invalida.\n";
                fclose(p);
                system("pause");
                return;
        }

        if (mostrar) {
            reg.Mostrar();
            cout << "-----------------------------\n";
            hayClientes = true;
        }
    }

    fclose(p);

    if (!hayClientes)
        cout << "No hay clientes para mostrar con ese criterio.\n";

    system("pause");
}



void listarEntrenadores() {
    system("cls");
    FILE* p = fopen("entrenadores.dat", "rb");
    if (p == NULL) {
        cout << "No se pudo abrir el archivo de entrenadores.\n";
        system("pause");
        return;
    }

    Entrenador reg;
    bool hayActivos = false;
    while (fread(&reg, sizeof(Entrenador), 1, p)) {
        if (reg.getActivo()) {
            reg.Mostrar();
            cout << "-----------------------------\n";
            hayActivos = true;
        }
    }

    fclose(p);

    if (!hayActivos)
        cout << "No hay entrenadores activos para mostrar.\n";

    system("pause");
}

void listarSedes() {
    system("cls");
    FILE* p = fopen("sedes.dat", "rb");
    if (p == NULL) {
        cout << "No se pudo abrir el archivo de sedes.\n";
        system("pause");
        return;
    }

    Sede reg;
    bool haySedes = false;
    while (fread(&reg, sizeof(Sede), 1, p)) {
        reg.Mostrar();
        cout << "-----------------------------\n";
        haySedes = true;
    }

    fclose(p);

    if (!haySedes)
        cout << "No hay sedes registradas.\n";

    system("pause");
}
