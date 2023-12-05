#include "Productos.h"

Productos::Productos() {
    nombreProducto = "-";
    cantidadProducto = 0;
    precioProducto = 0.00;
}

Productos::Productos(std::string nombreProducto, int cantidadProducto, float precioProducto) {
    this->nombreProducto = nombreProducto;
    this->cantidadProducto = cantidadProducto;
    this->precioProducto = precioProducto;
}

Productos::~Productos() {}

std::string Productos::getNombreProducto() {
    return nombreProducto;
}

int Productos::getCantidadProducto() {
    return cantidadProducto;
}

float Productos::getPrecioProducto() {
    return precioProducto;
}

void Productos::setNombreProducto(std::string nuevoNombreProducto) {
    nombreProducto = nuevoNombreProducto;
}

void Productos::setCantidadProducto(int nuevaCantidadProducto) {
    cantidadProducto = nuevaCantidadProducto;
}

void Productos::setPrecioProducto(float nuevoPrecioProducto) {
    precioProducto = nuevoPrecioProducto;
}