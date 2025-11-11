#include "ArchivoSedes.h"

ArchivoSedes::ArchivoSedes(const char* nombre){
    strcpy(_nombre, nombre);
}

int ArchivoSedes::ContarRegistros(){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;
    fseek(p, 0, 2);
    int cantidad = ftell(p) / sizeof(Sede);
    fclose(p);
    return cantidad;
}

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

Sede ArchivoSedes::LeerRegistro(int pos){
    FILE* p = fopen(_nombre, "rb");
    Sede reg;
    if(p == NULL) return reg;

    fseek(p, sizeof(Sede) * pos, 0);
    fread(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return reg;
}

bool ArchivoSedes::Guardar(Sede reg){
    FILE* p = fopen(_nombre, "ab");
    if(p == NULL) return false;
    bool escribio = fwrite(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoSedes::Guardar(Sede reg, int pos){
    FILE* p = fopen(_nombre, "rb+");
    if(p == NULL) return false;
    fseek(p, sizeof(Sede) * pos, 0);
    bool escribio = fwrite(&reg, sizeof(Sede), 1, p);
    fclose(p);
    return escribio;
}
