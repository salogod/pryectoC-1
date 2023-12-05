#pragma once
#ifndef Cliente_h
#define Cliente_h

#include <string>
#include "Bolsa.h"

class Cliente {
private:
	std::string nombreCliente;
	std::string contrasenaCliente;
	int numeroCuentaCliente;
	float saldoCliente;
	Bolsa bolsita;
public:
	Cliente();
	Cliente(std::string nombreCliente, std::string contrasenaCliente, int numeroCuentaCliente, float saldoCliente, Bolsa bolsita);
	~Cliente();

	std::string getNombreCliente();
	std::string getContrasenaCliente();
	int getNumeroCuentaCliente();
	float getSaldoCliente();
	Bolsa getBolsita();

	void setNombreCliente(std::string);
	void setContrasenaCliente(std::string);
	void setNumeroCuentaCliente(int);
	void setSaldoCliente(float);

	void setBolsita(Bolsa);

	bool comprar(Bolsa&);
	void imprimirCompras();
};

#endif // !Cliente_h
