#include "ArchivoSedes.h"

///GUARDA EL NOMBRE DEL ARCHIVO
ArchivoSedes::ArchivoSedes(const char* nombre){
    strcpy(_nombre, nombre);
}

///CUENTA CUANTOS REGISTROS HAY
int ArchivoSedes::ContarRegistros(){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;
    fseek(p, 0, SEEK_END);
    int cantidad = ftell(p) / sizeof(Sede);
    fclose(p);
    return cantidad;
}

///BUSCAR LA SEDE POR ID
int ArchivoSedes::BuscarID(int id, bool todos){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;

    Sede reg;
    int i = 0;
    while(fread(&reg, sizeof(Sede), 1, p)){
        if(reg.getID() == id){
            fclose(p);
            if(todos || reg.getActivo())
                return i;
            else
                return -1;
        }
        i++;
    }
    fclose(p);
    return -1;
}

///LEE SEDE SEGUN POSICION
Sede ArchivoSedes::LeerRegistro(int pos){
    FILE* p = fopen(_nombre, "rb");
    Sede reg;
    if(p == NULL) return reg;

    fseek(p, sizeof(Sede) * pos, SEEK_SET);
    fread(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return reg;
}

///GUARDA NUEVA SEDE AL FINAL DEL ARCHIVO
bool ArchivoSedes::Guardar(Sede reg){
    FILE* p = fopen(_nombre, "ab");
    if(p == NULL) return false;

    bool escribio = fwrite(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return escribio;
}

///GUARDA UNA SEDE EXISTENTE EN UNA POSICION
bool ArchivoSedes::Guardar(Sede reg, int pos){
    FILE* p = fopen(_nombre, "rb+");
    if(p == NULL) return false;

    fseek(p, sizeof(Sede) * pos, SEEK_SET);
    bool escribio = fwrite(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return escribio;
}

