#include "contacto.h"

void crear(string nombre, string direccion, int telefono, contacto& c) {
    c.nombre = nombre;
    c.direccion = direccion;
    c.telefono = telefono;
}

string nombre(const contacto& c) {
    return c.nombre;
}

string direccion(const contacto& c) {
    return c.direccion;
}

int telefono(const contacto& c) {
    return c.telefono;
}
