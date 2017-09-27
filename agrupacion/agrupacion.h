#ifndef AGRUPACION_H
#define AGRUPACION_H

const int MAX = 40;

template<typename T> struct agrupacion;
//definir operaciones de agrupacion
template<typename T> void iniciar (agrupacion<T>& c);
template<typename T> bool anyadir (agrupacion<T>& c, const T& p);
template<typename T> bool borrarUltimo (agrupacion<T>& c);
//ITERADORES
template<typename T> void iniciarIterador (agrupacion<T>& c);
template<typename T> bool existeSiguiente (const agrupacion<T>& c);
template<typename T> bool siguiente (agrupacion<T>& c, T& p);

template<typename T>
struct agrupacion{
  friend void iniciar<T> (agrupacion<T>& c);
  friend bool anyadir<T> (agrupacion<T>& c, const T& p);
  friend bool borrarUltimo<T> (agrupacion<T>& c);
	friend void iniciarIterador<T> (agrupacion<T>& c);
	friend bool existeSiguiente<T> (const agrupacion<T>& c);
	friend bool siguiente<T> (agrupacion<T>& c, T& p);

  private:
     //campos
     T datos[MAX];
     int total;
	 int iterador;

};

template<typename T>
void iniciar (agrupacion<T>& c) {
    c.total = 0;
}

template<typename T>
bool anyadir (agrupacion<T>& c, const T& p) {
    bool sePuede = c.total < MAX;
    if (sePuede) {
        c.datos[c.total] = p;
        c.total++;
     }
     return sePuede;
}

template<typename T>
bool borrarUltimo (agrupacion<T>& c) {
    bool sePuede = c.total > 0;
    if (sePuede) c.total--;
    return sePuede;
}

template<typename T>
void iniciarIterador (agrupacion<T>& c){
	 c.iterador=0;
 }
 template<typename T>
bool existeSiguiente (const agrupacion<T>& c){
	 return c.iterador<c.total;
 }
 template<typename T>
bool siguiente (agrupacion<T>& c, T& p){
	bool existe =existeSiguiente(c);
		if (existe){
			p=c.datos[c.iterador];
			c.iterador++;
		}
		return existe;
}

#endif //fin de agrupacion.h
