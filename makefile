CC = g++

AGRUPACION = agrupacion/
CONTACTO = contacto/
PRODUCTO = producto/

main: contacto.o producto.o main.cpp
			$(CC) main.cpp $(AGRUPACION)agrupacion.h contacto.o producto.o -I $(CONTACTO) \
			-I $(PRODUCTO) -I $(AGRUPACION) -o main

contacto.o: $(CONTACTO)contacto.h $(CONTACTO)contacto.cpp
			$(CC) -c $(CONTACTO)contacto.cpp

producto.o: $(PRODUCTO)producto.h  $(PRODUCTO)producto.cc
						$(CC) -c $(PRODUCTO)producto.cc

clean:
	rm *.o
	rm main
