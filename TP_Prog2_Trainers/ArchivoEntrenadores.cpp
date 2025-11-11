#include "ArchivoEntrenadores.h"

ArchivoEntrenadores::ArchivoEntrenadores(const char* nombre){
    strcpy(_nombre, nombre);
}

int ArchivoEntrenadores::ContarRegistros(){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;
    fseek(p, 0, 2);
    int cantidad = ftell(p) / sizeof(Entrenador);
    fclose(p);
    return cantidad;
}

int ArchivoEntrenadores::BuscarID(int id, bool todos){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;

    Entrenador reg;
    int i = 0;
    while(fread(&reg, sizeof(Entrenador), 1, p)){
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

Entrenador ArchivoEntrenadores::LeerRegistro(int pos){
    FILE* p = fopen(_nombre, "rb");
    Entrenador reg;
    if(p == NULL) return reg;

    fseek(p, sizeof(Entrenador) * pos, 0);
    fread(&reg, sizeof(Entrenador), 1, p);
    fclose(p);
    return reg;
}

bool ArchivoEntrenadores::Guardar(Entrenador reg){
    FILE* p = fopen(_nombre, "ab");
    if(p == NULL) return false;
    bool escribio = fwrite(&reg, sizeof(Entrenador), 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoEntrenadores::Guardar(Entrenador reg, int pos){
    FILE* p = fopen(_nombre, "rb+");
    if(p == NULL) return false;
    fseek(p, sizeof(Entrenador) * pos, 0);
    bool escribio = fwrite(&reg, sizeof(Entrenador), 1, p);
    fclose(p);
    return escribio;
}
