#include <iostream>
#include <cstdio>
#include "Clientes.h"
#include "Entrenadores.h"
#include "Sede.h"
using namespace std;

void borrarCliente() {
    int id;
    cout << "Ingrese el ID del cliente a borrar: ";
    cin >> id;

    FILE* p = fopen("clientes.dat", "rb+");
    if (p == nullptr) {
        cout << "No se pudo abrir el archivo de clientes." << endl;
        system("pause");
        return;
    }

    Cliente obj;
    while (fread(&obj, sizeof(Cliente), 1, p)) {
        if (obj.getID() == id && obj.getActivo()) {
            obj.setActivo(false);
            fseek(p, -sizeof(Cliente), SEEK_CUR);
            fwrite(&obj, sizeof(Cliente), 1, p);
            cout << "Cliente borrado correctamente." << endl;
            fclose(p);
            system("pause");
            return;
        }
    }

    cout << "Cliente no encontrado o ya inactivo." << endl;
    fclose(p);
    system("pause");
}

void borrarEntrenador() {
    int id;
    cout << "Ingrese el ID del entrenador a borrar: ";
    cin >> id;

    FILE* p = fopen("entrenadores.dat", "rb+");
    if (p == nullptr) {
        cout << "No se pudo abrir el archivo de entrenadores." << endl;
        system("pause");
        return;
    }

    Entrenador obj;
    while (fread(&obj, sizeof(Entrenador), 1, p)) {
        if (obj.getID() == id && obj.getActivo()) {
            obj.setActivo(false);
            fseek(p, -sizeof(Entrenador), SEEK_CUR);
            fwrite(&obj, sizeof(Entrenador), 1, p);
            cout << "Entrenador borrado correctamente." << endl;
            fclose(p);
            system("pause");
            return;
        }
    }

    cout << "Entrenador no encontrado o ya inactivo." << endl;
    fclose(p);
    system("pause");
}

void borrarSede() {
    int id;
    cout << "Ingrese el ID de la sede a borrar: ";
    cin >> id;

    FILE* p = fopen("sedes.dat", "rb+");
    if (p == nullptr) {
        cout << "No se pudo abrir el archivo de sedes." << endl;
        system("pause");
        return;
    }

    Sede obj;
    while (fread(&obj, sizeof(Sede), 1, p)) {
        if (obj.getID() == id && obj.getActivo()) {
            obj.setActivo(false);
            fseek(p, -sizeof(Sede), SEEK_CUR);
            fwrite(&obj, sizeof(Sede), 1, p);
            cout << "Sede borrada correctamente." << endl;
            fclose(p);
            system("pause");
            return;
        }
    }

    cout << "Sede no encontrada o ya inactiva." << endl;
    fclose(p);
    system("pause");
}
