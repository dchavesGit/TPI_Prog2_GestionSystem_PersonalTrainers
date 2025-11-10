#include <iostream>
#include <cstdlib>
#include "menuCargar.h"
using namespace std;

void MenuCargar::Mostrar() {
    system("cls");
    cout << "*MENU DE CARGAR*" << endl << endl;
    cout << "1. CLIENTES " << endl;
    cout << "2. PERSONAL TRAINERS" << endl;
    cout << "3. CLASES" << endl;
    cout << endl << "0. Salir" << endl << endl;

    cout << "Ingresar opción: ";
    int opcion;
    cin >> opcion;
}
