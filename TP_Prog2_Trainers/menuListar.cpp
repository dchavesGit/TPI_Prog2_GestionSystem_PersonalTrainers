#include <iostream>
#include <cstdlib>
#include "menuListar.h"
#include "funcionesListar.h"
using namespace std;

void MenuListar::Mostrar() {
    int opcion;
    while (true) {
        system("cls");
        cout << "========== MENU LISTAR ==========\n";
        cout << "1. Listar Clientes\n";
        cout << "2. Listar Entrenadores\n";
        cout << "3. Listar Sedes\n";
        cout << "0. Volver al menu principal\n";
        cout << "=================================\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                listarClientes();
                break;
            case 2:
                listarEntrenadores();
                break;
            case 3:
                listarSedes();
                break;
            case 0:
                return;
            default:
                cout << "Opcion invalida";
                system("pause");
                break;
        }
    }
}
