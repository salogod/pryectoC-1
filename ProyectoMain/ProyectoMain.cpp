#include <iostream>
#include "Cliente.h"
#include "Productos.h"
#include "Bolsa.h"

int main() {
	Cliente Cliente1("Rodrigo", "1234", 28120, 1000.00, Bolsa());

    Productos producto1("Pera", 20, 45);
    Productos producto2("Manzana", 25, 50);
    Productos producto3("Platano", 15, 40);
    Productos producto4("Fresas", 30, 70);
    Productos producto5("Uvas", 35, 50);

    Bolsa bolsaCliente1;
    Bolsa bolsaCliente2;

    std::cout << "Productos disponibles:\n";
    std::cout << "1. " << producto1.getNombreProducto() << " - Cantidad: " << producto1.getCantidadProducto() << " - Precio: $" << producto1.getPrecioProducto() << "\n";
    std::cout << "2. " << producto2.getNombreProducto() << " - Cantidad: " << producto2.getCantidadProducto() << " - Precio: $" << producto2.getPrecioProducto() << "\n";
    std::cout << "3. " << producto3.getNombreProducto() << " - Cantidad: " << producto3.getCantidadProducto() << " - Precio: $" << producto3.getPrecioProducto() << "\n";
    std::cout << "4. " << producto4.getNombreProducto() << " - Cantidad: " << producto4.getCantidadProducto() << " - Precio: $" << producto4.getPrecioProducto() << "\n";
    std::cout << "5. " << producto5.getNombreProducto() << " - Cantidad: " << producto5.getCantidadProducto() << " - Precio: $" << producto5.getPrecioProducto() << "\n";

    int opcion;

    do {
        std::cout << "\n** Menu Principal **\n";
        std::cout << "Usuario: " << Cliente1.getNombreCliente() << " - Saldo: $" << Cliente1.getSaldoCliente() << "\n";
        std::cout << "1. Añadir producto a la Bolsa\n";
        std::cout << "2. Eliminar producto de la bolsa\n";
        std::cout << "3. Vaciar Bolsa\n";
        std::cout << "4. Comprar\n";
        std::cout << "5. Ver compras\n";
        std::cout << "0. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;
        
        switch (opcion) {
        case 1: {
            // Añadir producto al carrito
            int productoSeleccionado;
            std::cout << "\nSeleccione un producto para añadir al carrito (1 - 5): ";
            std::cin >> productoSeleccionado;

            switch (productoSeleccionado) {
            case 1:
                bolsaCliente1.anadirProducto(producto1);
                break;
            case 2:
                bolsaCliente1.anadirProducto(producto2);
                break;
            case 3:
                bolsaCliente1.anadirProducto(producto3);
                break;
            case 4:
                bolsaCliente1.anadirProducto(producto4);
                break;
            case 5:
                bolsaCliente1.anadirProducto(producto5);
                break;
            default:
                std::cout << "Producto no válido.\n";
                break;
            }
            break;
        }
        case 2: {
            // Eliminar producto del carrito
            bolsaCliente1.imprimirBolsa();
            int productoEliminar;
            std::cout << "\nSeleccione un producto para eliminar del carrito (1 - " << bolsaCliente1.getNumeroDeProductos() << "): ";
            std::cin >> productoEliminar;
            bolsaCliente1.eliminarProducto(productoEliminar);
            break;
        }
        case 3:
            // Vaciar carrito
            bolsaCliente1.vaciarBolsa();
            break;
        case 4:
            // Comprar
            if (Cliente1.comprar(bolsaCliente1)) {
                std::cout << "Compra exitosa. Nuevo saldo: $" << Cliente1.getSaldoCliente() << "\n";
                Cliente1.imprimirCompras();
            }
            else {
                std::cout << "Compra fallida. Saldo insuficiente.\n";
            }
            break;
        case 5:
            // Ver compras
            Cliente1.imprimirCompras();
            break;
        case 0:
            std::cout << "Saliendo del programa.\n";
            break;
        default:
            std::cout << "Opción no válida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 0);

    return 0;
}
        
    

