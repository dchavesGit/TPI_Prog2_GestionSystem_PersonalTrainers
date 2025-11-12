#include <iostream>
#include "menu.h"
#include "menuCargar.h"
#include "menuBorrar.h"
#include "menuModificar.h"
#include "menuReportes.h"
#include "menuInformes.h"
#include "menuListar.h"

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
        cout << "6. LISTAR" << endl;

        cout << endl << "0. Salir" << endl << endl;

        cout << "Ingresar opción: ";
        cin >> _opcion;

          switch(_opcion){
        case 1:{
            MenuCargar menu;
            menu.Mostrar();
            break;}
        case 2:{
            MenuBorrar menu;
            menu.Mostrar();
            break;}
        case 3:{
            MenuModificar menu;
            menu.Mostrar();
            break;}
        case 4:{
            MenuReportes menu;
            menu.Mostrar();
            break;}
        case 5:{
            MenuInformes menu;
            menu.Mostrar();
            break;}
        case 6:{
            MenuListar menu;
            menu.Mostrar();
            break;}

        }
    }
}
