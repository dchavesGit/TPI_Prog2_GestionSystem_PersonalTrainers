#include "Fecha.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void Fecha::Cargar(){
    int _dia, _mes, _anio;
    cout << "INGRESAR DIA: " << endl;
    cin >> _dia;
    setDia(_dia);
    cout << "INGRESAR MES: " << endl;
    cin >> _mes; 
    setMes(_mes);
    cout << "INGRESAR ANIO: " << endl;
    cin >> _anio;
    setAnio(_anio);
}

void Fecha::setDia(int d){
    if(d > 1 && d <= 31) dia = d;
    else dia = -1;
}

void Fecha::setMes(int m){
    if(m > 1 && m <= 12) mes = m;
    else mes = -1;
}

void Fecha::setAnio(int a){
    if(a > 0) anio = a;
    else anio = -1;
}

void Fecha::Mostrar(){
    cout << dia << "/" << mes << "/" << anio << endl;
}
    
int Fecha::getDia() {return dia;}
int Fecha::getMes() {return mes;}
int Fecha::getAnio() {return anio;}
 
