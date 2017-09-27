#include "producto.h"

void crear(string nombre, int cantidad, producto& p) {
    p.nombre = nombre;
    p.cantidad = cantidad;
}

string nombre(const producto& p) {
    return p.nombre;
}

int cantidad(const producto& p) {
    return p.cantidad;
}
