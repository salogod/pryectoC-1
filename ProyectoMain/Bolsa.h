#pragma once
#ifndef Bolsa_h
#define Bolsa_h

#include "Productos.h"
#include <vector>

class Bolsa {
private:
	int numeroDeProductos;
	float precioTotal;
	std::vector<Productos>productos;

public:
	Bolsa();
	~Bolsa();

	int getNumeroDeProductos();
	float getPreciototal();
	std::vector<Productos>getProductos();

	void setNumeroDeProductos(int);
	void setPrecioTotal(float);
	void setProductos(std::vector<Productos>);
	void vaciarBolsa();

	void anadirProducto(Productos);
	void eliminarProducto(int);
	void imprimirBolsa();
};
#endif // !Bolsa_h
