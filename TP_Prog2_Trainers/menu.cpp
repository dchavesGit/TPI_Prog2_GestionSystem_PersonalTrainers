#include <iostream>
#include "menu.h"
using namespace std;

void Menu::Principal(){
    while(true){
        system("cls");
        cout << "==========================================" << endl;
        cout << "   SISTEMA DE GESTIÓN DE ENTRENAMIENTO" << endl;
        cout << "        Y PREPARACIÓN FÍSICA" << endl;
        cout << "==========================================" << endl << endl;
        cout << "**MENU PRINCIPAL**" << endl << endl;
        cout << "1. CARGAR " << endl;
        cout << "2. BORRAR" << endl;
        cout << "3. MODIFICAR" << endl;
        cout << "4. REPORTES" << endl;
        cout << "5. INFORMES" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;

          switch(_opcion){
        case 1:
            Cargar();
            break;
        case 2:
            Borrar();
            break;
        case 3:
            Modificar();
            break;
        case 4:
            Reportes();
            break;
        case 5:
            Informes();
            break;
    }

}
}
void Menu::Cargar(){
    system("cls");
     cout << "*MENU DE CARGAR*" << endl << endl;
        cout << "1. CLIENTES " << endl;
        cout << "2. PERSONAL TRAINERS" << endl;
        cout << "3. CLASES" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;
}

void Menu::Borrar (){
    system("cls");
     cout << "*MENU DE BORRAR*" << endl << endl;
        cout << "1. CLIENTES " << endl;
        cout << "2. PERSONAL TRAINERS" << endl;
        cout << "3. CLASES" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;
}

void Menu::Modificar (){
    system("cls");
     cout << "*MENU DE MODIFICAR*" << endl << endl;
        cout << "1. CLIENTES " << endl;
        cout << "2. PERSONAL TRAINERS" << endl;
        cout << "3. CLASES" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;
}

void Menu::Reportes(){
    system("cls");
     cout << "*MENU DE REPORTES*" << endl << endl;
        cout << "1. CLIENTES " << endl;
        cout << "2. CLASES" << endl;
        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;
}

void Menu::Informes(){
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
        cin >> _opcion;
}
