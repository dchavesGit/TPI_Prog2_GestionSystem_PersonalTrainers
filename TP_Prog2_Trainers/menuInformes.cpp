#include <iostream>
#include <cstdlib>
#include "menuInformes.h"
using namespace std;

void MenuInformes::Mostrar(){
    system("cls");
     cout << "*MENU DE INFORMES*" << endl << endl;
        cout << "1. RECAUDACIÓN TOTAL " << endl;
        cout << "2. RECAUDACIÓN POR PERSONAL TRAINER" << endl;
        cout << "3. RECAUDACIÓN POR SEDE" << endl;
        cout << "4. TOTAL CLASES X PERSONAL TRAINER " << endl;
        cout << "5. TOTAL CLASES EFECTUADAS POR MES " << endl;
        cout << "6. TOTAL DE CLASES NO ABONADAS " << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        int opcion;
        cin >> opcion;
}
