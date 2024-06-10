#include "Paquete.h"
#include <stdexcept>

Paquete::Paquete(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
                 const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
                 double costoEstandar, double largo, double ancho, double profundidad, double peso, double costoPorKg)
    : Envio(nombreR, direccionR, ciudadR, estadoR, codigoPostalR, nombreD, direccionD, ciudadD, estadoD, codigoPostalD, costoEstandar),
      largo(largo), ancho(ancho), profundidad(profundidad), peso(peso), costoPorKg(costoPorKg) {
    if (peso <= 0 || costoPorKg <= 0) {
        throw invalid_argument("Peso y costo por kilogramo deben ser positivos.");
    }
}

double Paquete::calculaCosto() const {
    return Envio::calculaCosto() + (peso * costoPorKg);
}
