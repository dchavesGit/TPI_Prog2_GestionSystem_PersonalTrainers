#include "ArchivoClientes.h"
#include <iostream>
using namespace std;

///GUARDA NOMBRE DEL ARCHIVO .DAT
ArchivoClientes::ArchivoClientes(const char* n) {
    strcpy(_nombre, n);
}

///CUENTA LOS REGISTROS
int ArchivoClientes::ContarRegistros() {
    FILE* p = fopen(_nombre, "rb");
    if (p == NULL) {
        return 0;   /// SI NO EXISTE EL ARCHIVO, DEVUELVE 0
    }
    fseek(p, 0, SEEK_END);
    int cantidad = ftell(p) / sizeof(Cliente);
    fclose(p);
    return cantidad;
}

///BUSCAR CLIENTE POR ID
int ArchivoClientes::BuscarID(int id, bool todos) {
    FILE* p = fopen(_nombre, "rb");
    if (p == NULL) return -1;

    Cliente reg;
    int i = 0;
    while (fread(&reg, sizeof(Cliente), 1, p)) {
        if (reg.getID() == id) {
            fclose(p);
            if (todos || reg.getActivo())  /// SI "todos" ES TRUE, IGNORA EL ESTADO ACTIVO
                return i;
            else
                return -1;
        }
        i++;
    }
    fclose(p);
    return -1;
}

///BUSCAR CLIENTE POR DNI
int ArchivoClientes::BuscarDni(int dni, bool todos) {
    FILE* p = fopen(_nombre, "rb");
    if (p == NULL) return -1;

    Cliente reg;
    int i = 0;
    while (fread(&reg, sizeof(Cliente), 1, p)) {
        if (reg.getDNI() == dni) {
            fclose(p);
            if (todos || reg.getActivo())
                return i;
            else
                return -1;
        }
        i++;
    }
    fclose(p);
    return -1;
}

///LEE UN REGISTRO SEGÚN SU POSICION
Cliente ArchivoClientes::LeerRegistro(int pos) {
    FILE* p = fopen(_nombre, "rb");
    Cliente reg;
    if (p == NULL) {
        return reg;
    }
    fseek(p, sizeof(Cliente) * pos, SEEK_SET);
    fread(&reg, sizeof(Cliente), 1, p);
    fclose(p);
    return reg;
}

///GUARDAR CLIENTE NUEVO AL FINAL DEL ARCHIVO
bool ArchivoClientes::Guardar(Cliente cliente) {
    /// CALCULAR ID AUTOMÁTICO
    FILE* p2 = fopen(_nombre, "rb");
    int idNuevo = 1;
    if (p2 != NULL) {
        fseek(p2, 0, SEEK_END);
        idNuevo = (ftell(p2) / sizeof(Cliente)) + 1;
        fclose(p2);
    }

    cliente.setID(idNuevo);

    FILE* p = fopen(_nombre, "ab");
    if (p == NULL) {
        return false;
    }

    bool escribio = fwrite(&cliente, sizeof(Cliente), 1, p);
    fclose(p);
    return escribio;
}

///GUARDAR CLIENTE
bool ArchivoClientes::Guardar(Cliente cliente, int pos) {
    FILE* p = fopen(_nombre, "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, sizeof(Cliente) * pos, SEEK_SET);
    bool escribio = fwrite(&cliente, sizeof(Cliente), 1, p);
    fclose(p);
    return escribio;
}
