#include "Sobre.h"

Sobre::Sobre(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
             const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
             double costoEstandar, double largo, double ancho, double cargoAdicional)
    : Envio(nombreR, direccionR, ciudadR, estadoR, codigoPostalR, nombreD, direccionD, ciudadD, estadoD, codigoPostalD, costoEstandar),
      largo(largo), ancho(ancho), cargoAdicional(cargoAdicional) {}

double Sobre::calculaCosto() const {
    if (largo > 25 || ancho > 30) {
        return Envio::calculaCosto() + cargoAdicional;
    }
    return Envio::calculaCosto();
}
