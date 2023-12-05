#include "Bolsa.h"
#include <iostream>

Bolsa::Bolsa() {
	numeroDeProductos = 0;
	precioTotal = 0.00;
}

Bolsa::~Bolsa() {}

int Bolsa::getNumeroDeProductos() {
	return numeroDeProductos;
}

float Bolsa::getPreciototal() {
	return precioTotal;
}

std::vector<Productos> Bolsa::getProductos() {
	return productos;
}

void Bolsa::setNumeroDeProductos(int nuevoNumeroDeProductos) {
	numeroDeProductos = nuevoNumeroDeProductos;
}
void Bolsa::setPrecioTotal(float nuevoPrecioTotal) {
	precioTotal = nuevoPrecioTotal;
}

void Bolsa::setProductos(std::vector<Productos> nuevosProductos) {
	productos = nuevosProductos;
}

void Bolsa::vaciarBolsa() {
	numeroDeProductos = 0;
	precioTotal = 0.0;
	productos.clear();
}

void Bolsa::anadirProducto(Productos nuevoProducto) {
	numeroDeProductos++;
	precioTotal += nuevoProducto.getPrecioProducto();
	productos.push_back(nuevoProducto);
}

void Bolsa::eliminarProducto(int indice) {
	if (indice >= 1 && indice <= numeroDeProductos) {
		numeroDeProductos--;
		precioTotal -= productos[indice - 1].getPrecioProducto();
		productos.erase(productos.begin() + (indice - 1));
	}
	else {
		std::cout << "Indice de producto no valido.\n";
	}
}

void Bolsa::imprimirBolsa() {
	std::cout << "\n** Bolsa **\n";
	std::cout << "Numero de productos: " << numeroDeProductos << "\n";
	std::cout << "Precio Total: $" << precioTotal << "\n";
	std::cout << "Productos en la Bolsa:\n";

	for (int i = 0; i < numeroDeProductos; ++i) {
		std::cout << i + 1 << ". " << productos[i].getNombreProducto() << " - Cantidad: " << productos[i].getCantidadProducto() << " - Precio: $" << productos[i].getPrecioProducto() << "\n";
	}

	std::cout << "------------------------\n";
}