#include "ArchivoClientes.h"

ArchivoClientes::ArchivoClientes(const char* nombre){
    strcpy(_nombre, nombre);
}

int ArchivoClientes::ContarRegistros(){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;
    fseek(p, 0, 2);
    int cantidad = ftell(p) / sizeof(Cliente);
    fclose(p);
    return cantidad;
}

int ArchivoClientes::BuscarID(int id, bool todos){
    FILE* p = fopen(_nombre, "rb");
    if(p == NULL) return -1;

    Cliente reg;
    int i = 0;
    while(fread(&reg, sizeof(Cliente), 1, p)){
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

Cliente ArchivoClientes::LeerRegistro(int pos){
    FILE* p = fopen(_nombre, "rb");
    Cliente reg;
    if(p == NULL) return reg;

    fseek(p, sizeof(Cliente) * pos, 0);
    fread(&reg, sizeof(Cliente), 1, p);
    fclose(p);
    return reg;
}

bool ArchivoClientes::Guardar(Cliente reg){
    FILE* p = fopen(_nombre, "ab");
    if(p == NULL) return false;
    bool escribio = fwrite(&reg, sizeof(Cliente), 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoClientes::Guardar(Cliente reg, int pos){
    FILE* p = fopen(_nombre, "rb+");
    if(p == NULL) return false;
    fseek(p, sizeof(Cliente) * pos, 0);
    bool escribio = fwrite(&reg, sizeof(Cliente), 1, p);
    fclose(p);
    return escribio;
}
