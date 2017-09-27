#include "agrupacion/agrupacion.h"
#include "producto/producto.h"
#include "contacto/contacto.h"
//#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	agrupacion<producto> c;
	producto A;
	producto B;
	producto C;
	producto D;
	producto p;
	crear ("Alcachofas",58,A);
	crear ("Zanahorias",6,B);
	crear ("Puerros",10,C);
	crear ("Manzanas",58,D);
	iniciar (c);
	iniciarIterador(c);
	anyadir (c,A);
	anyadir (c,B);
	anyadir (c,C);
	anyadir (c,D);
	borrarUltimo(c);
	siguiente(c,p);
	cout << nombre(p) << cantidad(p) << endl;
	siguiente(c,p);
	cout << nombre(p) << endl;
	siguiente(c,p);
	cout << nombre(p) << endl;
	siguiente(c,p);
	cout << nombre(p) << endl;
//Ahora con contactos
	agrupacion<contacto> d;
	contacto E;
	contacto F;
	contacto G;
	contacto P;
	crear ("Pablo","Actur",112,E);
	crear ("Naval","J",911,F);
	crear ("Alonso","Calahorra",1998,G);
	iniciar (d);
	iniciarIterador(d);
	anyadir (d,E);
	anyadir (d,F);
	anyadir (d,G);
//	borrarUltimo(d);
	siguiente(d,P);
	cout << nombre(P) << direccion(P) << telefono(P) << endl;
	siguiente(d,P);
	cout << nombre(P) << direccion(P) << telefono(P) << endl;
	siguiente(d,P);
	cout << nombre(P) << direccion(P) << telefono(P) << endl;
}
