#include <iostream>
#include <cstdlib>
#include "menuCargar.h"
#include "funcionesCargar.h"
using namespace std;

void MenuCargar::Mostrar() {
    int opcion;
    while (true) {
        system("cls");
        cout << "*MENU DE CARGAR*" << endl << endl;
        cout << "1. CARGAR CLIENTE " << endl;
        cout << "2. CARGAR PERSONAL TRAINER" << endl;
        cout << "3. CARGAR SEDE" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                CargarCliente();
                break;
            case 2:
                CargarEntrenador();
                break;
            case 3:
                CargarSede();
                break;
            case 0:
                return;
            default:
                cout << "Opción inválida." << endl;
                system("pause");
                break;
        }
    }
}
