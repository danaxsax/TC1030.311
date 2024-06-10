#include "Paquete.h"
#include "Sobre.h"
#include <iostream>

using namespace std;

int main() {
    try {
        // Creando objetos de cada tipo y probando la función calculaCosto
        Paquete paquete1("Juan Perez", "Calle Morelos 123", "Monterrey", "Nuevo Leon", "64000",
                         "Maria Lopez", "Avenida Constitución 742", "Monterrey", "Nuevo Leon", "64010",
                         50.0, 30, 20, 10, 5, 10);

        Sobre sobre1("Carlos Gonzalez", "Calle Zaragoza 456", "Monterrey", "Nuevo Leon", "64020",
                     "Ana Torres", "Boulevard Díaz Ordaz 789", "Monterrey", "Nuevo Leon", "64030",
                     20.0, 26, 31, 15.0);

        cout << "Costo del Paquete: " << paquete1.calculaCosto() << endl;
        cout << "Costo del Sobre: " << sobre1.calculaCosto() << endl;

        // Crear otro sobre sin cargo adicional
        Sobre sobre2("Carlos Gonzalez", "Calle Zaragoza 456", "Monterrey", "Nuevo Leon", "64020",
                     "Ana Torres", "Boulevard Díaz Ordaz 789", "Monterrey", "Nuevo Leon", "64030",
                     20.0, 24, 29, 15.0);

        cout << "Costo del Sobre sin cargo adicional: " << sobre2.calculaCosto() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
