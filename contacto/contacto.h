#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>

using namespace std;


struct contacto;
void crear(string nombre, string direccion, int telefono, contacto& c);
string nombre(const contacto& c);
string direccion(const contacto& c);
int telefono(const contacto& c);

struct contacto{

	friend void crear(string nombre, string direccion, int telefono, contacto& c);
	friend string nombre(const contacto& c);
	friend string direccion(const contacto& c);
	friend int telefono(const contacto& c);
private:
	string nombre;
	string direccion;
	int telefono;
};

#endif
