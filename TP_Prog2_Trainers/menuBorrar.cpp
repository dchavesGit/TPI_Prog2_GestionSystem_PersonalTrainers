#include <iostream>
#include "menuBorrar.h"
#include "funcionesBorrar.h"
using namespace std;

void MenuBorrar::Mostrar() {
    int opcion;
    while (true) {
        system("cls");
        cout << "==========================================" << endl;
        cout << "           MENU BORRAR REGISTROS          " << endl;
        cout << "==========================================" << endl;
        cout << "1. Borrar Cliente" << endl;
        cout << "2. Borrar Entrenador" << endl;
        cout << "3. Borrar Sede" << endl;
        cout << "0. Volver" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: borrarCliente(); break;
        case 2: borrarEntrenador(); break;
        case 3: borrarSede(); break;
        case 0: return;
        default:
            cout << "Opcion incorrecta." << endl;
            system("pause");
            break;
        }
    }
}

