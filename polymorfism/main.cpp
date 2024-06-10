#include "Paquete.h"
#include "Sobre.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Envio*> envios;

    envios.push_back(new Paquete("Juan Perez", "Calle Morelos 123", "Monterrey", "Nuevo Leon", "64000",
                                 "Maria Lopez", "Avenida Constitución 742", "Monterrey", "Nuevo Leon", "64010",
                                 50.0, 30, 20, 10, 5, 10));

    envios.push_back(new Sobre("Carlos Gonzalez", "Calle Zaragoza 456", "Monterrey", "Nuevo Leon", "64020",
                               "Ana Torres", "Boulevard Díaz Ordaz 789", "Monterrey", "Nuevo Leon", "64030",
                               20.0, 26, 31, 15.0));

    envios.push_back(new Sobre("Carlos Gonzalez", "Calle Zaragoza 456", "Monterrey", "Nuevo Leon", "64020",
                               "Ana Torres", "Boulevard Díaz Ordaz 789", "Monterrey", "Nuevo Leon", "64030",
                               20.0, 24, 29, 15.0));

    double costoTotal = 0.0;

    for (Envio* envio : envios) {
        cout << "Remitente: " << envio->getNombreR() << ", " << envio->getDireccionR() << ", " << envio->getCiudadR() << ", " << envio->getEstadoR() << ", " << envio->getCodigoPostalR() << endl;
        cout << "Destinatario: " << envio->getNombreD() << ", " << envio->getDireccionD() << ", " << envio->getCiudadD() << ", " << envio->getEstadoD() << ", " << envio->getCodigoPostalD() << endl;
        cout << "Costo: " << envio->calculaCosto() << endl;
        costoTotal += envio->calculaCosto();
    }

    cout << "Costo total de envío: " << costoTotal << endl;

    // Liberar memoria
    for (Envio* envio : envios) {
        delete envio;
    }

    return 0;
}
