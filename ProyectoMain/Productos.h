#pragma once
#ifndef Productos_h
#define Productos_h

#include <string>

class Productos {
private:
	std::string nombreProducto;
	int cantidadProducto;
	float precioProducto;

public:
	Productos();
	Productos(std::string nombreProducto, int cantidadProducto, float precioProducto);
	~Productos();

	std::string getNombreProducto();
	int getCantidadProducto();
	float getPrecioProducto();

	void setNombreProducto(std::string);
	void setCantidadProducto(int);
	void setPrecioProducto(float);
};

#endif // !Productos_h
