#include "Cliente.h"
#include <iostream>

// Constructor por defecto
Cliente::Cliente() {
    nombreCliente = "-";
    contrasenaCliente = "-";
    numeroCuentaCliente = 0;
    saldoCliente = 0.0;
}

// Constructor con parámetros
Cliente::Cliente(std::string nombre, std::string contrasena, int numeroCuenta, float saldo, Bolsa bolsita) {
    this->nombreCliente = nombre;
    this->contrasenaCliente = contrasena;
    this->numeroCuentaCliente = numeroCuenta;
    this->saldoCliente = saldo;
    this->bolsita = bolsita;  
}
Cliente::~Cliente() {}

std::string Cliente::getNombreCliente() {
    return nombreCliente;
}

std::string Cliente::getContrasenaCliente() {
    return contrasenaCliente;
}

int Cliente::getNumeroCuentaCliente() {
    return numeroCuentaCliente;
}

float Cliente::getSaldoCliente() {
    return saldoCliente;
}

Bolsa Cliente::getBolsita() {
    return bolsita;
}

void Cliente::setNombreCliente(std::string nuevoNombreCliente) {
    nombreCliente = nuevoNombreCliente;
}

void Cliente::setContrasenaCliente(std::string nuevaContrasenaCliente) {
    contrasenaCliente = nuevaContrasenaCliente;
}

void Cliente::setNumeroCuentaCliente(int nuevoNumeroCuentaCliente) {
    numeroCuentaCliente = nuevoNumeroCuentaCliente;
}

void Cliente::setSaldoCliente(float nuevoSaldoCliente) {
    saldoCliente = nuevoSaldoCliente;
}

void Cliente::setBolsita(Bolsa bolsita) {
    bolsita = bolsita;
}

bool Cliente::comprar(Bolsa& bolsa) {
    float costoTotal = bolsa.getPreciototal();

    if (saldoCliente >= costoTotal) {
        saldoCliente -= costoTotal;
        bolsita = bolsa;
        return true;
    } else {
        return false;
    }
}

void Cliente::imprimirCompras() {
    std::cout << "\n** Compras Realizadas **\n";
    std::cout << "Nombre del Cliente: " << nombreCliente << "\n";
    std::cout << "Productos Comprados: \n";
    bolsita.imprimirBolsa();
    std::cout << "-----------------------\n";
}